/*
** Automatically generated from `prog_io_util.m'
** by the Mercury compiler,
** version 2015-10-27
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


#include "check_hlds.mih"
#include "hlds.mih"
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
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 1106 "prog_io_util.m"
struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s {
#line 1109 "prog_io_util.m"
  MR_bool parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded;
#line 1109 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23;
#line 1109 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__Functors_11;
#line 1115 "prog_io_util.m"
  jmp_buf parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__commit_0;
#line 1115 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13;
#line 1115 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F1_14;
#line 1115 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F2_15;
#line 1115 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__ConsId_17;
#line 1115 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20;
#line 1115 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_24_24;
#line 1106 "prog_io_util.m"
};


#line 129 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 132 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_0;

#line 135 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_1;

#line 138 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_value_ordered_allow_constrained_inst_var_0[2];

#line 141 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_name_ordered_allow_constrained_inst_var_0[2];

#line 144 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_allow_constrained_inst_var_0[2];

#line 147 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_decl_attribute_0_0[1];

#line 150 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_0;

#line 153 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0;

#line 156 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0;

#line 159 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_decl_attribute_0_1[2];

#line 162 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_1;

#line 165 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0;

#line 168 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_decl_attribute_0_2[2];

#line 171 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_2;

#line 174 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_3;

#line 177 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_0[1];

#line 180 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_1[1];

#line 183 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_2[1];

#line 186 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_3[1];

#line 189 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_decl_attribute_0[4];

#line 192 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_decl_attribute_0[4];

#line 195 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_decl_attribute_0[4];

#line 198 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__pair__ti_pair_2parse_tree__prog_io_util__type_ctor_info_decl_attribute_0term__type_ctor_info_context_0;

#line 201 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1pair__ti_pair_2parse_tree__prog_io_util__type_ctor_info_decl_attribute_0term__type_ctor_info_context_0;

#line 204 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_0[2];

#line 207 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_0;

#line 210 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_1[2];

#line 213 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_1;

#line 216 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_2[1];

#line 219 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_2;

#line 222 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_3[1];

#line 225 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_3;

#line 228 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_4[1];

#line 231 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_4;

#line 234 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_0[1];

#line 237 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_1[1];

#line 240 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_2[1];

#line 243 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_3[2];

#line 246 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_known_compound_inst_kind_1[4];

#line 249 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_compound_inst_kind_1[5];

#line 252 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_compound_inst_kind_1[5];

#line 255 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__list__pti_list_1__pseudo_1;

#line 258 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_0[1];

#line 261 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_0;

#line 264 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_1[2];

#line 267 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_1;

#line 270 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_2[1];

#line 273 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_2;

#line 276 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_3[2];

#line 279 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_3;

#line 282 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_4[1];

#line 285 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_4;

#line 288 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_0[1];

#line 291 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_1[1];

#line 294 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_2[1];

#line 297 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_3[2];

#line 300 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_known_compound_type_kind_1[4];

#line 303 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_compound_type_kind_1[5];

#line 306 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_compound_type_kind_1[5];

#line 309 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_inst_kind_1_0[1];

#line 312 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_0;

#line 315 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_known_compound_inst_kind_1__pseudo_1;

#line 318 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_inst_kind_1_1[1];

#line 321 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_1;

#line 324 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_2;

#line 327 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_0[1];

#line 330 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_1[1];

#line 333 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_2[1];

#line 336 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_known_inst_kind_1[3];

#line 339 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_inst_kind_1[3];

#line 342 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_inst_kind_1[3];

#line 345 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_type_kind_1_0[1];

#line 348 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_0;

#line 351 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_known_compound_type_kind_1__pseudo_1;

#line 354 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_type_kind_1_1[1];

#line 357 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_1;

#line 360 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_2;

#line 363 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_type_kind_1_0[1];

#line 366 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_type_kind_1_1[1];

#line 369 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_type_kind_1_2[1];

#line 372 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_known_type_kind_1[3];

#line 375 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_type_kind_1[3];

#line 378 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_type_kind_1[3];

#line 381 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_term_1__pseudo_1;

#line 384 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1;

#line 387 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__maybe_error__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1;

#line 390 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0;

#line 393 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__maybe_error__ti_maybe2_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0;

#line 396 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__maybe__pti_maybe_1__pseudo_1;

#line 399 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1;

#line 402 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__maybe_error__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1;

#line 405 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_var_1__pseudo_1;

#line 408 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_0[1];

#line 411 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_0;

#line 414 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_1[1];

#line 417 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_1;

#line 420 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_2[1];

#line 423 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_2;

#line 426 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_3[1];

#line 429 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_3;

#line 432 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_0[1];

#line 435 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_1[1];

#line 438 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_2[1];

#line 441 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_3[1];

#line 444 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_ordinary_state_dot_colon_var_1[4];

#line 447 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_dot_colon_var_1[4];

#line 450 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_dot_colon_var_1[4];

#line 453 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_0[1];

#line 456 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_0;

#line 459 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_1[1];

#line 462 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_1;

#line 465 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_0[1];

#line 468 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_1[1];

#line 471 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_ordinary_state_var_1[2];

#line 474 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_var_1[2];

#line 477 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_var_1[2];

#line 480 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__parse_tree__maybe_error__pti_maybe1_1__pseudo_1;

#line 483 "parse_tree.prog_io_util.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_parse_tree__maybe_error__pti_maybe1_1__pseudo_1;

#line 486 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_0;

#line 489 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_1;

#line 492 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_value_ordered_quantifier_type_0[2];

#line 495 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_name_ordered_quantifier_type_0[2];

#line 498 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_quantifier_type_0[2];

#line 501 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 504 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 507 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 510 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 513 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____allow_constrained_inst_var_0_0_10001(
#line 516 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 518 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 521 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____allow_constrained_inst_var_0_0_10001(
#line 524 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 526 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 528 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 531 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____decl_attribute_0_0_10001(
#line 534 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 536 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 539 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____decl_attribute_0_0_10001(
#line 542 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 544 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 546 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 549 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____decl_attrs_0_0_10001(
#line 552 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 554 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 557 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____decl_attrs_0_0_10001(
#line 560 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 562 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 564 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 567 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_inst_kind_1_0_10001(
#line 570 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 572 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 574 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 577 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_inst_kind_1_0_10001(
#line 580 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 582 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 584 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 586 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 589 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_type_kind_1_0_10001(
#line 592 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 594 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 596 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 599 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_type_kind_1_0_10001(
#line 602 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 604 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 606 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 608 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 611 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_inst_kind_1_0_10001(
#line 614 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 616 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 618 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 621 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_inst_kind_1_0_10001(
#line 624 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 626 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 628 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 630 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 633 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_type_kind_1_0_10001(
#line 636 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 638 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 640 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 643 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_type_kind_1_0_10001(
#line 646 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 648 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 650 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 652 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 655 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_1_0_10001(
#line 658 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 660 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 662 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 665 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_1_0_10001(
#line 668 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 670 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 672 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 674 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 677 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_0_0_10001(
#line 680 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 682 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 685 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_0_0_10001(
#line 688 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 690 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 692 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 695 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_pred_or_func_1_0_10001(
#line 698 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 700 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 702 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 705 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_pred_or_func_1_0_10001(
#line 708 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 710 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 712 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 714 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 717 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0_10001(
#line 720 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 722 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 724 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 727 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0_10001(
#line 730 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 732 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 734 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 736 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 739 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_var_1_0_10001(
#line 742 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 744 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 746 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 749 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_var_1_0_10001(
#line 752 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 754 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 756 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 758 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 761 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____parser_1_0_10001(
#line 764 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 766 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 768 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 771 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____parser_1_0_10001(
#line 774 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 776 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 778 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 780 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 783 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____quantifier_type_0_0_10001(
#line 786 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 788 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 791 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____quantifier_type_0_0_10001(
#line 794 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 796 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 798 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 801 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2pvar_0_0_10001(
#line 804 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 806 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 809 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____var2pvar_0_0_10001(
#line 812 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 814 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 816 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 819 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2tvar_0_0_10001(
#line 822 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 824 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 827 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____var2tvar_0_0_10001(
#line 830 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 832 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 834 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 1196 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(
#line 1196 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Op_5,
#line 1196 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_6,
#line 1196 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__List0_7,
#line 1196 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__OneOrMore_8);

#line 889 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
#line 889 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Name_4,
#line 889 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Args_5,
#line 889 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__KnownInst_6);

#line 458 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_116_121_112_101_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
#line 458 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Name_4,
#line 458 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Args_5,
#line 458 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__KnownType_6);

#line 1319 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_var_1_0(
#line 1319 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_14,
#line 1319 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 1319 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 1319 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3);

#line 1319 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_var_1_0(
#line 1319 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
#line 1319 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 1319 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2);

#line 1380 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0(
#line 1380 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_38,
#line 1380 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 1380 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 1380 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3);

#line 1380 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0(
#line 1380 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_13,
#line 1380 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 1380 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2);

#line 443 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_type_kind_1_0(
#line 443 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_18,
#line 443 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 443 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 443 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3);

#line 443 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_type_kind_1_0(
#line 443 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_11,
#line 443 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 443 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2);

#line 871 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_inst_kind_1_0(
#line 871 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_18,
#line 871 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 871 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 871 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3);

#line 871 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_inst_kind_1_0(
#line 871 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_11,
#line 871 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 871 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2);

#line 436 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_type_kind_1_0(
#line 436 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_78,
#line 436 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 436 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 436 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3);

#line 436 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_type_kind_1_0(
#line 436 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_19,
#line 436 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 436 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2);

#line 864 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_inst_kind_1_0(
#line 864 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_78,
#line 864 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 864 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 864 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3);

#line 864 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_inst_kind_1_0(
#line 864 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_19,
#line 864 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 864 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2);

#line 1509 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(
#line 1509 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_43,
#line 1509 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_6,
#line 1509 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_7,
#line 1509 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Expected_8,
#line 1509 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_9,
#line 1509 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Spec_10);

#line 1499 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__generate_repeated_state_var_msg_4_p_0(
#line 1499 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_33,
#line 1499 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_5,
#line 1499 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 1499 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_7,
#line 1499 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Spec_8);

#line 1489 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(
#line 1489 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_33,
#line 1489 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_5,
#line 1489 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 1489 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_7,
#line 1489 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Spec_8);

#line 1216 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__map_parser_one_or_more_4_p_0(
#line 1216 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_29,
#line 1216 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Parser_5,
#line 1216 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Head_6,
#line 1216 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Tail_7,
#line 1216 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_8);

#line 1130 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_bound_inst_3_p_0(
#line 1130 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_4,
#line 1130 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__InstTerm_5,
#line 1130 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__BoundInst_6);

#line 1122 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_bound_inst_list_3_p_0(
#line 1122 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
#line 1122 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 1122 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3);

#line 1115 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_1(
#line 1115 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg);

#line 1115 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_2(
#line 1115 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg);

#line 1115 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_3(
#line 1115 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg);

#line 1106 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(
#line 1106 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
#line 1106 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Disj_6,
#line 1106 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Uniqueness_7,
#line 1106 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Inst_8);

#line 1013 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_higher_order_inst_4_p_0(
#line 1013 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
#line 1013 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__BeforeIsTerm_6,
#line 1013 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__DetTerm_7,
#line 1013 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Inst_8);

#line 699 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_higher_order_mode_4_p_0(
#line 699 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
#line 699 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__BeforeIsTerm_6,
#line 699 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__DetTerm_7,
#line 699 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Mode_8);

#line 639 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_qualified_term_3_p_0(
#line 639 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 639 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Args_2,
#line 639 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Term_3);

#line 637 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_type_list_2_p_0_1(
#line 637 "prog_io_util.m"
  MR_Box parse_tree__prog_io_util__closure_arg,
#line 637 "prog_io_util.m"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 637 "prog_io_util.m"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2);

#line 634 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_type_list_2_p_0(
#line 634 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Types_3,
#line 634 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Terms_4);

#line 561 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_types_acc_7_p_0(
#line 561 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 561 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_2,
#line 561 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_3,
#line 561 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_0_4,
#line 561 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_5,
#line 561 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__STATE_VARIABLE_Specs_0_6,
#line 561 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__STATE_VARIABLE_Specs_7);

#line 533 "prog_io_util.m"
static MR_Word MR_CALL 
parse_tree__prog_io_util__ill_formed_type_result_3_f_0(
#line 533 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_5,
#line 533 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 533 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_7);

#line 353 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_compound_type_5_p_0(
#line 353 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_6,
#line 353 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_7,
#line 353 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_8,
#line 353 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__CompoundTypeKind_9,
#line 353 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_10);


static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_1[26][2];

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_2[10][3];

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_3[33][1];

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_4[1][4];

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_7[1][5];


#line 1096 "prog_io_util.m"
/* sealed */ struct parse_tree__prog_io_util__vector_common_type_5_0_s {
#line 1096 "prog_io_util.m"
  const MR_String parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_0;
#line 1096 "prog_io_util.m"
  const MR_Integer parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_1;
#line 1096 "prog_io_util.m"
  const MR_Word parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_2;
#line 1096 "prog_io_util.m"
};

static /* final */ const struct parse_tree__prog_io_util__vector_common_type_5_0_s parse_tree__prog_io_util_vector_common_5[32];

#line 1537 "prog_io_util.m"
/* sealed */ struct parse_tree__prog_io_util__vector_common_type_6_0_s {
#line 1537 "prog_io_util.m"
  const MR_String parse_tree__prog_io_util__vector_common_type_6_0__vct_6_f_0;
#line 1537 "prog_io_util.m"
  const MR_Integer parse_tree__prog_io_util__vector_common_type_6_0__vct_6_f_1;
#line 1537 "prog_io_util.m"
};

static /* final */ const struct parse_tree__prog_io_util__vector_common_type_6_0_s parse_tree__prog_io_util_vector_common_6[39];



static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_1[26][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
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
    ((MR_Box) (&parse_tree__prog_io_util_scalar_common_1[0]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not allowed here."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[8])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: ill-formed type"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Repeated variable"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Repeated state variable"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Expected"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not"))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_io_util_scalar_common_1[5]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_io_util_scalar_common_1[2])),
    ((MR_Box) (&parse_tree__prog_io_util_scalar_common_1[6]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_io_util_scalar_common_1[2])),
    ((MR_Box) (&parse_tree__prog_io_util_scalar_common_1[7]))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_io_util_scalar_common_7[0])),
    ((MR_Box) (parse_tree__prog_io_util__unparse_type_list_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 4)),
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
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_3[33][1] = {
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
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "."))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_3[13])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_3[15])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_3[17])))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_3[19])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[21])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[5])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[6])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[7])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[23])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[8])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[24])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[9])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[25])))
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

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_7[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_io_util__term__pti_term_1__plain_term__type_ctor_info_generic_0))
  },
};


static /* final */ const struct parse_tree__prog_io_util__vector_common_type_5_0_s parse_tree__prog_io_util_vector_common_5[32] = {
  /* row 0 */
  {
    (MR_String) "semidet",
    (MR_Integer) -1,
    (MR_Integer) 1
  },
  /* row 1 */
  {
    (MR_String) "erroneous",
    (MR_Integer) -1,
    (MR_Integer) 6
  },
  /* row 2 */
  {
    (MR_String) "multi",
    (MR_Integer) -1,
    (MR_Integer) 2
  },
  /* row 3 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 4 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 5 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 6 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 7 */
  {
    (MR_String) "failure",
    (MR_Integer) -1,
    (MR_Integer) 7
  },
  /* row 8 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 9 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 10 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 11 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 12 */
  {
    (MR_String) "cc_nondet",
    (MR_Integer) 2,
    (MR_Integer) 5
  },
  /* row 13 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 14 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 15 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 16 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 17 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 18 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 19 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 20 */
  {
    (MR_String) "multidet",
    (MR_Integer) -1,
    (MR_Integer) 2
  },
  /* row 21 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 22 */
  {
    (MR_String) "det",
    (MR_Integer) -1,
    (MR_Integer) 0
  },
  /* row 23 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 24 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 25 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 26 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 27 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 28 */
  {
    (MR_String) "nondet",
    (MR_Integer) -1,
    (MR_Integer) 3
  },
  /* row 29 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 30 */
  {
    (MR_String) "cc_multi",
    (MR_Integer) -1,
    (MR_Integer) 4
  },
  /* row 31 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
};

static /* final */ const struct parse_tree__prog_io_util__vector_common_type_6_0_s parse_tree__prog_io_util_vector_common_6[39] = {
  /* row 0 */
  {
    (MR_String) "<=",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "=>",
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "all",
    (MR_Integer) 2
  },
  /* row 3 */
  {
    (MR_String) "impure",
    (MR_Integer) 3
  },
  /* row 4 */
  {
    (MR_String) "semipure",
    (MR_Integer) 4
  },
  /* row 5 */
  {
    (MR_String) "solver",
    (MR_Integer) 5
  },
  /* row 6 */
  {
    (MR_String) "some",
    (MR_Integer) 6
  },
  /* row 7 */
  {
    (MR_String) "",
    (MR_Integer) -1
  },
  /* row 8 */
  {
    (MR_String) "string",
    (MR_Integer) -1
  },
  /* row 9 */
  {
    (MR_String) "semipure",
    (MR_Integer) -1
  },
  /* row 10 */
  {
    (MR_String) "float",
    (MR_Integer) -1
  },
  /* row 11 */
  {
    (MR_String) "character",
    (MR_Integer) 5
  },
  /* row 12 */
  {
    (MR_String) "impure",
    (MR_Integer) -1
  },
  /* row 13 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 14 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 15 */
  {
    (MR_String) "int",
    (MR_Integer) -1
  },
  /* row 16 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 17 */
  {
    (MR_String) "{}",
    (MR_Integer) -1
  },
  /* row 18 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 19 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 20 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 21 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 22 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 23 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 24 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 25 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 26 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 27 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 28 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 29 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 30 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 31 */
  {
    (MR_String) "pure",
    (MR_Integer) -1
  },
  /* row 32 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 33 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 34 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 35 */
  {
    (MR_String) "=",
    (MR_Integer) -1
  },
  /* row 36 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 37 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 38 */
  {
    (MR_String) "pred",
    (MR_Integer) -1
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1995 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2003 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_0 = {
  (MR_String) "allow_constrained_inst_var",
  (MR_Integer) 0
};

#line 2009 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_1 = {
  (MR_String) "no_allow_constrained_inst_var",
  (MR_Integer) 1
};

#line 2015 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_value_ordered_allow_constrained_inst_var_0[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_1
};

#line 2021 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_name_ordered_allow_constrained_inst_var_0[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_1
};

#line 2027 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_allow_constrained_inst_var_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2033 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_allow_constrained_inst_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_io_util____Unify____allow_constrained_inst_var_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____allow_constrained_inst_var_0_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "allow_constrained_inst_var",
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__enum_name_ordered_allow_constrained_inst_var_0 },
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__enum_value_ordered_allow_constrained_inst_var_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_allow_constrained_inst_var_0
};

#line 2050 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_decl_attribute_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0
};

#line 2055 "parse_tree.prog_io_util.c"
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

#line 2070 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2078 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 2086 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_decl_attribute_0_1[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_quantifier_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0
};

#line 2092 "parse_tree.prog_io_util.c"
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

#line 2107 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2115 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_decl_attribute_0_2[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_quantifier_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0
};

#line 2121 "parse_tree.prog_io_util.c"
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

#line 2136 "parse_tree.prog_io_util.c"
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

#line 2151 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_3
};

#line 2156 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_0
};

#line 2161 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_2[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_1
};

#line 2166 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_3[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_2
};

#line 2171 "parse_tree.prog_io_util.c"
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

#line 2195 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_decl_attribute_0[4] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_2,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_1,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_3
};

#line 2203 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_decl_attribute_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3
};

#line 2211 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_decl_attribute_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_util____Unify____decl_attribute_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____decl_attribute_0_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "decl_attribute",
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_decl_attribute_0 },
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_decl_attribute_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_decl_attribute_0
};

#line 2228 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__pair__ti_pair_2parse_tree__prog_io_util__type_ctor_info_decl_attribute_0term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_decl_attribute_0,
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 2237 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1pair__ti_pair_2parse_tree__prog_io_util__type_ctor_info_decl_attribute_0term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__pair__ti_pair_2parse_tree__prog_io_util__type_ctor_info_decl_attribute_0term__type_ctor_info_context_0
  }
};

#line 2245 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_decl_attrs_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_io_util____Unify____decl_attrs_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____decl_attrs_0_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "decl_attrs",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__ti_list_1pair__ti_pair_2parse_tree__prog_io_util__type_ctor_info_decl_attribute_0term__type_ctor_info_context_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2262 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2268 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_0 = {
  (MR_String) "kcik_is",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_0,
  NULL,
  NULL,
  NULL
};

#line 2283 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2289 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_1 = {
  (MR_String) "kcik_constrained",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_1,
  NULL,
  NULL,
  NULL
};

#line 2304 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_2[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2309 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_2 = {
  (MR_String) "kcik_bound",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_2,
  NULL,
  NULL,
  NULL
};

#line 2324 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_3[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2329 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_3 = {
  (MR_String) "kcik_unique",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_3,
  NULL,
  NULL,
  NULL
};

#line 2344 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_4[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2349 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_4 = {
  (MR_String) "kcik_mostly_unique",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_4,
  NULL,
  NULL,
  NULL
};

#line 2364 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_0
};

#line 2369 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_1
};

#line 2374 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_2[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_2
};

#line 2379 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_3[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_3,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_4
};

#line 2385 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_known_compound_inst_kind_1[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_3
  }
};

#line 2409 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_compound_inst_kind_1[5] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_2,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_1,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_4,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_3
};

#line 2418 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_compound_inst_kind_1[5] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 3
};

#line 2427 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_known_compound_inst_kind_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_util____Unify____known_compound_inst_kind_1_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____known_compound_inst_kind_1_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "known_compound_inst_kind",
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_compound_inst_kind_1 },
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_known_compound_inst_kind_1 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_compound_inst_kind_1
};

#line 2444 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2452 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__pti_list_1__pseudo_1
};

#line 2457 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_0 = {
  (MR_String) "kctk_tuple",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_0,
  NULL,
  NULL,
  NULL
};

#line 2472 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2478 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_1 = {
  (MR_String) "kctk_pure_func",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_1,
  NULL,
  NULL,
  NULL
};

#line 2493 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__pti_list_1__pseudo_1
};

#line 2498 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_2 = {
  (MR_String) "kctk_pure_pred",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_2,
  NULL,
  NULL,
  NULL
};

#line 2513 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_3[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2519 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_3 = {
  (MR_String) "kctk_purity",
  (MR_Integer) 2,
  (MR_Integer) 2,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_3,
  NULL,
  NULL,
  NULL
};

#line 2534 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_4[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__pti_list_1__pseudo_1
};

#line 2539 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_4 = {
  (MR_String) "kctk_apply",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_4,
  NULL,
  NULL,
  NULL
};

#line 2554 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_0
};

#line 2559 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_1
};

#line 2564 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_2[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_2
};

#line 2569 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_3[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_3,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_4
};

#line 2575 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_known_compound_type_kind_1[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_3
  }
};

#line 2599 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_compound_type_kind_1[5] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_4,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_1,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_2,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_3,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_0
};

#line 2608 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_compound_type_kind_1[5] = {
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 2617 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_known_compound_type_kind_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_util____Unify____known_compound_type_kind_1_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____known_compound_type_kind_1_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "known_compound_type_kind",
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_compound_type_kind_1 },
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_known_compound_type_kind_1 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_compound_type_kind_1
};

#line 2634 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_inst_kind_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

#line 2639 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_0 = {
  (MR_String) "known_inst_simple",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_inst_kind_1_0,
  NULL,
  NULL,
  NULL
};

#line 2654 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_known_compound_inst_kind_1__pseudo_1 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_known_compound_inst_kind_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2662 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_inst_kind_1_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__pti_known_compound_inst_kind_1__pseudo_1
};

#line 2667 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_1 = {
  (MR_String) "known_inst_compound",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_inst_kind_1_1,
  NULL,
  NULL,
  NULL
};

#line 2682 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_2 = {
  (MR_String) "known_inst_bad_arity",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2697 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_2
};

#line 2702 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_0
};

#line 2707 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_2[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_1
};

#line 2712 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_known_inst_kind_1[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_2
  }
};

#line 2731 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_inst_kind_1[3] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_2,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_1,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_0
};

#line 2738 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_inst_kind_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2745 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_known_inst_kind_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_util____Unify____known_inst_kind_1_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____known_inst_kind_1_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "known_inst_kind",
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_inst_kind_1 },
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_known_inst_kind_1 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_inst_kind_1
};

#line 2762 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_type_kind_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 2767 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_0 = {
  (MR_String) "known_type_simple",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_type_kind_1_0,
  NULL,
  NULL,
  NULL
};

#line 2782 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_known_compound_type_kind_1__pseudo_1 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_known_compound_type_kind_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2790 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_type_kind_1_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__pti_known_compound_type_kind_1__pseudo_1
};

#line 2795 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_1 = {
  (MR_String) "known_type_compound",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_type_kind_1_1,
  NULL,
  NULL,
  NULL
};

#line 2810 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_2 = {
  (MR_String) "known_type_bad_arity",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2825 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_type_kind_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_2
};

#line 2830 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_type_kind_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_0
};

#line 2835 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_type_kind_1_2[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_1
};

#line 2840 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_known_type_kind_1[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_type_kind_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_type_kind_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_type_kind_1_2
  }
};

#line 2859 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_type_kind_1[3] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_2,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_1,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_0
};

#line 2866 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_type_kind_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2873 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_known_type_kind_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_util____Unify____known_type_kind_1_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____known_type_kind_1_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "known_type_kind",
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_type_kind_1 },
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_known_type_kind_1 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_type_kind_1
};

#line 2890 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2898 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_term_1__pseudo_1
  }
};

#line 2906 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__maybe_error__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1
  }
};

#line 2915 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe_functor_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__prog_io_util____Unify____maybe_functor_1_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____maybe_functor_1_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "maybe_functor",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__maybe_error__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2932 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0
  }
};

#line 2940 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__maybe_error__ti_maybe2_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__prog_io_util__list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0
  }
};

#line 2949 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe_functor_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_io_util____Unify____maybe_functor_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____maybe_functor_0_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "maybe_functor",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__maybe_error__ti_maybe2_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2966 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__maybe__pti_maybe_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2974 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__pti_list_1__pseudo_1,
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__maybe__pti_maybe_1__pseudo_1
  }
};

#line 2983 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__maybe_error__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1
  }
};

#line 2992 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe_pred_or_func_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__prog_io_util____Unify____maybe_pred_or_func_1_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____maybe_pred_or_func_1_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "maybe_pred_or_func",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__maybe_error__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3009 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 3017 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 3022 "parse_tree.prog_io_util.c"
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

#line 3037 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 3042 "parse_tree.prog_io_util.c"
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

#line 3057 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 3062 "parse_tree.prog_io_util.c"
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

#line 3077 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 3082 "parse_tree.prog_io_util.c"
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

#line 3097 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_0
};

#line 3102 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_1
};

#line 3107 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_2[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_2
};

#line 3112 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_3[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_3
};

#line 3117 "parse_tree.prog_io_util.c"
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

#line 3141 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_dot_colon_var_1[4] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_3,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_2,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_1
};

#line 3149 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_dot_colon_var_1[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3157 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_ordinary_state_dot_colon_var_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "ordinary_state_dot_colon_var",
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_dot_colon_var_1 },
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_ordinary_state_dot_colon_var_1 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_dot_colon_var_1
};

#line 3174 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 3179 "parse_tree.prog_io_util.c"
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

#line 3194 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 3199 "parse_tree.prog_io_util.c"
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

#line 3214 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_0
};

#line 3219 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_1
};

#line 3224 "parse_tree.prog_io_util.c"
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

#line 3238 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_var_1[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_1
};

#line 3244 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_var_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3250 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_ordinary_state_var_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_util____Unify____ordinary_state_var_1_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____ordinary_state_var_1_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "ordinary_state_var",
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_var_1 },
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_ordinary_state_var_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_var_1
};

#line 3267 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__parse_tree__maybe_error__pti_maybe1_1__pseudo_1 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 3275 "parse_tree.prog_io_util.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_parse_tree__maybe_error__pti_maybe1_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__maybe_error__pti_maybe1_1__pseudo_1
  }
};

#line 3285 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_parser_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__prog_io_util____Unify____parser_1_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____parser_1_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "parser",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__prog_io_util____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_parse_tree__maybe_error__pti_maybe1_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3302 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_0 = {
  (MR_String) "quant_type_exist",
  (MR_Integer) 0
};

#line 3308 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_1 = {
  (MR_String) "quant_type_univ",
  (MR_Integer) 1
};

#line 3314 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_value_ordered_quantifier_type_0[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_1
};

#line 3320 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_name_ordered_quantifier_type_0[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_1
};

#line 3326 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_quantifier_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3332 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_quantifier_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_io_util____Unify____quantifier_type_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____quantifier_type_0_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "quantifier_type",
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__enum_name_ordered_quantifier_type_0 },
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__enum_value_ordered_quantifier_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_quantifier_type_0
};

#line 3349 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3357 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3366 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_var2pvar_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_io_util____Unify____var2pvar_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____var2pvar_0_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "var2pvar",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3383 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 3391 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 3400 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_var2tvar_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_io_util____Unify____var2tvar_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____var2tvar_0_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "var2tvar",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3417 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____allow_constrained_inst_var_0_0_10001(
#line 3420 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3422 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 3424 "parse_tree.prog_io_util.c"
{
#line 3426 "parse_tree.prog_io_util.c"
  {
#line 3428 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3431 "parse_tree.prog_io_util.c"
    {
#line 3433 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____allow_constrained_inst_var_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 3436 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3438 "parse_tree.prog_io_util.c"
  }
#line 3440 "parse_tree.prog_io_util.c"
}

#line 3443 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____allow_constrained_inst_var_0_0_10001(
#line 3446 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 3448 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3450 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3452 "parse_tree.prog_io_util.c"
{
#line 3454 "parse_tree.prog_io_util.c"
  {
#line 3456 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3459 "parse_tree.prog_io_util.c"
    {
#line 3461 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____allow_constrained_inst_var_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3464 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3466 "parse_tree.prog_io_util.c"
  }
#line 3468 "parse_tree.prog_io_util.c"
}

#line 3471 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____decl_attribute_0_0_10001(
#line 3474 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3476 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 3478 "parse_tree.prog_io_util.c"
{
#line 3480 "parse_tree.prog_io_util.c"
  {
#line 3482 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3485 "parse_tree.prog_io_util.c"
    {
#line 3487 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____decl_attribute_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 3490 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3492 "parse_tree.prog_io_util.c"
  }
#line 3494 "parse_tree.prog_io_util.c"
}

#line 3497 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____decl_attribute_0_0_10001(
#line 3500 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 3502 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3504 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3506 "parse_tree.prog_io_util.c"
{
#line 3508 "parse_tree.prog_io_util.c"
  {
#line 3510 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3513 "parse_tree.prog_io_util.c"
    {
#line 3515 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____decl_attribute_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3518 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3520 "parse_tree.prog_io_util.c"
  }
#line 3522 "parse_tree.prog_io_util.c"
}

#line 3525 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____decl_attrs_0_0_10001(
#line 3528 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3530 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 3532 "parse_tree.prog_io_util.c"
{
#line 3534 "parse_tree.prog_io_util.c"
  {
#line 3536 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3539 "parse_tree.prog_io_util.c"
    {
#line 3541 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____decl_attrs_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 3544 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3546 "parse_tree.prog_io_util.c"
  }
#line 3548 "parse_tree.prog_io_util.c"
}

#line 3551 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____decl_attrs_0_0_10001(
#line 3554 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 3556 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3558 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3560 "parse_tree.prog_io_util.c"
{
#line 3562 "parse_tree.prog_io_util.c"
  {
#line 3564 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3567 "parse_tree.prog_io_util.c"
    {
#line 3569 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____decl_attrs_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3572 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3574 "parse_tree.prog_io_util.c"
  }
#line 3576 "parse_tree.prog_io_util.c"
}

#line 3579 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_inst_kind_1_0_10001(
#line 3582 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3584 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3586 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3588 "parse_tree.prog_io_util.c"
{
#line 3590 "parse_tree.prog_io_util.c"
  {
#line 3592 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3595 "parse_tree.prog_io_util.c"
    {
#line 3597 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____known_compound_inst_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3600 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3602 "parse_tree.prog_io_util.c"
  }
#line 3604 "parse_tree.prog_io_util.c"
}

#line 3607 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_inst_kind_1_0_10001(
#line 3610 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3612 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3614 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3616 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3618 "parse_tree.prog_io_util.c"
{
#line 3620 "parse_tree.prog_io_util.c"
  {
#line 3622 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3625 "parse_tree.prog_io_util.c"
    {
#line 3627 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____known_compound_inst_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3630 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3632 "parse_tree.prog_io_util.c"
  }
#line 3634 "parse_tree.prog_io_util.c"
}

#line 3637 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_type_kind_1_0_10001(
#line 3640 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3642 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3644 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3646 "parse_tree.prog_io_util.c"
{
#line 3648 "parse_tree.prog_io_util.c"
  {
#line 3650 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3653 "parse_tree.prog_io_util.c"
    {
#line 3655 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____known_compound_type_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3658 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3660 "parse_tree.prog_io_util.c"
  }
#line 3662 "parse_tree.prog_io_util.c"
}

#line 3665 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_type_kind_1_0_10001(
#line 3668 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3670 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3672 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3674 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3676 "parse_tree.prog_io_util.c"
{
#line 3678 "parse_tree.prog_io_util.c"
  {
#line 3680 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3683 "parse_tree.prog_io_util.c"
    {
#line 3685 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____known_compound_type_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3688 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3690 "parse_tree.prog_io_util.c"
  }
#line 3692 "parse_tree.prog_io_util.c"
}

#line 3695 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_inst_kind_1_0_10001(
#line 3698 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3700 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3702 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3704 "parse_tree.prog_io_util.c"
{
#line 3706 "parse_tree.prog_io_util.c"
  {
#line 3708 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3711 "parse_tree.prog_io_util.c"
    {
#line 3713 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____known_inst_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3716 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3718 "parse_tree.prog_io_util.c"
  }
#line 3720 "parse_tree.prog_io_util.c"
}

#line 3723 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_inst_kind_1_0_10001(
#line 3726 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3728 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3730 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3732 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3734 "parse_tree.prog_io_util.c"
{
#line 3736 "parse_tree.prog_io_util.c"
  {
#line 3738 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3741 "parse_tree.prog_io_util.c"
    {
#line 3743 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____known_inst_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3746 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3748 "parse_tree.prog_io_util.c"
  }
#line 3750 "parse_tree.prog_io_util.c"
}

#line 3753 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_type_kind_1_0_10001(
#line 3756 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3758 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3760 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3762 "parse_tree.prog_io_util.c"
{
#line 3764 "parse_tree.prog_io_util.c"
  {
#line 3766 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3769 "parse_tree.prog_io_util.c"
    {
#line 3771 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____known_type_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3774 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3776 "parse_tree.prog_io_util.c"
  }
#line 3778 "parse_tree.prog_io_util.c"
}

#line 3781 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_type_kind_1_0_10001(
#line 3784 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3786 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3788 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3790 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3792 "parse_tree.prog_io_util.c"
{
#line 3794 "parse_tree.prog_io_util.c"
  {
#line 3796 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3799 "parse_tree.prog_io_util.c"
    {
#line 3801 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____known_type_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3804 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3806 "parse_tree.prog_io_util.c"
  }
#line 3808 "parse_tree.prog_io_util.c"
}

#line 3811 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_1_0_10001(
#line 3814 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3816 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3818 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3820 "parse_tree.prog_io_util.c"
{
#line 3822 "parse_tree.prog_io_util.c"
  {
#line 3824 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3827 "parse_tree.prog_io_util.c"
    {
#line 3829 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe_functor_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3832 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3834 "parse_tree.prog_io_util.c"
  }
#line 3836 "parse_tree.prog_io_util.c"
}

#line 3839 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_1_0_10001(
#line 3842 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3844 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3846 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3848 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3850 "parse_tree.prog_io_util.c"
{
#line 3852 "parse_tree.prog_io_util.c"
  {
#line 3854 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3857 "parse_tree.prog_io_util.c"
    {
#line 3859 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe_functor_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3862 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3864 "parse_tree.prog_io_util.c"
  }
#line 3866 "parse_tree.prog_io_util.c"
}

#line 3869 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_0_0_10001(
#line 3872 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3874 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 3876 "parse_tree.prog_io_util.c"
{
#line 3878 "parse_tree.prog_io_util.c"
  {
#line 3880 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3883 "parse_tree.prog_io_util.c"
    {
#line 3885 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe_functor_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 3888 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3890 "parse_tree.prog_io_util.c"
  }
#line 3892 "parse_tree.prog_io_util.c"
}

#line 3895 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_0_0_10001(
#line 3898 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 3900 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3902 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3904 "parse_tree.prog_io_util.c"
{
#line 3906 "parse_tree.prog_io_util.c"
  {
#line 3908 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3911 "parse_tree.prog_io_util.c"
    {
#line 3913 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe_functor_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3916 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3918 "parse_tree.prog_io_util.c"
  }
#line 3920 "parse_tree.prog_io_util.c"
}

#line 3923 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_pred_or_func_1_0_10001(
#line 3926 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3928 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3930 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3932 "parse_tree.prog_io_util.c"
{
#line 3934 "parse_tree.prog_io_util.c"
  {
#line 3936 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3939 "parse_tree.prog_io_util.c"
    {
#line 3941 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe_pred_or_func_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3944 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3946 "parse_tree.prog_io_util.c"
  }
#line 3948 "parse_tree.prog_io_util.c"
}

#line 3951 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_pred_or_func_1_0_10001(
#line 3954 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3956 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3958 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3960 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3962 "parse_tree.prog_io_util.c"
{
#line 3964 "parse_tree.prog_io_util.c"
  {
#line 3966 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3969 "parse_tree.prog_io_util.c"
    {
#line 3971 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe_pred_or_func_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3974 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3976 "parse_tree.prog_io_util.c"
  }
#line 3978 "parse_tree.prog_io_util.c"
}

#line 3981 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0_10001(
#line 3984 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3986 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3988 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3990 "parse_tree.prog_io_util.c"
{
#line 3992 "parse_tree.prog_io_util.c"
  {
#line 3994 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3997 "parse_tree.prog_io_util.c"
    {
#line 3999 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 4002 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 4004 "parse_tree.prog_io_util.c"
  }
#line 4006 "parse_tree.prog_io_util.c"
}

#line 4009 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0_10001(
#line 4012 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4014 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 4016 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 4018 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 4020 "parse_tree.prog_io_util.c"
{
#line 4022 "parse_tree.prog_io_util.c"
  {
#line 4024 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 4027 "parse_tree.prog_io_util.c"
    {
#line 4029 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 4032 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 4034 "parse_tree.prog_io_util.c"
  }
#line 4036 "parse_tree.prog_io_util.c"
}

#line 4039 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_var_1_0_10001(
#line 4042 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4044 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 4046 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 4048 "parse_tree.prog_io_util.c"
{
#line 4050 "parse_tree.prog_io_util.c"
  {
#line 4052 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 4055 "parse_tree.prog_io_util.c"
    {
#line 4057 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____ordinary_state_var_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 4060 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 4062 "parse_tree.prog_io_util.c"
  }
#line 4064 "parse_tree.prog_io_util.c"
}

#line 4067 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_var_1_0_10001(
#line 4070 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4072 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 4074 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 4076 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 4078 "parse_tree.prog_io_util.c"
{
#line 4080 "parse_tree.prog_io_util.c"
  {
#line 4082 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 4085 "parse_tree.prog_io_util.c"
    {
#line 4087 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____ordinary_state_var_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 4090 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 4092 "parse_tree.prog_io_util.c"
  }
#line 4094 "parse_tree.prog_io_util.c"
}

#line 4097 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____parser_1_0_10001(
#line 4100 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4102 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 4104 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 4106 "parse_tree.prog_io_util.c"
{
#line 4108 "parse_tree.prog_io_util.c"
  {
#line 4110 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 4113 "parse_tree.prog_io_util.c"
    {
#line 4115 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____parser_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 4118 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 4120 "parse_tree.prog_io_util.c"
  }
#line 4122 "parse_tree.prog_io_util.c"
}

#line 4125 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____parser_1_0_10001(
#line 4128 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4130 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 4132 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 4134 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 4136 "parse_tree.prog_io_util.c"
{
#line 4138 "parse_tree.prog_io_util.c"
  {
#line 4140 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 4143 "parse_tree.prog_io_util.c"
    {
#line 4145 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____parser_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 4148 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 4150 "parse_tree.prog_io_util.c"
  }
#line 4152 "parse_tree.prog_io_util.c"
}

#line 4155 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____quantifier_type_0_0_10001(
#line 4158 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4160 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 4162 "parse_tree.prog_io_util.c"
{
#line 4164 "parse_tree.prog_io_util.c"
  {
#line 4166 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 4169 "parse_tree.prog_io_util.c"
    {
#line 4171 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____quantifier_type_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 4174 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 4176 "parse_tree.prog_io_util.c"
  }
#line 4178 "parse_tree.prog_io_util.c"
}

#line 4181 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____quantifier_type_0_0_10001(
#line 4184 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 4186 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 4188 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 4190 "parse_tree.prog_io_util.c"
{
#line 4192 "parse_tree.prog_io_util.c"
  {
#line 4194 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 4197 "parse_tree.prog_io_util.c"
    {
#line 4199 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____quantifier_type_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 4202 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 4204 "parse_tree.prog_io_util.c"
  }
#line 4206 "parse_tree.prog_io_util.c"
}

#line 4209 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2pvar_0_0_10001(
#line 4212 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4214 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 4216 "parse_tree.prog_io_util.c"
{
#line 4218 "parse_tree.prog_io_util.c"
  {
#line 4220 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 4223 "parse_tree.prog_io_util.c"
    {
#line 4225 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____var2pvar_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 4228 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 4230 "parse_tree.prog_io_util.c"
  }
#line 4232 "parse_tree.prog_io_util.c"
}

#line 4235 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____var2pvar_0_0_10001(
#line 4238 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 4240 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 4242 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 4244 "parse_tree.prog_io_util.c"
{
#line 4246 "parse_tree.prog_io_util.c"
  {
#line 4248 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 4251 "parse_tree.prog_io_util.c"
    {
#line 4253 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____var2pvar_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 4256 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 4258 "parse_tree.prog_io_util.c"
  }
#line 4260 "parse_tree.prog_io_util.c"
}

#line 4263 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2tvar_0_0_10001(
#line 4266 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4268 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 4270 "parse_tree.prog_io_util.c"
{
#line 4272 "parse_tree.prog_io_util.c"
  {
#line 4274 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 4277 "parse_tree.prog_io_util.c"
    {
#line 4279 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____var2tvar_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 4282 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 4284 "parse_tree.prog_io_util.c"
  }
#line 4286 "parse_tree.prog_io_util.c"
}

#line 4289 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____var2tvar_0_0_10001(
#line 4292 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 4294 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 4296 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 4298 "parse_tree.prog_io_util.c"
{
#line 4300 "parse_tree.prog_io_util.c"
  {
#line 4302 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 4305 "parse_tree.prog_io_util.c"
    {
#line 4307 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____var2tvar_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 4310 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 4312 "parse_tree.prog_io_util.c"
  }
#line 4314 "parse_tree.prog_io_util.c"
}

#line 1196 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(
#line 1196 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Op_5,
#line 1196 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_6,
#line 1196 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__List0_7,
#line 1196 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__OneOrMore_8)
#line 1196 "prog_io_util.m"
{
#line 1204 "prog_io_util.m"
  while (MR_TRUE)
#line 1204 "prog_io_util.m"
    {
#line 1204 "prog_io_util.m"
      /* tailcall optimized into a loop */
#line 1204 "prog_io_util.m"
      {
#line 1204 "prog_io_util.m"
        MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_6)) == (MR_mktag((MR_Integer) 0)));
#line 1204 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__L_9;
#line 1204 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__R_10;
#line 1200 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_14_14;
#line 1200 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_15_15;
#line 1200 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_16_16;
#line 1200 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_17_17;
#line 1200 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_21_21;
#line 1200 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util___Context_11;

#line 1200 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1200 "prog_io_util.m"
          {
#line 1200 "prog_io_util.m"
            parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_6, (MR_Integer) 0)));
#line 1200 "prog_io_util.m"
            parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_6, (MR_Integer) 1)));
#line 1200 "prog_io_util.m"
            parse_tree__prog_io_util___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_6, (MR_Integer) 2)));
#line 1200 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_14_14)) == (MR_mktag((MR_Integer) 0)));
#line 1200 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1200 "prog_io_util.m"
              {
#line 1200 "prog_io_util.m"
                parse_tree__prog_io_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_14_14, (MR_Integer) 0)));
#line 1200 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Op_5, parse_tree__prog_io_util__V_21_21) == 0);
#line 1200 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1200 "prog_io_util.m"
                  {
#line 1200 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 1200 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1200 "prog_io_util.m"
                      {
#line 1200 "prog_io_util.m"
                        parse_tree__prog_io_util__L_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 0)));
#line 1200 "prog_io_util.m"
                        parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 1)));
#line 1200 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 1200 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1200 "prog_io_util.m"
                          {
#line 1200 "prog_io_util.m"
                            parse_tree__prog_io_util__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
#line 1200 "prog_io_util.m"
                            parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
#line 1200 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1200 "prog_io_util.m"
                          }
#line 1200 "prog_io_util.m"
                      }
#line 1200 "prog_io_util.m"
                  }
#line 1200 "prog_io_util.m"
              }
#line 1200 "prog_io_util.m"
          }
#line 1204 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1202 "prog_io_util.m"
          {
#line 1202 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__RHead_12;
#line 1202 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__RTail_13;
#line 1202 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_18_18;
#line 1202 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_19_19;

#line 1201 "prog_io_util.m"
            {
#line 1201 "prog_io_util.m"
              parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(parse_tree__prog_io_util__Op_5, parse_tree__prog_io_util__R_10, parse_tree__prog_io_util__List0_7, &parse_tree__prog_io_util__V_18_18);
            }
#line 1202 "prog_io_util.m"
            parse_tree__prog_io_util__RHead_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_18_18, (MR_Integer) 0)));
#line 1202 "prog_io_util.m"
            parse_tree__prog_io_util__RTail_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_18_18, (MR_Integer) 1)));
#line 1203 "prog_io_util.m"
            {
#line 1203 "prog_io_util.m"
              parse_tree__prog_io_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1203 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 0) = ((MR_Box) (parse_tree__prog_io_util__RHead_12));
#line 1203 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io_util__RTail_13));
#line 1203 "prog_io_util.m"
            }
#line 1203 "prog_io_util.m"
            /* direct tailcall eliminated */
#line 1203 "prog_io_util.m"
            {
#line 1203 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Term__tmp_copy_6 = parse_tree__prog_io_util__L_9;
#line 1203 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__List0__tmp_copy_7 = parse_tree__prog_io_util__V_19_19;

#line 1203 "prog_io_util.m"
              parse_tree__prog_io_util__List0_7 = parse_tree__prog_io_util__List0__tmp_copy_7;
#line 1203 "prog_io_util.m"
              parse_tree__prog_io_util__Term_6 = parse_tree__prog_io_util__Term__tmp_copy_6;
#line 1203 "prog_io_util.m"
            }
#line 1203 "prog_io_util.m"
            continue;
#line 1202 "prog_io_util.m"
          }
#line 1204 "prog_io_util.m"
        else
#line 1205 "prog_io_util.m"
          {
#line 1205 "prog_io_util.m"
            MR_Word base;
#line 1205 "prog_io_util.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1205 "prog_io_util.m"
            *parse_tree__prog_io_util__OneOrMore_8 = base;
#line 1205 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Term_6));
#line 1205 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__List0_7));
#line 1205 "prog_io_util.m"
          }
#line 1204 "prog_io_util.m"
      }
#line 1204 "prog_io_util.m"
      break;
#line 1204 "prog_io_util.m"
    }
#line 1196 "prog_io_util.m"
}

#line 889 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
#line 889 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Name_4,
#line 889 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Args_5,
#line 889 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__KnownInst_6)
#line 889 "prog_io_util.m"
{
#line 933 "prog_io_util.m"
  {
#line 933 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 933 "prog_io_util.m"
    {
#line 933 "prog_io_util.m"
      MR_Integer parse_tree__prog_io_util__case_num_0 = (MR_Integer) -1;

#line 933 "prog_io_util.m"
#line 933 "prog_io_util.m"
      switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 0)) {
#line 933 "prog_io_util.m"
        case (MR_Integer) 61:
#line 933 "prog_io_util.m"
          if (MR_offset_streq(1, parse_tree__prog_io_util__Name_4, (MR_String) "=<"))
#line 933 "prog_io_util.m"
            parse_tree__prog_io_util__case_num_0 = (MR_Integer) 0;
#line 933 "prog_io_util.m"
          break;
#line 933 "prog_io_util.m"
        case (MR_Integer) 97:
#line 933 "prog_io_util.m"
          if (MR_offset_streq(1, parse_tree__prog_io_util__Name_4, (MR_String) "any"))
#line 933 "prog_io_util.m"
            parse_tree__prog_io_util__case_num_0 = (MR_Integer) 1;
#line 933 "prog_io_util.m"
          break;
#line 933 "prog_io_util.m"
        case (MR_Integer) 98:
#line 933 "prog_io_util.m"
          if (((((((((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 1)) == (MR_Integer) 111)) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 2)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 3)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 4)) == (MR_Integer) 100))))
#line 933 "prog_io_util.m"
#line 933 "prog_io_util.m"
            switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 5)) {
#line 933 "prog_io_util.m"
              case (MR_Integer) 0:
#line 933 "prog_io_util.m"
                parse_tree__prog_io_util__case_num_0 = (MR_Integer) 2;
#line 933 "prog_io_util.m"
                break;
#line 933 "prog_io_util.m"
              case (MR_Integer) 95:
#line 933 "prog_io_util.m"
                if (MR_offset_streq(6, parse_tree__prog_io_util__Name_4, (MR_String) "bound_unique"))
#line 933 "prog_io_util.m"
                  parse_tree__prog_io_util__case_num_0 = (MR_Integer) 3;
#line 933 "prog_io_util.m"
                break;
#line 933 "prog_io_util.m"
            }
#line 933 "prog_io_util.m"
          break;
#line 933 "prog_io_util.m"
        case (MR_Integer) 99:
#line 933 "prog_io_util.m"
          if (((((((((((((((((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 1)) == (MR_Integer) 108)) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 2)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 3)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 4)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 5)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 6)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 7)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 8)) == (MR_Integer) 100))))
#line 933 "prog_io_util.m"
#line 933 "prog_io_util.m"
            switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 9)) {
#line 933 "prog_io_util.m"
              case (MR_Integer) 0:
#line 933 "prog_io_util.m"
                parse_tree__prog_io_util__case_num_0 = (MR_Integer) 4;
#line 933 "prog_io_util.m"
                break;
#line 933 "prog_io_util.m"
              case (MR_Integer) 95:
#line 933 "prog_io_util.m"
                if (MR_offset_streq(10, parse_tree__prog_io_util__Name_4, (MR_String) "clobbered_any"))
#line 933 "prog_io_util.m"
                  parse_tree__prog_io_util__case_num_0 = (MR_Integer) 5;
#line 933 "prog_io_util.m"
                break;
#line 933 "prog_io_util.m"
            }
#line 933 "prog_io_util.m"
          break;
#line 933 "prog_io_util.m"
        case (MR_Integer) 102:
#line 933 "prog_io_util.m"
          if (MR_offset_streq(1, parse_tree__prog_io_util__Name_4, (MR_String) "free"))
#line 933 "prog_io_util.m"
            parse_tree__prog_io_util__case_num_0 = (MR_Integer) 6;
#line 933 "prog_io_util.m"
          break;
#line 933 "prog_io_util.m"
        case (MR_Integer) 103:
#line 933 "prog_io_util.m"
          if (MR_offset_streq(1, parse_tree__prog_io_util__Name_4, (MR_String) "ground"))
#line 933 "prog_io_util.m"
            parse_tree__prog_io_util__case_num_0 = (MR_Integer) 7;
#line 933 "prog_io_util.m"
          break;
#line 933 "prog_io_util.m"
        case (MR_Integer) 105:
#line 933 "prog_io_util.m"
          if (MR_offset_streq(1, parse_tree__prog_io_util__Name_4, (MR_String) "is"))
#line 933 "prog_io_util.m"
            parse_tree__prog_io_util__case_num_0 = (MR_Integer) 8;
#line 933 "prog_io_util.m"
          break;
#line 933 "prog_io_util.m"
        case (MR_Integer) 109:
#line 933 "prog_io_util.m"
          if (((((((((((((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 1)) == (MR_Integer) 111)) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 2)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 3)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 4)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 5)) == (MR_Integer) 121)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 6)) == (MR_Integer) 95))))
#line 933 "prog_io_util.m"
#line 933 "prog_io_util.m"
            switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 7)) {
#line 933 "prog_io_util.m"
              case (MR_Integer) 99:
#line 933 "prog_io_util.m"
                if (((((((((((((((((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 8)) == (MR_Integer) 108)) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 9)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 10)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 11)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 12)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 13)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 14)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 15)) == (MR_Integer) 100))))
#line 933 "prog_io_util.m"
#line 933 "prog_io_util.m"
                  switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 16)) {
#line 933 "prog_io_util.m"
                    case (MR_Integer) 0:
#line 933 "prog_io_util.m"
                      parse_tree__prog_io_util__case_num_0 = (MR_Integer) 9;
#line 933 "prog_io_util.m"
                      break;
#line 933 "prog_io_util.m"
                    case (MR_Integer) 95:
#line 933 "prog_io_util.m"
                      if (MR_offset_streq(17, parse_tree__prog_io_util__Name_4, (MR_String) "mostly_clobbered_any"))
#line 933 "prog_io_util.m"
                        parse_tree__prog_io_util__case_num_0 = (MR_Integer) 10;
#line 933 "prog_io_util.m"
                      break;
#line 933 "prog_io_util.m"
                  }
#line 933 "prog_io_util.m"
                break;
#line 933 "prog_io_util.m"
              case (MR_Integer) 117:
#line 933 "prog_io_util.m"
                if (((((((((((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 8)) == (MR_Integer) 110)) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 9)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 10)) == (MR_Integer) 113)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 11)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 12)) == (MR_Integer) 101))))
#line 933 "prog_io_util.m"
#line 933 "prog_io_util.m"
                  switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 13)) {
#line 933 "prog_io_util.m"
                    case (MR_Integer) 0:
#line 933 "prog_io_util.m"
                      parse_tree__prog_io_util__case_num_0 = (MR_Integer) 11;
#line 933 "prog_io_util.m"
                      break;
#line 933 "prog_io_util.m"
                    case (MR_Integer) 95:
#line 933 "prog_io_util.m"
                      if (MR_offset_streq(14, parse_tree__prog_io_util__Name_4, (MR_String) "mostly_unique_any"))
#line 933 "prog_io_util.m"
                        parse_tree__prog_io_util__case_num_0 = (MR_Integer) 12;
#line 933 "prog_io_util.m"
                      break;
#line 933 "prog_io_util.m"
                  }
#line 933 "prog_io_util.m"
                break;
#line 933 "prog_io_util.m"
            }
#line 933 "prog_io_util.m"
          break;
#line 933 "prog_io_util.m"
        case (MR_Integer) 110:
#line 933 "prog_io_util.m"
          if (MR_offset_streq(1, parse_tree__prog_io_util__Name_4, (MR_String) "not_reached"))
#line 933 "prog_io_util.m"
            parse_tree__prog_io_util__case_num_0 = (MR_Integer) 13;
#line 933 "prog_io_util.m"
          break;
#line 933 "prog_io_util.m"
        case (MR_Integer) 117:
#line 933 "prog_io_util.m"
          if (((((((((((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 1)) == (MR_Integer) 110)) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 2)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 3)) == (MR_Integer) 113)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 4)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 5)) == (MR_Integer) 101))))
#line 933 "prog_io_util.m"
#line 933 "prog_io_util.m"
            switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 6)) {
#line 933 "prog_io_util.m"
              case (MR_Integer) 0:
#line 933 "prog_io_util.m"
                parse_tree__prog_io_util__case_num_0 = (MR_Integer) 14;
#line 933 "prog_io_util.m"
                break;
#line 933 "prog_io_util.m"
              case (MR_Integer) 95:
#line 933 "prog_io_util.m"
                if (MR_offset_streq(7, parse_tree__prog_io_util__Name_4, (MR_String) "unique_any"))
#line 933 "prog_io_util.m"
                  parse_tree__prog_io_util__case_num_0 = (MR_Integer) 15;
#line 933 "prog_io_util.m"
                break;
#line 933 "prog_io_util.m"
            }
#line 933 "prog_io_util.m"
          break;
#line 933 "prog_io_util.m"
      }
#line 933 "prog_io_util.m"
#line 933 "prog_io_util.m"
      switch (parse_tree__prog_io_util__case_num_0) {
#line 933 "prog_io_util.m"
        default:
#line 933 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 933 "prog_io_util.m"
          break;
#line 933 "prog_io_util.m"
        case (MR_Integer) 0:
#line 972 "prog_io_util.m"
          {
#line 972 "prog_io_util.m"
            /* case "=<" */
#line 972 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 976 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 972 "prog_io_util.m"
            else
#line 978 "prog_io_util.m"
              {
#line 978 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 978 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_181_181 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 978 "prog_io_util.m"
                if ((parse_tree__prog_io_util__V_180_180 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 977 "prog_io_util.m"
                  *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 978 "prog_io_util.m"
                else
#line 978 "prog_io_util.m"
                  {
#line 978 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_180_180, (MR_Integer) 1)));
#line 978 "prog_io_util.m"
                    MR_Box parse_tree__prog_io_util__V_193_193 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_180_180, (MR_Integer) 0));

#line 978 "prog_io_util.m"
                    if ((parse_tree__prog_io_util__V_192_192 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 979 "prog_io_util.m"
                      {
#line 979 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_44_44;

#line 980 "prog_io_util.m"
                        {
#line 980 "prog_io_util.m"
                          parse_tree__prog_io_util__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 980 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_44_44, 0) = parse_tree__prog_io_util__V_181_181;
#line 980 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_44_44, 1) = parse_tree__prog_io_util__V_193_193;
#line 980 "prog_io_util.m"
                        }
#line 980 "prog_io_util.m"
                        {
#line 980 "prog_io_util.m"
                          MR_Word base;
#line 980 "prog_io_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 980 "prog_io_util.m"
                          *parse_tree__prog_io_util__KnownInst_6 = base;
#line 980 "prog_io_util.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_44_44));
#line 980 "prog_io_util.m"
                        }
#line 979 "prog_io_util.m"
                      }
#line 978 "prog_io_util.m"
                    else
#line 983 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 978 "prog_io_util.m"
                  }
#line 978 "prog_io_util.m"
              }
#line 972 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 972 "prog_io_util.m"
          }
#line 933 "prog_io_util.m"
          break;
#line 933 "prog_io_util.m"
        case (MR_Integer) 1:
#line 925 "prog_io_util.m"
          {
#line 925 "prog_io_util.m"
            /* case "any" */
#line 929 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 927 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[21]);
#line 929 "prog_io_util.m"
            else
#line 931 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 925 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 925 "prog_io_util.m"
          }
#line 933 "prog_io_util.m"
          break;
#line 933 "prog_io_util.m"
        case (MR_Integer) 2:
#line 986 "prog_io_util.m"
          {
#line 986 "prog_io_util.m"
            /* case "bound" */
#line 986 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 988 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 986 "prog_io_util.m"
            else
#line 990 "prog_io_util.m"
              {
#line 990 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 990 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_183_183 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 990 "prog_io_util.m"
                if ((parse_tree__prog_io_util__V_182_182 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 991 "prog_io_util.m"
                  {
#line 991 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_39_39;

#line 992 "prog_io_util.m"
                    {
#line 992 "prog_io_util.m"
                      parse_tree__prog_io_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 992 "prog_io_util.m"
                      MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__V_39_39, 0) = parse_tree__prog_io_util__V_183_183;
#line 992 "prog_io_util.m"
                    }
#line 992 "prog_io_util.m"
                    {
#line 992 "prog_io_util.m"
                      MR_Word base;
#line 992 "prog_io_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 992 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownInst_6 = base;
#line 992 "prog_io_util.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_39_39));
#line 992 "prog_io_util.m"
                    }
#line 991 "prog_io_util.m"
                  }
#line 990 "prog_io_util.m"
                else
#line 995 "prog_io_util.m"
                  *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 990 "prog_io_util.m"
              }
#line 986 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 986 "prog_io_util.m"
          }
#line 933 "prog_io_util.m"
          break;
#line 933 "prog_io_util.m"
        case (MR_Integer) 3:
#line 998 "prog_io_util.m"
          {
#line 998 "prog_io_util.m"
            /* case "bound_unique" */
#line 998 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1002 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 998 "prog_io_util.m"
            else
#line 1004 "prog_io_util.m"
              {
#line 1004 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 1004 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_185_185 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 1004 "prog_io_util.m"
                if ((parse_tree__prog_io_util__V_184_184 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1005 "prog_io_util.m"
                  {
#line 1005 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_36_36;

#line 1006 "prog_io_util.m"
                    {
#line 1006 "prog_io_util.m"
                      parse_tree__prog_io_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1006 "prog_io_util.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1006 "prog_io_util.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_36_36, 1) = parse_tree__prog_io_util__V_185_185;
#line 1006 "prog_io_util.m"
                    }
#line 1006 "prog_io_util.m"
                    {
#line 1006 "prog_io_util.m"
                      MR_Word base;
#line 1006 "prog_io_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1006 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownInst_6 = base;
#line 1006 "prog_io_util.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 1006 "prog_io_util.m"
                    }
#line 1005 "prog_io_util.m"
                  }
#line 1004 "prog_io_util.m"
                else
#line 1009 "prog_io_util.m"
                  *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1004 "prog_io_util.m"
              }
#line 998 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 998 "prog_io_util.m"
          }
#line 933 "prog_io_util.m"
          break;
#line 933 "prog_io_util.m"
        case (MR_Integer) 4:
#line 925 "prog_io_util.m"
          {
#line 925 "prog_io_util.m"
            /* case "clobbered" */
#line 929 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 927 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[22]);
#line 929 "prog_io_util.m"
            else
#line 931 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 925 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 925 "prog_io_util.m"
          }
#line 933 "prog_io_util.m"
          break;
#line 933 "prog_io_util.m"
        case (MR_Integer) 5:
#line 925 "prog_io_util.m"
          {
#line 925 "prog_io_util.m"
            /* case "clobbered_any" */
#line 929 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 927 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[23]);
#line 929 "prog_io_util.m"
            else
#line 931 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 925 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 925 "prog_io_util.m"
          }
#line 933 "prog_io_util.m"
          break;
#line 933 "prog_io_util.m"
        case (MR_Integer) 6:
#line 925 "prog_io_util.m"
          {
#line 925 "prog_io_util.m"
            /* case "free" */
#line 929 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 927 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[24]);
#line 929 "prog_io_util.m"
            else
#line 931 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 925 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 925 "prog_io_util.m"
          }
#line 933 "prog_io_util.m"
          break;
#line 933 "prog_io_util.m"
        case (MR_Integer) 7:
#line 925 "prog_io_util.m"
          {
#line 925 "prog_io_util.m"
            /* case "ground" */
#line 929 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 927 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[25]);
#line 929 "prog_io_util.m"
            else
#line 931 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 925 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 925 "prog_io_util.m"
          }
#line 933 "prog_io_util.m"
          break;
#line 933 "prog_io_util.m"
        case (MR_Integer) 8:
#line 958 "prog_io_util.m"
          {
#line 958 "prog_io_util.m"
            /* case "is" */
#line 958 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 962 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 958 "prog_io_util.m"
            else
#line 964 "prog_io_util.m"
              {
#line 964 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 964 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_187_187 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 964 "prog_io_util.m"
                if ((parse_tree__prog_io_util__V_186_186 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 963 "prog_io_util.m"
                  *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 964 "prog_io_util.m"
                else
#line 964 "prog_io_util.m"
                  {
#line 964 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_186_186, (MR_Integer) 1)));
#line 964 "prog_io_util.m"
                    MR_Box parse_tree__prog_io_util__V_195_195 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_186_186, (MR_Integer) 0));

#line 964 "prog_io_util.m"
                    if ((parse_tree__prog_io_util__V_194_194 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 965 "prog_io_util.m"
                      {
#line 965 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_50_50;

#line 966 "prog_io_util.m"
                        {
#line 966 "prog_io_util.m"
                          parse_tree__prog_io_util__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 966 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_50_50, 0) = parse_tree__prog_io_util__V_187_187;
#line 966 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_50_50, 1) = parse_tree__prog_io_util__V_195_195;
#line 966 "prog_io_util.m"
                        }
#line 966 "prog_io_util.m"
                        {
#line 966 "prog_io_util.m"
                          MR_Word base;
#line 966 "prog_io_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 966 "prog_io_util.m"
                          *parse_tree__prog_io_util__KnownInst_6 = base;
#line 966 "prog_io_util.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_50_50));
#line 966 "prog_io_util.m"
                        }
#line 965 "prog_io_util.m"
                      }
#line 964 "prog_io_util.m"
                    else
#line 969 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 964 "prog_io_util.m"
                  }
#line 964 "prog_io_util.m"
              }
#line 958 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 958 "prog_io_util.m"
          }
#line 933 "prog_io_util.m"
          break;
#line 933 "prog_io_util.m"
        case (MR_Integer) 9:
#line 925 "prog_io_util.m"
          {
#line 925 "prog_io_util.m"
            /* case "mostly_clobbered" */
#line 929 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 927 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[26]);
#line 929 "prog_io_util.m"
            else
#line 931 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 925 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 925 "prog_io_util.m"
          }
#line 933 "prog_io_util.m"
          break;
#line 933 "prog_io_util.m"
        case (MR_Integer) 10:
#line 925 "prog_io_util.m"
          {
#line 925 "prog_io_util.m"
            /* case "mostly_clobbered_any" */
#line 929 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 927 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[27]);
#line 929 "prog_io_util.m"
            else
#line 931 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 925 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 925 "prog_io_util.m"
          }
#line 933 "prog_io_util.m"
          break;
#line 933 "prog_io_util.m"
        case (MR_Integer) 11:
#line 946 "prog_io_util.m"
          {
#line 946 "prog_io_util.m"
            /* case "mostly_unique" */
#line 946 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 948 "prog_io_util.m"
              {
#line 949 "prog_io_util.m"
                *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[28]);
#line 948 "prog_io_util.m"
              }
#line 946 "prog_io_util.m"
            else
#line 950 "prog_io_util.m"
              {
#line 950 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 950 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_189_189 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 950 "prog_io_util.m"
                if ((parse_tree__prog_io_util__V_188_188 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 951 "prog_io_util.m"
                  {
#line 951 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_54_54;

#line 952 "prog_io_util.m"
                    {
#line 952 "prog_io_util.m"
                      parse_tree__prog_io_util__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 952 "prog_io_util.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 952 "prog_io_util.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_54_54, 1) = parse_tree__prog_io_util__V_189_189;
#line 952 "prog_io_util.m"
                    }
#line 952 "prog_io_util.m"
                    {
#line 952 "prog_io_util.m"
                      MR_Word base;
#line 952 "prog_io_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 952 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownInst_6 = base;
#line 952 "prog_io_util.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_54_54));
#line 952 "prog_io_util.m"
                    }
#line 951 "prog_io_util.m"
                  }
#line 950 "prog_io_util.m"
                else
#line 955 "prog_io_util.m"
                  *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 950 "prog_io_util.m"
              }
#line 946 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 946 "prog_io_util.m"
          }
#line 933 "prog_io_util.m"
          break;
#line 933 "prog_io_util.m"
        case (MR_Integer) 12:
#line 925 "prog_io_util.m"
          {
#line 925 "prog_io_util.m"
            /* case "mostly_unique_any" */
#line 929 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 927 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[29]);
#line 929 "prog_io_util.m"
            else
#line 931 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 925 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 925 "prog_io_util.m"
          }
#line 933 "prog_io_util.m"
          break;
#line 933 "prog_io_util.m"
        case (MR_Integer) 13:
#line 925 "prog_io_util.m"
          {
#line 925 "prog_io_util.m"
            /* case "not_reached" */
#line 929 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 927 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[30]);
#line 929 "prog_io_util.m"
            else
#line 931 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 925 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 925 "prog_io_util.m"
          }
#line 933 "prog_io_util.m"
          break;
#line 933 "prog_io_util.m"
        case (MR_Integer) 14:
#line 934 "prog_io_util.m"
          {
#line 934 "prog_io_util.m"
            /* case "unique" */
#line 934 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 936 "prog_io_util.m"
              {
#line 937 "prog_io_util.m"
                *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[31]);
#line 936 "prog_io_util.m"
              }
#line 934 "prog_io_util.m"
            else
#line 938 "prog_io_util.m"
              {
#line 938 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 938 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_191_191 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 938 "prog_io_util.m"
                if ((parse_tree__prog_io_util__V_190_190 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 939 "prog_io_util.m"
                  {
#line 939 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_60_60;

#line 940 "prog_io_util.m"
                    {
#line 940 "prog_io_util.m"
                      parse_tree__prog_io_util__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 940 "prog_io_util.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 940 "prog_io_util.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_60_60, 1) = parse_tree__prog_io_util__V_191_191;
#line 940 "prog_io_util.m"
                    }
#line 940 "prog_io_util.m"
                    {
#line 940 "prog_io_util.m"
                      MR_Word base;
#line 940 "prog_io_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 940 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownInst_6 = base;
#line 940 "prog_io_util.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_60_60));
#line 940 "prog_io_util.m"
                    }
#line 939 "prog_io_util.m"
                  }
#line 938 "prog_io_util.m"
                else
#line 943 "prog_io_util.m"
                  *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 938 "prog_io_util.m"
              }
#line 934 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 934 "prog_io_util.m"
          }
#line 933 "prog_io_util.m"
          break;
#line 933 "prog_io_util.m"
        case (MR_Integer) 15:
#line 925 "prog_io_util.m"
          {
#line 925 "prog_io_util.m"
            /* case "unique_any" */
#line 929 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 927 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[32]);
#line 929 "prog_io_util.m"
            else
#line 931 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 925 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 925 "prog_io_util.m"
          }
#line 933 "prog_io_util.m"
          break;
#line 933 "prog_io_util.m"
      }
#line 933 "prog_io_util.m"
    }
#line 933 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 933 "prog_io_util.m"
  }
#line 889 "prog_io_util.m"
}

#line 458 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_116_121_112_101_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
#line 458 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Name_4,
#line 458 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Args_5,
#line 458 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__KnownType_6)
#line 458 "prog_io_util.m"
{
#line 490 "prog_io_util.m"
  {
#line 490 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 490 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__slot_0;
#line 490 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__str_1;

#line 490 "prog_io_util.m"
    /* hashed string jump switch */
#line 490 "prog_io_util.m"
    /* compute the hash value of the input string */
#line 490 "prog_io_util.m"
    parse_tree__prog_io_util__slot_0 = ((MR_hash_string6(parse_tree__prog_io_util__Name_4)) & (MR_Integer) 31);
#line 490 "prog_io_util.m"
    /* hash chain loop */
#line 490 "prog_io_util.m"
    do
#line 490 "prog_io_util.m"
      {
#line 490 "prog_io_util.m"
        /* lookup the string for this hash slot */
#line 490 "prog_io_util.m"
        parse_tree__prog_io_util__str_1 = ((&parse_tree__prog_io_util_vector_common_6[7 + parse_tree__prog_io_util__slot_0]))->parse_tree__prog_io_util__vector_common_type_6_0__vct_6_f_0;
#line 490 "prog_io_util.m"
        /* did we find a match? */
#line 490 "prog_io_util.m"
        if ((((parse_tree__prog_io_util__str_1 != NULL)) && ((strcmp(parse_tree__prog_io_util__str_1, parse_tree__prog_io_util__Name_4) == 0))))
#line 490 "prog_io_util.m"
          {
#line 490 "prog_io_util.m"
            /* we found a match; dispatch to the corresponding code */
#line 490 "prog_io_util.m"
#line 490 "prog_io_util.m"
            switch (parse_tree__prog_io_util__slot_0) {
#line 490 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 490 "prog_io_util.m"
              case (MR_Integer) 0:
#line 529 "prog_io_util.m"
                {
#line 529 "prog_io_util.m"
                  /* case "" */
#line 529 "prog_io_util.m"
                  {
#line 529 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_21_21;

#line 530 "prog_io_util.m"
                    {
#line 530 "prog_io_util.m"
                      parse_tree__prog_io_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 530 "prog_io_util.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 530 "prog_io_util.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_21_21, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_5));
#line 530 "prog_io_util.m"
                    }
#line 530 "prog_io_util.m"
                    {
#line 530 "prog_io_util.m"
                      MR_Word base;
#line 530 "prog_io_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 530 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownType_6 = base;
#line 530 "prog_io_util.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_21_21));
#line 530 "prog_io_util.m"
                    }
#line 529 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 529 "prog_io_util.m"
                  }
#line 529 "prog_io_util.m"
                }
#line 490 "prog_io_util.m"
                break;
#line 490 "prog_io_util.m"
              case (MR_Integer) 1:
#line 482 "prog_io_util.m"
                {
#line 482 "prog_io_util.m"
                  /* case "string" */
#line 486 "prog_io_util.m"
                  if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 484 "prog_io_util.m"
                    {
#line 485 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[20]);
#line 484 "prog_io_util.m"
                    }
#line 486 "prog_io_util.m"
                  else
#line 488 "prog_io_util.m"
                    *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 482 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 482 "prog_io_util.m"
                }
#line 490 "prog_io_util.m"
                break;
#line 490 "prog_io_util.m"
              case (MR_Integer) 2:
#line 518 "prog_io_util.m"
                {
#line 518 "prog_io_util.m"
                  /* case "semipure" */
#line 524 "prog_io_util.m"
                  if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 522 "prog_io_util.m"
                    *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 524 "prog_io_util.m"
                  else
#line 524 "prog_io_util.m"
                    {
#line 524 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 524 "prog_io_util.m"
                      MR_Box parse_tree__prog_io_util__V_145_145 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 524 "prog_io_util.m"
                      if ((parse_tree__prog_io_util__V_144_144 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 525 "prog_io_util.m"
                        {
#line 525 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_95_95;

#line 526 "prog_io_util.m"
                          {
#line 526 "prog_io_util.m"
                            parse_tree__prog_io_util__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 526 "prog_io_util.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 526 "prog_io_util.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_95_95, 1) = ((MR_Box) ((MR_Integer) 1));
#line 526 "prog_io_util.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_95_95, 2) = parse_tree__prog_io_util__V_145_145;
#line 526 "prog_io_util.m"
                          }
#line 526 "prog_io_util.m"
                          {
#line 526 "prog_io_util.m"
                            MR_Word base;
#line 526 "prog_io_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 526 "prog_io_util.m"
                            *parse_tree__prog_io_util__KnownType_6 = base;
#line 526 "prog_io_util.m"
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_95_95));
#line 526 "prog_io_util.m"
                          }
#line 525 "prog_io_util.m"
                        }
#line 524 "prog_io_util.m"
                      else
#line 523 "prog_io_util.m"
                        *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 524 "prog_io_util.m"
                    }
#line 518 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 518 "prog_io_util.m"
                }
#line 490 "prog_io_util.m"
                break;
#line 490 "prog_io_util.m"
              case (MR_Integer) 3:
#line 482 "prog_io_util.m"
                {
#line 482 "prog_io_util.m"
                  /* case "float" */
#line 486 "prog_io_util.m"
                  if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 484 "prog_io_util.m"
                    {
#line 485 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[16]);
#line 484 "prog_io_util.m"
                    }
#line 486 "prog_io_util.m"
                  else
#line 488 "prog_io_util.m"
                    *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 482 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 482 "prog_io_util.m"
                }
#line 490 "prog_io_util.m"
                break;
#line 490 "prog_io_util.m"
              case (MR_Integer) 4:
#line 482 "prog_io_util.m"
                {
#line 482 "prog_io_util.m"
                  /* case "character" */
#line 486 "prog_io_util.m"
                  if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 484 "prog_io_util.m"
                    {
#line 485 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[14]);
#line 484 "prog_io_util.m"
                    }
#line 486 "prog_io_util.m"
                  else
#line 488 "prog_io_util.m"
                    *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 482 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 482 "prog_io_util.m"
                }
#line 490 "prog_io_util.m"
                break;
#line 490 "prog_io_util.m"
              case (MR_Integer) 5:
#line 518 "prog_io_util.m"
                {
#line 518 "prog_io_util.m"
                  /* case "impure" */
#line 524 "prog_io_util.m"
                  if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 522 "prog_io_util.m"
                    *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 524 "prog_io_util.m"
                  else
#line 524 "prog_io_util.m"
                    {
#line 524 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 524 "prog_io_util.m"
                      MR_Box parse_tree__prog_io_util__V_141_141 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 524 "prog_io_util.m"
                      if ((parse_tree__prog_io_util__V_140_140 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 525 "prog_io_util.m"
                        {
#line 525 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_23_23;

#line 526 "prog_io_util.m"
                          {
#line 526 "prog_io_util.m"
                            parse_tree__prog_io_util__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 526 "prog_io_util.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 526 "prog_io_util.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_23_23, 1) = ((MR_Box) ((MR_Integer) 2));
#line 526 "prog_io_util.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_23_23, 2) = parse_tree__prog_io_util__V_141_141;
#line 526 "prog_io_util.m"
                          }
#line 526 "prog_io_util.m"
                          {
#line 526 "prog_io_util.m"
                            MR_Word base;
#line 526 "prog_io_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 526 "prog_io_util.m"
                            *parse_tree__prog_io_util__KnownType_6 = base;
#line 526 "prog_io_util.m"
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_23_23));
#line 526 "prog_io_util.m"
                          }
#line 525 "prog_io_util.m"
                        }
#line 524 "prog_io_util.m"
                      else
#line 523 "prog_io_util.m"
                        *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 524 "prog_io_util.m"
                    }
#line 518 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 518 "prog_io_util.m"
                }
#line 490 "prog_io_util.m"
                break;
#line 490 "prog_io_util.m"
              case (MR_Integer) 8:
#line 482 "prog_io_util.m"
                {
#line 482 "prog_io_util.m"
                  /* case "int" */
#line 486 "prog_io_util.m"
                  if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 484 "prog_io_util.m"
                    {
#line 485 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[18]);
#line 484 "prog_io_util.m"
                    }
#line 486 "prog_io_util.m"
                  else
#line 488 "prog_io_util.m"
                    *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 482 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 482 "prog_io_util.m"
                }
#line 490 "prog_io_util.m"
                break;
#line 490 "prog_io_util.m"
              case (MR_Integer) 10:
#line 491 "prog_io_util.m"
                {
#line 491 "prog_io_util.m"
                  /* case "{}" */
#line 491 "prog_io_util.m"
                  {
#line 491 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_32_32;

#line 492 "prog_io_util.m"
                    {
#line 492 "prog_io_util.m"
                      parse_tree__prog_io_util__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 492 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io_util__Args_5));
#line 492 "prog_io_util.m"
                    }
#line 492 "prog_io_util.m"
                    {
#line 492 "prog_io_util.m"
                      MR_Word base;
#line 492 "prog_io_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 492 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownType_6 = base;
#line 492 "prog_io_util.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_32_32));
#line 492 "prog_io_util.m"
                    }
#line 491 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 491 "prog_io_util.m"
                  }
#line 491 "prog_io_util.m"
                }
#line 490 "prog_io_util.m"
                break;
#line 490 "prog_io_util.m"
              case (MR_Integer) 24:
#line 518 "prog_io_util.m"
                {
#line 518 "prog_io_util.m"
                  /* case "pure" */
#line 524 "prog_io_util.m"
                  if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 522 "prog_io_util.m"
                    *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 524 "prog_io_util.m"
                  else
#line 524 "prog_io_util.m"
                    {
#line 524 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 524 "prog_io_util.m"
                      MR_Box parse_tree__prog_io_util__V_143_143 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 524 "prog_io_util.m"
                      if ((parse_tree__prog_io_util__V_142_142 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 525 "prog_io_util.m"
                        {
#line 525 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_63_63;

#line 526 "prog_io_util.m"
                          {
#line 526 "prog_io_util.m"
                            parse_tree__prog_io_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 526 "prog_io_util.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 526 "prog_io_util.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_63_63, 1) = ((MR_Box) ((MR_Integer) 0));
#line 526 "prog_io_util.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_63_63, 2) = parse_tree__prog_io_util__V_143_143;
#line 526 "prog_io_util.m"
                          }
#line 526 "prog_io_util.m"
                          {
#line 526 "prog_io_util.m"
                            MR_Word base;
#line 526 "prog_io_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 526 "prog_io_util.m"
                            *parse_tree__prog_io_util__KnownType_6 = base;
#line 526 "prog_io_util.m"
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_63_63));
#line 526 "prog_io_util.m"
                          }
#line 525 "prog_io_util.m"
                        }
#line 524 "prog_io_util.m"
                      else
#line 523 "prog_io_util.m"
                        *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 524 "prog_io_util.m"
                    }
#line 518 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 518 "prog_io_util.m"
                }
#line 490 "prog_io_util.m"
                break;
#line 490 "prog_io_util.m"
              case (MR_Integer) 28:
#line 494 "prog_io_util.m"
                {
#line 494 "prog_io_util.m"
                  /* case "=" */
#line 494 "prog_io_util.m"
                  if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 499 "prog_io_util.m"
                    *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 494 "prog_io_util.m"
                  else
#line 501 "prog_io_util.m"
                    {
#line 501 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 501 "prog_io_util.m"
                      MR_Box parse_tree__prog_io_util__V_139_139 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 501 "prog_io_util.m"
                      if ((parse_tree__prog_io_util__V_138_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 500 "prog_io_util.m"
                        *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 501 "prog_io_util.m"
                      else
#line 501 "prog_io_util.m"
                        {
#line 501 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_138_138, (MR_Integer) 1)));
#line 501 "prog_io_util.m"
                          MR_Box parse_tree__prog_io_util__V_147_147 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_138_138, (MR_Integer) 0));

#line 501 "prog_io_util.m"
                          if ((parse_tree__prog_io_util__V_146_146 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 502 "prog_io_util.m"
                            {
#line 502 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__V_28_28;

#line 503 "prog_io_util.m"
                              {
#line 503 "prog_io_util.m"
                                parse_tree__prog_io_util__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_28_28, 0) = parse_tree__prog_io_util__V_139_139;
#line 503 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_28_28, 1) = parse_tree__prog_io_util__V_147_147;
#line 503 "prog_io_util.m"
                              }
#line 503 "prog_io_util.m"
                              {
#line 503 "prog_io_util.m"
                                MR_Word base;
#line 503 "prog_io_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 503 "prog_io_util.m"
                                *parse_tree__prog_io_util__KnownType_6 = base;
#line 503 "prog_io_util.m"
                                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_28_28));
#line 503 "prog_io_util.m"
                              }
#line 502 "prog_io_util.m"
                            }
#line 501 "prog_io_util.m"
                          else
#line 500 "prog_io_util.m"
                            *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 501 "prog_io_util.m"
                        }
#line 501 "prog_io_util.m"
                    }
#line 494 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 494 "prog_io_util.m"
                }
#line 490 "prog_io_util.m"
                break;
#line 490 "prog_io_util.m"
              case (MR_Integer) 31:
#line 506 "prog_io_util.m"
                {
#line 506 "prog_io_util.m"
                  /* case "pred" */
#line 506 "prog_io_util.m"
                  {
#line 506 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_25_25;

#line 507 "prog_io_util.m"
                    {
#line 507 "prog_io_util.m"
                      parse_tree__prog_io_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 507 "prog_io_util.m"
                      MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_util__Args_5));
#line 507 "prog_io_util.m"
                    }
#line 507 "prog_io_util.m"
                    {
#line 507 "prog_io_util.m"
                      MR_Word base;
#line 507 "prog_io_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 507 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownType_6 = base;
#line 507 "prog_io_util.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_25_25));
#line 507 "prog_io_util.m"
                    }
#line 506 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 506 "prog_io_util.m"
                  }
#line 506 "prog_io_util.m"
                }
#line 490 "prog_io_util.m"
                break;
#line 490 "prog_io_util.m"
            }
#line 490 "prog_io_util.m"
            /* jump out of search loop */
#line 490 "prog_io_util.m"
            goto label_0;
#line 490 "prog_io_util.m"
          }
#line 490 "prog_io_util.m"
        else
#line 490 "prog_io_util.m"
          {
#line 490 "prog_io_util.m"
            /* no match yet, so get next slot in hash chain */
#line 490 "prog_io_util.m"
            parse_tree__prog_io_util__slot_0 = ((&parse_tree__prog_io_util_vector_common_6[7 + parse_tree__prog_io_util__slot_0]))->parse_tree__prog_io_util__vector_common_type_6_0__vct_6_f_1;
#line 490 "prog_io_util.m"
          }
#line 490 "prog_io_util.m"
      }
#line 490 "prog_io_util.m"
    while ((parse_tree__prog_io_util__slot_0 >= (MR_Integer) 0));
#line 490 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 490 "prog_io_util.m"
  label_0:;
#line 490 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 490 "prog_io_util.m"
  }
#line 458 "prog_io_util.m"
}

#line 52 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____var2tvar_0_0(
#line 52 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 52 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 52 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 52 "prog_io_util.m"
{
#line 52 "prog_io_util.m"
  {
#line 52 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 52 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_4 = parse_tree__prog_io_util__HeadVar__2_2;
#line 52 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_5 = parse_tree__prog_io_util__HeadVar__3_3;

#line 52 "prog_io_util.m"
    {
#line 52 "prog_io_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_2[3], parse_tree__prog_io_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar2_5)));
#line 52 "prog_io_util.m"
      return;
    }
#line 52 "prog_io_util.m"
  }
#line 52 "prog_io_util.m"
}

#line 52 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2tvar_0_0(
#line 52 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 52 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 52 "prog_io_util.m"
{
#line 52 "prog_io_util.m"
  {
#line 52 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 52 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_3 = parse_tree__prog_io_util__HeadVar__1_1;
#line 52 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_4 = parse_tree__prog_io_util__HeadVar__2_2;

#line 52 "prog_io_util.m"
    {
#line 52 "prog_io_util.m"
      return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_2[3], ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar2_4)));
    }
#line 52 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 52 "prog_io_util.m"
  }
#line 52 "prog_io_util.m"
}

#line 53 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____var2pvar_0_0(
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
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_4 = parse_tree__prog_io_util__HeadVar__2_2;
#line 53 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_5 = parse_tree__prog_io_util__HeadVar__3_3;

#line 53 "prog_io_util.m"
    {
#line 53 "prog_io_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_2[2], parse_tree__prog_io_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar2_5)));
#line 53 "prog_io_util.m"
      return;
    }
#line 53 "prog_io_util.m"
  }
#line 53 "prog_io_util.m"
}

#line 53 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2pvar_0_0(
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
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_3 = parse_tree__prog_io_util__HeadVar__1_1;
#line 53 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_4 = parse_tree__prog_io_util__HeadVar__2_2;

#line 53 "prog_io_util.m"
    {
#line 53 "prog_io_util.m"
      return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_2[2], ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar2_4)));
    }
#line 53 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 53 "prog_io_util.m"
  }
#line 53 "prog_io_util.m"
}

#line 189 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____quantifier_type_0_0(
#line 189 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 189 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 189 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 189 "prog_io_util.m"
{
#line 189 "prog_io_util.m"
  {
#line 189 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 189 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 189 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 189 "prog_io_util.m"
    {
#line 189 "prog_io_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__Cast_HeadVar1_4, parse_tree__prog_io_util__Cast_HeadVar2_5);
#line 189 "prog_io_util.m"
      return;
    }
#line 189 "prog_io_util.m"
  }
#line 189 "prog_io_util.m"
}

#line 189 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____quantifier_type_0_0(
#line 189 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_1,
#line 189 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 189 "prog_io_util.m"
{
#line 6058 "parse_tree.prog_io_util.c"
  {
#line 6060 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__HeadVar__2_1 == parse_tree__prog_io_util__HeadVar__2_2);

#line 6063 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 6065 "parse_tree.prog_io_util.c"
  }
#line 189 "prog_io_util.m"
}

#line 55 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____parser_1_0(
#line 55 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_6,
#line 55 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 55 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 55 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 55 "prog_io_util.m"
{
#line 55 "prog_io_util.m"
  {
#line 55 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 55 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_4 = parse_tree__prog_io_util__HeadVar__2_2;
#line 55 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_5 = parse_tree__prog_io_util__HeadVar__3_3;

#line 55 "prog_io_util.m"
    {
#line 55 "prog_io_util.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__prog_io_util__HeadVar__1_1, (MR_Word) parse_tree__prog_io_util__Cast_HeadVar1_4, (MR_Word) parse_tree__prog_io_util__Cast_HeadVar2_5);
#line 55 "prog_io_util.m"
      return;
    }
#line 55 "prog_io_util.m"
  }
#line 55 "prog_io_util.m"
}

#line 55 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____parser_1_0(
#line 55 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_5,
#line 55 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 55 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 55 "prog_io_util.m"
{
#line 55 "prog_io_util.m"
  {
#line 55 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 55 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_3 = parse_tree__prog_io_util__HeadVar__1_1;
#line 55 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_4 = parse_tree__prog_io_util__HeadVar__2_2;

#line 55 "prog_io_util.m"
    {
#line 55 "prog_io_util.m"
      return parse_tree__prog_io_util__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__prog_io_util__Cast_HeadVar1_3, (MR_Word) parse_tree__prog_io_util__Cast_HeadVar2_4);
    }
#line 55 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 55 "prog_io_util.m"
  }
#line 55 "prog_io_util.m"
}

#line 1319 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_var_1_0(
#line 1319 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_14,
#line 1319 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 1319 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 1319 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 1319 "prog_io_util.m"
{
#line 1319 "prog_io_util.m"
  {
#line 1319 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1319 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_12 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 1319 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_13 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 1319 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_12 == parse_tree__prog_io_util__CastY_13);
#line 1319 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 6162 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1319 "prog_io_util.m"
    else
#line 1319 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1319 "prog_io_util.m"
      {
#line 1319 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1319 "prog_io_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1319 "prog_io_util.m"
          {
#line 1319 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1319 "prog_io_util.m"
            {
#line 1319 "prog_io_util.m"
              mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_14, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_19_19, parse_tree__prog_io_util__V_5_5);
#line 1319 "prog_io_util.m"
              return;
            }
#line 1319 "prog_io_util.m"
          }
#line 1319 "prog_io_util.m"
        else
#line 6191 "parse_tree.prog_io_util.c"
          *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1319 "prog_io_util.m"
      }
#line 1319 "prog_io_util.m"
    else
#line 1319 "prog_io_util.m"
      {
#line 1319 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1319 "prog_io_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6204 "parse_tree.prog_io_util.c"
          *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1319 "prog_io_util.m"
        else
#line 1319 "prog_io_util.m"
          {
#line 1319 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1319 "prog_io_util.m"
            {
#line 1319 "prog_io_util.m"
              mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_14, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_20_20, parse_tree__prog_io_util__V_11_11);
#line 1319 "prog_io_util.m"
              return;
            }
#line 1319 "prog_io_util.m"
          }
#line 1319 "prog_io_util.m"
      }
#line 1319 "prog_io_util.m"
  }
#line 1319 "prog_io_util.m"
}

#line 1319 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_var_1_0(
#line 1319 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
#line 1319 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 1319 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 1319 "prog_io_util.m"
{
#line 1319 "prog_io_util.m"
  {
#line 1319 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1319 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_7 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 1319 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_8 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 1319 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_7 == parse_tree__prog_io_util__CastY_8);
#line 1319 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1319 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1319 "prog_io_util.m"
    else
#line 1319 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1319 "prog_io_util.m"
      {
#line 1319 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1319 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_4_4;

#line 1319 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1319 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1319 "prog_io_util.m"
          {
#line 1319 "prog_io_util.m"
            parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6274 "parse_tree.prog_io_util.c"
            {
#line 6276 "parse_tree.prog_io_util.c"
              return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_9, parse_tree__prog_io_util__V_3_3, parse_tree__prog_io_util__V_4_4);
            }
#line 1319 "prog_io_util.m"
          }
#line 1319 "prog_io_util.m"
      }
#line 1319 "prog_io_util.m"
    else
#line 1319 "prog_io_util.m"
      {
#line 1319 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1319 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_6_6;

#line 1319 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1319 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1319 "prog_io_util.m"
          {
#line 1319 "prog_io_util.m"
            parse_tree__prog_io_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6300 "parse_tree.prog_io_util.c"
            {
#line 6302 "parse_tree.prog_io_util.c"
              return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_9, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_6_6);
            }
#line 1319 "prog_io_util.m"
          }
#line 1319 "prog_io_util.m"
      }
#line 1319 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1319 "prog_io_util.m"
  }
#line 1319 "prog_io_util.m"
}

#line 1380 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0(
#line 1380 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_38,
#line 1380 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 1380 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 1380 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 1380 "prog_io_util.m"
{
#line 1380 "prog_io_util.m"
  {
#line 1380 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1380 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_36 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 1380 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_37 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 1380 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_36 == parse_tree__prog_io_util__CastY_37);
#line 1380 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 6342 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1380 "prog_io_util.m"
    else
#line 1380 "prog_io_util.m"
#line 1380 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) {
#line 1380 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1380 "prog_io_util.m"
        case (MR_Integer) 0:
#line 1380 "prog_io_util.m"
          {
#line 1380 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1380 "prog_io_util.m"
#line 1380 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 1380 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1380 "prog_io_util.m"
              case (MR_Integer) 0:
#line 1380 "prog_io_util.m"
                {
#line 1380 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1380 "prog_io_util.m"
                  {
#line 1380 "prog_io_util.m"
                    mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_38, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_49_49, parse_tree__prog_io_util__V_5_5);
#line 1380 "prog_io_util.m"
                    return;
                  }
#line 1380 "prog_io_util.m"
                }
#line 1380 "prog_io_util.m"
                break;
#line 1380 "prog_io_util.m"
              case (MR_Integer) 1:
#line 6383 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1380 "prog_io_util.m"
                break;
#line 1380 "prog_io_util.m"
              case (MR_Integer) 2:
#line 6389 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1380 "prog_io_util.m"
                break;
#line 1380 "prog_io_util.m"
              case (MR_Integer) 3:
#line 6395 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1380 "prog_io_util.m"
                break;
#line 1380 "prog_io_util.m"
            }
#line 1380 "prog_io_util.m"
          }
#line 1380 "prog_io_util.m"
          break;
#line 1380 "prog_io_util.m"
        case (MR_Integer) 1:
#line 1380 "prog_io_util.m"
          {
#line 1380 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1380 "prog_io_util.m"
#line 1380 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 1380 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1380 "prog_io_util.m"
              case (MR_Integer) 0:
#line 6419 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1380 "prog_io_util.m"
                break;
#line 1380 "prog_io_util.m"
              case (MR_Integer) 1:
#line 1380 "prog_io_util.m"
                {
#line 1380 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1380 "prog_io_util.m"
                  {
#line 1380 "prog_io_util.m"
                    mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_38, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_50_50, parse_tree__prog_io_util__V_15_15);
#line 1380 "prog_io_util.m"
                    return;
                  }
#line 1380 "prog_io_util.m"
                }
#line 1380 "prog_io_util.m"
                break;
#line 1380 "prog_io_util.m"
              case (MR_Integer) 2:
#line 6443 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1380 "prog_io_util.m"
                break;
#line 1380 "prog_io_util.m"
              case (MR_Integer) 3:
#line 6449 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1380 "prog_io_util.m"
                break;
#line 1380 "prog_io_util.m"
            }
#line 1380 "prog_io_util.m"
          }
#line 1380 "prog_io_util.m"
          break;
#line 1380 "prog_io_util.m"
        case (MR_Integer) 2:
#line 1380 "prog_io_util.m"
          {
#line 1380 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1380 "prog_io_util.m"
#line 1380 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 1380 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1380 "prog_io_util.m"
              case (MR_Integer) 0:
#line 6473 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1380 "prog_io_util.m"
                break;
#line 1380 "prog_io_util.m"
              case (MR_Integer) 1:
#line 6479 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1380 "prog_io_util.m"
                break;
#line 1380 "prog_io_util.m"
              case (MR_Integer) 2:
#line 1380 "prog_io_util.m"
                {
#line 1380 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1380 "prog_io_util.m"
                  {
#line 1380 "prog_io_util.m"
                    mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_38, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_48_48, parse_tree__prog_io_util__V_25_25);
#line 1380 "prog_io_util.m"
                    return;
                  }
#line 1380 "prog_io_util.m"
                }
#line 1380 "prog_io_util.m"
                break;
#line 1380 "prog_io_util.m"
              case (MR_Integer) 3:
#line 6503 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1380 "prog_io_util.m"
                break;
#line 1380 "prog_io_util.m"
            }
#line 1380 "prog_io_util.m"
          }
#line 1380 "prog_io_util.m"
          break;
#line 1380 "prog_io_util.m"
        case (MR_Integer) 3:
#line 1380 "prog_io_util.m"
          {
#line 1380 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1380 "prog_io_util.m"
#line 1380 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 1380 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1380 "prog_io_util.m"
              case (MR_Integer) 0:
#line 6527 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1380 "prog_io_util.m"
                break;
#line 1380 "prog_io_util.m"
              case (MR_Integer) 1:
#line 6533 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1380 "prog_io_util.m"
                break;
#line 1380 "prog_io_util.m"
              case (MR_Integer) 2:
#line 6539 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1380 "prog_io_util.m"
                break;
#line 1380 "prog_io_util.m"
              case (MR_Integer) 3:
#line 1380 "prog_io_util.m"
                {
#line 1380 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1380 "prog_io_util.m"
                  {
#line 1380 "prog_io_util.m"
                    mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_38, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_47_47, parse_tree__prog_io_util__V_35_35);
#line 1380 "prog_io_util.m"
                    return;
                  }
#line 1380 "prog_io_util.m"
                }
#line 1380 "prog_io_util.m"
                break;
#line 1380 "prog_io_util.m"
            }
#line 1380 "prog_io_util.m"
          }
#line 1380 "prog_io_util.m"
          break;
#line 1380 "prog_io_util.m"
      }
#line 1380 "prog_io_util.m"
  }
#line 1380 "prog_io_util.m"
}

#line 1380 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0(
#line 1380 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_13,
#line 1380 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 1380 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 1380 "prog_io_util.m"
{
#line 1380 "prog_io_util.m"
  {
#line 1380 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1380 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_11 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 1380 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_12 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 1380 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_11 == parse_tree__prog_io_util__CastY_12);
#line 1380 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1380 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1380 "prog_io_util.m"
    else
#line 1380 "prog_io_util.m"
#line 1380 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) {
#line 1380 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1380 "prog_io_util.m"
        case (MR_Integer) 0:
#line 1380 "prog_io_util.m"
          {
#line 1380 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1380 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_4_4;

#line 1380 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1380 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1380 "prog_io_util.m"
              {
#line 1380 "prog_io_util.m"
                parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6624 "parse_tree.prog_io_util.c"
                {
#line 6626 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_13, parse_tree__prog_io_util__V_3_3, parse_tree__prog_io_util__V_4_4);
                }
#line 1380 "prog_io_util.m"
              }
#line 1380 "prog_io_util.m"
          }
#line 1380 "prog_io_util.m"
          break;
#line 1380 "prog_io_util.m"
        case (MR_Integer) 1:
#line 1380 "prog_io_util.m"
          {
#line 1380 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1380 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_6_6;

#line 1380 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1380 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1380 "prog_io_util.m"
              {
#line 1380 "prog_io_util.m"
                parse_tree__prog_io_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6652 "parse_tree.prog_io_util.c"
                {
#line 6654 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_13, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_6_6);
                }
#line 1380 "prog_io_util.m"
              }
#line 1380 "prog_io_util.m"
          }
#line 1380 "prog_io_util.m"
          break;
#line 1380 "prog_io_util.m"
        case (MR_Integer) 2:
#line 1380 "prog_io_util.m"
          {
#line 1380 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1380 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_8_8;

#line 1380 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1380 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1380 "prog_io_util.m"
              {
#line 1380 "prog_io_util.m"
                parse_tree__prog_io_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6680 "parse_tree.prog_io_util.c"
                {
#line 6682 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_13, parse_tree__prog_io_util__V_7_7, parse_tree__prog_io_util__V_8_8);
                }
#line 1380 "prog_io_util.m"
              }
#line 1380 "prog_io_util.m"
          }
#line 1380 "prog_io_util.m"
          break;
#line 1380 "prog_io_util.m"
        case (MR_Integer) 3:
#line 1380 "prog_io_util.m"
          {
#line 1380 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1380 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_10_10;

#line 1380 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 1380 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1380 "prog_io_util.m"
              {
#line 1380 "prog_io_util.m"
                parse_tree__prog_io_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6708 "parse_tree.prog_io_util.c"
                {
#line 6710 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_13, parse_tree__prog_io_util__V_9_9, parse_tree__prog_io_util__V_10_10);
                }
#line 1380 "prog_io_util.m"
              }
#line 1380 "prog_io_util.m"
          }
#line 1380 "prog_io_util.m"
          break;
#line 1380 "prog_io_util.m"
      }
#line 1380 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1380 "prog_io_util.m"
  }
#line 1380 "prog_io_util.m"
}

#line 50 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_pred_or_func_1_0(
#line 50 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_6,
#line 50 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 50 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 50 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 50 "prog_io_util.m"
{
#line 50 "prog_io_util.m"
  {
#line 50 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 50 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeInfo_9_9;
#line 50 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeInfo_11_11;
#line 50 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeInfo_13_13;
#line 50 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_4 = parse_tree__prog_io_util__HeadVar__2_2;
#line 50 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_5 = parse_tree__prog_io_util__HeadVar__3_3;

#line 6756 "parse_tree.prog_io_util.c"
    {
#line 6758 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6760 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6762 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_6));
#line 6764 "parse_tree.prog_io_util.c"
    }
#line 6766 "parse_tree.prog_io_util.c"
    {
#line 6768 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6770 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 6772 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_6));
#line 6774 "parse_tree.prog_io_util.c"
    }
#line 6776 "parse_tree.prog_io_util.c"
    {
#line 6778 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6780 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 6782 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_13_13, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_9_9));
#line 6784 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_13_13, 2) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_11_11));
#line 6786 "parse_tree.prog_io_util.c"
    }
#line 50 "prog_io_util.m"
    {
#line 50 "prog_io_util.m"
      parse_tree__maybe_error____Compare____maybe2_2_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__prog_io_util__TypeInfo_13_13, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__Cast_HeadVar1_4, parse_tree__prog_io_util__Cast_HeadVar2_5);
#line 50 "prog_io_util.m"
      return;
    }
#line 50 "prog_io_util.m"
  }
#line 50 "prog_io_util.m"
}

#line 50 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_pred_or_func_1_0(
#line 50 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_5,
#line 50 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 50 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 50 "prog_io_util.m"
{
#line 50 "prog_io_util.m"
  {
#line 50 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 50 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeInfo_8_8;
#line 50 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeInfo_10_10;
#line 50 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeInfo_12_12;
#line 50 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_3 = parse_tree__prog_io_util__HeadVar__1_1;
#line 50 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_4 = parse_tree__prog_io_util__HeadVar__2_2;

#line 6826 "parse_tree.prog_io_util.c"
    {
#line 6828 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6830 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6832 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_5));
#line 6834 "parse_tree.prog_io_util.c"
    }
#line 6836 "parse_tree.prog_io_util.c"
    {
#line 6838 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6840 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 6842 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_10_10, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_5));
#line 6844 "parse_tree.prog_io_util.c"
    }
#line 6846 "parse_tree.prog_io_util.c"
    {
#line 6848 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6850 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_12_12, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 6852 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_12_12, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_8_8));
#line 6854 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_12_12, 2) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_10_10));
#line 6856 "parse_tree.prog_io_util.c"
    }
#line 50 "prog_io_util.m"
    {
#line 50 "prog_io_util.m"
      return parse_tree__prog_io_util__succeeded = parse_tree__maybe_error____Unify____maybe2_2_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__prog_io_util__TypeInfo_12_12, parse_tree__prog_io_util__Cast_HeadVar1_3, parse_tree__prog_io_util__Cast_HeadVar2_4);
    }
#line 50 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 50 "prog_io_util.m"
  }
#line 50 "prog_io_util.m"
}

#line 47 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_1_0(
#line 47 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_6,
#line 47 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 47 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 47 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 47 "prog_io_util.m"
{
#line 47 "prog_io_util.m"
  {
#line 47 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 47 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeInfo_9_9;
#line 47 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeInfo_11_11;
#line 47 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_4 = parse_tree__prog_io_util__HeadVar__2_2;
#line 47 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_5 = parse_tree__prog_io_util__HeadVar__3_3;

#line 6896 "parse_tree.prog_io_util.c"
    {
#line 6898 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6900 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
#line 6902 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_6));
#line 6904 "parse_tree.prog_io_util.c"
    }
#line 6906 "parse_tree.prog_io_util.c"
    {
#line 6908 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6910 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6912 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_9_9));
#line 6914 "parse_tree.prog_io_util.c"
    }
#line 47 "prog_io_util.m"
    {
#line 47 "prog_io_util.m"
      parse_tree__maybe_error____Compare____maybe2_2_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__prog_io_util__TypeInfo_11_11, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__Cast_HeadVar1_4, parse_tree__prog_io_util__Cast_HeadVar2_5);
#line 47 "prog_io_util.m"
      return;
    }
#line 47 "prog_io_util.m"
  }
#line 47 "prog_io_util.m"
}

#line 47 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_1_0(
#line 47 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_5,
#line 47 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 47 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 47 "prog_io_util.m"
{
#line 47 "prog_io_util.m"
  {
#line 47 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 47 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeInfo_8_8;
#line 47 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeInfo_10_10;
#line 47 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_3 = parse_tree__prog_io_util__HeadVar__1_1;
#line 47 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_4 = parse_tree__prog_io_util__HeadVar__2_2;

#line 6952 "parse_tree.prog_io_util.c"
    {
#line 6954 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6956 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
#line 6958 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_5));
#line 6960 "parse_tree.prog_io_util.c"
    }
#line 6962 "parse_tree.prog_io_util.c"
    {
#line 6964 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6966 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6968 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_10_10, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_8_8));
#line 6970 "parse_tree.prog_io_util.c"
    }
#line 47 "prog_io_util.m"
    {
#line 47 "prog_io_util.m"
      return parse_tree__prog_io_util__succeeded = parse_tree__maybe_error____Unify____maybe2_2_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__prog_io_util__TypeInfo_10_10, parse_tree__prog_io_util__Cast_HeadVar1_3, parse_tree__prog_io_util__Cast_HeadVar2_4);
    }
#line 47 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 47 "prog_io_util.m"
  }
#line 47 "prog_io_util.m"
}

#line 46 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_0_0(
#line 46 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 46 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 46 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 46 "prog_io_util.m"
{
#line 46 "prog_io_util.m"
  {
#line 46 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 46 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_4 = parse_tree__prog_io_util__HeadVar__2_2;
#line 46 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_5 = parse_tree__prog_io_util__HeadVar__3_3;

#line 46 "prog_io_util.m"
    {
#line 46 "prog_io_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_2[1], parse_tree__prog_io_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar2_5)));
#line 46 "prog_io_util.m"
      return;
    }
#line 46 "prog_io_util.m"
  }
#line 46 "prog_io_util.m"
}

#line 46 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_0_0(
#line 46 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 46 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 46 "prog_io_util.m"
{
#line 46 "prog_io_util.m"
  {
#line 46 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 46 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_3 = parse_tree__prog_io_util__HeadVar__1_1;
#line 46 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_4 = parse_tree__prog_io_util__HeadVar__2_2;

#line 46 "prog_io_util.m"
    {
#line 46 "prog_io_util.m"
      return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_2[1], ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar2_4)));
    }
#line 46 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 46 "prog_io_util.m"
  }
#line 46 "prog_io_util.m"
}

#line 443 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_type_kind_1_0(
#line 443 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_18,
#line 443 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 443 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 443 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 443 "prog_io_util.m"
{
#line 443 "prog_io_util.m"
  {
#line 443 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 443 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_16 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 443 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_17 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 443 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_16 == parse_tree__prog_io_util__CastY_17);
#line 443 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 7072 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 443 "prog_io_util.m"
    else
#line 443 "prog_io_util.m"
#line 443 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) {
#line 443 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 443 "prog_io_util.m"
        case (MR_Integer) 0:
#line 443 "prog_io_util.m"
#line 443 "prog_io_util.m"
          switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 443 "prog_io_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 443 "prog_io_util.m"
            case (MR_Integer) 0:
#line 443 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 443 "prog_io_util.m"
              break;
#line 443 "prog_io_util.m"
            case (MR_Integer) 1:
#line 7096 "parse_tree.prog_io_util.c"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 443 "prog_io_util.m"
              break;
#line 443 "prog_io_util.m"
            case (MR_Integer) 2:
#line 7102 "parse_tree.prog_io_util.c"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 443 "prog_io_util.m"
              break;
#line 443 "prog_io_util.m"
          }
#line 443 "prog_io_util.m"
          break;
#line 443 "prog_io_util.m"
        case (MR_Integer) 1:
#line 443 "prog_io_util.m"
          {
#line 443 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 443 "prog_io_util.m"
#line 443 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 443 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 443 "prog_io_util.m"
              case (MR_Integer) 0:
#line 7124 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 443 "prog_io_util.m"
                break;
#line 443 "prog_io_util.m"
              case (MR_Integer) 1:
#line 443 "prog_io_util.m"
                {
#line 443 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 443 "prog_io_util.m"
                  {
#line 443 "prog_io_util.m"
                    parse_tree__prog_data____Compare____mer_type_0_0(parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_23_23, parse_tree__prog_io_util__V_5_5);
#line 443 "prog_io_util.m"
                    return;
                  }
#line 443 "prog_io_util.m"
                }
#line 443 "prog_io_util.m"
                break;
#line 443 "prog_io_util.m"
              case (MR_Integer) 2:
#line 7148 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 443 "prog_io_util.m"
                break;
#line 443 "prog_io_util.m"
            }
#line 443 "prog_io_util.m"
          }
#line 443 "prog_io_util.m"
          break;
#line 443 "prog_io_util.m"
        case (MR_Integer) 2:
#line 443 "prog_io_util.m"
          {
#line 443 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 443 "prog_io_util.m"
#line 443 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 443 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 443 "prog_io_util.m"
              case (MR_Integer) 0:
#line 7172 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 443 "prog_io_util.m"
                break;
#line 443 "prog_io_util.m"
              case (MR_Integer) 1:
#line 7178 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 443 "prog_io_util.m"
                break;
#line 443 "prog_io_util.m"
              case (MR_Integer) 2:
#line 443 "prog_io_util.m"
                {
#line 443 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 443 "prog_io_util.m"
                  {
#line 443 "prog_io_util.m"
                    parse_tree__prog_io_util____Compare____known_compound_type_kind_1_0(parse_tree__prog_io_util__TypeInfo_for_T_18, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_22_22, parse_tree__prog_io_util__V_12_12);
#line 443 "prog_io_util.m"
                    return;
                  }
#line 443 "prog_io_util.m"
                }
#line 443 "prog_io_util.m"
                break;
#line 443 "prog_io_util.m"
            }
#line 443 "prog_io_util.m"
          }
#line 443 "prog_io_util.m"
          break;
#line 443 "prog_io_util.m"
      }
#line 443 "prog_io_util.m"
  }
#line 443 "prog_io_util.m"
}

#line 443 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_type_kind_1_0(
#line 443 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_11,
#line 443 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 443 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 443 "prog_io_util.m"
{
#line 443 "prog_io_util.m"
  {
#line 443 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 443 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_9 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 443 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_10 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 443 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_9 == parse_tree__prog_io_util__CastY_10);
#line 443 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 443 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 443 "prog_io_util.m"
    else
#line 443 "prog_io_util.m"
#line 443 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) {
#line 443 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 443 "prog_io_util.m"
        case (MR_Integer) 0:
#line 443 "prog_io_util.m"
          {
#line 443 "prog_io_util.m"
            MR_Integer parse_tree__prog_io_util__CastX_7 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 443 "prog_io_util.m"
            MR_Integer parse_tree__prog_io_util__CastY_8 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 443 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastY_8 == parse_tree__prog_io_util__CastX_7);
#line 443 "prog_io_util.m"
          }
#line 443 "prog_io_util.m"
          break;
#line 443 "prog_io_util.m"
        case (MR_Integer) 1:
#line 443 "prog_io_util.m"
          {
#line 443 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 443 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_4_4;

#line 443 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 443 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 443 "prog_io_util.m"
              {
#line 443 "prog_io_util.m"
                parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 7278 "parse_tree.prog_io_util.c"
                {
#line 7280 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__prog_io_util__V_3_3, parse_tree__prog_io_util__V_4_4);
                }
#line 443 "prog_io_util.m"
              }
#line 443 "prog_io_util.m"
          }
#line 443 "prog_io_util.m"
          break;
#line 443 "prog_io_util.m"
        case (MR_Integer) 2:
#line 443 "prog_io_util.m"
          {
#line 443 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 443 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_6_6;

#line 443 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 443 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 443 "prog_io_util.m"
              {
#line 443 "prog_io_util.m"
                parse_tree__prog_io_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 7306 "parse_tree.prog_io_util.c"
                {
#line 7308 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____known_compound_type_kind_1_0(parse_tree__prog_io_util__TypeInfo_for_T_11, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_6_6);
                }
#line 443 "prog_io_util.m"
              }
#line 443 "prog_io_util.m"
          }
#line 443 "prog_io_util.m"
          break;
#line 443 "prog_io_util.m"
      }
#line 443 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 443 "prog_io_util.m"
  }
#line 443 "prog_io_util.m"
}

#line 871 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_inst_kind_1_0(
#line 871 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_18,
#line 871 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 871 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 871 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 871 "prog_io_util.m"
{
#line 871 "prog_io_util.m"
  {
#line 871 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 871 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_16 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 871 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_17 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 871 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_16 == parse_tree__prog_io_util__CastY_17);
#line 871 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 7352 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 871 "prog_io_util.m"
    else
#line 871 "prog_io_util.m"
#line 871 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) {
#line 871 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 871 "prog_io_util.m"
        case (MR_Integer) 0:
#line 871 "prog_io_util.m"
#line 871 "prog_io_util.m"
          switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 871 "prog_io_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 871 "prog_io_util.m"
            case (MR_Integer) 0:
#line 871 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 871 "prog_io_util.m"
              break;
#line 871 "prog_io_util.m"
            case (MR_Integer) 1:
#line 7376 "parse_tree.prog_io_util.c"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 871 "prog_io_util.m"
              break;
#line 871 "prog_io_util.m"
            case (MR_Integer) 2:
#line 7382 "parse_tree.prog_io_util.c"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 871 "prog_io_util.m"
              break;
#line 871 "prog_io_util.m"
          }
#line 871 "prog_io_util.m"
          break;
#line 871 "prog_io_util.m"
        case (MR_Integer) 1:
#line 871 "prog_io_util.m"
          {
#line 871 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 871 "prog_io_util.m"
#line 871 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 871 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 871 "prog_io_util.m"
              case (MR_Integer) 0:
#line 7404 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 871 "prog_io_util.m"
                break;
#line 871 "prog_io_util.m"
              case (MR_Integer) 1:
#line 871 "prog_io_util.m"
                {
#line 871 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 871 "prog_io_util.m"
                  {
#line 871 "prog_io_util.m"
                    parse_tree__prog_data____Compare____mer_inst_0_0(parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_23_23, parse_tree__prog_io_util__V_5_5);
#line 871 "prog_io_util.m"
                    return;
                  }
#line 871 "prog_io_util.m"
                }
#line 871 "prog_io_util.m"
                break;
#line 871 "prog_io_util.m"
              case (MR_Integer) 2:
#line 7428 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 871 "prog_io_util.m"
                break;
#line 871 "prog_io_util.m"
            }
#line 871 "prog_io_util.m"
          }
#line 871 "prog_io_util.m"
          break;
#line 871 "prog_io_util.m"
        case (MR_Integer) 2:
#line 871 "prog_io_util.m"
          {
#line 871 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 871 "prog_io_util.m"
#line 871 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 871 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 871 "prog_io_util.m"
              case (MR_Integer) 0:
#line 7452 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 871 "prog_io_util.m"
                break;
#line 871 "prog_io_util.m"
              case (MR_Integer) 1:
#line 7458 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 871 "prog_io_util.m"
                break;
#line 871 "prog_io_util.m"
              case (MR_Integer) 2:
#line 871 "prog_io_util.m"
                {
#line 871 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 871 "prog_io_util.m"
                  {
#line 871 "prog_io_util.m"
                    parse_tree__prog_io_util____Compare____known_compound_inst_kind_1_0(parse_tree__prog_io_util__TypeInfo_for_T_18, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_22_22, parse_tree__prog_io_util__V_12_12);
#line 871 "prog_io_util.m"
                    return;
                  }
#line 871 "prog_io_util.m"
                }
#line 871 "prog_io_util.m"
                break;
#line 871 "prog_io_util.m"
            }
#line 871 "prog_io_util.m"
          }
#line 871 "prog_io_util.m"
          break;
#line 871 "prog_io_util.m"
      }
#line 871 "prog_io_util.m"
  }
#line 871 "prog_io_util.m"
}

#line 871 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_inst_kind_1_0(
#line 871 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_11,
#line 871 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 871 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 871 "prog_io_util.m"
{
#line 871 "prog_io_util.m"
  {
#line 871 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 871 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_9 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 871 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_10 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 871 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_9 == parse_tree__prog_io_util__CastY_10);
#line 871 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 871 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 871 "prog_io_util.m"
    else
#line 871 "prog_io_util.m"
#line 871 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) {
#line 871 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 871 "prog_io_util.m"
        case (MR_Integer) 0:
#line 871 "prog_io_util.m"
          {
#line 871 "prog_io_util.m"
            MR_Integer parse_tree__prog_io_util__CastX_7 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 871 "prog_io_util.m"
            MR_Integer parse_tree__prog_io_util__CastY_8 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 871 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastY_8 == parse_tree__prog_io_util__CastX_7);
#line 871 "prog_io_util.m"
          }
#line 871 "prog_io_util.m"
          break;
#line 871 "prog_io_util.m"
        case (MR_Integer) 1:
#line 871 "prog_io_util.m"
          {
#line 871 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 871 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_4_4;

#line 871 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 871 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 871 "prog_io_util.m"
              {
#line 871 "prog_io_util.m"
                parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 7558 "parse_tree.prog_io_util.c"
                {
#line 7560 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__prog_io_util__V_3_3, parse_tree__prog_io_util__V_4_4);
                }
#line 871 "prog_io_util.m"
              }
#line 871 "prog_io_util.m"
          }
#line 871 "prog_io_util.m"
          break;
#line 871 "prog_io_util.m"
        case (MR_Integer) 2:
#line 871 "prog_io_util.m"
          {
#line 871 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 871 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_6_6;

#line 871 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 871 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 871 "prog_io_util.m"
              {
#line 871 "prog_io_util.m"
                parse_tree__prog_io_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 7586 "parse_tree.prog_io_util.c"
                {
#line 7588 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____known_compound_inst_kind_1_0(parse_tree__prog_io_util__TypeInfo_for_T_11, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_6_6);
                }
#line 871 "prog_io_util.m"
              }
#line 871 "prog_io_util.m"
          }
#line 871 "prog_io_util.m"
          break;
#line 871 "prog_io_util.m"
      }
#line 871 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 871 "prog_io_util.m"
  }
#line 871 "prog_io_util.m"
}

#line 436 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_type_kind_1_0(
#line 436 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_78,
#line 436 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 436 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 436 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 436 "prog_io_util.m"
{
#line 436 "prog_io_util.m"
  {
#line 436 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 436 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_76 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 436 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_77 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 436 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_76 == parse_tree__prog_io_util__CastY_77);
#line 436 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 7632 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 436 "prog_io_util.m"
    else
#line 436 "prog_io_util.m"
#line 436 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) {
#line 436 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 436 "prog_io_util.m"
        case (MR_Integer) 0:
#line 436 "prog_io_util.m"
          {
#line 436 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 436 "prog_io_util.m"
#line 436 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 436 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 436 "prog_io_util.m"
              case (MR_Integer) 0:
#line 436 "prog_io_util.m"
                {
#line 436 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 436 "prog_io_util.m"
                  {
#line 436 "prog_io_util.m"
                    mercury__list____Compare____list_1_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_92_92, parse_tree__prog_io_util__V_5_5);
#line 436 "prog_io_util.m"
                    return;
                  }
#line 436 "prog_io_util.m"
                }
#line 436 "prog_io_util.m"
                break;
#line 436 "prog_io_util.m"
              case (MR_Integer) 1:
#line 7673 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 436 "prog_io_util.m"
                break;
#line 436 "prog_io_util.m"
              case (MR_Integer) 2:
#line 7679 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 436 "prog_io_util.m"
                break;
#line 436 "prog_io_util.m"
              case (MR_Integer) 3:
#line 436 "prog_io_util.m"
#line 436 "prog_io_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 436 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 436 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 7692 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 436 "prog_io_util.m"
                    break;
#line 436 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 7698 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 436 "prog_io_util.m"
                    break;
#line 436 "prog_io_util.m"
                }
#line 436 "prog_io_util.m"
                break;
#line 436 "prog_io_util.m"
            }
#line 436 "prog_io_util.m"
          }
#line 436 "prog_io_util.m"
          break;
#line 436 "prog_io_util.m"
        case (MR_Integer) 1:
#line 436 "prog_io_util.m"
          {
#line 436 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_87_87 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 436 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_88_88 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));

#line 436 "prog_io_util.m"
#line 436 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 436 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 436 "prog_io_util.m"
              case (MR_Integer) 0:
#line 7728 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 436 "prog_io_util.m"
                break;
#line 436 "prog_io_util.m"
              case (MR_Integer) 1:
#line 436 "prog_io_util.m"
                {
#line 436 "prog_io_util.m"
                  MR_Box parse_tree__prog_io_util__V_21_21 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0));
#line 436 "prog_io_util.m"
                  MR_Box parse_tree__prog_io_util__V_22_22 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1));
#line 436 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_23_23;

#line 436 "prog_io_util.m"
                  {
#line 436 "prog_io_util.m"
                    mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, &parse_tree__prog_io_util__V_23_23, parse_tree__prog_io_util__V_88_88, parse_tree__prog_io_util__V_21_21);
                  }
#line 7748 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_23_23 == (MR_Integer) 0);
#line 436 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 436 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 436 "prog_io_util.m"
                    *parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__V_23_23;
#line 436 "prog_io_util.m"
                  else
#line 436 "prog_io_util.m"
                    {
#line 436 "prog_io_util.m"
                      mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_87_87, parse_tree__prog_io_util__V_22_22);
#line 436 "prog_io_util.m"
                      return;
                    }
#line 436 "prog_io_util.m"
                }
#line 436 "prog_io_util.m"
                break;
#line 436 "prog_io_util.m"
              case (MR_Integer) 2:
#line 7771 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 436 "prog_io_util.m"
                break;
#line 436 "prog_io_util.m"
              case (MR_Integer) 3:
#line 436 "prog_io_util.m"
#line 436 "prog_io_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 436 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 436 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 7784 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 436 "prog_io_util.m"
                    break;
#line 436 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 7790 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 436 "prog_io_util.m"
                    break;
#line 436 "prog_io_util.m"
                }
#line 436 "prog_io_util.m"
                break;
#line 436 "prog_io_util.m"
            }
#line 436 "prog_io_util.m"
          }
#line 436 "prog_io_util.m"
          break;
#line 436 "prog_io_util.m"
        case (MR_Integer) 2:
#line 436 "prog_io_util.m"
          {
#line 436 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 436 "prog_io_util.m"
#line 436 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 436 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 436 "prog_io_util.m"
              case (MR_Integer) 0:
#line 7818 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 436 "prog_io_util.m"
                break;
#line 436 "prog_io_util.m"
              case (MR_Integer) 1:
#line 7824 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 436 "prog_io_util.m"
                break;
#line 436 "prog_io_util.m"
              case (MR_Integer) 2:
#line 436 "prog_io_util.m"
                {
#line 436 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 436 "prog_io_util.m"
                  {
#line 436 "prog_io_util.m"
                    mercury__list____Compare____list_1_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_89_89, parse_tree__prog_io_util__V_40_40);
#line 436 "prog_io_util.m"
                    return;
                  }
#line 436 "prog_io_util.m"
                }
#line 436 "prog_io_util.m"
                break;
#line 436 "prog_io_util.m"
              case (MR_Integer) 3:
#line 436 "prog_io_util.m"
#line 436 "prog_io_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 436 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 436 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 7855 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 436 "prog_io_util.m"
                    break;
#line 436 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 7861 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 436 "prog_io_util.m"
                    break;
#line 436 "prog_io_util.m"
                }
#line 436 "prog_io_util.m"
                break;
#line 436 "prog_io_util.m"
            }
#line 436 "prog_io_util.m"
          }
#line 436 "prog_io_util.m"
          break;
#line 436 "prog_io_util.m"
        case (MR_Integer) 3:
#line 436 "prog_io_util.m"
#line 436 "prog_io_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)))) {
#line 436 "prog_io_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 436 "prog_io_util.m"
            case (MR_Integer) 0:
#line 436 "prog_io_util.m"
              {
#line 436 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_90_90 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 2));
#line 436 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));

#line 436 "prog_io_util.m"
#line 436 "prog_io_util.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 436 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 436 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 7898 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 436 "prog_io_util.m"
                    break;
#line 436 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 7904 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 436 "prog_io_util.m"
                    break;
#line 436 "prog_io_util.m"
                  case (MR_Integer) 2:
#line 7910 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 436 "prog_io_util.m"
                    break;
#line 436 "prog_io_util.m"
                  case (MR_Integer) 3:
#line 436 "prog_io_util.m"
#line 436 "prog_io_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 436 "prog_io_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 436 "prog_io_util.m"
                      case (MR_Integer) 0:
#line 436 "prog_io_util.m"
                        {
#line 436 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1)));
#line 436 "prog_io_util.m"
                          MR_Box parse_tree__prog_io_util__V_59_59 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 2));
#line 436 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_60_60;
#line 436 "prog_io_util.m"
                          MR_Integer parse_tree__prog_io_util__V_93_93 = (MR_Integer) parse_tree__prog_io_util__V_91_91;
#line 436 "prog_io_util.m"
                          MR_Integer parse_tree__prog_io_util__V_94_94 = (MR_Integer) parse_tree__prog_io_util__V_58_58;

#line 436 "prog_io_util.m"
                          {
#line 436 "prog_io_util.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_io_util__V_60_60, parse_tree__prog_io_util__V_93_93, parse_tree__prog_io_util__V_94_94);
                          }
#line 7941 "parse_tree.prog_io_util.c"
                          parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_60_60 == (MR_Integer) 0);
#line 436 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 436 "prog_io_util.m"
                          if (parse_tree__prog_io_util__succeeded)
#line 436 "prog_io_util.m"
                            *parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__V_60_60;
#line 436 "prog_io_util.m"
                          else
#line 436 "prog_io_util.m"
                            {
#line 436 "prog_io_util.m"
                              mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_90_90, parse_tree__prog_io_util__V_59_59);
#line 436 "prog_io_util.m"
                              return;
                            }
#line 436 "prog_io_util.m"
                        }
#line 436 "prog_io_util.m"
                        break;
#line 436 "prog_io_util.m"
                      case (MR_Integer) 1:
#line 7964 "parse_tree.prog_io_util.c"
                        *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 436 "prog_io_util.m"
                        break;
#line 436 "prog_io_util.m"
                    }
#line 436 "prog_io_util.m"
                    break;
#line 436 "prog_io_util.m"
                }
#line 436 "prog_io_util.m"
              }
#line 436 "prog_io_util.m"
              break;
#line 436 "prog_io_util.m"
            case (MR_Integer) 1:
#line 436 "prog_io_util.m"
              {
#line 436 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));

#line 436 "prog_io_util.m"
#line 436 "prog_io_util.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 436 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 436 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 7992 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 436 "prog_io_util.m"
                    break;
#line 436 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 7998 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 436 "prog_io_util.m"
                    break;
#line 436 "prog_io_util.m"
                  case (MR_Integer) 2:
#line 8004 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 436 "prog_io_util.m"
                    break;
#line 436 "prog_io_util.m"
                  case (MR_Integer) 3:
#line 436 "prog_io_util.m"
#line 436 "prog_io_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 436 "prog_io_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 436 "prog_io_util.m"
                      case (MR_Integer) 0:
#line 8017 "parse_tree.prog_io_util.c"
                        *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 436 "prog_io_util.m"
                        break;
#line 436 "prog_io_util.m"
                      case (MR_Integer) 1:
#line 436 "prog_io_util.m"
                        {
#line 436 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1)));

#line 436 "prog_io_util.m"
                          {
#line 436 "prog_io_util.m"
                            mercury__list____Compare____list_1_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_86_86, parse_tree__prog_io_util__V_75_75);
#line 436 "prog_io_util.m"
                            return;
                          }
#line 436 "prog_io_util.m"
                        }
#line 436 "prog_io_util.m"
                        break;
#line 436 "prog_io_util.m"
                    }
#line 436 "prog_io_util.m"
                    break;
#line 436 "prog_io_util.m"
                }
#line 436 "prog_io_util.m"
              }
#line 436 "prog_io_util.m"
              break;
#line 436 "prog_io_util.m"
          }
#line 436 "prog_io_util.m"
          break;
#line 436 "prog_io_util.m"
      }
#line 436 "prog_io_util.m"
  }
#line 436 "prog_io_util.m"
}

#line 436 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_type_kind_1_0(
#line 436 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_19,
#line 436 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 436 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 436 "prog_io_util.m"
{
#line 436 "prog_io_util.m"
  {
#line 436 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 436 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_17 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 436 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_18 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 436 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_17 == parse_tree__prog_io_util__CastY_18);
#line 436 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 436 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 436 "prog_io_util.m"
    else
#line 436 "prog_io_util.m"
#line 436 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) {
#line 436 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 436 "prog_io_util.m"
        case (MR_Integer) 0:
#line 436 "prog_io_util.m"
          {
#line 436 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 436 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_4_4;

#line 436 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 436 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 436 "prog_io_util.m"
              {
#line 436 "prog_io_util.m"
                parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 8110 "parse_tree.prog_io_util.c"
                {
#line 8112 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = mercury__list____Unify____list_1_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_3_3, parse_tree__prog_io_util__V_4_4);
                }
#line 436 "prog_io_util.m"
              }
#line 436 "prog_io_util.m"
          }
#line 436 "prog_io_util.m"
          break;
#line 436 "prog_io_util.m"
        case (MR_Integer) 1:
#line 436 "prog_io_util.m"
          {
#line 436 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_5_5 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0));
#line 436 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_6_6 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1));
#line 436 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_7_7;
#line 436 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_8_8;

#line 436 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 436 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 436 "prog_io_util.m"
              {
#line 436 "prog_io_util.m"
                parse_tree__prog_io_util__V_7_7 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));
#line 436 "prog_io_util.m"
                parse_tree__prog_io_util__V_8_8 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 8144 "parse_tree.prog_io_util.c"
                {
#line 8146 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_7_7);
                }
#line 436 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 8151 "parse_tree.prog_io_util.c"
                  {
#line 8153 "parse_tree.prog_io_util.c"
                    return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_6_6, parse_tree__prog_io_util__V_8_8);
                  }
#line 436 "prog_io_util.m"
              }
#line 436 "prog_io_util.m"
          }
#line 436 "prog_io_util.m"
          break;
#line 436 "prog_io_util.m"
        case (MR_Integer) 2:
#line 436 "prog_io_util.m"
          {
#line 436 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 436 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_10_10;

#line 436 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 436 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 436 "prog_io_util.m"
              {
#line 436 "prog_io_util.m"
                parse_tree__prog_io_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 8179 "parse_tree.prog_io_util.c"
                {
#line 8181 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = mercury__list____Unify____list_1_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_9_9, parse_tree__prog_io_util__V_10_10);
                }
#line 436 "prog_io_util.m"
              }
#line 436 "prog_io_util.m"
          }
#line 436 "prog_io_util.m"
          break;
#line 436 "prog_io_util.m"
        case (MR_Integer) 3:
#line 436 "prog_io_util.m"
#line 436 "prog_io_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)))) {
#line 436 "prog_io_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 436 "prog_io_util.m"
            case (MR_Integer) 0:
#line 436 "prog_io_util.m"
              {
#line 436 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 436 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_12_12 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 2));
#line 436 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_13_13;
#line 436 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_14_14;

#line 436 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 436 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 436 "prog_io_util.m"
                  {
#line 436 "prog_io_util.m"
                    parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 436 "prog_io_util.m"
                    parse_tree__prog_io_util__V_14_14 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 2));
#line 8220 "parse_tree.prog_io_util.c"
                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_11_11 == parse_tree__prog_io_util__V_13_13);
#line 436 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 8224 "parse_tree.prog_io_util.c"
                      {
#line 8226 "parse_tree.prog_io_util.c"
                        return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_12_12, parse_tree__prog_io_util__V_14_14);
                      }
#line 436 "prog_io_util.m"
                  }
#line 436 "prog_io_util.m"
              }
#line 436 "prog_io_util.m"
              break;
#line 436 "prog_io_util.m"
            case (MR_Integer) 1:
#line 436 "prog_io_util.m"
              {
#line 436 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 436 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_16_16;

#line 436 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 436 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 436 "prog_io_util.m"
                  {
#line 436 "prog_io_util.m"
                    parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8252 "parse_tree.prog_io_util.c"
                    {
#line 8254 "parse_tree.prog_io_util.c"
                      return parse_tree__prog_io_util__succeeded = mercury__list____Unify____list_1_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_15_15, parse_tree__prog_io_util__V_16_16);
                    }
#line 436 "prog_io_util.m"
                  }
#line 436 "prog_io_util.m"
              }
#line 436 "prog_io_util.m"
              break;
#line 436 "prog_io_util.m"
          }
#line 436 "prog_io_util.m"
          break;
#line 436 "prog_io_util.m"
      }
#line 436 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 436 "prog_io_util.m"
  }
#line 436 "prog_io_util.m"
}

#line 864 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_inst_kind_1_0(
#line 864 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_78,
#line 864 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 864 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 864 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 864 "prog_io_util.m"
{
#line 864 "prog_io_util.m"
  {
#line 864 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 864 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_76 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 864 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_77 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 864 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_76 == parse_tree__prog_io_util__CastY_77);
#line 864 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 8302 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 864 "prog_io_util.m"
    else
#line 864 "prog_io_util.m"
#line 864 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) {
#line 864 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 864 "prog_io_util.m"
        case (MR_Integer) 0:
#line 864 "prog_io_util.m"
          {
#line 864 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_82_82 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 864 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_83_83 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));

#line 864 "prog_io_util.m"
#line 864 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 864 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 864 "prog_io_util.m"
              case (MR_Integer) 0:
#line 864 "prog_io_util.m"
                {
#line 864 "prog_io_util.m"
                  MR_Box parse_tree__prog_io_util__V_6_6 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0));
#line 864 "prog_io_util.m"
                  MR_Box parse_tree__prog_io_util__V_7_7 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1));
#line 864 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_8_8;

#line 864 "prog_io_util.m"
                  {
#line 864 "prog_io_util.m"
                    mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, &parse_tree__prog_io_util__V_8_8, parse_tree__prog_io_util__V_83_83, parse_tree__prog_io_util__V_6_6);
                  }
#line 8341 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_8_8 == (MR_Integer) 0);
#line 864 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 864 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 864 "prog_io_util.m"
                    *parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__V_8_8;
#line 864 "prog_io_util.m"
                  else
#line 864 "prog_io_util.m"
                    {
#line 864 "prog_io_util.m"
                      mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_82_82, parse_tree__prog_io_util__V_7_7);
#line 864 "prog_io_util.m"
                      return;
                    }
#line 864 "prog_io_util.m"
                }
#line 864 "prog_io_util.m"
                break;
#line 864 "prog_io_util.m"
              case (MR_Integer) 1:
#line 8364 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 864 "prog_io_util.m"
                break;
#line 864 "prog_io_util.m"
              case (MR_Integer) 2:
#line 8370 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 864 "prog_io_util.m"
                break;
#line 864 "prog_io_util.m"
              case (MR_Integer) 3:
#line 864 "prog_io_util.m"
#line 864 "prog_io_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 864 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 864 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 8383 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 864 "prog_io_util.m"
                    break;
#line 864 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 8389 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 864 "prog_io_util.m"
                    break;
#line 864 "prog_io_util.m"
                }
#line 864 "prog_io_util.m"
                break;
#line 864 "prog_io_util.m"
            }
#line 864 "prog_io_util.m"
          }
#line 864 "prog_io_util.m"
          break;
#line 864 "prog_io_util.m"
        case (MR_Integer) 1:
#line 864 "prog_io_util.m"
          {
#line 864 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_80_80 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 864 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_81_81 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));

#line 864 "prog_io_util.m"
#line 864 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 864 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 864 "prog_io_util.m"
              case (MR_Integer) 0:
#line 8419 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 864 "prog_io_util.m"
                break;
#line 864 "prog_io_util.m"
              case (MR_Integer) 1:
#line 864 "prog_io_util.m"
                {
#line 864 "prog_io_util.m"
                  MR_Box parse_tree__prog_io_util__V_28_28 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0));
#line 864 "prog_io_util.m"
                  MR_Box parse_tree__prog_io_util__V_29_29 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1));
#line 864 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_30_30;

#line 864 "prog_io_util.m"
                  {
#line 864 "prog_io_util.m"
                    mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, &parse_tree__prog_io_util__V_30_30, parse_tree__prog_io_util__V_81_81, parse_tree__prog_io_util__V_28_28);
                  }
#line 8439 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_30_30 == (MR_Integer) 0);
#line 864 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 864 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 864 "prog_io_util.m"
                    *parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__V_30_30;
#line 864 "prog_io_util.m"
                  else
#line 864 "prog_io_util.m"
                    {
#line 864 "prog_io_util.m"
                      mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_80_80, parse_tree__prog_io_util__V_29_29);
#line 864 "prog_io_util.m"
                      return;
                    }
#line 864 "prog_io_util.m"
                }
#line 864 "prog_io_util.m"
                break;
#line 864 "prog_io_util.m"
              case (MR_Integer) 2:
#line 8462 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 864 "prog_io_util.m"
                break;
#line 864 "prog_io_util.m"
              case (MR_Integer) 3:
#line 864 "prog_io_util.m"
#line 864 "prog_io_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 864 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 864 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 8475 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 864 "prog_io_util.m"
                    break;
#line 864 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 8481 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 864 "prog_io_util.m"
                    break;
#line 864 "prog_io_util.m"
                }
#line 864 "prog_io_util.m"
                break;
#line 864 "prog_io_util.m"
            }
#line 864 "prog_io_util.m"
          }
#line 864 "prog_io_util.m"
          break;
#line 864 "prog_io_util.m"
        case (MR_Integer) 2:
#line 864 "prog_io_util.m"
          {
#line 864 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_79_79 = (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));

#line 864 "prog_io_util.m"
#line 864 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 864 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 864 "prog_io_util.m"
              case (MR_Integer) 0:
#line 8509 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 864 "prog_io_util.m"
                break;
#line 864 "prog_io_util.m"
              case (MR_Integer) 1:
#line 8515 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 864 "prog_io_util.m"
                break;
#line 864 "prog_io_util.m"
              case (MR_Integer) 2:
#line 864 "prog_io_util.m"
                {
#line 864 "prog_io_util.m"
                  MR_Box parse_tree__prog_io_util__V_47_47 = (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0));

#line 864 "prog_io_util.m"
                  {
#line 864 "prog_io_util.m"
                    mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_79_79, parse_tree__prog_io_util__V_47_47);
#line 864 "prog_io_util.m"
                    return;
                  }
#line 864 "prog_io_util.m"
                }
#line 864 "prog_io_util.m"
                break;
#line 864 "prog_io_util.m"
              case (MR_Integer) 3:
#line 864 "prog_io_util.m"
#line 864 "prog_io_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 864 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 864 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 8546 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 864 "prog_io_util.m"
                    break;
#line 864 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 8552 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 864 "prog_io_util.m"
                    break;
#line 864 "prog_io_util.m"
                }
#line 864 "prog_io_util.m"
                break;
#line 864 "prog_io_util.m"
            }
#line 864 "prog_io_util.m"
          }
#line 864 "prog_io_util.m"
          break;
#line 864 "prog_io_util.m"
        case (MR_Integer) 3:
#line 864 "prog_io_util.m"
#line 864 "prog_io_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)))) {
#line 864 "prog_io_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 864 "prog_io_util.m"
            case (MR_Integer) 0:
#line 864 "prog_io_util.m"
              {
#line 864 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_85_85 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));

#line 864 "prog_io_util.m"
#line 864 "prog_io_util.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 864 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 864 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 8587 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 864 "prog_io_util.m"
                    break;
#line 864 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 8593 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 864 "prog_io_util.m"
                    break;
#line 864 "prog_io_util.m"
                  case (MR_Integer) 2:
#line 8599 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 864 "prog_io_util.m"
                    break;
#line 864 "prog_io_util.m"
                  case (MR_Integer) 3:
#line 864 "prog_io_util.m"
#line 864 "prog_io_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 864 "prog_io_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 864 "prog_io_util.m"
                      case (MR_Integer) 0:
#line 864 "prog_io_util.m"
                        {
#line 864 "prog_io_util.m"
                          MR_Box parse_tree__prog_io_util__V_61_61 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1));

#line 864 "prog_io_util.m"
                          {
#line 864 "prog_io_util.m"
                            mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_85_85, parse_tree__prog_io_util__V_61_61);
#line 864 "prog_io_util.m"
                            return;
                          }
#line 864 "prog_io_util.m"
                        }
#line 864 "prog_io_util.m"
                        break;
#line 864 "prog_io_util.m"
                      case (MR_Integer) 1:
#line 8630 "parse_tree.prog_io_util.c"
                        *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 864 "prog_io_util.m"
                        break;
#line 864 "prog_io_util.m"
                    }
#line 864 "prog_io_util.m"
                    break;
#line 864 "prog_io_util.m"
                }
#line 864 "prog_io_util.m"
              }
#line 864 "prog_io_util.m"
              break;
#line 864 "prog_io_util.m"
            case (MR_Integer) 1:
#line 864 "prog_io_util.m"
              {
#line 864 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_84_84 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));

#line 864 "prog_io_util.m"
#line 864 "prog_io_util.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 864 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 864 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 8658 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 864 "prog_io_util.m"
                    break;
#line 864 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 8664 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 864 "prog_io_util.m"
                    break;
#line 864 "prog_io_util.m"
                  case (MR_Integer) 2:
#line 8670 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 864 "prog_io_util.m"
                    break;
#line 864 "prog_io_util.m"
                  case (MR_Integer) 3:
#line 864 "prog_io_util.m"
#line 864 "prog_io_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 864 "prog_io_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 864 "prog_io_util.m"
                      case (MR_Integer) 0:
#line 8683 "parse_tree.prog_io_util.c"
                        *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 864 "prog_io_util.m"
                        break;
#line 864 "prog_io_util.m"
                      case (MR_Integer) 1:
#line 864 "prog_io_util.m"
                        {
#line 864 "prog_io_util.m"
                          MR_Box parse_tree__prog_io_util__V_75_75 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1));

#line 864 "prog_io_util.m"
                          {
#line 864 "prog_io_util.m"
                            mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_84_84, parse_tree__prog_io_util__V_75_75);
#line 864 "prog_io_util.m"
                            return;
                          }
#line 864 "prog_io_util.m"
                        }
#line 864 "prog_io_util.m"
                        break;
#line 864 "prog_io_util.m"
                    }
#line 864 "prog_io_util.m"
                    break;
#line 864 "prog_io_util.m"
                }
#line 864 "prog_io_util.m"
              }
#line 864 "prog_io_util.m"
              break;
#line 864 "prog_io_util.m"
          }
#line 864 "prog_io_util.m"
          break;
#line 864 "prog_io_util.m"
      }
#line 864 "prog_io_util.m"
  }
#line 864 "prog_io_util.m"
}

#line 864 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_inst_kind_1_0(
#line 864 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_19,
#line 864 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 864 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 864 "prog_io_util.m"
{
#line 864 "prog_io_util.m"
  {
#line 864 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 864 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_17 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 864 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_18 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 864 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_17 == parse_tree__prog_io_util__CastY_18);
#line 864 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 864 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 864 "prog_io_util.m"
    else
#line 864 "prog_io_util.m"
#line 864 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) {
#line 864 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 864 "prog_io_util.m"
        case (MR_Integer) 0:
#line 864 "prog_io_util.m"
          {
#line 864 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_3_3 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0));
#line 864 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_4_4 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1));
#line 864 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_5_5;
#line 864 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_6_6;

#line 864 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 864 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 864 "prog_io_util.m"
              {
#line 864 "prog_io_util.m"
                parse_tree__prog_io_util__V_5_5 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));
#line 864 "prog_io_util.m"
                parse_tree__prog_io_util__V_6_6 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 8782 "parse_tree.prog_io_util.c"
                {
#line 8784 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_3_3, parse_tree__prog_io_util__V_5_5);
                }
#line 864 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 8789 "parse_tree.prog_io_util.c"
                  {
#line 8791 "parse_tree.prog_io_util.c"
                    return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_4_4, parse_tree__prog_io_util__V_6_6);
                  }
#line 864 "prog_io_util.m"
              }
#line 864 "prog_io_util.m"
          }
#line 864 "prog_io_util.m"
          break;
#line 864 "prog_io_util.m"
        case (MR_Integer) 1:
#line 864 "prog_io_util.m"
          {
#line 864 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_7_7 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0));
#line 864 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_8_8 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1));
#line 864 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_9_9;
#line 864 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_10_10;

#line 864 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 864 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 864 "prog_io_util.m"
              {
#line 864 "prog_io_util.m"
                parse_tree__prog_io_util__V_9_9 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));
#line 864 "prog_io_util.m"
                parse_tree__prog_io_util__V_10_10 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 8823 "parse_tree.prog_io_util.c"
                {
#line 8825 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_7_7, parse_tree__prog_io_util__V_9_9);
                }
#line 864 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 8830 "parse_tree.prog_io_util.c"
                  {
#line 8832 "parse_tree.prog_io_util.c"
                    return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_8_8, parse_tree__prog_io_util__V_10_10);
                  }
#line 864 "prog_io_util.m"
              }
#line 864 "prog_io_util.m"
          }
#line 864 "prog_io_util.m"
          break;
#line 864 "prog_io_util.m"
        case (MR_Integer) 2:
#line 864 "prog_io_util.m"
          {
#line 864 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_11_11 = (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0));
#line 864 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_12_12;

#line 864 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 864 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 864 "prog_io_util.m"
              {
#line 864 "prog_io_util.m"
                parse_tree__prog_io_util__V_12_12 = (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));
#line 8858 "parse_tree.prog_io_util.c"
                {
#line 8860 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_11_11, parse_tree__prog_io_util__V_12_12);
                }
#line 864 "prog_io_util.m"
              }
#line 864 "prog_io_util.m"
          }
#line 864 "prog_io_util.m"
          break;
#line 864 "prog_io_util.m"
        case (MR_Integer) 3:
#line 864 "prog_io_util.m"
#line 864 "prog_io_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)))) {
#line 864 "prog_io_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 864 "prog_io_util.m"
            case (MR_Integer) 0:
#line 864 "prog_io_util.m"
              {
#line 864 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_13_13 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1));
#line 864 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_14_14;

#line 864 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 864 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 864 "prog_io_util.m"
                  {
#line 864 "prog_io_util.m"
                    parse_tree__prog_io_util__V_14_14 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 8893 "parse_tree.prog_io_util.c"
                    {
#line 8895 "parse_tree.prog_io_util.c"
                      return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_13_13, parse_tree__prog_io_util__V_14_14);
                    }
#line 864 "prog_io_util.m"
                  }
#line 864 "prog_io_util.m"
              }
#line 864 "prog_io_util.m"
              break;
#line 864 "prog_io_util.m"
            case (MR_Integer) 1:
#line 864 "prog_io_util.m"
              {
#line 864 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_15_15 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1));
#line 864 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_16_16;

#line 864 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 864 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 864 "prog_io_util.m"
                  {
#line 864 "prog_io_util.m"
                    parse_tree__prog_io_util__V_16_16 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 8921 "parse_tree.prog_io_util.c"
                    {
#line 8923 "parse_tree.prog_io_util.c"
                      return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_15_15, parse_tree__prog_io_util__V_16_16);
                    }
#line 864 "prog_io_util.m"
                  }
#line 864 "prog_io_util.m"
              }
#line 864 "prog_io_util.m"
              break;
#line 864 "prog_io_util.m"
          }
#line 864 "prog_io_util.m"
          break;
#line 864 "prog_io_util.m"
      }
#line 864 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 864 "prog_io_util.m"
  }
#line 864 "prog_io_util.m"
}

#line 197 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____decl_attrs_0_0(
#line 197 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 197 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 197 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 197 "prog_io_util.m"
{
#line 197 "prog_io_util.m"
  {
#line 197 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 197 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_4 = parse_tree__prog_io_util__HeadVar__2_2;
#line 197 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_5 = parse_tree__prog_io_util__HeadVar__3_3;

#line 197 "prog_io_util.m"
    {
#line 197 "prog_io_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[4], parse_tree__prog_io_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar2_5)));
#line 197 "prog_io_util.m"
      return;
    }
#line 197 "prog_io_util.m"
  }
#line 197 "prog_io_util.m"
}

#line 197 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____decl_attrs_0_0(
#line 197 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 197 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 197 "prog_io_util.m"
{
#line 197 "prog_io_util.m"
  {
#line 197 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 197 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_3 = parse_tree__prog_io_util__HeadVar__1_1;
#line 197 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_4 = parse_tree__prog_io_util__HeadVar__2_2;

#line 197 "prog_io_util.m"
    {
#line 197 "prog_io_util.m"
      return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[4], ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar2_4)));
    }
#line 197 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 197 "prog_io_util.m"
  }
#line 197 "prog_io_util.m"
}

#line 182 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____decl_attribute_0_0(
#line 182 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 182 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 182 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 182 "prog_io_util.m"
{
#line 182 "prog_io_util.m"
  {
#line 182 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 182 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_46 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 182 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_47 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 182 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_46 == parse_tree__prog_io_util__CastY_47);
#line 182 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 9031 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 182 "prog_io_util.m"
    else
#line 182 "prog_io_util.m"
#line 182 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) {
#line 182 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 182 "prog_io_util.m"
        case (MR_Integer) 0:
#line 182 "prog_io_util.m"
#line 182 "prog_io_util.m"
          switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 182 "prog_io_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 182 "prog_io_util.m"
            case (MR_Integer) 0:
#line 182 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 182 "prog_io_util.m"
              break;
#line 182 "prog_io_util.m"
            case (MR_Integer) 1:
#line 9055 "parse_tree.prog_io_util.c"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 182 "prog_io_util.m"
              break;
#line 182 "prog_io_util.m"
            case (MR_Integer) 2:
#line 9061 "parse_tree.prog_io_util.c"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 182 "prog_io_util.m"
              break;
#line 182 "prog_io_util.m"
            case (MR_Integer) 3:
#line 9067 "parse_tree.prog_io_util.c"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 182 "prog_io_util.m"
              break;
#line 182 "prog_io_util.m"
          }
#line 182 "prog_io_util.m"
          break;
#line 182 "prog_io_util.m"
        case (MR_Integer) 1:
#line 182 "prog_io_util.m"
          {
#line 182 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 182 "prog_io_util.m"
#line 182 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 182 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 182 "prog_io_util.m"
              case (MR_Integer) 0:
#line 9089 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 182 "prog_io_util.m"
                break;
#line 182 "prog_io_util.m"
              case (MR_Integer) 1:
#line 182 "prog_io_util.m"
                {
#line 182 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));
#line 182 "prog_io_util.m"
                  MR_Integer parse_tree__prog_io_util__V_60_60 = (MR_Integer) parse_tree__prog_io_util__V_55_55;
#line 182 "prog_io_util.m"
                  MR_Integer parse_tree__prog_io_util__V_61_61 = (MR_Integer) parse_tree__prog_io_util__V_5_5;

#line 182 "prog_io_util.m"
                  {
#line 182 "prog_io_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_60_60, parse_tree__prog_io_util__V_61_61);
#line 182 "prog_io_util.m"
                    return;
                  }
#line 182 "prog_io_util.m"
                }
#line 182 "prog_io_util.m"
                break;
#line 182 "prog_io_util.m"
              case (MR_Integer) 2:
#line 9117 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 182 "prog_io_util.m"
                break;
#line 182 "prog_io_util.m"
              case (MR_Integer) 3:
#line 9123 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 182 "prog_io_util.m"
                break;
#line 182 "prog_io_util.m"
            }
#line 182 "prog_io_util.m"
          }
#line 182 "prog_io_util.m"
          break;
#line 182 "prog_io_util.m"
        case (MR_Integer) 2:
#line 182 "prog_io_util.m"
          {
#line 182 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 182 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 182 "prog_io_util.m"
#line 182 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 182 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 182 "prog_io_util.m"
              case (MR_Integer) 0:
#line 9149 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 182 "prog_io_util.m"
                break;
#line 182 "prog_io_util.m"
              case (MR_Integer) 1:
#line 9155 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 182 "prog_io_util.m"
                break;
#line 182 "prog_io_util.m"
              case (MR_Integer) 2:
#line 182 "prog_io_util.m"
                {
#line 182 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));
#line 182 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1)));
#line 182 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_20_20;
#line 182 "prog_io_util.m"
                  MR_Integer parse_tree__prog_io_util__V_62_62 = (MR_Integer) parse_tree__prog_io_util__V_57_57;
#line 182 "prog_io_util.m"
                  MR_Integer parse_tree__prog_io_util__V_63_63 = (MR_Integer) parse_tree__prog_io_util__V_18_18;

#line 182 "prog_io_util.m"
                  {
#line 182 "prog_io_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_io_util__V_20_20, parse_tree__prog_io_util__V_62_62, parse_tree__prog_io_util__V_63_63);
                  }
#line 9179 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_20_20 == (MR_Integer) 0);
#line 182 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 182 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 182 "prog_io_util.m"
                    *parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__V_20_20;
#line 182 "prog_io_util.m"
                  else
#line 182 "prog_io_util.m"
                    {
#line 182 "prog_io_util.m"
                      {
#line 182 "prog_io_util.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[3], parse_tree__prog_io_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_util__V_56_56)), ((MR_Box) (parse_tree__prog_io_util__V_19_19)));
#line 182 "prog_io_util.m"
                        return;
                      }
#line 182 "prog_io_util.m"
                    }
#line 182 "prog_io_util.m"
                }
#line 182 "prog_io_util.m"
                break;
#line 182 "prog_io_util.m"
              case (MR_Integer) 3:
#line 9206 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 182 "prog_io_util.m"
                break;
#line 182 "prog_io_util.m"
            }
#line 182 "prog_io_util.m"
          }
#line 182 "prog_io_util.m"
          break;
#line 182 "prog_io_util.m"
        case (MR_Integer) 3:
#line 182 "prog_io_util.m"
          {
#line 182 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 182 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 182 "prog_io_util.m"
#line 182 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 182 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 182 "prog_io_util.m"
              case (MR_Integer) 0:
#line 9232 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 182 "prog_io_util.m"
                break;
#line 182 "prog_io_util.m"
              case (MR_Integer) 1:
#line 9238 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 182 "prog_io_util.m"
                break;
#line 182 "prog_io_util.m"
              case (MR_Integer) 2:
#line 9244 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 182 "prog_io_util.m"
                break;
#line 182 "prog_io_util.m"
              case (MR_Integer) 3:
#line 182 "prog_io_util.m"
                {
#line 182 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));
#line 182 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1)));
#line 182 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_38_38;
#line 182 "prog_io_util.m"
                  MR_Integer parse_tree__prog_io_util__V_58_58 = (MR_Integer) parse_tree__prog_io_util__V_54_54;
#line 182 "prog_io_util.m"
                  MR_Integer parse_tree__prog_io_util__V_59_59 = (MR_Integer) parse_tree__prog_io_util__V_36_36;

#line 182 "prog_io_util.m"
                  {
#line 182 "prog_io_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_io_util__V_38_38, parse_tree__prog_io_util__V_58_58, parse_tree__prog_io_util__V_59_59);
                  }
#line 9268 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_38_38 == (MR_Integer) 0);
#line 182 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 182 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 182 "prog_io_util.m"
                    *parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__V_38_38;
#line 182 "prog_io_util.m"
                  else
#line 182 "prog_io_util.m"
                    {
#line 182 "prog_io_util.m"
                      {
#line 182 "prog_io_util.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[0], parse_tree__prog_io_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_util__V_53_53)), ((MR_Box) (parse_tree__prog_io_util__V_37_37)));
#line 182 "prog_io_util.m"
                        return;
                      }
#line 182 "prog_io_util.m"
                    }
#line 182 "prog_io_util.m"
                }
#line 182 "prog_io_util.m"
                break;
#line 182 "prog_io_util.m"
            }
#line 182 "prog_io_util.m"
          }
#line 182 "prog_io_util.m"
          break;
#line 182 "prog_io_util.m"
      }
#line 182 "prog_io_util.m"
  }
#line 182 "prog_io_util.m"
}

#line 182 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____decl_attribute_0_0(
#line 182 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 182 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 182 "prog_io_util.m"
{
#line 182 "prog_io_util.m"
  {
#line 182 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 182 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_15 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 182 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_16 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 182 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_15 == parse_tree__prog_io_util__CastY_16);
#line 182 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 182 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 182 "prog_io_util.m"
    else
#line 182 "prog_io_util.m"
#line 182 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) {
#line 182 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 182 "prog_io_util.m"
        case (MR_Integer) 0:
#line 182 "prog_io_util.m"
          {
#line 182 "prog_io_util.m"
            MR_Integer parse_tree__prog_io_util__CastX_13 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 182 "prog_io_util.m"
            MR_Integer parse_tree__prog_io_util__CastY_14 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 182 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastY_14 == parse_tree__prog_io_util__CastX_13);
#line 182 "prog_io_util.m"
          }
#line 182 "prog_io_util.m"
          break;
#line 182 "prog_io_util.m"
        case (MR_Integer) 1:
#line 182 "prog_io_util.m"
          {
#line 182 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 182 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_4_4;

#line 182 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 182 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 182 "prog_io_util.m"
              {
#line 182 "prog_io_util.m"
                parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 9369 "parse_tree.prog_io_util.c"
                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_3_3 == parse_tree__prog_io_util__V_4_4);
#line 182 "prog_io_util.m"
              }
#line 182 "prog_io_util.m"
          }
#line 182 "prog_io_util.m"
          break;
#line 182 "prog_io_util.m"
        case (MR_Integer) 2:
#line 182 "prog_io_util.m"
          {
#line 182 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TypeInfo_18_18;
#line 182 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 182 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 182 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_7_7;
#line 182 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_8_8;

#line 182 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 182 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 182 "prog_io_util.m"
              {
#line 182 "prog_io_util.m"
                parse_tree__prog_io_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 182 "prog_io_util.m"
                parse_tree__prog_io_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 9402 "parse_tree.prog_io_util.c"
                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_5_5 == parse_tree__prog_io_util__V_7_7);
#line 182 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 182 "prog_io_util.m"
                  {
#line 9408 "parse_tree.prog_io_util.c"
                    parse_tree__prog_io_util__TypeInfo_18_18 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[3];
#line 9410 "parse_tree.prog_io_util.c"
                    {
#line 9412 "parse_tree.prog_io_util.c"
                      return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_18_18, ((MR_Box) (parse_tree__prog_io_util__V_6_6)), ((MR_Box) (parse_tree__prog_io_util__V_8_8)));
                    }
#line 182 "prog_io_util.m"
                  }
#line 182 "prog_io_util.m"
              }
#line 182 "prog_io_util.m"
          }
#line 182 "prog_io_util.m"
          break;
#line 182 "prog_io_util.m"
        case (MR_Integer) 3:
#line 182 "prog_io_util.m"
          {
#line 182 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TypeInfo_17_17;
#line 182 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 182 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 182 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_11_11;
#line 182 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_12_12;

#line 182 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 182 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 182 "prog_io_util.m"
              {
#line 182 "prog_io_util.m"
                parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 182 "prog_io_util.m"
                parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 9448 "parse_tree.prog_io_util.c"
                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_9_9 == parse_tree__prog_io_util__V_11_11);
#line 182 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 182 "prog_io_util.m"
                  {
#line 9454 "parse_tree.prog_io_util.c"
                    parse_tree__prog_io_util__TypeInfo_17_17 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[0];
#line 9456 "parse_tree.prog_io_util.c"
                    {
#line 9458 "parse_tree.prog_io_util.c"
                      return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_17_17, ((MR_Box) (parse_tree__prog_io_util__V_10_10)), ((MR_Box) (parse_tree__prog_io_util__V_12_12)));
                    }
#line 182 "prog_io_util.m"
                  }
#line 182 "prog_io_util.m"
              }
#line 182 "prog_io_util.m"
          }
#line 182 "prog_io_util.m"
          break;
#line 182 "prog_io_util.m"
      }
#line 182 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 182 "prog_io_util.m"
  }
#line 182 "prog_io_util.m"
}

#line 120 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____allow_constrained_inst_var_0_0(
#line 120 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 120 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 120 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 120 "prog_io_util.m"
{
#line 120 "prog_io_util.m"
  {
#line 120 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 120 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 120 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 120 "prog_io_util.m"
    {
#line 120 "prog_io_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__Cast_HeadVar1_4, parse_tree__prog_io_util__Cast_HeadVar2_5);
#line 120 "prog_io_util.m"
      return;
    }
#line 120 "prog_io_util.m"
  }
#line 120 "prog_io_util.m"
}

#line 120 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____allow_constrained_inst_var_0_0(
#line 120 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_1,
#line 120 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 120 "prog_io_util.m"
{
#line 9519 "parse_tree.prog_io_util.c"
  {
#line 9521 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__HeadVar__2_1 == parse_tree__prog_io_util__HeadVar__2_2);

#line 9524 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 9526 "parse_tree.prog_io_util.c"
  }
#line 120 "prog_io_util.m"
}

#line 1509 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(
#line 1509 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_43,
#line 1509 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_6,
#line 1509 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_7,
#line 1509 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Expected_8,
#line 1509 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_9,
#line 1509 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Spec_10)
#line 1509 "prog_io_util.m"
{
#line 1513 "prog_io_util.m"
  {
#line 1513 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1513 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__TermStr_11;
#line 1513 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Pieces_12;
#line 1513 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 1513 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_15_15;
#line 1513 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_18_18;
#line 1513 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_19_19;
#line 1513 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_20_20;
#line 1513 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_23_23;
#line 1513 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_26_26;
#line 1513 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_27_27;
#line 1513 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_36_36;
#line 1513 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_37_37;
#line 1513 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_38_38;
#line 1513 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_39_39;
#line 1513 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_40_40;

#line 1514 "prog_io_util.m"
    {
#line 1514 "prog_io_util.m"
      parse_tree__prog_io_util__TermStr_11 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_util__TypeInfo_for_T_43, parse_tree__prog_io_util__VarSet_7, parse_tree__prog_io_util__Term_9);
    }
#line 1516 "prog_io_util.m"
    {
#line 1516 "prog_io_util.m"
      parse_tree__prog_io_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1516 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1516 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io_util__Expected_8));
#line 1516 "prog_io_util.m"
    }
#line 1517 "prog_io_util.m"
    {
#line 1517 "prog_io_util.m"
      parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1517 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1517 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_11));
#line 1517 "prog_io_util.m"
    }
#line 1517 "prog_io_util.m"
    {
#line 1517 "prog_io_util.m"
      parse_tree__prog_io_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1517 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
#line 1517 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[12])));
#line 1517 "prog_io_util.m"
    }
#line 1517 "prog_io_util.m"
    {
#line 1517 "prog_io_util.m"
      parse_tree__prog_io_util__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1517 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_23_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[20])));
#line 1517 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_23_23, 1) = ((MR_Box) (parse_tree__prog_io_util__V_26_26));
#line 1517 "prog_io_util.m"
    }
#line 1516 "prog_io_util.m"
    {
#line 1516 "prog_io_util.m"
      parse_tree__prog_io_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1516 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[19])));
#line 1516 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, 1) = ((MR_Box) (parse_tree__prog_io_util__V_23_23));
#line 1516 "prog_io_util.m"
    }
#line 1516 "prog_io_util.m"
    {
#line 1516 "prog_io_util.m"
      parse_tree__prog_io_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1516 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, 0) = ((MR_Box) (parse_tree__prog_io_util__V_19_19));
#line 1516 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, 1) = ((MR_Box) (parse_tree__prog_io_util__V_20_20));
#line 1516 "prog_io_util.m"
    }
#line 1516 "prog_io_util.m"
    {
#line 1516 "prog_io_util.m"
      parse_tree__prog_io_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1516 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[18])));
#line 1516 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, 1) = ((MR_Box) (parse_tree__prog_io_util__V_18_18));
#line 1516 "prog_io_util.m"
    }
#line 1515 "prog_io_util.m"
    {
#line 1515 "prog_io_util.m"
      parse_tree__prog_io_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1515 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_13_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1515 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_13_13, 1) = ((MR_Box) (parse_tree__prog_io_util__V_15_15));
#line 1515 "prog_io_util.m"
    }
#line 1515 "prog_io_util.m"
    {
#line 1515 "prog_io_util.m"
      parse_tree__prog_io_util__Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_util__ContextPieces_6, parse_tree__prog_io_util__V_13_13);
    }
#line 1519 "prog_io_util.m"
    {
#line 1519 "prog_io_util.m"
      parse_tree__prog_io_util__V_38_38 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_util__TypeInfo_for_T_43, parse_tree__prog_io_util__Term_9);
    }
#line 1519 "prog_io_util.m"
    {
#line 1519 "prog_io_util.m"
      parse_tree__prog_io_util__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1519 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_12));
#line 1519 "prog_io_util.m"
    }
#line 1519 "prog_io_util.m"
    {
#line 1519 "prog_io_util.m"
      parse_tree__prog_io_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1519 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_util__V_40_40));
#line 1519 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1519 "prog_io_util.m"
    }
#line 1519 "prog_io_util.m"
    {
#line 1519 "prog_io_util.m"
      parse_tree__prog_io_util__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1519 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_util__V_38_38));
#line 1519 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_37_37, 1) = ((MR_Box) (parse_tree__prog_io_util__V_39_39));
#line 1519 "prog_io_util.m"
    }
#line 1519 "prog_io_util.m"
    {
#line 1519 "prog_io_util.m"
      parse_tree__prog_io_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1519 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_util__V_37_37));
#line 1519 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1519 "prog_io_util.m"
    }
#line 1518 "prog_io_util.m"
    {
#line 1518 "prog_io_util.m"
      MR_Word base;
#line 1518 "prog_io_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1518 "prog_io_util.m"
      *parse_tree__prog_io_util__Spec_10 = base;
#line 1518 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1518 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1518 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 1518 "prog_io_util.m"
    }
#line 1513 "prog_io_util.m"
  }
#line 1509 "prog_io_util.m"
}

#line 1499 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__generate_repeated_state_var_msg_4_p_0(
#line 1499 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_33,
#line 1499 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_5,
#line 1499 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 1499 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_7,
#line 1499 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Spec_8)
#line 1499 "prog_io_util.m"
{
#line 1502 "prog_io_util.m"
  {
#line 1502 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1502 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__TermStr_9;
#line 1502 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Pieces_10;
#line 1502 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;
#line 1502 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 1502 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_16_16;
#line 1502 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_17_17;
#line 1502 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_26_26;
#line 1502 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_27_27;
#line 1502 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_28_28;
#line 1502 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_29_29;
#line 1502 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_30_30;

#line 1503 "prog_io_util.m"
    {
#line 1503 "prog_io_util.m"
      parse_tree__prog_io_util__TermStr_9 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_util__TypeInfo_for_T_33, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__Term_7);
    }
#line 1505 "prog_io_util.m"
    {
#line 1505 "prog_io_util.m"
      parse_tree__prog_io_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1505 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1505 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_17_17, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_9));
#line 1505 "prog_io_util.m"
    }
#line 1505 "prog_io_util.m"
    {
#line 1505 "prog_io_util.m"
      parse_tree__prog_io_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1505 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 0) = ((MR_Box) (parse_tree__prog_io_util__V_17_17));
#line 1505 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[12])));
#line 1505 "prog_io_util.m"
    }
#line 1505 "prog_io_util.m"
    {
#line 1505 "prog_io_util.m"
      parse_tree__prog_io_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1505 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_13_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[17])));
#line 1505 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_13_13, 1) = ((MR_Box) (parse_tree__prog_io_util__V_16_16));
#line 1505 "prog_io_util.m"
    }
#line 1504 "prog_io_util.m"
    {
#line 1504 "prog_io_util.m"
      parse_tree__prog_io_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1504 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_11_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1504 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_11_11, 1) = ((MR_Box) (parse_tree__prog_io_util__V_13_13));
#line 1504 "prog_io_util.m"
    }
#line 1504 "prog_io_util.m"
    {
#line 1504 "prog_io_util.m"
      parse_tree__prog_io_util__Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_util__ContextPieces_5, parse_tree__prog_io_util__V_11_11);
    }
#line 1507 "prog_io_util.m"
    {
#line 1507 "prog_io_util.m"
      parse_tree__prog_io_util__V_28_28 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_util__TypeInfo_for_T_33, parse_tree__prog_io_util__Term_7);
    }
#line 1507 "prog_io_util.m"
    {
#line 1507 "prog_io_util.m"
      parse_tree__prog_io_util__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1507 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_10));
#line 1507 "prog_io_util.m"
    }
#line 1507 "prog_io_util.m"
    {
#line 1507 "prog_io_util.m"
      parse_tree__prog_io_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1507 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io_util__V_30_30));
#line 1507 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1507 "prog_io_util.m"
    }
#line 1507 "prog_io_util.m"
    {
#line 1507 "prog_io_util.m"
      parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1507 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_util__V_28_28));
#line 1507 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io_util__V_29_29));
#line 1507 "prog_io_util.m"
    }
#line 1507 "prog_io_util.m"
    {
#line 1507 "prog_io_util.m"
      parse_tree__prog_io_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1507 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
#line 1507 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1507 "prog_io_util.m"
    }
#line 1506 "prog_io_util.m"
    {
#line 1506 "prog_io_util.m"
      MR_Word base;
#line 1506 "prog_io_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1506 "prog_io_util.m"
      *parse_tree__prog_io_util__Spec_8 = base;
#line 1506 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1506 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1506 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_26_26));
#line 1506 "prog_io_util.m"
    }
#line 1502 "prog_io_util.m"
  }
#line 1499 "prog_io_util.m"
}

#line 1489 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(
#line 1489 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_33,
#line 1489 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_5,
#line 1489 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 1489 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_7,
#line 1489 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Spec_8)
#line 1489 "prog_io_util.m"
{
#line 1492 "prog_io_util.m"
  {
#line 1492 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1492 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__TermStr_9;
#line 1492 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Pieces_10;
#line 1492 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;
#line 1492 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 1492 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_16_16;
#line 1492 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_17_17;
#line 1492 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_26_26;
#line 1492 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_27_27;
#line 1492 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_28_28;
#line 1492 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_29_29;
#line 1492 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_30_30;

#line 1493 "prog_io_util.m"
    {
#line 1493 "prog_io_util.m"
      parse_tree__prog_io_util__TermStr_9 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_util__TypeInfo_for_T_33, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__Term_7);
    }
#line 1495 "prog_io_util.m"
    {
#line 1495 "prog_io_util.m"
      parse_tree__prog_io_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1495 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1495 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_17_17, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_9));
#line 1495 "prog_io_util.m"
    }
#line 1495 "prog_io_util.m"
    {
#line 1495 "prog_io_util.m"
      parse_tree__prog_io_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1495 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 0) = ((MR_Box) (parse_tree__prog_io_util__V_17_17));
#line 1495 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[12])));
#line 1495 "prog_io_util.m"
    }
#line 1495 "prog_io_util.m"
    {
#line 1495 "prog_io_util.m"
      parse_tree__prog_io_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1495 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_13_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[16])));
#line 1495 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_13_13, 1) = ((MR_Box) (parse_tree__prog_io_util__V_16_16));
#line 1495 "prog_io_util.m"
    }
#line 1494 "prog_io_util.m"
    {
#line 1494 "prog_io_util.m"
      parse_tree__prog_io_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1494 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_11_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1494 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_11_11, 1) = ((MR_Box) (parse_tree__prog_io_util__V_13_13));
#line 1494 "prog_io_util.m"
    }
#line 1494 "prog_io_util.m"
    {
#line 1494 "prog_io_util.m"
      parse_tree__prog_io_util__Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_util__ContextPieces_5, parse_tree__prog_io_util__V_11_11);
    }
#line 1497 "prog_io_util.m"
    {
#line 1497 "prog_io_util.m"
      parse_tree__prog_io_util__V_28_28 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_util__TypeInfo_for_T_33, parse_tree__prog_io_util__Term_7);
    }
#line 1497 "prog_io_util.m"
    {
#line 1497 "prog_io_util.m"
      parse_tree__prog_io_util__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1497 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_10));
#line 1497 "prog_io_util.m"
    }
#line 1497 "prog_io_util.m"
    {
#line 1497 "prog_io_util.m"
      parse_tree__prog_io_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1497 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io_util__V_30_30));
#line 1497 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1497 "prog_io_util.m"
    }
#line 1497 "prog_io_util.m"
    {
#line 1497 "prog_io_util.m"
      parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1497 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_util__V_28_28));
#line 1497 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io_util__V_29_29));
#line 1497 "prog_io_util.m"
    }
#line 1497 "prog_io_util.m"
    {
#line 1497 "prog_io_util.m"
      parse_tree__prog_io_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1497 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
#line 1497 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1497 "prog_io_util.m"
    }
#line 1496 "prog_io_util.m"
    {
#line 1496 "prog_io_util.m"
      MR_Word base;
#line 1496 "prog_io_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1496 "prog_io_util.m"
      *parse_tree__prog_io_util__Spec_8 = base;
#line 1496 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1496 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1496 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_26_26));
#line 1496 "prog_io_util.m"
    }
#line 1492 "prog_io_util.m"
  }
#line 1489 "prog_io_util.m"
}

#line 1216 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__map_parser_one_or_more_4_p_0(
#line 1216 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_29,
#line 1216 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Parser_5,
#line 1216 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Head_6,
#line 1216 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Tail_7,
#line 1216 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_8)
#line 1216 "prog_io_util.m"
{
#line 1219 "prog_io_util.m"
  {
#line 1219 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1219 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__HeadResult_9;
#line 1220 "prog_io_util.m"
    void MR_CALL (* parse_tree__prog_io_util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Parser_5, (MR_Integer) 1)));
#line 1220 "prog_io_util.m"
    MR_Box parse_tree__prog_io_util__conv1_HeadResult_9;

#line 1220 "prog_io_util.m"
    {
#line 1220 "prog_io_util.m"
      parse_tree__prog_io_util__func_0(((MR_Box) parse_tree__prog_io_util__Parser_5), ((MR_Box) (parse_tree__prog_io_util__Head_6)), &parse_tree__prog_io_util__conv1_HeadResult_9);
    }
#line 1220 "prog_io_util.m"
    parse_tree__prog_io_util__HeadResult_9 = ((MR_Word) parse_tree__prog_io_util__conv1_HeadResult_9);
#line 1230 "prog_io_util.m"
    if ((parse_tree__prog_io_util__Tail_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1222 "prog_io_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadResult_9)) == (MR_mktag((MR_Integer) 0))))
#line 1225 "prog_io_util.m"
        *parse_tree__prog_io_util__Result_8 = (MR_Word) parse_tree__prog_io_util__HeadResult_9;
#line 1222 "prog_io_util.m"
      else
#line 1227 "prog_io_util.m"
        {
#line 1227 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__Item_11 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadResult_9, (MR_Integer) 0));
#line 1227 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_23_23;

#line 1228 "prog_io_util.m"
          {
#line 1228 "prog_io_util.m"
            parse_tree__prog_io_util__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1228 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_23_23, 0) = parse_tree__prog_io_util__Item_11;
#line 1228 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1228 "prog_io_util.m"
          }
#line 1228 "prog_io_util.m"
          {
#line 1228 "prog_io_util.m"
            MR_Word base;
#line 1228 "prog_io_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1228 "prog_io_util.m"
            *parse_tree__prog_io_util__Result_8 = base;
#line 1228 "prog_io_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_23_23));
#line 1228 "prog_io_util.m"
          }
#line 1227 "prog_io_util.m"
        }
#line 1230 "prog_io_util.m"
    else
#line 1231 "prog_io_util.m"
      {
#line 1231 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__HeadTail_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Tail_7, (MR_Integer) 0)));
#line 1231 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TailTail_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Tail_7, (MR_Integer) 1)));
#line 1231 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TailResult_14;

#line 1232 "prog_io_util.m"
        {
#line 1232 "prog_io_util.m"
          parse_tree__prog_io_util__map_parser_one_or_more_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_29, parse_tree__prog_io_util__Parser_5, parse_tree__prog_io_util__HeadTail_12, parse_tree__prog_io_util__TailTail_13, &parse_tree__prog_io_util__TailResult_14);
        }
#line 1237 "prog_io_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadResult_9)) == (MR_mktag((MR_Integer) 0))))
#line 1237 "prog_io_util.m"
          {
#line 1237 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadResult_9, (MR_Integer) 0)));

#line 1237 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__TailResult_14)) == (MR_mktag((MR_Integer) 0))))
#line 1234 "prog_io_util.m"
              {
#line 1234 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailSpecs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TailResult_14, (MR_Integer) 0)));
#line 1234 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_22_22;

#line 1236 "prog_io_util.m"
                {
#line 1236 "prog_io_util.m"
                  parse_tree__prog_io_util__V_22_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_util__V_31_31, parse_tree__prog_io_util__TailSpecs_16);
                }
#line 1236 "prog_io_util.m"
                {
#line 1236 "prog_io_util.m"
                  MR_Word base;
#line 1236 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1236 "prog_io_util.m"
                  *parse_tree__prog_io_util__Result_8 = base;
#line 1236 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_22_22));
#line 1236 "prog_io_util.m"
                }
#line 1234 "prog_io_util.m"
              }
#line 1237 "prog_io_util.m"
            else
#line 1240 "prog_io_util.m"
              *parse_tree__prog_io_util__Result_8 = (MR_Word) parse_tree__prog_io_util__HeadResult_9;
#line 1237 "prog_io_util.m"
          }
#line 1237 "prog_io_util.m"
        else
#line 1237 "prog_io_util.m"
          {
#line 1237 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_32_32 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadResult_9, (MR_Integer) 0));

#line 1237 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__TailResult_14)) == (MR_mktag((MR_Integer) 0))))
#line 1244 "prog_io_util.m"
              *parse_tree__prog_io_util__Result_8 = parse_tree__prog_io_util__TailResult_14;
#line 1237 "prog_io_util.m"
            else
#line 1246 "prog_io_util.m"
              {
#line 1246 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailItems_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TailResult_14, (MR_Integer) 0)));
#line 1246 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_21_21;

#line 1248 "prog_io_util.m"
                {
#line 1248 "prog_io_util.m"
                  parse_tree__prog_io_util__V_21_21 = mercury__list__one_or_more_cons_2_f_0(parse_tree__prog_io_util__TypeInfo_for_T_29, parse_tree__prog_io_util__V_32_32, parse_tree__prog_io_util__TailItems_20);
                }
#line 1248 "prog_io_util.m"
                {
#line 1248 "prog_io_util.m"
                  MR_Word base;
#line 1248 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1248 "prog_io_util.m"
                  *parse_tree__prog_io_util__Result_8 = base;
#line 1248 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_21_21));
#line 1248 "prog_io_util.m"
                }
#line 1246 "prog_io_util.m"
              }
#line 1237 "prog_io_util.m"
          }
#line 1231 "prog_io_util.m"
      }
#line 1219 "prog_io_util.m"
  }
#line 1216 "prog_io_util.m"
}

#line 1130 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_bound_inst_3_p_0(
#line 1130 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_4,
#line 1130 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__InstTerm_5,
#line 1130 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__BoundInst_6)
#line 1130 "prog_io_util.m"
{
#line 1133 "prog_io_util.m"
  {
#line 1133 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__InstTerm_5)) == (MR_mktag((MR_Integer) 0)));
#line 1133 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Functor_7;
#line 1133 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Args0_8;
#line 1133 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Args1_12;
#line 1133 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__ConsId_14;
#line 1133 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Args_21;
#line 1134 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 1134 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1134 "prog_io_util.m"
      {
#line 1134 "prog_io_util.m"
        parse_tree__prog_io_util__Functor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__InstTerm_5, (MR_Integer) 0)));
#line 1134 "prog_io_util.m"
        parse_tree__prog_io_util__Args0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__InstTerm_5, (MR_Integer) 1)));
#line 1134 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__InstTerm_5, (MR_Integer) 2)));
#line 1142 "prog_io_util.m"
#line 1142 "prog_io_util.m"
        switch (MR_tag((MR_Word) parse_tree__prog_io_util__Functor_7)) {
#line 1142 "prog_io_util.m"
          default:
#line 1142 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 1142 "prog_io_util.m"
            break;
#line 1142 "prog_io_util.m"
          case (MR_Integer) 0:
#line 1137 "prog_io_util.m"
            {
#line 1137 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__TypeInfo_25_25;
#line 1137 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__SymName_11;
#line 1137 "prog_io_util.m"
              MR_Integer parse_tree__prog_io_util__Arity_13;
#line 1137 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_22_22;

#line 1138 "prog_io_util.m"
              {
#line 1138 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_from_f_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__Functor_7, parse_tree__prog_io_util__Args0_8, &parse_tree__prog_io_util__SymName_11, &parse_tree__prog_io_util__Args1_12);
              }
#line 1137 "prog_io_util.m"
              if (parse_tree__prog_io_util__succeeded)
#line 1137 "prog_io_util.m"
                {
#line 10295 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__TypeInfo_25_25 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[0];
#line 1140 "prog_io_util.m"
                  {
#line 1140 "prog_io_util.m"
                    mercury__list__length_2_p_0(parse_tree__prog_io_util__TypeInfo_25_25, parse_tree__prog_io_util__Args1_12, &parse_tree__prog_io_util__Arity_13);
                  }
#line 1141 "prog_io_util.m"
                  {
#line 1141 "prog_io_util.m"
                    parse_tree__prog_io_util__V_22_22 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                  }
#line 1141 "prog_io_util.m"
                  {
#line 1141 "prog_io_util.m"
                    parse_tree__prog_io_util__ConsId_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1141 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__ConsId_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1141 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__ConsId_14, 1) = ((MR_Box) (parse_tree__prog_io_util__SymName_11));
#line 1141 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__ConsId_14, 2) = ((MR_Box) (parse_tree__prog_io_util__Arity_13));
#line 1141 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__ConsId_14, 3) = ((MR_Box) (parse_tree__prog_io_util__V_22_22));
#line 1141 "prog_io_util.m"
                  }
#line 1141 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1137 "prog_io_util.m"
                }
#line 1137 "prog_io_util.m"
            }
#line 1142 "prog_io_util.m"
            break;
#line 1142 "prog_io_util.m"
          case (MR_Integer) 1:
#line 1142 "prog_io_util.m"
          case (MR_Integer) 2:
#line 1152 "prog_io_util.m"
            {
#line 1152 "prog_io_util.m"
              MR_Integer parse_tree__prog_io_util__Arity_23;

#line 1153 "prog_io_util.m"
              parse_tree__prog_io_util__Args1_12 = parse_tree__prog_io_util__Args0_8;
#line 1154 "prog_io_util.m"
              {
#line 1154 "prog_io_util.m"
                mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[0], parse_tree__prog_io_util__Args1_12, &parse_tree__prog_io_util__Arity_23);
              }
#line 1155 "prog_io_util.m"
              {
#line 1155 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = parse_tree__prog_util__make_functor_cons_id_3_p_0(parse_tree__prog_io_util__Functor_7, parse_tree__prog_io_util__Arity_23, &parse_tree__prog_io_util__ConsId_14);
              }
#line 1152 "prog_io_util.m"
            }
#line 1142 "prog_io_util.m"
            break;
#line 1142 "prog_io_util.m"
          case (MR_Integer) 3:
#line 1142 "prog_io_util.m"
#line 1142 "prog_io_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Functor_7, (MR_Integer) 0)))) {
#line 1142 "prog_io_util.m"
              default:
#line 1142 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 1142 "prog_io_util.m"
                break;
#line 1142 "prog_io_util.m"
              case (MR_Integer) 0:
#line 1142 "prog_io_util.m"
              case (MR_Integer) 1:
#line 1152 "prog_io_util.m"
                {
#line 1152 "prog_io_util.m"
                  MR_Integer parse_tree__prog_io_util__Arity_23;

#line 1153 "prog_io_util.m"
                  parse_tree__prog_io_util__Args1_12 = parse_tree__prog_io_util__Args0_8;
#line 1154 "prog_io_util.m"
                  {
#line 1154 "prog_io_util.m"
                    mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[0], parse_tree__prog_io_util__Args1_12, &parse_tree__prog_io_util__Arity_23);
                  }
#line 1155 "prog_io_util.m"
                  {
#line 1155 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = parse_tree__prog_util__make_functor_cons_id_3_p_0(parse_tree__prog_io_util__Functor_7, parse_tree__prog_io_util__Arity_23, &parse_tree__prog_io_util__ConsId_14);
                  }
#line 1152 "prog_io_util.m"
                }
#line 1142 "prog_io_util.m"
                break;
#line 1142 "prog_io_util.m"
            }
#line 1142 "prog_io_util.m"
            break;
#line 1142 "prog_io_util.m"
        }
#line 1133 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1133 "prog_io_util.m"
          {
#line 1157 "prog_io_util.m"
            {
#line 1157 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__Args1_12, &parse_tree__prog_io_util__Args_21);
            }
#line 1133 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1133 "prog_io_util.m"
              {
#line 1158 "prog_io_util.m"
                {
#line 1158 "prog_io_util.m"
                  MR_Word base;
#line 1158 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1158 "prog_io_util.m"
                  *parse_tree__prog_io_util__BoundInst_6 = base;
#line 1158 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__ConsId_14));
#line 1158 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_21));
#line 1158 "prog_io_util.m"
                }
#line 1158 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1133 "prog_io_util.m"
              }
#line 1133 "prog_io_util.m"
          }
#line 1134 "prog_io_util.m"
      }
#line 1133 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1133 "prog_io_util.m"
  }
#line 1130 "prog_io_util.m"
}

#line 1122 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_bound_inst_list_3_p_0(
#line 1122 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
#line 1122 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 1122 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3)
#line 1122 "prog_io_util.m"
{
#line 1125 "prog_io_util.m"
  {
#line 1125 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 1125 "prog_io_util.m"
    if ((parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1125 "prog_io_util.m"
      {
#line 1125 "prog_io_util.m"
        *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1125 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1125 "prog_io_util.m"
      }
#line 1125 "prog_io_util.m"
    else
#line 1126 "prog_io_util.m"
      {
#line 1126 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__H0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1126 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__T0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1126 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__H_8;
#line 1126 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__T_9;

#line 1127 "prog_io_util.m"
        {
#line 1127 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_bound_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__H0_6, &parse_tree__prog_io_util__H_8);
        }
#line 1126 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1126 "prog_io_util.m"
          {
#line 1128 "prog_io_util.m"
            {
#line 1128 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_bound_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__T0_7, &parse_tree__prog_io_util__T_9);
            }
#line 1126 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1126 "prog_io_util.m"
              {
#line 1126 "prog_io_util.m"
                {
#line 1126 "prog_io_util.m"
                  MR_Word base;
#line 1126 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1126 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 1126 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__H_8));
#line 1126 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__T_9));
#line 1126 "prog_io_util.m"
                }
#line 1126 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1126 "prog_io_util.m"
              }
#line 1126 "prog_io_util.m"
          }
#line 1126 "prog_io_util.m"
      }
#line 1125 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1125 "prog_io_util.m"
  }
#line 1122 "prog_io_util.m"
}

#line 1115 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_1(
#line 1115 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg)
#line 1115 "prog_io_util.m"
{
#line 1115 "prog_io_util.m"
  {
#line 1115 "prog_io_util.m"
    struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s * parse_tree__prog_io_util__env_ptr = (struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s *) parse_tree__prog_io_util__env_ptr_arg;

#line 1115 "prog_io_util.m"
    MR_builtin_longjmp((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__commit_0, 1);
#line 1115 "prog_io_util.m"
  }
#line 1115 "prog_io_util.m"
}

#line 1115 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_2(
#line 1115 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg)
#line 1115 "prog_io_util.m"
{
#line 1115 "prog_io_util.m"
  {
#line 1115 "prog_io_util.m"
    struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s * parse_tree__prog_io_util__env_ptr = (struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s *) parse_tree__prog_io_util__env_ptr_arg;

#line 1115 "prog_io_util.m"
    {
#line 1116 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_16_16;
#line 1117 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_18_18;
#line 1118 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_19_19;

#line 1116 "prog_io_util.m"
      (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13)) == (MR_mktag((MR_Integer) 1)));
#line 1116 "prog_io_util.m"
      if ((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 1116 "prog_io_util.m"
        {
#line 1116 "prog_io_util.m"
          {
#line 1116 "prog_io_util.m"
            (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13, (MR_Integer) 0)));
#line 1116 "prog_io_util.m"
            (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13, (MR_Integer) 1)));
#line 1116 "prog_io_util.m"
          }
#line 1115 "prog_io_util.m"
          {
#line 1116 "prog_io_util.m"
            (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 1116 "prog_io_util.m"
            if ((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 1116 "prog_io_util.m"
              {
#line 1116 "prog_io_util.m"
                {
#line 1116 "prog_io_util.m"
                  (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20, (MR_Integer) 0)));
#line 1116 "prog_io_util.m"
                  parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20, (MR_Integer) 1)));
#line 1116 "prog_io_util.m"
                }
#line 1115 "prog_io_util.m"
                {
#line 1117 "prog_io_util.m"
                  (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__ConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F1_14, (MR_Integer) 0)));
#line 1117 "prog_io_util.m"
                  parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F1_14, (MR_Integer) 1)));
#line 1118 "prog_io_util.m"
                  (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F2_15, (MR_Integer) 0)));
#line 1118 "prog_io_util.m"
                  parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F2_15, (MR_Integer) 1)));
#line 1118 "prog_io_util.m"
                  {
#line 1118 "prog_io_util.m"
                    (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = parse_tree__prog_data____Unify____cons_id_0_0((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__ConsId_17, (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_24_24);
                  }
#line 1118 "prog_io_util.m"
                  if ((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 1118 "prog_io_util.m"
                    {
#line 1118 "prog_io_util.m"
                      parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_1(parse_tree__prog_io_util__env_ptr);
#line 1118 "prog_io_util.m"
                      return;
                    }
#line 1115 "prog_io_util.m"
                }
#line 1116 "prog_io_util.m"
              }
#line 1115 "prog_io_util.m"
          }
#line 1116 "prog_io_util.m"
        }
#line 1115 "prog_io_util.m"
    }
#line 1115 "prog_io_util.m"
  }
#line 1115 "prog_io_util.m"
}

#line 1115 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_3(
#line 1115 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg)
#line 1115 "prog_io_util.m"
{
#line 1115 "prog_io_util.m"
  {
#line 1115 "prog_io_util.m"
    struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s * parse_tree__prog_io_util__env_ptr = (struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s *) parse_tree__prog_io_util__env_ptr_arg;

#line 1115 "prog_io_util.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__commit_0) == 0)
#line 1115 "prog_io_util.m"
      {
#line 1115 "prog_io_util.m"
        {
#line 1115 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_12_12;

#line 1115 "prog_io_util.m"
          {
#line 1115 "prog_io_util.m"
            mercury__list__append_3_p_4((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23, &parse_tree__prog_io_util__V_12_12, &(parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13, (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__Functors_11, parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_2, parse_tree__prog_io_util__env_ptr);
          }
#line 1115 "prog_io_util.m"
        }
#line 1115 "prog_io_util.m"
        (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = MR_FALSE;
#line 1115 "prog_io_util.m"
      }
#line 1115 "prog_io_util.m"
    else
#line 1115 "prog_io_util.m"
      (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = MR_TRUE;
#line 1115 "prog_io_util.m"
  }
#line 1115 "prog_io_util.m"
}

#line 1106 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(
#line 1106 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
#line 1106 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Disj_6,
#line 1106 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Uniqueness_7,
#line 1106 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Inst_8)
#line 1106 "prog_io_util.m"
{
#line 1106 "prog_io_util.m"
  {
#line 1106 "prog_io_util.m"
    struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s parse_tree__prog_io_util__env;

#line 1109 "prog_io_util.m"
    {
#line 1109 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__Functors0_10;
#line 1109 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_21_21;
#line 1109 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_31_31;
#line 1109 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__H0_38;
#line 1109 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__T0_39;
#line 1109 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__H_40;
#line 1109 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__T_41;

#line 1194 "prog_io_util.m"
      {
#line 1194 "prog_io_util.m"
        parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ";", parse_tree__prog_io_util__Disj_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_31_31);
      }
#line 1164 "prog_io_util.m"
      parse_tree__prog_io_util__H0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_31_31, (MR_Integer) 0)));
#line 1164 "prog_io_util.m"
      parse_tree__prog_io_util__T0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_31_31, (MR_Integer) 1)));
#line 1127 "prog_io_util.m"
      {
#line 1127 "prog_io_util.m"
        (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = parse_tree__prog_io_util__convert_bound_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__H0_38, &parse_tree__prog_io_util__H_40);
      }
#line 1109 "prog_io_util.m"
      if ((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 1109 "prog_io_util.m"
        {
#line 1128 "prog_io_util.m"
          {
#line 1128 "prog_io_util.m"
            (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = parse_tree__prog_io_util__convert_bound_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__T0_39, &parse_tree__prog_io_util__T_41);
          }
#line 1109 "prog_io_util.m"
          if ((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 1109 "prog_io_util.m"
            {
#line 10736 "parse_tree.prog_io_util.c"
              (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 1126 "prog_io_util.m"
              {
#line 1126 "prog_io_util.m"
                parse_tree__prog_io_util__Functors0_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1126 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Functors0_10, 0) = ((MR_Box) (parse_tree__prog_io_util__H_40));
#line 1126 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Functors0_10, 1) = ((MR_Box) (parse_tree__prog_io_util__T_41));
#line 1126 "prog_io_util.m"
              }
#line 1112 "prog_io_util.m"
              {
#line 1112 "prog_io_util.m"
                mercury__list__sort_2_p_0((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23, parse_tree__prog_io_util__Functors0_10, &(parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__Functors_11);
              }
#line 1115 "prog_io_util.m"
              {
#line 1115 "prog_io_util.m"
                parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_3(&parse_tree__prog_io_util__env);
              }
#line 1114 "prog_io_util.m"
              (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = !((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded);
#line 1109 "prog_io_util.m"
              if ((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 1109 "prog_io_util.m"
                {
#line 1120 "prog_io_util.m"
                  parse_tree__prog_io_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1120 "prog_io_util.m"
                  {
#line 1120 "prog_io_util.m"
                    MR_Word base;
#line 1120 "prog_io_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1120 "prog_io_util.m"
                    *parse_tree__prog_io_util__Inst_8 = base;
#line 1120 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1120 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Uniqueness_7));
#line 1120 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_21_21));
#line 1120 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) ((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__Functors_11));
#line 1120 "prog_io_util.m"
                  }
#line 1120 "prog_io_util.m"
                  (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = MR_TRUE;
#line 1109 "prog_io_util.m"
                }
#line 1109 "prog_io_util.m"
            }
#line 1109 "prog_io_util.m"
        }
#line 1109 "prog_io_util.m"
      return (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded;
#line 1109 "prog_io_util.m"
    }
#line 1106 "prog_io_util.m"
  }
#line 1106 "prog_io_util.m"
}

#line 1013 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_higher_order_inst_4_p_0(
#line 1013 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
#line 1013 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__BeforeIsTerm_6,
#line 1013 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__DetTerm_7,
#line 1013 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Inst_8)
#line 1013 "prog_io_util.m"
{
#line 1017 "prog_io_util.m"
  {
#line 1017 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__BeforeIsTerm_6)) == (MR_mktag((MR_Integer) 0)));
#line 1017 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__BeforeIsFunctor_9;
#line 1017 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__BeforeIsArgTerms_10;
#line 1017 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_27_27;
#line 1019 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;

#line 1019 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1019 "prog_io_util.m"
      {
#line 1019 "prog_io_util.m"
        parse_tree__prog_io_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__BeforeIsTerm_6, (MR_Integer) 0)));
#line 1019 "prog_io_util.m"
        parse_tree__prog_io_util__BeforeIsArgTerms_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__BeforeIsTerm_6, (MR_Integer) 1)));
#line 1019 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__BeforeIsTerm_6, (MR_Integer) 2)));
#line 1019 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_27_27)) == (MR_mktag((MR_Integer) 0)));
#line 1019 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1019 "prog_io_util.m"
          {
#line 1019 "prog_io_util.m"
            parse_tree__prog_io_util__BeforeIsFunctor_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, (MR_Integer) 0)));
#line 1056 "prog_io_util.m"
            if ((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "=") == 0))
#line 1057 "prog_io_util.m"
              {
#line 1057 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TypeCtorInfo_53_53;
#line 1057 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__FuncTerm_18;
#line 1057 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__RetModeTerm_19;
#line 1057 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__FuncTermFunctor_20;
#line 1057 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__ArgModesTerms_21;
#line 1057 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_28_28;
#line 1057 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_29_29;
#line 1057 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_30_30;
#line 1057 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_31_31;
#line 1057 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_32_32;
#line 1057 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_34_34;
#line 1057 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_35_35;
#line 1057 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_36_36;
#line 1057 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__DetString_51;
#line 1059 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_22_22;
#line 1080 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_23_23;

#line 1058 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__BeforeIsArgTerms_10)) == (MR_mktag((MR_Integer) 1)));
#line 1058 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1058 "prog_io_util.m"
                  {
#line 1058 "prog_io_util.m"
                    parse_tree__prog_io_util__FuncTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__BeforeIsArgTerms_10, (MR_Integer) 0)));
#line 1058 "prog_io_util.m"
                    parse_tree__prog_io_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__BeforeIsArgTerms_10, (MR_Integer) 1)));
#line 1058 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 1058 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1058 "prog_io_util.m"
                      {
#line 1058 "prog_io_util.m"
                        parse_tree__prog_io_util__RetModeTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_28_28, (MR_Integer) 0)));
#line 1058 "prog_io_util.m"
                        parse_tree__prog_io_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_28_28, (MR_Integer) 1)));
#line 1058 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1057 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1057 "prog_io_util.m"
                          {
#line 1059 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__FuncTerm_18)) == (MR_mktag((MR_Integer) 0)));
#line 1059 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1059 "prog_io_util.m"
                              {
#line 1059 "prog_io_util.m"
                                parse_tree__prog_io_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_18, (MR_Integer) 0)));
#line 1059 "prog_io_util.m"
                                parse_tree__prog_io_util__ArgModesTerms_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_18, (MR_Integer) 1)));
#line 1059 "prog_io_util.m"
                                parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_18, (MR_Integer) 2)));
#line 1059 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_30_30)) == (MR_mktag((MR_Integer) 0)));
#line 1059 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 1059 "prog_io_util.m"
                                  {
#line 1059 "prog_io_util.m"
                                    parse_tree__prog_io_util__FuncTermFunctor_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_30_30, (MR_Integer) 0)));
#line 1080 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 1080 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 1080 "prog_io_util.m"
                                      {
#line 1080 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 0)));
#line 1080 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 1)));
#line 1080 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 2)));
#line 1080 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1057 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 1057 "prog_io_util.m"
                                          {
#line 1080 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_31_31)) == (MR_mktag((MR_Integer) 0)));
#line 1080 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 1080 "prog_io_util.m"
                                              {
#line 1080 "prog_io_util.m"
                                                parse_tree__prog_io_util__DetString_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_31_31, (MR_Integer) 0)));
#line 1084 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10956 "parse_tree.prog_io_util.c"
                                                parse_tree__prog_io_util__TypeCtorInfo_53_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1085 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_35_35 = (MR_Integer) 1;
#line 1086 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10962 "parse_tree.prog_io_util.c"
                                                if ((strcmp(parse_tree__prog_io_util__FuncTermFunctor_20, (MR_String) "func") == 0))
#line 10964 "parse_tree.prog_io_util.c"
                                                  {
#line 10966 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_39_39;
#line 10968 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_40_40;
#line 10970 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__ArgModes0_55;
#line 10972 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__RetMode_56;
#line 10974 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__FuncInst_57;
#line 10976 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_58_58;
#line 10978 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__ArgModes_60;
#line 10980 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__Detism_61;

#line 1081 "prog_io_util.m"
                                                    {
#line 1081 "prog_io_util.m"
                                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_51, &parse_tree__prog_io_util__Detism_61);
                                                    }
#line 10988 "parse_tree.prog_io_util.c"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 10990 "parse_tree.prog_io_util.c"
                                                      {
#line 1082 "prog_io_util.m"
                                                        {
#line 1082 "prog_io_util.m"
                                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__ArgModesTerms_21, &parse_tree__prog_io_util__ArgModes0_55);
                                                        }
#line 10997 "parse_tree.prog_io_util.c"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 10999 "parse_tree.prog_io_util.c"
                                                          {
#line 1083 "prog_io_util.m"
                                                            {
#line 1083 "prog_io_util.m"
                                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__RetModeTerm_19, &parse_tree__prog_io_util__RetMode_56);
                                                            }
#line 11006 "parse_tree.prog_io_util.c"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 11008 "parse_tree.prog_io_util.c"
                                                              {
#line 1084 "prog_io_util.m"
                                                                {
#line 1084 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1084 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_58_58, 0) = ((MR_Box) (parse_tree__prog_io_util__RetMode_56));
#line 1084 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_58_58, 1) = ((MR_Box) (parse_tree__prog_io_util__V_34_34));
#line 1084 "prog_io_util.m"
                                                                }
#line 1084 "prog_io_util.m"
                                                                {
#line 1084 "prog_io_util.m"
                                                                  mercury__list__append_3_p_1(parse_tree__prog_io_util__TypeCtorInfo_53_53, parse_tree__prog_io_util__ArgModes0_55, parse_tree__prog_io_util__V_58_58, &parse_tree__prog_io_util__ArgModes_60);
                                                                }
#line 1089 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_39_39 = (MR_Integer) 0;
#line 1085 "prog_io_util.m"
                                                                {
#line 1085 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__FuncInst_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1085 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_57, 0) = ((MR_Box) (parse_tree__prog_io_util__V_35_35));
#line 1085 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_57, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_60));
#line 1085 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_57, 2) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 1085 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_57, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_61));
#line 1085 "prog_io_util.m"
                                                                }
#line 1089 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__FuncInst_57);
#line 1089 "prog_io_util.m"
                                                                {
#line 1089 "prog_io_util.m"
                                                                  MR_Word base;
#line 1089 "prog_io_util.m"
                                                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1089 "prog_io_util.m"
                                                                  *parse_tree__prog_io_util__Inst_8 = base;
#line 1089 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1089 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_39_39));
#line 1089 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_40_40));
#line 1089 "prog_io_util.m"
                                                                }
#line 1089 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 11061 "parse_tree.prog_io_util.c"
                                                              }
#line 11063 "parse_tree.prog_io_util.c"
                                                          }
#line 11065 "parse_tree.prog_io_util.c"
                                                      }
#line 11067 "parse_tree.prog_io_util.c"
                                                  }
#line 11069 "parse_tree.prog_io_util.c"
                                                else
#line 11071 "parse_tree.prog_io_util.c"
                                                if ((strcmp(parse_tree__prog_io_util__FuncTermFunctor_20, (MR_String) "any_func") == 0))
#line 11073 "parse_tree.prog_io_util.c"
                                                  {
#line 11075 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__ArgModes0_24;
#line 11077 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__RetMode_25;
#line 11079 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__FuncInst_26;
#line 11081 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_33_33;
#line 11083 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_37_37;
#line 11085 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_38_38;
#line 11087 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__ArgModes_50;
#line 11089 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__Detism_52;

#line 1081 "prog_io_util.m"
                                                    {
#line 1081 "prog_io_util.m"
                                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_51, &parse_tree__prog_io_util__Detism_52);
                                                    }
#line 11097 "parse_tree.prog_io_util.c"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 11099 "parse_tree.prog_io_util.c"
                                                      {
#line 1082 "prog_io_util.m"
                                                        {
#line 1082 "prog_io_util.m"
                                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__ArgModesTerms_21, &parse_tree__prog_io_util__ArgModes0_24);
                                                        }
#line 11106 "parse_tree.prog_io_util.c"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 11108 "parse_tree.prog_io_util.c"
                                                          {
#line 1083 "prog_io_util.m"
                                                            {
#line 1083 "prog_io_util.m"
                                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__RetModeTerm_19, &parse_tree__prog_io_util__RetMode_25);
                                                            }
#line 11115 "parse_tree.prog_io_util.c"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 11117 "parse_tree.prog_io_util.c"
                                                              {
#line 1084 "prog_io_util.m"
                                                                {
#line 1084 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1084 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_util__RetMode_25));
#line 1084 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io_util__V_34_34));
#line 1084 "prog_io_util.m"
                                                                }
#line 1084 "prog_io_util.m"
                                                                {
#line 1084 "prog_io_util.m"
                                                                  mercury__list__append_3_p_1(parse_tree__prog_io_util__TypeCtorInfo_53_53, parse_tree__prog_io_util__ArgModes0_24, parse_tree__prog_io_util__V_33_33, &parse_tree__prog_io_util__ArgModes_50);
                                                                }
#line 1092 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_37_37 = (MR_Integer) 0;
#line 1085 "prog_io_util.m"
                                                                {
#line 1085 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__FuncInst_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1085 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_26, 0) = ((MR_Box) (parse_tree__prog_io_util__V_35_35));
#line 1085 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_26, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_50));
#line 1085 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_26, 2) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 1085 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_26, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_52));
#line 1085 "prog_io_util.m"
                                                                }
#line 1092 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__FuncInst_26);
#line 1092 "prog_io_util.m"
                                                                {
#line 1092 "prog_io_util.m"
                                                                  MR_Word base;
#line 1092 "prog_io_util.m"
                                                                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1092 "prog_io_util.m"
                                                                  *parse_tree__prog_io_util__Inst_8 = base;
#line 1092 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_37_37));
#line 1092 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_38_38));
#line 1092 "prog_io_util.m"
                                                                }
#line 1092 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 11168 "parse_tree.prog_io_util.c"
                                                              }
#line 11170 "parse_tree.prog_io_util.c"
                                                          }
#line 11172 "parse_tree.prog_io_util.c"
                                                      }
#line 11174 "parse_tree.prog_io_util.c"
                                                  }
#line 11176 "parse_tree.prog_io_util.c"
                                                else
#line 11178 "parse_tree.prog_io_util.c"
                                                  parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 1080 "prog_io_util.m"
                                              }
#line 1057 "prog_io_util.m"
                                          }
#line 1080 "prog_io_util.m"
                                      }
#line 1059 "prog_io_util.m"
                                  }
#line 1059 "prog_io_util.m"
                              }
#line 1057 "prog_io_util.m"
                          }
#line 1058 "prog_io_util.m"
                      }
#line 1058 "prog_io_util.m"
                  }
#line 1057 "prog_io_util.m"
              }
#line 1056 "prog_io_util.m"
            else
#line 1056 "prog_io_util.m"
            if ((((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "any_pred") == 0)) || ((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "pred") == 0))))
#line 1023 "prog_io_util.m"
              {
#line 1023 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__ArgModes_13;
#line 1023 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__DetString_14;
#line 1023 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Detism_16;
#line 1023 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__PredInst_17;
#line 1023 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_41_41;
#line 1023 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_42_42;
#line 1023 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_43_43;
#line 1023 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_44_44;
#line 1045 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_15_15;

#line 1044 "prog_io_util.m"
                {
#line 1044 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__BeforeIsArgTerms_10, &parse_tree__prog_io_util__ArgModes_13);
                }
#line 1023 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1023 "prog_io_util.m"
                  {
#line 1045 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 1045 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1045 "prog_io_util.m"
                      {
#line 1045 "prog_io_util.m"
                        parse_tree__prog_io_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 0)));
#line 1045 "prog_io_util.m"
                        parse_tree__prog_io_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 1)));
#line 1045 "prog_io_util.m"
                        parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 2)));
#line 1045 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1023 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1023 "prog_io_util.m"
                          {
#line 1045 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_41_41)) == (MR_mktag((MR_Integer) 0)));
#line 1045 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1045 "prog_io_util.m"
                              {
#line 1045 "prog_io_util.m"
                                parse_tree__prog_io_util__DetString_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_41_41, (MR_Integer) 0)));
#line 1046 "prog_io_util.m"
                                {
#line 1046 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_14, &parse_tree__prog_io_util__Detism_16);
                                }
#line 1023 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 1023 "prog_io_util.m"
                                  {
#line 1047 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_43_43 = (MR_Integer) 0;
#line 1048 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1047 "prog_io_util.m"
                                    {
#line 1047 "prog_io_util.m"
                                      parse_tree__prog_io_util__PredInst_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1047 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_17, 0) = ((MR_Box) (parse_tree__prog_io_util__V_43_43));
#line 1047 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_17, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_13));
#line 1047 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_17, 2) = ((MR_Box) (parse_tree__prog_io_util__V_44_44));
#line 1047 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_17, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_16));
#line 1047 "prog_io_util.m"
                                    }
#line 11285 "parse_tree.prog_io_util.c"
                                    if ((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "pred") == 0))
#line 11287 "parse_tree.prog_io_util.c"
                                      {
#line 11289 "parse_tree.prog_io_util.c"
                                        MR_Word parse_tree__prog_io_util__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__PredInst_17);

#line 1051 "prog_io_util.m"
                                        {
#line 1051 "prog_io_util.m"
                                          MR_Word base;
#line 1051 "prog_io_util.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1051 "prog_io_util.m"
                                          *parse_tree__prog_io_util__Inst_8 = base;
#line 1051 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1051 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1051 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_48_48));
#line 1051 "prog_io_util.m"
                                        }
#line 11308 "parse_tree.prog_io_util.c"
                                      }
#line 11310 "parse_tree.prog_io_util.c"
                                    else
#line 11312 "parse_tree.prog_io_util.c"
                                      {
#line 11314 "parse_tree.prog_io_util.c"
                                        MR_Word parse_tree__prog_io_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__PredInst_17);

#line 1054 "prog_io_util.m"
                                        {
#line 1054 "prog_io_util.m"
                                          MR_Word base;
#line 1054 "prog_io_util.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1054 "prog_io_util.m"
                                          *parse_tree__prog_io_util__Inst_8 = base;
#line 1054 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1054 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_46_46));
#line 1054 "prog_io_util.m"
                                        }
#line 11331 "parse_tree.prog_io_util.c"
                                      }
#line 11333 "parse_tree.prog_io_util.c"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1023 "prog_io_util.m"
                                  }
#line 1045 "prog_io_util.m"
                              }
#line 1023 "prog_io_util.m"
                          }
#line 1045 "prog_io_util.m"
                      }
#line 1023 "prog_io_util.m"
                  }
#line 1023 "prog_io_util.m"
              }
#line 1056 "prog_io_util.m"
            else
#line 1056 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 1019 "prog_io_util.m"
          }
#line 1019 "prog_io_util.m"
      }
#line 1017 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1017 "prog_io_util.m"
  }
#line 1013 "prog_io_util.m"
}

#line 699 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_higher_order_mode_4_p_0(
#line 699 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
#line 699 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__BeforeIsTerm_6,
#line 699 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__DetTerm_7,
#line 699 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Mode_8)
#line 699 "prog_io_util.m"
{
#line 703 "prog_io_util.m"
  {
#line 703 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__BeforeIsTerm_6)) == (MR_mktag((MR_Integer) 0)));
#line 703 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__BeforeIsFunctor_9;
#line 703 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__BeforeIsArgTerms_10;
#line 703 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_28_28;
#line 705 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;

#line 705 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 705 "prog_io_util.m"
      {
#line 705 "prog_io_util.m"
        parse_tree__prog_io_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__BeforeIsTerm_6, (MR_Integer) 0)));
#line 705 "prog_io_util.m"
        parse_tree__prog_io_util__BeforeIsArgTerms_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__BeforeIsTerm_6, (MR_Integer) 1)));
#line 705 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__BeforeIsTerm_6, (MR_Integer) 2)));
#line 705 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_28_28)) == (MR_mktag((MR_Integer) 0)));
#line 705 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 705 "prog_io_util.m"
          {
#line 705 "prog_io_util.m"
            parse_tree__prog_io_util__BeforeIsFunctor_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, (MR_Integer) 0)));
#line 746 "prog_io_util.m"
            if ((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "=") == 0))
#line 747 "prog_io_util.m"
              {
#line 747 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TypeCtorInfo_57_57;
#line 747 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__FuncTerm_19;
#line 747 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__RetModeTerm_20;
#line 747 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__FuncTermFunctor_21;
#line 747 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__ArgModesTerms_22;
#line 747 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_29_29;
#line 747 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_30_30;
#line 747 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_31_31;
#line 747 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_32_32;
#line 747 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_33_33;
#line 747 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_35_35;
#line 747 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_36_36;
#line 747 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_37_37;
#line 747 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__DetString_54;
#line 747 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Inst_56;
#line 749 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_23_23;
#line 771 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_24_24;

#line 748 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__BeforeIsArgTerms_10)) == (MR_mktag((MR_Integer) 1)));
#line 748 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 748 "prog_io_util.m"
                  {
#line 748 "prog_io_util.m"
                    parse_tree__prog_io_util__FuncTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__BeforeIsArgTerms_10, (MR_Integer) 0)));
#line 748 "prog_io_util.m"
                    parse_tree__prog_io_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__BeforeIsArgTerms_10, (MR_Integer) 1)));
#line 748 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 748 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 748 "prog_io_util.m"
                      {
#line 748 "prog_io_util.m"
                        parse_tree__prog_io_util__RetModeTerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, (MR_Integer) 0)));
#line 748 "prog_io_util.m"
                        parse_tree__prog_io_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, (MR_Integer) 1)));
#line 748 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 747 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 747 "prog_io_util.m"
                          {
#line 749 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__FuncTerm_19)) == (MR_mktag((MR_Integer) 0)));
#line 749 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 749 "prog_io_util.m"
                              {
#line 749 "prog_io_util.m"
                                parse_tree__prog_io_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_19, (MR_Integer) 0)));
#line 749 "prog_io_util.m"
                                parse_tree__prog_io_util__ArgModesTerms_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_19, (MR_Integer) 1)));
#line 749 "prog_io_util.m"
                                parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_19, (MR_Integer) 2)));
#line 749 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_31_31)) == (MR_mktag((MR_Integer) 0)));
#line 749 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 749 "prog_io_util.m"
                                  {
#line 749 "prog_io_util.m"
                                    parse_tree__prog_io_util__FuncTermFunctor_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_31_31, (MR_Integer) 0)));
#line 771 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 771 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 771 "prog_io_util.m"
                                      {
#line 771 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 0)));
#line 771 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 1)));
#line 771 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 2)));
#line 771 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 747 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 747 "prog_io_util.m"
                                          {
#line 771 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_32_32)) == (MR_mktag((MR_Integer) 0)));
#line 771 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 771 "prog_io_util.m"
                                              {
#line 771 "prog_io_util.m"
                                                parse_tree__prog_io_util__DetString_54 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_32_32, (MR_Integer) 0)));
#line 775 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_35_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 11519 "parse_tree.prog_io_util.c"
                                                parse_tree__prog_io_util__TypeCtorInfo_57_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 776 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_36_36 = (MR_Integer) 1;
#line 777 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_37_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 11525 "parse_tree.prog_io_util.c"
                                                if ((strcmp(parse_tree__prog_io_util__FuncTermFunctor_21, (MR_String) "func") == 0))
#line 11527 "parse_tree.prog_io_util.c"
                                                  {
#line 11529 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_40_40;
#line 11531 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_41_41;
#line 11533 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__ArgModes0_59;
#line 11535 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__RetMode_60;
#line 11537 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__FuncInstInfo_61;
#line 11539 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_62_62;
#line 11541 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__ArgModes_64;
#line 11543 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__Detism_65;

#line 772 "prog_io_util.m"
                                                    {
#line 772 "prog_io_util.m"
                                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_54, &parse_tree__prog_io_util__Detism_65);
                                                    }
#line 11551 "parse_tree.prog_io_util.c"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 11553 "parse_tree.prog_io_util.c"
                                                      {
#line 773 "prog_io_util.m"
                                                        {
#line 773 "prog_io_util.m"
                                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__ArgModesTerms_22, &parse_tree__prog_io_util__ArgModes0_59);
                                                        }
#line 11560 "parse_tree.prog_io_util.c"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 11562 "parse_tree.prog_io_util.c"
                                                          {
#line 774 "prog_io_util.m"
                                                            {
#line 774 "prog_io_util.m"
                                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__RetModeTerm_20, &parse_tree__prog_io_util__RetMode_60);
                                                            }
#line 11569 "parse_tree.prog_io_util.c"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 11571 "parse_tree.prog_io_util.c"
                                                              {
#line 775 "prog_io_util.m"
                                                                {
#line 775 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_util__RetMode_60));
#line 775 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_62_62, 1) = ((MR_Box) (parse_tree__prog_io_util__V_35_35));
#line 775 "prog_io_util.m"
                                                                }
#line 775 "prog_io_util.m"
                                                                {
#line 775 "prog_io_util.m"
                                                                  mercury__list__append_3_p_1(parse_tree__prog_io_util__TypeCtorInfo_57_57, parse_tree__prog_io_util__ArgModes0_59, parse_tree__prog_io_util__V_62_62, &parse_tree__prog_io_util__ArgModes_64);
                                                                }
#line 780 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_40_40 = (MR_Integer) 0;
#line 776 "prog_io_util.m"
                                                                {
#line 776 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__FuncInstInfo_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 776 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_61, 0) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 776 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_61, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_64));
#line 776 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_61, 2) = ((MR_Box) (parse_tree__prog_io_util__V_37_37));
#line 776 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_61, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_65));
#line 776 "prog_io_util.m"
                                                                }
#line 780 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__FuncInstInfo_61);
#line 780 "prog_io_util.m"
                                                                {
#line 780 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__Inst_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 780 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 780 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_56, 1) = ((MR_Box) (parse_tree__prog_io_util__V_40_40));
#line 780 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_56, 2) = ((MR_Box) (parse_tree__prog_io_util__V_41_41));
#line 780 "prog_io_util.m"
                                                                }
#line 780 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 11620 "parse_tree.prog_io_util.c"
                                                              }
#line 11622 "parse_tree.prog_io_util.c"
                                                          }
#line 11624 "parse_tree.prog_io_util.c"
                                                      }
#line 11626 "parse_tree.prog_io_util.c"
                                                  }
#line 11628 "parse_tree.prog_io_util.c"
                                                else
#line 11630 "parse_tree.prog_io_util.c"
                                                if ((strcmp(parse_tree__prog_io_util__FuncTermFunctor_21, (MR_String) "any_func") == 0))
#line 11632 "parse_tree.prog_io_util.c"
                                                  {
#line 11634 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__ArgModes0_25;
#line 11636 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__RetMode_26;
#line 11638 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__FuncInstInfo_27;
#line 11640 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_34_34;
#line 11642 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_38_38;
#line 11644 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_39_39;
#line 11646 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__ArgModes_53;
#line 11648 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__Detism_55;

#line 772 "prog_io_util.m"
                                                    {
#line 772 "prog_io_util.m"
                                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_54, &parse_tree__prog_io_util__Detism_55);
                                                    }
#line 11656 "parse_tree.prog_io_util.c"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 11658 "parse_tree.prog_io_util.c"
                                                      {
#line 773 "prog_io_util.m"
                                                        {
#line 773 "prog_io_util.m"
                                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__ArgModesTerms_22, &parse_tree__prog_io_util__ArgModes0_25);
                                                        }
#line 11665 "parse_tree.prog_io_util.c"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 11667 "parse_tree.prog_io_util.c"
                                                          {
#line 774 "prog_io_util.m"
                                                            {
#line 774 "prog_io_util.m"
                                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__RetModeTerm_20, &parse_tree__prog_io_util__RetMode_26);
                                                            }
#line 11674 "parse_tree.prog_io_util.c"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 11676 "parse_tree.prog_io_util.c"
                                                              {
#line 775 "prog_io_util.m"
                                                                {
#line 775 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_util__RetMode_26));
#line 775 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, 1) = ((MR_Box) (parse_tree__prog_io_util__V_35_35));
#line 775 "prog_io_util.m"
                                                                }
#line 775 "prog_io_util.m"
                                                                {
#line 775 "prog_io_util.m"
                                                                  mercury__list__append_3_p_1(parse_tree__prog_io_util__TypeCtorInfo_57_57, parse_tree__prog_io_util__ArgModes0_25, parse_tree__prog_io_util__V_34_34, &parse_tree__prog_io_util__ArgModes_53);
                                                                }
#line 783 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_38_38 = (MR_Integer) 0;
#line 776 "prog_io_util.m"
                                                                {
#line 776 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__FuncInstInfo_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 776 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_27, 0) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 776 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_27, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_53));
#line 776 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_27, 2) = ((MR_Box) (parse_tree__prog_io_util__V_37_37));
#line 776 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_27, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_55));
#line 776 "prog_io_util.m"
                                                                }
#line 783 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__FuncInstInfo_27);
#line 783 "prog_io_util.m"
                                                                {
#line 783 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__Inst_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 783 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Inst_56, 0) = ((MR_Box) (parse_tree__prog_io_util__V_38_38));
#line 783 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Inst_56, 1) = ((MR_Box) (parse_tree__prog_io_util__V_39_39));
#line 783 "prog_io_util.m"
                                                                }
#line 783 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 11723 "parse_tree.prog_io_util.c"
                                                              }
#line 11725 "parse_tree.prog_io_util.c"
                                                          }
#line 11727 "parse_tree.prog_io_util.c"
                                                      }
#line 11729 "parse_tree.prog_io_util.c"
                                                  }
#line 11731 "parse_tree.prog_io_util.c"
                                                else
#line 11733 "parse_tree.prog_io_util.c"
                                                  parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 747 "prog_io_util.m"
                                                if (parse_tree__prog_io_util__succeeded)
#line 747 "prog_io_util.m"
                                                  {
#line 785 "prog_io_util.m"
                                                    {
#line 785 "prog_io_util.m"
                                                      MR_Word base;
#line 785 "prog_io_util.m"
                                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 785 "prog_io_util.m"
                                                      *parse_tree__prog_io_util__Mode_8 = base;
#line 785 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Inst_56));
#line 785 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Inst_56));
#line 785 "prog_io_util.m"
                                                    }
#line 785 "prog_io_util.m"
                                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 747 "prog_io_util.m"
                                                  }
#line 771 "prog_io_util.m"
                                              }
#line 747 "prog_io_util.m"
                                          }
#line 771 "prog_io_util.m"
                                      }
#line 749 "prog_io_util.m"
                                  }
#line 749 "prog_io_util.m"
                              }
#line 747 "prog_io_util.m"
                          }
#line 748 "prog_io_util.m"
                      }
#line 748 "prog_io_util.m"
                  }
#line 747 "prog_io_util.m"
              }
#line 746 "prog_io_util.m"
            else
#line 746 "prog_io_util.m"
            if ((((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "any_pred") == 0)) || ((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "pred") == 0))))
#line 709 "prog_io_util.m"
              {
#line 709 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__ArgModes_13;
#line 709 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__DetString_14;
#line 709 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Detism_16;
#line 709 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__PredInstInfo_17;
#line 709 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Inst_18;
#line 709 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_43_43;
#line 709 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_44_44;
#line 709 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_45_45;
#line 709 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_46_46;
#line 734 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_15_15;

#line 733 "prog_io_util.m"
                {
#line 733 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__BeforeIsArgTerms_10, &parse_tree__prog_io_util__ArgModes_13);
                }
#line 709 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 709 "prog_io_util.m"
                  {
#line 734 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 734 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 734 "prog_io_util.m"
                      {
#line 734 "prog_io_util.m"
                        parse_tree__prog_io_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 0)));
#line 734 "prog_io_util.m"
                        parse_tree__prog_io_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 1)));
#line 734 "prog_io_util.m"
                        parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 2)));
#line 734 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 709 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 709 "prog_io_util.m"
                          {
#line 734 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_43_43)) == (MR_mktag((MR_Integer) 0)));
#line 734 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 734 "prog_io_util.m"
                              {
#line 734 "prog_io_util.m"
                                parse_tree__prog_io_util__DetString_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_43_43, (MR_Integer) 0)));
#line 735 "prog_io_util.m"
                                {
#line 735 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_14, &parse_tree__prog_io_util__Detism_16);
                                }
#line 709 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 709 "prog_io_util.m"
                                  {
#line 736 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_45_45 = (MR_Integer) 0;
#line 737 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 736 "prog_io_util.m"
                                    {
#line 736 "prog_io_util.m"
                                      parse_tree__prog_io_util__PredInstInfo_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 736 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_17, 0) = ((MR_Box) (parse_tree__prog_io_util__V_45_45));
#line 736 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_17, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_13));
#line 736 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_17, 2) = ((MR_Box) (parse_tree__prog_io_util__V_46_46));
#line 736 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_17, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_16));
#line 736 "prog_io_util.m"
                                    }
#line 11864 "parse_tree.prog_io_util.c"
                                    if ((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "pred") == 0))
#line 11866 "parse_tree.prog_io_util.c"
                                      {
#line 11868 "parse_tree.prog_io_util.c"
                                        MR_Word parse_tree__prog_io_util__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__PredInstInfo_17);

#line 740 "prog_io_util.m"
                                        {
#line 740 "prog_io_util.m"
                                          parse_tree__prog_io_util__Inst_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 740 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 740 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_18, 1) = ((MR_Box) ((MR_Integer) 0));
#line 740 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_18, 2) = ((MR_Box) (parse_tree__prog_io_util__V_50_50));
#line 740 "prog_io_util.m"
                                        }
#line 11883 "parse_tree.prog_io_util.c"
                                      }
#line 11885 "parse_tree.prog_io_util.c"
                                    else
#line 11887 "parse_tree.prog_io_util.c"
                                      {
#line 11889 "parse_tree.prog_io_util.c"
                                        MR_Word parse_tree__prog_io_util__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__PredInstInfo_17);

#line 743 "prog_io_util.m"
                                        {
#line 743 "prog_io_util.m"
                                          parse_tree__prog_io_util__Inst_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 743 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Inst_18, 0) = ((MR_Box) ((MR_Integer) 0));
#line 743 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Inst_18, 1) = ((MR_Box) (parse_tree__prog_io_util__V_48_48));
#line 743 "prog_io_util.m"
                                        }
#line 11902 "parse_tree.prog_io_util.c"
                                      }
#line 745 "prog_io_util.m"
                                    {
#line 745 "prog_io_util.m"
                                      MR_Word base;
#line 745 "prog_io_util.m"
                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 745 "prog_io_util.m"
                                      *parse_tree__prog_io_util__Mode_8 = base;
#line 745 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Inst_18));
#line 745 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Inst_18));
#line 745 "prog_io_util.m"
                                    }
#line 745 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 709 "prog_io_util.m"
                                  }
#line 734 "prog_io_util.m"
                              }
#line 709 "prog_io_util.m"
                          }
#line 734 "prog_io_util.m"
                      }
#line 709 "prog_io_util.m"
                  }
#line 709 "prog_io_util.m"
              }
#line 746 "prog_io_util.m"
            else
#line 746 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 705 "prog_io_util.m"
          }
#line 705 "prog_io_util.m"
      }
#line 703 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 703 "prog_io_util.m"
  }
#line 699 "prog_io_util.m"
}

#line 639 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_qualified_term_3_p_0(
#line 639 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 639 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Args_2,
#line 639 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Term_3)
#line 639 "prog_io_util.m"
{
#line 641 "prog_io_util.m"
  {
#line 641 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 641 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 644 "prog_io_util.m"
      {
#line 644 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Qualifier_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 644 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 644 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Context_13;
#line 644 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__QualTerm_14;
#line 644 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Term0_15;
#line 644 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_17_17;
#line 644 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_20_20;
#line 644 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_21_21;

#line 645 "prog_io_util.m"
        {
#line 645 "prog_io_util.m"
          parse_tree__prog_io_util__Context_13 = mercury__term__context_init_0_f_0();
        }
#line 646 "prog_io_util.m"
        {
#line 646 "prog_io_util.m"
          parse_tree__prog_io_util__unparse_qualified_term_3_p_0(parse_tree__prog_io_util__Qualifier_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__QualTerm_14);
        }
#line 647 "prog_io_util.m"
        {
#line 647 "prog_io_util.m"
          parse_tree__prog_io_util__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 647 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_17_17, 0) = ((MR_Box) (parse_tree__prog_io_util__Name_10));
#line 647 "prog_io_util.m"
        }
#line 647 "prog_io_util.m"
        {
#line 647 "prog_io_util.m"
          parse_tree__prog_io_util__Term0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 647 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_17_17));
#line 647 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_15, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_2));
#line 647 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_15, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_13));
#line 647 "prog_io_util.m"
        }
#line 648 "prog_io_util.m"
        {
#line 648 "prog_io_util.m"
          parse_tree__prog_io_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 648 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, 0) = ((MR_Box) (parse_tree__prog_io_util__Term0_15));
#line 648 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 648 "prog_io_util.m"
        }
#line 648 "prog_io_util.m"
        {
#line 648 "prog_io_util.m"
          parse_tree__prog_io_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 648 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, 0) = ((MR_Box) (parse_tree__prog_io_util__QualTerm_14));
#line 648 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, 1) = ((MR_Box) (parse_tree__prog_io_util__V_21_21));
#line 648 "prog_io_util.m"
        }
#line 648 "prog_io_util.m"
        {
#line 648 "prog_io_util.m"
          MR_Word base;
#line 648 "prog_io_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 648 "prog_io_util.m"
          *parse_tree__prog_io_util__Term_3 = base;
#line 648 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[12]));
#line 648 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_20_20));
#line 648 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_13));
#line 648 "prog_io_util.m"
        }
#line 644 "prog_io_util.m"
      }
#line 641 "prog_io_util.m"
    else
#line 641 "prog_io_util.m"
      {
#line 641 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 641 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Context_7;
#line 641 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_8_8;

#line 642 "prog_io_util.m"
        {
#line 642 "prog_io_util.m"
          parse_tree__prog_io_util__Context_7 = mercury__term__context_init_0_f_0();
        }
#line 643 "prog_io_util.m"
        {
#line 643 "prog_io_util.m"
          parse_tree__prog_io_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 643 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, 0) = ((MR_Box) (parse_tree__prog_io_util__Name_4));
#line 643 "prog_io_util.m"
        }
#line 643 "prog_io_util.m"
        {
#line 643 "prog_io_util.m"
          MR_Word base;
#line 643 "prog_io_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 643 "prog_io_util.m"
          *parse_tree__prog_io_util__Term_3 = base;
#line 643 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_8_8));
#line 643 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_2));
#line 643 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_7));
#line 643 "prog_io_util.m"
        }
#line 641 "prog_io_util.m"
      }
#line 641 "prog_io_util.m"
  }
#line 639 "prog_io_util.m"
}

#line 637 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_type_list_2_p_0_1(
#line 637 "prog_io_util.m"
  MR_Box parse_tree__prog_io_util__closure_arg,
#line 637 "prog_io_util.m"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 637 "prog_io_util.m"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2)
#line 637 "prog_io_util.m"
{
#line 637 "prog_io_util.m"
  {
#line 637 "prog_io_util.m"
    MR_Box parse_tree__prog_io_util__closure = parse_tree__prog_io_util__closure_arg;
#line 637 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__conv0_Term_4;

#line 637 "prog_io_util.m"
    {
#line 637 "prog_io_util.m"
      parse_tree__prog_io_util__unparse_type_2_p_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_Term_4);
    }
#line 637 "prog_io_util.m"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_Term_4));
#line 637 "prog_io_util.m"
  }
#line 637 "prog_io_util.m"
}

#line 634 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_type_list_2_p_0(
#line 634 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Types_3,
#line 634 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Terms_4)
#line 634 "prog_io_util.m"
{
#line 636 "prog_io_util.m"
  {
#line 636 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 637 "prog_io_util.m"
    {
#line 637 "prog_io_util.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_io_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_io_util_scalar_common_2[4], parse_tree__prog_io_util__Types_3, parse_tree__prog_io_util__Terms_4);
#line 637 "prog_io_util.m"
      return;
    }
#line 636 "prog_io_util.m"
  }
#line 634 "prog_io_util.m"
}

#line 561 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_types_acc_7_p_0(
#line 561 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 561 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_2,
#line 561 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_3,
#line 561 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_0_4,
#line 561 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_5,
#line 561 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__STATE_VARIABLE_Specs_0_6,
#line 561 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__STATE_VARIABLE_Specs_7)
#line 561 "prog_io_util.m"
{
#line 565 "prog_io_util.m"
  while (MR_TRUE)
#line 565 "prog_io_util.m"
    {
#line 565 "prog_io_util.m"
      /* tailcall optimized into a loop */
#line 565 "prog_io_util.m"
      {
#line 565 "prog_io_util.m"
        MR_bool parse_tree__prog_io_util__succeeded;

#line 565 "prog_io_util.m"
        if ((parse_tree__prog_io_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 565 "prog_io_util.m"
          {
#line 565 "prog_io_util.m"
            *parse_tree__prog_io_util__STATE_VARIABLE_Specs_7 = parse_tree__prog_io_util__STATE_VARIABLE_Specs_0_6;
#line 565 "prog_io_util.m"
            *parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_5 = parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_0_4;
#line 565 "prog_io_util.m"
          }
#line 565 "prog_io_util.m"
        else
#line 566 "prog_io_util.m"
          {
#line 566 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Term_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 566 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Terms_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 566 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TermResult_22;
#line 566 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__STATE_VARIABLE_Specs_29_29;
#line 566 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_30_30;

#line 568 "prog_io_util.m"
            {
#line 568 "prog_io_util.m"
              parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_util__Term_16, parse_tree__prog_io_util__VarSet_2, parse_tree__prog_io_util__ContextPieces_3, &parse_tree__prog_io_util__TermResult_22);
            }
#line 572 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__TermResult_22)) == (MR_mktag((MR_Integer) 0))))
#line 573 "prog_io_util.m"
              {
#line 573 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TermSpecs_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TermResult_22, (MR_Integer) 0)));

#line 574 "prog_io_util.m"
                {
#line 574 "prog_io_util.m"
                  parse_tree__prog_io_util__STATE_VARIABLE_Specs_29_29 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_util__TermSpecs_24, parse_tree__prog_io_util__STATE_VARIABLE_Specs_0_6);
                }
#line 573 "prog_io_util.m"
                parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_30_30 = parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_0_4;
#line 573 "prog_io_util.m"
              }
#line 572 "prog_io_util.m"
            else
#line 570 "prog_io_util.m"
              {
#line 570 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermResult_22, (MR_Integer) 0)));

#line 571 "prog_io_util.m"
                {
#line 571 "prog_io_util.m"
                  parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_30_30, 0) = ((MR_Box) (parse_tree__prog_io_util__Type_23));
#line 571 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_30_30, 1) = ((MR_Box) (parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_0_4));
#line 571 "prog_io_util.m"
                }
#line 570 "prog_io_util.m"
                parse_tree__prog_io_util__STATE_VARIABLE_Specs_29_29 = parse_tree__prog_io_util__STATE_VARIABLE_Specs_0_6;
#line 570 "prog_io_util.m"
              }
#line 576 "prog_io_util.m"
            /* direct tailcall eliminated */
#line 576 "prog_io_util.m"
            {
#line 576 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__HeadVar__1__tmp_copy_1 = parse_tree__prog_io_util__Terms_17;
#line 576 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_0__tmp_copy_4 = parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_30_30;
#line 576 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__STATE_VARIABLE_Specs_0__tmp_copy_6 = parse_tree__prog_io_util__STATE_VARIABLE_Specs_29_29;

#line 576 "prog_io_util.m"
              parse_tree__prog_io_util__STATE_VARIABLE_Specs_0_6 = parse_tree__prog_io_util__STATE_VARIABLE_Specs_0__tmp_copy_6;
#line 576 "prog_io_util.m"
              parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_0_4 = parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_0__tmp_copy_4;
#line 576 "prog_io_util.m"
              parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__HeadVar__1__tmp_copy_1;
#line 576 "prog_io_util.m"
            }
#line 576 "prog_io_util.m"
            continue;
#line 566 "prog_io_util.m"
          }
#line 565 "prog_io_util.m"
      }
#line 565 "prog_io_util.m"
      break;
#line 565 "prog_io_util.m"
    }
#line 561 "prog_io_util.m"
}

#line 533 "prog_io_util.m"
static MR_Word MR_CALL 
parse_tree__prog_io_util__ill_formed_type_result_3_f_0(
#line 533 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_5,
#line 533 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 533 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_7)
#line 533 "prog_io_util.m"
{
#line 536 "prog_io_util.m"
  {
#line 536 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 536 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Result_8;
#line 536 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeCtorInfo_36_36 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 536 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__TermStr_9;
#line 536 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Pieces_10;
#line 536 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Spec_11;
#line 536 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_12_12;
#line 536 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_14_14;
#line 536 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_17_17;
#line 536 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_18_18;
#line 536 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_27_27;
#line 536 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_28_28;
#line 536 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_29_29;
#line 536 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_30_30;
#line 536 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_31_31;
#line 536 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_34_34;

#line 537 "prog_io_util.m"
    {
#line 537 "prog_io_util.m"
      parse_tree__prog_io_util__TermStr_9 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_util__TypeCtorInfo_36_36, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__Term_7);
    }
#line 539 "prog_io_util.m"
    {
#line 539 "prog_io_util.m"
      parse_tree__prog_io_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 539 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 539 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_18_18, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_9));
#line 539 "prog_io_util.m"
    }
#line 539 "prog_io_util.m"
    {
#line 539 "prog_io_util.m"
      parse_tree__prog_io_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 539 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_17_17, 0) = ((MR_Box) (parse_tree__prog_io_util__V_18_18));
#line 539 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[12])));
#line 539 "prog_io_util.m"
    }
#line 539 "prog_io_util.m"
    {
#line 539 "prog_io_util.m"
      parse_tree__prog_io_util__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 539 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_14_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[15])));
#line 539 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_14_14, 1) = ((MR_Box) (parse_tree__prog_io_util__V_17_17));
#line 539 "prog_io_util.m"
    }
#line 538 "prog_io_util.m"
    {
#line 538 "prog_io_util.m"
      parse_tree__prog_io_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 538 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_12_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 538 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_12_12, 1) = ((MR_Box) (parse_tree__prog_io_util__V_14_14));
#line 538 "prog_io_util.m"
    }
#line 538 "prog_io_util.m"
    {
#line 538 "prog_io_util.m"
      parse_tree__prog_io_util__Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_util__ContextPieces_5, parse_tree__prog_io_util__V_12_12);
    }
#line 541 "prog_io_util.m"
    {
#line 541 "prog_io_util.m"
      parse_tree__prog_io_util__V_29_29 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_util__TypeCtorInfo_36_36, parse_tree__prog_io_util__Term_7);
    }
#line 541 "prog_io_util.m"
    {
#line 541 "prog_io_util.m"
      parse_tree__prog_io_util__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 541 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_10));
#line 541 "prog_io_util.m"
    }
#line 541 "prog_io_util.m"
    {
#line 541 "prog_io_util.m"
      parse_tree__prog_io_util__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_util__V_31_31));
#line 541 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 541 "prog_io_util.m"
    }
#line 541 "prog_io_util.m"
    {
#line 541 "prog_io_util.m"
      parse_tree__prog_io_util__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 541 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io_util__V_29_29));
#line 541 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, 1) = ((MR_Box) (parse_tree__prog_io_util__V_30_30));
#line 541 "prog_io_util.m"
    }
#line 541 "prog_io_util.m"
    {
#line 541 "prog_io_util.m"
      parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_util__V_28_28));
#line 541 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 541 "prog_io_util.m"
    }
#line 540 "prog_io_util.m"
    {
#line 540 "prog_io_util.m"
      parse_tree__prog_io_util__Spec_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 540 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 540 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 540 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_11, 2) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
#line 540 "prog_io_util.m"
    }
#line 542 "prog_io_util.m"
    {
#line 542 "prog_io_util.m"
      parse_tree__prog_io_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_11));
#line 542 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 542 "prog_io_util.m"
    }
#line 542 "prog_io_util.m"
    {
#line 542 "prog_io_util.m"
      parse_tree__prog_io_util__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 542 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_util__V_34_34));
#line 542 "prog_io_util.m"
    }
#line 536 "prog_io_util.m"
    return parse_tree__prog_io_util__Result_8;
#line 536 "prog_io_util.m"
  }
#line 533 "prog_io_util.m"
}

#line 353 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_compound_type_5_p_0(
#line 353 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_6,
#line 353 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_7,
#line 353 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_8,
#line 353 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__CompoundTypeKind_9,
#line 353 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_10)
#line 353 "prog_io_util.m"
{
#line 358 "prog_io_util.m"
  {
#line 358 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 358 "prog_io_util.m"
#line 358 "prog_io_util.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io_util__CompoundTypeKind_9)) {
#line 358 "prog_io_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 358 "prog_io_util.m"
      case (MR_Integer) 0:
#line 358 "prog_io_util.m"
        {
#line 358 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__CompoundTypeKind_9, (MR_Integer) 0)));
#line 358 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__ArgsResult_12;

#line 359 "prog_io_util.m"
          {
#line 359 "prog_io_util.m"
            parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_util__Args_11, parse_tree__prog_io_util__VarSet_7, parse_tree__prog_io_util__ContextPieces_8, &parse_tree__prog_io_util__ArgsResult_12);
          }
#line 363 "prog_io_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_util__ArgsResult_12)) == (MR_mktag((MR_Integer) 0))))
#line 365 "prog_io_util.m"
            *parse_tree__prog_io_util__Result_10 = (MR_Word) parse_tree__prog_io_util__ArgsResult_12;
#line 363 "prog_io_util.m"
          else
#line 361 "prog_io_util.m"
            {
#line 361 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__ArgTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ArgsResult_12, (MR_Integer) 0)));
#line 361 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_75_75;

#line 362 "prog_io_util.m"
              {
#line 362 "prog_io_util.m"
                parse_tree__prog_io_util__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 362 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 362 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_75_75, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTypes_13));
#line 362 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_75_75, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 362 "prog_io_util.m"
              }
#line 362 "prog_io_util.m"
              {
#line 362 "prog_io_util.m"
                MR_Word base;
#line 362 "prog_io_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 362 "prog_io_util.m"
                *parse_tree__prog_io_util__Result_10 = base;
#line 362 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_75_75));
#line 362 "prog_io_util.m"
              }
#line 361 "prog_io_util.m"
            }
#line 358 "prog_io_util.m"
        }
#line 358 "prog_io_util.m"
        break;
#line 358 "prog_io_util.m"
      case (MR_Integer) 1:
#line 388 "prog_io_util.m"
        {
#line 388 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__Arg1_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__CompoundTypeKind_9, (MR_Integer) 0)));
#line 388 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__Arg2_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__CompoundTypeKind_9, (MR_Integer) 1)));
#line 396 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__RetType_23;
#line 396 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__ArgTypes_80;
#line 390 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__FuncArgs_21;
#line 390 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_41_41;
#line 390 "prog_io_util.m"
          MR_String parse_tree__prog_io_util__V_42_42;
#line 390 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_22_22;

#line 390 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Arg1_19)) == (MR_mktag((MR_Integer) 0)));
#line 390 "prog_io_util.m"
          if (parse_tree__prog_io_util__succeeded)
#line 390 "prog_io_util.m"
            {
#line 390 "prog_io_util.m"
              parse_tree__prog_io_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Arg1_19, (MR_Integer) 0)));
#line 390 "prog_io_util.m"
              parse_tree__prog_io_util__FuncArgs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Arg1_19, (MR_Integer) 1)));
#line 390 "prog_io_util.m"
              parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Arg1_19, (MR_Integer) 2)));
#line 390 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_41_41)) == (MR_mktag((MR_Integer) 0)));
#line 390 "prog_io_util.m"
              if (parse_tree__prog_io_util__succeeded)
#line 390 "prog_io_util.m"
                {
#line 390 "prog_io_util.m"
                  parse_tree__prog_io_util__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_41_41, (MR_Integer) 0)));
#line 390 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_42_42, (MR_String) "func") == 0);
#line 390 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 390 "prog_io_util.m"
                    {
#line 391 "prog_io_util.m"
                      {
#line 391 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__maybe_parse_types_2_p_0(parse_tree__prog_io_util__FuncArgs_21, &parse_tree__prog_io_util__ArgTypes_80);
                      }
#line 390 "prog_io_util.m"
                      if (parse_tree__prog_io_util__succeeded)
#line 392 "prog_io_util.m"
                        {
#line 392 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_util__Arg2_20, &parse_tree__prog_io_util__RetType_23);
                        }
#line 390 "prog_io_util.m"
                    }
#line 390 "prog_io_util.m"
                }
#line 390 "prog_io_util.m"
            }
#line 396 "prog_io_util.m"
          if (parse_tree__prog_io_util__succeeded)
#line 394 "prog_io_util.m"
            {
#line 394 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_43_43;
#line 394 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_44_44;

#line 395 "prog_io_util.m"
              {
#line 395 "prog_io_util.m"
                parse_tree__prog_io_util__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 395 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_util__RetType_23));
#line 395 "prog_io_util.m"
              }
#line 395 "prog_io_util.m"
              mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 394 "prog_io_util.m"
              {
#line 394 "prog_io_util.m"
                parse_tree__prog_io_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 394 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 394 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_43_43, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTypes_80));
#line 394 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_43_43, 2) = ((MR_Box) (parse_tree__prog_io_util__V_44_44));
#line 394 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_43_43, 3) = ((MR_Box) ((MR_Integer) 0));
#line 394 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_43_43, 4) = NULL;
#line 394 "prog_io_util.m"
              }
#line 394 "prog_io_util.m"
              {
#line 394 "prog_io_util.m"
                MR_Word base;
#line 394 "prog_io_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 394 "prog_io_util.m"
                *parse_tree__prog_io_util__Result_10 = base;
#line 394 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_43_43));
#line 394 "prog_io_util.m"
              }
#line 394 "prog_io_util.m"
            }
#line 396 "prog_io_util.m"
          else
#line 397 "prog_io_util.m"
            {
#line 397 "prog_io_util.m"
              *parse_tree__prog_io_util__Result_10 = parse_tree__prog_io_util__ill_formed_type_result_3_f_0(parse_tree__prog_io_util__ContextPieces_8, parse_tree__prog_io_util__VarSet_7, parse_tree__prog_io_util__Term_6);
            }
#line 388 "prog_io_util.m"
        }
#line 358 "prog_io_util.m"
        break;
#line 358 "prog_io_util.m"
      case (MR_Integer) 2:
#line 378 "prog_io_util.m"
        {
#line 378 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__Args_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__CompoundTypeKind_9, (MR_Integer) 0)));
#line 384 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__ArgTypes_77;

#line 380 "prog_io_util.m"
          {
#line 380 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__maybe_parse_types_2_p_0(parse_tree__prog_io_util__Args_78, &parse_tree__prog_io_util__ArgTypes_77);
          }
#line 384 "prog_io_util.m"
          if (parse_tree__prog_io_util__succeeded)
#line 382 "prog_io_util.m"
            {
#line 382 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_47_47;

#line 383 "prog_io_util.m"
              mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 382 "prog_io_util.m"
              {
#line 382 "prog_io_util.m"
                parse_tree__prog_io_util__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 382 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 382 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_47_47, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTypes_77));
#line 382 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_47_47, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 382 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_47_47, 3) = ((MR_Box) ((MR_Integer) 0));
#line 382 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_47_47, 4) = NULL;
#line 382 "prog_io_util.m"
              }
#line 382 "prog_io_util.m"
              {
#line 382 "prog_io_util.m"
                MR_Word base;
#line 382 "prog_io_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 382 "prog_io_util.m"
                *parse_tree__prog_io_util__Result_10 = base;
#line 382 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_47_47));
#line 382 "prog_io_util.m"
              }
#line 382 "prog_io_util.m"
            }
#line 384 "prog_io_util.m"
          else
#line 385 "prog_io_util.m"
            {
#line 385 "prog_io_util.m"
              *parse_tree__prog_io_util__Result_10 = parse_tree__prog_io_util__ill_formed_type_result_3_f_0(parse_tree__prog_io_util__ContextPieces_8, parse_tree__prog_io_util__VarSet_7, parse_tree__prog_io_util__Term_6);
            }
#line 378 "prog_io_util.m"
        }
#line 358 "prog_io_util.m"
        break;
#line 358 "prog_io_util.m"
      case (MR_Integer) 3:
#line 358 "prog_io_util.m"
#line 358 "prog_io_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__CompoundTypeKind_9, (MR_Integer) 0)))) {
#line 358 "prog_io_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 358 "prog_io_util.m"
          case (MR_Integer) 0:
#line 400 "prog_io_util.m"
            {
#line 400 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Purity_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__CompoundTypeKind_9, (MR_Integer) 1)));
#line 400 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__SubTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__CompoundTypeKind_9, (MR_Integer) 2)));
#line 419 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__ResultPrime_29;
#line 402 "prog_io_util.m"
              MR_String parse_tree__prog_io_util__Name_26;
#line 402 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_30_30;
#line 402 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Args_93;
#line 402 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_27_27;

#line 402 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__SubTerm_25)) == (MR_mktag((MR_Integer) 0)));
#line 402 "prog_io_util.m"
              if (parse_tree__prog_io_util__succeeded)
#line 402 "prog_io_util.m"
                {
#line 402 "prog_io_util.m"
                  parse_tree__prog_io_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__SubTerm_25, (MR_Integer) 0)));
#line 402 "prog_io_util.m"
                  parse_tree__prog_io_util__Args_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__SubTerm_25, (MR_Integer) 1)));
#line 402 "prog_io_util.m"
                  parse_tree__prog_io_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__SubTerm_25, (MR_Integer) 2)));
#line 402 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_30_30)) == (MR_mktag((MR_Integer) 0)));
#line 402 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 402 "prog_io_util.m"
                    {
#line 402 "prog_io_util.m"
                      parse_tree__prog_io_util__Name_26 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_30_30, (MR_Integer) 0)));
#line 411 "prog_io_util.m"
                      if ((strcmp(parse_tree__prog_io_util__Name_26, (MR_String) "=") == 0))
#line 404 "prog_io_util.m"
                        {
#line 404 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_34_34;
#line 404 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_35_35;
#line 404 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_36_36;
#line 404 "prog_io_util.m"
                          MR_String parse_tree__prog_io_util__V_37_37;
#line 404 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_38_38;
#line 404 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_39_39;
#line 404 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__ArgTypes_82;
#line 404 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__Arg1_83;
#line 404 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__Arg2_84;
#line 404 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__FuncArgs_85;
#line 404 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__RetType_86;
#line 406 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_28_28;

#line 405 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args_93)) == (MR_mktag((MR_Integer) 1)));
#line 405 "prog_io_util.m"
                          if (parse_tree__prog_io_util__succeeded)
#line 405 "prog_io_util.m"
                            {
#line 405 "prog_io_util.m"
                              parse_tree__prog_io_util__Arg1_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_93, (MR_Integer) 0)));
#line 405 "prog_io_util.m"
                              parse_tree__prog_io_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_93, (MR_Integer) 1)));
#line 405 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 405 "prog_io_util.m"
                              if (parse_tree__prog_io_util__succeeded)
#line 405 "prog_io_util.m"
                                {
#line 405 "prog_io_util.m"
                                  parse_tree__prog_io_util__Arg2_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
#line 405 "prog_io_util.m"
                                  parse_tree__prog_io_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 1)));
#line 405 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 404 "prog_io_util.m"
                                  if (parse_tree__prog_io_util__succeeded)
#line 404 "prog_io_util.m"
                                    {
#line 406 "prog_io_util.m"
                                      parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Arg1_83)) == (MR_mktag((MR_Integer) 0)));
#line 406 "prog_io_util.m"
                                      if (parse_tree__prog_io_util__succeeded)
#line 406 "prog_io_util.m"
                                        {
#line 406 "prog_io_util.m"
                                          parse_tree__prog_io_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Arg1_83, (MR_Integer) 0)));
#line 406 "prog_io_util.m"
                                          parse_tree__prog_io_util__FuncArgs_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Arg1_83, (MR_Integer) 1)));
#line 406 "prog_io_util.m"
                                          parse_tree__prog_io_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Arg1_83, (MR_Integer) 2)));
#line 406 "prog_io_util.m"
                                          parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_36_36)) == (MR_mktag((MR_Integer) 0)));
#line 406 "prog_io_util.m"
                                          if (parse_tree__prog_io_util__succeeded)
#line 406 "prog_io_util.m"
                                            {
#line 406 "prog_io_util.m"
                                              parse_tree__prog_io_util__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_36_36, (MR_Integer) 0)));
#line 406 "prog_io_util.m"
                                              parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_37_37, (MR_String) "func") == 0);
#line 404 "prog_io_util.m"
                                              if (parse_tree__prog_io_util__succeeded)
#line 404 "prog_io_util.m"
                                                {
#line 407 "prog_io_util.m"
                                                  {
#line 407 "prog_io_util.m"
                                                    parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__maybe_parse_types_2_p_0(parse_tree__prog_io_util__FuncArgs_85, &parse_tree__prog_io_util__ArgTypes_82);
                                                  }
#line 404 "prog_io_util.m"
                                                  if (parse_tree__prog_io_util__succeeded)
#line 404 "prog_io_util.m"
                                                    {
#line 408 "prog_io_util.m"
                                                      {
#line 408 "prog_io_util.m"
                                                        parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_util__Arg2_84, &parse_tree__prog_io_util__RetType_86);
                                                      }
#line 404 "prog_io_util.m"
                                                      if (parse_tree__prog_io_util__succeeded)
#line 404 "prog_io_util.m"
                                                        {
#line 410 "prog_io_util.m"
                                                          mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 410 "prog_io_util.m"
                                                          {
#line 410 "prog_io_util.m"
                                                            parse_tree__prog_io_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 410 "prog_io_util.m"
                                                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_util__RetType_86));
#line 410 "prog_io_util.m"
                                                          }
#line 409 "prog_io_util.m"
                                                          {
#line 409 "prog_io_util.m"
                                                            parse_tree__prog_io_util__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 409 "prog_io_util.m"
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 409 "prog_io_util.m"
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_38_38, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTypes_82));
#line 409 "prog_io_util.m"
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_38_38, 2) = ((MR_Box) (parse_tree__prog_io_util__V_39_39));
#line 409 "prog_io_util.m"
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_38_38, 3) = ((MR_Box) (parse_tree__prog_io_util__Purity_24));
#line 409 "prog_io_util.m"
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_38_38, 4) = NULL;
#line 409 "prog_io_util.m"
                                                          }
#line 409 "prog_io_util.m"
                                                          {
#line 409 "prog_io_util.m"
                                                            parse_tree__prog_io_util__ResultPrime_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 409 "prog_io_util.m"
                                                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ResultPrime_29, 0) = ((MR_Box) (parse_tree__prog_io_util__V_38_38));
#line 409 "prog_io_util.m"
                                                          }
#line 409 "prog_io_util.m"
                                                          parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 404 "prog_io_util.m"
                                                        }
#line 404 "prog_io_util.m"
                                                    }
#line 404 "prog_io_util.m"
                                                }
#line 406 "prog_io_util.m"
                                            }
#line 406 "prog_io_util.m"
                                        }
#line 404 "prog_io_util.m"
                                    }
#line 405 "prog_io_util.m"
                                }
#line 405 "prog_io_util.m"
                            }
#line 404 "prog_io_util.m"
                        }
#line 411 "prog_io_util.m"
                      else
#line 411 "prog_io_util.m"
                      if ((strcmp(parse_tree__prog_io_util__Name_26, (MR_String) "pred") == 0))
#line 412 "prog_io_util.m"
                        {
#line 412 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_31_31;
#line 412 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_32_32;
#line 412 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__ArgTypes_87;

#line 413 "prog_io_util.m"
                          {
#line 413 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__maybe_parse_types_2_p_0(parse_tree__prog_io_util__Args_93, &parse_tree__prog_io_util__ArgTypes_87);
                          }
#line 412 "prog_io_util.m"
                          if (parse_tree__prog_io_util__succeeded)
#line 412 "prog_io_util.m"
                            {
#line 414 "prog_io_util.m"
                              parse_tree__prog_io_util__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 415 "prog_io_util.m"
                              mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 414 "prog_io_util.m"
                              {
#line 414 "prog_io_util.m"
                                parse_tree__prog_io_util__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 414 "prog_io_util.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 414 "prog_io_util.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_31_31, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTypes_87));
#line 414 "prog_io_util.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_31_31, 2) = ((MR_Box) (parse_tree__prog_io_util__V_32_32));
#line 414 "prog_io_util.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_31_31, 3) = ((MR_Box) (parse_tree__prog_io_util__Purity_24));
#line 414 "prog_io_util.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_31_31, 4) = NULL;
#line 414 "prog_io_util.m"
                              }
#line 414 "prog_io_util.m"
                              {
#line 414 "prog_io_util.m"
                                parse_tree__prog_io_util__ResultPrime_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 414 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ResultPrime_29, 0) = ((MR_Box) (parse_tree__prog_io_util__V_31_31));
#line 414 "prog_io_util.m"
                              }
#line 414 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 412 "prog_io_util.m"
                            }
#line 412 "prog_io_util.m"
                        }
#line 411 "prog_io_util.m"
                      else
#line 411 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 402 "prog_io_util.m"
                    }
#line 402 "prog_io_util.m"
                }
#line 419 "prog_io_util.m"
              if (parse_tree__prog_io_util__succeeded)
#line 418 "prog_io_util.m"
                *parse_tree__prog_io_util__Result_10 = parse_tree__prog_io_util__ResultPrime_29;
#line 419 "prog_io_util.m"
              else
#line 420 "prog_io_util.m"
                {
#line 420 "prog_io_util.m"
                  *parse_tree__prog_io_util__Result_10 = parse_tree__prog_io_util__ill_formed_type_result_3_f_0(parse_tree__prog_io_util__ContextPieces_8, parse_tree__prog_io_util__VarSet_7, parse_tree__prog_io_util__Term_6);
                }
#line 400 "prog_io_util.m"
            }
#line 358 "prog_io_util.m"
            break;
#line 358 "prog_io_util.m"
          case (MR_Integer) 1:
#line 368 "prog_io_util.m"
            {
#line 368 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__TypeCtorInfo_111_111 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 368 "prog_io_util.m"
              MR_String parse_tree__prog_io_util__TermStr_16;
#line 368 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Pieces_17;
#line 368 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Spec_18;
#line 368 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_51_51;
#line 368 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_53_53;
#line 368 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_56_56;
#line 368 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_57_57;
#line 368 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_66_66;
#line 368 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_67_67;
#line 368 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_68_68;
#line 368 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_69_69;
#line 368 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_70_70;
#line 368 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_73_73;

#line 371 "prog_io_util.m"
              {
#line 371 "prog_io_util.m"
                parse_tree__prog_io_util__TermStr_16 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_util__TypeCtorInfo_111_111, parse_tree__prog_io_util__VarSet_7, parse_tree__prog_io_util__Term_6);
              }
#line 373 "prog_io_util.m"
              {
#line 373 "prog_io_util.m"
                parse_tree__prog_io_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 373 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 373 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_16));
#line 373 "prog_io_util.m"
              }
#line 373 "prog_io_util.m"
              {
#line 373 "prog_io_util.m"
                parse_tree__prog_io_util__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 373 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_util__V_57_57));
#line 373 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[12])));
#line 373 "prog_io_util.m"
              }
#line 373 "prog_io_util.m"
              {
#line 373 "prog_io_util.m"
                parse_tree__prog_io_util__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 373 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_53_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[15])));
#line 373 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_53_53, 1) = ((MR_Box) (parse_tree__prog_io_util__V_56_56));
#line 373 "prog_io_util.m"
              }
#line 372 "prog_io_util.m"
              {
#line 372 "prog_io_util.m"
                parse_tree__prog_io_util__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 372 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_51_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 372 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_51_51, 1) = ((MR_Box) (parse_tree__prog_io_util__V_53_53));
#line 372 "prog_io_util.m"
              }
#line 372 "prog_io_util.m"
              {
#line 372 "prog_io_util.m"
                parse_tree__prog_io_util__Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_util__ContextPieces_8, parse_tree__prog_io_util__V_51_51);
              }
#line 375 "prog_io_util.m"
              {
#line 375 "prog_io_util.m"
                parse_tree__prog_io_util__V_68_68 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_util__TypeCtorInfo_111_111, parse_tree__prog_io_util__Term_6);
              }
#line 375 "prog_io_util.m"
              {
#line 375 "prog_io_util.m"
                parse_tree__prog_io_util__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 375 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_17));
#line 375 "prog_io_util.m"
              }
#line 375 "prog_io_util.m"
              {
#line 375 "prog_io_util.m"
                parse_tree__prog_io_util__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 375 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_util__V_70_70));
#line 375 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 375 "prog_io_util.m"
              }
#line 375 "prog_io_util.m"
              {
#line 375 "prog_io_util.m"
                parse_tree__prog_io_util__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 375 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_util__V_68_68));
#line 375 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_67_67, 1) = ((MR_Box) (parse_tree__prog_io_util__V_69_69));
#line 375 "prog_io_util.m"
              }
#line 375 "prog_io_util.m"
              {
#line 375 "prog_io_util.m"
                parse_tree__prog_io_util__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 375 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_util__V_67_67));
#line 375 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 375 "prog_io_util.m"
              }
#line 374 "prog_io_util.m"
              {
#line 374 "prog_io_util.m"
                parse_tree__prog_io_util__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 374 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 374 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 374 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_18, 2) = ((MR_Box) (parse_tree__prog_io_util__V_66_66));
#line 374 "prog_io_util.m"
              }
#line 376 "prog_io_util.m"
              {
#line 376 "prog_io_util.m"
                parse_tree__prog_io_util__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 376 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_18));
#line 376 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 376 "prog_io_util.m"
              }
#line 376 "prog_io_util.m"
              {
#line 376 "prog_io_util.m"
                MR_Word base;
#line 376 "prog_io_util.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 376 "prog_io_util.m"
                *parse_tree__prog_io_util__Result_10 = base;
#line 376 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_73_73));
#line 376 "prog_io_util.m"
              }
#line 368 "prog_io_util.m"
            }
#line 358 "prog_io_util.m"
            break;
#line 358 "prog_io_util.m"
        }
#line 358 "prog_io_util.m"
        break;
#line 358 "prog_io_util.m"
    }
#line 358 "prog_io_util.m"
  }
#line 353 "prog_io_util.m"
}

#line 205 "prog_io_util.m"
MR_String MR_CALL 
parse_tree__prog_io_util__attribute_description_1_f_0(
#line 205 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1)
#line 205 "prog_io_util.m"
{
#line 1583 "prog_io_util.m"
  {
#line 1583 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1583 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__HeadVar__2_2;

#line 1583 "prog_io_util.m"
#line 1583 "prog_io_util.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) {
#line 1583 "prog_io_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1583 "prog_io_util.m"
      case (MR_Integer) 0:
#line 1592 "prog_io_util.m"
        parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "solver type specifier";
#line 1583 "prog_io_util.m"
        break;
#line 1583 "prog_io_util.m"
      case (MR_Integer) 1:
#line 1583 "prog_io_util.m"
        parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "purity specifier";
#line 1583 "prog_io_util.m"
        break;
#line 1583 "prog_io_util.m"
      case (MR_Integer) 2:
#line 1583 "prog_io_util.m"
        {
#line 1583 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1584 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1583 "prog_io_util.m"
#line 1583 "prog_io_util.m"
          switch (parse_tree__prog_io_util__V_15_15) {
#line 1583 "prog_io_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1583 "prog_io_util.m"
            case (MR_Integer) 0:
#line 1587 "prog_io_util.m"
              parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "existential quantifier (\140some\')";
#line 1583 "prog_io_util.m"
              break;
#line 1583 "prog_io_util.m"
            case (MR_Integer) 1:
#line 1585 "prog_io_util.m"
              parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "universal quantifier (\140all\')";
#line 1583 "prog_io_util.m"
              break;
#line 1583 "prog_io_util.m"
          }
#line 1583 "prog_io_util.m"
        }
#line 1583 "prog_io_util.m"
        break;
#line 1583 "prog_io_util.m"
      case (MR_Integer) 3:
#line 1583 "prog_io_util.m"
        {
#line 1583 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1588 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1583 "prog_io_util.m"
#line 1583 "prog_io_util.m"
          switch (parse_tree__prog_io_util__V_13_13) {
#line 1583 "prog_io_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1583 "prog_io_util.m"
            case (MR_Integer) 0:
#line 1591 "prog_io_util.m"
              parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "existentially quantified type class constraint (\140=>\')";
#line 1583 "prog_io_util.m"
              break;
#line 1583 "prog_io_util.m"
            case (MR_Integer) 1:
#line 1589 "prog_io_util.m"
              parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "type class constraint (\140<=\')";
#line 1583 "prog_io_util.m"
              break;
#line 1583 "prog_io_util.m"
          }
#line 1583 "prog_io_util.m"
        }
#line 1583 "prog_io_util.m"
        break;
#line 1583 "prog_io_util.m"
    }
#line 1583 "prog_io_util.m"
    return parse_tree__prog_io_util__HeadVar__2_2;
#line 1583 "prog_io_util.m"
  }
#line 205 "prog_io_util.m"
}

#line 202 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__check_no_attributes_3_p_0(
#line 202 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_35,
#line 202 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Result0_4,
#line 202 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Attributes_5,
#line 202 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_6)
#line 202 "prog_io_util.m"
{
#line 1579 "prog_io_util.m"
  {
#line 1579 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Result0_4)) == (MR_mktag((MR_Integer) 1)));
#line 1579 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Attr_8;
#line 1579 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Context_9;
#line 1570 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 1570 "prog_io_util.m"
    MR_Box parse_tree__prog_io_util__V_7_7;
#line 1571 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_10_10;

#line 1570 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1570 "prog_io_util.m"
      {
#line 1570 "prog_io_util.m"
        parse_tree__prog_io_util__V_7_7 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Result0_4, (MR_Integer) 0));
#line 1571 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Attributes_5)) == (MR_mktag((MR_Integer) 1)));
#line 1571 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1571 "prog_io_util.m"
          {
#line 1571 "prog_io_util.m"
            parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Attributes_5, (MR_Integer) 0)));
#line 1571 "prog_io_util.m"
            parse_tree__prog_io_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Attributes_5, (MR_Integer) 1)));
#line 1571 "prog_io_util.m"
            parse_tree__prog_io_util__Attr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_13_13, (MR_Integer) 0)));
#line 1571 "prog_io_util.m"
            parse_tree__prog_io_util__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_13_13, (MR_Integer) 1)));
#line 1571 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1571 "prog_io_util.m"
          }
#line 1570 "prog_io_util.m"
      }
#line 1579 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1575 "prog_io_util.m"
      {
#line 1575 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Pieces_11;
#line 1575 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Spec_12;
#line 1575 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_16_16;
#line 1575 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_17_17;
#line 1575 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_18_18;
#line 1575 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_27_27;
#line 1575 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_28_28;
#line 1575 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_29_29;
#line 1575 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_30_30;
#line 1575 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_33_33;

#line 1574 "prog_io_util.m"
        {
#line 1574 "prog_io_util.m"
          parse_tree__prog_io_util__V_18_18 = parse_tree__prog_io_util__attribute_description_1_f_0(parse_tree__prog_io_util__Attr_8);
        }
#line 1574 "prog_io_util.m"
        {
#line 1574 "prog_io_util.m"
          parse_tree__prog_io_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1574 "prog_io_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1574 "prog_io_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_17_17, 1) = ((MR_Box) (parse_tree__prog_io_util__V_18_18));
#line 1574 "prog_io_util.m"
        }
#line 1574 "prog_io_util.m"
        {
#line 1574 "prog_io_util.m"
          parse_tree__prog_io_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1574 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 0) = ((MR_Box) (parse_tree__prog_io_util__V_17_17));
#line 1574 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[10])));
#line 1574 "prog_io_util.m"
        }
#line 1574 "prog_io_util.m"
        {
#line 1574 "prog_io_util.m"
          parse_tree__prog_io_util__Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1574 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[14])));
#line 1574 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Pieces_11, 1) = ((MR_Box) (parse_tree__prog_io_util__V_16_16));
#line 1574 "prog_io_util.m"
        }
#line 1577 "prog_io_util.m"
        {
#line 1577 "prog_io_util.m"
          parse_tree__prog_io_util__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1577 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_11));
#line 1577 "prog_io_util.m"
        }
#line 1577 "prog_io_util.m"
        {
#line 1577 "prog_io_util.m"
          parse_tree__prog_io_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1577 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io_util__V_30_30));
#line 1577 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1577 "prog_io_util.m"
        }
#line 1577 "prog_io_util.m"
        {
#line 1577 "prog_io_util.m"
          parse_tree__prog_io_util__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1577 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io_util__Context_9));
#line 1577 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, 1) = ((MR_Box) (parse_tree__prog_io_util__V_29_29));
#line 1577 "prog_io_util.m"
        }
#line 1577 "prog_io_util.m"
        {
#line 1577 "prog_io_util.m"
          parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1577 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_util__V_28_28));
#line 1577 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1577 "prog_io_util.m"
        }
#line 1576 "prog_io_util.m"
        {
#line 1576 "prog_io_util.m"
          parse_tree__prog_io_util__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1576 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1576 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1576 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
#line 1576 "prog_io_util.m"
        }
#line 1578 "prog_io_util.m"
        {
#line 1578 "prog_io_util.m"
          parse_tree__prog_io_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1578 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_12));
#line 1578 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1578 "prog_io_util.m"
        }
#line 1578 "prog_io_util.m"
        {
#line 1578 "prog_io_util.m"
          MR_Word base;
#line 1578 "prog_io_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1578 "prog_io_util.m"
          *parse_tree__prog_io_util__Result_6 = base;
#line 1578 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_33_33));
#line 1578 "prog_io_util.m"
        }
#line 1575 "prog_io_util.m"
      }
#line 1579 "prog_io_util.m"
    else
#line 1580 "prog_io_util.m"
      *parse_tree__prog_io_util__Result_6 = parse_tree__prog_io_util__Result0_4;
#line 1579 "prog_io_util.m"
  }
#line 202 "prog_io_util.m"
}

#line 199 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__parse_decl_attribute_4_p_0(
#line 199 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Functor_5,
#line 199 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ArgTerms_6,
#line 199 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Attribute_7,
#line 199 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__SubTerm_8)
#line 199 "prog_io_util.m"
{
#line 1537 "prog_io_util.m"
  {
#line 1537 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__ArgTerms_6)) == (MR_mktag((MR_Integer) 1)));
#line 1537 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_34_34;
#line 1537 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_35_35;
#line 1537 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__lo_0;
#line 1537 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__hi_1;
#line 1537 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__mid_2;
#line 1537 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__result_3;

#line 1546 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1546 "prog_io_util.m"
      {
#line 1546 "prog_io_util.m"
        parse_tree__prog_io_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ArgTerms_6, (MR_Integer) 0)));
#line 1546 "prog_io_util.m"
        parse_tree__prog_io_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ArgTerms_6, (MR_Integer) 1)));
#line 1537 "prog_io_util.m"
        /* binary string jump switch */
#line 1537 "prog_io_util.m"
        parse_tree__prog_io_util__lo_0 = (MR_Integer) 0;
#line 1537 "prog_io_util.m"
        parse_tree__prog_io_util__hi_1 = (MR_Integer) 6;
#line 1537 "prog_io_util.m"
        do
#line 1537 "prog_io_util.m"
          {
#line 1537 "prog_io_util.m"
            parse_tree__prog_io_util__mid_2 = (((parse_tree__prog_io_util__lo_0 + parse_tree__prog_io_util__hi_1)) / (MR_Integer) 2);
#line 1537 "prog_io_util.m"
            parse_tree__prog_io_util__result_3 = MR_strcmp(parse_tree__prog_io_util__Functor_5, ((&parse_tree__prog_io_util_vector_common_6[0 + parse_tree__prog_io_util__mid_2]))->parse_tree__prog_io_util__vector_common_type_6_0__vct_6_f_0);
#line 1537 "prog_io_util.m"
            if ((parse_tree__prog_io_util__result_3 == (MR_Integer) 0))
#line 1537 "prog_io_util.m"
              {
#line 1537 "prog_io_util.m"
#line 1537 "prog_io_util.m"
                switch (((&parse_tree__prog_io_util_vector_common_6[0 + parse_tree__prog_io_util__mid_2]))->parse_tree__prog_io_util__vector_common_type_6_0__vct_6_f_1) {
#line 1537 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1537 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 1545 "prog_io_util.m"
                    {
#line 1545 "prog_io_util.m"
                      /* case "<=" */
#line 1545 "prog_io_util.m"
                      {
#line 1545 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__ConstraintsTerm_9;
#line 1545 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_23_23;
#line 1545 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_24_24;

#line 1546 "prog_io_util.m"
                        *parse_tree__prog_io_util__SubTerm_8 = parse_tree__prog_io_util__V_35_35;
#line 1546 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1546 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1546 "prog_io_util.m"
                          {
#line 1546 "prog_io_util.m"
                            parse_tree__prog_io_util__ConstraintsTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
#line 1546 "prog_io_util.m"
                            parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 1)));
#line 1546 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1545 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1545 "prog_io_util.m"
                              {
#line 1547 "prog_io_util.m"
                                parse_tree__prog_io_util__V_24_24 = (MR_Integer) 1;
#line 1547 "prog_io_util.m"
                                {
#line 1547 "prog_io_util.m"
                                  MR_Word base;
#line 1547 "prog_io_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1547 "prog_io_util.m"
                                  *parse_tree__prog_io_util__Attribute_7 = base;
#line 1547 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_24_24));
#line 1547 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__ConstraintsTerm_9));
#line 1547 "prog_io_util.m"
                                }
#line 1547 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1545 "prog_io_util.m"
                              }
#line 1546 "prog_io_util.m"
                          }
#line 1545 "prog_io_util.m"
                      }
#line 1545 "prog_io_util.m"
                    }
#line 1537 "prog_io_util.m"
                    break;
#line 1537 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 1549 "prog_io_util.m"
                    {
#line 1549 "prog_io_util.m"
                      /* case "=>" */
#line 1549 "prog_io_util.m"
                      {
#line 1549 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_20_20;
#line 1549 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_21_21;
#line 1549 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__ConstraintsTerm_29;

#line 1550 "prog_io_util.m"
                        *parse_tree__prog_io_util__SubTerm_8 = parse_tree__prog_io_util__V_35_35;
#line 1550 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1550 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1550 "prog_io_util.m"
                          {
#line 1550 "prog_io_util.m"
                            parse_tree__prog_io_util__ConstraintsTerm_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
#line 1550 "prog_io_util.m"
                            parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 1)));
#line 1550 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1549 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1549 "prog_io_util.m"
                              {
#line 1551 "prog_io_util.m"
                                parse_tree__prog_io_util__V_21_21 = (MR_Integer) 0;
#line 1551 "prog_io_util.m"
                                {
#line 1551 "prog_io_util.m"
                                  MR_Word base;
#line 1551 "prog_io_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1551 "prog_io_util.m"
                                  *parse_tree__prog_io_util__Attribute_7 = base;
#line 1551 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_21_21));
#line 1551 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__ConstraintsTerm_29));
#line 1551 "prog_io_util.m"
                                }
#line 1551 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1549 "prog_io_util.m"
                              }
#line 1550 "prog_io_util.m"
                          }
#line 1549 "prog_io_util.m"
                      }
#line 1549 "prog_io_util.m"
                    }
#line 1537 "prog_io_util.m"
                    break;
#line 1537 "prog_io_util.m"
                  case (MR_Integer) 2:
#line 1558 "prog_io_util.m"
                    {
#line 1558 "prog_io_util.m"
                      /* case "all" */
#line 1558 "prog_io_util.m"
                      {
#line 1558 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TypeCtorInfo_33_33;
#line 1558 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_14_14;
#line 1558 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_15_15;
#line 1558 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TVars_31;

#line 1559 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1559 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1559 "prog_io_util.m"
                          {
#line 1559 "prog_io_util.m"
                            *parse_tree__prog_io_util__SubTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
#line 1559 "prog_io_util.m"
                            parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 1)));
#line 1559 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1558 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1558 "prog_io_util.m"
                              {
#line 13701 "parse_tree.prog_io_util.c"
                                parse_tree__prog_io_util__TypeCtorInfo_33_33 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1560 "prog_io_util.m"
                                {
#line 1560 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_list_of_vars_2_p_0(parse_tree__prog_io_util__TypeCtorInfo_33_33, parse_tree__prog_io_util__V_35_35, &parse_tree__prog_io_util__TVars_31);
                                }
#line 1558 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 1558 "prog_io_util.m"
                                  {
#line 1561 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_15_15 = (MR_Integer) 1;
#line 1561 "prog_io_util.m"
                                    {
#line 1561 "prog_io_util.m"
                                      MR_Word base;
#line 1561 "prog_io_util.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1561 "prog_io_util.m"
                                      *parse_tree__prog_io_util__Attribute_7 = base;
#line 1561 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_15_15));
#line 1561 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TVars_31));
#line 1561 "prog_io_util.m"
                                    }
#line 1561 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1558 "prog_io_util.m"
                                  }
#line 1558 "prog_io_util.m"
                              }
#line 1559 "prog_io_util.m"
                          }
#line 1558 "prog_io_util.m"
                      }
#line 1558 "prog_io_util.m"
                    }
#line 1537 "prog_io_util.m"
                    break;
#line 1537 "prog_io_util.m"
                  case (MR_Integer) 3:
#line 1537 "prog_io_util.m"
                    {
#line 1537 "prog_io_util.m"
                      /* case "impure" */
#line 1537 "prog_io_util.m"
                      {
#line 1537 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_28_28;

#line 1538 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1537 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1537 "prog_io_util.m"
                          {
#line 1538 "prog_io_util.m"
                            *parse_tree__prog_io_util__SubTerm_8 = parse_tree__prog_io_util__V_35_35;
#line 1539 "prog_io_util.m"
                            parse_tree__prog_io_util__V_28_28 = (MR_Integer) 2;
#line 1539 "prog_io_util.m"
                            *parse_tree__prog_io_util__Attribute_7 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[11]);
#line 1539 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1537 "prog_io_util.m"
                          }
#line 1537 "prog_io_util.m"
                      }
#line 1537 "prog_io_util.m"
                    }
#line 1537 "prog_io_util.m"
                    break;
#line 1537 "prog_io_util.m"
                  case (MR_Integer) 4:
#line 1541 "prog_io_util.m"
                    {
#line 1541 "prog_io_util.m"
                      /* case "semipure" */
#line 1541 "prog_io_util.m"
                      {
#line 1541 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_26_26;

#line 1542 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1541 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1541 "prog_io_util.m"
                          {
#line 1542 "prog_io_util.m"
                            *parse_tree__prog_io_util__SubTerm_8 = parse_tree__prog_io_util__V_35_35;
#line 1543 "prog_io_util.m"
                            parse_tree__prog_io_util__V_26_26 = (MR_Integer) 1;
#line 1543 "prog_io_util.m"
                            *parse_tree__prog_io_util__Attribute_7 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[10]);
#line 1543 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1541 "prog_io_util.m"
                          }
#line 1541 "prog_io_util.m"
                      }
#line 1541 "prog_io_util.m"
                    }
#line 1537 "prog_io_util.m"
                    break;
#line 1537 "prog_io_util.m"
                  case (MR_Integer) 5:
#line 1563 "prog_io_util.m"
                    {
#line 1563 "prog_io_util.m"
                      /* case "solver" */
#line 1564 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1563 "prog_io_util.m"
                      if (parse_tree__prog_io_util__succeeded)
#line 1563 "prog_io_util.m"
                        {
#line 1564 "prog_io_util.m"
                          *parse_tree__prog_io_util__SubTerm_8 = parse_tree__prog_io_util__V_35_35;
#line 1565 "prog_io_util.m"
                          *parse_tree__prog_io_util__Attribute_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1565 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1563 "prog_io_util.m"
                        }
#line 1563 "prog_io_util.m"
                    }
#line 1537 "prog_io_util.m"
                    break;
#line 1537 "prog_io_util.m"
                  case (MR_Integer) 6:
#line 1553 "prog_io_util.m"
                    {
#line 1553 "prog_io_util.m"
                      /* case "some" */
#line 1553 "prog_io_util.m"
                      {
#line 1553 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TypeCtorInfo_32_32;
#line 1553 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TVars_11;
#line 1553 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_17_17;
#line 1553 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_18_18;

#line 1554 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1554 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1554 "prog_io_util.m"
                          {
#line 1554 "prog_io_util.m"
                            *parse_tree__prog_io_util__SubTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
#line 1554 "prog_io_util.m"
                            parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 1)));
#line 1554 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1553 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1553 "prog_io_util.m"
                              {
#line 13865 "parse_tree.prog_io_util.c"
                                parse_tree__prog_io_util__TypeCtorInfo_32_32 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1555 "prog_io_util.m"
                                {
#line 1555 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_list_of_vars_2_p_0(parse_tree__prog_io_util__TypeCtorInfo_32_32, parse_tree__prog_io_util__V_35_35, &parse_tree__prog_io_util__TVars_11);
                                }
#line 1553 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 1553 "prog_io_util.m"
                                  {
#line 1556 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_18_18 = (MR_Integer) 0;
#line 1556 "prog_io_util.m"
                                    {
#line 1556 "prog_io_util.m"
                                      MR_Word base;
#line 1556 "prog_io_util.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1556 "prog_io_util.m"
                                      *parse_tree__prog_io_util__Attribute_7 = base;
#line 1556 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_18_18));
#line 1556 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TVars_11));
#line 1556 "prog_io_util.m"
                                    }
#line 1556 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1553 "prog_io_util.m"
                                  }
#line 1553 "prog_io_util.m"
                              }
#line 1554 "prog_io_util.m"
                          }
#line 1553 "prog_io_util.m"
                      }
#line 1553 "prog_io_util.m"
                    }
#line 1537 "prog_io_util.m"
                    break;
#line 1537 "prog_io_util.m"
                }
#line 1537 "prog_io_util.m"
                /* jump out of search loop */
#line 1537 "prog_io_util.m"
                goto label_0;
#line 1537 "prog_io_util.m"
              }
#line 1537 "prog_io_util.m"
            else
#line 1537 "prog_io_util.m"
            if ((parse_tree__prog_io_util__result_3 < (MR_Integer) 0))
#line 1537 "prog_io_util.m"
              parse_tree__prog_io_util__hi_1 = (parse_tree__prog_io_util__mid_2 - (MR_Integer) 1);
#line 1537 "prog_io_util.m"
            else
#line 1537 "prog_io_util.m"
              parse_tree__prog_io_util__lo_0 = (parse_tree__prog_io_util__mid_2 + (MR_Integer) 1);
#line 1537 "prog_io_util.m"
          }
#line 1537 "prog_io_util.m"
        while ((parse_tree__prog_io_util__lo_0 <= parse_tree__prog_io_util__hi_1));
#line 1537 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 1537 "prog_io_util.m"
      label_0:;
#line 1546 "prog_io_util.m"
      }
#line 1537 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1537 "prog_io_util.m"
  }
#line 199 "prog_io_util.m"
}

#line 178 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__list_term_to_term_list_2_p_0(
#line 178 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 178 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Terms_4)
#line 178 "prog_io_util.m"
{
#line 1525 "prog_io_util.m"
  {
#line 1525 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 1525 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_19_19;
#line 1525 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_20_20;
#line 1525 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_21_21;
#line 1525 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_18_18;

#line 1525 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1525 "prog_io_util.m"
      {
#line 1525 "prog_io_util.m"
        parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_3, (MR_Integer) 0)));
#line 1525 "prog_io_util.m"
        parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_3, (MR_Integer) 1)));
#line 1525 "prog_io_util.m"
        parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_3, (MR_Integer) 2)));
#line 1529 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_20_20)) == (MR_mktag((MR_Integer) 0)));
#line 1529 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1529 "prog_io_util.m"
          {
#line 1529 "prog_io_util.m"
            parse_tree__prog_io_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_20_20, (MR_Integer) 0)));
#line 1525 "prog_io_util.m"
            if ((parse_tree__prog_io_util__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1529 "prog_io_util.m"
              {
#line 1529 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_21_21, (MR_String) "[]") == 0);
#line 1529 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1529 "prog_io_util.m"
                  {
#line 1530 "prog_io_util.m"
                    *parse_tree__prog_io_util__Terms_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1530 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1529 "prog_io_util.m"
                  }
#line 1529 "prog_io_util.m"
              }
#line 1525 "prog_io_util.m"
            else
#line 1525 "prog_io_util.m"
              {
#line 1525 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__HeadTerm_5;
#line 1525 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailTerm_6;
#line 1525 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailTerms_8;
#line 1525 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_16_16;
#line 1525 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_17_17;

#line 1525 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_21_21, (MR_String) "[|]") == 0);
#line 1525 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1525 "prog_io_util.m"
                  {
#line 1525 "prog_io_util.m"
                    parse_tree__prog_io_util__HeadTerm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, (MR_Integer) 0)));
#line 1525 "prog_io_util.m"
                    parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, (MR_Integer) 1)));
#line 1525 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 1525 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1525 "prog_io_util.m"
                      {
#line 1525 "prog_io_util.m"
                        parse_tree__prog_io_util__TailTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
#line 1525 "prog_io_util.m"
                        parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
#line 1525 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1525 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1525 "prog_io_util.m"
                          {
#line 1526 "prog_io_util.m"
                            {
#line 1526 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__list_term_to_term_list_2_p_0(parse_tree__prog_io_util__TailTerm_6, &parse_tree__prog_io_util__TailTerms_8);
                            }
#line 1525 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1525 "prog_io_util.m"
                              {
#line 1527 "prog_io_util.m"
                                {
#line 1527 "prog_io_util.m"
                                  MR_Word base;
#line 1527 "prog_io_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1527 "prog_io_util.m"
                                  *parse_tree__prog_io_util__Terms_4 = base;
#line 1527 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadTerm_5));
#line 1527 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailTerms_8));
#line 1527 "prog_io_util.m"
                                }
#line 1527 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1525 "prog_io_util.m"
                              }
#line 1525 "prog_io_util.m"
                          }
#line 1525 "prog_io_util.m"
                      }
#line 1525 "prog_io_util.m"
                  }
#line 1525 "prog_io_util.m"
              }
#line 1529 "prog_io_util.m"
          }
#line 1525 "prog_io_util.m"
      }
#line 1525 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1525 "prog_io_util.m"
  }
#line 178 "prog_io_util.m"
}

#line 175 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__map_parser_3_p_0(
#line 175 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_22,
#line 175 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Parser_1,
#line 175 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 175 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3)
#line 175 "prog_io_util.m"
{
#line 1252 "prog_io_util.m"
  {
#line 1252 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 1252 "prog_io_util.m"
    if ((parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1252 "prog_io_util.m"
      {
#line 1252 "prog_io_util.m"
        *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[9]);
#line 1252 "prog_io_util.m"
      }
#line 1252 "prog_io_util.m"
    else
#line 1253 "prog_io_util.m"
      {
#line 1253 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1253 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1253 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__HeadResult_10;
#line 1253 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TailResult_11;
#line 1254 "prog_io_util.m"
        void MR_CALL (* parse_tree__prog_io_util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Parser_1, (MR_Integer) 1)));
#line 1254 "prog_io_util.m"
        MR_Box parse_tree__prog_io_util__conv1_HeadResult_10;

#line 1254 "prog_io_util.m"
        {
#line 1254 "prog_io_util.m"
          parse_tree__prog_io_util__func_0(((MR_Box) parse_tree__prog_io_util__Parser_1), ((MR_Box) (parse_tree__prog_io_util__Head_7)), &parse_tree__prog_io_util__conv1_HeadResult_10);
        }
#line 1254 "prog_io_util.m"
        parse_tree__prog_io_util__HeadResult_10 = ((MR_Word) parse_tree__prog_io_util__conv1_HeadResult_10);
#line 1255 "prog_io_util.m"
        {
#line 1255 "prog_io_util.m"
          parse_tree__prog_io_util__map_parser_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_22, parse_tree__prog_io_util__Parser_1, parse_tree__prog_io_util__Tail_8, &parse_tree__prog_io_util__TailResult_11);
        }
#line 1260 "prog_io_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadResult_10)) == (MR_mktag((MR_Integer) 0))))
#line 1260 "prog_io_util.m"
          {
#line 1260 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadResult_10, (MR_Integer) 0)));

#line 1260 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__TailResult_11)) == (MR_mktag((MR_Integer) 0))))
#line 1257 "prog_io_util.m"
              {
#line 1257 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailSpecs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TailResult_11, (MR_Integer) 0)));
#line 1257 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_20_20;

#line 1259 "prog_io_util.m"
                {
#line 1259 "prog_io_util.m"
                  parse_tree__prog_io_util__V_20_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_util__V_24_24, parse_tree__prog_io_util__TailSpecs_13);
                }
#line 1259 "prog_io_util.m"
                {
#line 1259 "prog_io_util.m"
                  MR_Word base;
#line 1259 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1259 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 1259 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_20_20));
#line 1259 "prog_io_util.m"
                }
#line 1257 "prog_io_util.m"
              }
#line 1260 "prog_io_util.m"
            else
#line 1263 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) parse_tree__prog_io_util__HeadResult_10;
#line 1260 "prog_io_util.m"
          }
#line 1260 "prog_io_util.m"
        else
#line 1260 "prog_io_util.m"
          {
#line 1260 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_25_25 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadResult_10, (MR_Integer) 0));

#line 1260 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__TailResult_11)) == (MR_mktag((MR_Integer) 0))))
#line 1267 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__3_3 = parse_tree__prog_io_util__TailResult_11;
#line 1260 "prog_io_util.m"
            else
#line 1269 "prog_io_util.m"
              {
#line 1269 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailItems_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TailResult_11, (MR_Integer) 0)));
#line 1269 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_19_19;

#line 1271 "prog_io_util.m"
                {
#line 1271 "prog_io_util.m"
                  parse_tree__prog_io_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1271 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 0) = parse_tree__prog_io_util__V_25_25;
#line 1271 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io_util__TailItems_18));
#line 1271 "prog_io_util.m"
                }
#line 1271 "prog_io_util.m"
                {
#line 1271 "prog_io_util.m"
                  MR_Word base;
#line 1271 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1271 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 1271 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_19_19));
#line 1271 "prog_io_util.m"
                }
#line 1269 "prog_io_util.m"
              }
#line 1260 "prog_io_util.m"
          }
#line 1253 "prog_io_util.m"
      }
#line 1252 "prog_io_util.m"
  }
#line 175 "prog_io_util.m"
}

#line 172 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_list_3_p_0(
#line 172 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_8,
#line 172 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Parser_4,
#line 172 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_5,
#line 172 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_6)
#line 172 "prog_io_util.m"
{
#line 1212 "prog_io_util.m"
  {
#line 1212 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1212 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__List_7;
#line 1212 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Head_12;
#line 1212 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Tail_13;
#line 1212 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_15_15;

#line 1194 "prog_io_util.m"
    {
#line 1194 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", parse_tree__prog_io_util__Term_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_15_15);
    }
#line 1171 "prog_io_util.m"
    parse_tree__prog_io_util__Head_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_15_15, (MR_Integer) 0)));
#line 1171 "prog_io_util.m"
    parse_tree__prog_io_util__Tail_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_15_15, (MR_Integer) 1)));
#line 1172 "prog_io_util.m"
    {
#line 1172 "prog_io_util.m"
      parse_tree__prog_io_util__List_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1172 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__List_7, 0) = ((MR_Box) (parse_tree__prog_io_util__Head_12));
#line 1172 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__List_7, 1) = ((MR_Box) (parse_tree__prog_io_util__Tail_13));
#line 1172 "prog_io_util.m"
    }
#line 1214 "prog_io_util.m"
    {
#line 1214 "prog_io_util.m"
      parse_tree__prog_io_util__map_parser_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_8, parse_tree__prog_io_util__Parser_4, parse_tree__prog_io_util__List_7, parse_tree__prog_io_util__Result_6);
#line 1214 "prog_io_util.m"
      return;
    }
#line 1212 "prog_io_util.m"
  }
#line 172 "prog_io_util.m"
}

#line 170 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_one_or_more_3_p_0(
#line 170 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_10,
#line 170 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Parser_4,
#line 170 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_5,
#line 170 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_6)
#line 170 "prog_io_util.m"
{
#line 1208 "prog_io_util.m"
  {
#line 1208 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1208 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Head_7;
#line 1208 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Tail_8;
#line 1208 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 1194 "prog_io_util.m"
    {
#line 1194 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", parse_tree__prog_io_util__Term_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_9_9);
    }
#line 1209 "prog_io_util.m"
    parse_tree__prog_io_util__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_9_9, (MR_Integer) 0)));
#line 1209 "prog_io_util.m"
    parse_tree__prog_io_util__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_9_9, (MR_Integer) 1)));
#line 1210 "prog_io_util.m"
    {
#line 1210 "prog_io_util.m"
      parse_tree__prog_io_util__map_parser_one_or_more_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_10, parse_tree__prog_io_util__Parser_4, parse_tree__prog_io_util__Head_7, parse_tree__prog_io_util__Tail_8, parse_tree__prog_io_util__Result_6);
#line 1210 "prog_io_util.m"
      return;
    }
#line 1208 "prog_io_util.m"
  }
#line 170 "prog_io_util.m"
}

#line 165 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__sum_to_list_2_p_0(
#line 165 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
#line 165 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 165 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__List_4)
#line 165 "prog_io_util.m"
{
#line 1183 "prog_io_util.m"
  {
#line 1183 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1183 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Head_5;
#line 1183 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Tail_6;
#line 1183 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_8_8;

#line 1194 "prog_io_util.m"
    {
#line 1194 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) "+", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_8_8);
    }
#line 1184 "prog_io_util.m"
    parse_tree__prog_io_util__Head_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 0)));
#line 1184 "prog_io_util.m"
    parse_tree__prog_io_util__Tail_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 1)));
#line 1185 "prog_io_util.m"
    {
#line 1185 "prog_io_util.m"
      MR_Word base;
#line 1185 "prog_io_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1185 "prog_io_util.m"
      *parse_tree__prog_io_util__List_4 = base;
#line 1185 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Head_5));
#line 1185 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Tail_6));
#line 1185 "prog_io_util.m"
    }
#line 1183 "prog_io_util.m"
  }
#line 165 "prog_io_util.m"
}

#line 164 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__sum_to_one_or_more_2_p_0(
#line 164 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_6,
#line 164 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 164 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__OneOrMore_4)
#line 164 "prog_io_util.m"
{
#line 1180 "prog_io_util.m"
  {
#line 1180 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 1194 "prog_io_util.m"
    {
#line 1194 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) "+", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_util__OneOrMore_4);
#line 1194 "prog_io_util.m"
      return;
    }
#line 1180 "prog_io_util.m"
  }
#line 164 "prog_io_util.m"
}

#line 158 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__one_or_more_to_conjunction_3_p_0(
#line 158 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_20,
#line 158 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Context_1,
#line 158 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 158 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Term_3)
#line 158 "prog_io_util.m"
{
#line 1174 "prog_io_util.m"
  {
#line 1174 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1174 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1174 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1174 "prog_io_util.m"
    if ((parse_tree__prog_io_util__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1174 "prog_io_util.m"
      *parse_tree__prog_io_util__Term_3 = parse_tree__prog_io_util__V_22_22;
#line 1174 "prog_io_util.m"
    else
#line 1176 "prog_io_util.m"
      {
#line 1176 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Second_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, (MR_Integer) 0)));
#line 1176 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, (MR_Integer) 1)));
#line 1176 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Tail_12;
#line 1176 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_14_14;
#line 1176 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_17_17;
#line 1176 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_18_18;

#line 1177 "prog_io_util.m"
        {
#line 1177 "prog_io_util.m"
          parse_tree__prog_io_util__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1177 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_14_14, 0) = ((MR_Box) (parse_tree__prog_io_util__Second_9));
#line 1177 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_14_14, 1) = ((MR_Box) (parse_tree__prog_io_util__Rest_10));
#line 1177 "prog_io_util.m"
        }
#line 1177 "prog_io_util.m"
        {
#line 1177 "prog_io_util.m"
          parse_tree__prog_io_util__one_or_more_to_conjunction_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_20, parse_tree__prog_io_util__Context_1, parse_tree__prog_io_util__V_14_14, &parse_tree__prog_io_util__Tail_12);
        }
#line 1178 "prog_io_util.m"
        {
#line 1178 "prog_io_util.m"
          parse_tree__prog_io_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1178 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, 0) = ((MR_Box) (parse_tree__prog_io_util__Tail_12));
#line 1178 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1178 "prog_io_util.m"
        }
#line 1178 "prog_io_util.m"
        {
#line 1178 "prog_io_util.m"
          parse_tree__prog_io_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1178 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_17_17, 0) = ((MR_Box) (parse_tree__prog_io_util__V_22_22));
#line 1178 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_17_17, 1) = ((MR_Box) (parse_tree__prog_io_util__V_18_18));
#line 1178 "prog_io_util.m"
        }
#line 1178 "prog_io_util.m"
        {
#line 1178 "prog_io_util.m"
          MR_Word base;
#line 1178 "prog_io_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1178 "prog_io_util.m"
          *parse_tree__prog_io_util__Term_3 = base;
#line 1178 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[8]));
#line 1178 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_17_17));
#line 1178 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_1));
#line 1178 "prog_io_util.m"
        }
#line 1176 "prog_io_util.m"
      }
#line 1174 "prog_io_util.m"
  }
#line 158 "prog_io_util.m"
}

#line 151 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__conjunction_to_list_2_p_0(
#line 151 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
#line 151 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 151 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__List_4)
#line 151 "prog_io_util.m"
{
#line 1170 "prog_io_util.m"
  {
#line 1170 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1170 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Head_5;
#line 1170 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Tail_6;
#line 1170 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_8_8;

#line 1194 "prog_io_util.m"
    {
#line 1194 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_8_8);
    }
#line 1171 "prog_io_util.m"
    parse_tree__prog_io_util__Head_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 0)));
#line 1171 "prog_io_util.m"
    parse_tree__prog_io_util__Tail_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 1)));
#line 1172 "prog_io_util.m"
    {
#line 1172 "prog_io_util.m"
      MR_Word base;
#line 1172 "prog_io_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1172 "prog_io_util.m"
      *parse_tree__prog_io_util__List_4 = base;
#line 1172 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Head_5));
#line 1172 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Tail_6));
#line 1172 "prog_io_util.m"
    }
#line 1170 "prog_io_util.m"
  }
#line 151 "prog_io_util.m"
}

#line 149 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__conjunction_to_one_or_more_2_p_0(
#line 149 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_6,
#line 149 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 149 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__OneOrMore_4)
#line 149 "prog_io_util.m"
{
#line 1167 "prog_io_util.m"
  {
#line 1167 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 1194 "prog_io_util.m"
    {
#line 1194 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_util__OneOrMore_4);
#line 1194 "prog_io_util.m"
      return;
    }
#line 1167 "prog_io_util.m"
  }
#line 149 "prog_io_util.m"
}

#line 145 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__disjunction_to_list_2_p_0(
#line 145 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
#line 145 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 145 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__List_4)
#line 145 "prog_io_util.m"
{
#line 1163 "prog_io_util.m"
  {
#line 1163 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1163 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Head_5;
#line 1163 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Tail_6;
#line 1163 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_8_8;

#line 1194 "prog_io_util.m"
    {
#line 1194 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ";", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_8_8);
    }
#line 1164 "prog_io_util.m"
    parse_tree__prog_io_util__Head_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 0)));
#line 1164 "prog_io_util.m"
    parse_tree__prog_io_util__Tail_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 1)));
#line 1165 "prog_io_util.m"
    {
#line 1165 "prog_io_util.m"
      MR_Word base;
#line 1165 "prog_io_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1165 "prog_io_util.m"
      *parse_tree__prog_io_util__List_4 = base;
#line 1165 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Head_5));
#line 1165 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Tail_6));
#line 1165 "prog_io_util.m"
    }
#line 1163 "prog_io_util.m"
  }
#line 145 "prog_io_util.m"
}

#line 143 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__disjunction_to_one_or_more_2_p_0(
#line 143 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_6,
#line 143 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 143 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__OneOrMore_4)
#line 143 "prog_io_util.m"
{
#line 1160 "prog_io_util.m"
  {
#line 1160 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 1194 "prog_io_util.m"
    {
#line 1194 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ";", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_util__OneOrMore_4);
#line 1194 "prog_io_util.m"
      return;
    }
#line 1160 "prog_io_util.m"
  }
#line 143 "prog_io_util.m"
}

#line 139 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__standard_det_2_p_0(
#line 139 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__HeadVar__1_1,
#line 139 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__2_2)
#line 139 "prog_io_util.m"
{
#line 1096 "prog_io_util.m"
  {
#line 1096 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1096 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__slot_0;
#line 1096 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__str_1;

#line 1096 "prog_io_util.m"
    /* hashed string simple lookup switch */
#line 1096 "prog_io_util.m"
    /* compute the hash value of the input string */
#line 1096 "prog_io_util.m"
    parse_tree__prog_io_util__slot_0 = ((MR_hash_string4(parse_tree__prog_io_util__HeadVar__1_1)) & (MR_Integer) 31);
#line 1096 "prog_io_util.m"
    /* hash chain loop */
#line 1096 "prog_io_util.m"
    do
#line 1096 "prog_io_util.m"
      {
#line 1096 "prog_io_util.m"
        /* lookup the string for this hash slot */
#line 1096 "prog_io_util.m"
        parse_tree__prog_io_util__str_1 = ((&parse_tree__prog_io_util_vector_common_5[0 + parse_tree__prog_io_util__slot_0]))->parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_0;
#line 1096 "prog_io_util.m"
        /* did we find a match? */
#line 1096 "prog_io_util.m"
        if ((((parse_tree__prog_io_util__str_1 != NULL)) && ((strcmp(parse_tree__prog_io_util__str_1, parse_tree__prog_io_util__HeadVar__1_1) == 0))))
#line 1096 "prog_io_util.m"
          {
#line 1096 "prog_io_util.m"
            /* we found a match; look up the results */
#line 1096 "prog_io_util.m"
            *parse_tree__prog_io_util__HeadVar__2_2 = ((&parse_tree__prog_io_util_vector_common_5[0 + parse_tree__prog_io_util__slot_0]))->parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_2;
#line 1096 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1096 "prog_io_util.m"
            /* jump out of search loop */
#line 1096 "prog_io_util.m"
            goto label_0;
#line 1096 "prog_io_util.m"
          }
#line 1096 "prog_io_util.m"
        else
#line 1096 "prog_io_util.m"
          {
#line 1096 "prog_io_util.m"
            /* no match yet, so get next slot in hash chain */
#line 1096 "prog_io_util.m"
            parse_tree__prog_io_util__slot_0 = ((&parse_tree__prog_io_util_vector_common_5[0 + parse_tree__prog_io_util__slot_0]))->parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_1;
#line 1096 "prog_io_util.m"
          }
#line 1096 "prog_io_util.m"
      }
#line 1096 "prog_io_util.m"
    while ((parse_tree__prog_io_util__slot_0 >= (MR_Integer) 0));
#line 1096 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 1096 "prog_io_util.m"
  label_0:;
#line 1096 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1096 "prog_io_util.m"
  }
#line 139 "prog_io_util.m"
}

#line 137 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__is_known_inst_name_1_p_0(
#line 137 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Name_2)
#line 137 "prog_io_util.m"
{
#line 876 "prog_io_util.m"
  {
#line 876 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 877 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_3_3;

#line 877 "prog_io_util.m"
    {
#line 877 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_util__Name_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_3_3);
    }
#line 876 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 876 "prog_io_util.m"
  }
#line 137 "prog_io_util.m"
}

#line 136 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__is_known_mode_name_1_p_0(
#line 136 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__HeadVar__1_1)
#line 136 "prog_io_util.m"
{
#line 696 "prog_io_util.m"
  {
#line 696 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 696 "prog_io_util.m"
    if ((strcmp(parse_tree__prog_io_util__HeadVar__1_1, (MR_String) ">>") == 0))
#line 696 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 696 "prog_io_util.m"
    else
#line 696 "prog_io_util.m"
    if ((strcmp(parse_tree__prog_io_util__HeadVar__1_1, (MR_String) "is") == 0))
#line 697 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 696 "prog_io_util.m"
    else
#line 696 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 696 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 696 "prog_io_util.m"
  }
#line 136 "prog_io_util.m"
}

#line 133 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__convert_inst_3_p_0(
#line 133 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
#line 133 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_2,
#line 133 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Inst_3)
#line 133 "prog_io_util.m"
{
#line 793 "prog_io_util.m"
  {
#line 793 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 793 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__Term_2)) == (MR_mktag((MR_Integer) 0))))
#line 797 "prog_io_util.m"
      {
#line 797 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Functor_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_2, (MR_Integer) 0)));
#line 797 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Args0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_2, (MR_Integer) 1)));
#line 797 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__Name_16;
#line 798 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util___Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_2, (MR_Integer) 2)));
#line 838 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__KnownInstKind_17;

#line 799 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Functor_13)) == (MR_mktag((MR_Integer) 0)));
#line 799 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 799 "prog_io_util.m"
          {
#line 799 "prog_io_util.m"
            parse_tree__prog_io_util__Name_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Functor_13, (MR_Integer) 0)));
#line 803 "prog_io_util.m"
            {
#line 803 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_util__Name_16, parse_tree__prog_io_util__Args0_14, &parse_tree__prog_io_util__KnownInstKind_17);
            }
#line 838 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 807 "prog_io_util.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_util__KnownInstKind_17)) == (MR_mktag((MR_Integer) 2))))
#line 810 "prog_io_util.m"
                {
#line 810 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__CompoundInstKind_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__KnownInstKind_17, (MR_Integer) 0)));

#line 815 "prog_io_util.m"
#line 815 "prog_io_util.m"
                  switch (MR_tag((MR_Word) parse_tree__prog_io_util__CompoundInstKind_18)) {
#line 815 "prog_io_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 815 "prog_io_util.m"
                    case (MR_Integer) 0:
#line 812 "prog_io_util.m"
                      {
#line 812 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__BeforeIsTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 0)));
#line 812 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__DetTerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 1)));

#line 813 "prog_io_util.m"
                        {
#line 813 "prog_io_util.m"
                          return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_higher_order_inst_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__BeforeIsTerm_19, parse_tree__prog_io_util__DetTerm_20, parse_tree__prog_io_util__Inst_3);
                        }
#line 812 "prog_io_util.m"
                      }
#line 815 "prog_io_util.m"
                      break;
#line 815 "prog_io_util.m"
                    case (MR_Integer) 1:
#line 828 "prog_io_util.m"
                      {
#line 828 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TypeInfo_53_53;
#line 828 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TypeCtorInfo_54_54;
#line 828 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TypeCtorInfo_55_55;
#line 828 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__VarTerm_22;
#line 828 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__SubInstTerm_23;
#line 828 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Var_24;
#line 828 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__SubInst_26;
#line 828 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_35_35;
#line 828 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_36_36;
#line 828 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_37_37;
#line 830 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_25_25;

#line 829 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__AllowConstrainedInstVar_1 == (MR_Integer) 0);
#line 828 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 828 "prog_io_util.m"
                          {
#line 828 "prog_io_util.m"
                            parse_tree__prog_io_util__VarTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 0)));
#line 828 "prog_io_util.m"
                            parse_tree__prog_io_util__SubInstTerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 1)));
#line 830 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__VarTerm_22)) == (MR_mktag((MR_Integer) 1)));
#line 830 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 830 "prog_io_util.m"
                              {
#line 830 "prog_io_util.m"
                                parse_tree__prog_io_util__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarTerm_22, (MR_Integer) 0)));
#line 830 "prog_io_util.m"
                                parse_tree__prog_io_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarTerm_22, (MR_Integer) 1)));
#line 832 "prog_io_util.m"
                                parse_tree__prog_io_util__V_35_35 = (MR_Integer) 1;
#line 832 "prog_io_util.m"
                                {
#line 832 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_util__V_35_35, parse_tree__prog_io_util__SubInstTerm_23, &parse_tree__prog_io_util__SubInst_26);
                                }
#line 828 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 828 "prog_io_util.m"
                                  {
#line 14942 "parse_tree.prog_io_util.c"
                                    parse_tree__prog_io_util__TypeInfo_53_53 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[1];
#line 14944 "parse_tree.prog_io_util.c"
                                    parse_tree__prog_io_util__TypeCtorInfo_54_54 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 14946 "parse_tree.prog_io_util.c"
                                    parse_tree__prog_io_util__TypeCtorInfo_55_55 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 835 "prog_io_util.m"
                                    {
#line 835 "prog_io_util.m"
                                      parse_tree__prog_io_util__V_37_37 = mercury__term__coerce_var_1_f_0(parse_tree__prog_io_util__TypeCtorInfo_54_54, parse_tree__prog_io_util__TypeCtorInfo_55_55, parse_tree__prog_io_util__Var_24);
                                    }
#line 834 "prog_io_util.m"
                                    {
#line 834 "prog_io_util.m"
                                      parse_tree__prog_io_util__V_36_36 = mercury__set__make_singleton_set_1_f_0(parse_tree__prog_io_util__TypeInfo_53_53, ((MR_Box) (parse_tree__prog_io_util__V_37_37)));
                                    }
#line 834 "prog_io_util.m"
                                    {
#line 834 "prog_io_util.m"
                                      MR_Word base;
#line 834 "prog_io_util.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 834 "prog_io_util.m"
                                      *parse_tree__prog_io_util__Inst_3 = base;
#line 834 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 834 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 834 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_util__SubInst_26));
#line 834 "prog_io_util.m"
                                    }
#line 834 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 828 "prog_io_util.m"
                                  }
#line 830 "prog_io_util.m"
                              }
#line 828 "prog_io_util.m"
                          }
#line 828 "prog_io_util.m"
                      }
#line 815 "prog_io_util.m"
                      break;
#line 815 "prog_io_util.m"
                    case (MR_Integer) 2:
#line 816 "prog_io_util.m"
                      {
#line 816 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__DisjTerm_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 0)));

#line 817 "prog_io_util.m"
                        {
#line 817 "prog_io_util.m"
                          return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__DisjTerm_21, (MR_Integer) 0, parse_tree__prog_io_util__Inst_3);
                        }
#line 816 "prog_io_util.m"
                      }
#line 815 "prog_io_util.m"
                      break;
#line 815 "prog_io_util.m"
                    case (MR_Integer) 3:
#line 815 "prog_io_util.m"
#line 815 "prog_io_util.m"
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 0)))) {
#line 815 "prog_io_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 815 "prog_io_util.m"
                        case (MR_Integer) 0:
#line 820 "prog_io_util.m"
                          {
#line 820 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__DisjTerm_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 1)));

#line 821 "prog_io_util.m"
                            {
#line 821 "prog_io_util.m"
                              return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__DisjTerm_45, (MR_Integer) 1, parse_tree__prog_io_util__Inst_3);
                            }
#line 820 "prog_io_util.m"
                          }
#line 815 "prog_io_util.m"
                          break;
#line 815 "prog_io_util.m"
                        case (MR_Integer) 1:
#line 824 "prog_io_util.m"
                          {
#line 824 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__DisjTerm_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 1)));

#line 825 "prog_io_util.m"
                            {
#line 825 "prog_io_util.m"
                              return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__DisjTerm_46, (MR_Integer) 2, parse_tree__prog_io_util__Inst_3);
                            }
#line 824 "prog_io_util.m"
                          }
#line 815 "prog_io_util.m"
                          break;
#line 815 "prog_io_util.m"
                      }
#line 815 "prog_io_util.m"
                      break;
#line 815 "prog_io_util.m"
                  }
#line 810 "prog_io_util.m"
                }
#line 807 "prog_io_util.m"
              else
#line 807 "prog_io_util.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_util__KnownInstKind_17)) == (MR_mktag((MR_Integer) 1))))
#line 808 "prog_io_util.m"
                {
#line 808 "prog_io_util.m"
                  *parse_tree__prog_io_util__Inst_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__KnownInstKind_17, (MR_Integer) 0)));
#line 808 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 808 "prog_io_util.m"
                }
#line 807 "prog_io_util.m"
              else
#line 807 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 838 "prog_io_util.m"
            else
#line 841 "prog_io_util.m"
              {
#line 841 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__QualifiedName_27;
#line 841 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Args1_28;
#line 858 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__InstPrime_31;
#line 843 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__BuiltinModule_29;
#line 843 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__UnqualifiedName_30;
#line 843 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_41_41;
#line 843 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__V_42_42;
#line 843 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__KnownInstKind_47;
#line 843 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_58_58;
#line 855 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_43_43;
#line 855 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_32_32;
#line 855 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_33_33;

#line 840 "prog_io_util.m"
                {
#line 840 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_from_f_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__Functor_13, parse_tree__prog_io_util__Args0_14, &parse_tree__prog_io_util__QualifiedName_27, &parse_tree__prog_io_util__Args1_28);
                }
#line 841 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 841 "prog_io_util.m"
                  {
#line 843 "prog_io_util.m"
                    {
#line 843 "prog_io_util.m"
                      parse_tree__prog_io_util__BuiltinModule_29 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                    }
#line 844 "prog_io_util.m"
                    parse_tree__prog_io_util__V_42_42 = (MR_String) "";
#line 844 "prog_io_util.m"
                    parse_tree__prog_io_util__V_41_41 = (MR_Word) &parse_tree__prog_io_util_scalar_common_3[1];
#line 844 "prog_io_util.m"
                    {
#line 844 "prog_io_util.m"
                      mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(parse_tree__prog_io_util__QualifiedName_27, parse_tree__prog_io_util__V_41_41, &parse_tree__prog_io_util__V_58_58);
                    }
#line 844 "prog_io_util.m"
                    {
#line 844 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_util__BuiltinModule_29, parse_tree__prog_io_util__V_58_58);
                    }
#line 843 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 843 "prog_io_util.m"
                      {
#line 848 "prog_io_util.m"
                        {
#line 848 "prog_io_util.m"
                          parse_tree__prog_io_util__UnqualifiedName_30 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_io_util__QualifiedName_27);
                        }
#line 849 "prog_io_util.m"
                        {
#line 849 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_util__UnqualifiedName_30, parse_tree__prog_io_util__Args1_28, &parse_tree__prog_io_util__KnownInstKind_47);
                        }
#line 843 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 843 "prog_io_util.m"
                          {
#line 850 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__KnownInstKind_47)) == (MR_mktag((MR_Integer) 1)));
#line 850 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 850 "prog_io_util.m"
                              {
#line 850 "prog_io_util.m"
                                parse_tree__prog_io_util__InstPrime_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__KnownInstKind_47, (MR_Integer) 0)));
#line 855 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_util__InstPrime_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__InstPrime_31, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 855 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 855 "prog_io_util.m"
                                  {
#line 855 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__InstPrime_31, (MR_Integer) 1)));
#line 855 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_43_43)) == (MR_mktag((MR_Integer) 0)));
#line 855 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 855 "prog_io_util.m"
                                      {
#line 855 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_43_43, (MR_Integer) 0)));
#line 855 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_43_43, (MR_Integer) 1)));
#line 855 "prog_io_util.m"
                                      }
#line 855 "prog_io_util.m"
                                  }
#line 855 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 850 "prog_io_util.m"
                              }
#line 843 "prog_io_util.m"
                          }
#line 843 "prog_io_util.m"
                      }
#line 858 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 857 "prog_io_util.m"
                      {
#line 857 "prog_io_util.m"
                        *parse_tree__prog_io_util__Inst_3 = parse_tree__prog_io_util__InstPrime_31;
#line 857 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 857 "prog_io_util.m"
                      }
#line 858 "prog_io_util.m"
                    else
#line 859 "prog_io_util.m"
                      {
#line 859 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Args_34;
#line 859 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_44_44;

#line 859 "prog_io_util.m"
                        {
#line 859 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__Args1_28, &parse_tree__prog_io_util__Args_34);
                        }
#line 859 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 859 "prog_io_util.m"
                          {
#line 860 "prog_io_util.m"
                            {
#line 860 "prog_io_util.m"
                              parse_tree__prog_io_util__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 860 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_util__QualifiedName_27));
#line 860 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_44_44, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_34));
#line 860 "prog_io_util.m"
                            }
#line 860 "prog_io_util.m"
                            {
#line 860 "prog_io_util.m"
                              MR_Word base;
#line 860 "prog_io_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "prog_io_util.m"
                              *parse_tree__prog_io_util__Inst_3 = base;
#line 860 "prog_io_util.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 860 "prog_io_util.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_44_44));
#line 860 "prog_io_util.m"
                            }
#line 860 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 859 "prog_io_util.m"
                          }
#line 859 "prog_io_util.m"
                      }
#line 841 "prog_io_util.m"
                  }
#line 841 "prog_io_util.m"
              }
#line 799 "prog_io_util.m"
          }
#line 797 "prog_io_util.m"
      }
#line 793 "prog_io_util.m"
    else
#line 793 "prog_io_util.m"
      {
#line 793 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Term_2, (MR_Integer) 0)));
#line 793 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_9;
#line 794 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Term_2, (MR_Integer) 1)));

#line 795 "prog_io_util.m"
        {
#line 795 "prog_io_util.m"
          mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_util__V0_7, &parse_tree__prog_io_util__V_9);
        }
#line 796 "prog_io_util.m"
        {
#line 796 "prog_io_util.m"
          MR_Word base;
#line 796 "prog_io_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 796 "prog_io_util.m"
          *parse_tree__prog_io_util__Inst_3 = base;
#line 796 "prog_io_util.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 796 "prog_io_util.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_9));
#line 796 "prog_io_util.m"
        }
#line 793 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 793 "prog_io_util.m"
      }
#line 793 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 793 "prog_io_util.m"
  }
#line 133 "prog_io_util.m"
}

#line 130 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__convert_inst_list_3_p_0(
#line 130 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
#line 130 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 130 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3)
#line 130 "prog_io_util.m"
{
#line 788 "prog_io_util.m"
  {
#line 788 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 788 "prog_io_util.m"
    if ((parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 788 "prog_io_util.m"
      {
#line 788 "prog_io_util.m"
        *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 788 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 788 "prog_io_util.m"
      }
#line 788 "prog_io_util.m"
    else
#line 789 "prog_io_util.m"
      {
#line 789 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Term_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 789 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Terms_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 789 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Inst_8;
#line 789 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Insts_9;

#line 790 "prog_io_util.m"
        {
#line 790 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__Term_6, &parse_tree__prog_io_util__Inst_8);
        }
#line 789 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 789 "prog_io_util.m"
          {
#line 791 "prog_io_util.m"
            {
#line 791 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__Terms_7, &parse_tree__prog_io_util__Insts_9);
            }
#line 789 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 789 "prog_io_util.m"
              {
#line 789 "prog_io_util.m"
                {
#line 789 "prog_io_util.m"
                  MR_Word base;
#line 789 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 789 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Inst_8));
#line 789 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Insts_9));
#line 789 "prog_io_util.m"
                }
#line 789 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 789 "prog_io_util.m"
              }
#line 789 "prog_io_util.m"
          }
#line 789 "prog_io_util.m"
      }
#line 788 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 788 "prog_io_util.m"
  }
#line 130 "prog_io_util.m"
}

#line 127 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__convert_mode_3_p_0(
#line 127 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_4,
#line 127 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_5,
#line 127 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Mode_6)
#line 127 "prog_io_util.m"
{
#line 670 "prog_io_util.m"
  {
#line 670 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 670 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TermFunctor_7;
#line 670 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TermArgs_8;
#line 671 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;
#line 675 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_19_19;

#line 671 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 671 "prog_io_util.m"
      {
#line 671 "prog_io_util.m"
        parse_tree__prog_io_util__TermFunctor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 671 "prog_io_util.m"
        parse_tree__prog_io_util__TermArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 671 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 675 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermFunctor_7)) == (MR_mktag((MR_Integer) 0)));
#line 675 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 675 "prog_io_util.m"
          {
#line 675 "prog_io_util.m"
            parse_tree__prog_io_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TermFunctor_7, (MR_Integer) 0)));
#line 675 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_19_19, (MR_String) ">>") == 0);
#line 675 "prog_io_util.m"
          }
#line 681 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 677 "prog_io_util.m"
          {
#line 677 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__InstTermA_10;
#line 677 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__InstTermB_11;
#line 677 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__InstA_12;
#line 677 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__InstB_13;
#line 677 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_20_20;
#line 677 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_21_21;

#line 677 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermArgs_8)) == (MR_mktag((MR_Integer) 1)));
#line 677 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 677 "prog_io_util.m"
              {
#line 677 "prog_io_util.m"
                parse_tree__prog_io_util__InstTermA_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 0)));
#line 677 "prog_io_util.m"
                parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 1)));
#line 677 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 677 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 677 "prog_io_util.m"
                  {
#line 677 "prog_io_util.m"
                    parse_tree__prog_io_util__InstTermB_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, (MR_Integer) 0)));
#line 677 "prog_io_util.m"
                    parse_tree__prog_io_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, (MR_Integer) 1)));
#line 677 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 677 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 677 "prog_io_util.m"
                      {
#line 678 "prog_io_util.m"
                        {
#line 678 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__InstTermA_10, &parse_tree__prog_io_util__InstA_12);
                        }
#line 677 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 677 "prog_io_util.m"
                          {
#line 679 "prog_io_util.m"
                            {
#line 679 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__InstTermB_11, &parse_tree__prog_io_util__InstB_13);
                            }
#line 677 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 677 "prog_io_util.m"
                              {
#line 680 "prog_io_util.m"
                                {
#line 680 "prog_io_util.m"
                                  MR_Word base;
#line 680 "prog_io_util.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 680 "prog_io_util.m"
                                  *parse_tree__prog_io_util__Mode_6 = base;
#line 680 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__InstA_12));
#line 680 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__InstB_13));
#line 680 "prog_io_util.m"
                                }
#line 680 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 677 "prog_io_util.m"
                              }
#line 677 "prog_io_util.m"
                          }
#line 677 "prog_io_util.m"
                      }
#line 677 "prog_io_util.m"
                  }
#line 677 "prog_io_util.m"
              }
#line 677 "prog_io_util.m"
          }
#line 681 "prog_io_util.m"
        else
#line 687 "prog_io_util.m"
          {
#line 682 "prog_io_util.m"
            MR_String parse_tree__prog_io_util__V_22_22;

#line 682 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermFunctor_7)) == (MR_mktag((MR_Integer) 0)));
#line 682 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 682 "prog_io_util.m"
              {
#line 682 "prog_io_util.m"
                parse_tree__prog_io_util__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TermFunctor_7, (MR_Integer) 0)));
#line 682 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_22_22, (MR_String) "is") == 0);
#line 682 "prog_io_util.m"
              }
#line 687 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 684 "prog_io_util.m"
              {
#line 684 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__BeforeIsTerm_14;
#line 684 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__DetTerm_15;
#line 684 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_23_23;
#line 684 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_24_24;

#line 684 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermArgs_8)) == (MR_mktag((MR_Integer) 1)));
#line 684 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 684 "prog_io_util.m"
                  {
#line 684 "prog_io_util.m"
                    parse_tree__prog_io_util__BeforeIsTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 0)));
#line 684 "prog_io_util.m"
                    parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 1)));
#line 684 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 684 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 684 "prog_io_util.m"
                      {
#line 684 "prog_io_util.m"
                        parse_tree__prog_io_util__DetTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_23_23, (MR_Integer) 0)));
#line 684 "prog_io_util.m"
                        parse_tree__prog_io_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_23_23, (MR_Integer) 1)));
#line 684 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 684 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 685 "prog_io_util.m"
                          {
#line 685 "prog_io_util.m"
                            return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_higher_order_mode_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__BeforeIsTerm_14, parse_tree__prog_io_util__DetTerm_15, parse_tree__prog_io_util__Mode_6);
                          }
#line 684 "prog_io_util.m"
                      }
#line 684 "prog_io_util.m"
                  }
#line 684 "prog_io_util.m"
              }
#line 687 "prog_io_util.m"
            else
#line 691 "prog_io_util.m"
              {
#line 691 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Name_16;
#line 691 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Args_17;
#line 691 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__ConvertedArgs_18;

#line 690 "prog_io_util.m"
                {
#line 690 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_from_f_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__TermFunctor_7, parse_tree__prog_io_util__TermArgs_8, &parse_tree__prog_io_util__Name_16, &parse_tree__prog_io_util__Args_17);
                }
#line 691 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 691 "prog_io_util.m"
                  {
#line 692 "prog_io_util.m"
                    {
#line 692 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__Args_17, &parse_tree__prog_io_util__ConvertedArgs_18);
                    }
#line 691 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 691 "prog_io_util.m"
                      {
#line 693 "prog_io_util.m"
                        {
#line 693 "prog_io_util.m"
                          MR_Word base;
#line 693 "prog_io_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 693 "prog_io_util.m"
                          *parse_tree__prog_io_util__Mode_6 = base;
#line 693 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Name_16));
#line 693 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__ConvertedArgs_18));
#line 693 "prog_io_util.m"
                        }
#line 693 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 691 "prog_io_util.m"
                      }
#line 691 "prog_io_util.m"
                  }
#line 691 "prog_io_util.m"
              }
#line 687 "prog_io_util.m"
          }
#line 671 "prog_io_util.m"
      }
#line 670 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 670 "prog_io_util.m"
  }
#line 127 "prog_io_util.m"
}

#line 124 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__convert_mode_list_3_p_0(
#line 124 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
#line 124 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 124 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3)
#line 124 "prog_io_util.m"
{
#line 665 "prog_io_util.m"
  {
#line 665 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 665 "prog_io_util.m"
    if ((parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 665 "prog_io_util.m"
      {
#line 665 "prog_io_util.m"
        *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 665 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 665 "prog_io_util.m"
      }
#line 665 "prog_io_util.m"
    else
#line 666 "prog_io_util.m"
      {
#line 666 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__H0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 666 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__T0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 666 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__H_8;
#line 666 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__T_9;

#line 667 "prog_io_util.m"
        {
#line 667 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__H0_6, &parse_tree__prog_io_util__H_8);
        }
#line 666 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 666 "prog_io_util.m"
          {
#line 668 "prog_io_util.m"
            {
#line 668 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__T0_7, &parse_tree__prog_io_util__T_9);
            }
#line 666 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 666 "prog_io_util.m"
              {
#line 666 "prog_io_util.m"
                {
#line 666 "prog_io_util.m"
                  MR_Word base;
#line 666 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 666 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__H_8));
#line 666 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__T_9));
#line 666 "prog_io_util.m"
                }
#line 666 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 666 "prog_io_util.m"
              }
#line 666 "prog_io_util.m"
          }
#line 666 "prog_io_util.m"
      }
#line 665 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 665 "prog_io_util.m"
  }
#line 124 "prog_io_util.m"
}

#line 118 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_purity_annotation_3_p_0(
#line 118 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_14,
#line 118 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term0_4,
#line 118 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Purity_5,
#line 118 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Term_6)
#line 118 "prog_io_util.m"
{
#line 585 "prog_io_util.m"
  {
#line 585 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term0_4)) == (MR_mktag((MR_Integer) 0)));
#line 585 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Term1_8;
#line 585 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Purity0_10;
#line 580 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__PurityName_7;
#line 580 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;
#line 580 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_12_12;
#line 580 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 580 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 580 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 580 "prog_io_util.m"
      {
#line 580 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_4, (MR_Integer) 0)));
#line 580 "prog_io_util.m"
        parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_4, (MR_Integer) 1)));
#line 580 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_4, (MR_Integer) 2)));
#line 580 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_11_11)) == (MR_mktag((MR_Integer) 0)));
#line 580 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 580 "prog_io_util.m"
          {
#line 580 "prog_io_util.m"
            parse_tree__prog_io_util__PurityName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_11_11, (MR_Integer) 0)));
#line 580 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 580 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 580 "prog_io_util.m"
              {
#line 580 "prog_io_util.m"
                parse_tree__prog_io_util__Term1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_12_12, (MR_Integer) 0)));
#line 580 "prog_io_util.m"
                parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_12_12, (MR_Integer) 1)));
#line 580 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 580 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 581 "prog_io_util.m"
                  {
#line 581 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = parse_tree__prog_out__purity_name_2_p_1(&parse_tree__prog_io_util__Purity0_10, parse_tree__prog_io_util__PurityName_7);
                  }
#line 580 "prog_io_util.m"
              }
#line 580 "prog_io_util.m"
          }
#line 580 "prog_io_util.m"
      }
#line 585 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 583 "prog_io_util.m"
      {
#line 583 "prog_io_util.m"
        *parse_tree__prog_io_util__Purity_5 = parse_tree__prog_io_util__Purity0_10;
#line 584 "prog_io_util.m"
        *parse_tree__prog_io_util__Term_6 = parse_tree__prog_io_util__Term1_8;
#line 583 "prog_io_util.m"
      }
#line 585 "prog_io_util.m"
    else
#line 586 "prog_io_util.m"
      {
#line 586 "prog_io_util.m"
        *parse_tree__prog_io_util__Purity_5 = (MR_Integer) 0;
#line 587 "prog_io_util.m"
        *parse_tree__prog_io_util__Term_6 = parse_tree__prog_io_util__Term0_4;
#line 586 "prog_io_util.m"
      }
#line 585 "prog_io_util.m"
  }
#line 118 "prog_io_util.m"
}

#line 116 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__unparse_type_2_p_0(
#line 116 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Type_3,
#line 116 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Term_4)
#line 116 "prog_io_util.m"
{
#line 590 "prog_io_util.m"
  {
#line 590 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 590 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Context_5;

#line 591 "prog_io_util.m"
    {
#line 591 "prog_io_util.m"
      parse_tree__prog_io_util__Context_5 = mercury__term__context_init_0_f_0();
    }
#line 596 "prog_io_util.m"
#line 596 "prog_io_util.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io_util__Type_3)) {
#line 596 "prog_io_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 596 "prog_io_util.m"
      case (MR_Integer) 0:
#line 593 "prog_io_util.m"
        {
#line 593 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__TVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Type_3, (MR_Integer) 0)));
#line 593 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__Var_8;
#line 593 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Type_3, (MR_Integer) 1)));

#line 594 "prog_io_util.m"
          {
#line 594 "prog_io_util.m"
            parse_tree__prog_io_util__Var_8 = mercury__term__coerce_var_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__TVar_6);
          }
#line 595 "prog_io_util.m"
          {
#line 595 "prog_io_util.m"
            MR_Word base;
#line 595 "prog_io_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 595 "prog_io_util.m"
            *parse_tree__prog_io_util__Term_4 = base;
#line 595 "prog_io_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Var_8));
#line 595 "prog_io_util.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Context_5));
#line 595 "prog_io_util.m"
          }
#line 593 "prog_io_util.m"
        }
#line 596 "prog_io_util.m"
        break;
#line 596 "prog_io_util.m"
      case (MR_Integer) 1:
#line 597 "prog_io_util.m"
        {
#line 597 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Type_3, (MR_Integer) 0)));
#line 597 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Type_3, (MR_Integer) 1)));
#line 597 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__ArgTerms_12;
#line 597 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Type_3, (MR_Integer) 2)));

#line 598 "prog_io_util.m"
          {
#line 598 "prog_io_util.m"
            parse_tree__prog_io_util__unparse_type_list_2_p_0(parse_tree__prog_io_util__Args_10, &parse_tree__prog_io_util__ArgTerms_12);
          }
#line 599 "prog_io_util.m"
          {
#line 599 "prog_io_util.m"
            parse_tree__prog_io_util__unparse_qualified_term_3_p_0(parse_tree__prog_io_util__SymName_9, parse_tree__prog_io_util__ArgTerms_12, parse_tree__prog_io_util__Term_4);
#line 599 "prog_io_util.m"
            return;
          }
#line 597 "prog_io_util.m"
        }
#line 596 "prog_io_util.m"
        break;
#line 596 "prog_io_util.m"
      case (MR_Integer) 2:
#line 601 "prog_io_util.m"
        {
#line 601 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__BuiltinType_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Type_3, (MR_Integer) 0)));
#line 601 "prog_io_util.m"
          MR_String parse_tree__prog_io_util__Name_14;
#line 601 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_45_45;

#line 602 "prog_io_util.m"
          {
#line 602 "prog_io_util.m"
            parse_tree__prog_out__builtin_type_to_string_2_p_0(parse_tree__prog_io_util__BuiltinType_13, &parse_tree__prog_io_util__Name_14);
          }
#line 603 "prog_io_util.m"
          {
#line 603 "prog_io_util.m"
            parse_tree__prog_io_util__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 603 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_util__Name_14));
#line 603 "prog_io_util.m"
          }
#line 603 "prog_io_util.m"
          {
#line 603 "prog_io_util.m"
            MR_Word base;
#line 603 "prog_io_util.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 603 "prog_io_util.m"
            *parse_tree__prog_io_util__Term_4 = base;
#line 603 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_45_45));
#line 603 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 603 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_5));
#line 603 "prog_io_util.m"
          }
#line 601 "prog_io_util.m"
        }
#line 596 "prog_io_util.m"
        break;
#line 596 "prog_io_util.m"
      case (MR_Integer) 3:
#line 596 "prog_io_util.m"
#line 596 "prog_io_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 0)))) {
#line 596 "prog_io_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 596 "prog_io_util.m"
          case (MR_Integer) 0:
#line 620 "prog_io_util.m"
            {
#line 620 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Args_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 1)));
#line 620 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__ArgTerms_51;
#line 620 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 2)));

#line 621 "prog_io_util.m"
              {
#line 621 "prog_io_util.m"
                parse_tree__prog_io_util__unparse_type_list_2_p_0(parse_tree__prog_io_util__Args_50, &parse_tree__prog_io_util__ArgTerms_51);
              }
#line 622 "prog_io_util.m"
              {
#line 622 "prog_io_util.m"
                MR_Word base;
#line 622 "prog_io_util.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 622 "prog_io_util.m"
                *parse_tree__prog_io_util__Term_4 = base;
#line 622 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[7]));
#line 622 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTerms_51));
#line 622 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_5));
#line 622 "prog_io_util.m"
              }
#line 620 "prog_io_util.m"
            }
#line 596 "prog_io_util.m"
            break;
#line 596 "prog_io_util.m"
          case (MR_Integer) 1:
#line 605 "prog_io_util.m"
            {
#line 605 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__MaybeRet_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 2)));
#line 605 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Purity_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 3)));
#line 605 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Term2_22;
#line 605 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Args_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 1)));
#line 605 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__ArgTerms_49;

#line 606 "prog_io_util.m"
              {
#line 606 "prog_io_util.m"
                parse_tree__prog_io_util__unparse_type_list_2_p_0(parse_tree__prog_io_util__Args_48, &parse_tree__prog_io_util__ArgTerms_49);
              }
#line 613 "prog_io_util.m"
              if ((parse_tree__prog_io_util__MaybeRet_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 614 "prog_io_util.m"
                {
#line 615 "prog_io_util.m"
                  {
#line 615 "prog_io_util.m"
                    parse_tree__prog_io_util__Term2_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 615 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_22, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[2]));
#line 615 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_22, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTerms_49));
#line 615 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_22, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_5));
#line 615 "prog_io_util.m"
                  }
#line 614 "prog_io_util.m"
                }
#line 613 "prog_io_util.m"
              else
#line 608 "prog_io_util.m"
                {
#line 608 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__Ret_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeRet_15, (MR_Integer) 0)));
#line 608 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__Term1_20;
#line 608 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__RetTerm_21;
#line 608 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_42_42;
#line 608 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_43_43;

#line 609 "prog_io_util.m"
                  {
#line 609 "prog_io_util.m"
                    parse_tree__prog_io_util__Term1_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 609 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_20, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[3]));
#line 609 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_20, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTerms_49));
#line 609 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_20, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_5));
#line 609 "prog_io_util.m"
                  }
#line 611 "prog_io_util.m"
                  {
#line 611 "prog_io_util.m"
                    parse_tree__prog_io_util__unparse_type_2_p_0(parse_tree__prog_io_util__Ret_18, &parse_tree__prog_io_util__RetTerm_21);
                  }
#line 612 "prog_io_util.m"
                  {
#line 612 "prog_io_util.m"
                    parse_tree__prog_io_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 612 "prog_io_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_util__RetTerm_21));
#line 612 "prog_io_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 612 "prog_io_util.m"
                  }
#line 612 "prog_io_util.m"
                  {
#line 612 "prog_io_util.m"
                    parse_tree__prog_io_util__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 612 "prog_io_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_util__Term1_20));
#line 612 "prog_io_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_42_42, 1) = ((MR_Box) (parse_tree__prog_io_util__V_43_43));
#line 612 "prog_io_util.m"
                  }
#line 612 "prog_io_util.m"
                  {
#line 612 "prog_io_util.m"
                    parse_tree__prog_io_util__Term2_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 612 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_22, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[4]));
#line 612 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_22, 1) = ((MR_Box) (parse_tree__prog_io_util__V_42_42));
#line 612 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_22, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_5));
#line 612 "prog_io_util.m"
                  }
#line 608 "prog_io_util.m"
                }
#line 657 "prog_io_util.m"
#line 657 "prog_io_util.m"
              switch (parse_tree__prog_io_util__Purity_16) {
#line 657 "prog_io_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 657 "prog_io_util.m"
                case (MR_Integer) 2:
#line 661 "prog_io_util.m"
                  {
#line 661 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Context_72;
#line 661 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_75_75;

#line 662 "prog_io_util.m"
                    {
#line 662 "prog_io_util.m"
                      parse_tree__prog_io_util__Context_72 = mercury__term__context_init_0_f_0();
                    }
#line 663 "prog_io_util.m"
                    {
#line 663 "prog_io_util.m"
                      parse_tree__prog_io_util__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 663 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_util__Term2_22));
#line 663 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 663 "prog_io_util.m"
                    }
#line 663 "prog_io_util.m"
                    {
#line 663 "prog_io_util.m"
                      MR_Word base;
#line 663 "prog_io_util.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 663 "prog_io_util.m"
                      *parse_tree__prog_io_util__Term_4 = base;
#line 663 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[5]));
#line 663 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_75_75));
#line 663 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_72));
#line 663 "prog_io_util.m"
                    }
#line 661 "prog_io_util.m"
                  }
#line 657 "prog_io_util.m"
                  break;
#line 657 "prog_io_util.m"
                case (MR_Integer) 0:
#line 657 "prog_io_util.m"
                  *parse_tree__prog_io_util__Term_4 = parse_tree__prog_io_util__Term2_22;
#line 657 "prog_io_util.m"
                  break;
#line 657 "prog_io_util.m"
                case (MR_Integer) 1:
#line 658 "prog_io_util.m"
                  {
#line 658 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Context_65;
#line 658 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_68_68;

#line 659 "prog_io_util.m"
                    {
#line 659 "prog_io_util.m"
                      parse_tree__prog_io_util__Context_65 = mercury__term__context_init_0_f_0();
                    }
#line 660 "prog_io_util.m"
                    {
#line 660 "prog_io_util.m"
                      parse_tree__prog_io_util__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_util__Term2_22));
#line 660 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 660 "prog_io_util.m"
                    }
#line 660 "prog_io_util.m"
                    {
#line 660 "prog_io_util.m"
                      MR_Word base;
#line 660 "prog_io_util.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 660 "prog_io_util.m"
                      *parse_tree__prog_io_util__Term_4 = base;
#line 660 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[6]));
#line 660 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_68_68));
#line 660 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_65));
#line 660 "prog_io_util.m"
                    }
#line 658 "prog_io_util.m"
                  }
#line 657 "prog_io_util.m"
                  break;
#line 657 "prog_io_util.m"
              }
#line 605 "prog_io_util.m"
            }
#line 596 "prog_io_util.m"
            break;
#line 596 "prog_io_util.m"
          case (MR_Integer) 2:
#line 624 "prog_io_util.m"
            {
#line 624 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_32_32;
#line 624 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_33_33;
#line 624 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__TVar_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 1)));
#line 624 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Var_53;
#line 624 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Args_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 2)));
#line 624 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__ArgTerms_55;
#line 624 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 3)));

#line 625 "prog_io_util.m"
              {
#line 625 "prog_io_util.m"
                parse_tree__prog_io_util__Var_53 = mercury__term__coerce_var_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__TVar_52);
              }
#line 626 "prog_io_util.m"
              {
#line 626 "prog_io_util.m"
                parse_tree__prog_io_util__unparse_type_list_2_p_0(parse_tree__prog_io_util__Args_54, &parse_tree__prog_io_util__ArgTerms_55);
              }
#line 628 "prog_io_util.m"
              {
#line 628 "prog_io_util.m"
                parse_tree__prog_io_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 628 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_util__Var_53));
#line 628 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io_util__Context_5));
#line 628 "prog_io_util.m"
              }
#line 628 "prog_io_util.m"
              {
#line 628 "prog_io_util.m"
                parse_tree__prog_io_util__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 628 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io_util__V_33_33));
#line 628 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_32_32, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTerms_55));
#line 628 "prog_io_util.m"
              }
#line 627 "prog_io_util.m"
              {
#line 627 "prog_io_util.m"
                MR_Word base;
#line 627 "prog_io_util.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 627 "prog_io_util.m"
                *parse_tree__prog_io_util__Term_4 = base;
#line 627 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[1]));
#line 627 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_32_32));
#line 627 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_5));
#line 627 "prog_io_util.m"
              }
#line 624 "prog_io_util.m"
            }
#line 596 "prog_io_util.m"
            break;
#line 596 "prog_io_util.m"
          case (MR_Integer) 3:
#line 630 "prog_io_util.m"
            {
#line 631 "prog_io_util.m"
              {
#line 631 "prog_io_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_io_util", (MR_String) "predicate \140parse_tree.prog_io_util.unparse_type\'/2", (MR_String) "kind annotation");
#line 631 "prog_io_util.m"
                return;
              }
#line 630 "prog_io_util.m"
            }
#line 596 "prog_io_util.m"
            break;
#line 596 "prog_io_util.m"
        }
#line 596 "prog_io_util.m"
        break;
#line 596 "prog_io_util.m"
    }
#line 590 "prog_io_util.m"
  }
#line 116 "prog_io_util.m"
}

#line 114 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__is_known_type_name_1_p_0(
#line 114 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Name_2)
#line 114 "prog_io_util.m"
{
#line 426 "prog_io_util.m"
  {
#line 426 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 426 "prog_io_util.m"
    {
#line 426 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_3_3;

#line 426 "prog_io_util.m"
      {
#line 426 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_116_121_112_101_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_util__Name_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_3_3);
      }
#line 426 "prog_io_util.m"
    }
#line 426 "prog_io_util.m"
    if (!(parse_tree__prog_io_util__succeeded))
#line 433 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Name_2, (MR_String) "func") == 0);
#line 426 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 426 "prog_io_util.m"
  }
#line 114 "prog_io_util.m"
}

#line 111 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_types_4_p_0(
#line 111 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Terms_5,
#line 111 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 111 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_7,
#line 111 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_8)
#line 111 "prog_io_util.m"
{
#line 551 "prog_io_util.m"
  {
#line 551 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 551 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__RevTypes_9;
#line 551 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Specs_10;

#line 552 "prog_io_util.m"
    {
#line 552 "prog_io_util.m"
      parse_tree__prog_io_util__parse_types_acc_7_p_0(parse_tree__prog_io_util__Terms_5, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__RevTypes_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__Specs_10);
    }
#line 556 "prog_io_util.m"
    if ((parse_tree__prog_io_util__Specs_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 554 "prog_io_util.m"
      {
#line 554 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_15_15;

#line 555 "prog_io_util.m"
        {
#line 555 "prog_io_util.m"
          parse_tree__prog_io_util__V_15_15 = mercury__list__reverse_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_io_util__RevTypes_9);
        }
#line 555 "prog_io_util.m"
        {
#line 555 "prog_io_util.m"
          MR_Word base;
#line 555 "prog_io_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 555 "prog_io_util.m"
          *parse_tree__prog_io_util__Result_8 = base;
#line 555 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_15_15));
#line 555 "prog_io_util.m"
        }
#line 554 "prog_io_util.m"
      }
#line 556 "prog_io_util.m"
    else
#line 558 "prog_io_util.m"
      {
#line 558 "prog_io_util.m"
        MR_Word base;
#line 558 "prog_io_util.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 558 "prog_io_util.m"
        *parse_tree__prog_io_util__Result_8 = base;
#line 558 "prog_io_util.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Specs_10));
#line 558 "prog_io_util.m"
      }
#line 551 "prog_io_util.m"
  }
#line 111 "prog_io_util.m"
}

#line 109 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__maybe_parse_types_2_p_0(
#line 109 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 109 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Types_4)
#line 109 "prog_io_util.m"
{
#line 544 "prog_io_util.m"
  {
#line 544 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 544 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__VarSet_5;
#line 544 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_7_7;

#line 547 "prog_io_util.m"
    {
#line 547 "prog_io_util.m"
      parse_tree__prog_io_util__VarSet_5 = mercury__varset__init_0_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0);
    }
#line 549 "prog_io_util.m"
    {
#line 549 "prog_io_util.m"
      parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_util__Term_3, parse_tree__prog_io_util__VarSet_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_7_7);
    }
#line 549 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_7_7)) == (MR_mktag((MR_Integer) 1)));
#line 549 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 549 "prog_io_util.m"
      *parse_tree__prog_io_util__Types_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_7_7, (MR_Integer) 0)));
#line 544 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 544 "prog_io_util.m"
  }
#line 109 "prog_io_util.m"
}

#line 106 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_type_4_p_0(
#line 106 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_5,
#line 106 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 106 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_7,
#line 106 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_8)
#line 106 "prog_io_util.m"
{
#line 298 "prog_io_util.m"
  {
#line 298 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 298 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0))))
#line 302 "prog_io_util.m"
      {
#line 302 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Functor_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 302 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__ArgTerms_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 302 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));

#line 311 "prog_io_util.m"
#line 311 "prog_io_util.m"
        switch (MR_tag((MR_Word) parse_tree__prog_io_util__Functor_12)) {
#line 311 "prog_io_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 311 "prog_io_util.m"
          case (MR_Integer) 0:
#line 312 "prog_io_util.m"
            {
#line 312 "prog_io_util.m"
              MR_String parse_tree__prog_io_util__Name_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Functor_12, (MR_Integer) 0)));
#line 328 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__KnownTypeKind_22;

#line 315 "prog_io_util.m"
              {
#line 315 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_116_121_112_101_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_util__Name_21, parse_tree__prog_io_util__ArgTerms_13, &parse_tree__prog_io_util__KnownTypeKind_22);
              }
#line 328 "prog_io_util.m"
              if (parse_tree__prog_io_util__succeeded)
#line 319 "prog_io_util.m"
#line 319 "prog_io_util.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_util__KnownTypeKind_22)) {
#line 319 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 319 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 325 "prog_io_util.m"
                    {
#line 325 "prog_io_util.m"
                      *parse_tree__prog_io_util__Result_8 = parse_tree__prog_io_util__ill_formed_type_result_3_f_0(parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__Term_5);
                    }
#line 319 "prog_io_util.m"
                    break;
#line 319 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 317 "prog_io_util.m"
                    {
#line 317 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__KnownTypeKind_22, (MR_Integer) 0)));

#line 318 "prog_io_util.m"
                      {
#line 318 "prog_io_util.m"
                        MR_Word base;
#line 318 "prog_io_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 318 "prog_io_util.m"
                        *parse_tree__prog_io_util__Result_8 = base;
#line 318 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Type_23));
#line 318 "prog_io_util.m"
                      }
#line 317 "prog_io_util.m"
                    }
#line 319 "prog_io_util.m"
                    break;
#line 319 "prog_io_util.m"
                  case (MR_Integer) 2:
#line 320 "prog_io_util.m"
                    {
#line 320 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__CompoundTypeKind_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__KnownTypeKind_22, (MR_Integer) 0)));

#line 321 "prog_io_util.m"
                      {
#line 321 "prog_io_util.m"
                        parse_tree__prog_io_util__parse_compound_type_5_p_0(parse_tree__prog_io_util__Term_5, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__CompoundTypeKind_24, parse_tree__prog_io_util__Result_8);
#line 321 "prog_io_util.m"
                        return;
                      }
#line 320 "prog_io_util.m"
                    }
#line 319 "prog_io_util.m"
                    break;
#line 319 "prog_io_util.m"
                }
#line 328 "prog_io_util.m"
              else
#line 332 "prog_io_util.m"
                {
#line 332 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__NameResult_25;

#line 331 "prog_io_util.m"
                  {
#line 331 "prog_io_util.m"
                    parse_tree__prog_io_sym_name__parse_sym_name_and_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__Term_5, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__NameResult_25);
                  }
#line 345 "prog_io_util.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io_util__NameResult_25)) == (MR_mktag((MR_Integer) 0))))
#line 346 "prog_io_util.m"
                    {
#line 346 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__Specs_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__NameResult_25, (MR_Integer) 0)));

#line 347 "prog_io_util.m"
                      {
#line 347 "prog_io_util.m"
                        MR_Word base;
#line 347 "prog_io_util.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 347 "prog_io_util.m"
                        *parse_tree__prog_io_util__Result_8 = base;
#line 347 "prog_io_util.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Specs_35));
#line 347 "prog_io_util.m"
                      }
#line 346 "prog_io_util.m"
                    }
#line 345 "prog_io_util.m"
                  else
#line 334 "prog_io_util.m"
                    {
#line 334 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__SymName_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__NameResult_25, (MR_Integer) 0)));
#line 334 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__SymNameArgTerms_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__NameResult_25, (MR_Integer) 1)));
#line 334 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__SymNameArgsResult_28;

#line 335 "prog_io_util.m"
                      {
#line 335 "prog_io_util.m"
                        parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_util__SymNameArgTerms_27, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__SymNameArgsResult_28);
                      }
#line 341 "prog_io_util.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_io_util__SymNameArgsResult_28)) == (MR_mktag((MR_Integer) 0))))
#line 343 "prog_io_util.m"
                        *parse_tree__prog_io_util__Result_8 = (MR_Word) parse_tree__prog_io_util__SymNameArgsResult_28;
#line 341 "prog_io_util.m"
                      else
#line 338 "prog_io_util.m"
                        {
#line 338 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__ArgTypes_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__SymNameArgsResult_28, (MR_Integer) 0)));
#line 338 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_31_31;

#line 339 "prog_io_util.m"
                          {
#line 339 "prog_io_util.m"
                            parse_tree__prog_io_util__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 339 "prog_io_util.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_util__SymName_26));
#line 339 "prog_io_util.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_31_31, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTypes_29));
#line 339 "prog_io_util.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_31_31, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_31_31));
#line 339 "prog_io_util.m"
                          }
#line 338 "prog_io_util.m"
                        }
#line 334 "prog_io_util.m"
                    }
#line 332 "prog_io_util.m"
                }
#line 312 "prog_io_util.m"
            }
#line 311 "prog_io_util.m"
            break;
#line 311 "prog_io_util.m"
          case (MR_Integer) 1:
#line 311 "prog_io_util.m"
          case (MR_Integer) 2:
#line 310 "prog_io_util.m"
            {
#line 310 "prog_io_util.m"
              *parse_tree__prog_io_util__Result_8 = parse_tree__prog_io_util__ill_formed_type_result_3_f_0(parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__Term_5);
            }
#line 311 "prog_io_util.m"
            break;
#line 311 "prog_io_util.m"
          case (MR_Integer) 3:
#line 310 "prog_io_util.m"
            {
#line 310 "prog_io_util.m"
              *parse_tree__prog_io_util__Result_8 = parse_tree__prog_io_util__ill_formed_type_result_3_f_0(parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__Term_5);
            }
#line 311 "prog_io_util.m"
            break;
#line 311 "prog_io_util.m"
        }
#line 302 "prog_io_util.m"
      }
#line 298 "prog_io_util.m"
    else
#line 298 "prog_io_util.m"
      {
#line 298 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 298 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Var_11;
#line 298 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_33_33;
#line 298 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));

#line 299 "prog_io_util.m"
        {
#line 299 "prog_io_util.m"
          mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_util__Var0_9, &parse_tree__prog_io_util__Var_11);
        }
#line 300 "prog_io_util.m"
        {
#line 300 "prog_io_util.m"
          parse_tree__prog_io_util__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 300 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_util__Var_11));
#line 300 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 300 "prog_io_util.m"
        }
#line 300 "prog_io_util.m"
        {
#line 300 "prog_io_util.m"
          MR_Word base;
#line 300 "prog_io_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 300 "prog_io_util.m"
          *parse_tree__prog_io_util__Result_8 = base;
#line 300 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_33_33));
#line 300 "prog_io_util.m"
        }
#line 298 "prog_io_util.m"
      }
#line 298 "prog_io_util.m"
  }
#line 106 "prog_io_util.m"
}

#line 104 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__maybe_parse_type_2_p_0(
#line 104 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 104 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Type_4)
#line 104 "prog_io_util.m"
{
#line 287 "prog_io_util.m"
  {
#line 287 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 287 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__VarSet_5;
#line 287 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_7_7;

#line 290 "prog_io_util.m"
    {
#line 290 "prog_io_util.m"
      parse_tree__prog_io_util__VarSet_5 = mercury__varset__init_0_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0);
    }
#line 292 "prog_io_util.m"
    {
#line 292 "prog_io_util.m"
      parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_util__Term_3, parse_tree__prog_io_util__VarSet_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_7_7);
    }
#line 292 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_7_7)) == (MR_mktag((MR_Integer) 1)));
#line 292 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 292 "prog_io_util.m"
      *parse_tree__prog_io_util__Type_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_7_7, (MR_Integer) 0)));
#line 287 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 287 "prog_io_util.m"
  }
#line 104 "prog_io_util.m"
}

#line 100 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_pred_or_func_and_args_general_5_p_0(
#line 100 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for__T_28,
#line 100 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__MaybeModuleName_6,
#line 100 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__PredAndArgsTerm_7,
#line 100 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_8,
#line 100 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_9,
#line 100 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__PredAndArgsResult_10)
#line 100 "prog_io_util.m"
{
#line 258 "prog_io_util.m"
  {
#line 258 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredAndArgsTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 258 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FunctorTerm_14;
#line 258 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__MaybeFuncResult_15;
#line 258 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__GenericVarSet_16;
#line 258 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Result_18;
#line 265 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FuncAndArgsTerm_11;
#line 265 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FuncResultTerm_12;
#line 260 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_22_22;
#line 260 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_23_23;
#line 260 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_24_24;
#line 260 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_25_25;
#line 260 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_26_26;
#line 260 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;

#line 260 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 260 "prog_io_util.m"
      {
#line 260 "prog_io_util.m"
        parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_7, (MR_Integer) 0)));
#line 260 "prog_io_util.m"
        parse_tree__prog_io_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_7, (MR_Integer) 1)));
#line 260 "prog_io_util.m"
        parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_7, (MR_Integer) 2)));
#line 260 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_22_22)) == (MR_mktag((MR_Integer) 0)));
#line 260 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 260 "prog_io_util.m"
          {
#line 260 "prog_io_util.m"
            parse_tree__prog_io_util__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_22_22, (MR_Integer) 0)));
#line 260 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_23_23, (MR_String) "=") == 0);
#line 260 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 260 "prog_io_util.m"
              {
#line 261 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 261 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 261 "prog_io_util.m"
                  {
#line 261 "prog_io_util.m"
                    parse_tree__prog_io_util__FuncAndArgsTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_24_24, (MR_Integer) 0)));
#line 261 "prog_io_util.m"
                    parse_tree__prog_io_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_24_24, (MR_Integer) 1)));
#line 261 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 261 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 261 "prog_io_util.m"
                      {
#line 261 "prog_io_util.m"
                        parse_tree__prog_io_util__FuncResultTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_25_25, (MR_Integer) 0)));
#line 261 "prog_io_util.m"
                        parse_tree__prog_io_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_25_25, (MR_Integer) 1)));
#line 261 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 261 "prog_io_util.m"
                      }
#line 261 "prog_io_util.m"
                  }
#line 260 "prog_io_util.m"
              }
#line 260 "prog_io_util.m"
          }
#line 260 "prog_io_util.m"
      }
#line 265 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 263 "prog_io_util.m"
      {
#line 263 "prog_io_util.m"
        parse_tree__prog_io_util__FunctorTerm_14 = parse_tree__prog_io_util__FuncAndArgsTerm_11;
#line 264 "prog_io_util.m"
        {
#line 264 "prog_io_util.m"
          parse_tree__prog_io_util__MaybeFuncResult_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 264 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeFuncResult_15, 0) = ((MR_Box) (parse_tree__prog_io_util__FuncResultTerm_12));
#line 264 "prog_io_util.m"
        }
#line 263 "prog_io_util.m"
      }
#line 265 "prog_io_util.m"
    else
#line 266 "prog_io_util.m"
      {
#line 266 "prog_io_util.m"
        parse_tree__prog_io_util__FunctorTerm_14 = parse_tree__prog_io_util__PredAndArgsTerm_7;
#line 267 "prog_io_util.m"
        parse_tree__prog_io_util__MaybeFuncResult_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 266 "prog_io_util.m"
      }
#line 269 "prog_io_util.m"
    {
#line 269 "prog_io_util.m"
      mercury__varset__coerce_2_p_0(parse_tree__prog_io_util__TypeInfo_for__T_28, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__VarSet_8, &parse_tree__prog_io_util__GenericVarSet_16);
    }
#line 274 "prog_io_util.m"
    if ((parse_tree__prog_io_util__MaybeModuleName_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 276 "prog_io_util.m"
      {
#line 276 "prog_io_util.m"
        parse_tree__prog_io_sym_name__parse_sym_name_and_args_4_p_0(parse_tree__prog_io_util__TypeInfo_for__T_28, parse_tree__prog_io_util__FunctorTerm_14, parse_tree__prog_io_util__GenericVarSet_16, parse_tree__prog_io_util__ContextPieces_9, &parse_tree__prog_io_util__Result_18);
      }
#line 274 "prog_io_util.m"
    else
#line 271 "prog_io_util.m"
      {
#line 271 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeModuleName_6, (MR_Integer) 0)));

#line 272 "prog_io_util.m"
        {
#line 272 "prog_io_util.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_util__TypeInfo_for__T_28, parse_tree__prog_io_util__ModuleName_17, parse_tree__prog_io_util__FunctorTerm_14, parse_tree__prog_io_util__GenericVarSet_16, parse_tree__prog_io_util__ContextPieces_9, &parse_tree__prog_io_util__Result_18);
        }
#line 271 "prog_io_util.m"
      }
#line 282 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__Result_18)) == (MR_mktag((MR_Integer) 0))))
#line 284 "prog_io_util.m"
      *parse_tree__prog_io_util__PredAndArgsResult_10 = (MR_Word) parse_tree__prog_io_util__Result_18;
#line 282 "prog_io_util.m"
    else
#line 280 "prog_io_util.m"
      {
#line 280 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__SymName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Result_18, (MR_Integer) 0)));
#line 280 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Result_18, (MR_Integer) 1)));
#line 280 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_27_27;

#line 281 "prog_io_util.m"
        {
#line 281 "prog_io_util.m"
          parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 281 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_util__Args_20));
#line 281 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io_util__MaybeFuncResult_15));
#line 281 "prog_io_util.m"
        }
#line 281 "prog_io_util.m"
        {
#line 281 "prog_io_util.m"
          MR_Word base;
#line 281 "prog_io_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 281 "prog_io_util.m"
          *parse_tree__prog_io_util__PredAndArgsResult_10 = base;
#line 281 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__SymName_19));
#line 281 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
#line 281 "prog_io_util.m"
        }
#line 280 "prog_io_util.m"
      }
#line 258 "prog_io_util.m"
  }
#line 100 "prog_io_util.m"
}

#line 97 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__parse_pred_or_func_and_args_4_p_0(
#line 97 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for__T_20,
#line 97 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__PredAndArgsTerm_5,
#line 97 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__PredOrFunc_6,
#line 97 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__SymName_7,
#line 97 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__ArgTerms_8)
#line 97 "prog_io_util.m"
{
#line 252 "prog_io_util.m"
  {
#line 252 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredAndArgsTerm_5)) == (MR_mktag((MR_Integer) 0)));
#line 252 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FuncAndArgsTerm_9;
#line 252 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_16_16;
#line 246 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 246 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_14_14;
#line 246 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_15_15;
#line 246 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_17_17;
#line 246 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;
#line 247 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FuncResultTerm_10;

#line 246 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 246 "prog_io_util.m"
      {
#line 246 "prog_io_util.m"
        parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_5, (MR_Integer) 0)));
#line 246 "prog_io_util.m"
        parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_5, (MR_Integer) 1)));
#line 246 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_5, (MR_Integer) 2)));
#line 246 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 246 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 246 "prog_io_util.m"
          {
#line 246 "prog_io_util.m"
            parse_tree__prog_io_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_13_13, (MR_Integer) 0)));
#line 246 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_14_14, (MR_String) "=") == 0);
#line 246 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 246 "prog_io_util.m"
              {
#line 247 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 247 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 247 "prog_io_util.m"
                  {
#line 247 "prog_io_util.m"
                    parse_tree__prog_io_util__FuncAndArgsTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 0)));
#line 247 "prog_io_util.m"
                    parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 1)));
#line 247 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 247 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 247 "prog_io_util.m"
                      {
#line 247 "prog_io_util.m"
                        parse_tree__prog_io_util__FuncResultTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
#line 247 "prog_io_util.m"
                        parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
#line 247 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 247 "prog_io_util.m"
                      }
#line 247 "prog_io_util.m"
                  }
#line 246 "prog_io_util.m"
              }
#line 246 "prog_io_util.m"
          }
#line 246 "prog_io_util.m"
      }
#line 252 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 249 "prog_io_util.m"
      {
#line 249 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TypeCtorInfo_21_21;
#line 249 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TypeInfo_22_22;
#line 249 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__ArgTerms0_12;
#line 251 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__conv0_ArgTerms_8;

#line 249 "prog_io_util.m"
        {
#line 249 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0(parse_tree__prog_io_util__TypeInfo_for__T_20, parse_tree__prog_io_util__FuncAndArgsTerm_9, parse_tree__prog_io_util__SymName_7, &parse_tree__prog_io_util__ArgTerms0_12);
        }
#line 249 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 249 "prog_io_util.m"
          {
#line 250 "prog_io_util.m"
            *parse_tree__prog_io_util__PredOrFunc_6 = (MR_Integer) 1;
#line 17080 "parse_tree.prog_io_util.c"
            parse_tree__prog_io_util__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 17082 "parse_tree.prog_io_util.c"
            {
#line 17084 "parse_tree.prog_io_util.c"
              parse_tree__prog_io_util__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 17086 "parse_tree.prog_io_util.c"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_22_22, 0) = ((MR_Box) (parse_tree__prog_io_util__TypeCtorInfo_21_21));
#line 17088 "parse_tree.prog_io_util.c"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_22_22, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for__T_20));
#line 17090 "parse_tree.prog_io_util.c"
            }
#line 251 "prog_io_util.m"
            {
#line 251 "prog_io_util.m"
              parse_tree__prog_io_util__conv0_ArgTerms_8 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_util__TypeInfo_22_22, (MR_Word) parse_tree__prog_io_util__ArgTerms0_12, (MR_Word) parse_tree__prog_io_util__V_16_16);
            }
#line 251 "prog_io_util.m"
            *parse_tree__prog_io_util__ArgTerms_8 = (MR_Word) parse_tree__prog_io_util__conv0_ArgTerms_8;
#line 251 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 249 "prog_io_util.m"
          }
#line 249 "prog_io_util.m"
      }
#line 252 "prog_io_util.m"
    else
#line 253 "prog_io_util.m"
      {
#line 253 "prog_io_util.m"
        {
#line 253 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0(parse_tree__prog_io_util__TypeInfo_for__T_20, parse_tree__prog_io_util__PredAndArgsTerm_5, parse_tree__prog_io_util__SymName_7, parse_tree__prog_io_util__ArgTerms_8);
        }
#line 253 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 253 "prog_io_util.m"
          {
#line 254 "prog_io_util.m"
            *parse_tree__prog_io_util__PredOrFunc_6 = (MR_Integer) 0;
#line 254 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 253 "prog_io_util.m"
          }
#line 253 "prog_io_util.m"
      }
#line 252 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 252 "prog_io_util.m"
  }
#line 97 "prog_io_util.m"
}

#line 94 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__parse_pred_or_func_name_and_arity_4_p_0(
#line 94 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_17,
#line 94 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__PorFPredAndArityTerm_5,
#line 94 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__PredOrFunc_6,
#line 94 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__SymName_7,
#line 94 "prog_io_util.m"
  MR_Integer * parse_tree__prog_io_util__Arity_8)
#line 94 "prog_io_util.m"
{
#line 235 "prog_io_util.m"
  {
#line 235 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PorFPredAndArityTerm_5)) == (MR_mktag((MR_Integer) 0)));
#line 235 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__PredOrFuncStr_9;
#line 235 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Args_10;
#line 235 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Arg_12;
#line 235 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__ModuleName_13;
#line 235 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_14_14;
#line 235 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_15_15;
#line 235 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_16_16;
#line 236 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;

#line 236 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 236 "prog_io_util.m"
      {
#line 236 "prog_io_util.m"
        parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PorFPredAndArityTerm_5, (MR_Integer) 0)));
#line 236 "prog_io_util.m"
        parse_tree__prog_io_util__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PorFPredAndArityTerm_5, (MR_Integer) 1)));
#line 236 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PorFPredAndArityTerm_5, (MR_Integer) 2)));
#line 236 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_14_14)) == (MR_mktag((MR_Integer) 0)));
#line 236 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 236 "prog_io_util.m"
          {
#line 236 "prog_io_util.m"
            parse_tree__prog_io_util__PredOrFuncStr_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_14_14, (MR_Integer) 0)));
#line 238 "prog_io_util.m"
            if ((strcmp(parse_tree__prog_io_util__PredOrFuncStr_9, (MR_String) "func") == 0))
#line 238 "prog_io_util.m"
              {
#line 238 "prog_io_util.m"
                *parse_tree__prog_io_util__PredOrFunc_6 = (MR_Integer) 1;
#line 238 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 238 "prog_io_util.m"
              }
#line 238 "prog_io_util.m"
            else
#line 238 "prog_io_util.m"
            if ((strcmp(parse_tree__prog_io_util__PredOrFuncStr_9, (MR_String) "pred") == 0))
#line 237 "prog_io_util.m"
              {
#line 237 "prog_io_util.m"
                *parse_tree__prog_io_util__PredOrFunc_6 = (MR_Integer) 0;
#line 237 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 237 "prog_io_util.m"
              }
#line 238 "prog_io_util.m"
            else
#line 238 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 235 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 235 "prog_io_util.m"
              {
#line 240 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args_10)) == (MR_mktag((MR_Integer) 1)));
#line 240 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 240 "prog_io_util.m"
                  {
#line 240 "prog_io_util.m"
                    parse_tree__prog_io_util__Arg_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_10, (MR_Integer) 0)));
#line 240 "prog_io_util.m"
                    parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_10, (MR_Integer) 1)));
#line 240 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 235 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 235 "prog_io_util.m"
                      {
#line 241 "prog_io_util.m"
                        parse_tree__prog_io_util__V_16_16 = (MR_String) "";
#line 241 "prog_io_util.m"
                        parse_tree__prog_io_util__ModuleName_13 = (MR_Word) &parse_tree__prog_io_util_scalar_common_3[1];
#line 242 "prog_io_util.m"
                        {
#line 242 "prog_io_util.m"
                          return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_name_and_arity_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_17, parse_tree__prog_io_util__ModuleName_13, parse_tree__prog_io_util__Arg_12, parse_tree__prog_io_util__SymName_7, parse_tree__prog_io_util__Arity_8);
                        }
#line 235 "prog_io_util.m"
                      }
#line 240 "prog_io_util.m"
                  }
#line 235 "prog_io_util.m"
              }
#line 236 "prog_io_util.m"
          }
#line 236 "prog_io_util.m"
      }
#line 235 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 235 "prog_io_util.m"
  }
#line 94 "prog_io_util.m"
}

#line 91 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__parse_name_and_arity_unqualified_3_p_0(
#line 91 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
#line 91 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__PredAndArityTerm_4,
#line 91 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__SymName_5,
#line 91 "prog_io_util.m"
  MR_Integer * parse_tree__prog_io_util__Arity_6)
#line 91 "prog_io_util.m"
{
#line 231 "prog_io_util.m"
  {
#line 231 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 232 "prog_io_util.m"
    {
#line 232 "prog_io_util.m"
      return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_name_and_arity_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_9, (MR_Word) &parse_tree__prog_io_util_scalar_common_3[1], parse_tree__prog_io_util__PredAndArityTerm_4, parse_tree__prog_io_util__SymName_5, parse_tree__prog_io_util__Arity_6);
    }
#line 231 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 231 "prog_io_util.m"
  }
#line 91 "prog_io_util.m"
}

#line 88 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__parse_name_and_arity_4_p_0(
#line 88 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_20,
#line 88 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ModuleName_5,
#line 88 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__PredAndArityTerm_6,
#line 88 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__SymName_7,
#line 88 "prog_io_util.m"
  MR_Integer * parse_tree__prog_io_util__Arity_8)
#line 88 "prog_io_util.m"
{
#line 224 "prog_io_util.m"
  {
#line 224 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredAndArityTerm_6)) == (MR_mktag((MR_Integer) 0)));
#line 224 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__PredNameTerm_9;
#line 224 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__ArityTerm_10;
#line 224 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 224 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_14_14;
#line 224 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_15_15;
#line 224 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_16_16;
#line 224 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_17_17;
#line 224 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_18_18;
#line 224 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_19_19;
#line 225 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;
#line 229 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_12_12;

#line 225 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 225 "prog_io_util.m"
      {
#line 225 "prog_io_util.m"
        parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArityTerm_6, (MR_Integer) 0)));
#line 225 "prog_io_util.m"
        parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArityTerm_6, (MR_Integer) 1)));
#line 225 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArityTerm_6, (MR_Integer) 2)));
#line 225 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 225 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 225 "prog_io_util.m"
          {
#line 225 "prog_io_util.m"
            parse_tree__prog_io_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_13_13, (MR_Integer) 0)));
#line 225 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_14_14, (MR_String) "/") == 0);
#line 224 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 224 "prog_io_util.m"
              {
#line 226 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 226 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 226 "prog_io_util.m"
                  {
#line 226 "prog_io_util.m"
                    parse_tree__prog_io_util__PredNameTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 0)));
#line 226 "prog_io_util.m"
                    parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 1)));
#line 226 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 226 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 226 "prog_io_util.m"
                      {
#line 226 "prog_io_util.m"
                        parse_tree__prog_io_util__ArityTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
#line 226 "prog_io_util.m"
                        parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
#line 226 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 224 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 224 "prog_io_util.m"
                          {
#line 227 "prog_io_util.m"
                            {
#line 227 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_implicitly_qualified_sym_name_and_no_args_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_20, parse_tree__prog_io_util__ModuleName_5, parse_tree__prog_io_util__PredNameTerm_9, parse_tree__prog_io_util__SymName_7);
                            }
#line 224 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 224 "prog_io_util.m"
                              {
#line 229 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__ArityTerm_10)) == (MR_mktag((MR_Integer) 0)));
#line 229 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 229 "prog_io_util.m"
                                  {
#line 229 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__ArityTerm_10, (MR_Integer) 0)));
#line 229 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__ArityTerm_10, (MR_Integer) 1)));
#line 229 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__ArityTerm_10, (MR_Integer) 2)));
#line 229 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 229 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 229 "prog_io_util.m"
                                      {
#line 229 "prog_io_util.m"
                                        *parse_tree__prog_io_util__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, (MR_Integer) 0)));
#line 229 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 229 "prog_io_util.m"
                                      }
#line 229 "prog_io_util.m"
                                  }
#line 224 "prog_io_util.m"
                              }
#line 224 "prog_io_util.m"
                          }
#line 226 "prog_io_util.m"
                      }
#line 226 "prog_io_util.m"
                  }
#line 224 "prog_io_util.m"
              }
#line 225 "prog_io_util.m"
          }
#line 225 "prog_io_util.m"
      }
#line 224 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 224 "prog_io_util.m"
  }
#line 88 "prog_io_util.m"
}

#line 83 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_vars_and_state_vars_4_p_0(
#line 83 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_96,
#line 83 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_5,
#line 83 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 83 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_7,
#line 83 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__MaybeVars_8)
#line 83 "prog_io_util.m"
{
#line 1389 "prog_io_util.m"
  {
#line 1389 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1387 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_40_40;
#line 1387 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_41_41;
#line 1387 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_42_42;
#line 1387 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 1387 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1387 "prog_io_util.m"
      {
#line 1387 "prog_io_util.m"
        parse_tree__prog_io_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 1387 "prog_io_util.m"
        parse_tree__prog_io_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 1387 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 1387 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1387 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1387 "prog_io_util.m"
          {
#line 1387 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_40_40)) == (MR_mktag((MR_Integer) 0)));
#line 1387 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1387 "prog_io_util.m"
              {
#line 1387 "prog_io_util.m"
                parse_tree__prog_io_util__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_40_40, (MR_Integer) 0)));
#line 1387 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_41_41, (MR_String) "[]") == 0);
#line 1387 "prog_io_util.m"
              }
#line 1387 "prog_io_util.m"
          }
#line 1387 "prog_io_util.m"
      }
#line 1389 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1388 "prog_io_util.m"
      {
#line 1388 "prog_io_util.m"
        *parse_tree__prog_io_util__MaybeVars_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_4[0]);
#line 1388 "prog_io_util.m"
      }
#line 1389 "prog_io_util.m"
    else
#line 1483 "prog_io_util.m"
      {
#line 1483 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__HeadTerm_10;
#line 1483 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Tail_11;
#line 1389 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_47_47;
#line 1389 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_48_48;
#line 1389 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_49_49;
#line 1389 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_50_50;
#line 1389 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_51_51;
#line 1389 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_12_12;

#line 1389 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1389 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1389 "prog_io_util.m"
          {
#line 1389 "prog_io_util.m"
            parse_tree__prog_io_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 1389 "prog_io_util.m"
            parse_tree__prog_io_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 1389 "prog_io_util.m"
            parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 1389 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_47_47)) == (MR_mktag((MR_Integer) 0)));
#line 1389 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1389 "prog_io_util.m"
              {
#line 1389 "prog_io_util.m"
                parse_tree__prog_io_util__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_47_47, (MR_Integer) 0)));
#line 1389 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_48_48, (MR_String) "[|]") == 0);
#line 1389 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1389 "prog_io_util.m"
                  {
#line 1389 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_49_49)) == (MR_mktag((MR_Integer) 1)));
#line 1389 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1389 "prog_io_util.m"
                      {
#line 1389 "prog_io_util.m"
                        parse_tree__prog_io_util__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_49_49, (MR_Integer) 0)));
#line 1389 "prog_io_util.m"
                        parse_tree__prog_io_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_49_49, (MR_Integer) 1)));
#line 1389 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_50_50)) == (MR_mktag((MR_Integer) 1)));
#line 1389 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1389 "prog_io_util.m"
                          {
#line 1389 "prog_io_util.m"
                            parse_tree__prog_io_util__Tail_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_50_50, (MR_Integer) 0)));
#line 1389 "prog_io_util.m"
                            parse_tree__prog_io_util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_50_50, (MR_Integer) 1)));
#line 1389 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_51_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1389 "prog_io_util.m"
                          }
#line 1389 "prog_io_util.m"
                      }
#line 1389 "prog_io_util.m"
                  }
#line 1389 "prog_io_util.m"
              }
#line 1389 "prog_io_util.m"
          }
#line 1483 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1410 "prog_io_util.m"
          {
#line 1410 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__MaybeHeadVar_23;
#line 1410 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__MaybeTailVars_25;
#line 1406 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__VarKind0_15;
#line 1478 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__VarKind_26;
#line 1478 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TailVars_27;
#line 1478 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TailStateVars_28;
#line 1478 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TailDotVars_29;
#line 1478 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TailColonVars_30;

#line 1394 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadTerm_10)) == (MR_mktag((MR_Integer) 0))))
#line 1394 "prog_io_util.m"
              {
#line 1394 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));
#line 1394 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 1394 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_127_127;
#line 1394 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_128_128;
#line 1394 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__V_129_129;
#line 1394 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_131_131;
#line 1395 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 2)));
#line 1395 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_130_130;

#line 1395 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_125_125)) == (MR_mktag((MR_Integer) 1)));
#line 1395 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1395 "prog_io_util.m"
                  {
#line 1395 "prog_io_util.m"
                    parse_tree__prog_io_util__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_125_125, (MR_Integer) 0)));
#line 1395 "prog_io_util.m"
                    parse_tree__prog_io_util__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_125_125, (MR_Integer) 1)));
#line 1395 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_127_127 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1394 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1394 "prog_io_util.m"
                      {
#line 1395 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_126_126)) == (MR_mktag((MR_Integer) 0)));
#line 1395 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1395 "prog_io_util.m"
                          {
#line 1395 "prog_io_util.m"
                            parse_tree__prog_io_util__V_129_129 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_126_126, (MR_Integer) 0)));
#line 1395 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_128_128)) == (MR_mktag((MR_Integer) 1)));
#line 1395 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1395 "prog_io_util.m"
                              {
#line 1395 "prog_io_util.m"
                                parse_tree__prog_io_util__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_128_128, (MR_Integer) 0)));
#line 1395 "prog_io_util.m"
                                parse_tree__prog_io_util__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_128_128, (MR_Integer) 1)));
#line 1394 "prog_io_util.m"
                                if ((strcmp(parse_tree__prog_io_util__V_129_129, (MR_String) "!") == 0))
#line 1396 "prog_io_util.m"
                                  {
#line 1396 "prog_io_util.m"
                                    {
#line 1396 "prog_io_util.m"
                                      parse_tree__prog_io_util__VarKind0_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1396 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarKind0_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_131_131));
#line 1396 "prog_io_util.m"
                                    }
#line 1396 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1396 "prog_io_util.m"
                                  }
#line 1394 "prog_io_util.m"
                                else
#line 1394 "prog_io_util.m"
                                if ((strcmp(parse_tree__prog_io_util__V_129_129, (MR_String) "!.") == 0))
#line 1399 "prog_io_util.m"
                                  {
#line 1399 "prog_io_util.m"
                                    {
#line 1399 "prog_io_util.m"
                                      parse_tree__prog_io_util__VarKind0_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1399 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__VarKind0_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_131_131));
#line 1399 "prog_io_util.m"
                                    }
#line 1399 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1399 "prog_io_util.m"
                                  }
#line 1394 "prog_io_util.m"
                                else
#line 1394 "prog_io_util.m"
                                if ((strcmp(parse_tree__prog_io_util__V_129_129, (MR_String) "!:") == 0))
#line 1402 "prog_io_util.m"
                                  {
#line 1402 "prog_io_util.m"
                                    {
#line 1402 "prog_io_util.m"
                                      parse_tree__prog_io_util__VarKind0_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1402 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__VarKind0_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_131_131));
#line 1402 "prog_io_util.m"
                                    }
#line 1402 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1402 "prog_io_util.m"
                                  }
#line 1394 "prog_io_util.m"
                                else
#line 1394 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 1395 "prog_io_util.m"
                              }
#line 1395 "prog_io_util.m"
                          }
#line 1394 "prog_io_util.m"
                      }
#line 1395 "prog_io_util.m"
                  }
#line 1394 "prog_io_util.m"
              }
#line 1394 "prog_io_util.m"
            else
#line 1392 "prog_io_util.m"
              {
#line 1392 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 1392 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));

#line 1393 "prog_io_util.m"
                {
#line 1393 "prog_io_util.m"
                  parse_tree__prog_io_util__VarKind0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1393 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__VarKind0_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V0_13));
#line 1393 "prog_io_util.m"
                }
#line 1392 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1392 "prog_io_util.m"
              }
#line 1406 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1405 "prog_io_util.m"
              {
#line 1405 "prog_io_util.m"
                parse_tree__prog_io_util__MaybeHeadVar_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1405 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeHeadVar_23, 0) = ((MR_Box) (parse_tree__prog_io_util__VarKind0_15));
#line 1405 "prog_io_util.m"
              }
#line 1406 "prog_io_util.m"
            else
#line 1408 "prog_io_util.m"
              {
#line 1408 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__HeadSpec_24;
#line 1408 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_68_68;

#line 1407 "prog_io_util.m"
                {
#line 1407 "prog_io_util.m"
                  parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "variable or state variable", parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__HeadSpec_24);
                }
#line 1409 "prog_io_util.m"
                {
#line 1409 "prog_io_util.m"
                  parse_tree__prog_io_util__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1409 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadSpec_24));
#line 1409 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1409 "prog_io_util.m"
                }
#line 1409 "prog_io_util.m"
                {
#line 1409 "prog_io_util.m"
                  parse_tree__prog_io_util__MaybeHeadVar_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1409 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__MaybeHeadVar_23, 0) = ((MR_Box) (parse_tree__prog_io_util__V_68_68));
#line 1409 "prog_io_util.m"
                }
#line 1408 "prog_io_util.m"
              }
#line 1411 "prog_io_util.m"
            {
#line 1411 "prog_io_util.m"
              parse_tree__prog_io_util__parse_vars_and_state_vars_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__Tail_11, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__MaybeTailVars_25);
            }
#line 1414 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeHeadVar_23)) == (MR_mktag((MR_Integer) 1)));
#line 1414 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1414 "prog_io_util.m"
              {
#line 1414 "prog_io_util.m"
                parse_tree__prog_io_util__VarKind_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeHeadVar_23, (MR_Integer) 0)));
#line 1415 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeTailVars_25)) == (MR_mktag((MR_Integer) 1)));
#line 1415 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1415 "prog_io_util.m"
                  {
#line 1415 "prog_io_util.m"
                    parse_tree__prog_io_util__TailVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeTailVars_25, (MR_Integer) 0)));
#line 1415 "prog_io_util.m"
                    parse_tree__prog_io_util__TailStateVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeTailVars_25, (MR_Integer) 1)));
#line 1415 "prog_io_util.m"
                    parse_tree__prog_io_util__TailDotVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeTailVars_25, (MR_Integer) 2)));
#line 1415 "prog_io_util.m"
                    parse_tree__prog_io_util__TailColonVars_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeTailVars_25, (MR_Integer) 3)));
#line 1415 "prog_io_util.m"
                  }
#line 1414 "prog_io_util.m"
              }
#line 1478 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1429 "prog_io_util.m"
#line 1429 "prog_io_util.m"
              switch (MR_tag((MR_Word) parse_tree__prog_io_util__VarKind_26)) {
#line 1429 "prog_io_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1429 "prog_io_util.m"
                case (MR_Integer) 0:
#line 1419 "prog_io_util.m"
                  {
#line 1419 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__VarKind_26, (MR_Integer) 0)));
#line 1420 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__TypeInfo_98_98;

#line 17838 "parse_tree.prog_io_util.c"
                    {
#line 17840 "parse_tree.prog_io_util.c"
                      parse_tree__prog_io_util__TypeInfo_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 17842 "parse_tree.prog_io_util.c"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_98_98, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 17844 "parse_tree.prog_io_util.c"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_98_98, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 17846 "parse_tree.prog_io_util.c"
                    }
#line 1420 "prog_io_util.m"
                    {
#line 1420 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_98_98, parse_tree__prog_io_util__V_31, parse_tree__prog_io_util__TailVars_27);
                    }
#line 1424 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1422 "prog_io_util.m"
                      {
#line 1422 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Spec_32;
#line 1422 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_76_76;

#line 1421 "prog_io_util.m"
                        {
#line 1421 "prog_io_util.m"
                          parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_32);
                        }
#line 1423 "prog_io_util.m"
                        {
#line 1423 "prog_io_util.m"
                          parse_tree__prog_io_util__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1423 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_32));
#line 1423 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1423 "prog_io_util.m"
                        }
#line 1423 "prog_io_util.m"
                        {
#line 1423 "prog_io_util.m"
                          MR_Word base;
#line 1423 "prog_io_util.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1423 "prog_io_util.m"
                          *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1423 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_76_76));
#line 1423 "prog_io_util.m"
                        }
#line 1422 "prog_io_util.m"
                      }
#line 1424 "prog_io_util.m"
                    else
#line 1425 "prog_io_util.m"
                      {
#line 1425 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Vars_33;

#line 1425 "prog_io_util.m"
                        {
#line 1425 "prog_io_util.m"
                          parse_tree__prog_io_util__Vars_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1425 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_33, 0) = ((MR_Box) (parse_tree__prog_io_util__V_31));
#line 1425 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_33, 1) = ((MR_Box) (parse_tree__prog_io_util__TailVars_27));
#line 1425 "prog_io_util.m"
                        }
#line 1426 "prog_io_util.m"
                        {
#line 1426 "prog_io_util.m"
                          MR_Word base;
#line 1426 "prog_io_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1426 "prog_io_util.m"
                          *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1426 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Vars_33));
#line 1426 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_28));
#line 1426 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_util__TailDotVars_29));
#line 1426 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_io_util__TailColonVars_30));
#line 1426 "prog_io_util.m"
                        }
#line 1425 "prog_io_util.m"
                      }
#line 1419 "prog_io_util.m"
                  }
#line 1429 "prog_io_util.m"
                  break;
#line 1429 "prog_io_util.m"
                case (MR_Integer) 1:
#line 1430 "prog_io_util.m"
                  {
#line 1430 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__SV_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarKind_26, (MR_Integer) 0)));

#line 1432 "prog_io_util.m"
                    {
#line 1432 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__TypeInfo_100_100;

#line 17944 "parse_tree.prog_io_util.c"
                      {
#line 17946 "parse_tree.prog_io_util.c"
                        parse_tree__prog_io_util__TypeInfo_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 17948 "parse_tree.prog_io_util.c"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_100_100, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 17950 "parse_tree.prog_io_util.c"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_100_100, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 17952 "parse_tree.prog_io_util.c"
                      }
#line 1432 "prog_io_util.m"
                      {
#line 1432 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_100_100, parse_tree__prog_io_util__SV_34, parse_tree__prog_io_util__TailStateVars_28);
                      }
#line 1432 "prog_io_util.m"
                    }
#line 1433 "prog_io_util.m"
                    if (!(parse_tree__prog_io_util__succeeded))
#line 1433 "prog_io_util.m"
                      {
#line 1433 "prog_io_util.m"
                        {
#line 1433 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__TypeInfo_102_102;

#line 17970 "parse_tree.prog_io_util.c"
                          {
#line 17972 "parse_tree.prog_io_util.c"
                            parse_tree__prog_io_util__TypeInfo_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 17974 "parse_tree.prog_io_util.c"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_102_102, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 17976 "parse_tree.prog_io_util.c"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_102_102, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 17978 "parse_tree.prog_io_util.c"
                          }
#line 1433 "prog_io_util.m"
                          {
#line 1433 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_102_102, parse_tree__prog_io_util__SV_34, parse_tree__prog_io_util__TailDotVars_29);
                          }
#line 1433 "prog_io_util.m"
                        }
#line 1433 "prog_io_util.m"
                        if (!(parse_tree__prog_io_util__succeeded))
#line 1434 "prog_io_util.m"
                          {
#line 1434 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__TypeInfo_104_104;

#line 17994 "parse_tree.prog_io_util.c"
                            {
#line 17996 "parse_tree.prog_io_util.c"
                              parse_tree__prog_io_util__TypeInfo_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 17998 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_104_104, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 18000 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_104_104, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 18002 "parse_tree.prog_io_util.c"
                            }
#line 1434 "prog_io_util.m"
                            {
#line 1434 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_104_104, parse_tree__prog_io_util__SV_34, parse_tree__prog_io_util__TailColonVars_30);
                            }
#line 1434 "prog_io_util.m"
                          }
#line 1433 "prog_io_util.m"
                      }
#line 1440 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1438 "prog_io_util.m"
                      {
#line 1438 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_74_74;
#line 1438 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Spec_84;

#line 1437 "prog_io_util.m"
                        {
#line 1437 "prog_io_util.m"
                          parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_84);
                        }
#line 1439 "prog_io_util.m"
                        {
#line 1439 "prog_io_util.m"
                          parse_tree__prog_io_util__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1439 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_74_74, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_84));
#line 1439 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1439 "prog_io_util.m"
                        }
#line 1439 "prog_io_util.m"
                        {
#line 1439 "prog_io_util.m"
                          MR_Word base;
#line 1439 "prog_io_util.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1439 "prog_io_util.m"
                          *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1439 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_74_74));
#line 1439 "prog_io_util.m"
                        }
#line 1438 "prog_io_util.m"
                      }
#line 1440 "prog_io_util.m"
                    else
#line 1441 "prog_io_util.m"
                      {
#line 1441 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__StateVars_35;

#line 1441 "prog_io_util.m"
                        {
#line 1441 "prog_io_util.m"
                          parse_tree__prog_io_util__StateVars_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1441 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__StateVars_35, 0) = ((MR_Box) (parse_tree__prog_io_util__SV_34));
#line 1441 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__StateVars_35, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_28));
#line 1441 "prog_io_util.m"
                        }
#line 1442 "prog_io_util.m"
                        {
#line 1442 "prog_io_util.m"
                          MR_Word base;
#line 1442 "prog_io_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1442 "prog_io_util.m"
                          *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1442 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__TailVars_27));
#line 1442 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__StateVars_35));
#line 1442 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_util__TailDotVars_29));
#line 1442 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_io_util__TailColonVars_30));
#line 1442 "prog_io_util.m"
                        }
#line 1441 "prog_io_util.m"
                      }
#line 1430 "prog_io_util.m"
                  }
#line 1429 "prog_io_util.m"
                  break;
#line 1429 "prog_io_util.m"
                case (MR_Integer) 2:
#line 1446 "prog_io_util.m"
                  {
#line 1446 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__SV_90 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__VarKind_26, (MR_Integer) 0)));

#line 1448 "prog_io_util.m"
                    {
#line 1448 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__TypeInfo_106_106;

#line 18104 "parse_tree.prog_io_util.c"
                      {
#line 18106 "parse_tree.prog_io_util.c"
                        parse_tree__prog_io_util__TypeInfo_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 18108 "parse_tree.prog_io_util.c"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_106_106, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 18110 "parse_tree.prog_io_util.c"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_106_106, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 18112 "parse_tree.prog_io_util.c"
                      }
#line 1448 "prog_io_util.m"
                      {
#line 1448 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_106_106, parse_tree__prog_io_util__SV_90, parse_tree__prog_io_util__TailStateVars_28);
                      }
#line 1448 "prog_io_util.m"
                    }
#line 1449 "prog_io_util.m"
                    if (!(parse_tree__prog_io_util__succeeded))
#line 1449 "prog_io_util.m"
                      {
#line 1449 "prog_io_util.m"
                        {
#line 1449 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__TypeInfo_108_108;

#line 18130 "parse_tree.prog_io_util.c"
                          {
#line 18132 "parse_tree.prog_io_util.c"
                            parse_tree__prog_io_util__TypeInfo_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 18134 "parse_tree.prog_io_util.c"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_108_108, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 18136 "parse_tree.prog_io_util.c"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_108_108, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 18138 "parse_tree.prog_io_util.c"
                          }
#line 1449 "prog_io_util.m"
                          {
#line 1449 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_108_108, parse_tree__prog_io_util__SV_90, parse_tree__prog_io_util__TailDotVars_29);
                          }
#line 1449 "prog_io_util.m"
                        }
#line 1449 "prog_io_util.m"
                        if (!(parse_tree__prog_io_util__succeeded))
#line 1450 "prog_io_util.m"
                          {
#line 1450 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__TypeInfo_110_110;

#line 18154 "parse_tree.prog_io_util.c"
                            {
#line 18156 "parse_tree.prog_io_util.c"
                              parse_tree__prog_io_util__TypeInfo_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 18158 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_110_110, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 18160 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_110_110, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 18162 "parse_tree.prog_io_util.c"
                            }
#line 1450 "prog_io_util.m"
                            {
#line 1450 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_110_110, parse_tree__prog_io_util__SV_90, parse_tree__prog_io_util__TailColonVars_30);
                            }
#line 1450 "prog_io_util.m"
                          }
#line 1449 "prog_io_util.m"
                      }
#line 1456 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1454 "prog_io_util.m"
                      {
#line 1454 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_72_72;
#line 1454 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Spec_87;

#line 1453 "prog_io_util.m"
                        {
#line 1453 "prog_io_util.m"
                          parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_87);
                        }
#line 1455 "prog_io_util.m"
                        {
#line 1455 "prog_io_util.m"
                          parse_tree__prog_io_util__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1455 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_87));
#line 1455 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1455 "prog_io_util.m"
                        }
#line 1455 "prog_io_util.m"
                        {
#line 1455 "prog_io_util.m"
                          MR_Word base;
#line 1455 "prog_io_util.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1455 "prog_io_util.m"
                          *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1455 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_72_72));
#line 1455 "prog_io_util.m"
                        }
#line 1454 "prog_io_util.m"
                      }
#line 1456 "prog_io_util.m"
                    else
#line 1457 "prog_io_util.m"
                      {
#line 1457 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__DotVars_36;

#line 1457 "prog_io_util.m"
                        {
#line 1457 "prog_io_util.m"
                          parse_tree__prog_io_util__DotVars_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1457 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__DotVars_36, 0) = ((MR_Box) (parse_tree__prog_io_util__SV_90));
#line 1457 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__DotVars_36, 1) = ((MR_Box) (parse_tree__prog_io_util__TailDotVars_29));
#line 1457 "prog_io_util.m"
                        }
#line 1458 "prog_io_util.m"
                        {
#line 1458 "prog_io_util.m"
                          MR_Word base;
#line 1458 "prog_io_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1458 "prog_io_util.m"
                          *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1458 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__TailVars_27));
#line 1458 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_28));
#line 1458 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_util__DotVars_36));
#line 1458 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_io_util__TailColonVars_30));
#line 1458 "prog_io_util.m"
                        }
#line 1457 "prog_io_util.m"
                      }
#line 1446 "prog_io_util.m"
                  }
#line 1429 "prog_io_util.m"
                  break;
#line 1429 "prog_io_util.m"
                case (MR_Integer) 3:
#line 1462 "prog_io_util.m"
                  {
#line 1462 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__SV_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__VarKind_26, (MR_Integer) 0)));

#line 1464 "prog_io_util.m"
                    {
#line 1464 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__TypeInfo_112_112;

#line 18264 "parse_tree.prog_io_util.c"
                      {
#line 18266 "parse_tree.prog_io_util.c"
                        parse_tree__prog_io_util__TypeInfo_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 18268 "parse_tree.prog_io_util.c"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_112_112, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 18270 "parse_tree.prog_io_util.c"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_112_112, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 18272 "parse_tree.prog_io_util.c"
                      }
#line 1464 "prog_io_util.m"
                      {
#line 1464 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_112_112, parse_tree__prog_io_util__SV_94, parse_tree__prog_io_util__TailStateVars_28);
                      }
#line 1464 "prog_io_util.m"
                    }
#line 1465 "prog_io_util.m"
                    if (!(parse_tree__prog_io_util__succeeded))
#line 1465 "prog_io_util.m"
                      {
#line 1465 "prog_io_util.m"
                        {
#line 1465 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__TypeInfo_114_114;

#line 18290 "parse_tree.prog_io_util.c"
                          {
#line 18292 "parse_tree.prog_io_util.c"
                            parse_tree__prog_io_util__TypeInfo_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 18294 "parse_tree.prog_io_util.c"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_114_114, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 18296 "parse_tree.prog_io_util.c"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_114_114, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 18298 "parse_tree.prog_io_util.c"
                          }
#line 1465 "prog_io_util.m"
                          {
#line 1465 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_114_114, parse_tree__prog_io_util__SV_94, parse_tree__prog_io_util__TailDotVars_29);
                          }
#line 1465 "prog_io_util.m"
                        }
#line 1465 "prog_io_util.m"
                        if (!(parse_tree__prog_io_util__succeeded))
#line 1466 "prog_io_util.m"
                          {
#line 1466 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__TypeInfo_116_116;

#line 18314 "parse_tree.prog_io_util.c"
                            {
#line 18316 "parse_tree.prog_io_util.c"
                              parse_tree__prog_io_util__TypeInfo_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 18318 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_116_116, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 18320 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_116_116, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 18322 "parse_tree.prog_io_util.c"
                            }
#line 1466 "prog_io_util.m"
                            {
#line 1466 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_116_116, parse_tree__prog_io_util__SV_94, parse_tree__prog_io_util__TailColonVars_30);
                            }
#line 1466 "prog_io_util.m"
                          }
#line 1465 "prog_io_util.m"
                      }
#line 1472 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1470 "prog_io_util.m"
                      {
#line 1470 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_70_70;
#line 1470 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Spec_91;

#line 1469 "prog_io_util.m"
                        {
#line 1469 "prog_io_util.m"
                          parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_91);
                        }
#line 1471 "prog_io_util.m"
                        {
#line 1471 "prog_io_util.m"
                          parse_tree__prog_io_util__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1471 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_91));
#line 1471 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1471 "prog_io_util.m"
                        }
#line 1471 "prog_io_util.m"
                        {
#line 1471 "prog_io_util.m"
                          MR_Word base;
#line 1471 "prog_io_util.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1471 "prog_io_util.m"
                          *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1471 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_70_70));
#line 1471 "prog_io_util.m"
                        }
#line 1470 "prog_io_util.m"
                      }
#line 1472 "prog_io_util.m"
                    else
#line 1473 "prog_io_util.m"
                      {
#line 1473 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__ColonVars_37;

#line 1473 "prog_io_util.m"
                        {
#line 1473 "prog_io_util.m"
                          parse_tree__prog_io_util__ColonVars_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1473 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ColonVars_37, 0) = ((MR_Box) (parse_tree__prog_io_util__SV_94));
#line 1473 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ColonVars_37, 1) = ((MR_Box) (parse_tree__prog_io_util__TailColonVars_30));
#line 1473 "prog_io_util.m"
                        }
#line 1474 "prog_io_util.m"
                        {
#line 1474 "prog_io_util.m"
                          MR_Word base;
#line 1474 "prog_io_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1474 "prog_io_util.m"
                          *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1474 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__TailVars_27));
#line 1474 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_28));
#line 1474 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_util__TailDotVars_29));
#line 1474 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_io_util__ColonVars_37));
#line 1474 "prog_io_util.m"
                        }
#line 1473 "prog_io_util.m"
                      }
#line 1462 "prog_io_util.m"
                  }
#line 1429 "prog_io_util.m"
                  break;
#line 1429 "prog_io_util.m"
              }
#line 1478 "prog_io_util.m"
            else
#line 1479 "prog_io_util.m"
              {
#line 1479 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TypeInfo_118_118;
#line 1479 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TypeInfo_120_120;
#line 1479 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TypeInfo_122_122;
#line 1479 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__HeadSpecs_38;
#line 1479 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailSpecs_39;
#line 1479 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_78_78;

#line 18431 "parse_tree.prog_io_util.c"
                {
#line 18433 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__TypeInfo_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 18435 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_118_118, 0) = ((MR_Box) (&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_ordinary_state_dot_colon_var_1));
#line 18437 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_118_118, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 18439 "parse_tree.prog_io_util.c"
                }
#line 1479 "prog_io_util.m"
                {
#line 1479 "prog_io_util.m"
                  parse_tree__prog_io_util__HeadSpecs_38 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_util__TypeInfo_118_118, (MR_Word) parse_tree__prog_io_util__MaybeHeadVar_23);
                }
#line 18446 "parse_tree.prog_io_util.c"
                {
#line 18448 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__TypeInfo_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 18450 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_120_120, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 18452 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_120_120, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 18454 "parse_tree.prog_io_util.c"
                }
#line 18456 "parse_tree.prog_io_util.c"
                {
#line 18458 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__TypeInfo_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 18460 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_122_122, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 18462 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_122_122, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_120_120));
#line 18464 "parse_tree.prog_io_util.c"
                }
#line 1480 "prog_io_util.m"
                {
#line 1480 "prog_io_util.m"
                  parse_tree__prog_io_util__TailSpecs_39 = parse_tree__maybe_error__get_any_errors4_1_f_0(parse_tree__prog_io_util__TypeInfo_122_122, parse_tree__prog_io_util__TypeInfo_122_122, parse_tree__prog_io_util__TypeInfo_122_122, parse_tree__prog_io_util__TypeInfo_122_122, (MR_Word) parse_tree__prog_io_util__MaybeTailVars_25);
                }
#line 1481 "prog_io_util.m"
                {
#line 1481 "prog_io_util.m"
                  parse_tree__prog_io_util__V_78_78 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_util__HeadSpecs_38, parse_tree__prog_io_util__TailSpecs_39);
                }
#line 1481 "prog_io_util.m"
                {
#line 1481 "prog_io_util.m"
                  MR_Word base;
#line 1481 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1481 "prog_io_util.m"
                  *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1481 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_78_78));
#line 1481 "prog_io_util.m"
                }
#line 1479 "prog_io_util.m"
              }
#line 1410 "prog_io_util.m"
          }
#line 1483 "prog_io_util.m"
        else
#line 1485 "prog_io_util.m"
          {
#line 1485 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_80_80;
#line 1485 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Spec_95;

#line 1484 "prog_io_util.m"
            {
#line 1484 "prog_io_util.m"
              parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "list of variables and/or state variables", parse_tree__prog_io_util__Term_5, &parse_tree__prog_io_util__Spec_95);
            }
#line 1486 "prog_io_util.m"
            {
#line 1486 "prog_io_util.m"
              parse_tree__prog_io_util__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1486 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_95));
#line 1486 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1486 "prog_io_util.m"
            }
#line 1486 "prog_io_util.m"
            {
#line 1486 "prog_io_util.m"
              MR_Word base;
#line 1486 "prog_io_util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1486 "prog_io_util.m"
              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1486 "prog_io_util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_80_80));
#line 1486 "prog_io_util.m"
            }
#line 1485 "prog_io_util.m"
          }
#line 1483 "prog_io_util.m"
      }
#line 1389 "prog_io_util.m"
  }
#line 83 "prog_io_util.m"
}

#line 74 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_quantifier_vars_4_p_0(
#line 74 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_62,
#line 74 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_5,
#line 74 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 74 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_7,
#line 74 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__MaybeVars_8)
#line 74 "prog_io_util.m"
{
#line 1326 "prog_io_util.m"
  {
#line 1326 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1324 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_32_32;
#line 1324 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_33_33;
#line 1324 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_34_34;
#line 1324 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 1324 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1324 "prog_io_util.m"
      {
#line 1324 "prog_io_util.m"
        parse_tree__prog_io_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 1324 "prog_io_util.m"
        parse_tree__prog_io_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 1324 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 1324 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1324 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1324 "prog_io_util.m"
          {
#line 1324 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_32_32)) == (MR_mktag((MR_Integer) 0)));
#line 1324 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1324 "prog_io_util.m"
              {
#line 1324 "prog_io_util.m"
                parse_tree__prog_io_util__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_32_32, (MR_Integer) 0)));
#line 1324 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_33_33, (MR_String) "[]") == 0);
#line 1324 "prog_io_util.m"
              }
#line 1324 "prog_io_util.m"
          }
#line 1324 "prog_io_util.m"
      }
#line 1326 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1325 "prog_io_util.m"
      {
#line 1325 "prog_io_util.m"
        *parse_tree__prog_io_util__MaybeVars_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[13]);
#line 1325 "prog_io_util.m"
      }
#line 1326 "prog_io_util.m"
    else
#line 1374 "prog_io_util.m"
      {
#line 1374 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__HeadTerm_10;
#line 1374 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TailTerm_11;
#line 1326 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_37_37;
#line 1326 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_38_38;
#line 1326 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_39_39;
#line 1326 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_40_40;
#line 1326 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_41_41;
#line 1326 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_12_12;

#line 1326 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1326 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1326 "prog_io_util.m"
          {
#line 1326 "prog_io_util.m"
            parse_tree__prog_io_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 1326 "prog_io_util.m"
            parse_tree__prog_io_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 1326 "prog_io_util.m"
            parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 1326 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_37_37)) == (MR_mktag((MR_Integer) 0)));
#line 1326 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1326 "prog_io_util.m"
              {
#line 1326 "prog_io_util.m"
                parse_tree__prog_io_util__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_37_37, (MR_Integer) 0)));
#line 1326 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_38_38, (MR_String) "[|]") == 0);
#line 1326 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1326 "prog_io_util.m"
                  {
#line 1326 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 1326 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1326 "prog_io_util.m"
                      {
#line 1326 "prog_io_util.m"
                        parse_tree__prog_io_util__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_39_39, (MR_Integer) 0)));
#line 1326 "prog_io_util.m"
                        parse_tree__prog_io_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_39_39, (MR_Integer) 1)));
#line 1326 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 1326 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1326 "prog_io_util.m"
                          {
#line 1326 "prog_io_util.m"
                            parse_tree__prog_io_util__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_40_40, (MR_Integer) 0)));
#line 1326 "prog_io_util.m"
                            parse_tree__prog_io_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_40_40, (MR_Integer) 1)));
#line 1326 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1326 "prog_io_util.m"
                          }
#line 1326 "prog_io_util.m"
                      }
#line 1326 "prog_io_util.m"
                  }
#line 1326 "prog_io_util.m"
              }
#line 1326 "prog_io_util.m"
          }
#line 1374 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1341 "prog_io_util.m"
          {
#line 1341 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__MaybeHeadVar_19;
#line 1341 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__MaybeTailVars_21;
#line 1337 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__VarKind0_15;
#line 1369 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__VarKind_22;
#line 1369 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TailVars_23;
#line 1369 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TailStateVars_24;

#line 1331 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadTerm_10)) == (MR_mktag((MR_Integer) 0))))
#line 1332 "prog_io_util.m"
              {
#line 1332 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__SV0_16;
#line 1332 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 1332 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__V_43_43;
#line 1332 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));
#line 1332 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_45_45;
#line 1332 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_46_46;
#line 1332 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 2)));
#line 1332 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_17_17;

#line 1332 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_42_42)) == (MR_mktag((MR_Integer) 0)));
#line 1332 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1332 "prog_io_util.m"
                  {
#line 1332 "prog_io_util.m"
                    parse_tree__prog_io_util__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_42_42, (MR_Integer) 0)));
#line 1332 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_43_43, (MR_String) "!") == 0);
#line 1332 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1332 "prog_io_util.m"
                      {
#line 1332 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_44_44)) == (MR_mktag((MR_Integer) 1)));
#line 1332 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1332 "prog_io_util.m"
                          {
#line 1332 "prog_io_util.m"
                            parse_tree__prog_io_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_44_44, (MR_Integer) 0)));
#line 1332 "prog_io_util.m"
                            parse_tree__prog_io_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_44_44, (MR_Integer) 1)));
#line 1332 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1332 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1332 "prog_io_util.m"
                              {
#line 1332 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_45_45)) == (MR_mktag((MR_Integer) 1)));
#line 1332 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 1332 "prog_io_util.m"
                                  {
#line 1332 "prog_io_util.m"
                                    parse_tree__prog_io_util__SV0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, (MR_Integer) 0)));
#line 1332 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, (MR_Integer) 1)));
#line 1333 "prog_io_util.m"
                                    {
#line 1333 "prog_io_util.m"
                                      parse_tree__prog_io_util__VarKind0_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1333 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarKind0_15, 0) = ((MR_Box) (parse_tree__prog_io_util__SV0_16));
#line 1333 "prog_io_util.m"
                                    }
#line 1333 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1332 "prog_io_util.m"
                                  }
#line 1332 "prog_io_util.m"
                              }
#line 1332 "prog_io_util.m"
                          }
#line 1332 "prog_io_util.m"
                      }
#line 1332 "prog_io_util.m"
                  }
#line 1332 "prog_io_util.m"
              }
#line 1331 "prog_io_util.m"
            else
#line 1329 "prog_io_util.m"
              {
#line 1329 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 1329 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));

#line 1330 "prog_io_util.m"
                {
#line 1330 "prog_io_util.m"
                  parse_tree__prog_io_util__VarKind0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1330 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__VarKind0_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V0_13));
#line 1330 "prog_io_util.m"
                }
#line 1329 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1329 "prog_io_util.m"
              }
#line 1337 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1336 "prog_io_util.m"
              {
#line 1336 "prog_io_util.m"
                parse_tree__prog_io_util__MaybeHeadVar_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1336 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeHeadVar_19, 0) = ((MR_Box) (parse_tree__prog_io_util__VarKind0_15));
#line 1336 "prog_io_util.m"
              }
#line 1337 "prog_io_util.m"
            else
#line 1339 "prog_io_util.m"
              {
#line 1339 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__HeadSpec_20;
#line 1339 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_48_48;

#line 1338 "prog_io_util.m"
                {
#line 1338 "prog_io_util.m"
                  parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_62, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "variable or state variable", parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__HeadSpec_20);
                }
#line 1340 "prog_io_util.m"
                {
#line 1340 "prog_io_util.m"
                  parse_tree__prog_io_util__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1340 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadSpec_20));
#line 1340 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1340 "prog_io_util.m"
                }
#line 1340 "prog_io_util.m"
                {
#line 1340 "prog_io_util.m"
                  parse_tree__prog_io_util__MaybeHeadVar_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1340 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__MaybeHeadVar_19, 0) = ((MR_Box) (parse_tree__prog_io_util__V_48_48));
#line 1340 "prog_io_util.m"
                }
#line 1339 "prog_io_util.m"
              }
#line 1342 "prog_io_util.m"
            {
#line 1342 "prog_io_util.m"
              parse_tree__prog_io_util__parse_quantifier_vars_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_62, parse_tree__prog_io_util__TailTerm_11, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__MaybeTailVars_21);
            }
#line 1345 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeHeadVar_19)) == (MR_mktag((MR_Integer) 1)));
#line 1345 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1345 "prog_io_util.m"
              {
#line 1345 "prog_io_util.m"
                parse_tree__prog_io_util__VarKind_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeHeadVar_19, (MR_Integer) 0)));
#line 1346 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeTailVars_21)) == (MR_mktag((MR_Integer) 1)));
#line 1346 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1346 "prog_io_util.m"
                  {
#line 1346 "prog_io_util.m"
                    parse_tree__prog_io_util__TailVars_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeTailVars_21, (MR_Integer) 0)));
#line 1346 "prog_io_util.m"
                    parse_tree__prog_io_util__TailStateVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeTailVars_21, (MR_Integer) 1)));
#line 1346 "prog_io_util.m"
                  }
#line 1345 "prog_io_util.m"
              }
#line 1369 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1358 "prog_io_util.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_util__VarKind_22)) == (MR_mktag((MR_Integer) 0))))
#line 1349 "prog_io_util.m"
                {
#line 1349 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__VarKind_22, (MR_Integer) 0)));
#line 1350 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__TypeInfo_64_64;

#line 18887 "parse_tree.prog_io_util.c"
                  {
#line 18889 "parse_tree.prog_io_util.c"
                    parse_tree__prog_io_util__TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 18891 "parse_tree.prog_io_util.c"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_64_64, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 18893 "parse_tree.prog_io_util.c"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_64_64, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_62));
#line 18895 "parse_tree.prog_io_util.c"
                  }
#line 1350 "prog_io_util.m"
                  {
#line 1350 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_62, parse_tree__prog_io_util__TypeInfo_64_64, parse_tree__prog_io_util__V_25, parse_tree__prog_io_util__TailVars_23);
                  }
#line 1354 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 1352 "prog_io_util.m"
                    {
#line 1352 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__Spec_26;
#line 1352 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__V_52_52;

#line 1351 "prog_io_util.m"
                      {
#line 1351 "prog_io_util.m"
                        parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_62, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_26);
                      }
#line 1353 "prog_io_util.m"
                      {
#line 1353 "prog_io_util.m"
                        parse_tree__prog_io_util__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1353 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_26));
#line 1353 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1353 "prog_io_util.m"
                      }
#line 1353 "prog_io_util.m"
                      {
#line 1353 "prog_io_util.m"
                        MR_Word base;
#line 1353 "prog_io_util.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1353 "prog_io_util.m"
                        *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1353 "prog_io_util.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_52_52));
#line 1353 "prog_io_util.m"
                      }
#line 1352 "prog_io_util.m"
                    }
#line 1354 "prog_io_util.m"
                  else
#line 1355 "prog_io_util.m"
                    {
#line 1355 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__Vars_27;

#line 1355 "prog_io_util.m"
                      {
#line 1355 "prog_io_util.m"
                        parse_tree__prog_io_util__Vars_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1355 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_27, 0) = ((MR_Box) (parse_tree__prog_io_util__V_25));
#line 1355 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_27, 1) = ((MR_Box) (parse_tree__prog_io_util__TailVars_23));
#line 1355 "prog_io_util.m"
                      }
#line 1356 "prog_io_util.m"
                      {
#line 1356 "prog_io_util.m"
                        MR_Word base;
#line 1356 "prog_io_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1356 "prog_io_util.m"
                        *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1356 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Vars_27));
#line 1356 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_24));
#line 1356 "prog_io_util.m"
                      }
#line 1355 "prog_io_util.m"
                    }
#line 1349 "prog_io_util.m"
                }
#line 1358 "prog_io_util.m"
              else
#line 1359 "prog_io_util.m"
                {
#line 1359 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__SV_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarKind_22, (MR_Integer) 0)));
#line 1360 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__TypeInfo_66_66;

#line 18984 "parse_tree.prog_io_util.c"
                  {
#line 18986 "parse_tree.prog_io_util.c"
                    parse_tree__prog_io_util__TypeInfo_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 18988 "parse_tree.prog_io_util.c"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_66_66, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 18990 "parse_tree.prog_io_util.c"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_66_66, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_62));
#line 18992 "parse_tree.prog_io_util.c"
                  }
#line 1360 "prog_io_util.m"
                  {
#line 1360 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_62, parse_tree__prog_io_util__TypeInfo_66_66, parse_tree__prog_io_util__SV_28, parse_tree__prog_io_util__TailStateVars_24);
                  }
#line 1364 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 1362 "prog_io_util.m"
                    {
#line 1362 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__V_50_50;
#line 1362 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__Spec_58;

#line 1361 "prog_io_util.m"
                      {
#line 1361 "prog_io_util.m"
                        parse_tree__prog_io_util__generate_repeated_state_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_62, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_58);
                      }
#line 1363 "prog_io_util.m"
                      {
#line 1363 "prog_io_util.m"
                        parse_tree__prog_io_util__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1363 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_58));
#line 1363 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1363 "prog_io_util.m"
                      }
#line 1363 "prog_io_util.m"
                      {
#line 1363 "prog_io_util.m"
                        MR_Word base;
#line 1363 "prog_io_util.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1363 "prog_io_util.m"
                        *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1363 "prog_io_util.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_50_50));
#line 1363 "prog_io_util.m"
                      }
#line 1362 "prog_io_util.m"
                    }
#line 1364 "prog_io_util.m"
                  else
#line 1365 "prog_io_util.m"
                    {
#line 1365 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__StateVars_29;

#line 1365 "prog_io_util.m"
                      {
#line 1365 "prog_io_util.m"
                        parse_tree__prog_io_util__StateVars_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1365 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__StateVars_29, 0) = ((MR_Box) (parse_tree__prog_io_util__SV_28));
#line 1365 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__StateVars_29, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_24));
#line 1365 "prog_io_util.m"
                      }
#line 1366 "prog_io_util.m"
                      {
#line 1366 "prog_io_util.m"
                        MR_Word base;
#line 1366 "prog_io_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1366 "prog_io_util.m"
                        *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1366 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__TailVars_23));
#line 1366 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__StateVars_29));
#line 1366 "prog_io_util.m"
                      }
#line 1365 "prog_io_util.m"
                    }
#line 1359 "prog_io_util.m"
                }
#line 1369 "prog_io_util.m"
            else
#line 1370 "prog_io_util.m"
              {
#line 1370 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TypeInfo_68_68;
#line 1370 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TypeInfo_70_70;
#line 1370 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TypeInfo_72_72;
#line 1370 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__HeadSpecs_30;
#line 1370 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailSpecs_31;
#line 1370 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_54_54;

#line 19089 "parse_tree.prog_io_util.c"
                {
#line 19091 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__TypeInfo_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 19093 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_68_68, 0) = ((MR_Box) (&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_ordinary_state_var_1));
#line 19095 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_68_68, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_62));
#line 19097 "parse_tree.prog_io_util.c"
                }
#line 1370 "prog_io_util.m"
                {
#line 1370 "prog_io_util.m"
                  parse_tree__prog_io_util__HeadSpecs_30 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_util__TypeInfo_68_68, (MR_Word) parse_tree__prog_io_util__MaybeHeadVar_19);
                }
#line 19104 "parse_tree.prog_io_util.c"
                {
#line 19106 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__TypeInfo_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 19108 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_70_70, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 19110 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_70_70, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_62));
#line 19112 "parse_tree.prog_io_util.c"
                }
#line 19114 "parse_tree.prog_io_util.c"
                {
#line 19116 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__TypeInfo_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 19118 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_72_72, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 19120 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_72_72, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_70_70));
#line 19122 "parse_tree.prog_io_util.c"
                }
#line 1371 "prog_io_util.m"
                {
#line 1371 "prog_io_util.m"
                  parse_tree__prog_io_util__TailSpecs_31 = parse_tree__maybe_error__get_any_errors2_1_f_0(parse_tree__prog_io_util__TypeInfo_72_72, parse_tree__prog_io_util__TypeInfo_72_72, (MR_Word) parse_tree__prog_io_util__MaybeTailVars_21);
                }
#line 1372 "prog_io_util.m"
                {
#line 1372 "prog_io_util.m"
                  parse_tree__prog_io_util__V_54_54 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_util__HeadSpecs_30, parse_tree__prog_io_util__TailSpecs_31);
                }
#line 1372 "prog_io_util.m"
                {
#line 1372 "prog_io_util.m"
                  MR_Word base;
#line 1372 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1372 "prog_io_util.m"
                  *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1372 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_54_54));
#line 1372 "prog_io_util.m"
                }
#line 1370 "prog_io_util.m"
              }
#line 1341 "prog_io_util.m"
          }
#line 1374 "prog_io_util.m"
        else
#line 1376 "prog_io_util.m"
          {
#line 1376 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_56_56;
#line 1376 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Spec_61;

#line 1375 "prog_io_util.m"
            {
#line 1375 "prog_io_util.m"
              parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_62, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "list of variables and/or state variables", parse_tree__prog_io_util__Term_5, &parse_tree__prog_io_util__Spec_61);
            }
#line 1377 "prog_io_util.m"
            {
#line 1377 "prog_io_util.m"
              parse_tree__prog_io_util__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1377 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_61));
#line 1377 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1377 "prog_io_util.m"
            }
#line 1377 "prog_io_util.m"
            {
#line 1377 "prog_io_util.m"
              MR_Word base;
#line 1377 "prog_io_util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1377 "prog_io_util.m"
              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1377 "prog_io_util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_56_56));
#line 1377 "prog_io_util.m"
            }
#line 1376 "prog_io_util.m"
          }
#line 1374 "prog_io_util.m"
      }
#line 1326 "prog_io_util.m"
  }
#line 74 "prog_io_util.m"
}

#line 67 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_vars_4_p_0(
#line 67 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_46,
#line 67 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_5,
#line 67 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 67 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_7,
#line 67 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__MaybeVars_8)
#line 67 "prog_io_util.m"
{
#line 1285 "prog_io_util.m"
  {
#line 1285 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1283 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_27_27;
#line 1283 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_28_28;
#line 1283 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_29_29;
#line 1283 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 1283 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1283 "prog_io_util.m"
      {
#line 1283 "prog_io_util.m"
        parse_tree__prog_io_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 1283 "prog_io_util.m"
        parse_tree__prog_io_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 1283 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 1283 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1283 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1283 "prog_io_util.m"
          {
#line 1283 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_27_27)) == (MR_mktag((MR_Integer) 0)));
#line 1283 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1283 "prog_io_util.m"
              {
#line 1283 "prog_io_util.m"
                parse_tree__prog_io_util__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, (MR_Integer) 0)));
#line 1283 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_28_28, (MR_String) "[]") == 0);
#line 1283 "prog_io_util.m"
              }
#line 1283 "prog_io_util.m"
          }
#line 1283 "prog_io_util.m"
      }
#line 1285 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1284 "prog_io_util.m"
      {
#line 1284 "prog_io_util.m"
        *parse_tree__prog_io_util__MaybeVars_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[0]);
#line 1284 "prog_io_util.m"
      }
#line 1285 "prog_io_util.m"
    else
#line 1313 "prog_io_util.m"
      {
#line 1313 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__HeadTerm_10;
#line 1313 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TailTerm_11;
#line 1285 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_31_31;
#line 1285 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_32_32;
#line 1285 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_33_33;
#line 1285 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_34_34;
#line 1285 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_35_35;
#line 1285 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_12_12;

#line 1285 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1285 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1285 "prog_io_util.m"
          {
#line 1285 "prog_io_util.m"
            parse_tree__prog_io_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 1285 "prog_io_util.m"
            parse_tree__prog_io_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 1285 "prog_io_util.m"
            parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 1285 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_31_31)) == (MR_mktag((MR_Integer) 0)));
#line 1285 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1285 "prog_io_util.m"
              {
#line 1285 "prog_io_util.m"
                parse_tree__prog_io_util__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_31_31, (MR_Integer) 0)));
#line 1285 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_32_32, (MR_String) "[|]") == 0);
#line 1285 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1285 "prog_io_util.m"
                  {
#line 1285 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 1285 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1285 "prog_io_util.m"
                      {
#line 1285 "prog_io_util.m"
                        parse_tree__prog_io_util__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, (MR_Integer) 0)));
#line 1285 "prog_io_util.m"
                        parse_tree__prog_io_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, (MR_Integer) 1)));
#line 1285 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1285 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1285 "prog_io_util.m"
                          {
#line 1285 "prog_io_util.m"
                            parse_tree__prog_io_util__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
#line 1285 "prog_io_util.m"
                            parse_tree__prog_io_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 1)));
#line 1285 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1285 "prog_io_util.m"
                          }
#line 1285 "prog_io_util.m"
                      }
#line 1285 "prog_io_util.m"
                  }
#line 1285 "prog_io_util.m"
              }
#line 1285 "prog_io_util.m"
          }
#line 1313 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1294 "prog_io_util.m"
          {
#line 1294 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__MaybeHeadVar_15;
#line 1294 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__MaybeTailVars_20;
#line 1308 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__HeadVar_21;
#line 1308 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TailVars_22;

#line 1289 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadTerm_10)) == (MR_mktag((MR_Integer) 0))))
#line 1290 "prog_io_util.m"
              {
#line 1290 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__HeadSpec_19;
#line 1290 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_37_37;

#line 1291 "prog_io_util.m"
                {
#line 1291 "prog_io_util.m"
                  parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_46, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "variable", parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__HeadSpec_19);
                }
#line 1293 "prog_io_util.m"
                {
#line 1293 "prog_io_util.m"
                  parse_tree__prog_io_util__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1293 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadSpec_19));
#line 1293 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1293 "prog_io_util.m"
                }
#line 1293 "prog_io_util.m"
                {
#line 1293 "prog_io_util.m"
                  parse_tree__prog_io_util__MaybeHeadVar_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1293 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__MaybeHeadVar_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_37_37));
#line 1293 "prog_io_util.m"
                }
#line 1290 "prog_io_util.m"
              }
#line 1289 "prog_io_util.m"
            else
#line 1287 "prog_io_util.m"
              {
#line 1287 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__HeadVar0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 1287 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));

#line 1288 "prog_io_util.m"
                {
#line 1288 "prog_io_util.m"
                  parse_tree__prog_io_util__MaybeHeadVar_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1288 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeHeadVar_15, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadVar0_13));
#line 1288 "prog_io_util.m"
                }
#line 1287 "prog_io_util.m"
              }
#line 1295 "prog_io_util.m"
            {
#line 1295 "prog_io_util.m"
              parse_tree__prog_io_util__parse_vars_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_46, parse_tree__prog_io_util__TailTerm_11, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__MaybeTailVars_20);
            }
#line 1297 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeHeadVar_15)) == (MR_mktag((MR_Integer) 1)));
#line 1297 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1297 "prog_io_util.m"
              {
#line 1297 "prog_io_util.m"
                parse_tree__prog_io_util__HeadVar_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeHeadVar_15, (MR_Integer) 0)));
#line 1298 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeTailVars_20)) == (MR_mktag((MR_Integer) 1)));
#line 1298 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1298 "prog_io_util.m"
                  parse_tree__prog_io_util__TailVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeTailVars_20, (MR_Integer) 0)));
#line 1297 "prog_io_util.m"
              }
#line 1308 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1304 "prog_io_util.m"
              {
#line 1300 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TypeInfo_48_48;

#line 19436 "parse_tree.prog_io_util.c"
                {
#line 19438 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__TypeInfo_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 19440 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_48_48, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 19442 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_48_48, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_46));
#line 19444 "parse_tree.prog_io_util.c"
                }
#line 1300 "prog_io_util.m"
                {
#line 1300 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_46, parse_tree__prog_io_util__TypeInfo_48_48, parse_tree__prog_io_util__HeadVar_21, parse_tree__prog_io_util__TailVars_22);
                }
#line 1304 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1302 "prog_io_util.m"
                  {
#line 1302 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Spec_23;
#line 1302 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_39_39;

#line 1301 "prog_io_util.m"
                    {
#line 1301 "prog_io_util.m"
                      parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_46, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_23);
                    }
#line 1303 "prog_io_util.m"
                    {
#line 1303 "prog_io_util.m"
                      parse_tree__prog_io_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1303 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_23));
#line 1303 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1303 "prog_io_util.m"
                    }
#line 1303 "prog_io_util.m"
                    {
#line 1303 "prog_io_util.m"
                      MR_Word base;
#line 1303 "prog_io_util.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1303 "prog_io_util.m"
                      *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1303 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_39_39));
#line 1303 "prog_io_util.m"
                    }
#line 1302 "prog_io_util.m"
                  }
#line 1304 "prog_io_util.m"
                else
#line 1305 "prog_io_util.m"
                  {
#line 1305 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Vars_24;

#line 1305 "prog_io_util.m"
                    {
#line 1305 "prog_io_util.m"
                      parse_tree__prog_io_util__Vars_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1305 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_24, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadVar_21));
#line 1305 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_24, 1) = ((MR_Box) (parse_tree__prog_io_util__TailVars_22));
#line 1305 "prog_io_util.m"
                    }
#line 1306 "prog_io_util.m"
                    {
#line 1306 "prog_io_util.m"
                      MR_Word base;
#line 1306 "prog_io_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1306 "prog_io_util.m"
                      *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1306 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Vars_24));
#line 1306 "prog_io_util.m"
                    }
#line 1305 "prog_io_util.m"
                  }
#line 1304 "prog_io_util.m"
              }
#line 1308 "prog_io_util.m"
            else
#line 1309 "prog_io_util.m"
              {
#line 1309 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TypeInfo_50_50;
#line 1309 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TypeInfo_52_52;
#line 1309 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__HeadSpecs_25;
#line 1309 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailSpecs_26;
#line 1309 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_41_41;

#line 19537 "parse_tree.prog_io_util.c"
                {
#line 19539 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__TypeInfo_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 19541 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_50_50, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 19543 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_50_50, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_46));
#line 19545 "parse_tree.prog_io_util.c"
                }
#line 1309 "prog_io_util.m"
                {
#line 1309 "prog_io_util.m"
                  parse_tree__prog_io_util__HeadSpecs_25 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_util__TypeInfo_50_50, (MR_Word) parse_tree__prog_io_util__MaybeHeadVar_15);
                }
#line 19552 "parse_tree.prog_io_util.c"
                {
#line 19554 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__TypeInfo_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 19556 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_52_52, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 19558 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_52_52, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_50_50));
#line 19560 "parse_tree.prog_io_util.c"
                }
#line 1310 "prog_io_util.m"
                {
#line 1310 "prog_io_util.m"
                  parse_tree__prog_io_util__TailSpecs_26 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_util__TypeInfo_52_52, (MR_Word) parse_tree__prog_io_util__MaybeTailVars_20);
                }
#line 1311 "prog_io_util.m"
                {
#line 1311 "prog_io_util.m"
                  parse_tree__prog_io_util__V_41_41 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_util__HeadSpecs_25, parse_tree__prog_io_util__TailSpecs_26);
                }
#line 1311 "prog_io_util.m"
                {
#line 1311 "prog_io_util.m"
                  MR_Word base;
#line 1311 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1311 "prog_io_util.m"
                  *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1311 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_41_41));
#line 1311 "prog_io_util.m"
                }
#line 1309 "prog_io_util.m"
              }
#line 1294 "prog_io_util.m"
          }
#line 1313 "prog_io_util.m"
        else
#line 1315 "prog_io_util.m"
          {
#line 1315 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_43_43;
#line 1315 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Spec_45;

#line 1314 "prog_io_util.m"
            {
#line 1314 "prog_io_util.m"
              parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_46, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "list of variables", parse_tree__prog_io_util__Term_5, &parse_tree__prog_io_util__Spec_45);
            }
#line 1316 "prog_io_util.m"
            {
#line 1316 "prog_io_util.m"
              parse_tree__prog_io_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1316 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_45));
#line 1316 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1316 "prog_io_util.m"
            }
#line 1316 "prog_io_util.m"
            {
#line 1316 "prog_io_util.m"
              MR_Word base;
#line 1316 "prog_io_util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1316 "prog_io_util.m"
              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1316 "prog_io_util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_43_43));
#line 1316 "prog_io_util.m"
            }
#line 1315 "prog_io_util.m"
          }
#line 1313 "prog_io_util.m"
      }
#line 1285 "prog_io_util.m"
  }
#line 67 "prog_io_util.m"
}

#line 62 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__parse_list_of_vars_2_p_0(
#line 62 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_18,
#line 62 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 62 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__2_2)
#line 62 "prog_io_util.m"
{
#line 1276 "prog_io_util.m"
  {
#line 1276 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 1276 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_20_20;
#line 1276 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_21_21;
#line 1276 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_22_22;
#line 1276 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_19_19;

#line 1276 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1276 "prog_io_util.m"
      {
#line 1276 "prog_io_util.m"
        parse_tree__prog_io_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1276 "prog_io_util.m"
        parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1276 "prog_io_util.m"
        parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1276 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_21_21)) == (MR_mktag((MR_Integer) 0)));
#line 1276 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1276 "prog_io_util.m"
          {
#line 1276 "prog_io_util.m"
            parse_tree__prog_io_util__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_21_21, (MR_Integer) 0)));
#line 1276 "prog_io_util.m"
            if ((parse_tree__prog_io_util__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1276 "prog_io_util.m"
              {
#line 1276 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_22_22, (MR_String) "[]") == 0);
#line 1276 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1276 "prog_io_util.m"
                  {
#line 1276 "prog_io_util.m"
                    *parse_tree__prog_io_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1276 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1276 "prog_io_util.m"
                  }
#line 1276 "prog_io_util.m"
              }
#line 1276 "prog_io_util.m"
            else
#line 1278 "prog_io_util.m"
              {
#line 1278 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Head_7;
#line 1278 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Tail_8;
#line 1278 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Var_10;
#line 1278 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Vars_11;
#line 1278 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_16_16;
#line 1278 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_17_17;
#line 1279 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_12_12;

#line 1277 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_22_22, (MR_String) "[|]") == 0);
#line 1278 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1278 "prog_io_util.m"
                  {
#line 1277 "prog_io_util.m"
                    parse_tree__prog_io_util__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, (MR_Integer) 0)));
#line 1277 "prog_io_util.m"
                    parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, (MR_Integer) 1)));
#line 1277 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 1277 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1277 "prog_io_util.m"
                      {
#line 1277 "prog_io_util.m"
                        parse_tree__prog_io_util__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
#line 1277 "prog_io_util.m"
                        parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
#line 1277 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1278 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1278 "prog_io_util.m"
                          {
#line 1279 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Head_7)) == (MR_mktag((MR_Integer) 1)));
#line 1279 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1279 "prog_io_util.m"
                              {
#line 1279 "prog_io_util.m"
                                parse_tree__prog_io_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Head_7, (MR_Integer) 0)));
#line 1279 "prog_io_util.m"
                                parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Head_7, (MR_Integer) 1)));
#line 1280 "prog_io_util.m"
                                {
#line 1280 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_list_of_vars_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_18, parse_tree__prog_io_util__Tail_8, &parse_tree__prog_io_util__Vars_11);
                                }
#line 1278 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 1278 "prog_io_util.m"
                                  {
#line 1278 "prog_io_util.m"
                                    {
#line 1278 "prog_io_util.m"
                                      MR_Word base;
#line 1278 "prog_io_util.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1278 "prog_io_util.m"
                                      *parse_tree__prog_io_util__HeadVar__2_2 = base;
#line 1278 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Var_10));
#line 1278 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Vars_11));
#line 1278 "prog_io_util.m"
                                    }
#line 1278 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1278 "prog_io_util.m"
                                  }
#line 1279 "prog_io_util.m"
                              }
#line 1278 "prog_io_util.m"
                          }
#line 1277 "prog_io_util.m"
                      }
#line 1278 "prog_io_util.m"
                  }
#line 1278 "prog_io_util.m"
              }
#line 1276 "prog_io_util.m"
          }
#line 1276 "prog_io_util.m"
      }
#line 1276 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1276 "prog_io_util.m"
  }
#line 62 "prog_io_util.m"
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
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_known_compound_inst_kind_1);
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_known_compound_type_kind_1);
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_known_inst_kind_1);
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_known_type_kind_1);
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
