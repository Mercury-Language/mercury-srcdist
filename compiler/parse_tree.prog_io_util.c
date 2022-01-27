/*
** Automatically generated from `prog_io_util.m'
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


/* :- module parse_tree.prog_io_util. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_io_util__init
ENDINIT
*/

#include "parse_tree.prog_io_util.mih"


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
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 814 "prog_io_util.m"
struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s {
#line 817 "prog_io_util.m"
  MR_bool parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded;
#line 817 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23;
#line 817 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__Functors_11;
#line 823 "prog_io_util.m"
  jmp_buf parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__commit_0;
#line 823 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13;
#line 823 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F1_14;
#line 823 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F2_15;
#line 823 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__ConsId_17;
#line 823 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20;
#line 823 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_24_24;
#line 814 "prog_io_util.m"
};


#line 127 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 130 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_0;

#line 133 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_1;

#line 136 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_value_ordered_allow_constrained_inst_var_0[2];

#line 139 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_name_ordered_allow_constrained_inst_var_0[2];

#line 142 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_allow_constrained_inst_var_0[2];

#line 145 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_decl_attribute_0_0[1];

#line 148 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_0;

#line 151 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0;

#line 154 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0;

#line 157 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_decl_attribute_0_1[2];

#line 160 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_1;

#line 163 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0;

#line 166 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_decl_attribute_0_2[2];

#line 169 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_2;

#line 172 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_3;

#line 175 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_0[1];

#line 178 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_1[1];

#line 181 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_2[1];

#line 184 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_3[1];

#line 187 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_decl_attribute_0[4];

#line 190 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_decl_attribute_0[4];

#line 193 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_decl_attribute_0[4];

#line 196 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__pair__ti_pair_2parse_tree__prog_io_util__type_ctor_info_decl_attribute_0term__type_ctor_info_context_0;

#line 199 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1pair__ti_pair_2parse_tree__prog_io_util__type_ctor_info_decl_attribute_0term__type_ctor_info_context_0;

#line 202 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 205 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe1_1_0[1];

#line 208 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe1_1_0;

#line 211 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe1_1_1[1];

#line 214 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe1_1_1;

#line 217 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe1_1_0[1];

#line 220 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe1_1_1[1];

#line 223 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_maybe1_1[2];

#line 226 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe1_1[2];

#line 229 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe1_1[2];

#line 232 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe2_2_0[1];

#line 235 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe2_2_0;

#line 238 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe2_2_1[2];

#line 241 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe2_2_1;

#line 244 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe2_2_0[1];

#line 247 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe2_2_1[1];

#line 250 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_maybe2_2[2];

#line 253 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe2_2[2];

#line 256 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe2_2[2];

#line 259 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe3_3_0[1];

#line 262 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe3_3_0;

#line 265 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe3_3_1[3];

#line 268 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe3_3_1;

#line 271 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe3_3_0[1];

#line 274 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe3_3_1[1];

#line 277 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_maybe3_3[2];

#line 280 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe3_3[2];

#line 283 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe3_3[2];

#line 286 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe4_4_0[1];

#line 289 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe4_4_0;

#line 292 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe4_4_1[4];

#line 295 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe4_4_1;

#line 298 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe4_4_0[1];

#line 301 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe4_4_1[1];

#line 304 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_maybe4_4[2];

#line 307 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe4_4[2];

#line 310 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe4_4[2];

#line 313 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_term_1__pseudo_1;

#line 316 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1;

#line 319 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1;

#line 322 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0;

#line 325 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__prog_io_util__ti_maybe2_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0;

#line 328 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__list__pti_list_1__pseudo_1;

#line 331 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__maybe__pti_maybe_1__pseudo_1;

#line 334 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1;

#line 337 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1;

#line 340 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_var_1__pseudo_1;

#line 343 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_0[1];

#line 346 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_0;

#line 349 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_1[1];

#line 352 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_1;

#line 355 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_2[1];

#line 358 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_2;

#line 361 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_3[1];

#line 364 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_3;

#line 367 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_0[1];

#line 370 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_1[1];

#line 373 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_2[1];

#line 376 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_3[1];

#line 379 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_ordinary_state_dot_colon_var_1[4];

#line 382 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_dot_colon_var_1[4];

#line 385 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_dot_colon_var_1[4];

#line 388 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_0[1];

#line 391 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_0;

#line 394 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_1[1];

#line 397 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_1;

#line 400 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_0[1];

#line 403 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_1[1];

#line 406 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_ordinary_state_var_1[2];

#line 409 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_var_1[2];

#line 412 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_var_1[2];

#line 415 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe1_1__pseudo_1;

#line 418 "parse_tree.prog_io_util.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_parse_tree__prog_io_util__pti_maybe1_1__pseudo_1;

#line 421 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_0;

#line 424 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_1;

#line 427 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_value_ordered_quantifier_type_0[2];

#line 430 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_name_ordered_quantifier_type_0[2];

#line 433 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_quantifier_type_0[2];

#line 436 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 439 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 442 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 445 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 448 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____allow_constrained_inst_var_0_0_10001(
#line 451 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 453 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 456 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____allow_constrained_inst_var_0_0_10001(
#line 459 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 461 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 463 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 466 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____decl_attribute_0_0_10001(
#line 469 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 471 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 474 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____decl_attribute_0_0_10001(
#line 477 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 479 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 481 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 484 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____decl_attrs_0_0_10001(
#line 487 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 489 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 492 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____decl_attrs_0_0_10001(
#line 495 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 497 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 499 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 502 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe1_1_0_10001(
#line 505 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 507 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 509 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 512 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe1_1_0_10001(
#line 515 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 517 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 519 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 521 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 524 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe2_2_0_10001(
#line 527 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 529 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 531 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 533 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 536 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe2_2_0_10001(
#line 539 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 541 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 543 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_3,
#line 545 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 547 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5);

#line 550 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe3_3_0_10001(
#line 553 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 555 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 557 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 559 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 561 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5);

#line 564 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe3_3_0_10001(
#line 567 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 569 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 571 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 573 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_4,
#line 575 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5,
#line 577 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_6);

#line 580 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe4_4_0_10001(
#line 583 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 585 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 587 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 589 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 591 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5,
#line 593 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_6);

#line 596 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe4_4_0_10001(
#line 599 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 601 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 603 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 605 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 607 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_5,
#line 609 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_6,
#line 611 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_7);

#line 614 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_1_0_10001(
#line 617 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 619 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 621 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 624 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_1_0_10001(
#line 627 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 629 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 631 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 633 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 636 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_0_0_10001(
#line 639 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 641 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 644 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_0_0_10001(
#line 647 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 649 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 651 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 654 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_pred_or_func_1_0_10001(
#line 657 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 659 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 661 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 664 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_pred_or_func_1_0_10001(
#line 667 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 669 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 671 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 673 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 676 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0_10001(
#line 679 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 681 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 683 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 686 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0_10001(
#line 689 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 691 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 693 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 695 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 698 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_var_1_0_10001(
#line 701 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 703 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 705 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 708 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_var_1_0_10001(
#line 711 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 713 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 715 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 717 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 720 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____parser_1_0_10001(
#line 723 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 725 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 727 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 730 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____parser_1_0_10001(
#line 733 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 735 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 737 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 739 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 742 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____quantifier_type_0_0_10001(
#line 745 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 747 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 750 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____quantifier_type_0_0_10001(
#line 753 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 755 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 757 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 760 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2pvar_0_0_10001(
#line 763 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 765 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 768 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____var2pvar_0_0_10001(
#line 771 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 773 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 775 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 778 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2tvar_0_0_10001(
#line 781 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 783 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 786 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____var2tvar_0_0_10001(
#line 789 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 791 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 793 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 904 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(
#line 904 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Op_5,
#line 904 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_6,
#line 904 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__List0_7,
#line 904 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__OneOrMore_8);

#line 1023 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_var_1_0(
#line 1023 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_14,
#line 1023 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 1023 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 1023 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3);

#line 1023 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_var_1_0(
#line 1023 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
#line 1023 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 1023 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2);

#line 1080 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0(
#line 1080 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_38,
#line 1080 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 1080 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 1080 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3);

#line 1080 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0(
#line 1080 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_13,
#line 1080 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 1080 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2);

#line 1205 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(
#line 1205 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_43,
#line 1205 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_6,
#line 1205 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_7,
#line 1205 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Expected_8,
#line 1205 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_9,
#line 1205 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Spec_10);

#line 1185 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(
#line 1185 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_33,
#line 1185 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_5,
#line 1185 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 1185 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_7,
#line 1185 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Spec_8);

#line 924 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__map_parser_one_or_more_4_p_0(
#line 924 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_29,
#line 924 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Parser_5,
#line 924 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Head_6,
#line 924 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Tail_7,
#line 924 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_8);

#line 838 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_bound_inst_3_p_0(
#line 838 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_4,
#line 838 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__InstTerm_5,
#line 838 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__BoundInst_6);

#line 830 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_bound_inst_list_3_p_0(
#line 830 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
#line 830 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 830 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3);

#line 823 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_1(
#line 823 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg);

#line 823 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_2(
#line 823 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg);

#line 823 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_3(
#line 823 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg);

#line 814 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(
#line 814 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
#line 814 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Disj_6,
#line 814 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Uniqueness_7,
#line 814 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Inst_8);

#line 774 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_simple_builtin_inst_3_p_0(
#line 774 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Name_4,
#line 774 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 774 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Inst_5);

#line 484 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_qualified_term_3_p_0(
#line 484 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 484 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Args_2,
#line 484 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Term_3);

#line 482 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_type_list_2_p_0_1(
#line 482 "prog_io_util.m"
  MR_Box parse_tree__prog_io_util__closure_arg,
#line 482 "prog_io_util.m"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 482 "prog_io_util.m"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2);

#line 479 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_type_list_2_p_0(
#line 479 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Types_3,
#line 479 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Terms_4);

#line 415 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__parse_higher_order_type_5_p_0(
#line 415 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term0_6,
#line 415 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__ArgTypes_7,
#line 415 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__MaybeRet_8,
#line 415 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Purity_9);

#line 390 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_types_2_5_p_0(
#line 390 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 390 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_2,
#line 390 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_3,
#line 390 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__RevTypes_4,
#line 390 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__5_5);


static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_1[27][2];

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_2[10][3];

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_3[13][1];

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_4[1][4];

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_7[1][5];


#line 804 "prog_io_util.m"
/* sealed */ struct parse_tree__prog_io_util__vector_common_type_5_0_s {
#line 804 "prog_io_util.m"
  const MR_String parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_0;
#line 804 "prog_io_util.m"
  const MR_Integer parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_1;
#line 804 "prog_io_util.m"
  const MR_Word parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_2;
#line 804 "prog_io_util.m"
};

static /* final */ const struct parse_tree__prog_io_util__vector_common_type_5_0_s parse_tree__prog_io_util_vector_common_5[32];

#line 1233 "prog_io_util.m"
/* sealed */ struct parse_tree__prog_io_util__vector_common_type_6_0_s {
#line 1233 "prog_io_util.m"
  const MR_String parse_tree__prog_io_util__vector_common_type_6_0__vct_6_f_0;
#line 1233 "prog_io_util.m"
  const MR_Integer parse_tree__prog_io_util__vector_common_type_6_0__vct_6_f_1;
#line 1233 "prog_io_util.m"
};

static /* final */ const struct parse_tree__prog_io_util__vector_common_type_6_0_s parse_tree__prog_io_util_vector_common_6[7];

#line 783 "prog_io_util.m"
/* sealed */ struct parse_tree__prog_io_util__vector_common_type_8_0_s {
#line 783 "prog_io_util.m"
  const MR_String parse_tree__prog_io_util__vector_common_type_8_0__vct_8_f_0;
#line 783 "prog_io_util.m"
  const MR_Integer parse_tree__prog_io_util__vector_common_type_8_0__vct_8_f_1;
#line 783 "prog_io_util.m"
  const MR_Word parse_tree__prog_io_util__vector_common_type_8_0__vct_8_f_2;
#line 783 "prog_io_util.m"
};

static /* final */ const struct parse_tree__prog_io_util__vector_common_type_8_0_s parse_tree__prog_io_util_vector_common_8[32];



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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Repeated state variable"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: ill-formed type"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Repeated variable"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Expected"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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

static /* final */ const struct parse_tree__prog_io_util__vector_common_type_6_0_s parse_tree__prog_io_util_vector_common_6[7] = {
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
};

static /* final */ const struct parse_tree__prog_io_util__vector_common_type_8_0_s parse_tree__prog_io_util_vector_common_8[32] = {
  /* row 0 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "unique_any",
    (MR_Integer) -1,
    (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[22])
  },
  /* row 2 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 3 */
  {
    (MR_String) "not_reached",
    (MR_Integer) -1,
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))
  },
  /* row 4 */
  {
    (MR_String) "mostly_unique_any",
    (MR_Integer) 1,
    (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[21])
  },
  /* row 5 */
  {
    (MR_String) "unique",
    (MR_Integer) -1,
    (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[9])
  },
  /* row 6 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 7 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 8 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 9 */
  {
    (MR_String) "ground",
    (MR_Integer) -1,
    (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[6])
  },
  /* row 10 */
  {
    (MR_String) "free",
    (MR_Integer) -1,
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 11 */
  {
    (MR_String) "clobbered",
    (MR_Integer) -1,
    (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[5])
  },
  /* row 12 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 13 */
  {
    (MR_String) "mostly_clobbered",
    (MR_Integer) -1,
    (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[7])
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
    (MR_String) "clobbered_any",
    (MR_Integer) -1,
    (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[19])
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
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 21 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 22 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 23 */
  {
    (MR_String) "mostly_unique",
    (MR_Integer) -1,
    (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[8])
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
    (MR_String) "any",
    (MR_Integer) -1,
    (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[18])
  },
  /* row 28 */
  {
    (MR_String) "mostly_clobbered_any",
    (MR_Integer) -1,
    (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[20])
  },
  /* row 29 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 30 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
  /* row 31 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_Word) (MR_Integer) 0
  },
};


#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1777 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1785 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_0 = {
  (MR_String) "allow_constrained_inst_var",
  (MR_Integer) 0
};

#line 1791 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_1 = {
  (MR_String) "no_allow_constrained_inst_var",
  (MR_Integer) 1
};

#line 1797 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_value_ordered_allow_constrained_inst_var_0[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_1
};

#line 1803 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_name_ordered_allow_constrained_inst_var_0[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_1
};

#line 1809 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_allow_constrained_inst_var_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1815 "parse_tree.prog_io_util.c"
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

#line 1832 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_decl_attribute_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0
};

#line 1837 "parse_tree.prog_io_util.c"
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

#line 1852 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1860 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1868 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_decl_attribute_0_1[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_quantifier_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0
};

#line 1874 "parse_tree.prog_io_util.c"
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

#line 1889 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1897 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_decl_attribute_0_2[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_quantifier_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0
};

#line 1903 "parse_tree.prog_io_util.c"
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

#line 1918 "parse_tree.prog_io_util.c"
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

#line 1933 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_3
};

#line 1938 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_0
};

#line 1943 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_2[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_1
};

#line 1948 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_3[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_2
};

#line 1953 "parse_tree.prog_io_util.c"
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

#line 1977 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_decl_attribute_0[4] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_2,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_1,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_3
};

#line 1985 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_decl_attribute_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3
};

#line 1993 "parse_tree.prog_io_util.c"
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

#line 2010 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__pair__ti_pair_2parse_tree__prog_io_util__type_ctor_info_decl_attribute_0term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_decl_attribute_0,
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 2019 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1pair__ti_pair_2parse_tree__prog_io_util__type_ctor_info_decl_attribute_0term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__pair__ti_pair_2parse_tree__prog_io_util__type_ctor_info_decl_attribute_0term__type_ctor_info_context_0
  }
};

#line 2027 "parse_tree.prog_io_util.c"
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

#line 2044 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2052 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe1_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 2057 "parse_tree.prog_io_util.c"
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

#line 2072 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe1_1_1[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2077 "parse_tree.prog_io_util.c"
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

#line 2092 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe1_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe1_1_0
};

#line 2097 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe1_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe1_1_1
};

#line 2102 "parse_tree.prog_io_util.c"
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

#line 2116 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe1_1[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe1_1_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe1_1_1
};

#line 2122 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe1_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2128 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_util____Unify____maybe1_1_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____maybe1_1_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "maybe1",
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe1_1 },
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_maybe1_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe1_1
};

#line 2145 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe2_2_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 2150 "parse_tree.prog_io_util.c"
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

#line 2165 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe2_2_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 2171 "parse_tree.prog_io_util.c"
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

#line 2186 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe2_2_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe2_2_0
};

#line 2191 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe2_2_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe2_2_1
};

#line 2196 "parse_tree.prog_io_util.c"
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

#line 2210 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe2_2[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe2_2_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe2_2_1
};

#line 2216 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe2_2[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2222 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe2_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_util____Unify____maybe2_2_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____maybe2_2_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "maybe2",
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe2_2 },
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_maybe2_2 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe2_2
};

#line 2239 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe3_3_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 2244 "parse_tree.prog_io_util.c"
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

#line 2259 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe3_3_1[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) (MR_Integer) 3
};

#line 2266 "parse_tree.prog_io_util.c"
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

#line 2281 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe3_3_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe3_3_0
};

#line 2286 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe3_3_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe3_3_1
};

#line 2291 "parse_tree.prog_io_util.c"
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

#line 2305 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe3_3[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe3_3_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe3_3_1
};

#line 2311 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe3_3[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2317 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe3_3 = {
  (MR_Integer) 3,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_util____Unify____maybe3_3_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____maybe3_3_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "maybe3",
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe3_3 },
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_maybe3_3 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe3_3
};

#line 2334 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe4_4_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 2339 "parse_tree.prog_io_util.c"
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

#line 2354 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe4_4_1[4] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) (MR_Integer) 3,
  (MR_PseudoTypeInfo) (MR_Integer) 4
};

#line 2362 "parse_tree.prog_io_util.c"
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

#line 2377 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe4_4_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe4_4_0
};

#line 2382 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe4_4_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe4_4_1
};

#line 2387 "parse_tree.prog_io_util.c"
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

#line 2401 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe4_4[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe4_4_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe4_4_1
};

#line 2407 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe4_4[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2413 "parse_tree.prog_io_util.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe4_4 = {
  (MR_Integer) 4,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_util____Unify____maybe4_4_0_10001)),
  ((MR_Box) (parse_tree__prog_io_util____Compare____maybe4_4_0_10001)),
  (MR_String) "parse_tree.prog_io_util",
  (MR_String) "maybe4",
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe4_4 },
  {     parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_maybe4_4 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe4_4
};

#line 2430 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2438 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_term_1__pseudo_1
  }
};

#line 2446 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe2_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1
  }
};

#line 2455 "parse_tree.prog_io_util.c"
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
  {     (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2472 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0
  }
};

#line 2480 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__prog_io_util__ti_maybe2_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe2_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__prog_io_util__list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0
  }
};

#line 2489 "parse_tree.prog_io_util.c"
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
  {     (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__ti_maybe2_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2506 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2514 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__maybe__pti_maybe_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2522 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__pti_list_1__pseudo_1,
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__maybe__pti_maybe_1__pseudo_1
  }
};

#line 2531 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe2_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1
  }
};

#line 2540 "parse_tree.prog_io_util.c"
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
  {     (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2557 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2565 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 2570 "parse_tree.prog_io_util.c"
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

#line 2585 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 2590 "parse_tree.prog_io_util.c"
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

#line 2605 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 2610 "parse_tree.prog_io_util.c"
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

#line 2625 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 2630 "parse_tree.prog_io_util.c"
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

#line 2645 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_0
};

#line 2650 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_1
};

#line 2655 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_2[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_2
};

#line 2660 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_3[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_3
};

#line 2665 "parse_tree.prog_io_util.c"
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

#line 2689 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_dot_colon_var_1[4] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_3,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_2,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_1
};

#line 2697 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_dot_colon_var_1[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2705 "parse_tree.prog_io_util.c"
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

#line 2722 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 2727 "parse_tree.prog_io_util.c"
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

#line 2742 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 2747 "parse_tree.prog_io_util.c"
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

#line 2762 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_0
};

#line 2767 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_1
};

#line 2772 "parse_tree.prog_io_util.c"
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

#line 2786 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_var_1[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_1
};

#line 2792 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_var_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2798 "parse_tree.prog_io_util.c"
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

#line 2815 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe1_1__pseudo_1 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2823 "parse_tree.prog_io_util.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_parse_tree__prog_io_util__pti_maybe1_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe1_1__pseudo_1
  }
};

#line 2833 "parse_tree.prog_io_util.c"
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
  {     (MR_PseudoTypeInfo) &parse_tree__prog_io_util____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_parse_tree__prog_io_util__pti_maybe1_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2850 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_0 = {
  (MR_String) "quant_type_exist",
  (MR_Integer) 0
};

#line 2856 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_1 = {
  (MR_String) "quant_type_univ",
  (MR_Integer) 1
};

#line 2862 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_value_ordered_quantifier_type_0[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_1
};

#line 2868 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_name_ordered_quantifier_type_0[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_1
};

#line 2874 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_quantifier_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2880 "parse_tree.prog_io_util.c"
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

#line 2897 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2905 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2914 "parse_tree.prog_io_util.c"
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

#line 2931 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2939 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2948 "parse_tree.prog_io_util.c"
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

#line 2965 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____allow_constrained_inst_var_0_0_10001(
#line 2968 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 2970 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 2972 "parse_tree.prog_io_util.c"
{
#line 2974 "parse_tree.prog_io_util.c"
  {
#line 2976 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 2979 "parse_tree.prog_io_util.c"
    {
#line 2981 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____allow_constrained_inst_var_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 2984 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 2986 "parse_tree.prog_io_util.c"
  }
#line 2988 "parse_tree.prog_io_util.c"
}

#line 2991 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____allow_constrained_inst_var_0_0_10001(
#line 2994 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 2996 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 2998 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3000 "parse_tree.prog_io_util.c"
{
#line 3002 "parse_tree.prog_io_util.c"
  {
#line 3004 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3007 "parse_tree.prog_io_util.c"
    {
#line 3009 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____allow_constrained_inst_var_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3012 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3014 "parse_tree.prog_io_util.c"
  }
#line 3016 "parse_tree.prog_io_util.c"
}

#line 3019 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____decl_attribute_0_0_10001(
#line 3022 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3024 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 3026 "parse_tree.prog_io_util.c"
{
#line 3028 "parse_tree.prog_io_util.c"
  {
#line 3030 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3033 "parse_tree.prog_io_util.c"
    {
#line 3035 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____decl_attribute_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 3038 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3040 "parse_tree.prog_io_util.c"
  }
#line 3042 "parse_tree.prog_io_util.c"
}

#line 3045 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____decl_attribute_0_0_10001(
#line 3048 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 3050 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3052 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3054 "parse_tree.prog_io_util.c"
{
#line 3056 "parse_tree.prog_io_util.c"
  {
#line 3058 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3061 "parse_tree.prog_io_util.c"
    {
#line 3063 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____decl_attribute_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3066 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3068 "parse_tree.prog_io_util.c"
  }
#line 3070 "parse_tree.prog_io_util.c"
}

#line 3073 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____decl_attrs_0_0_10001(
#line 3076 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3078 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 3080 "parse_tree.prog_io_util.c"
{
#line 3082 "parse_tree.prog_io_util.c"
  {
#line 3084 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3087 "parse_tree.prog_io_util.c"
    {
#line 3089 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____decl_attrs_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 3092 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3094 "parse_tree.prog_io_util.c"
  }
#line 3096 "parse_tree.prog_io_util.c"
}

#line 3099 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____decl_attrs_0_0_10001(
#line 3102 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 3104 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3106 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3108 "parse_tree.prog_io_util.c"
{
#line 3110 "parse_tree.prog_io_util.c"
  {
#line 3112 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3115 "parse_tree.prog_io_util.c"
    {
#line 3117 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____decl_attrs_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3120 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3122 "parse_tree.prog_io_util.c"
  }
#line 3124 "parse_tree.prog_io_util.c"
}

#line 3127 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe1_1_0_10001(
#line 3130 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3132 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3134 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3136 "parse_tree.prog_io_util.c"
{
#line 3138 "parse_tree.prog_io_util.c"
  {
#line 3140 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3143 "parse_tree.prog_io_util.c"
    {
#line 3145 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe1_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3148 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3150 "parse_tree.prog_io_util.c"
  }
#line 3152 "parse_tree.prog_io_util.c"
}

#line 3155 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe1_1_0_10001(
#line 3158 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3160 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3162 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3164 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3166 "parse_tree.prog_io_util.c"
{
#line 3168 "parse_tree.prog_io_util.c"
  {
#line 3170 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3173 "parse_tree.prog_io_util.c"
    {
#line 3175 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe1_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3178 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3180 "parse_tree.prog_io_util.c"
  }
#line 3182 "parse_tree.prog_io_util.c"
}

#line 3185 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe2_2_0_10001(
#line 3188 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3190 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3192 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3194 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3196 "parse_tree.prog_io_util.c"
{
#line 3198 "parse_tree.prog_io_util.c"
  {
#line 3200 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3203 "parse_tree.prog_io_util.c"
    {
#line 3205 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe2_2_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3208 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3210 "parse_tree.prog_io_util.c"
  }
#line 3212 "parse_tree.prog_io_util.c"
}

#line 3215 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe2_2_0_10001(
#line 3218 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3220 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3222 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_3,
#line 3224 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 3226 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5)
#line 3228 "parse_tree.prog_io_util.c"
{
#line 3230 "parse_tree.prog_io_util.c"
  {
#line 3232 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3235 "parse_tree.prog_io_util.c"
    {
#line 3237 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe2_2_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_5));
    }
#line 3240 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3242 "parse_tree.prog_io_util.c"
  }
#line 3244 "parse_tree.prog_io_util.c"
}

#line 3247 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe3_3_0_10001(
#line 3250 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3252 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3254 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3256 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 3258 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5)
#line 3260 "parse_tree.prog_io_util.c"
{
#line 3262 "parse_tree.prog_io_util.c"
  {
#line 3264 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3267 "parse_tree.prog_io_util.c"
    {
#line 3269 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe3_3_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_5));
    }
#line 3272 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3274 "parse_tree.prog_io_util.c"
  }
#line 3276 "parse_tree.prog_io_util.c"
}

#line 3279 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe3_3_0_10001(
#line 3282 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3284 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3286 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3288 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_4,
#line 3290 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5,
#line 3292 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_6)
#line 3294 "parse_tree.prog_io_util.c"
{
#line 3296 "parse_tree.prog_io_util.c"
  {
#line 3298 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3301 "parse_tree.prog_io_util.c"
    {
#line 3303 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe3_3_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_5), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_6));
    }
#line 3306 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_4 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3308 "parse_tree.prog_io_util.c"
  }
#line 3310 "parse_tree.prog_io_util.c"
}

#line 3313 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe4_4_0_10001(
#line 3316 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3318 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3320 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3322 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 3324 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5,
#line 3326 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_6)
#line 3328 "parse_tree.prog_io_util.c"
{
#line 3330 "parse_tree.prog_io_util.c"
  {
#line 3332 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3335 "parse_tree.prog_io_util.c"
    {
#line 3337 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe4_4_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_5), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_6));
    }
#line 3340 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3342 "parse_tree.prog_io_util.c"
  }
#line 3344 "parse_tree.prog_io_util.c"
}

#line 3347 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe4_4_0_10001(
#line 3350 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3352 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3354 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3356 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 3358 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_5,
#line 3360 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_6,
#line 3362 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_7)
#line 3364 "parse_tree.prog_io_util.c"
{
#line 3366 "parse_tree.prog_io_util.c"
  {
#line 3368 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3371 "parse_tree.prog_io_util.c"
    {
#line 3373 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe4_4_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_6), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_7));
    }
#line 3376 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_5 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3378 "parse_tree.prog_io_util.c"
  }
#line 3380 "parse_tree.prog_io_util.c"
}

#line 3383 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_1_0_10001(
#line 3386 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3388 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3390 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3392 "parse_tree.prog_io_util.c"
{
#line 3394 "parse_tree.prog_io_util.c"
  {
#line 3396 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3399 "parse_tree.prog_io_util.c"
    {
#line 3401 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe_functor_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3404 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3406 "parse_tree.prog_io_util.c"
  }
#line 3408 "parse_tree.prog_io_util.c"
}

#line 3411 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_1_0_10001(
#line 3414 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3416 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3418 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3420 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3422 "parse_tree.prog_io_util.c"
{
#line 3424 "parse_tree.prog_io_util.c"
  {
#line 3426 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3429 "parse_tree.prog_io_util.c"
    {
#line 3431 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe_functor_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3434 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3436 "parse_tree.prog_io_util.c"
  }
#line 3438 "parse_tree.prog_io_util.c"
}

#line 3441 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_0_0_10001(
#line 3444 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3446 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 3448 "parse_tree.prog_io_util.c"
{
#line 3450 "parse_tree.prog_io_util.c"
  {
#line 3452 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3455 "parse_tree.prog_io_util.c"
    {
#line 3457 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe_functor_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 3460 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3462 "parse_tree.prog_io_util.c"
  }
#line 3464 "parse_tree.prog_io_util.c"
}

#line 3467 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_0_0_10001(
#line 3470 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 3472 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3474 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3476 "parse_tree.prog_io_util.c"
{
#line 3478 "parse_tree.prog_io_util.c"
  {
#line 3480 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3483 "parse_tree.prog_io_util.c"
    {
#line 3485 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe_functor_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3488 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3490 "parse_tree.prog_io_util.c"
  }
#line 3492 "parse_tree.prog_io_util.c"
}

#line 3495 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_pred_or_func_1_0_10001(
#line 3498 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3500 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3502 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3504 "parse_tree.prog_io_util.c"
{
#line 3506 "parse_tree.prog_io_util.c"
  {
#line 3508 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3511 "parse_tree.prog_io_util.c"
    {
#line 3513 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe_pred_or_func_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3516 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3518 "parse_tree.prog_io_util.c"
  }
#line 3520 "parse_tree.prog_io_util.c"
}

#line 3523 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_pred_or_func_1_0_10001(
#line 3526 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3528 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3530 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3532 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3534 "parse_tree.prog_io_util.c"
{
#line 3536 "parse_tree.prog_io_util.c"
  {
#line 3538 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3541 "parse_tree.prog_io_util.c"
    {
#line 3543 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe_pred_or_func_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3546 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3548 "parse_tree.prog_io_util.c"
  }
#line 3550 "parse_tree.prog_io_util.c"
}

#line 3553 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0_10001(
#line 3556 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3558 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3560 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3562 "parse_tree.prog_io_util.c"
{
#line 3564 "parse_tree.prog_io_util.c"
  {
#line 3566 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3569 "parse_tree.prog_io_util.c"
    {
#line 3571 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3574 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3576 "parse_tree.prog_io_util.c"
  }
#line 3578 "parse_tree.prog_io_util.c"
}

#line 3581 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0_10001(
#line 3584 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3586 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3588 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3590 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3592 "parse_tree.prog_io_util.c"
{
#line 3594 "parse_tree.prog_io_util.c"
  {
#line 3596 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3599 "parse_tree.prog_io_util.c"
    {
#line 3601 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3604 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3606 "parse_tree.prog_io_util.c"
  }
#line 3608 "parse_tree.prog_io_util.c"
}

#line 3611 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_var_1_0_10001(
#line 3614 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3616 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3618 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3620 "parse_tree.prog_io_util.c"
{
#line 3622 "parse_tree.prog_io_util.c"
  {
#line 3624 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3627 "parse_tree.prog_io_util.c"
    {
#line 3629 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____ordinary_state_var_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3632 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3634 "parse_tree.prog_io_util.c"
  }
#line 3636 "parse_tree.prog_io_util.c"
}

#line 3639 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_var_1_0_10001(
#line 3642 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3644 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3646 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3648 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3650 "parse_tree.prog_io_util.c"
{
#line 3652 "parse_tree.prog_io_util.c"
  {
#line 3654 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3657 "parse_tree.prog_io_util.c"
    {
#line 3659 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____ordinary_state_var_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3662 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3664 "parse_tree.prog_io_util.c"
  }
#line 3666 "parse_tree.prog_io_util.c"
}

#line 3669 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____parser_1_0_10001(
#line 3672 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3674 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3676 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3678 "parse_tree.prog_io_util.c"
{
#line 3680 "parse_tree.prog_io_util.c"
  {
#line 3682 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3685 "parse_tree.prog_io_util.c"
    {
#line 3687 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____parser_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3690 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3692 "parse_tree.prog_io_util.c"
  }
#line 3694 "parse_tree.prog_io_util.c"
}

#line 3697 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____parser_1_0_10001(
#line 3700 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3702 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3704 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3706 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3708 "parse_tree.prog_io_util.c"
{
#line 3710 "parse_tree.prog_io_util.c"
  {
#line 3712 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3715 "parse_tree.prog_io_util.c"
    {
#line 3717 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____parser_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3720 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3722 "parse_tree.prog_io_util.c"
  }
#line 3724 "parse_tree.prog_io_util.c"
}

#line 3727 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____quantifier_type_0_0_10001(
#line 3730 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3732 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 3734 "parse_tree.prog_io_util.c"
{
#line 3736 "parse_tree.prog_io_util.c"
  {
#line 3738 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3741 "parse_tree.prog_io_util.c"
    {
#line 3743 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____quantifier_type_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 3746 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3748 "parse_tree.prog_io_util.c"
  }
#line 3750 "parse_tree.prog_io_util.c"
}

#line 3753 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____quantifier_type_0_0_10001(
#line 3756 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 3758 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3760 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3762 "parse_tree.prog_io_util.c"
{
#line 3764 "parse_tree.prog_io_util.c"
  {
#line 3766 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3769 "parse_tree.prog_io_util.c"
    {
#line 3771 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____quantifier_type_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3774 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3776 "parse_tree.prog_io_util.c"
  }
#line 3778 "parse_tree.prog_io_util.c"
}

#line 3781 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2pvar_0_0_10001(
#line 3784 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3786 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 3788 "parse_tree.prog_io_util.c"
{
#line 3790 "parse_tree.prog_io_util.c"
  {
#line 3792 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3795 "parse_tree.prog_io_util.c"
    {
#line 3797 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____var2pvar_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 3800 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3802 "parse_tree.prog_io_util.c"
  }
#line 3804 "parse_tree.prog_io_util.c"
}

#line 3807 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____var2pvar_0_0_10001(
#line 3810 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 3812 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3814 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3816 "parse_tree.prog_io_util.c"
{
#line 3818 "parse_tree.prog_io_util.c"
  {
#line 3820 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3823 "parse_tree.prog_io_util.c"
    {
#line 3825 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____var2pvar_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3828 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3830 "parse_tree.prog_io_util.c"
  }
#line 3832 "parse_tree.prog_io_util.c"
}

#line 3835 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2tvar_0_0_10001(
#line 3838 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3840 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 3842 "parse_tree.prog_io_util.c"
{
#line 3844 "parse_tree.prog_io_util.c"
  {
#line 3846 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3849 "parse_tree.prog_io_util.c"
    {
#line 3851 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____var2tvar_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 3854 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3856 "parse_tree.prog_io_util.c"
  }
#line 3858 "parse_tree.prog_io_util.c"
}

#line 3861 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____var2tvar_0_0_10001(
#line 3864 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 3866 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3868 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3870 "parse_tree.prog_io_util.c"
{
#line 3872 "parse_tree.prog_io_util.c"
  {
#line 3874 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3877 "parse_tree.prog_io_util.c"
    {
#line 3879 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____var2tvar_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3882 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3884 "parse_tree.prog_io_util.c"
  }
#line 3886 "parse_tree.prog_io_util.c"
}

#line 904 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(
#line 904 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Op_5,
#line 904 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_6,
#line 904 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__List0_7,
#line 904 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__OneOrMore_8)
#line 904 "prog_io_util.m"
{
#line 912 "prog_io_util.m"
  while (MR_TRUE)
#line 912 "prog_io_util.m"
    {
#line 912 "prog_io_util.m"
      /* tailcall optimized into a loop */
#line 912 "prog_io_util.m"
      {
#line 912 "prog_io_util.m"
        MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_6)) == (MR_mktag((MR_Integer) 0)));
#line 912 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__L_9;
#line 912 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__R_10;
#line 908 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_14_14;
#line 908 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_15_15;
#line 908 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_16_16;
#line 908 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_17_17;
#line 908 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_21_21;
#line 908 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util___Context_11;

#line 908 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 908 "prog_io_util.m"
          {
#line 908 "prog_io_util.m"
            parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_6, (MR_Integer) 0)));
#line 908 "prog_io_util.m"
            parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_6, (MR_Integer) 1)));
#line 908 "prog_io_util.m"
            parse_tree__prog_io_util___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_6, (MR_Integer) 2)));
#line 908 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_14_14)) == (MR_mktag((MR_Integer) 0)));
#line 908 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 908 "prog_io_util.m"
              {
#line 908 "prog_io_util.m"
                parse_tree__prog_io_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_14_14, (MR_Integer) 0)));
#line 908 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Op_5, parse_tree__prog_io_util__V_21_21) == 0);
#line 908 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 908 "prog_io_util.m"
                  {
#line 908 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 908 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 908 "prog_io_util.m"
                      {
#line 908 "prog_io_util.m"
                        parse_tree__prog_io_util__L_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 0)));
#line 908 "prog_io_util.m"
                        parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 1)));
#line 908 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 908 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 908 "prog_io_util.m"
                          {
#line 908 "prog_io_util.m"
                            parse_tree__prog_io_util__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
#line 908 "prog_io_util.m"
                            parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
#line 908 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 908 "prog_io_util.m"
                          }
#line 908 "prog_io_util.m"
                      }
#line 908 "prog_io_util.m"
                  }
#line 908 "prog_io_util.m"
              }
#line 908 "prog_io_util.m"
          }
#line 912 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 910 "prog_io_util.m"
          {
#line 910 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__RHead_12;
#line 910 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__RTail_13;
#line 910 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_18_18;
#line 910 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_19_19;

#line 909 "prog_io_util.m"
            {
#line 909 "prog_io_util.m"
              parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(parse_tree__prog_io_util__Op_5, parse_tree__prog_io_util__R_10, parse_tree__prog_io_util__List0_7, &parse_tree__prog_io_util__V_18_18);
            }
#line 910 "prog_io_util.m"
            parse_tree__prog_io_util__RHead_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_18_18, (MR_Integer) 0)));
#line 910 "prog_io_util.m"
            parse_tree__prog_io_util__RTail_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_18_18, (MR_Integer) 1)));
#line 911 "prog_io_util.m"
            {
#line 911 "prog_io_util.m"
              parse_tree__prog_io_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 911 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 0) = ((MR_Box) (parse_tree__prog_io_util__RHead_12));
#line 911 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io_util__RTail_13));
#line 911 "prog_io_util.m"
            }
#line 911 "prog_io_util.m"
            /* direct tailcall eliminated */
#line 911 "prog_io_util.m"
            {
#line 911 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Term__tmp_copy_6 = parse_tree__prog_io_util__L_9;
#line 911 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__List0__tmp_copy_7 = parse_tree__prog_io_util__V_19_19;

#line 911 "prog_io_util.m"
              parse_tree__prog_io_util__List0_7 = parse_tree__prog_io_util__List0__tmp_copy_7;
#line 911 "prog_io_util.m"
              parse_tree__prog_io_util__Term_6 = parse_tree__prog_io_util__Term__tmp_copy_6;
#line 911 "prog_io_util.m"
            }
#line 911 "prog_io_util.m"
            continue;
#line 910 "prog_io_util.m"
          }
#line 912 "prog_io_util.m"
        else
#line 913 "prog_io_util.m"
          {
#line 913 "prog_io_util.m"
            MR_Word base;
#line 913 "prog_io_util.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 913 "prog_io_util.m"
            *parse_tree__prog_io_util__OneOrMore_8 = base;
#line 913 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Term_6));
#line 913 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__List0_7));
#line 913 "prog_io_util.m"
          }
#line 912 "prog_io_util.m"
      }
#line 912 "prog_io_util.m"
      break;
#line 912 "prog_io_util.m"
    }
#line 904 "prog_io_util.m"
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

#line 73 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____var2pvar_0_0(
#line 73 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 73 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 73 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 73 "prog_io_util.m"
{
#line 73 "prog_io_util.m"
  {
#line 73 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 73 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_4 = parse_tree__prog_io_util__HeadVar__2_2;
#line 73 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_5 = parse_tree__prog_io_util__HeadVar__3_3;

#line 73 "prog_io_util.m"
    {
#line 73 "prog_io_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_2[2], parse_tree__prog_io_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar2_5)));
#line 73 "prog_io_util.m"
      return;
    }
#line 73 "prog_io_util.m"
  }
#line 73 "prog_io_util.m"
}

#line 73 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2pvar_0_0(
#line 73 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 73 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 73 "prog_io_util.m"
{
#line 73 "prog_io_util.m"
  {
#line 73 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 73 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_3 = parse_tree__prog_io_util__HeadVar__1_1;
#line 73 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_4 = parse_tree__prog_io_util__HeadVar__2_2;

#line 73 "prog_io_util.m"
    {
#line 73 "prog_io_util.m"
      return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_2[2], ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar2_4)));
    }
#line 73 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 73 "prog_io_util.m"
  }
#line 73 "prog_io_util.m"
}

#line 203 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____quantifier_type_0_0(
#line 203 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 203 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 203 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 203 "prog_io_util.m"
{
#line 203 "prog_io_util.m"
  {
#line 203 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 203 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 203 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 203 "prog_io_util.m"
    {
#line 203 "prog_io_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__Cast_HeadVar1_4, parse_tree__prog_io_util__Cast_HeadVar2_5);
#line 203 "prog_io_util.m"
      return;
    }
#line 203 "prog_io_util.m"
  }
#line 203 "prog_io_util.m"
}

#line 203 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____quantifier_type_0_0(
#line 203 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_1,
#line 203 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 203 "prog_io_util.m"
{
#line 4226 "parse_tree.prog_io_util.c"
  {
#line 4228 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__HeadVar__2_1 == parse_tree__prog_io_util__HeadVar__2_2);

#line 4231 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 4233 "parse_tree.prog_io_util.c"
  }
#line 203 "prog_io_util.m"
}

#line 75 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____parser_1_0(
#line 75 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_6,
#line 75 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 75 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 75 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 75 "prog_io_util.m"
{
#line 75 "prog_io_util.m"
  {
#line 75 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 75 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_4 = parse_tree__prog_io_util__HeadVar__2_2;
#line 75 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_5 = parse_tree__prog_io_util__HeadVar__3_3;

#line 75 "prog_io_util.m"
    {
#line 75 "prog_io_util.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__prog_io_util__HeadVar__1_1, (MR_Word) parse_tree__prog_io_util__Cast_HeadVar1_4, (MR_Word) parse_tree__prog_io_util__Cast_HeadVar2_5);
#line 75 "prog_io_util.m"
      return;
    }
#line 75 "prog_io_util.m"
  }
#line 75 "prog_io_util.m"
}

#line 75 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____parser_1_0(
#line 75 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_5,
#line 75 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 75 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 75 "prog_io_util.m"
{
#line 75 "prog_io_util.m"
  {
#line 75 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 75 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_3 = parse_tree__prog_io_util__HeadVar__1_1;
#line 75 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_4 = parse_tree__prog_io_util__HeadVar__2_2;

#line 75 "prog_io_util.m"
    {
#line 75 "prog_io_util.m"
      return parse_tree__prog_io_util__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__prog_io_util__Cast_HeadVar1_3, (MR_Word) parse_tree__prog_io_util__Cast_HeadVar2_4);
    }
#line 75 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 75 "prog_io_util.m"
  }
#line 75 "prog_io_util.m"
}

#line 1023 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_var_1_0(
#line 1023 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_14,
#line 1023 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 1023 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 1023 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 1023 "prog_io_util.m"
{
#line 1023 "prog_io_util.m"
  {
#line 1023 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1023 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_12 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 1023 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_13 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 1023 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_12 == parse_tree__prog_io_util__CastY_13);
#line 1023 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 4330 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1023 "prog_io_util.m"
    else
#line 1023 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1023 "prog_io_util.m"
      {
#line 1023 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1023 "prog_io_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1023 "prog_io_util.m"
          {
#line 1023 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1023 "prog_io_util.m"
            {
#line 1023 "prog_io_util.m"
              mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_14, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_19_19, parse_tree__prog_io_util__V_5_5);
#line 1023 "prog_io_util.m"
              return;
            }
#line 1023 "prog_io_util.m"
          }
#line 1023 "prog_io_util.m"
        else
#line 4359 "parse_tree.prog_io_util.c"
          *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1023 "prog_io_util.m"
      }
#line 1023 "prog_io_util.m"
    else
#line 1023 "prog_io_util.m"
      {
#line 1023 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1023 "prog_io_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4372 "parse_tree.prog_io_util.c"
          *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1023 "prog_io_util.m"
        else
#line 1023 "prog_io_util.m"
          {
#line 1023 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1023 "prog_io_util.m"
            {
#line 1023 "prog_io_util.m"
              mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_14, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_20_20, parse_tree__prog_io_util__V_11_11);
#line 1023 "prog_io_util.m"
              return;
            }
#line 1023 "prog_io_util.m"
          }
#line 1023 "prog_io_util.m"
      }
#line 1023 "prog_io_util.m"
  }
#line 1023 "prog_io_util.m"
}

#line 1023 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_var_1_0(
#line 1023 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
#line 1023 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 1023 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 1023 "prog_io_util.m"
{
#line 1023 "prog_io_util.m"
  {
#line 1023 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1023 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_7 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 1023 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_8 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 1023 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_7 == parse_tree__prog_io_util__CastY_8);
#line 1023 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1023 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1023 "prog_io_util.m"
    else
#line 1023 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1023 "prog_io_util.m"
      {
#line 1023 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1023 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_4_4;

#line 1023 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1023 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1023 "prog_io_util.m"
          {
#line 1023 "prog_io_util.m"
            parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 4442 "parse_tree.prog_io_util.c"
            {
#line 4444 "parse_tree.prog_io_util.c"
              return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_9, parse_tree__prog_io_util__V_3_3, parse_tree__prog_io_util__V_4_4);
            }
#line 1023 "prog_io_util.m"
          }
#line 1023 "prog_io_util.m"
      }
#line 1023 "prog_io_util.m"
    else
#line 1023 "prog_io_util.m"
      {
#line 1023 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1023 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_6_6;

#line 1023 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1023 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1023 "prog_io_util.m"
          {
#line 1023 "prog_io_util.m"
            parse_tree__prog_io_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 4468 "parse_tree.prog_io_util.c"
            {
#line 4470 "parse_tree.prog_io_util.c"
              return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_9, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_6_6);
            }
#line 1023 "prog_io_util.m"
          }
#line 1023 "prog_io_util.m"
      }
#line 1023 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1023 "prog_io_util.m"
  }
#line 1023 "prog_io_util.m"
}

#line 1080 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0(
#line 1080 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_38,
#line 1080 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 1080 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 1080 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 1080 "prog_io_util.m"
{
#line 1080 "prog_io_util.m"
  {
#line 1080 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1080 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_36 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 1080 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_37 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 1080 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_36 == parse_tree__prog_io_util__CastY_37);
#line 1080 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 4510 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1080 "prog_io_util.m"
    else
#line 1080 "prog_io_util.m"
#line 1080 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) {
#line 1080 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1080 "prog_io_util.m"
        case (MR_Integer) 0:
#line 1080 "prog_io_util.m"
          {
#line 1080 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1080 "prog_io_util.m"
#line 1080 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 1080 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1080 "prog_io_util.m"
              case (MR_Integer) 0:
#line 1080 "prog_io_util.m"
                {
#line 1080 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1080 "prog_io_util.m"
                  {
#line 1080 "prog_io_util.m"
                    mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_38, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_49_49, parse_tree__prog_io_util__V_5_5);
#line 1080 "prog_io_util.m"
                    return;
                  }
#line 1080 "prog_io_util.m"
                }
#line 1080 "prog_io_util.m"
                break;
#line 1080 "prog_io_util.m"
              case (MR_Integer) 1:
#line 4551 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1080 "prog_io_util.m"
                break;
#line 1080 "prog_io_util.m"
              case (MR_Integer) 2:
#line 4557 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1080 "prog_io_util.m"
                break;
#line 1080 "prog_io_util.m"
              case (MR_Integer) 3:
#line 4563 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1080 "prog_io_util.m"
                break;
#line 1080 "prog_io_util.m"
            }
#line 1080 "prog_io_util.m"
          }
#line 1080 "prog_io_util.m"
          break;
#line 1080 "prog_io_util.m"
        case (MR_Integer) 1:
#line 1080 "prog_io_util.m"
          {
#line 1080 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1080 "prog_io_util.m"
#line 1080 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 1080 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1080 "prog_io_util.m"
              case (MR_Integer) 0:
#line 4587 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1080 "prog_io_util.m"
                break;
#line 1080 "prog_io_util.m"
              case (MR_Integer) 1:
#line 1080 "prog_io_util.m"
                {
#line 1080 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1080 "prog_io_util.m"
                  {
#line 1080 "prog_io_util.m"
                    mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_38, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_50_50, parse_tree__prog_io_util__V_15_15);
#line 1080 "prog_io_util.m"
                    return;
                  }
#line 1080 "prog_io_util.m"
                }
#line 1080 "prog_io_util.m"
                break;
#line 1080 "prog_io_util.m"
              case (MR_Integer) 2:
#line 4611 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1080 "prog_io_util.m"
                break;
#line 1080 "prog_io_util.m"
              case (MR_Integer) 3:
#line 4617 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1080 "prog_io_util.m"
                break;
#line 1080 "prog_io_util.m"
            }
#line 1080 "prog_io_util.m"
          }
#line 1080 "prog_io_util.m"
          break;
#line 1080 "prog_io_util.m"
        case (MR_Integer) 2:
#line 1080 "prog_io_util.m"
          {
#line 1080 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1080 "prog_io_util.m"
#line 1080 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 1080 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1080 "prog_io_util.m"
              case (MR_Integer) 0:
#line 4641 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1080 "prog_io_util.m"
                break;
#line 1080 "prog_io_util.m"
              case (MR_Integer) 1:
#line 4647 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1080 "prog_io_util.m"
                break;
#line 1080 "prog_io_util.m"
              case (MR_Integer) 2:
#line 1080 "prog_io_util.m"
                {
#line 1080 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1080 "prog_io_util.m"
                  {
#line 1080 "prog_io_util.m"
                    mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_38, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_48_48, parse_tree__prog_io_util__V_25_25);
#line 1080 "prog_io_util.m"
                    return;
                  }
#line 1080 "prog_io_util.m"
                }
#line 1080 "prog_io_util.m"
                break;
#line 1080 "prog_io_util.m"
              case (MR_Integer) 3:
#line 4671 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1080 "prog_io_util.m"
                break;
#line 1080 "prog_io_util.m"
            }
#line 1080 "prog_io_util.m"
          }
#line 1080 "prog_io_util.m"
          break;
#line 1080 "prog_io_util.m"
        case (MR_Integer) 3:
#line 1080 "prog_io_util.m"
          {
#line 1080 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1080 "prog_io_util.m"
#line 1080 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 1080 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1080 "prog_io_util.m"
              case (MR_Integer) 0:
#line 4695 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1080 "prog_io_util.m"
                break;
#line 1080 "prog_io_util.m"
              case (MR_Integer) 1:
#line 4701 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1080 "prog_io_util.m"
                break;
#line 1080 "prog_io_util.m"
              case (MR_Integer) 2:
#line 4707 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1080 "prog_io_util.m"
                break;
#line 1080 "prog_io_util.m"
              case (MR_Integer) 3:
#line 1080 "prog_io_util.m"
                {
#line 1080 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1080 "prog_io_util.m"
                  {
#line 1080 "prog_io_util.m"
                    mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_38, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_47_47, parse_tree__prog_io_util__V_35_35);
#line 1080 "prog_io_util.m"
                    return;
                  }
#line 1080 "prog_io_util.m"
                }
#line 1080 "prog_io_util.m"
                break;
#line 1080 "prog_io_util.m"
            }
#line 1080 "prog_io_util.m"
          }
#line 1080 "prog_io_util.m"
          break;
#line 1080 "prog_io_util.m"
      }
#line 1080 "prog_io_util.m"
  }
#line 1080 "prog_io_util.m"
}

#line 1080 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0(
#line 1080 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_13,
#line 1080 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 1080 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 1080 "prog_io_util.m"
{
#line 1080 "prog_io_util.m"
  {
#line 1080 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1080 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_11 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 1080 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_12 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 1080 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_11 == parse_tree__prog_io_util__CastY_12);
#line 1080 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1080 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1080 "prog_io_util.m"
    else
#line 1080 "prog_io_util.m"
#line 1080 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) {
#line 1080 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1080 "prog_io_util.m"
        case (MR_Integer) 0:
#line 1080 "prog_io_util.m"
          {
#line 1080 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1080 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_4_4;

#line 1080 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1080 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1080 "prog_io_util.m"
              {
#line 1080 "prog_io_util.m"
                parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 4792 "parse_tree.prog_io_util.c"
                {
#line 4794 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_13, parse_tree__prog_io_util__V_3_3, parse_tree__prog_io_util__V_4_4);
                }
#line 1080 "prog_io_util.m"
              }
#line 1080 "prog_io_util.m"
          }
#line 1080 "prog_io_util.m"
          break;
#line 1080 "prog_io_util.m"
        case (MR_Integer) 1:
#line 1080 "prog_io_util.m"
          {
#line 1080 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1080 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_6_6;

#line 1080 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1080 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1080 "prog_io_util.m"
              {
#line 1080 "prog_io_util.m"
                parse_tree__prog_io_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 4820 "parse_tree.prog_io_util.c"
                {
#line 4822 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_13, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_6_6);
                }
#line 1080 "prog_io_util.m"
              }
#line 1080 "prog_io_util.m"
          }
#line 1080 "prog_io_util.m"
          break;
#line 1080 "prog_io_util.m"
        case (MR_Integer) 2:
#line 1080 "prog_io_util.m"
          {
#line 1080 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1080 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_8_8;

#line 1080 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1080 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1080 "prog_io_util.m"
              {
#line 1080 "prog_io_util.m"
                parse_tree__prog_io_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 4848 "parse_tree.prog_io_util.c"
                {
#line 4850 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_13, parse_tree__prog_io_util__V_7_7, parse_tree__prog_io_util__V_8_8);
                }
#line 1080 "prog_io_util.m"
              }
#line 1080 "prog_io_util.m"
          }
#line 1080 "prog_io_util.m"
          break;
#line 1080 "prog_io_util.m"
        case (MR_Integer) 3:
#line 1080 "prog_io_util.m"
          {
#line 1080 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1080 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_10_10;

#line 1080 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 1080 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1080 "prog_io_util.m"
              {
#line 1080 "prog_io_util.m"
                parse_tree__prog_io_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 4876 "parse_tree.prog_io_util.c"
                {
#line 4878 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_13, parse_tree__prog_io_util__V_9_9, parse_tree__prog_io_util__V_10_10);
                }
#line 1080 "prog_io_util.m"
              }
#line 1080 "prog_io_util.m"
          }
#line 1080 "prog_io_util.m"
          break;
#line 1080 "prog_io_util.m"
      }
#line 1080 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1080 "prog_io_util.m"
  }
#line 1080 "prog_io_util.m"
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

#line 4924 "parse_tree.prog_io_util.c"
    {
#line 4926 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4928 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 4930 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_6));
#line 4932 "parse_tree.prog_io_util.c"
    }
#line 4934 "parse_tree.prog_io_util.c"
    {
#line 4936 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4938 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 4940 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_6));
#line 4942 "parse_tree.prog_io_util.c"
    }
#line 4944 "parse_tree.prog_io_util.c"
    {
#line 4946 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4948 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 4950 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_13_13, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_9_9));
#line 4952 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_13_13, 2) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_11_11));
#line 4954 "parse_tree.prog_io_util.c"
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

#line 4994 "parse_tree.prog_io_util.c"
    {
#line 4996 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4998 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 5000 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_5));
#line 5002 "parse_tree.prog_io_util.c"
    }
#line 5004 "parse_tree.prog_io_util.c"
    {
#line 5006 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5008 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 5010 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_10_10, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_5));
#line 5012 "parse_tree.prog_io_util.c"
    }
#line 5014 "parse_tree.prog_io_util.c"
    {
#line 5016 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5018 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_12_12, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 5020 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_12_12, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_8_8));
#line 5022 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_12_12, 2) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_10_10));
#line 5024 "parse_tree.prog_io_util.c"
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

#line 5064 "parse_tree.prog_io_util.c"
    {
#line 5066 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5068 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
#line 5070 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_6));
#line 5072 "parse_tree.prog_io_util.c"
    }
#line 5074 "parse_tree.prog_io_util.c"
    {
#line 5076 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5078 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 5080 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_9_9));
#line 5082 "parse_tree.prog_io_util.c"
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

#line 5120 "parse_tree.prog_io_util.c"
    {
#line 5122 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5124 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
#line 5126 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_5));
#line 5128 "parse_tree.prog_io_util.c"
    }
#line 5130 "parse_tree.prog_io_util.c"
    {
#line 5132 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5134 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 5136 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_10_10, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_8_8));
#line 5138 "parse_tree.prog_io_util.c"
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
#line 5246 "parse_tree.prog_io_util.c"
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
#line 5275 "parse_tree.prog_io_util.c"
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
#line 5294 "parse_tree.prog_io_util.c"
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
#line 5316 "parse_tree.prog_io_util.c"
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
#line 5336 "parse_tree.prog_io_util.c"
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
#line 5356 "parse_tree.prog_io_util.c"
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
#line 5439 "parse_tree.prog_io_util.c"
            parse_tree__prog_io_util__TypeInfo_19_19 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[5];
#line 5441 "parse_tree.prog_io_util.c"
            {
#line 5443 "parse_tree.prog_io_util.c"
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
#line 5485 "parse_tree.prog_io_util.c"
            {
#line 5487 "parse_tree.prog_io_util.c"
              parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T1_15, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_9_9);
            }
#line 57 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 57 "prog_io_util.m"
              {
#line 5494 "parse_tree.prog_io_util.c"
                {
#line 5496 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T2_16, parse_tree__prog_io_util__V_6_6, parse_tree__prog_io_util__V_10_10);
                }
#line 57 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 57 "prog_io_util.m"
                  {
#line 5503 "parse_tree.prog_io_util.c"
                    {
#line 5505 "parse_tree.prog_io_util.c"
                      parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T3_17, parse_tree__prog_io_util__V_7_7, parse_tree__prog_io_util__V_11_11);
                    }
#line 57 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 5510 "parse_tree.prog_io_util.c"
                      {
#line 5512 "parse_tree.prog_io_util.c"
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
#line 5560 "parse_tree.prog_io_util.c"
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
#line 5589 "parse_tree.prog_io_util.c"
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
#line 5606 "parse_tree.prog_io_util.c"
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
#line 5626 "parse_tree.prog_io_util.c"
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
#line 5646 "parse_tree.prog_io_util.c"
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
#line 5725 "parse_tree.prog_io_util.c"
            parse_tree__prog_io_util__TypeInfo_16_16 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[5];
#line 5727 "parse_tree.prog_io_util.c"
            {
#line 5729 "parse_tree.prog_io_util.c"
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
#line 5765 "parse_tree.prog_io_util.c"
            {
#line 5767 "parse_tree.prog_io_util.c"
              parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T1_13, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_8_8);
            }
#line 53 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 53 "prog_io_util.m"
              {
#line 5774 "parse_tree.prog_io_util.c"
                {
#line 5776 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T2_14, parse_tree__prog_io_util__V_6_6, parse_tree__prog_io_util__V_9_9);
                }
#line 53 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 5781 "parse_tree.prog_io_util.c"
                  {
#line 5783 "parse_tree.prog_io_util.c"
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
#line 5827 "parse_tree.prog_io_util.c"
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
#line 5856 "parse_tree.prog_io_util.c"
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
#line 5871 "parse_tree.prog_io_util.c"
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
#line 5889 "parse_tree.prog_io_util.c"
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
#line 5964 "parse_tree.prog_io_util.c"
            parse_tree__prog_io_util__TypeInfo_13_13 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[5];
#line 5966 "parse_tree.prog_io_util.c"
            {
#line 5968 "parse_tree.prog_io_util.c"
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
#line 5998 "parse_tree.prog_io_util.c"
            {
#line 6000 "parse_tree.prog_io_util.c"
              parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T1_11, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_7_7);
            }
#line 49 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 6005 "parse_tree.prog_io_util.c"
              {
#line 6007 "parse_tree.prog_io_util.c"
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
#line 6047 "parse_tree.prog_io_util.c"
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
#line 6076 "parse_tree.prog_io_util.c"
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
#line 6089 "parse_tree.prog_io_util.c"
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
#line 6161 "parse_tree.prog_io_util.c"
            parse_tree__prog_io_util__TypeInfo_10_10 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[5];
#line 6163 "parse_tree.prog_io_util.c"
            {
#line 6165 "parse_tree.prog_io_util.c"
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
#line 6189 "parse_tree.prog_io_util.c"
            {
#line 6191 "parse_tree.prog_io_util.c"
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

#line 211 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____decl_attrs_0_0(
#line 211 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 211 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 211 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 211 "prog_io_util.m"
{
#line 211 "prog_io_util.m"
  {
#line 211 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 211 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_4 = parse_tree__prog_io_util__HeadVar__2_2;
#line 211 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_5 = parse_tree__prog_io_util__HeadVar__3_3;

#line 211 "prog_io_util.m"
    {
#line 211 "prog_io_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[4], parse_tree__prog_io_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar2_5)));
#line 211 "prog_io_util.m"
      return;
    }
#line 211 "prog_io_util.m"
  }
#line 211 "prog_io_util.m"
}

#line 211 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____decl_attrs_0_0(
#line 211 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 211 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 211 "prog_io_util.m"
{
#line 211 "prog_io_util.m"
  {
#line 211 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 211 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_3 = parse_tree__prog_io_util__HeadVar__1_1;
#line 211 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_4 = parse_tree__prog_io_util__HeadVar__2_2;

#line 211 "prog_io_util.m"
    {
#line 211 "prog_io_util.m"
      return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[4], ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar2_4)));
    }
#line 211 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 211 "prog_io_util.m"
  }
#line 211 "prog_io_util.m"
}

#line 196 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____decl_attribute_0_0(
#line 196 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 196 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 196 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 196 "prog_io_util.m"
{
#line 196 "prog_io_util.m"
  {
#line 196 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 196 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_46 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 196 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_47 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 196 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_46 == parse_tree__prog_io_util__CastY_47);
#line 196 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 6291 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 196 "prog_io_util.m"
    else
#line 196 "prog_io_util.m"
#line 196 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) {
#line 196 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 196 "prog_io_util.m"
        case (MR_Integer) 0:
#line 196 "prog_io_util.m"
#line 196 "prog_io_util.m"
          switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 196 "prog_io_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 196 "prog_io_util.m"
            case (MR_Integer) 0:
#line 196 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 196 "prog_io_util.m"
              break;
#line 196 "prog_io_util.m"
            case (MR_Integer) 1:
#line 6315 "parse_tree.prog_io_util.c"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 196 "prog_io_util.m"
              break;
#line 196 "prog_io_util.m"
            case (MR_Integer) 2:
#line 6321 "parse_tree.prog_io_util.c"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 196 "prog_io_util.m"
              break;
#line 196 "prog_io_util.m"
            case (MR_Integer) 3:
#line 6327 "parse_tree.prog_io_util.c"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 196 "prog_io_util.m"
              break;
#line 196 "prog_io_util.m"
          }
#line 196 "prog_io_util.m"
          break;
#line 196 "prog_io_util.m"
        case (MR_Integer) 1:
#line 196 "prog_io_util.m"
          {
#line 196 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 196 "prog_io_util.m"
#line 196 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 196 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 196 "prog_io_util.m"
              case (MR_Integer) 0:
#line 6349 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 196 "prog_io_util.m"
                break;
#line 196 "prog_io_util.m"
              case (MR_Integer) 1:
#line 196 "prog_io_util.m"
                {
#line 196 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));
#line 196 "prog_io_util.m"
                  MR_Integer parse_tree__prog_io_util__V_60_60 = (MR_Integer) parse_tree__prog_io_util__V_55_55;
#line 196 "prog_io_util.m"
                  MR_Integer parse_tree__prog_io_util__V_61_61 = (MR_Integer) parse_tree__prog_io_util__V_5_5;

#line 196 "prog_io_util.m"
                  {
#line 196 "prog_io_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_60_60, parse_tree__prog_io_util__V_61_61);
#line 196 "prog_io_util.m"
                    return;
                  }
#line 196 "prog_io_util.m"
                }
#line 196 "prog_io_util.m"
                break;
#line 196 "prog_io_util.m"
              case (MR_Integer) 2:
#line 6377 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 196 "prog_io_util.m"
                break;
#line 196 "prog_io_util.m"
              case (MR_Integer) 3:
#line 6383 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 196 "prog_io_util.m"
                break;
#line 196 "prog_io_util.m"
            }
#line 196 "prog_io_util.m"
          }
#line 196 "prog_io_util.m"
          break;
#line 196 "prog_io_util.m"
        case (MR_Integer) 2:
#line 196 "prog_io_util.m"
          {
#line 196 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 196 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 196 "prog_io_util.m"
#line 196 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 196 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 196 "prog_io_util.m"
              case (MR_Integer) 0:
#line 6409 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 196 "prog_io_util.m"
                break;
#line 196 "prog_io_util.m"
              case (MR_Integer) 1:
#line 6415 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 196 "prog_io_util.m"
                break;
#line 196 "prog_io_util.m"
              case (MR_Integer) 2:
#line 196 "prog_io_util.m"
                {
#line 196 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));
#line 196 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1)));
#line 196 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_20_20;
#line 196 "prog_io_util.m"
                  MR_Integer parse_tree__prog_io_util__V_62_62 = (MR_Integer) parse_tree__prog_io_util__V_57_57;
#line 196 "prog_io_util.m"
                  MR_Integer parse_tree__prog_io_util__V_63_63 = (MR_Integer) parse_tree__prog_io_util__V_18_18;

#line 196 "prog_io_util.m"
                  {
#line 196 "prog_io_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_io_util__V_20_20, parse_tree__prog_io_util__V_62_62, parse_tree__prog_io_util__V_63_63);
                  }
#line 6439 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_20_20 == (MR_Integer) 0);
#line 196 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 196 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 196 "prog_io_util.m"
                    *parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__V_20_20;
#line 196 "prog_io_util.m"
                  else
#line 196 "prog_io_util.m"
                    {
#line 196 "prog_io_util.m"
                      {
#line 196 "prog_io_util.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[3], parse_tree__prog_io_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_util__V_56_56)), ((MR_Box) (parse_tree__prog_io_util__V_19_19)));
#line 196 "prog_io_util.m"
                        return;
                      }
#line 196 "prog_io_util.m"
                    }
#line 196 "prog_io_util.m"
                }
#line 196 "prog_io_util.m"
                break;
#line 196 "prog_io_util.m"
              case (MR_Integer) 3:
#line 6466 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 196 "prog_io_util.m"
                break;
#line 196 "prog_io_util.m"
            }
#line 196 "prog_io_util.m"
          }
#line 196 "prog_io_util.m"
          break;
#line 196 "prog_io_util.m"
        case (MR_Integer) 3:
#line 196 "prog_io_util.m"
          {
#line 196 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 196 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 196 "prog_io_util.m"
#line 196 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 196 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 196 "prog_io_util.m"
              case (MR_Integer) 0:
#line 6492 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 196 "prog_io_util.m"
                break;
#line 196 "prog_io_util.m"
              case (MR_Integer) 1:
#line 6498 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 196 "prog_io_util.m"
                break;
#line 196 "prog_io_util.m"
              case (MR_Integer) 2:
#line 6504 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 196 "prog_io_util.m"
                break;
#line 196 "prog_io_util.m"
              case (MR_Integer) 3:
#line 196 "prog_io_util.m"
                {
#line 196 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));
#line 196 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1)));
#line 196 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_38_38;
#line 196 "prog_io_util.m"
                  MR_Integer parse_tree__prog_io_util__V_58_58 = (MR_Integer) parse_tree__prog_io_util__V_54_54;
#line 196 "prog_io_util.m"
                  MR_Integer parse_tree__prog_io_util__V_59_59 = (MR_Integer) parse_tree__prog_io_util__V_36_36;

#line 196 "prog_io_util.m"
                  {
#line 196 "prog_io_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_io_util__V_38_38, parse_tree__prog_io_util__V_58_58, parse_tree__prog_io_util__V_59_59);
                  }
#line 6528 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_38_38 == (MR_Integer) 0);
#line 196 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 196 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 196 "prog_io_util.m"
                    *parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__V_38_38;
#line 196 "prog_io_util.m"
                  else
#line 196 "prog_io_util.m"
                    {
#line 196 "prog_io_util.m"
                      {
#line 196 "prog_io_util.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[1], parse_tree__prog_io_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_util__V_53_53)), ((MR_Box) (parse_tree__prog_io_util__V_37_37)));
#line 196 "prog_io_util.m"
                        return;
                      }
#line 196 "prog_io_util.m"
                    }
#line 196 "prog_io_util.m"
                }
#line 196 "prog_io_util.m"
                break;
#line 196 "prog_io_util.m"
            }
#line 196 "prog_io_util.m"
          }
#line 196 "prog_io_util.m"
          break;
#line 196 "prog_io_util.m"
      }
#line 196 "prog_io_util.m"
  }
#line 196 "prog_io_util.m"
}

#line 196 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____decl_attribute_0_0(
#line 196 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 196 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 196 "prog_io_util.m"
{
#line 196 "prog_io_util.m"
  {
#line 196 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 196 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_15 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 196 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_16 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 196 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_15 == parse_tree__prog_io_util__CastY_16);
#line 196 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 196 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 196 "prog_io_util.m"
    else
#line 196 "prog_io_util.m"
#line 196 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) {
#line 196 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 196 "prog_io_util.m"
        case (MR_Integer) 0:
#line 196 "prog_io_util.m"
          {
#line 196 "prog_io_util.m"
            MR_Integer parse_tree__prog_io_util__CastX_13 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 196 "prog_io_util.m"
            MR_Integer parse_tree__prog_io_util__CastY_14 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 196 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastY_14 == parse_tree__prog_io_util__CastX_13);
#line 196 "prog_io_util.m"
          }
#line 196 "prog_io_util.m"
          break;
#line 196 "prog_io_util.m"
        case (MR_Integer) 1:
#line 196 "prog_io_util.m"
          {
#line 196 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 196 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_4_4;

#line 196 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 196 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 196 "prog_io_util.m"
              {
#line 196 "prog_io_util.m"
                parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6629 "parse_tree.prog_io_util.c"
                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_3_3 == parse_tree__prog_io_util__V_4_4);
#line 196 "prog_io_util.m"
              }
#line 196 "prog_io_util.m"
          }
#line 196 "prog_io_util.m"
          break;
#line 196 "prog_io_util.m"
        case (MR_Integer) 2:
#line 196 "prog_io_util.m"
          {
#line 196 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TypeInfo_18_18;
#line 196 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 196 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 196 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_7_7;
#line 196 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_8_8;

#line 196 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 196 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 196 "prog_io_util.m"
              {
#line 196 "prog_io_util.m"
                parse_tree__prog_io_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 196 "prog_io_util.m"
                parse_tree__prog_io_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 6662 "parse_tree.prog_io_util.c"
                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_5_5 == parse_tree__prog_io_util__V_7_7);
#line 196 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 196 "prog_io_util.m"
                  {
#line 6668 "parse_tree.prog_io_util.c"
                    parse_tree__prog_io_util__TypeInfo_18_18 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[3];
#line 6670 "parse_tree.prog_io_util.c"
                    {
#line 6672 "parse_tree.prog_io_util.c"
                      return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_18_18, ((MR_Box) (parse_tree__prog_io_util__V_6_6)), ((MR_Box) (parse_tree__prog_io_util__V_8_8)));
                    }
#line 196 "prog_io_util.m"
                  }
#line 196 "prog_io_util.m"
              }
#line 196 "prog_io_util.m"
          }
#line 196 "prog_io_util.m"
          break;
#line 196 "prog_io_util.m"
        case (MR_Integer) 3:
#line 196 "prog_io_util.m"
          {
#line 196 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TypeInfo_17_17;
#line 196 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 196 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 196 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_11_11;
#line 196 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_12_12;

#line 196 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 196 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 196 "prog_io_util.m"
              {
#line 196 "prog_io_util.m"
                parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 196 "prog_io_util.m"
                parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 6708 "parse_tree.prog_io_util.c"
                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_9_9 == parse_tree__prog_io_util__V_11_11);
#line 196 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 196 "prog_io_util.m"
                  {
#line 6714 "parse_tree.prog_io_util.c"
                    parse_tree__prog_io_util__TypeInfo_17_17 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[1];
#line 6716 "parse_tree.prog_io_util.c"
                    {
#line 6718 "parse_tree.prog_io_util.c"
                      return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_17_17, ((MR_Box) (parse_tree__prog_io_util__V_10_10)), ((MR_Box) (parse_tree__prog_io_util__V_12_12)));
                    }
#line 196 "prog_io_util.m"
                  }
#line 196 "prog_io_util.m"
              }
#line 196 "prog_io_util.m"
          }
#line 196 "prog_io_util.m"
          break;
#line 196 "prog_io_util.m"
      }
#line 196 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 196 "prog_io_util.m"
  }
#line 196 "prog_io_util.m"
}

#line 137 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____allow_constrained_inst_var_0_0(
#line 137 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 137 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 137 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 137 "prog_io_util.m"
{
#line 137 "prog_io_util.m"
  {
#line 137 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 137 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 137 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 137 "prog_io_util.m"
    {
#line 137 "prog_io_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__Cast_HeadVar1_4, parse_tree__prog_io_util__Cast_HeadVar2_5);
#line 137 "prog_io_util.m"
      return;
    }
#line 137 "prog_io_util.m"
  }
#line 137 "prog_io_util.m"
}

#line 137 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____allow_constrained_inst_var_0_0(
#line 137 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_1,
#line 137 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 137 "prog_io_util.m"
{
#line 6779 "parse_tree.prog_io_util.c"
  {
#line 6781 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__HeadVar__2_1 == parse_tree__prog_io_util__HeadVar__2_2);

#line 6784 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 6786 "parse_tree.prog_io_util.c"
  }
#line 137 "prog_io_util.m"
}

#line 1205 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(
#line 1205 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_43,
#line 1205 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_6,
#line 1205 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_7,
#line 1205 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Expected_8,
#line 1205 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_9,
#line 1205 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Spec_10)
#line 1205 "prog_io_util.m"
{
#line 1209 "prog_io_util.m"
  {
#line 1209 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1209 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__TermStr_11;
#line 1209 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Pieces_12;
#line 1209 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 1209 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_15_15;
#line 1209 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_18_18;
#line 1209 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_19_19;
#line 1209 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_20_20;
#line 1209 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_23_23;
#line 1209 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_26_26;
#line 1209 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_27_27;
#line 1209 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_36_36;
#line 1209 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_37_37;
#line 1209 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_38_38;
#line 1209 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_39_39;
#line 1209 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_40_40;

#line 1210 "prog_io_util.m"
    {
#line 1210 "prog_io_util.m"
      parse_tree__prog_io_util__TermStr_11 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_util__TypeInfo_for_T_43, parse_tree__prog_io_util__VarSet_7, parse_tree__prog_io_util__Term_9);
    }
#line 1212 "prog_io_util.m"
    {
#line 1212 "prog_io_util.m"
      parse_tree__prog_io_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1212 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1212 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io_util__Expected_8));
#line 1212 "prog_io_util.m"
    }
#line 1213 "prog_io_util.m"
    {
#line 1213 "prog_io_util.m"
      parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1213 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1213 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_11));
#line 1213 "prog_io_util.m"
    }
#line 1213 "prog_io_util.m"
    {
#line 1213 "prog_io_util.m"
      parse_tree__prog_io_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1213 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
#line 1213 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[11])));
#line 1213 "prog_io_util.m"
    }
#line 1213 "prog_io_util.m"
    {
#line 1213 "prog_io_util.m"
      parse_tree__prog_io_util__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1213 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_23_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[26])));
#line 1213 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_23_23, 1) = ((MR_Box) (parse_tree__prog_io_util__V_26_26));
#line 1213 "prog_io_util.m"
    }
#line 1212 "prog_io_util.m"
    {
#line 1212 "prog_io_util.m"
      parse_tree__prog_io_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1212 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[25])));
#line 1212 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, 1) = ((MR_Box) (parse_tree__prog_io_util__V_23_23));
#line 1212 "prog_io_util.m"
    }
#line 1212 "prog_io_util.m"
    {
#line 1212 "prog_io_util.m"
      parse_tree__prog_io_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1212 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, 0) = ((MR_Box) (parse_tree__prog_io_util__V_19_19));
#line 1212 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, 1) = ((MR_Box) (parse_tree__prog_io_util__V_20_20));
#line 1212 "prog_io_util.m"
    }
#line 1212 "prog_io_util.m"
    {
#line 1212 "prog_io_util.m"
      parse_tree__prog_io_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1212 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[24])));
#line 1212 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, 1) = ((MR_Box) (parse_tree__prog_io_util__V_18_18));
#line 1212 "prog_io_util.m"
    }
#line 1211 "prog_io_util.m"
    {
#line 1211 "prog_io_util.m"
      parse_tree__prog_io_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1211 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_13_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1211 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_13_13, 1) = ((MR_Box) (parse_tree__prog_io_util__V_15_15));
#line 1211 "prog_io_util.m"
    }
#line 1211 "prog_io_util.m"
    {
#line 1211 "prog_io_util.m"
      parse_tree__prog_io_util__Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_util__ContextPieces_6, parse_tree__prog_io_util__V_13_13);
    }
#line 1215 "prog_io_util.m"
    {
#line 1215 "prog_io_util.m"
      parse_tree__prog_io_util__V_38_38 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_util__TypeInfo_for_T_43, parse_tree__prog_io_util__Term_9);
    }
#line 1215 "prog_io_util.m"
    {
#line 1215 "prog_io_util.m"
      parse_tree__prog_io_util__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1215 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_12));
#line 1215 "prog_io_util.m"
    }
#line 1215 "prog_io_util.m"
    {
#line 1215 "prog_io_util.m"
      parse_tree__prog_io_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1215 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_util__V_40_40));
#line 1215 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1215 "prog_io_util.m"
    }
#line 1215 "prog_io_util.m"
    {
#line 1215 "prog_io_util.m"
      parse_tree__prog_io_util__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1215 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_util__V_38_38));
#line 1215 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_37_37, 1) = ((MR_Box) (parse_tree__prog_io_util__V_39_39));
#line 1215 "prog_io_util.m"
    }
#line 1215 "prog_io_util.m"
    {
#line 1215 "prog_io_util.m"
      parse_tree__prog_io_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1215 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_util__V_37_37));
#line 1215 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1215 "prog_io_util.m"
    }
#line 1214 "prog_io_util.m"
    {
#line 1214 "prog_io_util.m"
      MR_Word base;
#line 1214 "prog_io_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1214 "prog_io_util.m"
      *parse_tree__prog_io_util__Spec_10 = base;
#line 1214 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1214 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1214 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 1214 "prog_io_util.m"
    }
#line 1209 "prog_io_util.m"
  }
#line 1205 "prog_io_util.m"
}

#line 1185 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(
#line 1185 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_33,
#line 1185 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_5,
#line 1185 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 1185 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_7,
#line 1185 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Spec_8)
#line 1185 "prog_io_util.m"
{
#line 1188 "prog_io_util.m"
  {
#line 1188 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1188 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__TermStr_9;
#line 1188 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Pieces_10;
#line 1188 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;
#line 1188 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 1188 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_16_16;
#line 1188 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_17_17;
#line 1188 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_26_26;
#line 1188 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_27_27;
#line 1188 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_28_28;
#line 1188 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_29_29;
#line 1188 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_30_30;

#line 1189 "prog_io_util.m"
    {
#line 1189 "prog_io_util.m"
      parse_tree__prog_io_util__TermStr_9 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_util__TypeInfo_for_T_33, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__Term_7);
    }
#line 1191 "prog_io_util.m"
    {
#line 1191 "prog_io_util.m"
      parse_tree__prog_io_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1191 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1191 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_17_17, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_9));
#line 1191 "prog_io_util.m"
    }
#line 1191 "prog_io_util.m"
    {
#line 1191 "prog_io_util.m"
      parse_tree__prog_io_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1191 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 0) = ((MR_Box) (parse_tree__prog_io_util__V_17_17));
#line 1191 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[11])));
#line 1191 "prog_io_util.m"
    }
#line 1191 "prog_io_util.m"
    {
#line 1191 "prog_io_util.m"
      parse_tree__prog_io_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1191 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_13_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[23])));
#line 1191 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_13_13, 1) = ((MR_Box) (parse_tree__prog_io_util__V_16_16));
#line 1191 "prog_io_util.m"
    }
#line 1190 "prog_io_util.m"
    {
#line 1190 "prog_io_util.m"
      parse_tree__prog_io_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1190 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_11_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1190 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_11_11, 1) = ((MR_Box) (parse_tree__prog_io_util__V_13_13));
#line 1190 "prog_io_util.m"
    }
#line 1190 "prog_io_util.m"
    {
#line 1190 "prog_io_util.m"
      parse_tree__prog_io_util__Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_util__ContextPieces_5, parse_tree__prog_io_util__V_11_11);
    }
#line 1193 "prog_io_util.m"
    {
#line 1193 "prog_io_util.m"
      parse_tree__prog_io_util__V_28_28 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_util__TypeInfo_for_T_33, parse_tree__prog_io_util__Term_7);
    }
#line 1193 "prog_io_util.m"
    {
#line 1193 "prog_io_util.m"
      parse_tree__prog_io_util__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1193 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_10));
#line 1193 "prog_io_util.m"
    }
#line 1193 "prog_io_util.m"
    {
#line 1193 "prog_io_util.m"
      parse_tree__prog_io_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1193 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io_util__V_30_30));
#line 1193 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1193 "prog_io_util.m"
    }
#line 1193 "prog_io_util.m"
    {
#line 1193 "prog_io_util.m"
      parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1193 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_util__V_28_28));
#line 1193 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io_util__V_29_29));
#line 1193 "prog_io_util.m"
    }
#line 1193 "prog_io_util.m"
    {
#line 1193 "prog_io_util.m"
      parse_tree__prog_io_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1193 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
#line 1193 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1193 "prog_io_util.m"
    }
#line 1192 "prog_io_util.m"
    {
#line 1192 "prog_io_util.m"
      MR_Word base;
#line 1192 "prog_io_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1192 "prog_io_util.m"
      *parse_tree__prog_io_util__Spec_8 = base;
#line 1192 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1192 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1192 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_26_26));
#line 1192 "prog_io_util.m"
    }
#line 1188 "prog_io_util.m"
  }
#line 1185 "prog_io_util.m"
}

#line 924 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__map_parser_one_or_more_4_p_0(
#line 924 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_29,
#line 924 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Parser_5,
#line 924 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Head_6,
#line 924 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Tail_7,
#line 924 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_8)
#line 924 "prog_io_util.m"
{
#line 927 "prog_io_util.m"
  {
#line 927 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 927 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__HeadResult_9;
#line 928 "prog_io_util.m"
    void MR_CALL (* parse_tree__prog_io_util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Parser_5, (MR_Integer) 1)));
#line 928 "prog_io_util.m"
    MR_Box parse_tree__prog_io_util__conv1_HeadResult_9;

#line 928 "prog_io_util.m"
    {
#line 928 "prog_io_util.m"
      parse_tree__prog_io_util__func_0(((MR_Box) parse_tree__prog_io_util__Parser_5), ((MR_Box) (parse_tree__prog_io_util__Head_6)), &parse_tree__prog_io_util__conv1_HeadResult_9);
    }
#line 928 "prog_io_util.m"
    parse_tree__prog_io_util__HeadResult_9 = ((MR_Word) parse_tree__prog_io_util__conv1_HeadResult_9);
#line 938 "prog_io_util.m"
    if ((parse_tree__prog_io_util__Tail_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 930 "prog_io_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadResult_9)) == (MR_mktag((MR_Integer) 0))))
#line 933 "prog_io_util.m"
        *parse_tree__prog_io_util__Result_8 = (MR_Word) parse_tree__prog_io_util__HeadResult_9;
#line 930 "prog_io_util.m"
      else
#line 935 "prog_io_util.m"
        {
#line 935 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__Item_11 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadResult_9, (MR_Integer) 0));
#line 935 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_23_23;

#line 936 "prog_io_util.m"
          {
#line 936 "prog_io_util.m"
            parse_tree__prog_io_util__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 936 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_23_23, 0) = parse_tree__prog_io_util__Item_11;
#line 936 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 936 "prog_io_util.m"
          }
#line 936 "prog_io_util.m"
          {
#line 936 "prog_io_util.m"
            MR_Word base;
#line 936 "prog_io_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 936 "prog_io_util.m"
            *parse_tree__prog_io_util__Result_8 = base;
#line 936 "prog_io_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_23_23));
#line 936 "prog_io_util.m"
          }
#line 935 "prog_io_util.m"
        }
#line 938 "prog_io_util.m"
    else
#line 939 "prog_io_util.m"
      {
#line 939 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__HeadTail_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Tail_7, (MR_Integer) 0)));
#line 939 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TailTail_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Tail_7, (MR_Integer) 1)));
#line 939 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TailResult_14;

#line 940 "prog_io_util.m"
        {
#line 940 "prog_io_util.m"
          parse_tree__prog_io_util__map_parser_one_or_more_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_29, parse_tree__prog_io_util__Parser_5, parse_tree__prog_io_util__HeadTail_12, parse_tree__prog_io_util__TailTail_13, &parse_tree__prog_io_util__TailResult_14);
        }
#line 945 "prog_io_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadResult_9)) == (MR_mktag((MR_Integer) 0))))
#line 945 "prog_io_util.m"
          {
#line 945 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadResult_9, (MR_Integer) 0)));

#line 945 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__TailResult_14)) == (MR_mktag((MR_Integer) 0))))
#line 942 "prog_io_util.m"
              {
#line 942 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailSpecs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TailResult_14, (MR_Integer) 0)));
#line 942 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_22_22;

#line 944 "prog_io_util.m"
                {
#line 944 "prog_io_util.m"
                  parse_tree__prog_io_util__V_22_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_util__V_31_31, parse_tree__prog_io_util__TailSpecs_16);
                }
#line 944 "prog_io_util.m"
                {
#line 944 "prog_io_util.m"
                  MR_Word base;
#line 944 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 944 "prog_io_util.m"
                  *parse_tree__prog_io_util__Result_8 = base;
#line 944 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_22_22));
#line 944 "prog_io_util.m"
                }
#line 942 "prog_io_util.m"
              }
#line 945 "prog_io_util.m"
            else
#line 948 "prog_io_util.m"
              *parse_tree__prog_io_util__Result_8 = (MR_Word) parse_tree__prog_io_util__HeadResult_9;
#line 945 "prog_io_util.m"
          }
#line 945 "prog_io_util.m"
        else
#line 945 "prog_io_util.m"
          {
#line 945 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_32_32 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadResult_9, (MR_Integer) 0));

#line 945 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__TailResult_14)) == (MR_mktag((MR_Integer) 0))))
#line 952 "prog_io_util.m"
              *parse_tree__prog_io_util__Result_8 = parse_tree__prog_io_util__TailResult_14;
#line 945 "prog_io_util.m"
            else
#line 954 "prog_io_util.m"
              {
#line 954 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailItems_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TailResult_14, (MR_Integer) 0)));
#line 954 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_21_21;

#line 956 "prog_io_util.m"
                {
#line 956 "prog_io_util.m"
                  parse_tree__prog_io_util__V_21_21 = mercury__list__one_or_more_cons_2_f_0(parse_tree__prog_io_util__TypeInfo_for_T_29, parse_tree__prog_io_util__V_32_32, parse_tree__prog_io_util__TailItems_20);
                }
#line 956 "prog_io_util.m"
                {
#line 956 "prog_io_util.m"
                  MR_Word base;
#line 956 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 956 "prog_io_util.m"
                  *parse_tree__prog_io_util__Result_8 = base;
#line 956 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_21_21));
#line 956 "prog_io_util.m"
                }
#line 954 "prog_io_util.m"
              }
#line 945 "prog_io_util.m"
          }
#line 939 "prog_io_util.m"
      }
#line 927 "prog_io_util.m"
  }
#line 924 "prog_io_util.m"
}

#line 838 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_bound_inst_3_p_0(
#line 838 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_4,
#line 838 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__InstTerm_5,
#line 838 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__BoundInst_6)
#line 838 "prog_io_util.m"
{
#line 841 "prog_io_util.m"
  {
#line 841 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__InstTerm_5)) == (MR_mktag((MR_Integer) 0)));
#line 841 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Functor_7;
#line 841 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Args0_8;
#line 841 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Args1_12;
#line 841 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__ConsId_14;
#line 841 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Args_21;
#line 842 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 842 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 842 "prog_io_util.m"
      {
#line 842 "prog_io_util.m"
        parse_tree__prog_io_util__Functor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__InstTerm_5, (MR_Integer) 0)));
#line 842 "prog_io_util.m"
        parse_tree__prog_io_util__Args0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__InstTerm_5, (MR_Integer) 1)));
#line 842 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__InstTerm_5, (MR_Integer) 2)));
#line 850 "prog_io_util.m"
#line 850 "prog_io_util.m"
        switch (MR_tag((MR_Word) parse_tree__prog_io_util__Functor_7)) {
#line 850 "prog_io_util.m"
          default:
#line 850 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 850 "prog_io_util.m"
            break;
#line 850 "prog_io_util.m"
          case (MR_Integer) 0:
#line 845 "prog_io_util.m"
            {
#line 845 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__TypeInfo_25_25;
#line 845 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__SymName_11;
#line 845 "prog_io_util.m"
              MR_Integer parse_tree__prog_io_util__Arity_13;
#line 845 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_22_22;

#line 846 "prog_io_util.m"
              {
#line 846 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_from_f_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__Functor_7, parse_tree__prog_io_util__Args0_8, &parse_tree__prog_io_util__SymName_11, &parse_tree__prog_io_util__Args1_12);
              }
#line 845 "prog_io_util.m"
              if (parse_tree__prog_io_util__succeeded)
#line 845 "prog_io_util.m"
                {
#line 7399 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__TypeInfo_25_25 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[1];
#line 848 "prog_io_util.m"
                  {
#line 848 "prog_io_util.m"
                    mercury__list__length_2_p_0(parse_tree__prog_io_util__TypeInfo_25_25, parse_tree__prog_io_util__Args1_12, &parse_tree__prog_io_util__Arity_13);
                  }
#line 849 "prog_io_util.m"
                  {
#line 849 "prog_io_util.m"
                    parse_tree__prog_io_util__V_22_22 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                  }
#line 849 "prog_io_util.m"
                  {
#line 849 "prog_io_util.m"
                    parse_tree__prog_io_util__ConsId_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 849 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__ConsId_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 849 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__ConsId_14, 1) = ((MR_Box) (parse_tree__prog_io_util__SymName_11));
#line 849 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__ConsId_14, 2) = ((MR_Box) (parse_tree__prog_io_util__Arity_13));
#line 849 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__ConsId_14, 3) = ((MR_Box) (parse_tree__prog_io_util__V_22_22));
#line 849 "prog_io_util.m"
                  }
#line 849 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 845 "prog_io_util.m"
                }
#line 845 "prog_io_util.m"
            }
#line 850 "prog_io_util.m"
            break;
#line 850 "prog_io_util.m"
          case (MR_Integer) 1:
#line 850 "prog_io_util.m"
          case (MR_Integer) 2:
#line 860 "prog_io_util.m"
            {
#line 860 "prog_io_util.m"
              MR_Integer parse_tree__prog_io_util__Arity_23;

#line 861 "prog_io_util.m"
              parse_tree__prog_io_util__Args1_12 = parse_tree__prog_io_util__Args0_8;
#line 862 "prog_io_util.m"
              {
#line 862 "prog_io_util.m"
                mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[1], parse_tree__prog_io_util__Args1_12, &parse_tree__prog_io_util__Arity_23);
              }
#line 863 "prog_io_util.m"
              {
#line 863 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = parse_tree__prog_util__make_functor_cons_id_3_p_0(parse_tree__prog_io_util__Functor_7, parse_tree__prog_io_util__Arity_23, &parse_tree__prog_io_util__ConsId_14);
              }
#line 860 "prog_io_util.m"
            }
#line 850 "prog_io_util.m"
            break;
#line 850 "prog_io_util.m"
          case (MR_Integer) 3:
#line 850 "prog_io_util.m"
#line 850 "prog_io_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Functor_7, (MR_Integer) 0)))) {
#line 850 "prog_io_util.m"
              default:
#line 850 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 850 "prog_io_util.m"
                break;
#line 850 "prog_io_util.m"
              case (MR_Integer) 0:
#line 850 "prog_io_util.m"
              case (MR_Integer) 1:
#line 860 "prog_io_util.m"
                {
#line 860 "prog_io_util.m"
                  MR_Integer parse_tree__prog_io_util__Arity_23;

#line 861 "prog_io_util.m"
                  parse_tree__prog_io_util__Args1_12 = parse_tree__prog_io_util__Args0_8;
#line 862 "prog_io_util.m"
                  {
#line 862 "prog_io_util.m"
                    mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[1], parse_tree__prog_io_util__Args1_12, &parse_tree__prog_io_util__Arity_23);
                  }
#line 863 "prog_io_util.m"
                  {
#line 863 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = parse_tree__prog_util__make_functor_cons_id_3_p_0(parse_tree__prog_io_util__Functor_7, parse_tree__prog_io_util__Arity_23, &parse_tree__prog_io_util__ConsId_14);
                  }
#line 860 "prog_io_util.m"
                }
#line 850 "prog_io_util.m"
                break;
#line 850 "prog_io_util.m"
            }
#line 850 "prog_io_util.m"
            break;
#line 850 "prog_io_util.m"
        }
#line 841 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 841 "prog_io_util.m"
          {
#line 865 "prog_io_util.m"
            {
#line 865 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__Args1_12, &parse_tree__prog_io_util__Args_21);
            }
#line 841 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 841 "prog_io_util.m"
              {
#line 866 "prog_io_util.m"
                {
#line 866 "prog_io_util.m"
                  MR_Word base;
#line 866 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 866 "prog_io_util.m"
                  *parse_tree__prog_io_util__BoundInst_6 = base;
#line 866 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__ConsId_14));
#line 866 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_21));
#line 866 "prog_io_util.m"
                }
#line 866 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 841 "prog_io_util.m"
              }
#line 841 "prog_io_util.m"
          }
#line 842 "prog_io_util.m"
      }
#line 841 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 841 "prog_io_util.m"
  }
#line 838 "prog_io_util.m"
}

#line 830 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_bound_inst_list_3_p_0(
#line 830 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
#line 830 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 830 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3)
#line 830 "prog_io_util.m"
{
#line 833 "prog_io_util.m"
  {
#line 833 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 833 "prog_io_util.m"
    if ((parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 833 "prog_io_util.m"
      {
#line 833 "prog_io_util.m"
        *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 833 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 833 "prog_io_util.m"
      }
#line 833 "prog_io_util.m"
    else
#line 834 "prog_io_util.m"
      {
#line 834 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__H0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 834 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__T0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 834 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__H_8;
#line 834 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__T_9;

#line 835 "prog_io_util.m"
        {
#line 835 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_bound_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__H0_6, &parse_tree__prog_io_util__H_8);
        }
#line 834 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 834 "prog_io_util.m"
          {
#line 836 "prog_io_util.m"
            {
#line 836 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_bound_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__T0_7, &parse_tree__prog_io_util__T_9);
            }
#line 834 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 834 "prog_io_util.m"
              {
#line 834 "prog_io_util.m"
                {
#line 834 "prog_io_util.m"
                  MR_Word base;
#line 834 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 834 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 834 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__H_8));
#line 834 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__T_9));
#line 834 "prog_io_util.m"
                }
#line 834 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 834 "prog_io_util.m"
              }
#line 834 "prog_io_util.m"
          }
#line 834 "prog_io_util.m"
      }
#line 833 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 833 "prog_io_util.m"
  }
#line 830 "prog_io_util.m"
}

#line 823 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_1(
#line 823 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg)
#line 823 "prog_io_util.m"
{
#line 823 "prog_io_util.m"
  {
#line 823 "prog_io_util.m"
    struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s * parse_tree__prog_io_util__env_ptr = (struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s *) parse_tree__prog_io_util__env_ptr_arg;

#line 823 "prog_io_util.m"
    MR_builtin_longjmp((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__commit_0, 1);
#line 823 "prog_io_util.m"
  }
#line 823 "prog_io_util.m"
}

#line 823 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_2(
#line 823 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg)
#line 823 "prog_io_util.m"
{
#line 823 "prog_io_util.m"
  {
#line 823 "prog_io_util.m"
    struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s * parse_tree__prog_io_util__env_ptr = (struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s *) parse_tree__prog_io_util__env_ptr_arg;

#line 823 "prog_io_util.m"
    {
#line 824 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_16_16;
#line 825 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_18_18;
#line 826 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_19_19;

#line 824 "prog_io_util.m"
      (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13)) == (MR_mktag((MR_Integer) 1)));
#line 824 "prog_io_util.m"
      if ((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 824 "prog_io_util.m"
        {
#line 824 "prog_io_util.m"
          {
#line 824 "prog_io_util.m"
            (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13, (MR_Integer) 0)));
#line 824 "prog_io_util.m"
            (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13, (MR_Integer) 1)));
#line 824 "prog_io_util.m"
          }
#line 823 "prog_io_util.m"
          {
#line 824 "prog_io_util.m"
            (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 824 "prog_io_util.m"
            if ((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 824 "prog_io_util.m"
              {
#line 824 "prog_io_util.m"
                {
#line 824 "prog_io_util.m"
                  (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20, (MR_Integer) 0)));
#line 824 "prog_io_util.m"
                  parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20, (MR_Integer) 1)));
#line 824 "prog_io_util.m"
                }
#line 823 "prog_io_util.m"
                {
#line 825 "prog_io_util.m"
                  (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__ConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F1_14, (MR_Integer) 0)));
#line 825 "prog_io_util.m"
                  parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F1_14, (MR_Integer) 1)));
#line 826 "prog_io_util.m"
                  (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F2_15, (MR_Integer) 0)));
#line 826 "prog_io_util.m"
                  parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F2_15, (MR_Integer) 1)));
#line 826 "prog_io_util.m"
                  {
#line 826 "prog_io_util.m"
                    (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = parse_tree__prog_data____Unify____cons_id_0_0((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__ConsId_17, (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_24_24);
                  }
#line 826 "prog_io_util.m"
                  if ((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 826 "prog_io_util.m"
                    {
#line 826 "prog_io_util.m"
                      parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_1(parse_tree__prog_io_util__env_ptr);
#line 826 "prog_io_util.m"
                      return;
                    }
#line 823 "prog_io_util.m"
                }
#line 824 "prog_io_util.m"
              }
#line 823 "prog_io_util.m"
          }
#line 824 "prog_io_util.m"
        }
#line 823 "prog_io_util.m"
    }
#line 823 "prog_io_util.m"
  }
#line 823 "prog_io_util.m"
}

#line 823 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_3(
#line 823 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg)
#line 823 "prog_io_util.m"
{
#line 823 "prog_io_util.m"
  {
#line 823 "prog_io_util.m"
    struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s * parse_tree__prog_io_util__env_ptr = (struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s *) parse_tree__prog_io_util__env_ptr_arg;

#line 823 "prog_io_util.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__commit_0) == 0)
#line 823 "prog_io_util.m"
      {
#line 823 "prog_io_util.m"
        {
#line 823 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_12_12;

#line 823 "prog_io_util.m"
          {
#line 823 "prog_io_util.m"
            mercury__list__append_3_p_4((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23, &parse_tree__prog_io_util__V_12_12, &(parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13, (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__Functors_11, parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_2, parse_tree__prog_io_util__env_ptr);
          }
#line 823 "prog_io_util.m"
        }
#line 823 "prog_io_util.m"
        (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = MR_FALSE;
#line 823 "prog_io_util.m"
      }
#line 823 "prog_io_util.m"
    else
#line 823 "prog_io_util.m"
      (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = MR_TRUE;
#line 823 "prog_io_util.m"
  }
#line 823 "prog_io_util.m"
}

#line 814 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(
#line 814 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
#line 814 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Disj_6,
#line 814 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Uniqueness_7,
#line 814 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Inst_8)
#line 814 "prog_io_util.m"
{
#line 814 "prog_io_util.m"
  {
#line 814 "prog_io_util.m"
    struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s parse_tree__prog_io_util__env;

#line 817 "prog_io_util.m"
    {
#line 817 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__Functors0_10;
#line 817 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_21_21;
#line 817 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_31_31;
#line 817 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__H0_38;
#line 817 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__T0_39;
#line 817 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__H_40;
#line 817 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__T_41;

#line 902 "prog_io_util.m"
      {
#line 902 "prog_io_util.m"
        parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ";", parse_tree__prog_io_util__Disj_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_31_31);
      }
#line 872 "prog_io_util.m"
      parse_tree__prog_io_util__H0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_31_31, (MR_Integer) 0)));
#line 872 "prog_io_util.m"
      parse_tree__prog_io_util__T0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_31_31, (MR_Integer) 1)));
#line 835 "prog_io_util.m"
      {
#line 835 "prog_io_util.m"
        (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = parse_tree__prog_io_util__convert_bound_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__H0_38, &parse_tree__prog_io_util__H_40);
      }
#line 817 "prog_io_util.m"
      if ((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 817 "prog_io_util.m"
        {
#line 836 "prog_io_util.m"
          {
#line 836 "prog_io_util.m"
            (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = parse_tree__prog_io_util__convert_bound_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__T0_39, &parse_tree__prog_io_util__T_41);
          }
#line 817 "prog_io_util.m"
          if ((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 817 "prog_io_util.m"
            {
#line 7840 "parse_tree.prog_io_util.c"
              (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 834 "prog_io_util.m"
              {
#line 834 "prog_io_util.m"
                parse_tree__prog_io_util__Functors0_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 834 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Functors0_10, 0) = ((MR_Box) (parse_tree__prog_io_util__H_40));
#line 834 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Functors0_10, 1) = ((MR_Box) (parse_tree__prog_io_util__T_41));
#line 834 "prog_io_util.m"
              }
#line 820 "prog_io_util.m"
              {
#line 820 "prog_io_util.m"
                mercury__list__sort_2_p_0((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23, parse_tree__prog_io_util__Functors0_10, &(parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__Functors_11);
              }
#line 823 "prog_io_util.m"
              {
#line 823 "prog_io_util.m"
                parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_3(&parse_tree__prog_io_util__env);
              }
#line 822 "prog_io_util.m"
              (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = !((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded);
#line 817 "prog_io_util.m"
              if ((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 817 "prog_io_util.m"
                {
#line 828 "prog_io_util.m"
                  parse_tree__prog_io_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 828 "prog_io_util.m"
                  {
#line 828 "prog_io_util.m"
                    MR_Word base;
#line 828 "prog_io_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 828 "prog_io_util.m"
                    *parse_tree__prog_io_util__Inst_8 = base;
#line 828 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 828 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Uniqueness_7));
#line 828 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_21_21));
#line 828 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) ((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__Functors_11));
#line 828 "prog_io_util.m"
                  }
#line 828 "prog_io_util.m"
                  (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = MR_TRUE;
#line 817 "prog_io_util.m"
                }
#line 817 "prog_io_util.m"
            }
#line 817 "prog_io_util.m"
        }
#line 817 "prog_io_util.m"
      return (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded;
#line 817 "prog_io_util.m"
    }
#line 814 "prog_io_util.m"
  }
#line 814 "prog_io_util.m"
}

#line 774 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_simple_builtin_inst_3_p_0(
#line 774 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Name_4,
#line 774 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 774 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Inst_5)
#line 774 "prog_io_util.m"
{
#line 777 "prog_io_util.m"
  {
#line 777 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 783 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__slot_0;
#line 783 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__str_1;

#line 777 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 777 "prog_io_util.m"
      {
#line 783 "prog_io_util.m"
        /* hashed string simple lookup switch */
#line 783 "prog_io_util.m"
        /* compute the hash value of the input string */
#line 783 "prog_io_util.m"
        parse_tree__prog_io_util__slot_0 = ((MR_hash_string5(parse_tree__prog_io_util__Name_4)) & (MR_Integer) 31);
#line 783 "prog_io_util.m"
        /* hash chain loop */
#line 783 "prog_io_util.m"
        do
#line 783 "prog_io_util.m"
          {
#line 783 "prog_io_util.m"
            /* lookup the string for this hash slot */
#line 783 "prog_io_util.m"
            parse_tree__prog_io_util__str_1 = ((&parse_tree__prog_io_util_vector_common_8[0 + parse_tree__prog_io_util__slot_0]))->parse_tree__prog_io_util__vector_common_type_8_0__vct_8_f_0;
#line 783 "prog_io_util.m"
            /* did we find a match? */
#line 783 "prog_io_util.m"
            if ((((parse_tree__prog_io_util__str_1 != NULL)) && ((strcmp(parse_tree__prog_io_util__str_1, parse_tree__prog_io_util__Name_4) == 0))))
#line 783 "prog_io_util.m"
              {
#line 783 "prog_io_util.m"
                /* we found a match; look up the results */
#line 783 "prog_io_util.m"
                *parse_tree__prog_io_util__Inst_5 = ((&parse_tree__prog_io_util_vector_common_8[0 + parse_tree__prog_io_util__slot_0]))->parse_tree__prog_io_util__vector_common_type_8_0__vct_8_f_2;
#line 783 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 783 "prog_io_util.m"
                /* jump out of search loop */
#line 783 "prog_io_util.m"
                goto label_0;
#line 783 "prog_io_util.m"
              }
#line 783 "prog_io_util.m"
            else
#line 783 "prog_io_util.m"
              {
#line 783 "prog_io_util.m"
                /* no match yet, so get next slot in hash chain */
#line 783 "prog_io_util.m"
                parse_tree__prog_io_util__slot_0 = ((&parse_tree__prog_io_util_vector_common_8[0 + parse_tree__prog_io_util__slot_0]))->parse_tree__prog_io_util__vector_common_type_8_0__vct_8_f_1;
#line 783 "prog_io_util.m"
              }
#line 783 "prog_io_util.m"
          }
#line 783 "prog_io_util.m"
        while ((parse_tree__prog_io_util__slot_0 >= (MR_Integer) 0));
#line 783 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 783 "prog_io_util.m"
      label_0:;
#line 777 "prog_io_util.m"
      }
#line 777 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 777 "prog_io_util.m"
  }
#line 774 "prog_io_util.m"
}

#line 484 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_qualified_term_3_p_0(
#line 484 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 484 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Args_2,
#line 484 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Term_3)
#line 484 "prog_io_util.m"
{
#line 486 "prog_io_util.m"
  {
#line 486 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 486 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 489 "prog_io_util.m"
      {
#line 489 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Qualifier_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 489 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 489 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Context_13;
#line 489 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__QualTerm_14;
#line 489 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Term0_15;
#line 489 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_17_17;
#line 489 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_20_20;
#line 489 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_21_21;

#line 490 "prog_io_util.m"
        {
#line 490 "prog_io_util.m"
          parse_tree__prog_io_util__Context_13 = mercury__term__context_init_0_f_0();
        }
#line 491 "prog_io_util.m"
        {
#line 491 "prog_io_util.m"
          parse_tree__prog_io_util__unparse_qualified_term_3_p_0(parse_tree__prog_io_util__Qualifier_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__QualTerm_14);
        }
#line 492 "prog_io_util.m"
        {
#line 492 "prog_io_util.m"
          parse_tree__prog_io_util__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 492 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_17_17, 0) = ((MR_Box) (parse_tree__prog_io_util__Name_10));
#line 492 "prog_io_util.m"
        }
#line 492 "prog_io_util.m"
        {
#line 492 "prog_io_util.m"
          parse_tree__prog_io_util__Term0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 492 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_17_17));
#line 492 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_15, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_2));
#line 492 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_15, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_13));
#line 492 "prog_io_util.m"
        }
#line 493 "prog_io_util.m"
        {
#line 493 "prog_io_util.m"
          parse_tree__prog_io_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 493 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, 0) = ((MR_Box) (parse_tree__prog_io_util__Term0_15));
#line 493 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 493 "prog_io_util.m"
        }
#line 493 "prog_io_util.m"
        {
#line 493 "prog_io_util.m"
          parse_tree__prog_io_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 493 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, 0) = ((MR_Box) (parse_tree__prog_io_util__QualTerm_14));
#line 493 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, 1) = ((MR_Box) (parse_tree__prog_io_util__V_21_21));
#line 493 "prog_io_util.m"
        }
#line 493 "prog_io_util.m"
        {
#line 493 "prog_io_util.m"
          MR_Word base;
#line 493 "prog_io_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 493 "prog_io_util.m"
          *parse_tree__prog_io_util__Term_3 = base;
#line 493 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[12]));
#line 493 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_20_20));
#line 493 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_13));
#line 493 "prog_io_util.m"
        }
#line 489 "prog_io_util.m"
      }
#line 486 "prog_io_util.m"
    else
#line 486 "prog_io_util.m"
      {
#line 486 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 486 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Context_7;
#line 486 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_8_8;

#line 487 "prog_io_util.m"
        {
#line 487 "prog_io_util.m"
          parse_tree__prog_io_util__Context_7 = mercury__term__context_init_0_f_0();
        }
#line 488 "prog_io_util.m"
        {
#line 488 "prog_io_util.m"
          parse_tree__prog_io_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 488 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, 0) = ((MR_Box) (parse_tree__prog_io_util__Name_4));
#line 488 "prog_io_util.m"
        }
#line 488 "prog_io_util.m"
        {
#line 488 "prog_io_util.m"
          MR_Word base;
#line 488 "prog_io_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 488 "prog_io_util.m"
          *parse_tree__prog_io_util__Term_3 = base;
#line 488 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_8_8));
#line 488 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_2));
#line 488 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_7));
#line 488 "prog_io_util.m"
        }
#line 486 "prog_io_util.m"
      }
#line 486 "prog_io_util.m"
  }
#line 484 "prog_io_util.m"
}

#line 482 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_type_list_2_p_0_1(
#line 482 "prog_io_util.m"
  MR_Box parse_tree__prog_io_util__closure_arg,
#line 482 "prog_io_util.m"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 482 "prog_io_util.m"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2)
#line 482 "prog_io_util.m"
{
#line 482 "prog_io_util.m"
  {
#line 482 "prog_io_util.m"
    MR_Box parse_tree__prog_io_util__closure = parse_tree__prog_io_util__closure_arg;
#line 482 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__2_2;

#line 482 "prog_io_util.m"
    {
#line 482 "prog_io_util.m"
      parse_tree__prog_io_util__unparse_type_2_p_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__2_2);
    }
#line 482 "prog_io_util.m"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__2_2));
#line 482 "prog_io_util.m"
  }
#line 482 "prog_io_util.m"
}

#line 479 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_type_list_2_p_0(
#line 479 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Types_3,
#line 479 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Terms_4)
#line 479 "prog_io_util.m"
{
#line 481 "prog_io_util.m"
  {
#line 481 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 482 "prog_io_util.m"
    {
#line 482 "prog_io_util.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_io_util_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_util_scalar_common_2[4], parse_tree__prog_io_util__Types_3, parse_tree__prog_io_util__Terms_4);
#line 482 "prog_io_util.m"
      return;
    }
#line 481 "prog_io_util.m"
  }
#line 479 "prog_io_util.m"
}

#line 415 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__parse_higher_order_type_5_p_0(
#line 415 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term0_6,
#line 415 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__ArgTypes_7,
#line 415 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__MaybeRet_8,
#line 415 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Purity_9)
#line 415 "prog_io_util.m"
{
#line 418 "prog_io_util.m"
  {
#line 418 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 418 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeCtorInfo_8_39;
#line 418 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Term1_10;
#line 418 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Args_14;
#line 418 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__VarSet_36;
#line 418 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__ContextPieces_37;
#line 418 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_38_38;
#line 424 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FuncAndArgs_11;
#line 424 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Ret_12;
#line 420 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_18_18;
#line 420 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_19_19;
#line 420 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_20_20;
#line 420 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_21_21;
#line 420 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_22_22;
#line 420 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;

#line 418 "prog_io_util.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 419 "prog_io_util.m"
    {
#line 419 "prog_io_util.m"
      parse_tree__prog_io_util__parse_purity_annotation_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__Term0_6, parse_tree__prog_io_util__Purity_9, &parse_tree__prog_io_util__Term1_10);
    }
#line 420 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term1_10)) == (MR_mktag((MR_Integer) 0)));
#line 420 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 420 "prog_io_util.m"
      {
#line 420 "prog_io_util.m"
        parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_10, (MR_Integer) 0)));
#line 420 "prog_io_util.m"
        parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_10, (MR_Integer) 1)));
#line 420 "prog_io_util.m"
        parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_10, (MR_Integer) 2)));
#line 420 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 420 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 420 "prog_io_util.m"
          {
#line 420 "prog_io_util.m"
            parse_tree__prog_io_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_18_18, (MR_Integer) 0)));
#line 420 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_19_19, (MR_String) "=") == 0);
#line 420 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 420 "prog_io_util.m"
              {
#line 420 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 420 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 420 "prog_io_util.m"
                  {
#line 420 "prog_io_util.m"
                    parse_tree__prog_io_util__FuncAndArgs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, (MR_Integer) 0)));
#line 420 "prog_io_util.m"
                    parse_tree__prog_io_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, (MR_Integer) 1)));
#line 420 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 420 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 420 "prog_io_util.m"
                      {
#line 420 "prog_io_util.m"
                        parse_tree__prog_io_util__Ret_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, (MR_Integer) 0)));
#line 420 "prog_io_util.m"
                        parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, (MR_Integer) 1)));
#line 420 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 420 "prog_io_util.m"
                      }
#line 420 "prog_io_util.m"
                  }
#line 420 "prog_io_util.m"
              }
#line 420 "prog_io_util.m"
          }
#line 420 "prog_io_util.m"
      }
#line 424 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 421 "prog_io_util.m"
      {
#line 421 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TypeCtorInfo_8_33;
#line 421 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__RetType_16;
#line 421 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_23_23;
#line 421 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_24_24;
#line 421 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__VarSet_30;
#line 421 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__ContextPieces_31;
#line 421 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_32_32;
#line 421 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_15_15;

#line 421 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__FuncAndArgs_11)) == (MR_mktag((MR_Integer) 0)));
#line 421 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 421 "prog_io_util.m"
          {
#line 421 "prog_io_util.m"
            parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncAndArgs_11, (MR_Integer) 0)));
#line 421 "prog_io_util.m"
            parse_tree__prog_io_util__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncAndArgs_11, (MR_Integer) 1)));
#line 421 "prog_io_util.m"
            parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncAndArgs_11, (MR_Integer) 2)));
#line 421 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 421 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 421 "prog_io_util.m"
              {
#line 421 "prog_io_util.m"
                parse_tree__prog_io_util__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_23_23, (MR_Integer) 0)));
#line 421 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_24_24, (MR_String) "func") == 0);
#line 421 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 421 "prog_io_util.m"
                  {
#line 8356 "parse_tree.prog_io_util.c"
                    parse_tree__prog_io_util__TypeCtorInfo_8_33 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 317 "prog_io_util.m"
                    {
#line 317 "prog_io_util.m"
                      parse_tree__prog_io_util__VarSet_30 = mercury__varset__init_0_f_0(parse_tree__prog_io_util__TypeCtorInfo_8_33);
                    }
#line 318 "prog_io_util.m"
                    parse_tree__prog_io_util__ContextPieces_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 319 "prog_io_util.m"
                    {
#line 319 "prog_io_util.m"
                      parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_util__Ret_12, parse_tree__prog_io_util__VarSet_30, parse_tree__prog_io_util__ContextPieces_31, &parse_tree__prog_io_util__V_32_32);
                    }
#line 319 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 319 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 319 "prog_io_util.m"
                      {
#line 319 "prog_io_util.m"
                        parse_tree__prog_io_util__RetType_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_32_32, (MR_Integer) 0)));
#line 423 "prog_io_util.m"
                        {
#line 423 "prog_io_util.m"
                          MR_Word base;
#line 423 "prog_io_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 423 "prog_io_util.m"
                          *parse_tree__prog_io_util__MaybeRet_8 = base;
#line 423 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__RetType_16));
#line 423 "prog_io_util.m"
                        }
#line 423 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 319 "prog_io_util.m"
                      }
#line 421 "prog_io_util.m"
                  }
#line 421 "prog_io_util.m"
              }
#line 421 "prog_io_util.m"
          }
#line 421 "prog_io_util.m"
      }
#line 424 "prog_io_util.m"
    else
#line 425 "prog_io_util.m"
      {
#line 425 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_25_25;
#line 425 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_26_26;
#line 425 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_17_17;

#line 425 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term1_10)) == (MR_mktag((MR_Integer) 0)));
#line 425 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 425 "prog_io_util.m"
          {
#line 425 "prog_io_util.m"
            parse_tree__prog_io_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_10, (MR_Integer) 0)));
#line 425 "prog_io_util.m"
            parse_tree__prog_io_util__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_10, (MR_Integer) 1)));
#line 425 "prog_io_util.m"
            parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_10, (MR_Integer) 2)));
#line 425 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_25_25)) == (MR_mktag((MR_Integer) 0)));
#line 425 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 425 "prog_io_util.m"
              {
#line 425 "prog_io_util.m"
                parse_tree__prog_io_util__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_25_25, (MR_Integer) 0)));
#line 425 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_26_26, (MR_String) "pred") == 0);
#line 425 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 425 "prog_io_util.m"
                  {
#line 426 "prog_io_util.m"
                    *parse_tree__prog_io_util__MaybeRet_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 426 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 425 "prog_io_util.m"
                  }
#line 425 "prog_io_util.m"
              }
#line 425 "prog_io_util.m"
          }
#line 425 "prog_io_util.m"
      }
#line 418 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 418 "prog_io_util.m"
      {
#line 8455 "parse_tree.prog_io_util.c"
        parse_tree__prog_io_util__TypeCtorInfo_8_39 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 383 "prog_io_util.m"
        {
#line 383 "prog_io_util.m"
          parse_tree__prog_io_util__VarSet_36 = mercury__varset__init_0_f_0(parse_tree__prog_io_util__TypeCtorInfo_8_39);
        }
#line 384 "prog_io_util.m"
        parse_tree__prog_io_util__ContextPieces_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 385 "prog_io_util.m"
        {
#line 385 "prog_io_util.m"
          parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_util__Args_14, parse_tree__prog_io_util__VarSet_36, parse_tree__prog_io_util__ContextPieces_37, &parse_tree__prog_io_util__V_38_38);
        }
#line 385 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 385 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 385 "prog_io_util.m"
          *parse_tree__prog_io_util__ArgTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_38_38, (MR_Integer) 0)));
#line 418 "prog_io_util.m"
      }
#line 418 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 418 "prog_io_util.m"
  }
#line 415 "prog_io_util.m"
}

#line 390 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_types_2_5_p_0(
#line 390 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 390 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_2,
#line 390 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_3,
#line 390 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__RevTypes_4,
#line 390 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__5_5)
#line 390 "prog_io_util.m"
{
#line 393 "prog_io_util.m"
  while (MR_TRUE)
#line 393 "prog_io_util.m"
    {
#line 393 "prog_io_util.m"
      /* tailcall optimized into a loop */
#line 393 "prog_io_util.m"
      {
#line 393 "prog_io_util.m"
        MR_bool parse_tree__prog_io_util__succeeded;

#line 393 "prog_io_util.m"
        if ((parse_tree__prog_io_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 393 "prog_io_util.m"
          {
#line 393 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Types_9;

#line 394 "prog_io_util.m"
            {
#line 394 "prog_io_util.m"
              mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_io_util__RevTypes_4, &parse_tree__prog_io_util__Types_9);
            }
#line 393 "prog_io_util.m"
            {
#line 393 "prog_io_util.m"
              MR_Word base;
#line 393 "prog_io_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 393 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__5_5 = base;
#line 393 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Types_9));
#line 393 "prog_io_util.m"
            }
#line 393 "prog_io_util.m"
          }
#line 393 "prog_io_util.m"
        else
#line 395 "prog_io_util.m"
          {
#line 395 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Term_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 395 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Terms_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 395 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Result0_16;

#line 396 "prog_io_util.m"
            {
#line 396 "prog_io_util.m"
              parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_util__Term_10, parse_tree__prog_io_util__VarSet_2, parse_tree__prog_io_util__ContextPieces_3, &parse_tree__prog_io_util__Result0_16);
            }
#line 400 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__Result0_16)) == (MR_mktag((MR_Integer) 0))))
#line 402 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__5_5 = (MR_Word) parse_tree__prog_io_util__Result0_16;
#line 400 "prog_io_util.m"
            else
#line 398 "prog_io_util.m"
              {
#line 398 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Result0_16, (MR_Integer) 0)));
#line 398 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_19_19;

#line 399 "prog_io_util.m"
                {
#line 399 "prog_io_util.m"
                  parse_tree__prog_io_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 399 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 0) = ((MR_Box) (parse_tree__prog_io_util__Type_17));
#line 399 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io_util__RevTypes_4));
#line 399 "prog_io_util.m"
                }
#line 399 "prog_io_util.m"
                /* direct tailcall eliminated */
#line 399 "prog_io_util.m"
                {
#line 399 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__HeadVar__1__tmp_copy_1 = parse_tree__prog_io_util__Terms_11;
#line 399 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__RevTypes__tmp_copy_4 = parse_tree__prog_io_util__V_19_19;

#line 399 "prog_io_util.m"
                  parse_tree__prog_io_util__RevTypes_4 = parse_tree__prog_io_util__RevTypes__tmp_copy_4;
#line 399 "prog_io_util.m"
                  parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__HeadVar__1__tmp_copy_1;
#line 399 "prog_io_util.m"
                }
#line 399 "prog_io_util.m"
                continue;
#line 398 "prog_io_util.m"
              }
#line 395 "prog_io_util.m"
          }
#line 393 "prog_io_util.m"
      }
#line 393 "prog_io_util.m"
      break;
#line 393 "prog_io_util.m"
    }
#line 390 "prog_io_util.m"
}

#line 219 "prog_io_util.m"
MR_String MR_CALL 
parse_tree__prog_io_util__attribute_description_1_f_0(
#line 219 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1)
#line 219 "prog_io_util.m"
{
#line 1279 "prog_io_util.m"
  {
#line 1279 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1279 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__HeadVar__2_2;

#line 1279 "prog_io_util.m"
#line 1279 "prog_io_util.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) {
#line 1279 "prog_io_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1279 "prog_io_util.m"
      case (MR_Integer) 0:
#line 1288 "prog_io_util.m"
        parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "solver type specifier";
#line 1279 "prog_io_util.m"
        break;
#line 1279 "prog_io_util.m"
      case (MR_Integer) 1:
#line 1279 "prog_io_util.m"
        parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "purity specifier";
#line 1279 "prog_io_util.m"
        break;
#line 1279 "prog_io_util.m"
      case (MR_Integer) 2:
#line 1279 "prog_io_util.m"
        {
#line 1279 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1280 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1279 "prog_io_util.m"
#line 1279 "prog_io_util.m"
          switch (parse_tree__prog_io_util__V_15_15) {
#line 1279 "prog_io_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1279 "prog_io_util.m"
            case (MR_Integer) 0:
#line 1283 "prog_io_util.m"
              parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "existential quantifier (\140some\')";
#line 1279 "prog_io_util.m"
              break;
#line 1279 "prog_io_util.m"
            case (MR_Integer) 1:
#line 1281 "prog_io_util.m"
              parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "universal quantifier (\140all\')";
#line 1279 "prog_io_util.m"
              break;
#line 1279 "prog_io_util.m"
          }
#line 1279 "prog_io_util.m"
        }
#line 1279 "prog_io_util.m"
        break;
#line 1279 "prog_io_util.m"
      case (MR_Integer) 3:
#line 1279 "prog_io_util.m"
        {
#line 1279 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1284 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1279 "prog_io_util.m"
#line 1279 "prog_io_util.m"
          switch (parse_tree__prog_io_util__V_13_13) {
#line 1279 "prog_io_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1279 "prog_io_util.m"
            case (MR_Integer) 0:
#line 1287 "prog_io_util.m"
              parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "existentially quantified type class constraint (\140=>\')";
#line 1279 "prog_io_util.m"
              break;
#line 1279 "prog_io_util.m"
            case (MR_Integer) 1:
#line 1285 "prog_io_util.m"
              parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "type class constraint (\140<=\')";
#line 1279 "prog_io_util.m"
              break;
#line 1279 "prog_io_util.m"
          }
#line 1279 "prog_io_util.m"
        }
#line 1279 "prog_io_util.m"
        break;
#line 1279 "prog_io_util.m"
    }
#line 1279 "prog_io_util.m"
    return parse_tree__prog_io_util__HeadVar__2_2;
#line 1279 "prog_io_util.m"
  }
#line 219 "prog_io_util.m"
}

#line 216 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__check_no_attributes_3_p_0(
#line 216 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_35,
#line 216 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Result0_4,
#line 216 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Attributes_5,
#line 216 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_6)
#line 216 "prog_io_util.m"
{
#line 1275 "prog_io_util.m"
  {
#line 1275 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Result0_4)) == (MR_mktag((MR_Integer) 1)));
#line 1275 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Attr_8;
#line 1275 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Context_9;
#line 1266 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 1266 "prog_io_util.m"
    MR_Box parse_tree__prog_io_util__V_7_7;
#line 1267 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_10_10;

#line 1266 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1266 "prog_io_util.m"
      {
#line 1266 "prog_io_util.m"
        parse_tree__prog_io_util__V_7_7 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Result0_4, (MR_Integer) 0));
#line 1267 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Attributes_5)) == (MR_mktag((MR_Integer) 1)));
#line 1267 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1267 "prog_io_util.m"
          {
#line 1267 "prog_io_util.m"
            parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Attributes_5, (MR_Integer) 0)));
#line 1267 "prog_io_util.m"
            parse_tree__prog_io_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Attributes_5, (MR_Integer) 1)));
#line 1267 "prog_io_util.m"
            parse_tree__prog_io_util__Attr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_13_13, (MR_Integer) 0)));
#line 1267 "prog_io_util.m"
            parse_tree__prog_io_util__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_13_13, (MR_Integer) 1)));
#line 1267 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1267 "prog_io_util.m"
          }
#line 1266 "prog_io_util.m"
      }
#line 1275 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1271 "prog_io_util.m"
      {
#line 1271 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Pieces_11;
#line 1271 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Spec_12;
#line 1271 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_16_16;
#line 1271 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_17_17;
#line 1271 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_18_18;
#line 1271 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_27_27;
#line 1271 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_28_28;
#line 1271 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_29_29;
#line 1271 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_30_30;
#line 1271 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_33_33;

#line 1270 "prog_io_util.m"
        {
#line 1270 "prog_io_util.m"
          parse_tree__prog_io_util__V_18_18 = parse_tree__prog_io_util__attribute_description_1_f_0(parse_tree__prog_io_util__Attr_8);
        }
#line 1270 "prog_io_util.m"
        {
#line 1270 "prog_io_util.m"
          parse_tree__prog_io_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1270 "prog_io_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1270 "prog_io_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_17_17, 1) = ((MR_Box) (parse_tree__prog_io_util__V_18_18));
#line 1270 "prog_io_util.m"
        }
#line 1270 "prog_io_util.m"
        {
#line 1270 "prog_io_util.m"
          parse_tree__prog_io_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1270 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 0) = ((MR_Box) (parse_tree__prog_io_util__V_17_17));
#line 1270 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[13])));
#line 1270 "prog_io_util.m"
        }
#line 1270 "prog_io_util.m"
        {
#line 1270 "prog_io_util.m"
          parse_tree__prog_io_util__Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1270 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[17])));
#line 1270 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Pieces_11, 1) = ((MR_Box) (parse_tree__prog_io_util__V_16_16));
#line 1270 "prog_io_util.m"
        }
#line 1273 "prog_io_util.m"
        {
#line 1273 "prog_io_util.m"
          parse_tree__prog_io_util__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1273 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_11));
#line 1273 "prog_io_util.m"
        }
#line 1273 "prog_io_util.m"
        {
#line 1273 "prog_io_util.m"
          parse_tree__prog_io_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1273 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io_util__V_30_30));
#line 1273 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1273 "prog_io_util.m"
        }
#line 1273 "prog_io_util.m"
        {
#line 1273 "prog_io_util.m"
          parse_tree__prog_io_util__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1273 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io_util__Context_9));
#line 1273 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, 1) = ((MR_Box) (parse_tree__prog_io_util__V_29_29));
#line 1273 "prog_io_util.m"
        }
#line 1273 "prog_io_util.m"
        {
#line 1273 "prog_io_util.m"
          parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1273 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_util__V_28_28));
#line 1273 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1273 "prog_io_util.m"
        }
#line 1272 "prog_io_util.m"
        {
#line 1272 "prog_io_util.m"
          parse_tree__prog_io_util__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1272 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1272 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1272 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
#line 1272 "prog_io_util.m"
        }
#line 1274 "prog_io_util.m"
        {
#line 1274 "prog_io_util.m"
          parse_tree__prog_io_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1274 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_12));
#line 1274 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1274 "prog_io_util.m"
        }
#line 1274 "prog_io_util.m"
        {
#line 1274 "prog_io_util.m"
          MR_Word base;
#line 1274 "prog_io_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1274 "prog_io_util.m"
          *parse_tree__prog_io_util__Result_6 = base;
#line 1274 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_33_33));
#line 1274 "prog_io_util.m"
        }
#line 1271 "prog_io_util.m"
      }
#line 1275 "prog_io_util.m"
    else
#line 1276 "prog_io_util.m"
      *parse_tree__prog_io_util__Result_6 = parse_tree__prog_io_util__Result0_4;
#line 1275 "prog_io_util.m"
  }
#line 216 "prog_io_util.m"
}

#line 213 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__parse_decl_attribute_4_p_0(
#line 213 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Functor_5,
#line 213 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ArgTerms_6,
#line 213 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Attribute_7,
#line 213 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__SubTerm_8)
#line 213 "prog_io_util.m"
{
#line 1233 "prog_io_util.m"
  {
#line 1233 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__ArgTerms_6)) == (MR_mktag((MR_Integer) 1)));
#line 1233 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_34_34;
#line 1233 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_35_35;
#line 1233 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__lo_0;
#line 1233 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__hi_1;
#line 1233 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__mid_2;
#line 1233 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__result_3;

#line 1242 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1242 "prog_io_util.m"
      {
#line 1242 "prog_io_util.m"
        parse_tree__prog_io_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ArgTerms_6, (MR_Integer) 0)));
#line 1242 "prog_io_util.m"
        parse_tree__prog_io_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ArgTerms_6, (MR_Integer) 1)));
#line 1233 "prog_io_util.m"
        /* binary string jump switch */
#line 1233 "prog_io_util.m"
        parse_tree__prog_io_util__lo_0 = (MR_Integer) 0;
#line 1233 "prog_io_util.m"
        parse_tree__prog_io_util__hi_1 = (MR_Integer) 6;
#line 1233 "prog_io_util.m"
        do
#line 1233 "prog_io_util.m"
          {
#line 1233 "prog_io_util.m"
            parse_tree__prog_io_util__mid_2 = (((parse_tree__prog_io_util__lo_0 + parse_tree__prog_io_util__hi_1)) / (MR_Integer) 2);
#line 1233 "prog_io_util.m"
            parse_tree__prog_io_util__result_3 = MR_strcmp(parse_tree__prog_io_util__Functor_5, ((&parse_tree__prog_io_util_vector_common_6[0 + parse_tree__prog_io_util__mid_2]))->parse_tree__prog_io_util__vector_common_type_6_0__vct_6_f_0);
#line 1233 "prog_io_util.m"
            if ((parse_tree__prog_io_util__result_3 == (MR_Integer) 0))
#line 1233 "prog_io_util.m"
              {
#line 1233 "prog_io_util.m"
#line 1233 "prog_io_util.m"
                switch (((&parse_tree__prog_io_util_vector_common_6[0 + parse_tree__prog_io_util__mid_2]))->parse_tree__prog_io_util__vector_common_type_6_0__vct_6_f_1) {
#line 1233 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1233 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 1241 "prog_io_util.m"
                    {
#line 1241 "prog_io_util.m"
                      /* case "<=" */
#line 1241 "prog_io_util.m"
                      {
#line 1241 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__ConstraintsTerm_9;
#line 1241 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_23_23;
#line 1241 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_24_24;

#line 1242 "prog_io_util.m"
                        *parse_tree__prog_io_util__SubTerm_8 = parse_tree__prog_io_util__V_35_35;
#line 1242 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1242 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1242 "prog_io_util.m"
                          {
#line 1242 "prog_io_util.m"
                            parse_tree__prog_io_util__ConstraintsTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
#line 1242 "prog_io_util.m"
                            parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 1)));
#line 1242 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1241 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1241 "prog_io_util.m"
                              {
#line 1243 "prog_io_util.m"
                                parse_tree__prog_io_util__V_24_24 = (MR_Integer) 1;
#line 1243 "prog_io_util.m"
                                {
#line 1243 "prog_io_util.m"
                                  MR_Word base;
#line 1243 "prog_io_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1243 "prog_io_util.m"
                                  *parse_tree__prog_io_util__Attribute_7 = base;
#line 1243 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_24_24));
#line 1243 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__ConstraintsTerm_9));
#line 1243 "prog_io_util.m"
                                }
#line 1243 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1241 "prog_io_util.m"
                              }
#line 1242 "prog_io_util.m"
                          }
#line 1241 "prog_io_util.m"
                      }
#line 1241 "prog_io_util.m"
                    }
#line 1233 "prog_io_util.m"
                    break;
#line 1233 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 1245 "prog_io_util.m"
                    {
#line 1245 "prog_io_util.m"
                      /* case "=>" */
#line 1245 "prog_io_util.m"
                      {
#line 1245 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_20_20;
#line 1245 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_21_21;
#line 1245 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__ConstraintsTerm_29;

#line 1246 "prog_io_util.m"
                        *parse_tree__prog_io_util__SubTerm_8 = parse_tree__prog_io_util__V_35_35;
#line 1246 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1246 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1246 "prog_io_util.m"
                          {
#line 1246 "prog_io_util.m"
                            parse_tree__prog_io_util__ConstraintsTerm_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
#line 1246 "prog_io_util.m"
                            parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 1)));
#line 1246 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1245 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1245 "prog_io_util.m"
                              {
#line 1247 "prog_io_util.m"
                                parse_tree__prog_io_util__V_21_21 = (MR_Integer) 0;
#line 1247 "prog_io_util.m"
                                {
#line 1247 "prog_io_util.m"
                                  MR_Word base;
#line 1247 "prog_io_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1247 "prog_io_util.m"
                                  *parse_tree__prog_io_util__Attribute_7 = base;
#line 1247 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_21_21));
#line 1247 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__ConstraintsTerm_29));
#line 1247 "prog_io_util.m"
                                }
#line 1247 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1245 "prog_io_util.m"
                              }
#line 1246 "prog_io_util.m"
                          }
#line 1245 "prog_io_util.m"
                      }
#line 1245 "prog_io_util.m"
                    }
#line 1233 "prog_io_util.m"
                    break;
#line 1233 "prog_io_util.m"
                  case (MR_Integer) 2:
#line 1254 "prog_io_util.m"
                    {
#line 1254 "prog_io_util.m"
                      /* case "all" */
#line 1254 "prog_io_util.m"
                      {
#line 1254 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TypeCtorInfo_33_33;
#line 1254 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_14_14;
#line 1254 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_15_15;
#line 1254 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TVars_31;

#line 1255 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1255 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1255 "prog_io_util.m"
                          {
#line 1255 "prog_io_util.m"
                            *parse_tree__prog_io_util__SubTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
#line 1255 "prog_io_util.m"
                            parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 1)));
#line 1255 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1254 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1254 "prog_io_util.m"
                              {
#line 9122 "parse_tree.prog_io_util.c"
                                parse_tree__prog_io_util__TypeCtorInfo_33_33 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1256 "prog_io_util.m"
                                {
#line 1256 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_list_of_vars_2_p_0(parse_tree__prog_io_util__TypeCtorInfo_33_33, parse_tree__prog_io_util__V_35_35, &parse_tree__prog_io_util__TVars_31);
                                }
#line 1254 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 1254 "prog_io_util.m"
                                  {
#line 1257 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_15_15 = (MR_Integer) 1;
#line 1257 "prog_io_util.m"
                                    {
#line 1257 "prog_io_util.m"
                                      MR_Word base;
#line 1257 "prog_io_util.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1257 "prog_io_util.m"
                                      *parse_tree__prog_io_util__Attribute_7 = base;
#line 1257 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_15_15));
#line 1257 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TVars_31));
#line 1257 "prog_io_util.m"
                                    }
#line 1257 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1254 "prog_io_util.m"
                                  }
#line 1254 "prog_io_util.m"
                              }
#line 1255 "prog_io_util.m"
                          }
#line 1254 "prog_io_util.m"
                      }
#line 1254 "prog_io_util.m"
                    }
#line 1233 "prog_io_util.m"
                    break;
#line 1233 "prog_io_util.m"
                  case (MR_Integer) 3:
#line 1233 "prog_io_util.m"
                    {
#line 1233 "prog_io_util.m"
                      /* case "impure" */
#line 1233 "prog_io_util.m"
                      {
#line 1233 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_28_28;

#line 1234 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1233 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1233 "prog_io_util.m"
                          {
#line 1234 "prog_io_util.m"
                            *parse_tree__prog_io_util__SubTerm_8 = parse_tree__prog_io_util__V_35_35;
#line 1235 "prog_io_util.m"
                            parse_tree__prog_io_util__V_28_28 = (MR_Integer) 2;
#line 1235 "prog_io_util.m"
                            *parse_tree__prog_io_util__Attribute_7 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[11]);
#line 1235 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1233 "prog_io_util.m"
                          }
#line 1233 "prog_io_util.m"
                      }
#line 1233 "prog_io_util.m"
                    }
#line 1233 "prog_io_util.m"
                    break;
#line 1233 "prog_io_util.m"
                  case (MR_Integer) 4:
#line 1237 "prog_io_util.m"
                    {
#line 1237 "prog_io_util.m"
                      /* case "semipure" */
#line 1237 "prog_io_util.m"
                      {
#line 1237 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_26_26;

#line 1238 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1237 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1237 "prog_io_util.m"
                          {
#line 1238 "prog_io_util.m"
                            *parse_tree__prog_io_util__SubTerm_8 = parse_tree__prog_io_util__V_35_35;
#line 1239 "prog_io_util.m"
                            parse_tree__prog_io_util__V_26_26 = (MR_Integer) 1;
#line 1239 "prog_io_util.m"
                            *parse_tree__prog_io_util__Attribute_7 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[10]);
#line 1239 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1237 "prog_io_util.m"
                          }
#line 1237 "prog_io_util.m"
                      }
#line 1237 "prog_io_util.m"
                    }
#line 1233 "prog_io_util.m"
                    break;
#line 1233 "prog_io_util.m"
                  case (MR_Integer) 5:
#line 1259 "prog_io_util.m"
                    {
#line 1259 "prog_io_util.m"
                      /* case "solver" */
#line 1260 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1259 "prog_io_util.m"
                      if (parse_tree__prog_io_util__succeeded)
#line 1259 "prog_io_util.m"
                        {
#line 1260 "prog_io_util.m"
                          *parse_tree__prog_io_util__SubTerm_8 = parse_tree__prog_io_util__V_35_35;
#line 1261 "prog_io_util.m"
                          *parse_tree__prog_io_util__Attribute_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1261 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1259 "prog_io_util.m"
                        }
#line 1259 "prog_io_util.m"
                    }
#line 1233 "prog_io_util.m"
                    break;
#line 1233 "prog_io_util.m"
                  case (MR_Integer) 6:
#line 1249 "prog_io_util.m"
                    {
#line 1249 "prog_io_util.m"
                      /* case "some" */
#line 1249 "prog_io_util.m"
                      {
#line 1249 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TypeCtorInfo_32_32;
#line 1249 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TVars_11;
#line 1249 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_17_17;
#line 1249 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_18_18;

#line 1250 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1250 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1250 "prog_io_util.m"
                          {
#line 1250 "prog_io_util.m"
                            *parse_tree__prog_io_util__SubTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
#line 1250 "prog_io_util.m"
                            parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 1)));
#line 1250 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1249 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1249 "prog_io_util.m"
                              {
#line 9286 "parse_tree.prog_io_util.c"
                                parse_tree__prog_io_util__TypeCtorInfo_32_32 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1251 "prog_io_util.m"
                                {
#line 1251 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_list_of_vars_2_p_0(parse_tree__prog_io_util__TypeCtorInfo_32_32, parse_tree__prog_io_util__V_35_35, &parse_tree__prog_io_util__TVars_11);
                                }
#line 1249 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 1249 "prog_io_util.m"
                                  {
#line 1252 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_18_18 = (MR_Integer) 0;
#line 1252 "prog_io_util.m"
                                    {
#line 1252 "prog_io_util.m"
                                      MR_Word base;
#line 1252 "prog_io_util.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1252 "prog_io_util.m"
                                      *parse_tree__prog_io_util__Attribute_7 = base;
#line 1252 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_18_18));
#line 1252 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TVars_11));
#line 1252 "prog_io_util.m"
                                    }
#line 1252 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1249 "prog_io_util.m"
                                  }
#line 1249 "prog_io_util.m"
                              }
#line 1250 "prog_io_util.m"
                          }
#line 1249 "prog_io_util.m"
                      }
#line 1249 "prog_io_util.m"
                    }
#line 1233 "prog_io_util.m"
                    break;
#line 1233 "prog_io_util.m"
                }
#line 1233 "prog_io_util.m"
                /* jump out of search loop */
#line 1233 "prog_io_util.m"
                goto label_0;
#line 1233 "prog_io_util.m"
              }
#line 1233 "prog_io_util.m"
            else
#line 1233 "prog_io_util.m"
            if ((parse_tree__prog_io_util__result_3 < (MR_Integer) 0))
#line 1233 "prog_io_util.m"
              parse_tree__prog_io_util__hi_1 = (parse_tree__prog_io_util__mid_2 - (MR_Integer) 1);
#line 1233 "prog_io_util.m"
            else
#line 1233 "prog_io_util.m"
              parse_tree__prog_io_util__lo_0 = (parse_tree__prog_io_util__mid_2 + (MR_Integer) 1);
#line 1233 "prog_io_util.m"
          }
#line 1233 "prog_io_util.m"
        while ((parse_tree__prog_io_util__lo_0 <= parse_tree__prog_io_util__hi_1));
#line 1233 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 1233 "prog_io_util.m"
      label_0:;
#line 1242 "prog_io_util.m"
      }
#line 1233 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1233 "prog_io_util.m"
  }
#line 213 "prog_io_util.m"
}

#line 192 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__list_term_to_term_list_2_p_0(
#line 192 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 192 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Terms_4)
#line 192 "prog_io_util.m"
{
#line 1221 "prog_io_util.m"
  {
#line 1221 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 1221 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_19_19;
#line 1221 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_20_20;
#line 1221 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_21_21;
#line 1221 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_18_18;

#line 1221 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1221 "prog_io_util.m"
      {
#line 1221 "prog_io_util.m"
        parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_3, (MR_Integer) 0)));
#line 1221 "prog_io_util.m"
        parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_3, (MR_Integer) 1)));
#line 1221 "prog_io_util.m"
        parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_3, (MR_Integer) 2)));
#line 1225 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_20_20)) == (MR_mktag((MR_Integer) 0)));
#line 1225 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1225 "prog_io_util.m"
          {
#line 1225 "prog_io_util.m"
            parse_tree__prog_io_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_20_20, (MR_Integer) 0)));
#line 1221 "prog_io_util.m"
            if ((parse_tree__prog_io_util__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1225 "prog_io_util.m"
              {
#line 1225 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_21_21, (MR_String) "[]") == 0);
#line 1225 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1225 "prog_io_util.m"
                  {
#line 1226 "prog_io_util.m"
                    *parse_tree__prog_io_util__Terms_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1226 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1225 "prog_io_util.m"
                  }
#line 1225 "prog_io_util.m"
              }
#line 1221 "prog_io_util.m"
            else
#line 1221 "prog_io_util.m"
              {
#line 1221 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__HeadTerm_5;
#line 1221 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailTerm_6;
#line 1221 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailTerms_8;
#line 1221 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_16_16;
#line 1221 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_17_17;

#line 1221 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_21_21, (MR_String) "[|]") == 0);
#line 1221 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1221 "prog_io_util.m"
                  {
#line 1221 "prog_io_util.m"
                    parse_tree__prog_io_util__HeadTerm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, (MR_Integer) 0)));
#line 1221 "prog_io_util.m"
                    parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, (MR_Integer) 1)));
#line 1221 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 1221 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1221 "prog_io_util.m"
                      {
#line 1221 "prog_io_util.m"
                        parse_tree__prog_io_util__TailTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
#line 1221 "prog_io_util.m"
                        parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
#line 1221 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1221 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1221 "prog_io_util.m"
                          {
#line 1222 "prog_io_util.m"
                            {
#line 1222 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__list_term_to_term_list_2_p_0(parse_tree__prog_io_util__TailTerm_6, &parse_tree__prog_io_util__TailTerms_8);
                            }
#line 1221 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1221 "prog_io_util.m"
                              {
#line 1223 "prog_io_util.m"
                                {
#line 1223 "prog_io_util.m"
                                  MR_Word base;
#line 1223 "prog_io_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1223 "prog_io_util.m"
                                  *parse_tree__prog_io_util__Terms_4 = base;
#line 1223 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadTerm_5));
#line 1223 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailTerms_8));
#line 1223 "prog_io_util.m"
                                }
#line 1223 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1221 "prog_io_util.m"
                              }
#line 1221 "prog_io_util.m"
                          }
#line 1221 "prog_io_util.m"
                      }
#line 1221 "prog_io_util.m"
                  }
#line 1221 "prog_io_util.m"
              }
#line 1225 "prog_io_util.m"
          }
#line 1221 "prog_io_util.m"
      }
#line 1221 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1221 "prog_io_util.m"
  }
#line 192 "prog_io_util.m"
}

#line 189 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__map_parser_3_p_0(
#line 189 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_22,
#line 189 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Parser_1,
#line 189 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 189 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3)
#line 189 "prog_io_util.m"
{
#line 960 "prog_io_util.m"
  {
#line 960 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 960 "prog_io_util.m"
    if ((parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 960 "prog_io_util.m"
      {
#line 960 "prog_io_util.m"
        *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[9]);
#line 960 "prog_io_util.m"
      }
#line 960 "prog_io_util.m"
    else
#line 961 "prog_io_util.m"
      {
#line 961 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 961 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 961 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__HeadResult_10;
#line 961 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TailResult_11;
#line 962 "prog_io_util.m"
        void MR_CALL (* parse_tree__prog_io_util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Parser_1, (MR_Integer) 1)));
#line 962 "prog_io_util.m"
        MR_Box parse_tree__prog_io_util__conv1_HeadResult_10;

#line 962 "prog_io_util.m"
        {
#line 962 "prog_io_util.m"
          parse_tree__prog_io_util__func_0(((MR_Box) parse_tree__prog_io_util__Parser_1), ((MR_Box) (parse_tree__prog_io_util__Head_7)), &parse_tree__prog_io_util__conv1_HeadResult_10);
        }
#line 962 "prog_io_util.m"
        parse_tree__prog_io_util__HeadResult_10 = ((MR_Word) parse_tree__prog_io_util__conv1_HeadResult_10);
#line 963 "prog_io_util.m"
        {
#line 963 "prog_io_util.m"
          parse_tree__prog_io_util__map_parser_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_22, parse_tree__prog_io_util__Parser_1, parse_tree__prog_io_util__Tail_8, &parse_tree__prog_io_util__TailResult_11);
        }
#line 968 "prog_io_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadResult_10)) == (MR_mktag((MR_Integer) 0))))
#line 968 "prog_io_util.m"
          {
#line 968 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadResult_10, (MR_Integer) 0)));

#line 968 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__TailResult_11)) == (MR_mktag((MR_Integer) 0))))
#line 965 "prog_io_util.m"
              {
#line 965 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailSpecs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TailResult_11, (MR_Integer) 0)));
#line 965 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_20_20;

#line 967 "prog_io_util.m"
                {
#line 967 "prog_io_util.m"
                  parse_tree__prog_io_util__V_20_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_util__V_24_24, parse_tree__prog_io_util__TailSpecs_13);
                }
#line 967 "prog_io_util.m"
                {
#line 967 "prog_io_util.m"
                  MR_Word base;
#line 967 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 967 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 967 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_20_20));
#line 967 "prog_io_util.m"
                }
#line 965 "prog_io_util.m"
              }
#line 968 "prog_io_util.m"
            else
#line 971 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) parse_tree__prog_io_util__HeadResult_10;
#line 968 "prog_io_util.m"
          }
#line 968 "prog_io_util.m"
        else
#line 968 "prog_io_util.m"
          {
#line 968 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_25_25 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadResult_10, (MR_Integer) 0));

#line 968 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__TailResult_11)) == (MR_mktag((MR_Integer) 0))))
#line 975 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__3_3 = parse_tree__prog_io_util__TailResult_11;
#line 968 "prog_io_util.m"
            else
#line 977 "prog_io_util.m"
              {
#line 977 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailItems_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TailResult_11, (MR_Integer) 0)));
#line 977 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_19_19;

#line 979 "prog_io_util.m"
                {
#line 979 "prog_io_util.m"
                  parse_tree__prog_io_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 979 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 0) = parse_tree__prog_io_util__V_25_25;
#line 979 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io_util__TailItems_18));
#line 979 "prog_io_util.m"
                }
#line 979 "prog_io_util.m"
                {
#line 979 "prog_io_util.m"
                  MR_Word base;
#line 979 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 979 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 979 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_19_19));
#line 979 "prog_io_util.m"
                }
#line 977 "prog_io_util.m"
              }
#line 968 "prog_io_util.m"
          }
#line 961 "prog_io_util.m"
      }
#line 960 "prog_io_util.m"
  }
#line 189 "prog_io_util.m"
}

#line 186 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_list_3_p_0(
#line 186 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_8,
#line 186 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Parser_4,
#line 186 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_5,
#line 186 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_6)
#line 186 "prog_io_util.m"
{
#line 920 "prog_io_util.m"
  {
#line 920 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 920 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__List_7;
#line 920 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Head_12;
#line 920 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Tail_13;
#line 920 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_15_15;

#line 902 "prog_io_util.m"
    {
#line 902 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", parse_tree__prog_io_util__Term_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_15_15);
    }
#line 879 "prog_io_util.m"
    parse_tree__prog_io_util__Head_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_15_15, (MR_Integer) 0)));
#line 879 "prog_io_util.m"
    parse_tree__prog_io_util__Tail_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_15_15, (MR_Integer) 1)));
#line 880 "prog_io_util.m"
    {
#line 880 "prog_io_util.m"
      parse_tree__prog_io_util__List_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 880 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__List_7, 0) = ((MR_Box) (parse_tree__prog_io_util__Head_12));
#line 880 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__List_7, 1) = ((MR_Box) (parse_tree__prog_io_util__Tail_13));
#line 880 "prog_io_util.m"
    }
#line 922 "prog_io_util.m"
    {
#line 922 "prog_io_util.m"
      parse_tree__prog_io_util__map_parser_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_8, parse_tree__prog_io_util__Parser_4, parse_tree__prog_io_util__List_7, parse_tree__prog_io_util__Result_6);
#line 922 "prog_io_util.m"
      return;
    }
#line 920 "prog_io_util.m"
  }
#line 186 "prog_io_util.m"
}

#line 184 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_one_or_more_3_p_0(
#line 184 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_10,
#line 184 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Parser_4,
#line 184 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_5,
#line 184 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_6)
#line 184 "prog_io_util.m"
{
#line 916 "prog_io_util.m"
  {
#line 916 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 916 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Head_7;
#line 916 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Tail_8;
#line 916 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 902 "prog_io_util.m"
    {
#line 902 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", parse_tree__prog_io_util__Term_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_9_9);
    }
#line 917 "prog_io_util.m"
    parse_tree__prog_io_util__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_9_9, (MR_Integer) 0)));
#line 917 "prog_io_util.m"
    parse_tree__prog_io_util__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_9_9, (MR_Integer) 1)));
#line 918 "prog_io_util.m"
    {
#line 918 "prog_io_util.m"
      parse_tree__prog_io_util__map_parser_one_or_more_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_10, parse_tree__prog_io_util__Parser_4, parse_tree__prog_io_util__Head_7, parse_tree__prog_io_util__Tail_8, parse_tree__prog_io_util__Result_6);
#line 918 "prog_io_util.m"
      return;
    }
#line 916 "prog_io_util.m"
  }
#line 184 "prog_io_util.m"
}

#line 179 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__sum_to_list_2_p_0(
#line 179 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
#line 179 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 179 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__List_4)
#line 179 "prog_io_util.m"
{
#line 891 "prog_io_util.m"
  {
#line 891 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 891 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Head_5;
#line 891 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Tail_6;
#line 891 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_8_8;

#line 902 "prog_io_util.m"
    {
#line 902 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) "+", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_8_8);
    }
#line 892 "prog_io_util.m"
    parse_tree__prog_io_util__Head_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 0)));
#line 892 "prog_io_util.m"
    parse_tree__prog_io_util__Tail_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 1)));
#line 893 "prog_io_util.m"
    {
#line 893 "prog_io_util.m"
      MR_Word base;
#line 893 "prog_io_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 893 "prog_io_util.m"
      *parse_tree__prog_io_util__List_4 = base;
#line 893 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Head_5));
#line 893 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Tail_6));
#line 893 "prog_io_util.m"
    }
#line 891 "prog_io_util.m"
  }
#line 179 "prog_io_util.m"
}

#line 178 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__sum_to_one_or_more_2_p_0(
#line 178 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_6,
#line 178 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 178 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__OneOrMore_4)
#line 178 "prog_io_util.m"
{
#line 888 "prog_io_util.m"
  {
#line 888 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 902 "prog_io_util.m"
    {
#line 902 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) "+", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_util__OneOrMore_4);
#line 902 "prog_io_util.m"
      return;
    }
#line 888 "prog_io_util.m"
  }
#line 178 "prog_io_util.m"
}

#line 172 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__one_or_more_to_conjunction_3_p_0(
#line 172 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_20,
#line 172 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Context_1,
#line 172 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 172 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Term_3)
#line 172 "prog_io_util.m"
{
#line 882 "prog_io_util.m"
  {
#line 882 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 882 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 882 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 882 "prog_io_util.m"
    if ((parse_tree__prog_io_util__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 882 "prog_io_util.m"
      *parse_tree__prog_io_util__Term_3 = parse_tree__prog_io_util__V_22_22;
#line 882 "prog_io_util.m"
    else
#line 884 "prog_io_util.m"
      {
#line 884 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Second_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, (MR_Integer) 0)));
#line 884 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, (MR_Integer) 1)));
#line 884 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Tail_12;
#line 884 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_14_14;
#line 884 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_17_17;
#line 884 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_18_18;

#line 885 "prog_io_util.m"
        {
#line 885 "prog_io_util.m"
          parse_tree__prog_io_util__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 885 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_14_14, 0) = ((MR_Box) (parse_tree__prog_io_util__Second_9));
#line 885 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_14_14, 1) = ((MR_Box) (parse_tree__prog_io_util__Rest_10));
#line 885 "prog_io_util.m"
        }
#line 885 "prog_io_util.m"
        {
#line 885 "prog_io_util.m"
          parse_tree__prog_io_util__one_or_more_to_conjunction_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_20, parse_tree__prog_io_util__Context_1, parse_tree__prog_io_util__V_14_14, &parse_tree__prog_io_util__Tail_12);
        }
#line 886 "prog_io_util.m"
        {
#line 886 "prog_io_util.m"
          parse_tree__prog_io_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 886 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, 0) = ((MR_Box) (parse_tree__prog_io_util__Tail_12));
#line 886 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 886 "prog_io_util.m"
        }
#line 886 "prog_io_util.m"
        {
#line 886 "prog_io_util.m"
          parse_tree__prog_io_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 886 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_17_17, 0) = ((MR_Box) (parse_tree__prog_io_util__V_22_22));
#line 886 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_17_17, 1) = ((MR_Box) (parse_tree__prog_io_util__V_18_18));
#line 886 "prog_io_util.m"
        }
#line 886 "prog_io_util.m"
        {
#line 886 "prog_io_util.m"
          MR_Word base;
#line 886 "prog_io_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 886 "prog_io_util.m"
          *parse_tree__prog_io_util__Term_3 = base;
#line 886 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[8]));
#line 886 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_17_17));
#line 886 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_1));
#line 886 "prog_io_util.m"
        }
#line 884 "prog_io_util.m"
      }
#line 882 "prog_io_util.m"
  }
#line 172 "prog_io_util.m"
}

#line 165 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__conjunction_to_list_2_p_0(
#line 165 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
#line 165 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 165 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__List_4)
#line 165 "prog_io_util.m"
{
#line 878 "prog_io_util.m"
  {
#line 878 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 878 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Head_5;
#line 878 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Tail_6;
#line 878 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_8_8;

#line 902 "prog_io_util.m"
    {
#line 902 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_8_8);
    }
#line 879 "prog_io_util.m"
    parse_tree__prog_io_util__Head_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 0)));
#line 879 "prog_io_util.m"
    parse_tree__prog_io_util__Tail_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 1)));
#line 880 "prog_io_util.m"
    {
#line 880 "prog_io_util.m"
      MR_Word base;
#line 880 "prog_io_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 880 "prog_io_util.m"
      *parse_tree__prog_io_util__List_4 = base;
#line 880 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Head_5));
#line 880 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Tail_6));
#line 880 "prog_io_util.m"
    }
#line 878 "prog_io_util.m"
  }
#line 165 "prog_io_util.m"
}

#line 163 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__conjunction_to_one_or_more_2_p_0(
#line 163 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_6,
#line 163 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 163 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__OneOrMore_4)
#line 163 "prog_io_util.m"
{
#line 875 "prog_io_util.m"
  {
#line 875 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 902 "prog_io_util.m"
    {
#line 902 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_util__OneOrMore_4);
#line 902 "prog_io_util.m"
      return;
    }
#line 875 "prog_io_util.m"
  }
#line 163 "prog_io_util.m"
}

#line 159 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__disjunction_to_list_2_p_0(
#line 159 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
#line 159 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 159 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__List_4)
#line 159 "prog_io_util.m"
{
#line 871 "prog_io_util.m"
  {
#line 871 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 871 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Head_5;
#line 871 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Tail_6;
#line 871 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_8_8;

#line 902 "prog_io_util.m"
    {
#line 902 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ";", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_8_8);
    }
#line 872 "prog_io_util.m"
    parse_tree__prog_io_util__Head_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 0)));
#line 872 "prog_io_util.m"
    parse_tree__prog_io_util__Tail_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 1)));
#line 873 "prog_io_util.m"
    {
#line 873 "prog_io_util.m"
      MR_Word base;
#line 873 "prog_io_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 873 "prog_io_util.m"
      *parse_tree__prog_io_util__List_4 = base;
#line 873 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Head_5));
#line 873 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Tail_6));
#line 873 "prog_io_util.m"
    }
#line 871 "prog_io_util.m"
  }
#line 159 "prog_io_util.m"
}

#line 157 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__disjunction_to_one_or_more_2_p_0(
#line 157 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_6,
#line 157 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 157 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__OneOrMore_4)
#line 157 "prog_io_util.m"
{
#line 868 "prog_io_util.m"
  {
#line 868 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 902 "prog_io_util.m"
    {
#line 902 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ";", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_util__OneOrMore_4);
#line 902 "prog_io_util.m"
      return;
    }
#line 868 "prog_io_util.m"
  }
#line 157 "prog_io_util.m"
}

#line 153 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__standard_det_2_p_0(
#line 153 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__HeadVar__1_1,
#line 153 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__2_2)
#line 153 "prog_io_util.m"
{
#line 804 "prog_io_util.m"
  {
#line 804 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 804 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__slot_0;
#line 804 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__str_1;

#line 804 "prog_io_util.m"
    /* hashed string simple lookup switch */
#line 804 "prog_io_util.m"
    /* compute the hash value of the input string */
#line 804 "prog_io_util.m"
    parse_tree__prog_io_util__slot_0 = ((MR_hash_string4(parse_tree__prog_io_util__HeadVar__1_1)) & (MR_Integer) 31);
#line 804 "prog_io_util.m"
    /* hash chain loop */
#line 804 "prog_io_util.m"
    do
#line 804 "prog_io_util.m"
      {
#line 804 "prog_io_util.m"
        /* lookup the string for this hash slot */
#line 804 "prog_io_util.m"
        parse_tree__prog_io_util__str_1 = ((&parse_tree__prog_io_util_vector_common_5[0 + parse_tree__prog_io_util__slot_0]))->parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_0;
#line 804 "prog_io_util.m"
        /* did we find a match? */
#line 804 "prog_io_util.m"
        if ((((parse_tree__prog_io_util__str_1 != NULL)) && ((strcmp(parse_tree__prog_io_util__str_1, parse_tree__prog_io_util__HeadVar__1_1) == 0))))
#line 804 "prog_io_util.m"
          {
#line 804 "prog_io_util.m"
            /* we found a match; look up the results */
#line 804 "prog_io_util.m"
            *parse_tree__prog_io_util__HeadVar__2_2 = ((&parse_tree__prog_io_util_vector_common_5[0 + parse_tree__prog_io_util__slot_0]))->parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_2;
#line 804 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 804 "prog_io_util.m"
            /* jump out of search loop */
#line 804 "prog_io_util.m"
            goto label_0;
#line 804 "prog_io_util.m"
          }
#line 804 "prog_io_util.m"
        else
#line 804 "prog_io_util.m"
          {
#line 804 "prog_io_util.m"
            /* no match yet, so get next slot in hash chain */
#line 804 "prog_io_util.m"
            parse_tree__prog_io_util__slot_0 = ((&parse_tree__prog_io_util_vector_common_5[0 + parse_tree__prog_io_util__slot_0]))->parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_1;
#line 804 "prog_io_util.m"
          }
#line 804 "prog_io_util.m"
      }
#line 804 "prog_io_util.m"
    while ((parse_tree__prog_io_util__slot_0 >= (MR_Integer) 0));
#line 804 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 804 "prog_io_util.m"
  label_0:;
#line 804 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 804 "prog_io_util.m"
  }
#line 153 "prog_io_util.m"
}

#line 150 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__convert_inst_3_p_0(
#line 150 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
#line 150 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 150 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3)
#line 150 "prog_io_util.m"
{
#line 624 "prog_io_util.m"
  {
#line 624 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 624 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 626 "prog_io_util.m"
      {
#line 626 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Functor_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 626 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Args0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 626 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__Name_14;
#line 627 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util___Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 2)));
#line 633 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Result0_15;

#line 628 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Functor_11)) == (MR_mktag((MR_Integer) 0)));
#line 628 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 628 "prog_io_util.m"
          {
#line 628 "prog_io_util.m"
            parse_tree__prog_io_util__Name_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Functor_11, (MR_Integer) 0)));
#line 630 "prog_io_util.m"
            {
#line 630 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_simple_builtin_inst_3_p_0(parse_tree__prog_io_util__Name_14, parse_tree__prog_io_util__Args0_12, &parse_tree__prog_io_util__Result0_15);
            }
#line 633 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 632 "prog_io_util.m"
              {
#line 632 "prog_io_util.m"
                *parse_tree__prog_io_util__HeadVar__3_3 = parse_tree__prog_io_util__Result0_15;
#line 632 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 632 "prog_io_util.m"
              }
#line 633 "prog_io_util.m"
            else
#line 651 "prog_io_util.m"
              {
#line 651 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__DetTerm_17;
#line 651 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__ArgModesTerm_18;
#line 641 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__PredTerm_16;
#line 641 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_52_52;
#line 641 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_53_53;
#line 641 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_54_54;
#line 641 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__V_55_55;
#line 643 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_19_19;

#line 641 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Name_14, (MR_String) "is") == 0);
#line 641 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 641 "prog_io_util.m"
                  {
#line 642 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args0_12)) == (MR_mktag((MR_Integer) 1)));
#line 642 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 642 "prog_io_util.m"
                      {
#line 642 "prog_io_util.m"
                        parse_tree__prog_io_util__PredTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 0)));
#line 642 "prog_io_util.m"
                        parse_tree__prog_io_util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 1)));
#line 642 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 642 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 642 "prog_io_util.m"
                          {
#line 642 "prog_io_util.m"
                            parse_tree__prog_io_util__DetTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_52_52, (MR_Integer) 0)));
#line 642 "prog_io_util.m"
                            parse_tree__prog_io_util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_52_52, (MR_Integer) 1)));
#line 642 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 641 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 641 "prog_io_util.m"
                              {
#line 643 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredTerm_16)) == (MR_mktag((MR_Integer) 0)));
#line 643 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 643 "prog_io_util.m"
                                  {
#line 643 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_16, (MR_Integer) 0)));
#line 643 "prog_io_util.m"
                                    parse_tree__prog_io_util__ArgModesTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_16, (MR_Integer) 1)));
#line 643 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_16, (MR_Integer) 2)));
#line 643 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_54_54)) == (MR_mktag((MR_Integer) 0)));
#line 643 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 643 "prog_io_util.m"
                                      {
#line 643 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_55_55 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_54_54, (MR_Integer) 0)));
#line 643 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_55_55, (MR_String) "pred") == 0);
#line 643 "prog_io_util.m"
                                      }
#line 643 "prog_io_util.m"
                                  }
#line 641 "prog_io_util.m"
                              }
#line 642 "prog_io_util.m"
                          }
#line 642 "prog_io_util.m"
                      }
#line 641 "prog_io_util.m"
                  }
#line 651 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 645 "prog_io_util.m"
                  {
#line 645 "prog_io_util.m"
                    MR_String parse_tree__prog_io_util__DetString_20;
#line 645 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Detism_22;
#line 645 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__ArgModes_23;
#line 645 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__PredInst_24;
#line 645 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_56_56;
#line 645 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_57_57;
#line 645 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_58_58;
#line 645 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_59_59;
#line 645 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_60_60;
#line 645 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_61_61;
#line 645 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_21_21;

#line 645 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_17)) == (MR_mktag((MR_Integer) 0)));
#line 645 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 645 "prog_io_util.m"
                      {
#line 645 "prog_io_util.m"
                        parse_tree__prog_io_util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_17, (MR_Integer) 0)));
#line 645 "prog_io_util.m"
                        parse_tree__prog_io_util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_17, (MR_Integer) 1)));
#line 645 "prog_io_util.m"
                        parse_tree__prog_io_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_17, (MR_Integer) 2)));
#line 645 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 645 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 645 "prog_io_util.m"
                          {
#line 645 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_56_56)) == (MR_mktag((MR_Integer) 0)));
#line 645 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 645 "prog_io_util.m"
                              {
#line 645 "prog_io_util.m"
                                parse_tree__prog_io_util__DetString_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_56_56, (MR_Integer) 0)));
#line 646 "prog_io_util.m"
                                {
#line 646 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_20, &parse_tree__prog_io_util__Detism_22);
                                }
#line 645 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 645 "prog_io_util.m"
                                  {
#line 647 "prog_io_util.m"
                                    {
#line 647 "prog_io_util.m"
                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__ArgModesTerm_18, &parse_tree__prog_io_util__ArgModes_23);
                                    }
#line 645 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 645 "prog_io_util.m"
                                      {
#line 648 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_58_58 = (MR_Integer) 0;
#line 649 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_59_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 650 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_60_60 = (MR_Integer) 0;
#line 648 "prog_io_util.m"
                                        {
#line 648 "prog_io_util.m"
                                          parse_tree__prog_io_util__PredInst_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 648 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_24, 0) = ((MR_Box) (parse_tree__prog_io_util__V_58_58));
#line 648 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_24, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_23));
#line 648 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_24, 2) = ((MR_Box) (parse_tree__prog_io_util__V_59_59));
#line 648 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_24, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_22));
#line 648 "prog_io_util.m"
                                        }
#line 650 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__PredInst_24);
#line 650 "prog_io_util.m"
                                        {
#line 650 "prog_io_util.m"
                                          MR_Word base;
#line 650 "prog_io_util.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 650 "prog_io_util.m"
                                          *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 650 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 650 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_60_60));
#line 650 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_61_61));
#line 650 "prog_io_util.m"
                                        }
#line 650 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 645 "prog_io_util.m"
                                      }
#line 645 "prog_io_util.m"
                                  }
#line 645 "prog_io_util.m"
                              }
#line 645 "prog_io_util.m"
                          }
#line 645 "prog_io_util.m"
                      }
#line 645 "prog_io_util.m"
                  }
#line 651 "prog_io_util.m"
                else
#line 672 "prog_io_util.m"
                  {
#line 672 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__RetModeTerm_27;
#line 672 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__DetTerm_177;
#line 672 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__ArgModesTerm_178;
#line 659 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__EqTerm_25;
#line 659 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__FuncTerm_26;
#line 659 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_62_62;
#line 659 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_63_63;
#line 659 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_64_64;
#line 659 "prog_io_util.m"
                    MR_String parse_tree__prog_io_util__V_65_65;
#line 659 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_66_66;
#line 659 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_67_67;
#line 659 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_68_68;
#line 659 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_69_69;
#line 659 "prog_io_util.m"
                    MR_String parse_tree__prog_io_util__V_70_70;
#line 661 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_28_28;
#line 662 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_29_29;

#line 659 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Name_14, (MR_String) "is") == 0);
#line 659 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 659 "prog_io_util.m"
                      {
#line 660 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args0_12)) == (MR_mktag((MR_Integer) 1)));
#line 660 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 660 "prog_io_util.m"
                          {
#line 660 "prog_io_util.m"
                            parse_tree__prog_io_util__EqTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 0)));
#line 660 "prog_io_util.m"
                            parse_tree__prog_io_util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 1)));
#line 660 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_62_62)) == (MR_mktag((MR_Integer) 1)));
#line 660 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 660 "prog_io_util.m"
                              {
#line 660 "prog_io_util.m"
                                parse_tree__prog_io_util__DetTerm_177 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_62_62, (MR_Integer) 0)));
#line 660 "prog_io_util.m"
                                parse_tree__prog_io_util__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_62_62, (MR_Integer) 1)));
#line 660 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 659 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 659 "prog_io_util.m"
                                  {
#line 661 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__EqTerm_25)) == (MR_mktag((MR_Integer) 0)));
#line 661 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 661 "prog_io_util.m"
                                      {
#line 661 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_25, (MR_Integer) 0)));
#line 661 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_25, (MR_Integer) 1)));
#line 661 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_25, (MR_Integer) 2)));
#line 661 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_64_64)) == (MR_mktag((MR_Integer) 0)));
#line 661 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 661 "prog_io_util.m"
                                          {
#line 661 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_65_65 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_64_64, (MR_Integer) 0)));
#line 661 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_65_65, (MR_String) "=") == 0);
#line 659 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 659 "prog_io_util.m"
                                              {
#line 661 "prog_io_util.m"
                                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_66_66)) == (MR_mktag((MR_Integer) 1)));
#line 661 "prog_io_util.m"
                                                if (parse_tree__prog_io_util__succeeded)
#line 661 "prog_io_util.m"
                                                  {
#line 661 "prog_io_util.m"
                                                    parse_tree__prog_io_util__FuncTerm_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_66_66, (MR_Integer) 0)));
#line 661 "prog_io_util.m"
                                                    parse_tree__prog_io_util__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_66_66, (MR_Integer) 1)));
#line 661 "prog_io_util.m"
                                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_67_67)) == (MR_mktag((MR_Integer) 1)));
#line 661 "prog_io_util.m"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 661 "prog_io_util.m"
                                                      {
#line 661 "prog_io_util.m"
                                                        parse_tree__prog_io_util__RetModeTerm_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_67_67, (MR_Integer) 0)));
#line 661 "prog_io_util.m"
                                                        parse_tree__prog_io_util__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_67_67, (MR_Integer) 1)));
#line 661 "prog_io_util.m"
                                                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 659 "prog_io_util.m"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 659 "prog_io_util.m"
                                                          {
#line 662 "prog_io_util.m"
                                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__FuncTerm_26)) == (MR_mktag((MR_Integer) 0)));
#line 662 "prog_io_util.m"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 662 "prog_io_util.m"
                                                              {
#line 662 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_26, (MR_Integer) 0)));
#line 662 "prog_io_util.m"
                                                                parse_tree__prog_io_util__ArgModesTerm_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_26, (MR_Integer) 1)));
#line 662 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_26, (MR_Integer) 2)));
#line 662 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_69_69)) == (MR_mktag((MR_Integer) 0)));
#line 662 "prog_io_util.m"
                                                                if (parse_tree__prog_io_util__succeeded)
#line 662 "prog_io_util.m"
                                                                  {
#line 662 "prog_io_util.m"
                                                                    parse_tree__prog_io_util__V_70_70 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_69_69, (MR_Integer) 0)));
#line 662 "prog_io_util.m"
                                                                    parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_70_70, (MR_String) "func") == 0);
#line 662 "prog_io_util.m"
                                                                  }
#line 662 "prog_io_util.m"
                                                              }
#line 659 "prog_io_util.m"
                                                          }
#line 661 "prog_io_util.m"
                                                      }
#line 661 "prog_io_util.m"
                                                  }
#line 659 "prog_io_util.m"
                                              }
#line 661 "prog_io_util.m"
                                          }
#line 661 "prog_io_util.m"
                                      }
#line 659 "prog_io_util.m"
                                  }
#line 660 "prog_io_util.m"
                              }
#line 660 "prog_io_util.m"
                          }
#line 659 "prog_io_util.m"
                      }
#line 672 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 664 "prog_io_util.m"
                      {
#line 664 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TypeCtorInfo_186_186;
#line 664 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__ArgModes0_31;
#line 664 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__RetMode_32;
#line 664 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__FuncInst_33;
#line 664 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_71_71;
#line 664 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_72_72;
#line 664 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_73_73;
#line 664 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_74_74;
#line 664 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_75_75;
#line 664 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_76_76;
#line 664 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_77_77;
#line 664 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_78_78;
#line 664 "prog_io_util.m"
                        MR_String parse_tree__prog_io_util__DetString_123;
#line 664 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Detism_124;
#line 664 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__ArgModes_125;
#line 664 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_30_30;

#line 664 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_177)) == (MR_mktag((MR_Integer) 0)));
#line 664 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 664 "prog_io_util.m"
                          {
#line 664 "prog_io_util.m"
                            parse_tree__prog_io_util__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_177, (MR_Integer) 0)));
#line 664 "prog_io_util.m"
                            parse_tree__prog_io_util__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_177, (MR_Integer) 1)));
#line 664 "prog_io_util.m"
                            parse_tree__prog_io_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_177, (MR_Integer) 2)));
#line 664 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 664 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 664 "prog_io_util.m"
                              {
#line 664 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_71_71)) == (MR_mktag((MR_Integer) 0)));
#line 664 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 664 "prog_io_util.m"
                                  {
#line 664 "prog_io_util.m"
                                    parse_tree__prog_io_util__DetString_123 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_71_71, (MR_Integer) 0)));
#line 665 "prog_io_util.m"
                                    {
#line 665 "prog_io_util.m"
                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_123, &parse_tree__prog_io_util__Detism_124);
                                    }
#line 664 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 664 "prog_io_util.m"
                                      {
#line 666 "prog_io_util.m"
                                        {
#line 666 "prog_io_util.m"
                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__ArgModesTerm_178, &parse_tree__prog_io_util__ArgModes0_31);
                                        }
#line 664 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 664 "prog_io_util.m"
                                          {
#line 667 "prog_io_util.m"
                                            {
#line 667 "prog_io_util.m"
                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__RetModeTerm_27, &parse_tree__prog_io_util__RetMode_32);
                                            }
#line 664 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 664 "prog_io_util.m"
                                              {
#line 668 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_74_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10693 "parse_tree.prog_io_util.c"
                                                parse_tree__prog_io_util__TypeCtorInfo_186_186 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 668 "prog_io_util.m"
                                                {
#line 668 "prog_io_util.m"
                                                  parse_tree__prog_io_util__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 668 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_util__RetMode_32));
#line 668 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_73_73, 1) = ((MR_Box) (parse_tree__prog_io_util__V_74_74));
#line 668 "prog_io_util.m"
                                                }
#line 668 "prog_io_util.m"
                                                {
#line 668 "prog_io_util.m"
                                                  mercury__list__append_3_p_1(parse_tree__prog_io_util__TypeCtorInfo_186_186, parse_tree__prog_io_util__ArgModes0_31, parse_tree__prog_io_util__V_73_73, &parse_tree__prog_io_util__ArgModes_125);
                                                }
#line 669 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_75_75 = (MR_Integer) 1;
#line 670 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_76_76 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 671 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_77_77 = (MR_Integer) 0;
#line 669 "prog_io_util.m"
                                                {
#line 669 "prog_io_util.m"
                                                  parse_tree__prog_io_util__FuncInst_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 669 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_33, 0) = ((MR_Box) (parse_tree__prog_io_util__V_75_75));
#line 669 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_33, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_125));
#line 669 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_33, 2) = ((MR_Box) (parse_tree__prog_io_util__V_76_76));
#line 669 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_33, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_124));
#line 669 "prog_io_util.m"
                                                }
#line 671 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__FuncInst_33);
#line 671 "prog_io_util.m"
                                                {
#line 671 "prog_io_util.m"
                                                  MR_Word base;
#line 671 "prog_io_util.m"
                                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 671 "prog_io_util.m"
                                                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 671 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 671 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_77_77));
#line 671 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_78_78));
#line 671 "prog_io_util.m"
                                                }
#line 671 "prog_io_util.m"
                                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 664 "prog_io_util.m"
                                              }
#line 664 "prog_io_util.m"
                                          }
#line 664 "prog_io_util.m"
                                      }
#line 664 "prog_io_util.m"
                                  }
#line 664 "prog_io_util.m"
                              }
#line 664 "prog_io_util.m"
                          }
#line 664 "prog_io_util.m"
                      }
#line 672 "prog_io_util.m"
                    else
#line 690 "prog_io_util.m"
                      {
#line 690 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__DetTerm_163;
#line 690 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__ArgModesTerm_164;
#line 680 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_79_79;
#line 680 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_80_80;
#line 680 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_81_81;
#line 680 "prog_io_util.m"
                        MR_String parse_tree__prog_io_util__V_82_82;
#line 680 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__PredTerm_126;
#line 682 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_34_34;

#line 680 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Name_14, (MR_String) "is") == 0);
#line 680 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 680 "prog_io_util.m"
                          {
#line 681 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args0_12)) == (MR_mktag((MR_Integer) 1)));
#line 681 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 681 "prog_io_util.m"
                              {
#line 681 "prog_io_util.m"
                                parse_tree__prog_io_util__PredTerm_126 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 0)));
#line 681 "prog_io_util.m"
                                parse_tree__prog_io_util__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 1)));
#line 681 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_79_79)) == (MR_mktag((MR_Integer) 1)));
#line 681 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 681 "prog_io_util.m"
                                  {
#line 681 "prog_io_util.m"
                                    parse_tree__prog_io_util__DetTerm_163 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_79_79, (MR_Integer) 0)));
#line 681 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_79_79, (MR_Integer) 1)));
#line 681 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_80_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 680 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 680 "prog_io_util.m"
                                      {
#line 682 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredTerm_126)) == (MR_mktag((MR_Integer) 0)));
#line 682 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 682 "prog_io_util.m"
                                          {
#line 682 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_126, (MR_Integer) 0)));
#line 682 "prog_io_util.m"
                                            parse_tree__prog_io_util__ArgModesTerm_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_126, (MR_Integer) 1)));
#line 682 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_126, (MR_Integer) 2)));
#line 682 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_81_81)) == (MR_mktag((MR_Integer) 0)));
#line 682 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 682 "prog_io_util.m"
                                              {
#line 682 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_82_82 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_81_81, (MR_Integer) 0)));
#line 682 "prog_io_util.m"
                                                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_82_82, (MR_String) "any_pred") == 0);
#line 682 "prog_io_util.m"
                                              }
#line 682 "prog_io_util.m"
                                          }
#line 680 "prog_io_util.m"
                                      }
#line 681 "prog_io_util.m"
                                  }
#line 681 "prog_io_util.m"
                              }
#line 680 "prog_io_util.m"
                          }
#line 690 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 684 "prog_io_util.m"
                          {
#line 684 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_83_83;
#line 684 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_84_84;
#line 684 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_85_85;
#line 684 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_86_86;
#line 684 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_87_87;
#line 684 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_88_88;
#line 684 "prog_io_util.m"
                            MR_String parse_tree__prog_io_util__DetString_127;
#line 684 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Detism_128;
#line 684 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__ArgModes_129;
#line 684 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__PredInst_130;
#line 684 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_35_35;

#line 684 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_163)) == (MR_mktag((MR_Integer) 0)));
#line 684 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 684 "prog_io_util.m"
                              {
#line 684 "prog_io_util.m"
                                parse_tree__prog_io_util__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_163, (MR_Integer) 0)));
#line 684 "prog_io_util.m"
                                parse_tree__prog_io_util__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_163, (MR_Integer) 1)));
#line 684 "prog_io_util.m"
                                parse_tree__prog_io_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_163, (MR_Integer) 2)));
#line 684 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_84_84 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 684 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 684 "prog_io_util.m"
                                  {
#line 684 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_83_83)) == (MR_mktag((MR_Integer) 0)));
#line 684 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 684 "prog_io_util.m"
                                      {
#line 684 "prog_io_util.m"
                                        parse_tree__prog_io_util__DetString_127 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_83_83, (MR_Integer) 0)));
#line 685 "prog_io_util.m"
                                        {
#line 685 "prog_io_util.m"
                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_127, &parse_tree__prog_io_util__Detism_128);
                                        }
#line 684 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 684 "prog_io_util.m"
                                          {
#line 686 "prog_io_util.m"
                                            {
#line 686 "prog_io_util.m"
                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__ArgModesTerm_164, &parse_tree__prog_io_util__ArgModes_129);
                                            }
#line 684 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 684 "prog_io_util.m"
                                              {
#line 687 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_85_85 = (MR_Integer) 0;
#line 688 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_86_86 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 689 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_87_87 = (MR_Integer) 0;
#line 687 "prog_io_util.m"
                                                {
#line 687 "prog_io_util.m"
                                                  parse_tree__prog_io_util__PredInst_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 687 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_130, 0) = ((MR_Box) (parse_tree__prog_io_util__V_85_85));
#line 687 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_130, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_129));
#line 687 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_130, 2) = ((MR_Box) (parse_tree__prog_io_util__V_86_86));
#line 687 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_130, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_128));
#line 687 "prog_io_util.m"
                                                }
#line 689 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__PredInst_130);
#line 689 "prog_io_util.m"
                                                {
#line 689 "prog_io_util.m"
                                                  MR_Word base;
#line 689 "prog_io_util.m"
                                                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "prog_io_util.m"
                                                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 689 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_87_87));
#line 689 "prog_io_util.m"
                                                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_88_88));
#line 689 "prog_io_util.m"
                                                }
#line 689 "prog_io_util.m"
                                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 684 "prog_io_util.m"
                                              }
#line 684 "prog_io_util.m"
                                          }
#line 684 "prog_io_util.m"
                                      }
#line 684 "prog_io_util.m"
                                  }
#line 684 "prog_io_util.m"
                              }
#line 684 "prog_io_util.m"
                          }
#line 690 "prog_io_util.m"
                        else
#line 712 "prog_io_util.m"
                          {
#line 712 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__DetTerm_150;
#line 712 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__ArgModesTerm_151;
#line 712 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__RetModeTerm_157;
#line 698 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_89_89;
#line 698 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_90_90;
#line 698 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_91_91;
#line 698 "prog_io_util.m"
                            MR_String parse_tree__prog_io_util__V_92_92;
#line 698 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_93_93;
#line 698 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_94_94;
#line 698 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_95_95;
#line 698 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_96_96;
#line 698 "prog_io_util.m"
                            MR_String parse_tree__prog_io_util__V_97_97;
#line 698 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__EqTerm_131;
#line 698 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__FuncTerm_132;
#line 700 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_36_36;
#line 701 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_37_37;

#line 698 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Name_14, (MR_String) "is") == 0);
#line 698 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 698 "prog_io_util.m"
                              {
#line 699 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args0_12)) == (MR_mktag((MR_Integer) 1)));
#line 699 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 699 "prog_io_util.m"
                                  {
#line 699 "prog_io_util.m"
                                    parse_tree__prog_io_util__EqTerm_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 0)));
#line 699 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 1)));
#line 699 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_89_89)) == (MR_mktag((MR_Integer) 1)));
#line 699 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 699 "prog_io_util.m"
                                      {
#line 699 "prog_io_util.m"
                                        parse_tree__prog_io_util__DetTerm_150 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_89_89, (MR_Integer) 0)));
#line 699 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_89_89, (MR_Integer) 1)));
#line 699 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_90_90 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 698 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 698 "prog_io_util.m"
                                          {
#line 700 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__EqTerm_131)) == (MR_mktag((MR_Integer) 0)));
#line 700 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 700 "prog_io_util.m"
                                              {
#line 700 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_131, (MR_Integer) 0)));
#line 700 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_131, (MR_Integer) 1)));
#line 700 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_131, (MR_Integer) 2)));
#line 700 "prog_io_util.m"
                                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_91_91)) == (MR_mktag((MR_Integer) 0)));
#line 700 "prog_io_util.m"
                                                if (parse_tree__prog_io_util__succeeded)
#line 700 "prog_io_util.m"
                                                  {
#line 700 "prog_io_util.m"
                                                    parse_tree__prog_io_util__V_92_92 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_91_91, (MR_Integer) 0)));
#line 700 "prog_io_util.m"
                                                    parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_92_92, (MR_String) "=") == 0);
#line 698 "prog_io_util.m"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 698 "prog_io_util.m"
                                                      {
#line 700 "prog_io_util.m"
                                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_93_93)) == (MR_mktag((MR_Integer) 1)));
#line 700 "prog_io_util.m"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 700 "prog_io_util.m"
                                                          {
#line 700 "prog_io_util.m"
                                                            parse_tree__prog_io_util__FuncTerm_132 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_93_93, (MR_Integer) 0)));
#line 700 "prog_io_util.m"
                                                            parse_tree__prog_io_util__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_93_93, (MR_Integer) 1)));
#line 700 "prog_io_util.m"
                                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_94_94)) == (MR_mktag((MR_Integer) 1)));
#line 700 "prog_io_util.m"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 700 "prog_io_util.m"
                                                              {
#line 700 "prog_io_util.m"
                                                                parse_tree__prog_io_util__RetModeTerm_157 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_94_94, (MR_Integer) 0)));
#line 700 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_94_94, (MR_Integer) 1)));
#line 700 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_95_95 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 698 "prog_io_util.m"
                                                                if (parse_tree__prog_io_util__succeeded)
#line 698 "prog_io_util.m"
                                                                  {
#line 701 "prog_io_util.m"
                                                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__FuncTerm_132)) == (MR_mktag((MR_Integer) 0)));
#line 701 "prog_io_util.m"
                                                                    if (parse_tree__prog_io_util__succeeded)
#line 701 "prog_io_util.m"
                                                                      {
#line 701 "prog_io_util.m"
                                                                        parse_tree__prog_io_util__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_132, (MR_Integer) 0)));
#line 701 "prog_io_util.m"
                                                                        parse_tree__prog_io_util__ArgModesTerm_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_132, (MR_Integer) 1)));
#line 701 "prog_io_util.m"
                                                                        parse_tree__prog_io_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_132, (MR_Integer) 2)));
#line 701 "prog_io_util.m"
                                                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_96_96)) == (MR_mktag((MR_Integer) 0)));
#line 701 "prog_io_util.m"
                                                                        if (parse_tree__prog_io_util__succeeded)
#line 701 "prog_io_util.m"
                                                                          {
#line 701 "prog_io_util.m"
                                                                            parse_tree__prog_io_util__V_97_97 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_96_96, (MR_Integer) 0)));
#line 701 "prog_io_util.m"
                                                                            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_97_97, (MR_String) "any_func") == 0);
#line 701 "prog_io_util.m"
                                                                          }
#line 701 "prog_io_util.m"
                                                                      }
#line 698 "prog_io_util.m"
                                                                  }
#line 700 "prog_io_util.m"
                                                              }
#line 700 "prog_io_util.m"
                                                          }
#line 698 "prog_io_util.m"
                                                      }
#line 700 "prog_io_util.m"
                                                  }
#line 700 "prog_io_util.m"
                                              }
#line 698 "prog_io_util.m"
                                          }
#line 699 "prog_io_util.m"
                                      }
#line 699 "prog_io_util.m"
                                  }
#line 698 "prog_io_util.m"
                              }
#line 712 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 703 "prog_io_util.m"
                              {
#line 703 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__TypeCtorInfo_187_187;
#line 703 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_98_98;
#line 703 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_99_99;
#line 703 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_100_100;
#line 703 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_101_101;
#line 703 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_102_102;
#line 703 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_103_103;
#line 703 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_104_104;
#line 703 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_105_105;
#line 703 "prog_io_util.m"
                                MR_String parse_tree__prog_io_util__DetString_133;
#line 703 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__Detism_134;
#line 703 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__ArgModes_135;
#line 703 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__ArgModes0_136;
#line 703 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__RetMode_137;
#line 703 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__FuncInst_138;
#line 703 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_38_38;

#line 703 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_150)) == (MR_mktag((MR_Integer) 0)));
#line 703 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 703 "prog_io_util.m"
                                  {
#line 703 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_150, (MR_Integer) 0)));
#line 703 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_150, (MR_Integer) 1)));
#line 703 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_150, (MR_Integer) 2)));
#line 703 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_99_99 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 703 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 703 "prog_io_util.m"
                                      {
#line 703 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_98_98)) == (MR_mktag((MR_Integer) 0)));
#line 703 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 703 "prog_io_util.m"
                                          {
#line 703 "prog_io_util.m"
                                            parse_tree__prog_io_util__DetString_133 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_98_98, (MR_Integer) 0)));
#line 704 "prog_io_util.m"
                                            {
#line 704 "prog_io_util.m"
                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_133, &parse_tree__prog_io_util__Detism_134);
                                            }
#line 703 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 703 "prog_io_util.m"
                                              {
#line 705 "prog_io_util.m"
                                                {
#line 705 "prog_io_util.m"
                                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__ArgModesTerm_151, &parse_tree__prog_io_util__ArgModes0_136);
                                                }
#line 703 "prog_io_util.m"
                                                if (parse_tree__prog_io_util__succeeded)
#line 703 "prog_io_util.m"
                                                  {
#line 706 "prog_io_util.m"
                                                    {
#line 706 "prog_io_util.m"
                                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__RetModeTerm_157, &parse_tree__prog_io_util__RetMode_137);
                                                    }
#line 703 "prog_io_util.m"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 703 "prog_io_util.m"
                                                      {
#line 707 "prog_io_util.m"
                                                        parse_tree__prog_io_util__V_101_101 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 11231 "parse_tree.prog_io_util.c"
                                                        parse_tree__prog_io_util__TypeCtorInfo_187_187 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 707 "prog_io_util.m"
                                                        {
#line 707 "prog_io_util.m"
                                                          parse_tree__prog_io_util__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "prog_io_util.m"
                                                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_100_100, 0) = ((MR_Box) (parse_tree__prog_io_util__RetMode_137));
#line 707 "prog_io_util.m"
                                                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_100_100, 1) = ((MR_Box) (parse_tree__prog_io_util__V_101_101));
#line 707 "prog_io_util.m"
                                                        }
#line 707 "prog_io_util.m"
                                                        {
#line 707 "prog_io_util.m"
                                                          mercury__list__append_3_p_1(parse_tree__prog_io_util__TypeCtorInfo_187_187, parse_tree__prog_io_util__ArgModes0_136, parse_tree__prog_io_util__V_100_100, &parse_tree__prog_io_util__ArgModes_135);
                                                        }
#line 708 "prog_io_util.m"
                                                        parse_tree__prog_io_util__V_102_102 = (MR_Integer) 1;
#line 709 "prog_io_util.m"
                                                        parse_tree__prog_io_util__V_103_103 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 710 "prog_io_util.m"
                                                        parse_tree__prog_io_util__V_104_104 = (MR_Integer) 0;
#line 708 "prog_io_util.m"
                                                        {
#line 708 "prog_io_util.m"
                                                          parse_tree__prog_io_util__FuncInst_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 708 "prog_io_util.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_138, 0) = ((MR_Box) (parse_tree__prog_io_util__V_102_102));
#line 708 "prog_io_util.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_138, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_135));
#line 708 "prog_io_util.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_138, 2) = ((MR_Box) (parse_tree__prog_io_util__V_103_103));
#line 708 "prog_io_util.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_138, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_134));
#line 708 "prog_io_util.m"
                                                        }
#line 710 "prog_io_util.m"
                                                        parse_tree__prog_io_util__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__FuncInst_138);
#line 710 "prog_io_util.m"
                                                        {
#line 710 "prog_io_util.m"
                                                          MR_Word base;
#line 710 "prog_io_util.m"
                                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "prog_io_util.m"
                                                          *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 710 "prog_io_util.m"
                                                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_104_104));
#line 710 "prog_io_util.m"
                                                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_105_105));
#line 710 "prog_io_util.m"
                                                        }
#line 710 "prog_io_util.m"
                                                        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 703 "prog_io_util.m"
                                                      }
#line 703 "prog_io_util.m"
                                                  }
#line 703 "prog_io_util.m"
                                              }
#line 703 "prog_io_util.m"
                                          }
#line 703 "prog_io_util.m"
                                      }
#line 703 "prog_io_util.m"
                                  }
#line 703 "prog_io_util.m"
                              }
#line 712 "prog_io_util.m"
                            else
#line 718 "prog_io_util.m"
                              {
#line 718 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__Disj_39;
#line 713 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_106_106;

#line 713 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Name_14, (MR_String) "bound") == 0);
#line 713 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 713 "prog_io_util.m"
                                  {
#line 714 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args0_12)) == (MR_mktag((MR_Integer) 1)));
#line 714 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 714 "prog_io_util.m"
                                      {
#line 714 "prog_io_util.m"
                                        parse_tree__prog_io_util__Disj_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 0)));
#line 714 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 1)));
#line 714 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_106_106 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 714 "prog_io_util.m"
                                      }
#line 713 "prog_io_util.m"
                                  }
#line 718 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 717 "prog_io_util.m"
                                  {
#line 717 "prog_io_util.m"
                                    {
#line 717 "prog_io_util.m"
                                      return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__Disj_39, (MR_Integer) 0, parse_tree__prog_io_util__HeadVar__3_3);
                                    }
#line 717 "prog_io_util.m"
                                  }
#line 718 "prog_io_util.m"
                                else
#line 724 "prog_io_util.m"
                                  {
#line 724 "prog_io_util.m"
                                    MR_Word parse_tree__prog_io_util__Disj_147;
#line 719 "prog_io_util.m"
                                    MR_Word parse_tree__prog_io_util__V_108_108;

#line 719 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Name_14, (MR_String) "bound_unique") == 0);
#line 719 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 719 "prog_io_util.m"
                                      {
#line 720 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args0_12)) == (MR_mktag((MR_Integer) 1)));
#line 720 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 720 "prog_io_util.m"
                                          {
#line 720 "prog_io_util.m"
                                            parse_tree__prog_io_util__Disj_147 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 0)));
#line 720 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 1)));
#line 720 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_108_108 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 720 "prog_io_util.m"
                                          }
#line 719 "prog_io_util.m"
                                      }
#line 724 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 723 "prog_io_util.m"
                                      {
#line 723 "prog_io_util.m"
                                        {
#line 723 "prog_io_util.m"
                                          return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__Disj_147, (MR_Integer) 1, parse_tree__prog_io_util__HeadVar__3_3);
                                        }
#line 723 "prog_io_util.m"
                                      }
#line 724 "prog_io_util.m"
                                    else
#line 729 "prog_io_util.m"
                                      {
#line 729 "prog_io_util.m"
                                        MR_Word parse_tree__prog_io_util__Disj_145;
#line 725 "prog_io_util.m"
                                        MR_Word parse_tree__prog_io_util__V_110_110;

#line 725 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Name_14, (MR_String) "unique") == 0);
#line 725 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 725 "prog_io_util.m"
                                          {
#line 726 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args0_12)) == (MR_mktag((MR_Integer) 1)));
#line 726 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 726 "prog_io_util.m"
                                              {
#line 726 "prog_io_util.m"
                                                parse_tree__prog_io_util__Disj_145 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 0)));
#line 726 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 1)));
#line 726 "prog_io_util.m"
                                                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_110_110 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 726 "prog_io_util.m"
                                              }
#line 725 "prog_io_util.m"
                                          }
#line 729 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 728 "prog_io_util.m"
                                          {
#line 728 "prog_io_util.m"
                                            {
#line 728 "prog_io_util.m"
                                              return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__Disj_145, (MR_Integer) 1, parse_tree__prog_io_util__HeadVar__3_3);
                                            }
#line 728 "prog_io_util.m"
                                          }
#line 729 "prog_io_util.m"
                                        else
#line 735 "prog_io_util.m"
                                          {
#line 735 "prog_io_util.m"
                                            MR_Word parse_tree__prog_io_util__Disj_143;
#line 730 "prog_io_util.m"
                                            MR_Word parse_tree__prog_io_util__V_112_112;

#line 730 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Name_14, (MR_String) "mostly_unique") == 0);
#line 730 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 730 "prog_io_util.m"
                                              {
#line 731 "prog_io_util.m"
                                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args0_12)) == (MR_mktag((MR_Integer) 1)));
#line 731 "prog_io_util.m"
                                                if (parse_tree__prog_io_util__succeeded)
#line 731 "prog_io_util.m"
                                                  {
#line 731 "prog_io_util.m"
                                                    parse_tree__prog_io_util__Disj_143 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 0)));
#line 731 "prog_io_util.m"
                                                    parse_tree__prog_io_util__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 1)));
#line 731 "prog_io_util.m"
                                                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_112_112 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 731 "prog_io_util.m"
                                                  }
#line 730 "prog_io_util.m"
                                              }
#line 735 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 733 "prog_io_util.m"
                                              {
#line 733 "prog_io_util.m"
                                                {
#line 733 "prog_io_util.m"
                                                  return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__Disj_143, (MR_Integer) 2, parse_tree__prog_io_util__HeadVar__3_3);
                                                }
#line 733 "prog_io_util.m"
                                              }
#line 735 "prog_io_util.m"
                                            else
#line 745 "prog_io_util.m"
                                              {
#line 745 "prog_io_util.m"
                                                MR_Word parse_tree__prog_io_util__VarTerm_40;
#line 745 "prog_io_util.m"
                                                MR_Word parse_tree__prog_io_util__InstTerm_41;
#line 736 "prog_io_util.m"
                                                MR_Word parse_tree__prog_io_util__V_114_114;
#line 736 "prog_io_util.m"
                                                MR_Word parse_tree__prog_io_util__V_115_115;

#line 736 "prog_io_util.m"
                                                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Name_14, (MR_String) "=<") == 0);
#line 736 "prog_io_util.m"
                                                if (parse_tree__prog_io_util__succeeded)
#line 736 "prog_io_util.m"
                                                  {
#line 737 "prog_io_util.m"
                                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args0_12)) == (MR_mktag((MR_Integer) 1)));
#line 737 "prog_io_util.m"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 737 "prog_io_util.m"
                                                      {
#line 737 "prog_io_util.m"
                                                        parse_tree__prog_io_util__VarTerm_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 0)));
#line 737 "prog_io_util.m"
                                                        parse_tree__prog_io_util__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args0_12, (MR_Integer) 1)));
#line 737 "prog_io_util.m"
                                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_114_114)) == (MR_mktag((MR_Integer) 1)));
#line 737 "prog_io_util.m"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 737 "prog_io_util.m"
                                                          {
#line 737 "prog_io_util.m"
                                                            parse_tree__prog_io_util__InstTerm_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_114_114, (MR_Integer) 0)));
#line 737 "prog_io_util.m"
                                                            parse_tree__prog_io_util__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_114_114, (MR_Integer) 1)));
#line 737 "prog_io_util.m"
                                                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_115_115 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 737 "prog_io_util.m"
                                                          }
#line 737 "prog_io_util.m"
                                                      }
#line 736 "prog_io_util.m"
                                                  }
#line 745 "prog_io_util.m"
                                                if (parse_tree__prog_io_util__succeeded)
#line 739 "prog_io_util.m"
                                                  {
#line 739 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__TypeInfo_188_188;
#line 739 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__TypeCtorInfo_189_189;
#line 739 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__TypeCtorInfo_190_190;
#line 739 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__Var_42;
#line 739 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__Inst_44;
#line 739 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__V_116_116;
#line 739 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__V_117_117;
#line 739 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__V_118_118;
#line 740 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__V_43_43;

#line 739 "prog_io_util.m"
                                                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__AllowConstrainedInstVar_1 == (MR_Integer) 0);
#line 739 "prog_io_util.m"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 739 "prog_io_util.m"
                                                      {
#line 740 "prog_io_util.m"
                                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__VarTerm_40)) == (MR_mktag((MR_Integer) 1)));
#line 740 "prog_io_util.m"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 740 "prog_io_util.m"
                                                          {
#line 740 "prog_io_util.m"
                                                            parse_tree__prog_io_util__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarTerm_40, (MR_Integer) 0)));
#line 740 "prog_io_util.m"
                                                            parse_tree__prog_io_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarTerm_40, (MR_Integer) 1)));
#line 742 "prog_io_util.m"
                                                            parse_tree__prog_io_util__V_116_116 = (MR_Integer) 1;
#line 742 "prog_io_util.m"
                                                            {
#line 742 "prog_io_util.m"
                                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_util__V_116_116, parse_tree__prog_io_util__InstTerm_41, &parse_tree__prog_io_util__Inst_44);
                                                            }
#line 739 "prog_io_util.m"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 739 "prog_io_util.m"
                                                              {
#line 11565 "parse_tree.prog_io_util.c"
                                                                parse_tree__prog_io_util__TypeInfo_188_188 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[0];
#line 11567 "parse_tree.prog_io_util.c"
                                                                parse_tree__prog_io_util__TypeCtorInfo_189_189 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 11569 "parse_tree.prog_io_util.c"
                                                                parse_tree__prog_io_util__TypeCtorInfo_190_190 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 744 "prog_io_util.m"
                                                                {
#line 744 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__V_118_118 = mercury__term__coerce_var_1_f_0(parse_tree__prog_io_util__TypeCtorInfo_189_189, parse_tree__prog_io_util__TypeCtorInfo_190_190, parse_tree__prog_io_util__Var_42);
                                                                }
#line 743 "prog_io_util.m"
                                                                {
#line 743 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__V_117_117 = mercury__set__make_singleton_set_1_f_0(parse_tree__prog_io_util__TypeInfo_188_188, ((MR_Box) (parse_tree__prog_io_util__V_118_118)));
                                                                }
#line 743 "prog_io_util.m"
                                                                {
#line 743 "prog_io_util.m"
                                                                  MR_Word base;
#line 743 "prog_io_util.m"
                                                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 743 "prog_io_util.m"
                                                                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 743 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 743 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_117_117));
#line 743 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Inst_44));
#line 743 "prog_io_util.m"
                                                                }
#line 743 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 739 "prog_io_util.m"
                                                              }
#line 740 "prog_io_util.m"
                                                          }
#line 739 "prog_io_util.m"
                                                      }
#line 739 "prog_io_util.m"
                                                  }
#line 745 "prog_io_util.m"
                                                else
#line 748 "prog_io_util.m"
                                                  {
#line 748 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__QualifiedName_45;
#line 748 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__Args1_46;
#line 765 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__Result0_139;
#line 750 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__BuiltinModule_47;
#line 750 "prog_io_util.m"
                                                    MR_String parse_tree__prog_io_util__UnqualifiedName_48;
#line 750 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__V_119_119;
#line 750 "prog_io_util.m"
                                                    MR_String parse_tree__prog_io_util__V_120_120;
#line 750 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__V_192_192;
#line 762 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__V_121_121;
#line 762 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__V_49_49;
#line 762 "prog_io_util.m"
                                                    MR_Word parse_tree__prog_io_util__V_50_50;

#line 747 "prog_io_util.m"
                                                    {
#line 747 "prog_io_util.m"
                                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_from_f_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__Functor_11, parse_tree__prog_io_util__Args0_12, &parse_tree__prog_io_util__QualifiedName_45, &parse_tree__prog_io_util__Args1_46);
                                                    }
#line 748 "prog_io_util.m"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 748 "prog_io_util.m"
                                                      {
#line 750 "prog_io_util.m"
                                                        {
#line 750 "prog_io_util.m"
                                                          parse_tree__prog_io_util__BuiltinModule_47 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                                                        }
#line 751 "prog_io_util.m"
                                                        parse_tree__prog_io_util__V_120_120 = (MR_String) "";
#line 751 "prog_io_util.m"
                                                        parse_tree__prog_io_util__V_119_119 = (MR_Word) &parse_tree__prog_io_util_scalar_common_3[1];
#line 751 "prog_io_util.m"
                                                        {
#line 751 "prog_io_util.m"
                                                          mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(parse_tree__prog_io_util__QualifiedName_45, parse_tree__prog_io_util__V_119_119, &parse_tree__prog_io_util__V_192_192);
                                                        }
#line 751 "prog_io_util.m"
                                                        {
#line 751 "prog_io_util.m"
                                                          parse_tree__prog_io_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_util__BuiltinModule_47, parse_tree__prog_io_util__V_192_192);
                                                        }
#line 750 "prog_io_util.m"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 750 "prog_io_util.m"
                                                          {
#line 756 "prog_io_util.m"
                                                            {
#line 756 "prog_io_util.m"
                                                              parse_tree__prog_io_util__UnqualifiedName_48 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_io_util__QualifiedName_45);
                                                            }
#line 757 "prog_io_util.m"
                                                            {
#line 757 "prog_io_util.m"
                                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_simple_builtin_inst_3_p_0(parse_tree__prog_io_util__UnqualifiedName_48, parse_tree__prog_io_util__Args1_46, &parse_tree__prog_io_util__Result0_139);
                                                            }
#line 750 "prog_io_util.m"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 750 "prog_io_util.m"
                                                              {
#line 762 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_util__Result0_139)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Result0_139, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 762 "prog_io_util.m"
                                                                if (parse_tree__prog_io_util__succeeded)
#line 762 "prog_io_util.m"
                                                                  {
#line 762 "prog_io_util.m"
                                                                    parse_tree__prog_io_util__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Result0_139, (MR_Integer) 1)));
#line 762 "prog_io_util.m"
                                                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_121_121)) == (MR_mktag((MR_Integer) 0)));
#line 762 "prog_io_util.m"
                                                                    if (parse_tree__prog_io_util__succeeded)
#line 762 "prog_io_util.m"
                                                                      {
#line 762 "prog_io_util.m"
                                                                        parse_tree__prog_io_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_121_121, (MR_Integer) 0)));
#line 762 "prog_io_util.m"
                                                                        parse_tree__prog_io_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_121_121, (MR_Integer) 1)));
#line 762 "prog_io_util.m"
                                                                      }
#line 762 "prog_io_util.m"
                                                                  }
#line 762 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 750 "prog_io_util.m"
                                                              }
#line 750 "prog_io_util.m"
                                                          }
#line 765 "prog_io_util.m"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 764 "prog_io_util.m"
                                                          {
#line 764 "prog_io_util.m"
                                                            *parse_tree__prog_io_util__HeadVar__3_3 = parse_tree__prog_io_util__Result0_139;
#line 764 "prog_io_util.m"
                                                            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 764 "prog_io_util.m"
                                                          }
#line 765 "prog_io_util.m"
                                                        else
#line 766 "prog_io_util.m"
                                                          {
#line 766 "prog_io_util.m"
                                                            MR_Word parse_tree__prog_io_util__Args_51;
#line 766 "prog_io_util.m"
                                                            MR_Word parse_tree__prog_io_util__V_122_122;

#line 766 "prog_io_util.m"
                                                            {
#line 766 "prog_io_util.m"
                                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__Args1_46, &parse_tree__prog_io_util__Args_51);
                                                            }
#line 766 "prog_io_util.m"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 766 "prog_io_util.m"
                                                              {
#line 767 "prog_io_util.m"
                                                                {
#line 767 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 767 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_122_122, 0) = ((MR_Box) (parse_tree__prog_io_util__QualifiedName_45));
#line 767 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_122_122, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_51));
#line 767 "prog_io_util.m"
                                                                }
#line 767 "prog_io_util.m"
                                                                {
#line 767 "prog_io_util.m"
                                                                  MR_Word base;
#line 767 "prog_io_util.m"
                                                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 767 "prog_io_util.m"
                                                                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 767 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 767 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_122_122));
#line 767 "prog_io_util.m"
                                                                }
#line 767 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 766 "prog_io_util.m"
                                                              }
#line 766 "prog_io_util.m"
                                                          }
#line 748 "prog_io_util.m"
                                                      }
#line 748 "prog_io_util.m"
                                                  }
#line 745 "prog_io_util.m"
                                              }
#line 735 "prog_io_util.m"
                                          }
#line 729 "prog_io_util.m"
                                      }
#line 724 "prog_io_util.m"
                                  }
#line 718 "prog_io_util.m"
                              }
#line 712 "prog_io_util.m"
                          }
#line 690 "prog_io_util.m"
                      }
#line 672 "prog_io_util.m"
                  }
#line 651 "prog_io_util.m"
              }
#line 628 "prog_io_util.m"
          }
#line 626 "prog_io_util.m"
      }
#line 624 "prog_io_util.m"
    else
#line 624 "prog_io_util.m"
      {
#line 624 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 624 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_7;
#line 624 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));

#line 625 "prog_io_util.m"
        {
#line 625 "prog_io_util.m"
          mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_util__V0_5, &parse_tree__prog_io_util__V_7);
        }
#line 624 "prog_io_util.m"
        {
#line 624 "prog_io_util.m"
          MR_Word base;
#line 624 "prog_io_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 624 "prog_io_util.m"
          *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 624 "prog_io_util.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 624 "prog_io_util.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_7));
#line 624 "prog_io_util.m"
        }
#line 624 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 624 "prog_io_util.m"
      }
#line 624 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 624 "prog_io_util.m"
  }
#line 150 "prog_io_util.m"
}

#line 147 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__convert_inst_list_3_p_0(
#line 147 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
#line 147 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 147 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3)
#line 147 "prog_io_util.m"
{
#line 619 "prog_io_util.m"
  {
#line 619 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 619 "prog_io_util.m"
    if ((parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 619 "prog_io_util.m"
      {
#line 619 "prog_io_util.m"
        *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 619 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 619 "prog_io_util.m"
      }
#line 619 "prog_io_util.m"
    else
#line 620 "prog_io_util.m"
      {
#line 620 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__H0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 620 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__T0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 620 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__H_8;
#line 620 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__T_9;

#line 621 "prog_io_util.m"
        {
#line 621 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__H0_6, &parse_tree__prog_io_util__H_8);
        }
#line 620 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 620 "prog_io_util.m"
          {
#line 622 "prog_io_util.m"
            {
#line 622 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__T0_7, &parse_tree__prog_io_util__T_9);
            }
#line 620 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 620 "prog_io_util.m"
              {
#line 620 "prog_io_util.m"
                {
#line 620 "prog_io_util.m"
                  MR_Word base;
#line 620 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 620 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 620 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__H_8));
#line 620 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__T_9));
#line 620 "prog_io_util.m"
                }
#line 620 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 620 "prog_io_util.m"
              }
#line 620 "prog_io_util.m"
          }
#line 620 "prog_io_util.m"
      }
#line 619 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 619 "prog_io_util.m"
  }
#line 147 "prog_io_util.m"
}

#line 144 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__convert_mode_3_p_0(
#line 144 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_4,
#line 144 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_5,
#line 144 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Mode_6)
#line 144 "prog_io_util.m"
{
#line 515 "prog_io_util.m"
  {
#line 515 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 515 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TermFunctor_7;
#line 515 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TermArgs_8;
#line 516 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;
#line 524 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__InstTermA_10;
#line 524 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__InstTermB_11;
#line 518 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_41_41;
#line 518 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_42_42;
#line 518 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_43_43;

#line 516 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 516 "prog_io_util.m"
      {
#line 516 "prog_io_util.m"
        parse_tree__prog_io_util__TermFunctor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 516 "prog_io_util.m"
        parse_tree__prog_io_util__TermArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 516 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 518 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermFunctor_7)) == (MR_mktag((MR_Integer) 0)));
#line 518 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 518 "prog_io_util.m"
          {
#line 518 "prog_io_util.m"
            parse_tree__prog_io_util__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TermFunctor_7, (MR_Integer) 0)));
#line 518 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_41_41, (MR_String) ">>") == 0);
#line 518 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 518 "prog_io_util.m"
              {
#line 519 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermArgs_8)) == (MR_mktag((MR_Integer) 1)));
#line 519 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 519 "prog_io_util.m"
                  {
#line 519 "prog_io_util.m"
                    parse_tree__prog_io_util__InstTermA_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 0)));
#line 519 "prog_io_util.m"
                    parse_tree__prog_io_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 1)));
#line 519 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_42_42)) == (MR_mktag((MR_Integer) 1)));
#line 519 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 519 "prog_io_util.m"
                      {
#line 519 "prog_io_util.m"
                        parse_tree__prog_io_util__InstTermB_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_42_42, (MR_Integer) 0)));
#line 519 "prog_io_util.m"
                        parse_tree__prog_io_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_42_42, (MR_Integer) 1)));
#line 519 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_43_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "prog_io_util.m"
                      }
#line 519 "prog_io_util.m"
                  }
#line 518 "prog_io_util.m"
              }
#line 518 "prog_io_util.m"
          }
#line 524 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 521 "prog_io_util.m"
          {
#line 521 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__InstA_12;
#line 521 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__InstB_13;

#line 521 "prog_io_util.m"
            {
#line 521 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__InstTermA_10, &parse_tree__prog_io_util__InstA_12);
            }
#line 521 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 521 "prog_io_util.m"
              {
#line 522 "prog_io_util.m"
                {
#line 522 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__InstTermB_11, &parse_tree__prog_io_util__InstB_13);
                }
#line 521 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 521 "prog_io_util.m"
                  {
#line 523 "prog_io_util.m"
                    {
#line 523 "prog_io_util.m"
                      MR_Word base;
#line 523 "prog_io_util.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 523 "prog_io_util.m"
                      *parse_tree__prog_io_util__Mode_6 = base;
#line 523 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__InstA_12));
#line 523 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__InstB_13));
#line 523 "prog_io_util.m"
                    }
#line 523 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 521 "prog_io_util.m"
                  }
#line 521 "prog_io_util.m"
              }
#line 521 "prog_io_util.m"
          }
#line 524 "prog_io_util.m"
        else
#line 544 "prog_io_util.m"
          {
#line 544 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__DetTerm_15;
#line 544 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__ArgModesTerms_16;
#line 533 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__PredTerm_14;
#line 533 "prog_io_util.m"
            MR_String parse_tree__prog_io_util__V_44_44;
#line 533 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_45_45;
#line 533 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_46_46;
#line 533 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_47_47;
#line 533 "prog_io_util.m"
            MR_String parse_tree__prog_io_util__V_48_48;
#line 535 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_17_17;

#line 533 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermFunctor_7)) == (MR_mktag((MR_Integer) 0)));
#line 533 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 533 "prog_io_util.m"
              {
#line 533 "prog_io_util.m"
                parse_tree__prog_io_util__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TermFunctor_7, (MR_Integer) 0)));
#line 533 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_44_44, (MR_String) "is") == 0);
#line 533 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 533 "prog_io_util.m"
                  {
#line 534 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermArgs_8)) == (MR_mktag((MR_Integer) 1)));
#line 534 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 534 "prog_io_util.m"
                      {
#line 534 "prog_io_util.m"
                        parse_tree__prog_io_util__PredTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 0)));
#line 534 "prog_io_util.m"
                        parse_tree__prog_io_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 1)));
#line 534 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_45_45)) == (MR_mktag((MR_Integer) 1)));
#line 534 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 534 "prog_io_util.m"
                          {
#line 534 "prog_io_util.m"
                            parse_tree__prog_io_util__DetTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, (MR_Integer) 0)));
#line 534 "prog_io_util.m"
                            parse_tree__prog_io_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, (MR_Integer) 1)));
#line 534 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 533 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 533 "prog_io_util.m"
                              {
#line 535 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredTerm_14)) == (MR_mktag((MR_Integer) 0)));
#line 535 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 535 "prog_io_util.m"
                                  {
#line 535 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_14, (MR_Integer) 0)));
#line 535 "prog_io_util.m"
                                    parse_tree__prog_io_util__ArgModesTerms_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_14, (MR_Integer) 1)));
#line 535 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_14, (MR_Integer) 2)));
#line 535 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_47_47)) == (MR_mktag((MR_Integer) 0)));
#line 535 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 535 "prog_io_util.m"
                                      {
#line 535 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_47_47, (MR_Integer) 0)));
#line 535 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_48_48, (MR_String) "pred") == 0);
#line 535 "prog_io_util.m"
                                      }
#line 535 "prog_io_util.m"
                                  }
#line 533 "prog_io_util.m"
                              }
#line 534 "prog_io_util.m"
                          }
#line 534 "prog_io_util.m"
                      }
#line 533 "prog_io_util.m"
                  }
#line 533 "prog_io_util.m"
              }
#line 544 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 537 "prog_io_util.m"
              {
#line 537 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__DetString_18;
#line 537 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Detism_20;
#line 537 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__ArgModes_21;
#line 537 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__PredInstInfo_22;
#line 537 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Inst_23;
#line 537 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_49_49;
#line 537 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_50_50;
#line 537 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_51_51;
#line 537 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_52_52;
#line 537 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_53_53;
#line 537 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_54_54;
#line 537 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_19_19;

#line 537 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_15)) == (MR_mktag((MR_Integer) 0)));
#line 537 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 537 "prog_io_util.m"
                  {
#line 537 "prog_io_util.m"
                    parse_tree__prog_io_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_15, (MR_Integer) 0)));
#line 537 "prog_io_util.m"
                    parse_tree__prog_io_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_15, (MR_Integer) 1)));
#line 537 "prog_io_util.m"
                    parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_15, (MR_Integer) 2)));
#line 537 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 537 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 537 "prog_io_util.m"
                      {
#line 537 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_49_49)) == (MR_mktag((MR_Integer) 0)));
#line 537 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 537 "prog_io_util.m"
                          {
#line 537 "prog_io_util.m"
                            parse_tree__prog_io_util__DetString_18 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_49_49, (MR_Integer) 0)));
#line 538 "prog_io_util.m"
                            {
#line 538 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_18, &parse_tree__prog_io_util__Detism_20);
                            }
#line 537 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 537 "prog_io_util.m"
                              {
#line 539 "prog_io_util.m"
                                {
#line 539 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__ArgModesTerms_16, &parse_tree__prog_io_util__ArgModes_21);
                                }
#line 537 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 537 "prog_io_util.m"
                                  {
#line 540 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_51_51 = (MR_Integer) 0;
#line 541 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_52_52 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 542 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_53_53 = (MR_Integer) 0;
#line 540 "prog_io_util.m"
                                    {
#line 540 "prog_io_util.m"
                                      parse_tree__prog_io_util__PredInstInfo_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 540 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_22, 0) = ((MR_Box) (parse_tree__prog_io_util__V_51_51));
#line 540 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_22, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_21));
#line 540 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_22, 2) = ((MR_Box) (parse_tree__prog_io_util__V_52_52));
#line 540 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_22, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_20));
#line 540 "prog_io_util.m"
                                    }
#line 542 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__PredInstInfo_22);
#line 542 "prog_io_util.m"
                                    {
#line 542 "prog_io_util.m"
                                      parse_tree__prog_io_util__Inst_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 542 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 542 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_23, 1) = ((MR_Box) (parse_tree__prog_io_util__V_53_53));
#line 542 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_23, 2) = ((MR_Box) (parse_tree__prog_io_util__V_54_54));
#line 542 "prog_io_util.m"
                                    }
#line 543 "prog_io_util.m"
                                    {
#line 543 "prog_io_util.m"
                                      MR_Word base;
#line 543 "prog_io_util.m"
                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 543 "prog_io_util.m"
                                      *parse_tree__prog_io_util__Mode_6 = base;
#line 543 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Inst_23));
#line 543 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Inst_23));
#line 543 "prog_io_util.m"
                                    }
#line 543 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 537 "prog_io_util.m"
                                  }
#line 537 "prog_io_util.m"
                              }
#line 537 "prog_io_util.m"
                          }
#line 537 "prog_io_util.m"
                      }
#line 537 "prog_io_util.m"
                  }
#line 537 "prog_io_util.m"
              }
#line 544 "prog_io_util.m"
            else
#line 567 "prog_io_util.m"
              {
#line 567 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__RetModeTerm_26;
#line 567 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__DetTerm_152;
#line 567 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__ArgModesTerms_153;
#line 553 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__EqTerm_24;
#line 553 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__FuncTerm_25;
#line 553 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__V_56_56;
#line 553 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_57_57;
#line 553 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_58_58;
#line 553 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_59_59;
#line 553 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__V_60_60;
#line 553 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_61_61;
#line 553 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_62_62;
#line 553 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_63_63;
#line 553 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_64_64;
#line 553 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__V_65_65;
#line 555 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_27_27;
#line 556 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_28_28;

#line 553 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermFunctor_7)) == (MR_mktag((MR_Integer) 0)));
#line 553 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 553 "prog_io_util.m"
                  {
#line 553 "prog_io_util.m"
                    parse_tree__prog_io_util__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TermFunctor_7, (MR_Integer) 0)));
#line 553 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_56_56, (MR_String) "is") == 0);
#line 553 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 553 "prog_io_util.m"
                      {
#line 554 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermArgs_8)) == (MR_mktag((MR_Integer) 1)));
#line 554 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 554 "prog_io_util.m"
                          {
#line 554 "prog_io_util.m"
                            parse_tree__prog_io_util__EqTerm_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 0)));
#line 554 "prog_io_util.m"
                            parse_tree__prog_io_util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 1)));
#line 554 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_57_57)) == (MR_mktag((MR_Integer) 1)));
#line 554 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 554 "prog_io_util.m"
                              {
#line 554 "prog_io_util.m"
                                parse_tree__prog_io_util__DetTerm_152 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_57_57, (MR_Integer) 0)));
#line 554 "prog_io_util.m"
                                parse_tree__prog_io_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_57_57, (MR_Integer) 1)));
#line 554 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 553 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 553 "prog_io_util.m"
                                  {
#line 555 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__EqTerm_24)) == (MR_mktag((MR_Integer) 0)));
#line 555 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 555 "prog_io_util.m"
                                      {
#line 555 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_24, (MR_Integer) 0)));
#line 555 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_24, (MR_Integer) 1)));
#line 555 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_24, (MR_Integer) 2)));
#line 555 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_59_59)) == (MR_mktag((MR_Integer) 0)));
#line 555 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 555 "prog_io_util.m"
                                          {
#line 555 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_60_60 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_59_59, (MR_Integer) 0)));
#line 555 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_60_60, (MR_String) "=") == 0);
#line 553 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 553 "prog_io_util.m"
                                              {
#line 555 "prog_io_util.m"
                                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_61_61)) == (MR_mktag((MR_Integer) 1)));
#line 555 "prog_io_util.m"
                                                if (parse_tree__prog_io_util__succeeded)
#line 555 "prog_io_util.m"
                                                  {
#line 555 "prog_io_util.m"
                                                    parse_tree__prog_io_util__FuncTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_61_61, (MR_Integer) 0)));
#line 555 "prog_io_util.m"
                                                    parse_tree__prog_io_util__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_61_61, (MR_Integer) 1)));
#line 555 "prog_io_util.m"
                                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_62_62)) == (MR_mktag((MR_Integer) 1)));
#line 555 "prog_io_util.m"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 555 "prog_io_util.m"
                                                      {
#line 555 "prog_io_util.m"
                                                        parse_tree__prog_io_util__RetModeTerm_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_62_62, (MR_Integer) 0)));
#line 555 "prog_io_util.m"
                                                        parse_tree__prog_io_util__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_62_62, (MR_Integer) 1)));
#line 555 "prog_io_util.m"
                                                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 553 "prog_io_util.m"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 553 "prog_io_util.m"
                                                          {
#line 556 "prog_io_util.m"
                                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__FuncTerm_25)) == (MR_mktag((MR_Integer) 0)));
#line 556 "prog_io_util.m"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 556 "prog_io_util.m"
                                                              {
#line 556 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_25, (MR_Integer) 0)));
#line 556 "prog_io_util.m"
                                                                parse_tree__prog_io_util__ArgModesTerms_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_25, (MR_Integer) 1)));
#line 556 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_25, (MR_Integer) 2)));
#line 556 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_64_64)) == (MR_mktag((MR_Integer) 0)));
#line 556 "prog_io_util.m"
                                                                if (parse_tree__prog_io_util__succeeded)
#line 556 "prog_io_util.m"
                                                                  {
#line 556 "prog_io_util.m"
                                                                    parse_tree__prog_io_util__V_65_65 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_64_64, (MR_Integer) 0)));
#line 556 "prog_io_util.m"
                                                                    parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_65_65, (MR_String) "func") == 0);
#line 556 "prog_io_util.m"
                                                                  }
#line 556 "prog_io_util.m"
                                                              }
#line 553 "prog_io_util.m"
                                                          }
#line 555 "prog_io_util.m"
                                                      }
#line 555 "prog_io_util.m"
                                                  }
#line 553 "prog_io_util.m"
                                              }
#line 555 "prog_io_util.m"
                                          }
#line 555 "prog_io_util.m"
                                      }
#line 553 "prog_io_util.m"
                                  }
#line 554 "prog_io_util.m"
                              }
#line 554 "prog_io_util.m"
                          }
#line 553 "prog_io_util.m"
                      }
#line 553 "prog_io_util.m"
                  }
#line 567 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 558 "prog_io_util.m"
                  {
#line 558 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__TypeCtorInfo_159_159;
#line 558 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__ArgModes0_30;
#line 558 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__RetMode_31;
#line 558 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__FuncInstInfo_32;
#line 558 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_66_66;
#line 558 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_67_67;
#line 558 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_68_68;
#line 558 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_69_69;
#line 558 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_70_70;
#line 558 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_71_71;
#line 558 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_72_72;
#line 558 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_73_73;
#line 558 "prog_io_util.m"
                    MR_String parse_tree__prog_io_util__DetString_106;
#line 558 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Detism_107;
#line 558 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__ArgModes_108;
#line 558 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Inst_109;
#line 558 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_29_29;

#line 558 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_152)) == (MR_mktag((MR_Integer) 0)));
#line 558 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 558 "prog_io_util.m"
                      {
#line 558 "prog_io_util.m"
                        parse_tree__prog_io_util__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_152, (MR_Integer) 0)));
#line 558 "prog_io_util.m"
                        parse_tree__prog_io_util__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_152, (MR_Integer) 1)));
#line 558 "prog_io_util.m"
                        parse_tree__prog_io_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_152, (MR_Integer) 2)));
#line 558 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_67_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 558 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 558 "prog_io_util.m"
                          {
#line 558 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_66_66)) == (MR_mktag((MR_Integer) 0)));
#line 558 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 558 "prog_io_util.m"
                              {
#line 558 "prog_io_util.m"
                                parse_tree__prog_io_util__DetString_106 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_66_66, (MR_Integer) 0)));
#line 559 "prog_io_util.m"
                                {
#line 559 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_106, &parse_tree__prog_io_util__Detism_107);
                                }
#line 558 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 558 "prog_io_util.m"
                                  {
#line 560 "prog_io_util.m"
                                    {
#line 560 "prog_io_util.m"
                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__ArgModesTerms_153, &parse_tree__prog_io_util__ArgModes0_30);
                                    }
#line 558 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 558 "prog_io_util.m"
                                      {
#line 561 "prog_io_util.m"
                                        {
#line 561 "prog_io_util.m"
                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__RetModeTerm_26, &parse_tree__prog_io_util__RetMode_31);
                                        }
#line 558 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 558 "prog_io_util.m"
                                          {
#line 562 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_69_69 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 12561 "parse_tree.prog_io_util.c"
                                            parse_tree__prog_io_util__TypeCtorInfo_159_159 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 562 "prog_io_util.m"
                                            {
#line 562 "prog_io_util.m"
                                              parse_tree__prog_io_util__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 562 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_util__RetMode_31));
#line 562 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_68_68, 1) = ((MR_Box) (parse_tree__prog_io_util__V_69_69));
#line 562 "prog_io_util.m"
                                            }
#line 562 "prog_io_util.m"
                                            {
#line 562 "prog_io_util.m"
                                              mercury__list__append_3_p_1(parse_tree__prog_io_util__TypeCtorInfo_159_159, parse_tree__prog_io_util__ArgModes0_30, parse_tree__prog_io_util__V_68_68, &parse_tree__prog_io_util__ArgModes_108);
                                            }
#line 563 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_70_70 = (MR_Integer) 1;
#line 564 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_71_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 565 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_72_72 = (MR_Integer) 0;
#line 563 "prog_io_util.m"
                                            {
#line 563 "prog_io_util.m"
                                              parse_tree__prog_io_util__FuncInstInfo_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 563 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_32, 0) = ((MR_Box) (parse_tree__prog_io_util__V_70_70));
#line 563 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_32, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_108));
#line 563 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_32, 2) = ((MR_Box) (parse_tree__prog_io_util__V_71_71));
#line 563 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_32, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_107));
#line 563 "prog_io_util.m"
                                            }
#line 565 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__FuncInstInfo_32);
#line 565 "prog_io_util.m"
                                            {
#line 565 "prog_io_util.m"
                                              parse_tree__prog_io_util__Inst_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 565 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 565 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_109, 1) = ((MR_Box) (parse_tree__prog_io_util__V_72_72));
#line 565 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_109, 2) = ((MR_Box) (parse_tree__prog_io_util__V_73_73));
#line 565 "prog_io_util.m"
                                            }
#line 566 "prog_io_util.m"
                                            {
#line 566 "prog_io_util.m"
                                              MR_Word base;
#line 566 "prog_io_util.m"
                                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 566 "prog_io_util.m"
                                              *parse_tree__prog_io_util__Mode_6 = base;
#line 566 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Inst_109));
#line 566 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Inst_109));
#line 566 "prog_io_util.m"
                                            }
#line 566 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 558 "prog_io_util.m"
                                          }
#line 558 "prog_io_util.m"
                                      }
#line 558 "prog_io_util.m"
                                  }
#line 558 "prog_io_util.m"
                              }
#line 558 "prog_io_util.m"
                          }
#line 558 "prog_io_util.m"
                      }
#line 558 "prog_io_util.m"
                  }
#line 567 "prog_io_util.m"
                else
#line 587 "prog_io_util.m"
                  {
#line 587 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__DetTerm_138;
#line 587 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__ArgModesTerms_139;
#line 576 "prog_io_util.m"
                    MR_String parse_tree__prog_io_util__V_75_75;
#line 576 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_76_76;
#line 576 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_77_77;
#line 576 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_78_78;
#line 576 "prog_io_util.m"
                    MR_String parse_tree__prog_io_util__V_79_79;
#line 576 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__PredTerm_110;
#line 578 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_33_33;

#line 576 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermFunctor_7)) == (MR_mktag((MR_Integer) 0)));
#line 576 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 576 "prog_io_util.m"
                      {
#line 576 "prog_io_util.m"
                        parse_tree__prog_io_util__V_75_75 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TermFunctor_7, (MR_Integer) 0)));
#line 576 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_75_75, (MR_String) "is") == 0);
#line 576 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 576 "prog_io_util.m"
                          {
#line 577 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermArgs_8)) == (MR_mktag((MR_Integer) 1)));
#line 577 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 577 "prog_io_util.m"
                              {
#line 577 "prog_io_util.m"
                                parse_tree__prog_io_util__PredTerm_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 0)));
#line 577 "prog_io_util.m"
                                parse_tree__prog_io_util__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 1)));
#line 577 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_76_76)) == (MR_mktag((MR_Integer) 1)));
#line 577 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 577 "prog_io_util.m"
                                  {
#line 577 "prog_io_util.m"
                                    parse_tree__prog_io_util__DetTerm_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_76_76, (MR_Integer) 0)));
#line 577 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_76_76, (MR_Integer) 1)));
#line 577 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_77_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 576 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 576 "prog_io_util.m"
                                      {
#line 578 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredTerm_110)) == (MR_mktag((MR_Integer) 0)));
#line 578 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 578 "prog_io_util.m"
                                          {
#line 578 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_110, (MR_Integer) 0)));
#line 578 "prog_io_util.m"
                                            parse_tree__prog_io_util__ArgModesTerms_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_110, (MR_Integer) 1)));
#line 578 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredTerm_110, (MR_Integer) 2)));
#line 578 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_78_78)) == (MR_mktag((MR_Integer) 0)));
#line 578 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 578 "prog_io_util.m"
                                              {
#line 578 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_79_79 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_78_78, (MR_Integer) 0)));
#line 578 "prog_io_util.m"
                                                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_79_79, (MR_String) "any_pred") == 0);
#line 578 "prog_io_util.m"
                                              }
#line 578 "prog_io_util.m"
                                          }
#line 576 "prog_io_util.m"
                                      }
#line 577 "prog_io_util.m"
                                  }
#line 577 "prog_io_util.m"
                              }
#line 576 "prog_io_util.m"
                          }
#line 576 "prog_io_util.m"
                      }
#line 587 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 580 "prog_io_util.m"
                      {
#line 580 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_80_80;
#line 580 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_81_81;
#line 580 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_82_82;
#line 580 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_83_83;
#line 580 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_84_84;
#line 580 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_85_85;
#line 580 "prog_io_util.m"
                        MR_String parse_tree__prog_io_util__DetString_111;
#line 580 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Detism_112;
#line 580 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__ArgModes_113;
#line 580 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__PredInstInfo_114;
#line 580 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Inst_115;
#line 580 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_34_34;

#line 580 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_138)) == (MR_mktag((MR_Integer) 0)));
#line 580 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 580 "prog_io_util.m"
                          {
#line 580 "prog_io_util.m"
                            parse_tree__prog_io_util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_138, (MR_Integer) 0)));
#line 580 "prog_io_util.m"
                            parse_tree__prog_io_util__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_138, (MR_Integer) 1)));
#line 580 "prog_io_util.m"
                            parse_tree__prog_io_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_138, (MR_Integer) 2)));
#line 580 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_81_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 580 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 580 "prog_io_util.m"
                              {
#line 580 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_80_80)) == (MR_mktag((MR_Integer) 0)));
#line 580 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 580 "prog_io_util.m"
                                  {
#line 580 "prog_io_util.m"
                                    parse_tree__prog_io_util__DetString_111 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_80_80, (MR_Integer) 0)));
#line 581 "prog_io_util.m"
                                    {
#line 581 "prog_io_util.m"
                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_111, &parse_tree__prog_io_util__Detism_112);
                                    }
#line 580 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 580 "prog_io_util.m"
                                      {
#line 582 "prog_io_util.m"
                                        {
#line 582 "prog_io_util.m"
                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__ArgModesTerms_139, &parse_tree__prog_io_util__ArgModes_113);
                                        }
#line 580 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 580 "prog_io_util.m"
                                          {
#line 583 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_82_82 = (MR_Integer) 0;
#line 584 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_83_83 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 585 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_84_84 = (MR_Integer) 0;
#line 583 "prog_io_util.m"
                                            {
#line 583 "prog_io_util.m"
                                              parse_tree__prog_io_util__PredInstInfo_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 583 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_114, 0) = ((MR_Box) (parse_tree__prog_io_util__V_82_82));
#line 583 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_114, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_113));
#line 583 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_114, 2) = ((MR_Box) (parse_tree__prog_io_util__V_83_83));
#line 583 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_114, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_112));
#line 583 "prog_io_util.m"
                                            }
#line 585 "prog_io_util.m"
                                            parse_tree__prog_io_util__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__PredInstInfo_114);
#line 585 "prog_io_util.m"
                                            {
#line 585 "prog_io_util.m"
                                              parse_tree__prog_io_util__Inst_115 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Inst_115, 0) = ((MR_Box) (parse_tree__prog_io_util__V_84_84));
#line 585 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Inst_115, 1) = ((MR_Box) (parse_tree__prog_io_util__V_85_85));
#line 585 "prog_io_util.m"
                                            }
#line 586 "prog_io_util.m"
                                            {
#line 586 "prog_io_util.m"
                                              MR_Word base;
#line 586 "prog_io_util.m"
                                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 586 "prog_io_util.m"
                                              *parse_tree__prog_io_util__Mode_6 = base;
#line 586 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Inst_115));
#line 586 "prog_io_util.m"
                                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Inst_115));
#line 586 "prog_io_util.m"
                                            }
#line 586 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 580 "prog_io_util.m"
                                          }
#line 580 "prog_io_util.m"
                                      }
#line 580 "prog_io_util.m"
                                  }
#line 580 "prog_io_util.m"
                              }
#line 580 "prog_io_util.m"
                          }
#line 580 "prog_io_util.m"
                      }
#line 587 "prog_io_util.m"
                    else
#line 610 "prog_io_util.m"
                      {
#line 610 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__DetTerm_125;
#line 610 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__ArgModesTerms_126;
#line 610 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__RetModeTerm_133;
#line 596 "prog_io_util.m"
                        MR_String parse_tree__prog_io_util__V_87_87;
#line 596 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_88_88;
#line 596 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_89_89;
#line 596 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_90_90;
#line 596 "prog_io_util.m"
                        MR_String parse_tree__prog_io_util__V_91_91;
#line 596 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_92_92;
#line 596 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_93_93;
#line 596 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_94_94;
#line 596 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_95_95;
#line 596 "prog_io_util.m"
                        MR_String parse_tree__prog_io_util__V_96_96;
#line 596 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__EqTerm_116;
#line 596 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__FuncTerm_117;
#line 598 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_35_35;
#line 599 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_36_36;

#line 596 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermFunctor_7)) == (MR_mktag((MR_Integer) 0)));
#line 596 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 596 "prog_io_util.m"
                          {
#line 596 "prog_io_util.m"
                            parse_tree__prog_io_util__V_87_87 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TermFunctor_7, (MR_Integer) 0)));
#line 596 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_87_87, (MR_String) "is") == 0);
#line 596 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 596 "prog_io_util.m"
                              {
#line 597 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermArgs_8)) == (MR_mktag((MR_Integer) 1)));
#line 597 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 597 "prog_io_util.m"
                                  {
#line 597 "prog_io_util.m"
                                    parse_tree__prog_io_util__EqTerm_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 0)));
#line 597 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 1)));
#line 597 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_88_88)) == (MR_mktag((MR_Integer) 1)));
#line 597 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 597 "prog_io_util.m"
                                      {
#line 597 "prog_io_util.m"
                                        parse_tree__prog_io_util__DetTerm_125 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_88_88, (MR_Integer) 0)));
#line 597 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_88_88, (MR_Integer) 1)));
#line 597 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_89_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 596 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 596 "prog_io_util.m"
                                          {
#line 598 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__EqTerm_116)) == (MR_mktag((MR_Integer) 0)));
#line 598 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 598 "prog_io_util.m"
                                              {
#line 598 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_116, (MR_Integer) 0)));
#line 598 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_116, (MR_Integer) 1)));
#line 598 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__EqTerm_116, (MR_Integer) 2)));
#line 598 "prog_io_util.m"
                                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_90_90)) == (MR_mktag((MR_Integer) 0)));
#line 598 "prog_io_util.m"
                                                if (parse_tree__prog_io_util__succeeded)
#line 598 "prog_io_util.m"
                                                  {
#line 598 "prog_io_util.m"
                                                    parse_tree__prog_io_util__V_91_91 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_90_90, (MR_Integer) 0)));
#line 598 "prog_io_util.m"
                                                    parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_91_91, (MR_String) "=") == 0);
#line 596 "prog_io_util.m"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 596 "prog_io_util.m"
                                                      {
#line 598 "prog_io_util.m"
                                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_92_92)) == (MR_mktag((MR_Integer) 1)));
#line 598 "prog_io_util.m"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 598 "prog_io_util.m"
                                                          {
#line 598 "prog_io_util.m"
                                                            parse_tree__prog_io_util__FuncTerm_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_92_92, (MR_Integer) 0)));
#line 598 "prog_io_util.m"
                                                            parse_tree__prog_io_util__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_92_92, (MR_Integer) 1)));
#line 598 "prog_io_util.m"
                                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_93_93)) == (MR_mktag((MR_Integer) 1)));
#line 598 "prog_io_util.m"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 598 "prog_io_util.m"
                                                              {
#line 598 "prog_io_util.m"
                                                                parse_tree__prog_io_util__RetModeTerm_133 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_93_93, (MR_Integer) 0)));
#line 598 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_93_93, (MR_Integer) 1)));
#line 598 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_94_94 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 596 "prog_io_util.m"
                                                                if (parse_tree__prog_io_util__succeeded)
#line 596 "prog_io_util.m"
                                                                  {
#line 599 "prog_io_util.m"
                                                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__FuncTerm_117)) == (MR_mktag((MR_Integer) 0)));
#line 599 "prog_io_util.m"
                                                                    if (parse_tree__prog_io_util__succeeded)
#line 599 "prog_io_util.m"
                                                                      {
#line 599 "prog_io_util.m"
                                                                        parse_tree__prog_io_util__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_117, (MR_Integer) 0)));
#line 599 "prog_io_util.m"
                                                                        parse_tree__prog_io_util__ArgModesTerms_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_117, (MR_Integer) 1)));
#line 599 "prog_io_util.m"
                                                                        parse_tree__prog_io_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_117, (MR_Integer) 2)));
#line 599 "prog_io_util.m"
                                                                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_95_95)) == (MR_mktag((MR_Integer) 0)));
#line 599 "prog_io_util.m"
                                                                        if (parse_tree__prog_io_util__succeeded)
#line 599 "prog_io_util.m"
                                                                          {
#line 599 "prog_io_util.m"
                                                                            parse_tree__prog_io_util__V_96_96 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_95_95, (MR_Integer) 0)));
#line 599 "prog_io_util.m"
                                                                            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_96_96, (MR_String) "any_func") == 0);
#line 599 "prog_io_util.m"
                                                                          }
#line 599 "prog_io_util.m"
                                                                      }
#line 596 "prog_io_util.m"
                                                                  }
#line 598 "prog_io_util.m"
                                                              }
#line 598 "prog_io_util.m"
                                                          }
#line 596 "prog_io_util.m"
                                                      }
#line 598 "prog_io_util.m"
                                                  }
#line 598 "prog_io_util.m"
                                              }
#line 596 "prog_io_util.m"
                                          }
#line 597 "prog_io_util.m"
                                      }
#line 597 "prog_io_util.m"
                                  }
#line 596 "prog_io_util.m"
                              }
#line 596 "prog_io_util.m"
                          }
#line 610 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 601 "prog_io_util.m"
                          {
#line 601 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__TypeCtorInfo_160_160;
#line 601 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_97_97;
#line 601 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_98_98;
#line 601 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_99_99;
#line 601 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_100_100;
#line 601 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_101_101;
#line 601 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_102_102;
#line 601 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_103_103;
#line 601 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_104_104;
#line 601 "prog_io_util.m"
                            MR_String parse_tree__prog_io_util__DetString_118;
#line 601 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Detism_119;
#line 601 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__ArgModes_120;
#line 601 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Inst_121;
#line 601 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__ArgModes0_122;
#line 601 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__RetMode_123;
#line 601 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__FuncInstInfo_124;
#line 601 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_37_37;

#line 601 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_125)) == (MR_mktag((MR_Integer) 0)));
#line 601 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 601 "prog_io_util.m"
                              {
#line 601 "prog_io_util.m"
                                parse_tree__prog_io_util__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_125, (MR_Integer) 0)));
#line 601 "prog_io_util.m"
                                parse_tree__prog_io_util__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_125, (MR_Integer) 1)));
#line 601 "prog_io_util.m"
                                parse_tree__prog_io_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_125, (MR_Integer) 2)));
#line 601 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_98_98 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 601 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 601 "prog_io_util.m"
                                  {
#line 601 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_97_97)) == (MR_mktag((MR_Integer) 0)));
#line 601 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 601 "prog_io_util.m"
                                      {
#line 601 "prog_io_util.m"
                                        parse_tree__prog_io_util__DetString_118 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_97_97, (MR_Integer) 0)));
#line 602 "prog_io_util.m"
                                        {
#line 602 "prog_io_util.m"
                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_118, &parse_tree__prog_io_util__Detism_119);
                                        }
#line 601 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 601 "prog_io_util.m"
                                          {
#line 603 "prog_io_util.m"
                                            {
#line 603 "prog_io_util.m"
                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__ArgModesTerms_126, &parse_tree__prog_io_util__ArgModes0_122);
                                            }
#line 601 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 601 "prog_io_util.m"
                                              {
#line 604 "prog_io_util.m"
                                                {
#line 604 "prog_io_util.m"
                                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__RetModeTerm_133, &parse_tree__prog_io_util__RetMode_123);
                                                }
#line 601 "prog_io_util.m"
                                                if (parse_tree__prog_io_util__succeeded)
#line 601 "prog_io_util.m"
                                                  {
#line 605 "prog_io_util.m"
                                                    parse_tree__prog_io_util__V_100_100 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 13147 "parse_tree.prog_io_util.c"
                                                    parse_tree__prog_io_util__TypeCtorInfo_160_160 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 605 "prog_io_util.m"
                                                    {
#line 605 "prog_io_util.m"
                                                      parse_tree__prog_io_util__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_99_99, 0) = ((MR_Box) (parse_tree__prog_io_util__RetMode_123));
#line 605 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_99_99, 1) = ((MR_Box) (parse_tree__prog_io_util__V_100_100));
#line 605 "prog_io_util.m"
                                                    }
#line 605 "prog_io_util.m"
                                                    {
#line 605 "prog_io_util.m"
                                                      mercury__list__append_3_p_1(parse_tree__prog_io_util__TypeCtorInfo_160_160, parse_tree__prog_io_util__ArgModes0_122, parse_tree__prog_io_util__V_99_99, &parse_tree__prog_io_util__ArgModes_120);
                                                    }
#line 606 "prog_io_util.m"
                                                    parse_tree__prog_io_util__V_101_101 = (MR_Integer) 1;
#line 607 "prog_io_util.m"
                                                    parse_tree__prog_io_util__V_102_102 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 608 "prog_io_util.m"
                                                    parse_tree__prog_io_util__V_103_103 = (MR_Integer) 0;
#line 606 "prog_io_util.m"
                                                    {
#line 606 "prog_io_util.m"
                                                      parse_tree__prog_io_util__FuncInstInfo_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 606 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_124, 0) = ((MR_Box) (parse_tree__prog_io_util__V_101_101));
#line 606 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_124, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_120));
#line 606 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_124, 2) = ((MR_Box) (parse_tree__prog_io_util__V_102_102));
#line 606 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_124, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_119));
#line 606 "prog_io_util.m"
                                                    }
#line 608 "prog_io_util.m"
                                                    parse_tree__prog_io_util__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__FuncInstInfo_124);
#line 608 "prog_io_util.m"
                                                    {
#line 608 "prog_io_util.m"
                                                      parse_tree__prog_io_util__Inst_121 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 608 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Inst_121, 0) = ((MR_Box) (parse_tree__prog_io_util__V_103_103));
#line 608 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Inst_121, 1) = ((MR_Box) (parse_tree__prog_io_util__V_104_104));
#line 608 "prog_io_util.m"
                                                    }
#line 609 "prog_io_util.m"
                                                    {
#line 609 "prog_io_util.m"
                                                      MR_Word base;
#line 609 "prog_io_util.m"
                                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 609 "prog_io_util.m"
                                                      *parse_tree__prog_io_util__Mode_6 = base;
#line 609 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Inst_121));
#line 609 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Inst_121));
#line 609 "prog_io_util.m"
                                                    }
#line 609 "prog_io_util.m"
                                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 601 "prog_io_util.m"
                                                  }
#line 601 "prog_io_util.m"
                                              }
#line 601 "prog_io_util.m"
                                          }
#line 601 "prog_io_util.m"
                                      }
#line 601 "prog_io_util.m"
                                  }
#line 601 "prog_io_util.m"
                              }
#line 601 "prog_io_util.m"
                          }
#line 610 "prog_io_util.m"
                        else
#line 614 "prog_io_util.m"
                          {
#line 614 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Name_38;
#line 614 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Args_39;
#line 614 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__ConvertedArgs_40;

#line 613 "prog_io_util.m"
                            {
#line 613 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_from_f_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__TermFunctor_7, parse_tree__prog_io_util__TermArgs_8, &parse_tree__prog_io_util__Name_38, &parse_tree__prog_io_util__Args_39);
                            }
#line 614 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 614 "prog_io_util.m"
                              {
#line 615 "prog_io_util.m"
                                {
#line 615 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__Args_39, &parse_tree__prog_io_util__ConvertedArgs_40);
                                }
#line 614 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 614 "prog_io_util.m"
                                  {
#line 616 "prog_io_util.m"
                                    {
#line 616 "prog_io_util.m"
                                      MR_Word base;
#line 616 "prog_io_util.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 616 "prog_io_util.m"
                                      *parse_tree__prog_io_util__Mode_6 = base;
#line 616 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Name_38));
#line 616 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__ConvertedArgs_40));
#line 616 "prog_io_util.m"
                                    }
#line 616 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 614 "prog_io_util.m"
                                  }
#line 614 "prog_io_util.m"
                              }
#line 614 "prog_io_util.m"
                          }
#line 610 "prog_io_util.m"
                      }
#line 587 "prog_io_util.m"
                  }
#line 567 "prog_io_util.m"
              }
#line 544 "prog_io_util.m"
          }
#line 516 "prog_io_util.m"
      }
#line 515 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 515 "prog_io_util.m"
  }
#line 144 "prog_io_util.m"
}

#line 141 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__convert_mode_list_3_p_0(
#line 141 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
#line 141 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 141 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3)
#line 141 "prog_io_util.m"
{
#line 510 "prog_io_util.m"
  {
#line 510 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 510 "prog_io_util.m"
    if ((parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 510 "prog_io_util.m"
      {
#line 510 "prog_io_util.m"
        *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 510 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 510 "prog_io_util.m"
      }
#line 510 "prog_io_util.m"
    else
#line 511 "prog_io_util.m"
      {
#line 511 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__H0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 511 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__T0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 511 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__H_8;
#line 511 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__T_9;

#line 512 "prog_io_util.m"
        {
#line 512 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__H0_6, &parse_tree__prog_io_util__H_8);
        }
#line 511 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 511 "prog_io_util.m"
          {
#line 513 "prog_io_util.m"
            {
#line 513 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__T0_7, &parse_tree__prog_io_util__T_9);
            }
#line 511 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 511 "prog_io_util.m"
              {
#line 511 "prog_io_util.m"
                {
#line 511 "prog_io_util.m"
                  MR_Word base;
#line 511 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 511 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__H_8));
#line 511 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__T_9));
#line 511 "prog_io_util.m"
                }
#line 511 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 511 "prog_io_util.m"
              }
#line 511 "prog_io_util.m"
          }
#line 511 "prog_io_util.m"
      }
#line 510 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 510 "prog_io_util.m"
  }
#line 141 "prog_io_util.m"
}

#line 135 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_purity_annotation_3_p_0(
#line 135 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_14,
#line 135 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term0_4,
#line 135 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Purity_5,
#line 135 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Term_6)
#line 135 "prog_io_util.m"
{
#line 437 "prog_io_util.m"
  {
#line 437 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term0_4)) == (MR_mktag((MR_Integer) 0)));
#line 437 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Term1_8;
#line 437 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Purity0_10;
#line 432 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__PurityName_7;
#line 432 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;
#line 432 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_12_12;
#line 432 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 432 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 432 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 432 "prog_io_util.m"
      {
#line 432 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_4, (MR_Integer) 0)));
#line 432 "prog_io_util.m"
        parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_4, (MR_Integer) 1)));
#line 432 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_4, (MR_Integer) 2)));
#line 432 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_11_11)) == (MR_mktag((MR_Integer) 0)));
#line 432 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 432 "prog_io_util.m"
          {
#line 432 "prog_io_util.m"
            parse_tree__prog_io_util__PurityName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_11_11, (MR_Integer) 0)));
#line 432 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 432 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 432 "prog_io_util.m"
              {
#line 432 "prog_io_util.m"
                parse_tree__prog_io_util__Term1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_12_12, (MR_Integer) 0)));
#line 432 "prog_io_util.m"
                parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_12_12, (MR_Integer) 1)));
#line 432 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 432 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 433 "prog_io_util.m"
                  {
#line 433 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = parse_tree__prog_out__purity_name_2_p_1(&parse_tree__prog_io_util__Purity0_10, parse_tree__prog_io_util__PurityName_7);
                  }
#line 432 "prog_io_util.m"
              }
#line 432 "prog_io_util.m"
          }
#line 432 "prog_io_util.m"
      }
#line 437 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 435 "prog_io_util.m"
      {
#line 435 "prog_io_util.m"
        *parse_tree__prog_io_util__Purity_5 = parse_tree__prog_io_util__Purity0_10;
#line 436 "prog_io_util.m"
        *parse_tree__prog_io_util__Term_6 = parse_tree__prog_io_util__Term1_8;
#line 435 "prog_io_util.m"
      }
#line 437 "prog_io_util.m"
    else
#line 438 "prog_io_util.m"
      {
#line 438 "prog_io_util.m"
        *parse_tree__prog_io_util__Purity_5 = (MR_Integer) 0;
#line 439 "prog_io_util.m"
        *parse_tree__prog_io_util__Term_6 = parse_tree__prog_io_util__Term0_4;
#line 438 "prog_io_util.m"
      }
#line 437 "prog_io_util.m"
  }
#line 135 "prog_io_util.m"
}

#line 133 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__unparse_type_2_p_0(
#line 133 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 133 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__2_2)
#line 133 "prog_io_util.m"
{
#line 442 "prog_io_util.m"
  {
#line 442 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 442 "prog_io_util.m"
#line 442 "prog_io_util.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) {
#line 442 "prog_io_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 442 "prog_io_util.m"
      case (MR_Integer) 0:
#line 442 "prog_io_util.m"
        {
#line 442 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__TVar_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 442 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__Var_5;
#line 442 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_6_6;
#line 442 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));

#line 442 "prog_io_util.m"
          {
#line 442 "prog_io_util.m"
            parse_tree__prog_io_util__V_6_6 = mercury__term__context_init_0_f_0();
          }
#line 443 "prog_io_util.m"
          {
#line 443 "prog_io_util.m"
            parse_tree__prog_io_util__Var_5 = mercury__term__coerce_var_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__TVar_3);
          }
#line 442 "prog_io_util.m"
          {
#line 442 "prog_io_util.m"
            MR_Word base;
#line 442 "prog_io_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "prog_io_util.m"
            *parse_tree__prog_io_util__HeadVar__2_2 = base;
#line 442 "prog_io_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Var_5));
#line 442 "prog_io_util.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_6_6));
#line 442 "prog_io_util.m"
          }
#line 442 "prog_io_util.m"
        }
#line 442 "prog_io_util.m"
        break;
#line 442 "prog_io_util.m"
      case (MR_Integer) 1:
#line 444 "prog_io_util.m"
        {
#line 444 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 444 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 444 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__ArgTerms_11;
#line 444 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 2)));

#line 445 "prog_io_util.m"
          {
#line 445 "prog_io_util.m"
            parse_tree__prog_io_util__unparse_type_list_2_p_0(parse_tree__prog_io_util__Args_8, &parse_tree__prog_io_util__ArgTerms_11);
          }
#line 446 "prog_io_util.m"
          {
#line 446 "prog_io_util.m"
            parse_tree__prog_io_util__unparse_qualified_term_3_p_0(parse_tree__prog_io_util__SymName_7, parse_tree__prog_io_util__ArgTerms_11, parse_tree__prog_io_util__HeadVar__2_2);
#line 446 "prog_io_util.m"
            return;
          }
#line 444 "prog_io_util.m"
        }
#line 442 "prog_io_util.m"
        break;
#line 442 "prog_io_util.m"
      case (MR_Integer) 2:
#line 447 "prog_io_util.m"
        {
#line 447 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__BuiltinType_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 447 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__Context_14;
#line 447 "prog_io_util.m"
          MR_String parse_tree__prog_io_util__Name_15;
#line 447 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_16_16;

#line 448 "prog_io_util.m"
          {
#line 448 "prog_io_util.m"
            parse_tree__prog_io_util__Context_14 = mercury__term__context_init_0_f_0();
          }
#line 449 "prog_io_util.m"
          {
#line 449 "prog_io_util.m"
            parse_tree__prog_out__builtin_type_to_string_2_p_0(parse_tree__prog_io_util__BuiltinType_12, &parse_tree__prog_io_util__Name_15);
          }
#line 450 "prog_io_util.m"
          {
#line 450 "prog_io_util.m"
            parse_tree__prog_io_util__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 450 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_16_16, 0) = ((MR_Box) (parse_tree__prog_io_util__Name_15));
#line 450 "prog_io_util.m"
          }
#line 450 "prog_io_util.m"
          {
#line 450 "prog_io_util.m"
            MR_Word base;
#line 450 "prog_io_util.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 450 "prog_io_util.m"
            *parse_tree__prog_io_util__HeadVar__2_2 = base;
#line 450 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_16_16));
#line 450 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 450 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_14));
#line 450 "prog_io_util.m"
          }
#line 447 "prog_io_util.m"
        }
#line 442 "prog_io_util.m"
        break;
#line 442 "prog_io_util.m"
      case (MR_Integer) 3:
#line 442 "prog_io_util.m"
#line 442 "prog_io_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)))) {
#line 442 "prog_io_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 442 "prog_io_util.m"
          case (MR_Integer) 0:
#line 466 "prog_io_util.m"
            {
#line 466 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Args_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 466 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Context_43;
#line 466 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__ArgTerms_44;
#line 466 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 2)));

#line 467 "prog_io_util.m"
              {
#line 467 "prog_io_util.m"
                parse_tree__prog_io_util__Context_43 = mercury__term__context_init_0_f_0();
              }
#line 468 "prog_io_util.m"
              {
#line 468 "prog_io_util.m"
                parse_tree__prog_io_util__unparse_type_list_2_p_0(parse_tree__prog_io_util__Args_40, &parse_tree__prog_io_util__ArgTerms_44);
              }
#line 469 "prog_io_util.m"
              {
#line 469 "prog_io_util.m"
                MR_Word base;
#line 469 "prog_io_util.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 469 "prog_io_util.m"
                *parse_tree__prog_io_util__HeadVar__2_2 = base;
#line 469 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[7]));
#line 469 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTerms_44));
#line 469 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_43));
#line 469 "prog_io_util.m"
              }
#line 466 "prog_io_util.m"
            }
#line 442 "prog_io_util.m"
            break;
#line 442 "prog_io_util.m"
          case (MR_Integer) 1:
#line 451 "prog_io_util.m"
            {
#line 451 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Args_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 451 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__MaybeRet_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 2)));
#line 451 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Purity_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 3)));
#line 451 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Context_23;
#line 451 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__ArgTerms_24;
#line 451 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Term2_29;

#line 452 "prog_io_util.m"
              {
#line 452 "prog_io_util.m"
                parse_tree__prog_io_util__Context_23 = mercury__term__context_init_0_f_0();
              }
#line 453 "prog_io_util.m"
              {
#line 453 "prog_io_util.m"
                parse_tree__prog_io_util__unparse_type_list_2_p_0(parse_tree__prog_io_util__Args_18, &parse_tree__prog_io_util__ArgTerms_24);
              }
#line 460 "prog_io_util.m"
              if ((parse_tree__prog_io_util__MaybeRet_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 461 "prog_io_util.m"
                {
#line 462 "prog_io_util.m"
                  {
#line 462 "prog_io_util.m"
                    parse_tree__prog_io_util__Term2_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 462 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_29, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[2]));
#line 462 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_29, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTerms_24));
#line 462 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_29, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_23));
#line 462 "prog_io_util.m"
                  }
#line 461 "prog_io_util.m"
                }
#line 460 "prog_io_util.m"
              else
#line 455 "prog_io_util.m"
                {
#line 455 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__Ret_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeRet_19, (MR_Integer) 0)));
#line 455 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__Term1_27;
#line 455 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__RetTerm_28;
#line 455 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_36_36;
#line 455 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_37_37;

#line 456 "prog_io_util.m"
                  {
#line 456 "prog_io_util.m"
                    parse_tree__prog_io_util__Term1_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 456 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_27, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[3]));
#line 456 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_27, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTerms_24));
#line 456 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_27, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_23));
#line 456 "prog_io_util.m"
                  }
#line 458 "prog_io_util.m"
                  {
#line 458 "prog_io_util.m"
                    parse_tree__prog_io_util__unparse_type_2_p_0(parse_tree__prog_io_util__Ret_25, &parse_tree__prog_io_util__RetTerm_28);
                  }
#line 459 "prog_io_util.m"
                  {
#line 459 "prog_io_util.m"
                    parse_tree__prog_io_util__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "prog_io_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_util__RetTerm_28));
#line 459 "prog_io_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 459 "prog_io_util.m"
                  }
#line 459 "prog_io_util.m"
                  {
#line 459 "prog_io_util.m"
                    parse_tree__prog_io_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "prog_io_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_util__Term1_27));
#line 459 "prog_io_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_36_36, 1) = ((MR_Box) (parse_tree__prog_io_util__V_37_37));
#line 459 "prog_io_util.m"
                  }
#line 459 "prog_io_util.m"
                  {
#line 459 "prog_io_util.m"
                    parse_tree__prog_io_util__Term2_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 459 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_29, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[4]));
#line 459 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_29, 1) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 459 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_29, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_23));
#line 459 "prog_io_util.m"
                  }
#line 455 "prog_io_util.m"
                }
#line 502 "prog_io_util.m"
#line 502 "prog_io_util.m"
              switch (parse_tree__prog_io_util__Purity_20) {
#line 502 "prog_io_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 502 "prog_io_util.m"
                case (MR_Integer) 2:
#line 506 "prog_io_util.m"
                  {
#line 506 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Context_80;
#line 506 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_83_83;

#line 507 "prog_io_util.m"
                    {
#line 507 "prog_io_util.m"
                      parse_tree__prog_io_util__Context_80 = mercury__term__context_init_0_f_0();
                    }
#line 508 "prog_io_util.m"
                    {
#line 508 "prog_io_util.m"
                      parse_tree__prog_io_util__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 508 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_util__Term2_29));
#line 508 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 508 "prog_io_util.m"
                    }
#line 508 "prog_io_util.m"
                    {
#line 508 "prog_io_util.m"
                      MR_Word base;
#line 508 "prog_io_util.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 508 "prog_io_util.m"
                      *parse_tree__prog_io_util__HeadVar__2_2 = base;
#line 508 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[5]));
#line 508 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_83_83));
#line 508 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_80));
#line 508 "prog_io_util.m"
                    }
#line 506 "prog_io_util.m"
                  }
#line 502 "prog_io_util.m"
                  break;
#line 502 "prog_io_util.m"
                case (MR_Integer) 0:
#line 502 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__2_2 = parse_tree__prog_io_util__Term2_29;
#line 502 "prog_io_util.m"
                  break;
#line 502 "prog_io_util.m"
                case (MR_Integer) 1:
#line 503 "prog_io_util.m"
                  {
#line 503 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Context_73;
#line 503 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_76_76;

#line 504 "prog_io_util.m"
                    {
#line 504 "prog_io_util.m"
                      parse_tree__prog_io_util__Context_73 = mercury__term__context_init_0_f_0();
                    }
#line 505 "prog_io_util.m"
                    {
#line 505 "prog_io_util.m"
                      parse_tree__prog_io_util__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_util__Term2_29));
#line 505 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 505 "prog_io_util.m"
                    }
#line 505 "prog_io_util.m"
                    {
#line 505 "prog_io_util.m"
                      MR_Word base;
#line 505 "prog_io_util.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 505 "prog_io_util.m"
                      *parse_tree__prog_io_util__HeadVar__2_2 = base;
#line 505 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[6]));
#line 505 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_76_76));
#line 505 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_73));
#line 505 "prog_io_util.m"
                    }
#line 503 "prog_io_util.m"
                  }
#line 502 "prog_io_util.m"
                  break;
#line 502 "prog_io_util.m"
              }
#line 451 "prog_io_util.m"
            }
#line 442 "prog_io_util.m"
            break;
#line 442 "prog_io_util.m"
          case (MR_Integer) 2:
#line 470 "prog_io_util.m"
            {
#line 470 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__TVar_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 470 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Args_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 2)));
#line 470 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Context_51;
#line 470 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Var_52;
#line 470 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__ArgTerms_53;
#line 470 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_56_56;
#line 470 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_57_57;
#line 470 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 3)));

#line 471 "prog_io_util.m"
              {
#line 471 "prog_io_util.m"
                parse_tree__prog_io_util__Context_51 = mercury__term__context_init_0_f_0();
              }
#line 472 "prog_io_util.m"
              {
#line 472 "prog_io_util.m"
                parse_tree__prog_io_util__Var_52 = mercury__term__coerce_var_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__TVar_47);
              }
#line 473 "prog_io_util.m"
              {
#line 473 "prog_io_util.m"
                parse_tree__prog_io_util__unparse_type_list_2_p_0(parse_tree__prog_io_util__Args_48, &parse_tree__prog_io_util__ArgTerms_53);
              }
#line 475 "prog_io_util.m"
              {
#line 475 "prog_io_util.m"
                parse_tree__prog_io_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 475 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_util__Var_52));
#line 475 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io_util__Context_51));
#line 475 "prog_io_util.m"
              }
#line 475 "prog_io_util.m"
              {
#line 475 "prog_io_util.m"
                parse_tree__prog_io_util__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 475 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_util__V_57_57));
#line 475 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTerms_53));
#line 475 "prog_io_util.m"
              }
#line 474 "prog_io_util.m"
              {
#line 474 "prog_io_util.m"
                MR_Word base;
#line 474 "prog_io_util.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 474 "prog_io_util.m"
                *parse_tree__prog_io_util__HeadVar__2_2 = base;
#line 474 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[1]));
#line 474 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_56_56));
#line 474 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_51));
#line 474 "prog_io_util.m"
              }
#line 470 "prog_io_util.m"
            }
#line 442 "prog_io_util.m"
            break;
#line 442 "prog_io_util.m"
          case (MR_Integer) 3:
#line 476 "prog_io_util.m"
            {
#line 477 "prog_io_util.m"
              {
#line 477 "prog_io_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_io_util", (MR_String) "predicate \140parse_tree.prog_io_util.unparse_type\'/2", (MR_String) "kind annotation");
#line 477 "prog_io_util.m"
                return;
              }
#line 476 "prog_io_util.m"
            }
#line 442 "prog_io_util.m"
            break;
#line 442 "prog_io_util.m"
        }
#line 442 "prog_io_util.m"
        break;
#line 442 "prog_io_util.m"
    }
#line 442 "prog_io_util.m"
  }
#line 133 "prog_io_util.m"
}

#line 130 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_types_4_p_0(
#line 130 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Terms_5,
#line 130 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 130 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_7,
#line 130 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_8)
#line 130 "prog_io_util.m"
{
#line 387 "prog_io_util.m"
  {
#line 387 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 388 "prog_io_util.m"
    {
#line 388 "prog_io_util.m"
      parse_tree__prog_io_util__parse_types_2_5_p_0(parse_tree__prog_io_util__Terms_5, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_util__Result_8);
#line 388 "prog_io_util.m"
      return;
    }
#line 387 "prog_io_util.m"
  }
#line 130 "prog_io_util.m"
}

#line 128 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__maybe_parse_types_2_p_0(
#line 128 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 128 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Types_4)
#line 128 "prog_io_util.m"
{
#line 380 "prog_io_util.m"
  {
#line 380 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 380 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__VarSet_5;
#line 380 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_7_7;

#line 383 "prog_io_util.m"
    {
#line 383 "prog_io_util.m"
      parse_tree__prog_io_util__VarSet_5 = mercury__varset__init_0_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0);
    }
#line 385 "prog_io_util.m"
    {
#line 385 "prog_io_util.m"
      parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_util__Term_3, parse_tree__prog_io_util__VarSet_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_7_7);
    }
#line 385 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_7_7)) == (MR_mktag((MR_Integer) 1)));
#line 385 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 385 "prog_io_util.m"
      *parse_tree__prog_io_util__Types_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_7_7, (MR_Integer) 0)));
#line 380 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 380 "prog_io_util.m"
  }
#line 128 "prog_io_util.m"
}

#line 125 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_type_4_p_0(
#line 125 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_5,
#line 125 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 125 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_7,
#line 125 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_8)
#line 125 "prog_io_util.m"
{
#line 330 "prog_io_util.m"
  {
#line 330 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 1)));
#line 330 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Var0_9;
#line 326 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_10_10;

#line 326 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 326 "prog_io_util.m"
      {
#line 326 "prog_io_util.m"
        parse_tree__prog_io_util__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 326 "prog_io_util.m"
        parse_tree__prog_io_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 328 "prog_io_util.m"
        {
#line 328 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__Var_11;
#line 328 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_30_30;

#line 328 "prog_io_util.m"
          {
#line 328 "prog_io_util.m"
            mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_util__Var0_9, &parse_tree__prog_io_util__Var_11);
          }
#line 329 "prog_io_util.m"
          {
#line 329 "prog_io_util.m"
            parse_tree__prog_io_util__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 329 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_util__Var_11));
#line 329 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 329 "prog_io_util.m"
          }
#line 329 "prog_io_util.m"
          {
#line 329 "prog_io_util.m"
            MR_Word base;
#line 329 "prog_io_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 329 "prog_io_util.m"
            *parse_tree__prog_io_util__Result_8 = base;
#line 329 "prog_io_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_30_30));
#line 329 "prog_io_util.m"
          }
#line 328 "prog_io_util.m"
        }
#line 326 "prog_io_util.m"
      }
#line 326 "prog_io_util.m"
    else
#line 334 "prog_io_util.m"
      {
#line 334 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__BuiltinType_12;
#line 407 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__Name_89;
#line 407 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_91_91;
#line 407 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_92_92;
#line 408 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_90_90;

#line 408 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 408 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 408 "prog_io_util.m"
          {
#line 408 "prog_io_util.m"
            parse_tree__prog_io_util__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 408 "prog_io_util.m"
            parse_tree__prog_io_util__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 408 "prog_io_util.m"
            parse_tree__prog_io_util__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 408 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_92_92 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 407 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 407 "prog_io_util.m"
              {
#line 408 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_91_91)) == (MR_mktag((MR_Integer) 0)));
#line 408 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 408 "prog_io_util.m"
                  {
#line 408 "prog_io_util.m"
                    parse_tree__prog_io_util__Name_89 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_91_91, (MR_Integer) 0)));
#line 409 "prog_io_util.m"
                    {
#line 409 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = parse_tree__prog_out__builtin_type_to_string_2_p_1(&parse_tree__prog_io_util__BuiltinType_12, parse_tree__prog_io_util__Name_89);
                    }
#line 408 "prog_io_util.m"
                  }
#line 407 "prog_io_util.m"
              }
#line 408 "prog_io_util.m"
          }
#line 334 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 333 "prog_io_util.m"
          {
#line 333 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_32_32;

#line 333 "prog_io_util.m"
            {
#line 333 "prog_io_util.m"
              parse_tree__prog_io_util__V_32_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 333 "prog_io_util.m"
              MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io_util__BuiltinType_12));
#line 333 "prog_io_util.m"
            }
#line 333 "prog_io_util.m"
            {
#line 333 "prog_io_util.m"
              MR_Word base;
#line 333 "prog_io_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 333 "prog_io_util.m"
              *parse_tree__prog_io_util__Result_8 = base;
#line 333 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_32_32));
#line 333 "prog_io_util.m"
            }
#line 333 "prog_io_util.m"
          }
#line 334 "prog_io_util.m"
        else
#line 338 "prog_io_util.m"
          {
#line 338 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__HOArgs_13;
#line 338 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__MaybeRet_14;
#line 338 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Purity_15;

#line 335 "prog_io_util.m"
            {
#line 335 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_higher_order_type_5_p_0(parse_tree__prog_io_util__Term_5, &parse_tree__prog_io_util__HOArgs_13, &parse_tree__prog_io_util__MaybeRet_14, &parse_tree__prog_io_util__Purity_15);
            }
#line 338 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 337 "prog_io_util.m"
              {
#line 337 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_33_33;

#line 337 "prog_io_util.m"
                {
#line 337 "prog_io_util.m"
                  parse_tree__prog_io_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 337 "prog_io_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 337 "prog_io_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io_util__HOArgs_13));
#line 337 "prog_io_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_33_33, 2) = ((MR_Box) (parse_tree__prog_io_util__MaybeRet_14));
#line 337 "prog_io_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_33_33, 3) = ((MR_Box) (parse_tree__prog_io_util__Purity_15));
#line 337 "prog_io_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_33_33, 4) = NULL;
#line 337 "prog_io_util.m"
                }
#line 337 "prog_io_util.m"
                {
#line 337 "prog_io_util.m"
                  MR_Word base;
#line 337 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 337 "prog_io_util.m"
                  *parse_tree__prog_io_util__Result_8 = base;
#line 337 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_33_33));
#line 337 "prog_io_util.m"
                }
#line 337 "prog_io_util.m"
              }
#line 338 "prog_io_util.m"
            else
#line 349 "prog_io_util.m"
              {
#line 349 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Args_17;
#line 339 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_34_34;
#line 339 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__V_35_35;
#line 339 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_18_18;

#line 339 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 339 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 339 "prog_io_util.m"
                  {
#line 339 "prog_io_util.m"
                    parse_tree__prog_io_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 339 "prog_io_util.m"
                    parse_tree__prog_io_util__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 339 "prog_io_util.m"
                    parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 339 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 0)));
#line 339 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 339 "prog_io_util.m"
                      {
#line 339 "prog_io_util.m"
                        parse_tree__prog_io_util__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
#line 339 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_35_35, (MR_String) "{}") == 0);
#line 339 "prog_io_util.m"
                      }
#line 339 "prog_io_util.m"
                  }
#line 349 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 341 "prog_io_util.m"
                  {
#line 341 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__ArgsResult_19;

#line 341 "prog_io_util.m"
                    {
#line 341 "prog_io_util.m"
                      parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_util__Args_17, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__ArgsResult_19);
                    }
#line 345 "prog_io_util.m"
                    if (((MR_tag((MR_Word) parse_tree__prog_io_util__ArgsResult_19)) == (MR_mktag((MR_Integer) 0))))
#line 347 "prog_io_util.m"
                      *parse_tree__prog_io_util__Result_8 = (MR_Word) parse_tree__prog_io_util__ArgsResult_19;
#line 345 "prog_io_util.m"
                    else
#line 343 "prog_io_util.m"
                      {
#line 343 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__ArgTypes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ArgsResult_19, (MR_Integer) 0)));
#line 343 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_36_36;

#line 344 "prog_io_util.m"
                        {
#line 344 "prog_io_util.m"
                          parse_tree__prog_io_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 344 "prog_io_util.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 344 "prog_io_util.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_36_36, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTypes_20));
#line 344 "prog_io_util.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_36_36, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 344 "prog_io_util.m"
                        }
#line 344 "prog_io_util.m"
                        {
#line 344 "prog_io_util.m"
                          MR_Word base;
#line 344 "prog_io_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 344 "prog_io_util.m"
                          *parse_tree__prog_io_util__Result_8 = base;
#line 344 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 344 "prog_io_util.m"
                        }
#line 343 "prog_io_util.m"
                      }
#line 341 "prog_io_util.m"
                  }
#line 349 "prog_io_util.m"
                else
#line 360 "prog_io_util.m"
                  {
#line 360 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Context_23;
#line 352 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_38_38;
#line 352 "prog_io_util.m"
                    MR_String parse_tree__prog_io_util__V_39_39;
#line 352 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_22_22;

#line 352 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 352 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 352 "prog_io_util.m"
                      {
#line 352 "prog_io_util.m"
                        parse_tree__prog_io_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 352 "prog_io_util.m"
                        parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 352 "prog_io_util.m"
                        parse_tree__prog_io_util__Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 352 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_38_38)) == (MR_mktag((MR_Integer) 0)));
#line 352 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 352 "prog_io_util.m"
                          {
#line 352 "prog_io_util.m"
                            parse_tree__prog_io_util__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_38_38, (MR_Integer) 0)));
#line 352 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_39_39, (MR_String) "") == 0);
#line 352 "prog_io_util.m"
                          }
#line 352 "prog_io_util.m"
                      }
#line 360 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 354 "prog_io_util.m"
                      {
#line 354 "prog_io_util.m"
                        MR_String parse_tree__prog_io_util__TermStr_24;
#line 354 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Pieces_25;
#line 354 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Spec_26;
#line 354 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_40_40;
#line 354 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_42_42;
#line 354 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_45_45;
#line 354 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_46_46;
#line 354 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_55_55;
#line 354 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_56_56;
#line 354 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_57_57;
#line 354 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_58_58;
#line 354 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_61_61;

#line 354 "prog_io_util.m"
                        {
#line 354 "prog_io_util.m"
                          parse_tree__prog_io_util__TermStr_24 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__Term_5);
                        }
#line 356 "prog_io_util.m"
                        {
#line 356 "prog_io_util.m"
                          parse_tree__prog_io_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "prog_io_util.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 356 "prog_io_util.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_46_46, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_24));
#line 356 "prog_io_util.m"
                        }
#line 356 "prog_io_util.m"
                        {
#line 356 "prog_io_util.m"
                          parse_tree__prog_io_util__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_util__V_46_46));
#line 356 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[11])));
#line 356 "prog_io_util.m"
                        }
#line 356 "prog_io_util.m"
                        {
#line 356 "prog_io_util.m"
                          parse_tree__prog_io_util__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_42_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[16])));
#line 356 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_42_42, 1) = ((MR_Box) (parse_tree__prog_io_util__V_45_45));
#line 356 "prog_io_util.m"
                        }
#line 355 "prog_io_util.m"
                        {
#line 355 "prog_io_util.m"
                          parse_tree__prog_io_util__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 355 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_40_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 355 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io_util__V_42_42));
#line 355 "prog_io_util.m"
                        }
#line 355 "prog_io_util.m"
                        {
#line 355 "prog_io_util.m"
                          parse_tree__prog_io_util__Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__V_40_40);
                        }
#line 358 "prog_io_util.m"
                        {
#line 358 "prog_io_util.m"
                          parse_tree__prog_io_util__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 358 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_58_58, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_25));
#line 358 "prog_io_util.m"
                        }
#line 358 "prog_io_util.m"
                        {
#line 358 "prog_io_util.m"
                          parse_tree__prog_io_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 358 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_util__V_58_58));
#line 358 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "prog_io_util.m"
                        }
#line 358 "prog_io_util.m"
                        {
#line 358 "prog_io_util.m"
                          parse_tree__prog_io_util__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 358 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_util__Context_23));
#line 358 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io_util__V_57_57));
#line 358 "prog_io_util.m"
                        }
#line 358 "prog_io_util.m"
                        {
#line 358 "prog_io_util.m"
                          parse_tree__prog_io_util__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 358 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_util__V_56_56));
#line 358 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "prog_io_util.m"
                        }
#line 357 "prog_io_util.m"
                        {
#line 357 "prog_io_util.m"
                          parse_tree__prog_io_util__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 357 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 357 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 357 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_26, 2) = ((MR_Box) (parse_tree__prog_io_util__V_55_55));
#line 357 "prog_io_util.m"
                        }
#line 359 "prog_io_util.m"
                        {
#line 359 "prog_io_util.m"
                          parse_tree__prog_io_util__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 359 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_61_61, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_26));
#line 359 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 359 "prog_io_util.m"
                        }
#line 359 "prog_io_util.m"
                        {
#line 359 "prog_io_util.m"
                          MR_Word base;
#line 359 "prog_io_util.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 359 "prog_io_util.m"
                          *parse_tree__prog_io_util__Result_8 = base;
#line 359 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_61_61));
#line 359 "prog_io_util.m"
                        }
#line 354 "prog_io_util.m"
                      }
#line 360 "prog_io_util.m"
                    else
#line 363 "prog_io_util.m"
                      {
#line 363 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__NameResult_27;

#line 363 "prog_io_util.m"
                        {
#line 363 "prog_io_util.m"
                          parse_tree__prog_io_sym_name__parse_sym_name_and_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__Term_5, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__NameResult_27);
                        }
#line 374 "prog_io_util.m"
                        if (((MR_tag((MR_Word) parse_tree__prog_io_util__NameResult_27)) == (MR_mktag((MR_Integer) 0))))
#line 375 "prog_io_util.m"
                          {
#line 375 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Specs_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__NameResult_27, (MR_Integer) 0)));

#line 376 "prog_io_util.m"
                            {
#line 376 "prog_io_util.m"
                              MR_Word base;
#line 376 "prog_io_util.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 376 "prog_io_util.m"
                              *parse_tree__prog_io_util__Result_8 = base;
#line 376 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Specs_72));
#line 376 "prog_io_util.m"
                            }
#line 375 "prog_io_util.m"
                          }
#line 374 "prog_io_util.m"
                        else
#line 365 "prog_io_util.m"
                          {
#line 365 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__SymName_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__NameResult_27, (MR_Integer) 0)));
#line 365 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__ArgTerms_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__NameResult_27, (MR_Integer) 1)));
#line 365 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__ArgsResult_69;

#line 366 "prog_io_util.m"
                            {
#line 366 "prog_io_util.m"
                              parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_util__ArgTerms_29, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__ArgsResult_69);
                            }
#line 370 "prog_io_util.m"
                            if (((MR_tag((MR_Word) parse_tree__prog_io_util__ArgsResult_69)) == (MR_mktag((MR_Integer) 0))))
#line 372 "prog_io_util.m"
                              *parse_tree__prog_io_util__Result_8 = (MR_Word) parse_tree__prog_io_util__ArgsResult_69;
#line 370 "prog_io_util.m"
                            else
#line 368 "prog_io_util.m"
                              {
#line 368 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_63_63;
#line 368 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__ArgTypes_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ArgsResult_69, (MR_Integer) 0)));

#line 369 "prog_io_util.m"
                                {
#line 369 "prog_io_util.m"
                                  parse_tree__prog_io_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 369 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_util__SymName_28));
#line 369 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTypes_65));
#line 369 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_63_63, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 369 "prog_io_util.m"
                                }
#line 369 "prog_io_util.m"
                                {
#line 369 "prog_io_util.m"
                                  MR_Word base;
#line 369 "prog_io_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 369 "prog_io_util.m"
                                  *parse_tree__prog_io_util__Result_8 = base;
#line 369 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_63_63));
#line 369 "prog_io_util.m"
                                }
#line 368 "prog_io_util.m"
                              }
#line 365 "prog_io_util.m"
                          }
#line 363 "prog_io_util.m"
                      }
#line 360 "prog_io_util.m"
                  }
#line 349 "prog_io_util.m"
              }
#line 338 "prog_io_util.m"
          }
#line 334 "prog_io_util.m"
      }
#line 330 "prog_io_util.m"
  }
#line 125 "prog_io_util.m"
}

#line 123 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__maybe_parse_type_2_p_0(
#line 123 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 123 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Type_4)
#line 123 "prog_io_util.m"
{
#line 314 "prog_io_util.m"
  {
#line 314 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 314 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__VarSet_5;
#line 314 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_7_7;

#line 317 "prog_io_util.m"
    {
#line 317 "prog_io_util.m"
      parse_tree__prog_io_util__VarSet_5 = mercury__varset__init_0_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0);
    }
#line 319 "prog_io_util.m"
    {
#line 319 "prog_io_util.m"
      parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_util__Term_3, parse_tree__prog_io_util__VarSet_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_7_7);
    }
#line 319 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_7_7)) == (MR_mktag((MR_Integer) 1)));
#line 319 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 319 "prog_io_util.m"
      *parse_tree__prog_io_util__Type_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_7_7, (MR_Integer) 0)));
#line 314 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 314 "prog_io_util.m"
  }
#line 123 "prog_io_util.m"
}

#line 119 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_pred_or_func_and_args_general_5_p_0(
#line 119 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for__T_28,
#line 119 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__MaybeModuleName_6,
#line 119 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__PredAndArgsTerm_7,
#line 119 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_8,
#line 119 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_9,
#line 119 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__PredAndArgsResult_10)
#line 119 "prog_io_util.m"
{
#line 285 "prog_io_util.m"
  {
#line 285 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredAndArgsTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 285 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FunctorTerm_14;
#line 285 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__MaybeFuncResult_15;
#line 285 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__GenericVarSet_16;
#line 285 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Result_18;
#line 292 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FuncAndArgsTerm_11;
#line 292 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FuncResultTerm_12;
#line 287 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_22_22;
#line 287 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_23_23;
#line 287 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_24_24;
#line 287 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_25_25;
#line 287 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_26_26;
#line 287 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;

#line 287 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 287 "prog_io_util.m"
      {
#line 287 "prog_io_util.m"
        parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_7, (MR_Integer) 0)));
#line 287 "prog_io_util.m"
        parse_tree__prog_io_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_7, (MR_Integer) 1)));
#line 287 "prog_io_util.m"
        parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_7, (MR_Integer) 2)));
#line 287 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_22_22)) == (MR_mktag((MR_Integer) 0)));
#line 287 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 287 "prog_io_util.m"
          {
#line 287 "prog_io_util.m"
            parse_tree__prog_io_util__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_22_22, (MR_Integer) 0)));
#line 287 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_23_23, (MR_String) "=") == 0);
#line 287 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 287 "prog_io_util.m"
              {
#line 288 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 288 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 288 "prog_io_util.m"
                  {
#line 288 "prog_io_util.m"
                    parse_tree__prog_io_util__FuncAndArgsTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_24_24, (MR_Integer) 0)));
#line 288 "prog_io_util.m"
                    parse_tree__prog_io_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_24_24, (MR_Integer) 1)));
#line 288 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 288 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 288 "prog_io_util.m"
                      {
#line 288 "prog_io_util.m"
                        parse_tree__prog_io_util__FuncResultTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_25_25, (MR_Integer) 0)));
#line 288 "prog_io_util.m"
                        parse_tree__prog_io_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_25_25, (MR_Integer) 1)));
#line 288 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 288 "prog_io_util.m"
                      }
#line 288 "prog_io_util.m"
                  }
#line 287 "prog_io_util.m"
              }
#line 287 "prog_io_util.m"
          }
#line 287 "prog_io_util.m"
      }
#line 292 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 290 "prog_io_util.m"
      {
#line 290 "prog_io_util.m"
        parse_tree__prog_io_util__FunctorTerm_14 = parse_tree__prog_io_util__FuncAndArgsTerm_11;
#line 291 "prog_io_util.m"
        {
#line 291 "prog_io_util.m"
          parse_tree__prog_io_util__MaybeFuncResult_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 291 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeFuncResult_15, 0) = ((MR_Box) (parse_tree__prog_io_util__FuncResultTerm_12));
#line 291 "prog_io_util.m"
        }
#line 290 "prog_io_util.m"
      }
#line 292 "prog_io_util.m"
    else
#line 293 "prog_io_util.m"
      {
#line 293 "prog_io_util.m"
        parse_tree__prog_io_util__FunctorTerm_14 = parse_tree__prog_io_util__PredAndArgsTerm_7;
#line 294 "prog_io_util.m"
        parse_tree__prog_io_util__MaybeFuncResult_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 293 "prog_io_util.m"
      }
#line 296 "prog_io_util.m"
    {
#line 296 "prog_io_util.m"
      mercury__varset__coerce_2_p_0(parse_tree__prog_io_util__TypeInfo_for__T_28, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__VarSet_8, &parse_tree__prog_io_util__GenericVarSet_16);
    }
#line 301 "prog_io_util.m"
    if ((parse_tree__prog_io_util__MaybeModuleName_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 303 "prog_io_util.m"
      {
#line 303 "prog_io_util.m"
        parse_tree__prog_io_sym_name__parse_sym_name_and_args_4_p_0(parse_tree__prog_io_util__TypeInfo_for__T_28, parse_tree__prog_io_util__FunctorTerm_14, parse_tree__prog_io_util__GenericVarSet_16, parse_tree__prog_io_util__ContextPieces_9, &parse_tree__prog_io_util__Result_18);
      }
#line 301 "prog_io_util.m"
    else
#line 298 "prog_io_util.m"
      {
#line 298 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeModuleName_6, (MR_Integer) 0)));

#line 299 "prog_io_util.m"
        {
#line 299 "prog_io_util.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_util__TypeInfo_for__T_28, parse_tree__prog_io_util__ModuleName_17, parse_tree__prog_io_util__FunctorTerm_14, parse_tree__prog_io_util__GenericVarSet_16, parse_tree__prog_io_util__ContextPieces_9, &parse_tree__prog_io_util__Result_18);
        }
#line 298 "prog_io_util.m"
      }
#line 309 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__Result_18)) == (MR_mktag((MR_Integer) 0))))
#line 311 "prog_io_util.m"
      *parse_tree__prog_io_util__PredAndArgsResult_10 = (MR_Word) parse_tree__prog_io_util__Result_18;
#line 309 "prog_io_util.m"
    else
#line 307 "prog_io_util.m"
      {
#line 307 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__SymName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Result_18, (MR_Integer) 0)));
#line 307 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Result_18, (MR_Integer) 1)));
#line 307 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_27_27;

#line 308 "prog_io_util.m"
        {
#line 308 "prog_io_util.m"
          parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 308 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_util__Args_20));
#line 308 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io_util__MaybeFuncResult_15));
#line 308 "prog_io_util.m"
        }
#line 308 "prog_io_util.m"
        {
#line 308 "prog_io_util.m"
          MR_Word base;
#line 308 "prog_io_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 308 "prog_io_util.m"
          *parse_tree__prog_io_util__PredAndArgsResult_10 = base;
#line 308 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__SymName_19));
#line 308 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
#line 308 "prog_io_util.m"
        }
#line 307 "prog_io_util.m"
      }
#line 285 "prog_io_util.m"
  }
#line 119 "prog_io_util.m"
}

#line 116 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__parse_pred_or_func_and_args_4_p_0(
#line 116 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for__T_20,
#line 116 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__PredAndArgsTerm_5,
#line 116 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__PredOrFunc_6,
#line 116 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__SymName_7,
#line 116 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__ArgTerms_8)
#line 116 "prog_io_util.m"
{
#line 279 "prog_io_util.m"
  {
#line 279 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredAndArgsTerm_5)) == (MR_mktag((MR_Integer) 0)));
#line 279 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FuncAndArgsTerm_9;
#line 279 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_16_16;
#line 273 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 273 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_14_14;
#line 273 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_15_15;
#line 273 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_17_17;
#line 273 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;
#line 274 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FuncResultTerm_10;

#line 273 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 273 "prog_io_util.m"
      {
#line 273 "prog_io_util.m"
        parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_5, (MR_Integer) 0)));
#line 273 "prog_io_util.m"
        parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_5, (MR_Integer) 1)));
#line 273 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_5, (MR_Integer) 2)));
#line 273 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 273 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 273 "prog_io_util.m"
          {
#line 273 "prog_io_util.m"
            parse_tree__prog_io_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_13_13, (MR_Integer) 0)));
#line 273 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_14_14, (MR_String) "=") == 0);
#line 273 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 273 "prog_io_util.m"
              {
#line 274 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 274 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 274 "prog_io_util.m"
                  {
#line 274 "prog_io_util.m"
                    parse_tree__prog_io_util__FuncAndArgsTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 0)));
#line 274 "prog_io_util.m"
                    parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 1)));
#line 274 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 274 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 274 "prog_io_util.m"
                      {
#line 274 "prog_io_util.m"
                        parse_tree__prog_io_util__FuncResultTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
#line 274 "prog_io_util.m"
                        parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
#line 274 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 274 "prog_io_util.m"
                      }
#line 274 "prog_io_util.m"
                  }
#line 273 "prog_io_util.m"
              }
#line 273 "prog_io_util.m"
          }
#line 273 "prog_io_util.m"
      }
#line 279 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 276 "prog_io_util.m"
      {
#line 276 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TypeCtorInfo_21_21;
#line 276 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TypeInfo_22_22;
#line 276 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__ArgTerms0_12;
#line 278 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__conv0_ArgTerms_8;

#line 276 "prog_io_util.m"
        {
#line 276 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0(parse_tree__prog_io_util__TypeInfo_for__T_20, parse_tree__prog_io_util__FuncAndArgsTerm_9, parse_tree__prog_io_util__SymName_7, &parse_tree__prog_io_util__ArgTerms0_12);
        }
#line 276 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 276 "prog_io_util.m"
          {
#line 277 "prog_io_util.m"
            *parse_tree__prog_io_util__PredOrFunc_6 = (MR_Integer) 1;
#line 15007 "parse_tree.prog_io_util.c"
            parse_tree__prog_io_util__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 15009 "parse_tree.prog_io_util.c"
            {
#line 15011 "parse_tree.prog_io_util.c"
              parse_tree__prog_io_util__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15013 "parse_tree.prog_io_util.c"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_22_22, 0) = ((MR_Box) (parse_tree__prog_io_util__TypeCtorInfo_21_21));
#line 15015 "parse_tree.prog_io_util.c"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_22_22, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for__T_20));
#line 15017 "parse_tree.prog_io_util.c"
            }
#line 278 "prog_io_util.m"
            {
#line 278 "prog_io_util.m"
              parse_tree__prog_io_util__conv0_ArgTerms_8 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_util__TypeInfo_22_22, (MR_Word) parse_tree__prog_io_util__ArgTerms0_12, (MR_Word) parse_tree__prog_io_util__V_16_16);
            }
#line 278 "prog_io_util.m"
            *parse_tree__prog_io_util__ArgTerms_8 = (MR_Word) parse_tree__prog_io_util__conv0_ArgTerms_8;
#line 278 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 276 "prog_io_util.m"
          }
#line 276 "prog_io_util.m"
      }
#line 279 "prog_io_util.m"
    else
#line 280 "prog_io_util.m"
      {
#line 280 "prog_io_util.m"
        {
#line 280 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0(parse_tree__prog_io_util__TypeInfo_for__T_20, parse_tree__prog_io_util__PredAndArgsTerm_5, parse_tree__prog_io_util__SymName_7, parse_tree__prog_io_util__ArgTerms_8);
        }
#line 280 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 280 "prog_io_util.m"
          {
#line 281 "prog_io_util.m"
            *parse_tree__prog_io_util__PredOrFunc_6 = (MR_Integer) 0;
#line 281 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 280 "prog_io_util.m"
          }
#line 280 "prog_io_util.m"
      }
#line 279 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 279 "prog_io_util.m"
  }
#line 116 "prog_io_util.m"
}

#line 113 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__parse_pred_or_func_name_and_arity_4_p_0(
#line 113 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_17,
#line 113 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__PorFPredAndArityTerm_5,
#line 113 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__PredOrFunc_6,
#line 113 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__SymName_7,
#line 113 "prog_io_util.m"
  MR_Integer * parse_tree__prog_io_util__Arity_8)
#line 113 "prog_io_util.m"
{
#line 262 "prog_io_util.m"
  {
#line 262 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PorFPredAndArityTerm_5)) == (MR_mktag((MR_Integer) 0)));
#line 262 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__PredOrFuncStr_9;
#line 262 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Args_10;
#line 262 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Arg_12;
#line 262 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__ModuleName_13;
#line 262 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_14_14;
#line 262 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_15_15;
#line 262 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_16_16;
#line 263 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;

#line 263 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 263 "prog_io_util.m"
      {
#line 263 "prog_io_util.m"
        parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PorFPredAndArityTerm_5, (MR_Integer) 0)));
#line 263 "prog_io_util.m"
        parse_tree__prog_io_util__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PorFPredAndArityTerm_5, (MR_Integer) 1)));
#line 263 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PorFPredAndArityTerm_5, (MR_Integer) 2)));
#line 263 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_14_14)) == (MR_mktag((MR_Integer) 0)));
#line 263 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 263 "prog_io_util.m"
          {
#line 263 "prog_io_util.m"
            parse_tree__prog_io_util__PredOrFuncStr_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_14_14, (MR_Integer) 0)));
#line 265 "prog_io_util.m"
            if ((strcmp(parse_tree__prog_io_util__PredOrFuncStr_9, (MR_String) "func") == 0))
#line 265 "prog_io_util.m"
              {
#line 265 "prog_io_util.m"
                *parse_tree__prog_io_util__PredOrFunc_6 = (MR_Integer) 1;
#line 265 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 265 "prog_io_util.m"
              }
#line 265 "prog_io_util.m"
            else
#line 265 "prog_io_util.m"
            if ((strcmp(parse_tree__prog_io_util__PredOrFuncStr_9, (MR_String) "pred") == 0))
#line 264 "prog_io_util.m"
              {
#line 264 "prog_io_util.m"
                *parse_tree__prog_io_util__PredOrFunc_6 = (MR_Integer) 0;
#line 264 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 264 "prog_io_util.m"
              }
#line 265 "prog_io_util.m"
            else
#line 265 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 262 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 262 "prog_io_util.m"
              {
#line 267 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args_10)) == (MR_mktag((MR_Integer) 1)));
#line 267 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 267 "prog_io_util.m"
                  {
#line 267 "prog_io_util.m"
                    parse_tree__prog_io_util__Arg_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_10, (MR_Integer) 0)));
#line 267 "prog_io_util.m"
                    parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_10, (MR_Integer) 1)));
#line 267 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 262 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 262 "prog_io_util.m"
                      {
#line 268 "prog_io_util.m"
                        parse_tree__prog_io_util__V_16_16 = (MR_String) "";
#line 268 "prog_io_util.m"
                        parse_tree__prog_io_util__ModuleName_13 = (MR_Word) &parse_tree__prog_io_util_scalar_common_3[1];
#line 269 "prog_io_util.m"
                        {
#line 269 "prog_io_util.m"
                          return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_name_and_arity_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_17, parse_tree__prog_io_util__ModuleName_13, parse_tree__prog_io_util__Arg_12, parse_tree__prog_io_util__SymName_7, parse_tree__prog_io_util__Arity_8);
                        }
#line 262 "prog_io_util.m"
                      }
#line 267 "prog_io_util.m"
                  }
#line 262 "prog_io_util.m"
              }
#line 263 "prog_io_util.m"
          }
#line 263 "prog_io_util.m"
      }
#line 262 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 262 "prog_io_util.m"
  }
#line 113 "prog_io_util.m"
}

#line 110 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__parse_name_and_arity_unqualified_3_p_0(
#line 110 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
#line 110 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__PredAndArityTerm_4,
#line 110 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__SymName_5,
#line 110 "prog_io_util.m"
  MR_Integer * parse_tree__prog_io_util__Arity_6)
#line 110 "prog_io_util.m"
{
#line 257 "prog_io_util.m"
  {
#line 257 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 258 "prog_io_util.m"
    {
#line 258 "prog_io_util.m"
      return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_name_and_arity_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_9, (MR_Word) &parse_tree__prog_io_util_scalar_common_3[1], parse_tree__prog_io_util__PredAndArityTerm_4, parse_tree__prog_io_util__SymName_5, parse_tree__prog_io_util__Arity_6);
    }
#line 257 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 257 "prog_io_util.m"
  }
#line 110 "prog_io_util.m"
}

#line 107 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__parse_name_and_arity_4_p_0(
#line 107 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_20,
#line 107 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ModuleName_5,
#line 107 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__PredAndArityTerm_6,
#line 107 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__SymName_7,
#line 107 "prog_io_util.m"
  MR_Integer * parse_tree__prog_io_util__Arity_8)
#line 107 "prog_io_util.m"
{
#line 250 "prog_io_util.m"
  {
#line 250 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredAndArityTerm_6)) == (MR_mktag((MR_Integer) 0)));
#line 250 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__PredNameTerm_9;
#line 250 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__ArityTerm_10;
#line 250 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 250 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_14_14;
#line 250 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_15_15;
#line 250 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_16_16;
#line 250 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_17_17;
#line 250 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_18_18;
#line 250 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_19_19;
#line 251 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;
#line 255 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_12_12;

#line 251 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 251 "prog_io_util.m"
      {
#line 251 "prog_io_util.m"
        parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArityTerm_6, (MR_Integer) 0)));
#line 251 "prog_io_util.m"
        parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArityTerm_6, (MR_Integer) 1)));
#line 251 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArityTerm_6, (MR_Integer) 2)));
#line 251 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 251 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 251 "prog_io_util.m"
          {
#line 251 "prog_io_util.m"
            parse_tree__prog_io_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_13_13, (MR_Integer) 0)));
#line 251 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_14_14, (MR_String) "/") == 0);
#line 250 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 250 "prog_io_util.m"
              {
#line 252 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 252 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 252 "prog_io_util.m"
                  {
#line 252 "prog_io_util.m"
                    parse_tree__prog_io_util__PredNameTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 0)));
#line 252 "prog_io_util.m"
                    parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 1)));
#line 252 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 252 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 252 "prog_io_util.m"
                      {
#line 252 "prog_io_util.m"
                        parse_tree__prog_io_util__ArityTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
#line 252 "prog_io_util.m"
                        parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
#line 252 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 250 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 250 "prog_io_util.m"
                          {
#line 253 "prog_io_util.m"
                            {
#line 253 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_implicitly_qualified_sym_name_and_no_args_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_20, parse_tree__prog_io_util__ModuleName_5, parse_tree__prog_io_util__PredNameTerm_9, parse_tree__prog_io_util__SymName_7);
                            }
#line 250 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 250 "prog_io_util.m"
                              {
#line 255 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__ArityTerm_10)) == (MR_mktag((MR_Integer) 0)));
#line 255 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 255 "prog_io_util.m"
                                  {
#line 255 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__ArityTerm_10, (MR_Integer) 0)));
#line 255 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__ArityTerm_10, (MR_Integer) 1)));
#line 255 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__ArityTerm_10, (MR_Integer) 2)));
#line 255 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 255 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 255 "prog_io_util.m"
                                      {
#line 255 "prog_io_util.m"
                                        *parse_tree__prog_io_util__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, (MR_Integer) 0)));
#line 255 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 255 "prog_io_util.m"
                                      }
#line 255 "prog_io_util.m"
                                  }
#line 250 "prog_io_util.m"
                              }
#line 250 "prog_io_util.m"
                          }
#line 252 "prog_io_util.m"
                      }
#line 252 "prog_io_util.m"
                  }
#line 250 "prog_io_util.m"
              }
#line 251 "prog_io_util.m"
          }
#line 251 "prog_io_util.m"
      }
#line 250 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 250 "prog_io_util.m"
  }
#line 107 "prog_io_util.m"
}

#line 102 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_vars_and_state_vars_4_p_0(
#line 102 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_92,
#line 102 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_5,
#line 102 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 102 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_7,
#line 102 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__MaybeVars_8)
#line 102 "prog_io_util.m"
{
#line 1089 "prog_io_util.m"
  {
#line 1089 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1087 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_36_36;
#line 1087 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_37_37;
#line 1087 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_38_38;
#line 1087 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 1087 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1087 "prog_io_util.m"
      {
#line 1087 "prog_io_util.m"
        parse_tree__prog_io_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 1087 "prog_io_util.m"
        parse_tree__prog_io_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 1087 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 1087 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1087 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1087 "prog_io_util.m"
          {
#line 1087 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_36_36)) == (MR_mktag((MR_Integer) 0)));
#line 1087 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1087 "prog_io_util.m"
              {
#line 1087 "prog_io_util.m"
                parse_tree__prog_io_util__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_36_36, (MR_Integer) 0)));
#line 1087 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_37_37, (MR_String) "[]") == 0);
#line 1087 "prog_io_util.m"
              }
#line 1087 "prog_io_util.m"
          }
#line 1087 "prog_io_util.m"
      }
#line 1089 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1088 "prog_io_util.m"
      {
#line 1088 "prog_io_util.m"
        *parse_tree__prog_io_util__MaybeVars_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_4[0]);
#line 1088 "prog_io_util.m"
      }
#line 1089 "prog_io_util.m"
    else
#line 1179 "prog_io_util.m"
      {
#line 1179 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__HeadTerm_10;
#line 1179 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Tail_11;
#line 1089 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_43_43;
#line 1089 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_44_44;
#line 1089 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_45_45;
#line 1089 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_46_46;
#line 1089 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_47_47;
#line 1089 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_12_12;

#line 1089 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1089 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1089 "prog_io_util.m"
          {
#line 1089 "prog_io_util.m"
            parse_tree__prog_io_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 1089 "prog_io_util.m"
            parse_tree__prog_io_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 1089 "prog_io_util.m"
            parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 1089 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_43_43)) == (MR_mktag((MR_Integer) 0)));
#line 1089 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1089 "prog_io_util.m"
              {
#line 1089 "prog_io_util.m"
                parse_tree__prog_io_util__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_43_43, (MR_Integer) 0)));
#line 1089 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_44_44, (MR_String) "[|]") == 0);
#line 1089 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1089 "prog_io_util.m"
                  {
#line 1089 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_45_45)) == (MR_mktag((MR_Integer) 1)));
#line 1089 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1089 "prog_io_util.m"
                      {
#line 1089 "prog_io_util.m"
                        parse_tree__prog_io_util__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, (MR_Integer) 0)));
#line 1089 "prog_io_util.m"
                        parse_tree__prog_io_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, (MR_Integer) 1)));
#line 1089 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 1089 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1089 "prog_io_util.m"
                          {
#line 1089 "prog_io_util.m"
                            parse_tree__prog_io_util__Tail_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_46_46, (MR_Integer) 0)));
#line 1089 "prog_io_util.m"
                            parse_tree__prog_io_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_46_46, (MR_Integer) 1)));
#line 1089 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1089 "prog_io_util.m"
                          }
#line 1089 "prog_io_util.m"
                      }
#line 1089 "prog_io_util.m"
                  }
#line 1089 "prog_io_util.m"
              }
#line 1089 "prog_io_util.m"
          }
#line 1179 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1174 "prog_io_util.m"
          {
#line 1174 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__VarKind_15;

#line 1094 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadTerm_10)) == (MR_mktag((MR_Integer) 0))))
#line 1094 "prog_io_util.m"
              {
#line 1094 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));
#line 1094 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 1094 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_116_116;
#line 1094 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_117_117;
#line 1094 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__V_118_118;
#line 1094 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_120_120;
#line 1095 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 2)));
#line 1095 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_119_119;

#line 1095 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_114_114)) == (MR_mktag((MR_Integer) 1)));
#line 1095 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1095 "prog_io_util.m"
                  {
#line 1095 "prog_io_util.m"
                    parse_tree__prog_io_util__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_114_114, (MR_Integer) 0)));
#line 1095 "prog_io_util.m"
                    parse_tree__prog_io_util__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_114_114, (MR_Integer) 1)));
#line 1095 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_116_116 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1094 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1094 "prog_io_util.m"
                      {
#line 1095 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_115_115)) == (MR_mktag((MR_Integer) 0)));
#line 1095 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1095 "prog_io_util.m"
                          {
#line 1095 "prog_io_util.m"
                            parse_tree__prog_io_util__V_118_118 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_115_115, (MR_Integer) 0)));
#line 1095 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_117_117)) == (MR_mktag((MR_Integer) 1)));
#line 1095 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1095 "prog_io_util.m"
                              {
#line 1095 "prog_io_util.m"
                                parse_tree__prog_io_util__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_117_117, (MR_Integer) 0)));
#line 1095 "prog_io_util.m"
                                parse_tree__prog_io_util__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_117_117, (MR_Integer) 1)));
#line 1094 "prog_io_util.m"
                                if ((strcmp(parse_tree__prog_io_util__V_118_118, (MR_String) "!") == 0))
#line 1096 "prog_io_util.m"
                                  {
#line 1096 "prog_io_util.m"
                                    {
#line 1096 "prog_io_util.m"
                                      parse_tree__prog_io_util__VarKind_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1096 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarKind_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_120_120));
#line 1096 "prog_io_util.m"
                                    }
#line 1096 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1096 "prog_io_util.m"
                                  }
#line 1094 "prog_io_util.m"
                                else
#line 1094 "prog_io_util.m"
                                if ((strcmp(parse_tree__prog_io_util__V_118_118, (MR_String) "!.") == 0))
#line 1099 "prog_io_util.m"
                                  {
#line 1099 "prog_io_util.m"
                                    {
#line 1099 "prog_io_util.m"
                                      parse_tree__prog_io_util__VarKind_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1099 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__VarKind_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_120_120));
#line 1099 "prog_io_util.m"
                                    }
#line 1099 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1099 "prog_io_util.m"
                                  }
#line 1094 "prog_io_util.m"
                                else
#line 1094 "prog_io_util.m"
                                if ((strcmp(parse_tree__prog_io_util__V_118_118, (MR_String) "!:") == 0))
#line 1102 "prog_io_util.m"
                                  {
#line 1102 "prog_io_util.m"
                                    {
#line 1102 "prog_io_util.m"
                                      parse_tree__prog_io_util__VarKind_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1102 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__VarKind_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_120_120));
#line 1102 "prog_io_util.m"
                                    }
#line 1102 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1102 "prog_io_util.m"
                                  }
#line 1094 "prog_io_util.m"
                                else
#line 1094 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 1095 "prog_io_util.m"
                              }
#line 1095 "prog_io_util.m"
                          }
#line 1094 "prog_io_util.m"
                      }
#line 1095 "prog_io_util.m"
                  }
#line 1094 "prog_io_util.m"
              }
#line 1094 "prog_io_util.m"
            else
#line 1092 "prog_io_util.m"
              {
#line 1092 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 1092 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));

#line 1093 "prog_io_util.m"
                {
#line 1093 "prog_io_util.m"
                  parse_tree__prog_io_util__VarKind_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1093 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__VarKind_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V0_13));
#line 1093 "prog_io_util.m"
                }
#line 1092 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1092 "prog_io_util.m"
              }
#line 1174 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1106 "prog_io_util.m"
              {
#line 1106 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__MaybeVarsTail_23;

#line 1105 "prog_io_util.m"
                {
#line 1105 "prog_io_util.m"
                  parse_tree__prog_io_util__parse_vars_and_state_vars_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__Tail_11, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__MaybeVarsTail_23);
                }
#line 1170 "prog_io_util.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeVarsTail_23)) == (MR_mktag((MR_Integer) 0))))
#line 1172 "prog_io_util.m"
                  *parse_tree__prog_io_util__MaybeVars_8 = parse_tree__prog_io_util__MaybeVarsTail_23;
#line 1170 "prog_io_util.m"
                else
#line 1109 "prog_io_util.m"
                  {
#line 1109 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__TailVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeVarsTail_23, (MR_Integer) 0)));
#line 1109 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__TailStateVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeVarsTail_23, (MR_Integer) 1)));
#line 1109 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__TailDotVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeVarsTail_23, (MR_Integer) 2)));
#line 1109 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__TailColonVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeVarsTail_23, (MR_Integer) 3)));

#line 1121 "prog_io_util.m"
#line 1121 "prog_io_util.m"
                    switch (MR_tag((MR_Word) parse_tree__prog_io_util__VarKind_15)) {
#line 1121 "prog_io_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1121 "prog_io_util.m"
                      case (MR_Integer) 0:
#line 1111 "prog_io_util.m"
                        {
#line 1111 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__VarKind_15, (MR_Integer) 0)));
#line 1112 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__TypeInfo_94_94;

#line 15703 "parse_tree.prog_io_util.c"
                          {
#line 15705 "parse_tree.prog_io_util.c"
                            parse_tree__prog_io_util__TypeInfo_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15707 "parse_tree.prog_io_util.c"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_94_94, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 15709 "parse_tree.prog_io_util.c"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_94_94, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 15711 "parse_tree.prog_io_util.c"
                          }
#line 1112 "prog_io_util.m"
                          {
#line 1112 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_94_94, parse_tree__prog_io_util__V_28, parse_tree__prog_io_util__TailVars_24);
                          }
#line 1116 "prog_io_util.m"
                          if (parse_tree__prog_io_util__succeeded)
#line 1114 "prog_io_util.m"
                            {
#line 1114 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__Spec_29;
#line 1114 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__V_69_69;

#line 1113 "prog_io_util.m"
                              {
#line 1113 "prog_io_util.m"
                                parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_29);
                              }
#line 1115 "prog_io_util.m"
                              {
#line 1115 "prog_io_util.m"
                                parse_tree__prog_io_util__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1115 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_29));
#line 1115 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1115 "prog_io_util.m"
                              }
#line 1115 "prog_io_util.m"
                              {
#line 1115 "prog_io_util.m"
                                MR_Word base;
#line 1115 "prog_io_util.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1115 "prog_io_util.m"
                                *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1115 "prog_io_util.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_69_69));
#line 1115 "prog_io_util.m"
                              }
#line 1114 "prog_io_util.m"
                            }
#line 1116 "prog_io_util.m"
                          else
#line 1117 "prog_io_util.m"
                            {
#line 1117 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__Vars_30;

#line 1117 "prog_io_util.m"
                              {
#line 1117 "prog_io_util.m"
                                parse_tree__prog_io_util__Vars_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1117 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_30, 0) = ((MR_Box) (parse_tree__prog_io_util__V_28));
#line 1117 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_30, 1) = ((MR_Box) (parse_tree__prog_io_util__TailVars_24));
#line 1117 "prog_io_util.m"
                              }
#line 1118 "prog_io_util.m"
                              {
#line 1118 "prog_io_util.m"
                                MR_Word base;
#line 1118 "prog_io_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1118 "prog_io_util.m"
                                *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1118 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Vars_30));
#line 1118 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_25));
#line 1118 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_util__TailDotVars_26));
#line 1118 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_io_util__TailColonVars_27));
#line 1118 "prog_io_util.m"
                              }
#line 1117 "prog_io_util.m"
                            }
#line 1111 "prog_io_util.m"
                        }
#line 1121 "prog_io_util.m"
                        break;
#line 1121 "prog_io_util.m"
                      case (MR_Integer) 1:
#line 1122 "prog_io_util.m"
                        {
#line 1122 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__SV_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarKind_15, (MR_Integer) 0)));

#line 1124 "prog_io_util.m"
                          {
#line 1124 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__TypeInfo_96_96;

#line 15809 "parse_tree.prog_io_util.c"
                            {
#line 15811 "parse_tree.prog_io_util.c"
                              parse_tree__prog_io_util__TypeInfo_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15813 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_96_96, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 15815 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_96_96, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 15817 "parse_tree.prog_io_util.c"
                            }
#line 1124 "prog_io_util.m"
                            {
#line 1124 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_96_96, parse_tree__prog_io_util__SV_31, parse_tree__prog_io_util__TailStateVars_25);
                            }
#line 1124 "prog_io_util.m"
                          }
#line 1125 "prog_io_util.m"
                          if (!(parse_tree__prog_io_util__succeeded))
#line 1125 "prog_io_util.m"
                            {
#line 1125 "prog_io_util.m"
                              {
#line 1125 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__TypeInfo_98_98;

#line 15835 "parse_tree.prog_io_util.c"
                                {
#line 15837 "parse_tree.prog_io_util.c"
                                  parse_tree__prog_io_util__TypeInfo_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15839 "parse_tree.prog_io_util.c"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_98_98, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 15841 "parse_tree.prog_io_util.c"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_98_98, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 15843 "parse_tree.prog_io_util.c"
                                }
#line 1125 "prog_io_util.m"
                                {
#line 1125 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_98_98, parse_tree__prog_io_util__SV_31, parse_tree__prog_io_util__TailDotVars_26);
                                }
#line 1125 "prog_io_util.m"
                              }
#line 1125 "prog_io_util.m"
                              if (!(parse_tree__prog_io_util__succeeded))
#line 1126 "prog_io_util.m"
                                {
#line 1126 "prog_io_util.m"
                                  MR_Word parse_tree__prog_io_util__TypeInfo_100_100;

#line 15859 "parse_tree.prog_io_util.c"
                                  {
#line 15861 "parse_tree.prog_io_util.c"
                                    parse_tree__prog_io_util__TypeInfo_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15863 "parse_tree.prog_io_util.c"
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_100_100, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 15865 "parse_tree.prog_io_util.c"
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_100_100, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 15867 "parse_tree.prog_io_util.c"
                                  }
#line 1126 "prog_io_util.m"
                                  {
#line 1126 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_100_100, parse_tree__prog_io_util__SV_31, parse_tree__prog_io_util__TailColonVars_27);
                                  }
#line 1126 "prog_io_util.m"
                                }
#line 1125 "prog_io_util.m"
                            }
#line 1132 "prog_io_util.m"
                          if (parse_tree__prog_io_util__succeeded)
#line 1130 "prog_io_util.m"
                            {
#line 1130 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__V_67_67;
#line 1130 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__Spec_79;

#line 1129 "prog_io_util.m"
                              {
#line 1129 "prog_io_util.m"
                                parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_79);
                              }
#line 1131 "prog_io_util.m"
                              {
#line 1131 "prog_io_util.m"
                                parse_tree__prog_io_util__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1131 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_79));
#line 1131 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1131 "prog_io_util.m"
                              }
#line 1131 "prog_io_util.m"
                              {
#line 1131 "prog_io_util.m"
                                MR_Word base;
#line 1131 "prog_io_util.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1131 "prog_io_util.m"
                                *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1131 "prog_io_util.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_67_67));
#line 1131 "prog_io_util.m"
                              }
#line 1130 "prog_io_util.m"
                            }
#line 1132 "prog_io_util.m"
                          else
#line 1133 "prog_io_util.m"
                            {
#line 1133 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__StateVars_32;

#line 1133 "prog_io_util.m"
                              {
#line 1133 "prog_io_util.m"
                                parse_tree__prog_io_util__StateVars_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1133 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__StateVars_32, 0) = ((MR_Box) (parse_tree__prog_io_util__SV_31));
#line 1133 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__StateVars_32, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_25));
#line 1133 "prog_io_util.m"
                              }
#line 1134 "prog_io_util.m"
                              {
#line 1134 "prog_io_util.m"
                                MR_Word base;
#line 1134 "prog_io_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1134 "prog_io_util.m"
                                *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1134 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__TailVars_24));
#line 1134 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__StateVars_32));
#line 1134 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_util__TailDotVars_26));
#line 1134 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_io_util__TailColonVars_27));
#line 1134 "prog_io_util.m"
                              }
#line 1133 "prog_io_util.m"
                            }
#line 1122 "prog_io_util.m"
                        }
#line 1121 "prog_io_util.m"
                        break;
#line 1121 "prog_io_util.m"
                      case (MR_Integer) 2:
#line 1138 "prog_io_util.m"
                        {
#line 1138 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__SV_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__VarKind_15, (MR_Integer) 0)));

#line 1140 "prog_io_util.m"
                          {
#line 1140 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__TypeInfo_102_102;

#line 15969 "parse_tree.prog_io_util.c"
                            {
#line 15971 "parse_tree.prog_io_util.c"
                              parse_tree__prog_io_util__TypeInfo_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15973 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_102_102, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 15975 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_102_102, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 15977 "parse_tree.prog_io_util.c"
                            }
#line 1140 "prog_io_util.m"
                            {
#line 1140 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_102_102, parse_tree__prog_io_util__SV_85, parse_tree__prog_io_util__TailStateVars_25);
                            }
#line 1140 "prog_io_util.m"
                          }
#line 1141 "prog_io_util.m"
                          if (!(parse_tree__prog_io_util__succeeded))
#line 1141 "prog_io_util.m"
                            {
#line 1141 "prog_io_util.m"
                              {
#line 1141 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__TypeInfo_104_104;

#line 15995 "parse_tree.prog_io_util.c"
                                {
#line 15997 "parse_tree.prog_io_util.c"
                                  parse_tree__prog_io_util__TypeInfo_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15999 "parse_tree.prog_io_util.c"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_104_104, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 16001 "parse_tree.prog_io_util.c"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_104_104, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 16003 "parse_tree.prog_io_util.c"
                                }
#line 1141 "prog_io_util.m"
                                {
#line 1141 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_104_104, parse_tree__prog_io_util__SV_85, parse_tree__prog_io_util__TailDotVars_26);
                                }
#line 1141 "prog_io_util.m"
                              }
#line 1141 "prog_io_util.m"
                              if (!(parse_tree__prog_io_util__succeeded))
#line 1142 "prog_io_util.m"
                                {
#line 1142 "prog_io_util.m"
                                  MR_Word parse_tree__prog_io_util__TypeInfo_106_106;

#line 16019 "parse_tree.prog_io_util.c"
                                  {
#line 16021 "parse_tree.prog_io_util.c"
                                    parse_tree__prog_io_util__TypeInfo_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 16023 "parse_tree.prog_io_util.c"
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_106_106, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 16025 "parse_tree.prog_io_util.c"
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_106_106, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 16027 "parse_tree.prog_io_util.c"
                                  }
#line 1142 "prog_io_util.m"
                                  {
#line 1142 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_106_106, parse_tree__prog_io_util__SV_85, parse_tree__prog_io_util__TailColonVars_27);
                                  }
#line 1142 "prog_io_util.m"
                                }
#line 1141 "prog_io_util.m"
                            }
#line 1148 "prog_io_util.m"
                          if (parse_tree__prog_io_util__succeeded)
#line 1146 "prog_io_util.m"
                            {
#line 1146 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__V_65_65;
#line 1146 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__Spec_82;

#line 1145 "prog_io_util.m"
                              {
#line 1145 "prog_io_util.m"
                                parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_82);
                              }
#line 1147 "prog_io_util.m"
                              {
#line 1147 "prog_io_util.m"
                                parse_tree__prog_io_util__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_82));
#line 1147 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1147 "prog_io_util.m"
                              }
#line 1147 "prog_io_util.m"
                              {
#line 1147 "prog_io_util.m"
                                MR_Word base;
#line 1147 "prog_io_util.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1147 "prog_io_util.m"
                                *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1147 "prog_io_util.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_65_65));
#line 1147 "prog_io_util.m"
                              }
#line 1146 "prog_io_util.m"
                            }
#line 1148 "prog_io_util.m"
                          else
#line 1149 "prog_io_util.m"
                            {
#line 1149 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__DotVars_33;

#line 1149 "prog_io_util.m"
                              {
#line 1149 "prog_io_util.m"
                                parse_tree__prog_io_util__DotVars_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__DotVars_33, 0) = ((MR_Box) (parse_tree__prog_io_util__SV_85));
#line 1149 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__DotVars_33, 1) = ((MR_Box) (parse_tree__prog_io_util__TailDotVars_26));
#line 1149 "prog_io_util.m"
                              }
#line 1150 "prog_io_util.m"
                              {
#line 1150 "prog_io_util.m"
                                MR_Word base;
#line 1150 "prog_io_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1150 "prog_io_util.m"
                                *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1150 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__TailVars_24));
#line 1150 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_25));
#line 1150 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_util__DotVars_33));
#line 1150 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_io_util__TailColonVars_27));
#line 1150 "prog_io_util.m"
                              }
#line 1149 "prog_io_util.m"
                            }
#line 1138 "prog_io_util.m"
                        }
#line 1121 "prog_io_util.m"
                        break;
#line 1121 "prog_io_util.m"
                      case (MR_Integer) 3:
#line 1154 "prog_io_util.m"
                        {
#line 1154 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__SV_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__VarKind_15, (MR_Integer) 0)));

#line 1156 "prog_io_util.m"
                          {
#line 1156 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__TypeInfo_108_108;

#line 16129 "parse_tree.prog_io_util.c"
                            {
#line 16131 "parse_tree.prog_io_util.c"
                              parse_tree__prog_io_util__TypeInfo_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 16133 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_108_108, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 16135 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_108_108, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 16137 "parse_tree.prog_io_util.c"
                            }
#line 1156 "prog_io_util.m"
                            {
#line 1156 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_108_108, parse_tree__prog_io_util__SV_89, parse_tree__prog_io_util__TailStateVars_25);
                            }
#line 1156 "prog_io_util.m"
                          }
#line 1157 "prog_io_util.m"
                          if (!(parse_tree__prog_io_util__succeeded))
#line 1157 "prog_io_util.m"
                            {
#line 1157 "prog_io_util.m"
                              {
#line 1157 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__TypeInfo_110_110;

#line 16155 "parse_tree.prog_io_util.c"
                                {
#line 16157 "parse_tree.prog_io_util.c"
                                  parse_tree__prog_io_util__TypeInfo_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 16159 "parse_tree.prog_io_util.c"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_110_110, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 16161 "parse_tree.prog_io_util.c"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_110_110, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 16163 "parse_tree.prog_io_util.c"
                                }
#line 1157 "prog_io_util.m"
                                {
#line 1157 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_110_110, parse_tree__prog_io_util__SV_89, parse_tree__prog_io_util__TailDotVars_26);
                                }
#line 1157 "prog_io_util.m"
                              }
#line 1157 "prog_io_util.m"
                              if (!(parse_tree__prog_io_util__succeeded))
#line 1158 "prog_io_util.m"
                                {
#line 1158 "prog_io_util.m"
                                  MR_Word parse_tree__prog_io_util__TypeInfo_112_112;

#line 16179 "parse_tree.prog_io_util.c"
                                  {
#line 16181 "parse_tree.prog_io_util.c"
                                    parse_tree__prog_io_util__TypeInfo_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 16183 "parse_tree.prog_io_util.c"
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_112_112, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 16185 "parse_tree.prog_io_util.c"
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_112_112, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 16187 "parse_tree.prog_io_util.c"
                                  }
#line 1158 "prog_io_util.m"
                                  {
#line 1158 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_112_112, parse_tree__prog_io_util__SV_89, parse_tree__prog_io_util__TailColonVars_27);
                                  }
#line 1158 "prog_io_util.m"
                                }
#line 1157 "prog_io_util.m"
                            }
#line 1164 "prog_io_util.m"
                          if (parse_tree__prog_io_util__succeeded)
#line 1162 "prog_io_util.m"
                            {
#line 1162 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__V_63_63;
#line 1162 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__Spec_86;

#line 1161 "prog_io_util.m"
                              {
#line 1161 "prog_io_util.m"
                                parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_86);
                              }
#line 1163 "prog_io_util.m"
                              {
#line 1163 "prog_io_util.m"
                                parse_tree__prog_io_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1163 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_86));
#line 1163 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1163 "prog_io_util.m"
                              }
#line 1163 "prog_io_util.m"
                              {
#line 1163 "prog_io_util.m"
                                MR_Word base;
#line 1163 "prog_io_util.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1163 "prog_io_util.m"
                                *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1163 "prog_io_util.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_63_63));
#line 1163 "prog_io_util.m"
                              }
#line 1162 "prog_io_util.m"
                            }
#line 1164 "prog_io_util.m"
                          else
#line 1165 "prog_io_util.m"
                            {
#line 1165 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__ColonVars_34;

#line 1165 "prog_io_util.m"
                              {
#line 1165 "prog_io_util.m"
                                parse_tree__prog_io_util__ColonVars_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1165 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ColonVars_34, 0) = ((MR_Box) (parse_tree__prog_io_util__SV_89));
#line 1165 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ColonVars_34, 1) = ((MR_Box) (parse_tree__prog_io_util__TailColonVars_27));
#line 1165 "prog_io_util.m"
                              }
#line 1166 "prog_io_util.m"
                              {
#line 1166 "prog_io_util.m"
                                MR_Word base;
#line 1166 "prog_io_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1166 "prog_io_util.m"
                                *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1166 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__TailVars_24));
#line 1166 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_25));
#line 1166 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_util__TailDotVars_26));
#line 1166 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_io_util__ColonVars_34));
#line 1166 "prog_io_util.m"
                              }
#line 1165 "prog_io_util.m"
                            }
#line 1154 "prog_io_util.m"
                        }
#line 1121 "prog_io_util.m"
                        break;
#line 1121 "prog_io_util.m"
                    }
#line 1109 "prog_io_util.m"
                  }
#line 1106 "prog_io_util.m"
              }
#line 1174 "prog_io_util.m"
            else
#line 1176 "prog_io_util.m"
              {
#line 1176 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_72_72;
#line 1176 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Spec_90;

#line 1175 "prog_io_util.m"
                {
#line 1175 "prog_io_util.m"
                  parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "variable or state variable", parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_90);
                }
#line 1177 "prog_io_util.m"
                {
#line 1177 "prog_io_util.m"
                  parse_tree__prog_io_util__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1177 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_90));
#line 1177 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1177 "prog_io_util.m"
                }
#line 1177 "prog_io_util.m"
                {
#line 1177 "prog_io_util.m"
                  MR_Word base;
#line 1177 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1177 "prog_io_util.m"
                  *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1177 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_72_72));
#line 1177 "prog_io_util.m"
                }
#line 1176 "prog_io_util.m"
              }
#line 1174 "prog_io_util.m"
          }
#line 1179 "prog_io_util.m"
        else
#line 1181 "prog_io_util.m"
          {
#line 1181 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_75_75;
#line 1181 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Spec_91;

#line 1180 "prog_io_util.m"
            {
#line 1180 "prog_io_util.m"
              parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "list of variables and/or state variables", parse_tree__prog_io_util__Term_5, &parse_tree__prog_io_util__Spec_91);
            }
#line 1182 "prog_io_util.m"
            {
#line 1182 "prog_io_util.m"
              parse_tree__prog_io_util__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1182 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_91));
#line 1182 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1182 "prog_io_util.m"
            }
#line 1182 "prog_io_util.m"
            {
#line 1182 "prog_io_util.m"
              MR_Word base;
#line 1182 "prog_io_util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1182 "prog_io_util.m"
              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1182 "prog_io_util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_75_75));
#line 1182 "prog_io_util.m"
            }
#line 1181 "prog_io_util.m"
          }
#line 1179 "prog_io_util.m"
      }
#line 1089 "prog_io_util.m"
  }
#line 102 "prog_io_util.m"
}

#line 93 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_quantifier_vars_4_p_0(
#line 93 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_58,
#line 93 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_5,
#line 93 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 93 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_7,
#line 93 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__MaybeVars_8)
#line 93 "prog_io_util.m"
{
#line 1030 "prog_io_util.m"
  {
#line 1030 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1028 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_28_28;
#line 1028 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_29_29;
#line 1028 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_30_30;
#line 1028 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 1028 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1028 "prog_io_util.m"
      {
#line 1028 "prog_io_util.m"
        parse_tree__prog_io_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 1028 "prog_io_util.m"
        parse_tree__prog_io_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 1028 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 1028 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1028 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1028 "prog_io_util.m"
          {
#line 1028 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_28_28)) == (MR_mktag((MR_Integer) 0)));
#line 1028 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1028 "prog_io_util.m"
              {
#line 1028 "prog_io_util.m"
                parse_tree__prog_io_util__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, (MR_Integer) 0)));
#line 1028 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_29_29, (MR_String) "[]") == 0);
#line 1028 "prog_io_util.m"
              }
#line 1028 "prog_io_util.m"
          }
#line 1028 "prog_io_util.m"
      }
#line 1030 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1029 "prog_io_util.m"
      {
#line 1029 "prog_io_util.m"
        *parse_tree__prog_io_util__MaybeVars_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[14]);
#line 1029 "prog_io_util.m"
      }
#line 1030 "prog_io_util.m"
    else
#line 1074 "prog_io_util.m"
      {
#line 1074 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__HeadTerm_10;
#line 1074 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TailTerm_11;
#line 1030 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_33_33;
#line 1030 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_34_34;
#line 1030 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_35_35;
#line 1030 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_36_36;
#line 1030 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_37_37;
#line 1030 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_12_12;

#line 1030 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1030 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1030 "prog_io_util.m"
          {
#line 1030 "prog_io_util.m"
            parse_tree__prog_io_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 1030 "prog_io_util.m"
            parse_tree__prog_io_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 1030 "prog_io_util.m"
            parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 1030 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_33_33)) == (MR_mktag((MR_Integer) 0)));
#line 1030 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1030 "prog_io_util.m"
              {
#line 1030 "prog_io_util.m"
                parse_tree__prog_io_util__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_33_33, (MR_Integer) 0)));
#line 1030 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_34_34, (MR_String) "[|]") == 0);
#line 1030 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1030 "prog_io_util.m"
                  {
#line 1030 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 1030 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1030 "prog_io_util.m"
                      {
#line 1030 "prog_io_util.m"
                        parse_tree__prog_io_util__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_35_35, (MR_Integer) 0)));
#line 1030 "prog_io_util.m"
                        parse_tree__prog_io_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_35_35, (MR_Integer) 1)));
#line 1030 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_36_36)) == (MR_mktag((MR_Integer) 1)));
#line 1030 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1030 "prog_io_util.m"
                          {
#line 1030 "prog_io_util.m"
                            parse_tree__prog_io_util__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_36_36, (MR_Integer) 0)));
#line 1030 "prog_io_util.m"
                            parse_tree__prog_io_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_36_36, (MR_Integer) 1)));
#line 1030 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1030 "prog_io_util.m"
                          }
#line 1030 "prog_io_util.m"
                      }
#line 1030 "prog_io_util.m"
                  }
#line 1030 "prog_io_util.m"
              }
#line 1030 "prog_io_util.m"
          }
#line 1074 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1069 "prog_io_util.m"
          {
#line 1069 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__VarKind_15;

#line 1035 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadTerm_10)) == (MR_mktag((MR_Integer) 0))))
#line 1036 "prog_io_util.m"
              {
#line 1036 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__SV0_16;
#line 1036 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 1036 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__V_39_39;
#line 1036 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));
#line 1036 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_41_41;
#line 1036 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_42_42;
#line 1036 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 2)));
#line 1036 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_17_17;

#line 1036 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_38_38)) == (MR_mktag((MR_Integer) 0)));
#line 1036 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1036 "prog_io_util.m"
                  {
#line 1036 "prog_io_util.m"
                    parse_tree__prog_io_util__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_38_38, (MR_Integer) 0)));
#line 1036 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_39_39, (MR_String) "!") == 0);
#line 1036 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1036 "prog_io_util.m"
                      {
#line 1036 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 1036 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1036 "prog_io_util.m"
                          {
#line 1036 "prog_io_util.m"
                            parse_tree__prog_io_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_40_40, (MR_Integer) 0)));
#line 1036 "prog_io_util.m"
                            parse_tree__prog_io_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_40_40, (MR_Integer) 1)));
#line 1036 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1036 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1036 "prog_io_util.m"
                              {
#line 1036 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_41_41)) == (MR_mktag((MR_Integer) 1)));
#line 1036 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 1036 "prog_io_util.m"
                                  {
#line 1036 "prog_io_util.m"
                                    parse_tree__prog_io_util__SV0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_41_41, (MR_Integer) 0)));
#line 1036 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_41_41, (MR_Integer) 1)));
#line 1037 "prog_io_util.m"
                                    {
#line 1037 "prog_io_util.m"
                                      parse_tree__prog_io_util__VarKind_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1037 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarKind_15, 0) = ((MR_Box) (parse_tree__prog_io_util__SV0_16));
#line 1037 "prog_io_util.m"
                                    }
#line 1037 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
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
#line 1036 "prog_io_util.m"
              }
#line 1035 "prog_io_util.m"
            else
#line 1033 "prog_io_util.m"
              {
#line 1033 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 1033 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));

#line 1034 "prog_io_util.m"
                {
#line 1034 "prog_io_util.m"
                  parse_tree__prog_io_util__VarKind_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1034 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__VarKind_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V0_13));
#line 1034 "prog_io_util.m"
                }
#line 1033 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1033 "prog_io_util.m"
              }
#line 1069 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1041 "prog_io_util.m"
              {
#line 1041 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__MaybeVarsTail_19;

#line 1040 "prog_io_util.m"
                {
#line 1040 "prog_io_util.m"
                  parse_tree__prog_io_util__parse_quantifier_vars_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_58, parse_tree__prog_io_util__TailTerm_11, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__MaybeVarsTail_19);
                }
#line 1065 "prog_io_util.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeVarsTail_19)) == (MR_mktag((MR_Integer) 0))))
#line 1067 "prog_io_util.m"
                  *parse_tree__prog_io_util__MaybeVars_8 = parse_tree__prog_io_util__MaybeVarsTail_19;
#line 1065 "prog_io_util.m"
                else
#line 1043 "prog_io_util.m"
                  {
#line 1043 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__TailVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeVarsTail_19, (MR_Integer) 0)));
#line 1043 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__TailStateVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeVarsTail_19, (MR_Integer) 1)));

#line 1054 "prog_io_util.m"
                    if (((MR_tag((MR_Word) parse_tree__prog_io_util__VarKind_15)) == (MR_mktag((MR_Integer) 0))))
#line 1045 "prog_io_util.m"
                      {
#line 1045 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__VarKind_15, (MR_Integer) 0)));
#line 1046 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TypeInfo_60_60;

#line 16660 "parse_tree.prog_io_util.c"
                        {
#line 16662 "parse_tree.prog_io_util.c"
                          parse_tree__prog_io_util__TypeInfo_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 16664 "parse_tree.prog_io_util.c"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_60_60, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 16666 "parse_tree.prog_io_util.c"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_60_60, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_58));
#line 16668 "parse_tree.prog_io_util.c"
                        }
#line 1046 "prog_io_util.m"
                        {
#line 1046 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_58, parse_tree__prog_io_util__TypeInfo_60_60, parse_tree__prog_io_util__V_22, parse_tree__prog_io_util__TailVars_20);
                        }
#line 1050 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1048 "prog_io_util.m"
                          {
#line 1048 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Spec_23;
#line 1048 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_45_45;

#line 1047 "prog_io_util.m"
                            {
#line 1047 "prog_io_util.m"
                              parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_58, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_23);
                            }
#line 1049 "prog_io_util.m"
                            {
#line 1049 "prog_io_util.m"
                              parse_tree__prog_io_util__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1049 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_23));
#line 1049 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1049 "prog_io_util.m"
                            }
#line 1049 "prog_io_util.m"
                            {
#line 1049 "prog_io_util.m"
                              MR_Word base;
#line 1049 "prog_io_util.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1049 "prog_io_util.m"
                              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1049 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_45_45));
#line 1049 "prog_io_util.m"
                            }
#line 1048 "prog_io_util.m"
                          }
#line 1050 "prog_io_util.m"
                        else
#line 1051 "prog_io_util.m"
                          {
#line 1051 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Vars_24;

#line 1051 "prog_io_util.m"
                            {
#line 1051 "prog_io_util.m"
                              parse_tree__prog_io_util__Vars_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1051 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_24, 0) = ((MR_Box) (parse_tree__prog_io_util__V_22));
#line 1051 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_24, 1) = ((MR_Box) (parse_tree__prog_io_util__TailVars_20));
#line 1051 "prog_io_util.m"
                            }
#line 1052 "prog_io_util.m"
                            {
#line 1052 "prog_io_util.m"
                              MR_Word base;
#line 1052 "prog_io_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1052 "prog_io_util.m"
                              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1052 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Vars_24));
#line 1052 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_21));
#line 1052 "prog_io_util.m"
                            }
#line 1051 "prog_io_util.m"
                          }
#line 1045 "prog_io_util.m"
                      }
#line 1054 "prog_io_util.m"
                    else
#line 1055 "prog_io_util.m"
                      {
#line 1055 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__SV_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarKind_15, (MR_Integer) 0)));
#line 1056 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TypeInfo_62_62;

#line 16757 "parse_tree.prog_io_util.c"
                        {
#line 16759 "parse_tree.prog_io_util.c"
                          parse_tree__prog_io_util__TypeInfo_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 16761 "parse_tree.prog_io_util.c"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_62_62, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 16763 "parse_tree.prog_io_util.c"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_62_62, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_58));
#line 16765 "parse_tree.prog_io_util.c"
                        }
#line 1056 "prog_io_util.m"
                        {
#line 1056 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_58, parse_tree__prog_io_util__TypeInfo_62_62, parse_tree__prog_io_util__SV_25, parse_tree__prog_io_util__TailStateVars_21);
                        }
#line 1060 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1058 "prog_io_util.m"
                          {
#line 1058 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_43_43;
#line 1058 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Spec_53;
#line 1058 "prog_io_util.m"
                            MR_String parse_tree__prog_io_util__TermStr_67;
#line 1058 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Pieces_68;
#line 1058 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_69_69;
#line 1058 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_71_71;
#line 1058 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_74_74;
#line 1058 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_75_75;
#line 1058 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_84_84;
#line 1058 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_85_85;
#line 1058 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_86_86;
#line 1058 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_87_87;
#line 1058 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_88_88;

#line 1199 "prog_io_util.m"
                            {
#line 1199 "prog_io_util.m"
                              parse_tree__prog_io_util__TermStr_67 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_util__TypeInfo_for_T_58, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10);
                            }
#line 1201 "prog_io_util.m"
                            {
#line 1201 "prog_io_util.m"
                              parse_tree__prog_io_util__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1201 "prog_io_util.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1201 "prog_io_util.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_75_75, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_67));
#line 1201 "prog_io_util.m"
                            }
#line 1201 "prog_io_util.m"
                            {
#line 1201 "prog_io_util.m"
                              parse_tree__prog_io_util__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1201 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_74_74, 0) = ((MR_Box) (parse_tree__prog_io_util__V_75_75));
#line 1201 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[11])));
#line 1201 "prog_io_util.m"
                            }
#line 1201 "prog_io_util.m"
                            {
#line 1201 "prog_io_util.m"
                              parse_tree__prog_io_util__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1201 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_71_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[15])));
#line 1201 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_71_71, 1) = ((MR_Box) (parse_tree__prog_io_util__V_74_74));
#line 1201 "prog_io_util.m"
                            }
#line 1200 "prog_io_util.m"
                            {
#line 1200 "prog_io_util.m"
                              parse_tree__prog_io_util__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1200 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_69_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1200 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_69_69, 1) = ((MR_Box) (parse_tree__prog_io_util__V_71_71));
#line 1200 "prog_io_util.m"
                            }
#line 1200 "prog_io_util.m"
                            {
#line 1200 "prog_io_util.m"
                              parse_tree__prog_io_util__Pieces_68 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__V_69_69);
                            }
#line 1203 "prog_io_util.m"
                            {
#line 1203 "prog_io_util.m"
                              parse_tree__prog_io_util__V_86_86 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_util__TypeInfo_for_T_58, parse_tree__prog_io_util__HeadTerm_10);
                            }
#line 1203 "prog_io_util.m"
                            {
#line 1203 "prog_io_util.m"
                              parse_tree__prog_io_util__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1203 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_88_88, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_68));
#line 1203 "prog_io_util.m"
                            }
#line 1203 "prog_io_util.m"
                            {
#line 1203 "prog_io_util.m"
                              parse_tree__prog_io_util__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1203 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_87_87, 0) = ((MR_Box) (parse_tree__prog_io_util__V_88_88));
#line 1203 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1203 "prog_io_util.m"
                            }
#line 1203 "prog_io_util.m"
                            {
#line 1203 "prog_io_util.m"
                              parse_tree__prog_io_util__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1203 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_85_85, 0) = ((MR_Box) (parse_tree__prog_io_util__V_86_86));
#line 1203 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_85_85, 1) = ((MR_Box) (parse_tree__prog_io_util__V_87_87));
#line 1203 "prog_io_util.m"
                            }
#line 1203 "prog_io_util.m"
                            {
#line 1203 "prog_io_util.m"
                              parse_tree__prog_io_util__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1203 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io_util__V_85_85));
#line 1203 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1203 "prog_io_util.m"
                            }
#line 1202 "prog_io_util.m"
                            {
#line 1202 "prog_io_util.m"
                              parse_tree__prog_io_util__Spec_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1202 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1202 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1202 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_53, 2) = ((MR_Box) (parse_tree__prog_io_util__V_84_84));
#line 1202 "prog_io_util.m"
                            }
#line 1059 "prog_io_util.m"
                            {
#line 1059 "prog_io_util.m"
                              parse_tree__prog_io_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1059 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_53));
#line 1059 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1059 "prog_io_util.m"
                            }
#line 1059 "prog_io_util.m"
                            {
#line 1059 "prog_io_util.m"
                              MR_Word base;
#line 1059 "prog_io_util.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1059 "prog_io_util.m"
                              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1059 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_43_43));
#line 1059 "prog_io_util.m"
                            }
#line 1058 "prog_io_util.m"
                          }
#line 1060 "prog_io_util.m"
                        else
#line 1061 "prog_io_util.m"
                          {
#line 1061 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__StateVars_26;

#line 1061 "prog_io_util.m"
                            {
#line 1061 "prog_io_util.m"
                              parse_tree__prog_io_util__StateVars_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1061 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__StateVars_26, 0) = ((MR_Box) (parse_tree__prog_io_util__SV_25));
#line 1061 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__StateVars_26, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_21));
#line 1061 "prog_io_util.m"
                            }
#line 1062 "prog_io_util.m"
                            {
#line 1062 "prog_io_util.m"
                              MR_Word base;
#line 1062 "prog_io_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1062 "prog_io_util.m"
                              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1062 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__TailVars_20));
#line 1062 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__StateVars_26));
#line 1062 "prog_io_util.m"
                            }
#line 1061 "prog_io_util.m"
                          }
#line 1055 "prog_io_util.m"
                      }
#line 1043 "prog_io_util.m"
                  }
#line 1041 "prog_io_util.m"
              }
#line 1069 "prog_io_util.m"
            else
#line 1071 "prog_io_util.m"
              {
#line 1071 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_48_48;
#line 1071 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Spec_56;

#line 1070 "prog_io_util.m"
                {
#line 1070 "prog_io_util.m"
                  parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_58, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "variable or state variable", parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_56);
                }
#line 1072 "prog_io_util.m"
                {
#line 1072 "prog_io_util.m"
                  parse_tree__prog_io_util__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1072 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_56));
#line 1072 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1072 "prog_io_util.m"
                }
#line 1072 "prog_io_util.m"
                {
#line 1072 "prog_io_util.m"
                  MR_Word base;
#line 1072 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1072 "prog_io_util.m"
                  *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1072 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_48_48));
#line 1072 "prog_io_util.m"
                }
#line 1071 "prog_io_util.m"
              }
#line 1069 "prog_io_util.m"
          }
#line 1074 "prog_io_util.m"
        else
#line 1076 "prog_io_util.m"
          {
#line 1076 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_51_51;
#line 1076 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Spec_57;

#line 1075 "prog_io_util.m"
            {
#line 1075 "prog_io_util.m"
              parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_58, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "list of variables and/or state variables", parse_tree__prog_io_util__Term_5, &parse_tree__prog_io_util__Spec_57);
            }
#line 1077 "prog_io_util.m"
            {
#line 1077 "prog_io_util.m"
              parse_tree__prog_io_util__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1077 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_57));
#line 1077 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1077 "prog_io_util.m"
            }
#line 1077 "prog_io_util.m"
            {
#line 1077 "prog_io_util.m"
              MR_Word base;
#line 1077 "prog_io_util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1077 "prog_io_util.m"
              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1077 "prog_io_util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_51_51));
#line 1077 "prog_io_util.m"
            }
#line 1076 "prog_io_util.m"
          }
#line 1074 "prog_io_util.m"
      }
#line 1030 "prog_io_util.m"
  }
#line 93 "prog_io_util.m"
}

#line 86 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_vars_4_p_0(
#line 86 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_42,
#line 86 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_5,
#line 86 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 86 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_7,
#line 86 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__MaybeVars_8)
#line 86 "prog_io_util.m"
{
#line 993 "prog_io_util.m"
  {
#line 993 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 991 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_23_23;
#line 991 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_24_24;
#line 991 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_25_25;
#line 991 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 991 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 991 "prog_io_util.m"
      {
#line 991 "prog_io_util.m"
        parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 991 "prog_io_util.m"
        parse_tree__prog_io_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 991 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 991 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 991 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 991 "prog_io_util.m"
          {
#line 991 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 991 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 991 "prog_io_util.m"
              {
#line 991 "prog_io_util.m"
                parse_tree__prog_io_util__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_23_23, (MR_Integer) 0)));
#line 991 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_24_24, (MR_String) "[]") == 0);
#line 991 "prog_io_util.m"
              }
#line 991 "prog_io_util.m"
          }
#line 991 "prog_io_util.m"
      }
#line 993 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 992 "prog_io_util.m"
      {
#line 992 "prog_io_util.m"
        *parse_tree__prog_io_util__MaybeVars_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[0]);
#line 992 "prog_io_util.m"
      }
#line 993 "prog_io_util.m"
    else
#line 1017 "prog_io_util.m"
      {
#line 1017 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__HeadTerm_10;
#line 1017 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TailTerm_11;
#line 993 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_27_27;
#line 993 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_28_28;
#line 993 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_29_29;
#line 993 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_30_30;
#line 993 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_31_31;
#line 993 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_12_12;

#line 993 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 993 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 993 "prog_io_util.m"
          {
#line 993 "prog_io_util.m"
            parse_tree__prog_io_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 993 "prog_io_util.m"
            parse_tree__prog_io_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 993 "prog_io_util.m"
            parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 993 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_27_27)) == (MR_mktag((MR_Integer) 0)));
#line 993 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 993 "prog_io_util.m"
              {
#line 993 "prog_io_util.m"
                parse_tree__prog_io_util__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, (MR_Integer) 0)));
#line 993 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_28_28, (MR_String) "[|]") == 0);
#line 993 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 993 "prog_io_util.m"
                  {
#line 993 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 993 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 993 "prog_io_util.m"
                      {
#line 993 "prog_io_util.m"
                        parse_tree__prog_io_util__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, (MR_Integer) 0)));
#line 993 "prog_io_util.m"
                        parse_tree__prog_io_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, (MR_Integer) 1)));
#line 993 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 993 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 993 "prog_io_util.m"
                          {
#line 993 "prog_io_util.m"
                            parse_tree__prog_io_util__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_30_30, (MR_Integer) 0)));
#line 993 "prog_io_util.m"
                            parse_tree__prog_io_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_30_30, (MR_Integer) 1)));
#line 993 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 993 "prog_io_util.m"
                          }
#line 993 "prog_io_util.m"
                      }
#line 993 "prog_io_util.m"
                  }
#line 993 "prog_io_util.m"
              }
#line 993 "prog_io_util.m"
          }
#line 1017 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1011 "prog_io_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadTerm_10)) == (MR_mktag((MR_Integer) 0))))
#line 1012 "prog_io_util.m"
            {
#line 1012 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_33_33;
#line 1012 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Spec_40;

#line 1013 "prog_io_util.m"
              {
#line 1013 "prog_io_util.m"
                parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_42, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "variable", parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_40);
              }
#line 1015 "prog_io_util.m"
              {
#line 1015 "prog_io_util.m"
                parse_tree__prog_io_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_40));
#line 1015 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1015 "prog_io_util.m"
              }
#line 1015 "prog_io_util.m"
              {
#line 1015 "prog_io_util.m"
                MR_Word base;
#line 1015 "prog_io_util.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1015 "prog_io_util.m"
                *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1015 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_33_33));
#line 1015 "prog_io_util.m"
              }
#line 1012 "prog_io_util.m"
            }
#line 1011 "prog_io_util.m"
          else
#line 995 "prog_io_util.m"
            {
#line 995 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__HeadVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 995 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__MaybeVarsTail_15;
#line 995 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));

#line 996 "prog_io_util.m"
              {
#line 996 "prog_io_util.m"
                parse_tree__prog_io_util__parse_vars_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_42, parse_tree__prog_io_util__TailTerm_11, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__MaybeVarsTail_15);
              }
#line 1007 "prog_io_util.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeVarsTail_15)) == (MR_mktag((MR_Integer) 0))))
#line 1009 "prog_io_util.m"
                *parse_tree__prog_io_util__MaybeVars_8 = parse_tree__prog_io_util__MaybeVarsTail_15;
#line 1007 "prog_io_util.m"
              else
#line 998 "prog_io_util.m"
                {
#line 998 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__TailVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeVarsTail_15, (MR_Integer) 0)));
#line 999 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__TypeInfo_44_44;

#line 17272 "parse_tree.prog_io_util.c"
                  {
#line 17274 "parse_tree.prog_io_util.c"
                    parse_tree__prog_io_util__TypeInfo_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 17276 "parse_tree.prog_io_util.c"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_44_44, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 17278 "parse_tree.prog_io_util.c"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_44_44, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_42));
#line 17280 "parse_tree.prog_io_util.c"
                  }
#line 999 "prog_io_util.m"
                  {
#line 999 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_42, parse_tree__prog_io_util__TypeInfo_44_44, parse_tree__prog_io_util__HeadVar_13, parse_tree__prog_io_util__TailVars_16);
                  }
#line 1003 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 1001 "prog_io_util.m"
                    {
#line 1001 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__Spec_17;
#line 1001 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__V_35_35;

#line 1000 "prog_io_util.m"
                      {
#line 1000 "prog_io_util.m"
                        parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_42, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_17);
                      }
#line 1002 "prog_io_util.m"
                      {
#line 1002 "prog_io_util.m"
                        parse_tree__prog_io_util__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1002 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_17));
#line 1002 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1002 "prog_io_util.m"
                      }
#line 1002 "prog_io_util.m"
                      {
#line 1002 "prog_io_util.m"
                        MR_Word base;
#line 1002 "prog_io_util.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1002 "prog_io_util.m"
                        *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1002 "prog_io_util.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_35_35));
#line 1002 "prog_io_util.m"
                      }
#line 1001 "prog_io_util.m"
                    }
#line 1003 "prog_io_util.m"
                  else
#line 1004 "prog_io_util.m"
                    {
#line 1004 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__Vars_18;

#line 1004 "prog_io_util.m"
                      {
#line 1004 "prog_io_util.m"
                        parse_tree__prog_io_util__Vars_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1004 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_18, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadVar_13));
#line 1004 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_18, 1) = ((MR_Box) (parse_tree__prog_io_util__TailVars_16));
#line 1004 "prog_io_util.m"
                      }
#line 1005 "prog_io_util.m"
                      {
#line 1005 "prog_io_util.m"
                        MR_Word base;
#line 1005 "prog_io_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1005 "prog_io_util.m"
                        *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1005 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Vars_18));
#line 1005 "prog_io_util.m"
                      }
#line 1004 "prog_io_util.m"
                    }
#line 998 "prog_io_util.m"
                }
#line 995 "prog_io_util.m"
            }
#line 1017 "prog_io_util.m"
        else
#line 1019 "prog_io_util.m"
          {
#line 1019 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_38_38;
#line 1019 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Spec_41;

#line 1018 "prog_io_util.m"
            {
#line 1018 "prog_io_util.m"
              parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_42, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "list of variables", parse_tree__prog_io_util__Term_5, &parse_tree__prog_io_util__Spec_41);
            }
#line 1020 "prog_io_util.m"
            {
#line 1020 "prog_io_util.m"
              parse_tree__prog_io_util__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1020 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_41));
#line 1020 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_38_38));
#line 1020 "prog_io_util.m"
            }
#line 1019 "prog_io_util.m"
          }
#line 1017 "prog_io_util.m"
      }
#line 993 "prog_io_util.m"
  }
#line 86 "prog_io_util.m"
}

#line 81 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__parse_list_of_vars_2_p_0(
#line 81 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_18,
#line 81 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 81 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__2_2)
#line 81 "prog_io_util.m"
{
#line 984 "prog_io_util.m"
  {
#line 984 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 984 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_20_20;
#line 984 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_21_21;
#line 984 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_22_22;
#line 984 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_19_19;

#line 984 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 984 "prog_io_util.m"
      {
#line 984 "prog_io_util.m"
        parse_tree__prog_io_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 984 "prog_io_util.m"
        parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 984 "prog_io_util.m"
        parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 2)));
#line 984 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_21_21)) == (MR_mktag((MR_Integer) 0)));
#line 984 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 984 "prog_io_util.m"
          {
#line 984 "prog_io_util.m"
            parse_tree__prog_io_util__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_21_21, (MR_Integer) 0)));
#line 984 "prog_io_util.m"
            if ((parse_tree__prog_io_util__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 984 "prog_io_util.m"
              {
#line 984 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_22_22, (MR_String) "[]") == 0);
#line 984 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 984 "prog_io_util.m"
                  {
#line 984 "prog_io_util.m"
                    *parse_tree__prog_io_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 984 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 984 "prog_io_util.m"
                  }
#line 984 "prog_io_util.m"
              }
#line 984 "prog_io_util.m"
            else
#line 986 "prog_io_util.m"
              {
#line 986 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Head_7;
#line 986 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Tail_8;
#line 986 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Var_10;
#line 986 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Vars_11;
#line 986 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_16_16;
#line 986 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_17_17;
#line 987 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_12_12;

#line 985 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_22_22, (MR_String) "[|]") == 0);
#line 986 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 986 "prog_io_util.m"
                  {
#line 985 "prog_io_util.m"
                    parse_tree__prog_io_util__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, (MR_Integer) 0)));
#line 985 "prog_io_util.m"
                    parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, (MR_Integer) 1)));
#line 985 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 985 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 985 "prog_io_util.m"
                      {
#line 985 "prog_io_util.m"
                        parse_tree__prog_io_util__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
#line 985 "prog_io_util.m"
                        parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
#line 985 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 986 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 986 "prog_io_util.m"
                          {
#line 987 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Head_7)) == (MR_mktag((MR_Integer) 1)));
#line 987 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 987 "prog_io_util.m"
                              {
#line 987 "prog_io_util.m"
                                parse_tree__prog_io_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Head_7, (MR_Integer) 0)));
#line 987 "prog_io_util.m"
                                parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Head_7, (MR_Integer) 1)));
#line 988 "prog_io_util.m"
                                {
#line 988 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_list_of_vars_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_18, parse_tree__prog_io_util__Tail_8, &parse_tree__prog_io_util__Vars_11);
                                }
#line 986 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 986 "prog_io_util.m"
                                  {
#line 986 "prog_io_util.m"
                                    {
#line 986 "prog_io_util.m"
                                      MR_Word base;
#line 986 "prog_io_util.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 986 "prog_io_util.m"
                                      *parse_tree__prog_io_util__HeadVar__2_2 = base;
#line 986 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Var_10));
#line 986 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Vars_11));
#line 986 "prog_io_util.m"
                                    }
#line 986 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 986 "prog_io_util.m"
                                  }
#line 987 "prog_io_util.m"
                              }
#line 986 "prog_io_util.m"
                          }
#line 985 "prog_io_util.m"
                      }
#line 986 "prog_io_util.m"
                  }
#line 986 "prog_io_util.m"
              }
#line 984 "prog_io_util.m"
          }
#line 984 "prog_io_util.m"
      }
#line 984 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 984 "prog_io_util.m"
  }
#line 81 "prog_io_util.m"
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
#line 244 "prog_io_util.m"
  {
#line 244 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 244 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__HeadVar__2_2;

#line 244 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 245 "prog_io_util.m"
      parse_tree__prog_io_util__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 244 "prog_io_util.m"
    else
#line 244 "prog_io_util.m"
      parse_tree__prog_io_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 244 "prog_io_util.m"
    return parse_tree__prog_io_util__HeadVar__2_2;
#line 244 "prog_io_util.m"
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
#line 241 "prog_io_util.m"
  {
#line 241 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 241 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__HeadVar__2_2;

#line 241 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 242 "prog_io_util.m"
      parse_tree__prog_io_util__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 241 "prog_io_util.m"
    else
#line 241 "prog_io_util.m"
      parse_tree__prog_io_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 241 "prog_io_util.m"
    return parse_tree__prog_io_util__HeadVar__2_2;
#line 241 "prog_io_util.m"
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
#line 238 "prog_io_util.m"
  {
#line 238 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 238 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__HeadVar__2_2;

#line 238 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 239 "prog_io_util.m"
      parse_tree__prog_io_util__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 238 "prog_io_util.m"
    else
#line 238 "prog_io_util.m"
      parse_tree__prog_io_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 238 "prog_io_util.m"
    return parse_tree__prog_io_util__HeadVar__2_2;
#line 238 "prog_io_util.m"
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
