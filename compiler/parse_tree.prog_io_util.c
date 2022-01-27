/*
** Automatically generated from `prog_io_util.m'
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


/* :- module parse_tree.prog_io_util. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_io_util__init
ENDINIT
*/

#include "parse_tree.prog_io_util.mih"


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



#line 1084 "prog_io_util.m"
struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s {
#line 1087 "prog_io_util.m"
  MR_bool parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded;
#line 1087 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23;
#line 1087 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__Functors_11;
#line 1093 "prog_io_util.m"
  jmp_buf parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__commit_0;
#line 1093 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13;
#line 1093 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F1_14;
#line 1093 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F2_15;
#line 1093 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__ConsId_17;
#line 1093 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20;
#line 1093 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_24_24;
#line 1084 "prog_io_util.m"
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
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_0[2];

#line 148 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_0;

#line 151 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_1[2];

#line 154 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_1;

#line 157 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_2[1];

#line 160 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_2;

#line 163 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_3[1];

#line 166 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_3;

#line 169 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_4[1];

#line 172 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_4;

#line 175 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_0[1];

#line 178 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_1[1];

#line 181 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_2[1];

#line 184 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_3[2];

#line 187 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_known_compound_inst_kind_1[4];

#line 190 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_compound_inst_kind_1[5];

#line 193 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_compound_inst_kind_1[5];

#line 196 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__list__pti_list_1__pseudo_1;

#line 199 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_0[1];

#line 202 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_0;

#line 205 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_1[2];

#line 208 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_1;

#line 211 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_2[1];

#line 214 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_2;

#line 217 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_3[2];

#line 220 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_3;

#line 223 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_4[1];

#line 226 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_4;

#line 229 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_0[1];

#line 232 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_1[1];

#line 235 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_2[1];

#line 238 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_3[2];

#line 241 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_known_compound_type_kind_1[4];

#line 244 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_compound_type_kind_1[5];

#line 247 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_compound_type_kind_1[5];

#line 250 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_inst_kind_1_0[1];

#line 253 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_0;

#line 256 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_known_compound_inst_kind_1__pseudo_1;

#line 259 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_inst_kind_1_1[1];

#line 262 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_1;

#line 265 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_2;

#line 268 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_0[1];

#line 271 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_1[1];

#line 274 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_2[1];

#line 277 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_known_inst_kind_1[3];

#line 280 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_inst_kind_1[3];

#line 283 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_inst_kind_1[3];

#line 286 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_type_kind_1_0[1];

#line 289 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_0;

#line 292 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_known_compound_type_kind_1__pseudo_1;

#line 295 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_type_kind_1_1[1];

#line 298 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_1;

#line 301 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_2;

#line 304 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_type_kind_1_0[1];

#line 307 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_type_kind_1_1[1];

#line 310 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_type_kind_1_2[1];

#line 313 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_known_type_kind_1[3];

#line 316 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_type_kind_1[3];

#line 319 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_type_kind_1[3];

#line 322 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_term_1__pseudo_1;

#line 325 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1;

#line 328 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__maybe_error__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1;

#line 331 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0;

#line 334 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0;

#line 337 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__maybe_error__ti_maybe2_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0;

#line 340 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__maybe__pti_maybe_1__pseudo_1;

#line 343 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1;

#line 346 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__maybe_error__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1;

#line 349 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_var_1__pseudo_1;

#line 352 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_0[1];

#line 355 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_0;

#line 358 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_1[1];

#line 361 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_1;

#line 364 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_2[1];

#line 367 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_2;

#line 370 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_3[1];

#line 373 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_3;

#line 376 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_0[1];

#line 379 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_1[1];

#line 382 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_2[1];

#line 385 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_3[1];

#line 388 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_ordinary_state_dot_colon_var_1[4];

#line 391 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_dot_colon_var_1[4];

#line 394 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_dot_colon_var_1[4];

#line 397 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_0[1];

#line 400 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_0;

#line 403 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_1[1];

#line 406 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_1;

#line 409 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_0[1];

#line 412 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_1[1];

#line 415 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_ordinary_state_var_1[2];

#line 418 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_var_1[2];

#line 421 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_var_1[2];

#line 424 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__parse_tree__maybe_error__pti_maybe1_1__pseudo_1;

#line 427 "parse_tree.prog_io_util.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_parse_tree__maybe_error__pti_maybe1_1__pseudo_1;

#line 430 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0;

#line 433 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 436 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 439 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 442 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 445 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____allow_constrained_inst_var_0_0_10001(
#line 448 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 450 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 453 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____allow_constrained_inst_var_0_0_10001(
#line 456 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 458 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 460 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 463 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_inst_kind_1_0_10001(
#line 466 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 468 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 470 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 473 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_inst_kind_1_0_10001(
#line 476 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 478 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 480 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 482 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 485 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_type_kind_1_0_10001(
#line 488 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 490 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 492 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 495 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_type_kind_1_0_10001(
#line 498 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 500 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 502 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 504 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 507 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_inst_kind_1_0_10001(
#line 510 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 512 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 514 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 517 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_inst_kind_1_0_10001(
#line 520 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 522 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 524 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 526 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 529 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_type_kind_1_0_10001(
#line 532 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 534 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 536 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 539 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_type_kind_1_0_10001(
#line 542 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 544 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 546 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 548 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 551 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_1_0_10001(
#line 554 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 556 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 558 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 561 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_1_0_10001(
#line 564 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 566 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 568 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 570 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 573 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_0_0_10001(
#line 576 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 578 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 581 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_0_0_10001(
#line 584 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 586 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 588 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 591 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_pred_or_func_1_0_10001(
#line 594 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 596 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 598 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 601 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_pred_or_func_1_0_10001(
#line 604 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 606 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 608 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 610 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 613 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0_10001(
#line 616 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 618 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 620 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 623 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0_10001(
#line 626 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 628 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 630 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 632 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 635 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_var_1_0_10001(
#line 638 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 640 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 642 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 645 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_var_1_0_10001(
#line 648 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 650 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 652 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 654 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 657 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____parser_1_0_10001(
#line 660 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 662 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 664 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 667 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____parser_1_0_10001(
#line 670 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 672 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 674 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 676 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 679 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2pvar_0_0_10001(
#line 682 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 684 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 687 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____var2pvar_0_0_10001(
#line 690 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 692 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 694 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 697 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2tvar_0_0_10001(
#line 700 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 702 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 705 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____var2tvar_0_0_10001(
#line 708 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 710 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 712 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 1174 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(
#line 1174 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Op_5,
#line 1174 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_6,
#line 1174 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__List0_7,
#line 1174 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__OneOrMore_8);

#line 866 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
#line 866 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Name_4,
#line 866 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Args_5,
#line 866 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__KnownInst_6);

#line 435 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_116_121_112_101_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
#line 435 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Name_4,
#line 435 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Args_5,
#line 435 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__KnownType_6);

#line 1321 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_var_1_0(
#line 1321 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_14,
#line 1321 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 1321 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 1321 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3);

#line 1321 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_var_1_0(
#line 1321 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
#line 1321 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 1321 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2);

#line 1382 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0(
#line 1382 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_38,
#line 1382 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 1382 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 1382 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3);

#line 1382 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0(
#line 1382 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_13,
#line 1382 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 1382 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2);

#line 420 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_type_kind_1_0(
#line 420 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_18,
#line 420 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 420 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 420 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3);

#line 420 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_type_kind_1_0(
#line 420 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_11,
#line 420 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 420 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2);

#line 848 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_inst_kind_1_0(
#line 848 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_18,
#line 848 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 848 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 848 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3);

#line 848 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_inst_kind_1_0(
#line 848 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_11,
#line 848 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 848 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2);

#line 413 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_type_kind_1_0(
#line 413 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_78,
#line 413 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 413 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 413 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3);

#line 413 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_type_kind_1_0(
#line 413 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_19,
#line 413 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 413 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2);

#line 841 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_inst_kind_1_0(
#line 841 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_78,
#line 841 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 841 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 841 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3);

#line 841 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_inst_kind_1_0(
#line 841 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_19,
#line 841 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 841 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2);

#line 1511 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(
#line 1511 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_44,
#line 1511 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_6,
#line 1511 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_7,
#line 1511 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Expected_8,
#line 1511 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_9,
#line 1511 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Spec_10);

#line 1501 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__generate_repeated_state_var_msg_4_p_0(
#line 1501 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_34,
#line 1501 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_5,
#line 1501 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 1501 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_7,
#line 1501 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Spec_8);

#line 1491 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(
#line 1491 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_34,
#line 1491 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_5,
#line 1491 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 1491 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_7,
#line 1491 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Spec_8);

#line 1194 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__map_parser_one_or_more_4_p_0(
#line 1194 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_29,
#line 1194 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Parser_5,
#line 1194 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Head_6,
#line 1194 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Tail_7,
#line 1194 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_8);

#line 1108 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_bound_inst_3_p_0(
#line 1108 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_4,
#line 1108 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__InstTerm_5,
#line 1108 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__BoundInst_6);

#line 1100 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_bound_inst_list_3_p_0(
#line 1100 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
#line 1100 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 1100 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3);

#line 1093 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_1(
#line 1093 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg);

#line 1093 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_2(
#line 1093 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg);

#line 1093 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_3(
#line 1093 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg);

#line 1084 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(
#line 1084 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
#line 1084 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Disj_6,
#line 1084 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Uniqueness_7,
#line 1084 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Inst_8);

#line 991 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_higher_order_inst_4_p_0(
#line 991 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
#line 991 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__BeforeIsTerm_6,
#line 991 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__DetTerm_7,
#line 991 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Inst_8);

#line 676 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_higher_order_mode_4_p_0(
#line 676 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
#line 676 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__BeforeIsTerm_6,
#line 676 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__DetTerm_7,
#line 676 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Mode_8);

#line 616 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_qualified_term_3_p_0(
#line 616 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 616 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Args_2,
#line 616 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Term_3);

#line 614 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_type_list_2_p_0_1(
#line 614 "prog_io_util.m"
  MR_Box parse_tree__prog_io_util__closure_arg,
#line 614 "prog_io_util.m"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 614 "prog_io_util.m"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2);

#line 611 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_type_list_2_p_0(
#line 611 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Types_3,
#line 611 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Terms_4);

#line 538 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_types_acc_7_p_0(
#line 538 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 538 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_2,
#line 538 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_3,
#line 538 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_0_4,
#line 538 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_5,
#line 538 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__STATE_VARIABLE_Specs_0_6,
#line 538 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__STATE_VARIABLE_Specs_7);

#line 510 "prog_io_util.m"
static MR_Word MR_CALL 
parse_tree__prog_io_util__ill_formed_type_result_3_f_0(
#line 510 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_5,
#line 510 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 510 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_7);

#line 330 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_compound_type_5_p_0(
#line 330 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_6,
#line 330 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_7,
#line 330 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_8,
#line 330 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__CompoundTypeKind_9,
#line 330 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_10);


static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_1[21][2];

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_2[9][3];

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_3[31][1];

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_4[1][4];

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_6[1][5];


#line 1074 "prog_io_util.m"
/* sealed */ struct parse_tree__prog_io_util__vector_common_type_5_0_s {
#line 1074 "prog_io_util.m"
  const MR_String parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_0;
#line 1074 "prog_io_util.m"
  const MR_Integer parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_1;
#line 1074 "prog_io_util.m"
  const MR_Word parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_2;
#line 1074 "prog_io_util.m"
};

static /* final */ const struct parse_tree__prog_io_util__vector_common_type_5_0_s parse_tree__prog_io_util_vector_common_5[32];

#line 467 "prog_io_util.m"
/* sealed */ struct parse_tree__prog_io_util__vector_common_type_7_0_s {
#line 467 "prog_io_util.m"
  const MR_String parse_tree__prog_io_util__vector_common_type_7_0__vct_7_f_0;
#line 467 "prog_io_util.m"
  const MR_Integer parse_tree__prog_io_util__vector_common_type_7_0__vct_7_f_1;
#line 467 "prog_io_util.m"
};

static /* final */ const struct parse_tree__prog_io_util__vector_common_type_7_0_s parse_tree__prog_io_util_vector_common_7[32];



static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_1[21][2] = {
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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_io_util_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: ill-formed type"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Repeated variable"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Repeated state variable"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Expected"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_2[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_io_util_scalar_common_1[2]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_io_util_scalar_common_1[3])),
    ((MR_Box) (&parse_tree__prog_io_util_scalar_common_1[4]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_io_util_scalar_common_1[3])),
    ((MR_Box) (&parse_tree__prog_io_util_scalar_common_1[5]))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_io_util_scalar_common_6[0])),
    ((MR_Box) (parse_tree__prog_io_util__unparse_type_list_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_3[31][1] = {
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
    ((MR_Box) ((MR_String) "."))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_3[11])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_3[13])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_3[15])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_3[17])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[16])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[4])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[17])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[5])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[6])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[18])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[7])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[19])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[8])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[20])))
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

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_6[1][5] = {
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

static /* final */ const struct parse_tree__prog_io_util__vector_common_type_7_0_s parse_tree__prog_io_util_vector_common_7[32] = {
  /* row 0 */
  {
    (MR_String) "",
    (MR_Integer) -1
  },
  /* row 1 */
  {
    (MR_String) "string",
    (MR_Integer) -1
  },
  /* row 2 */
  {
    (MR_String) "semipure",
    (MR_Integer) -1
  },
  /* row 3 */
  {
    (MR_String) "float",
    (MR_Integer) -1
  },
  /* row 4 */
  {
    (MR_String) "character",
    (MR_Integer) 5
  },
  /* row 5 */
  {
    (MR_String) "impure",
    (MR_Integer) -1
  },
  /* row 6 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 7 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 8 */
  {
    (MR_String) "int",
    (MR_Integer) -1
  },
  /* row 9 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 10 */
  {
    (MR_String) "{}",
    (MR_Integer) -1
  },
  /* row 11 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 12 */
  {
    NULL,
    (MR_Integer) -2
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
    NULL,
    (MR_Integer) -2
  },
  /* row 16 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 17 */
  {
    NULL,
    (MR_Integer) -2
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
    (MR_String) "pure",
    (MR_Integer) -1
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
    (MR_String) "=",
    (MR_Integer) -1
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
    (MR_String) "pred",
    (MR_Integer) -1
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1799 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1807 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_0 = {
  (MR_String) "allow_constrained_inst_var",
  (MR_Integer) 0
};

#line 1813 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_1 = {
  (MR_String) "no_allow_constrained_inst_var",
  (MR_Integer) 1
};

#line 1819 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_value_ordered_allow_constrained_inst_var_0[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_1
};

#line 1825 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_name_ordered_allow_constrained_inst_var_0[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_1
};

#line 1831 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_allow_constrained_inst_var_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1837 "parse_tree.prog_io_util.c"
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

#line 1854 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1860 "parse_tree.prog_io_util.c"
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

#line 1875 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1881 "parse_tree.prog_io_util.c"
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

#line 1896 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_2[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1901 "parse_tree.prog_io_util.c"
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

#line 1916 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_3[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1921 "parse_tree.prog_io_util.c"
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

#line 1936 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_4[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1941 "parse_tree.prog_io_util.c"
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

#line 1956 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_0
};

#line 1961 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_1
};

#line 1966 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_2[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_2
};

#line 1971 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_3[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_3,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_4
};

#line 1977 "parse_tree.prog_io_util.c"
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

#line 2001 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_compound_inst_kind_1[5] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_2,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_1,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_4,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_3
};

#line 2010 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_compound_inst_kind_1[5] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 3
};

#line 2019 "parse_tree.prog_io_util.c"
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

#line 2036 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2044 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__pti_list_1__pseudo_1
};

#line 2049 "parse_tree.prog_io_util.c"
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

#line 2064 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2070 "parse_tree.prog_io_util.c"
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

#line 2085 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__pti_list_1__pseudo_1
};

#line 2090 "parse_tree.prog_io_util.c"
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

#line 2105 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_3[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2111 "parse_tree.prog_io_util.c"
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

#line 2126 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_4[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__pti_list_1__pseudo_1
};

#line 2131 "parse_tree.prog_io_util.c"
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

#line 2146 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_0
};

#line 2151 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_1
};

#line 2156 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_2[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_2
};

#line 2161 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_3[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_3,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_4
};

#line 2167 "parse_tree.prog_io_util.c"
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

#line 2191 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_compound_type_kind_1[5] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_4,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_1,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_2,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_3,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_0
};

#line 2200 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_compound_type_kind_1[5] = {
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 2209 "parse_tree.prog_io_util.c"
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

#line 2226 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_inst_kind_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

#line 2231 "parse_tree.prog_io_util.c"
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

#line 2246 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_known_compound_inst_kind_1__pseudo_1 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_known_compound_inst_kind_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2254 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_inst_kind_1_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__pti_known_compound_inst_kind_1__pseudo_1
};

#line 2259 "parse_tree.prog_io_util.c"
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

#line 2274 "parse_tree.prog_io_util.c"
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

#line 2289 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_2
};

#line 2294 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_0
};

#line 2299 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_2[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_1
};

#line 2304 "parse_tree.prog_io_util.c"
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

#line 2323 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_inst_kind_1[3] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_2,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_1,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_0
};

#line 2330 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_inst_kind_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2337 "parse_tree.prog_io_util.c"
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

#line 2354 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_type_kind_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 2359 "parse_tree.prog_io_util.c"
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

#line 2374 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_known_compound_type_kind_1__pseudo_1 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_known_compound_type_kind_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2382 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_type_kind_1_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__pti_known_compound_type_kind_1__pseudo_1
};

#line 2387 "parse_tree.prog_io_util.c"
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

#line 2402 "parse_tree.prog_io_util.c"
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

#line 2417 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_type_kind_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_2
};

#line 2422 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_type_kind_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_0
};

#line 2427 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_type_kind_1_2[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_1
};

#line 2432 "parse_tree.prog_io_util.c"
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

#line 2451 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_type_kind_1[3] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_2,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_1,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_0
};

#line 2458 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_type_kind_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2465 "parse_tree.prog_io_util.c"
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

#line 2482 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2490 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_term_1__pseudo_1
  }
};

#line 2498 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__maybe_error__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1
  }
};

#line 2507 "parse_tree.prog_io_util.c"
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

#line 2524 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2532 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0
  }
};

#line 2540 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__maybe_error__ti_maybe2_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__prog_io_util__list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0
  }
};

#line 2549 "parse_tree.prog_io_util.c"
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

#line 2566 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__maybe__pti_maybe_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2574 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__pti_list_1__pseudo_1,
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__maybe__pti_maybe_1__pseudo_1
  }
};

#line 2583 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__maybe_error__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1
  }
};

#line 2592 "parse_tree.prog_io_util.c"
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

#line 2609 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2617 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 2622 "parse_tree.prog_io_util.c"
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

#line 2637 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 2642 "parse_tree.prog_io_util.c"
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

#line 2657 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 2662 "parse_tree.prog_io_util.c"
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

#line 2677 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 2682 "parse_tree.prog_io_util.c"
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

#line 2697 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_0
};

#line 2702 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_1
};

#line 2707 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_2[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_2
};

#line 2712 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_3[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_3
};

#line 2717 "parse_tree.prog_io_util.c"
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

#line 2741 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_dot_colon_var_1[4] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_3,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_2,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_1
};

#line 2749 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_dot_colon_var_1[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2757 "parse_tree.prog_io_util.c"
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

#line 2774 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 2779 "parse_tree.prog_io_util.c"
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

#line 2794 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 2799 "parse_tree.prog_io_util.c"
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

#line 2814 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_0
};

#line 2819 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_1
};

#line 2824 "parse_tree.prog_io_util.c"
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

#line 2838 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_var_1[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_1
};

#line 2844 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_var_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2850 "parse_tree.prog_io_util.c"
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

#line 2867 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__parse_tree__maybe_error__pti_maybe1_1__pseudo_1 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2875 "parse_tree.prog_io_util.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_parse_tree__maybe_error__pti_maybe1_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__maybe_error__pti_maybe1_1__pseudo_1
  }
};

#line 2885 "parse_tree.prog_io_util.c"
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

#line 2902 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2910 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2918 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2927 "parse_tree.prog_io_util.c"
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

#line 2944 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2952 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2961 "parse_tree.prog_io_util.c"
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

#line 2978 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____allow_constrained_inst_var_0_0_10001(
#line 2981 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 2983 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 2985 "parse_tree.prog_io_util.c"
{
#line 2987 "parse_tree.prog_io_util.c"
  {
#line 2989 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 2992 "parse_tree.prog_io_util.c"
    {
#line 2994 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____allow_constrained_inst_var_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 2997 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 2999 "parse_tree.prog_io_util.c"
  }
#line 3001 "parse_tree.prog_io_util.c"
}

#line 3004 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____allow_constrained_inst_var_0_0_10001(
#line 3007 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 3009 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3011 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3013 "parse_tree.prog_io_util.c"
{
#line 3015 "parse_tree.prog_io_util.c"
  {
#line 3017 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3020 "parse_tree.prog_io_util.c"
    {
#line 3022 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____allow_constrained_inst_var_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3025 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3027 "parse_tree.prog_io_util.c"
  }
#line 3029 "parse_tree.prog_io_util.c"
}

#line 3032 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_inst_kind_1_0_10001(
#line 3035 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3037 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3039 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3041 "parse_tree.prog_io_util.c"
{
#line 3043 "parse_tree.prog_io_util.c"
  {
#line 3045 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3048 "parse_tree.prog_io_util.c"
    {
#line 3050 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____known_compound_inst_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3053 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3055 "parse_tree.prog_io_util.c"
  }
#line 3057 "parse_tree.prog_io_util.c"
}

#line 3060 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_inst_kind_1_0_10001(
#line 3063 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3065 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3067 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3069 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3071 "parse_tree.prog_io_util.c"
{
#line 3073 "parse_tree.prog_io_util.c"
  {
#line 3075 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3078 "parse_tree.prog_io_util.c"
    {
#line 3080 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____known_compound_inst_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3083 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3085 "parse_tree.prog_io_util.c"
  }
#line 3087 "parse_tree.prog_io_util.c"
}

#line 3090 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_type_kind_1_0_10001(
#line 3093 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3095 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3097 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3099 "parse_tree.prog_io_util.c"
{
#line 3101 "parse_tree.prog_io_util.c"
  {
#line 3103 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3106 "parse_tree.prog_io_util.c"
    {
#line 3108 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____known_compound_type_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3111 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3113 "parse_tree.prog_io_util.c"
  }
#line 3115 "parse_tree.prog_io_util.c"
}

#line 3118 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_type_kind_1_0_10001(
#line 3121 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3123 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3125 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3127 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3129 "parse_tree.prog_io_util.c"
{
#line 3131 "parse_tree.prog_io_util.c"
  {
#line 3133 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3136 "parse_tree.prog_io_util.c"
    {
#line 3138 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____known_compound_type_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3141 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3143 "parse_tree.prog_io_util.c"
  }
#line 3145 "parse_tree.prog_io_util.c"
}

#line 3148 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_inst_kind_1_0_10001(
#line 3151 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3153 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3155 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3157 "parse_tree.prog_io_util.c"
{
#line 3159 "parse_tree.prog_io_util.c"
  {
#line 3161 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3164 "parse_tree.prog_io_util.c"
    {
#line 3166 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____known_inst_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3169 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3171 "parse_tree.prog_io_util.c"
  }
#line 3173 "parse_tree.prog_io_util.c"
}

#line 3176 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_inst_kind_1_0_10001(
#line 3179 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3181 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3183 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3185 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3187 "parse_tree.prog_io_util.c"
{
#line 3189 "parse_tree.prog_io_util.c"
  {
#line 3191 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3194 "parse_tree.prog_io_util.c"
    {
#line 3196 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____known_inst_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3199 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3201 "parse_tree.prog_io_util.c"
  }
#line 3203 "parse_tree.prog_io_util.c"
}

#line 3206 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_type_kind_1_0_10001(
#line 3209 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3211 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3213 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3215 "parse_tree.prog_io_util.c"
{
#line 3217 "parse_tree.prog_io_util.c"
  {
#line 3219 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3222 "parse_tree.prog_io_util.c"
    {
#line 3224 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____known_type_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3227 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3229 "parse_tree.prog_io_util.c"
  }
#line 3231 "parse_tree.prog_io_util.c"
}

#line 3234 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_type_kind_1_0_10001(
#line 3237 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3239 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3241 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3243 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3245 "parse_tree.prog_io_util.c"
{
#line 3247 "parse_tree.prog_io_util.c"
  {
#line 3249 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3252 "parse_tree.prog_io_util.c"
    {
#line 3254 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____known_type_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3257 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3259 "parse_tree.prog_io_util.c"
  }
#line 3261 "parse_tree.prog_io_util.c"
}

#line 3264 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_1_0_10001(
#line 3267 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3269 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3271 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3273 "parse_tree.prog_io_util.c"
{
#line 3275 "parse_tree.prog_io_util.c"
  {
#line 3277 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3280 "parse_tree.prog_io_util.c"
    {
#line 3282 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe_functor_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3285 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3287 "parse_tree.prog_io_util.c"
  }
#line 3289 "parse_tree.prog_io_util.c"
}

#line 3292 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_1_0_10001(
#line 3295 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3297 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3299 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3301 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3303 "parse_tree.prog_io_util.c"
{
#line 3305 "parse_tree.prog_io_util.c"
  {
#line 3307 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3310 "parse_tree.prog_io_util.c"
    {
#line 3312 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe_functor_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3315 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3317 "parse_tree.prog_io_util.c"
  }
#line 3319 "parse_tree.prog_io_util.c"
}

#line 3322 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_0_0_10001(
#line 3325 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3327 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 3329 "parse_tree.prog_io_util.c"
{
#line 3331 "parse_tree.prog_io_util.c"
  {
#line 3333 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3336 "parse_tree.prog_io_util.c"
    {
#line 3338 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe_functor_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 3341 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3343 "parse_tree.prog_io_util.c"
  }
#line 3345 "parse_tree.prog_io_util.c"
}

#line 3348 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_0_0_10001(
#line 3351 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 3353 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3355 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3357 "parse_tree.prog_io_util.c"
{
#line 3359 "parse_tree.prog_io_util.c"
  {
#line 3361 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3364 "parse_tree.prog_io_util.c"
    {
#line 3366 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe_functor_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3369 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3371 "parse_tree.prog_io_util.c"
  }
#line 3373 "parse_tree.prog_io_util.c"
}

#line 3376 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_pred_or_func_1_0_10001(
#line 3379 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3381 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3383 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3385 "parse_tree.prog_io_util.c"
{
#line 3387 "parse_tree.prog_io_util.c"
  {
#line 3389 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3392 "parse_tree.prog_io_util.c"
    {
#line 3394 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe_pred_or_func_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3397 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3399 "parse_tree.prog_io_util.c"
  }
#line 3401 "parse_tree.prog_io_util.c"
}

#line 3404 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_pred_or_func_1_0_10001(
#line 3407 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3409 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3411 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3413 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3415 "parse_tree.prog_io_util.c"
{
#line 3417 "parse_tree.prog_io_util.c"
  {
#line 3419 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3422 "parse_tree.prog_io_util.c"
    {
#line 3424 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe_pred_or_func_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3427 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3429 "parse_tree.prog_io_util.c"
  }
#line 3431 "parse_tree.prog_io_util.c"
}

#line 3434 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0_10001(
#line 3437 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3439 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3441 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3443 "parse_tree.prog_io_util.c"
{
#line 3445 "parse_tree.prog_io_util.c"
  {
#line 3447 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3450 "parse_tree.prog_io_util.c"
    {
#line 3452 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3455 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3457 "parse_tree.prog_io_util.c"
  }
#line 3459 "parse_tree.prog_io_util.c"
}

#line 3462 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0_10001(
#line 3465 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3467 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3469 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3471 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3473 "parse_tree.prog_io_util.c"
{
#line 3475 "parse_tree.prog_io_util.c"
  {
#line 3477 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3480 "parse_tree.prog_io_util.c"
    {
#line 3482 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3485 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3487 "parse_tree.prog_io_util.c"
  }
#line 3489 "parse_tree.prog_io_util.c"
}

#line 3492 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_var_1_0_10001(
#line 3495 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3497 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3499 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3501 "parse_tree.prog_io_util.c"
{
#line 3503 "parse_tree.prog_io_util.c"
  {
#line 3505 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3508 "parse_tree.prog_io_util.c"
    {
#line 3510 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____ordinary_state_var_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3513 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3515 "parse_tree.prog_io_util.c"
  }
#line 3517 "parse_tree.prog_io_util.c"
}

#line 3520 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_var_1_0_10001(
#line 3523 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3525 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3527 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3529 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3531 "parse_tree.prog_io_util.c"
{
#line 3533 "parse_tree.prog_io_util.c"
  {
#line 3535 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3538 "parse_tree.prog_io_util.c"
    {
#line 3540 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____ordinary_state_var_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3543 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3545 "parse_tree.prog_io_util.c"
  }
#line 3547 "parse_tree.prog_io_util.c"
}

#line 3550 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____parser_1_0_10001(
#line 3553 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3555 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3557 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3559 "parse_tree.prog_io_util.c"
{
#line 3561 "parse_tree.prog_io_util.c"
  {
#line 3563 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3566 "parse_tree.prog_io_util.c"
    {
#line 3568 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____parser_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3571 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3573 "parse_tree.prog_io_util.c"
  }
#line 3575 "parse_tree.prog_io_util.c"
}

#line 3578 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____parser_1_0_10001(
#line 3581 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3583 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3585 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3587 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3589 "parse_tree.prog_io_util.c"
{
#line 3591 "parse_tree.prog_io_util.c"
  {
#line 3593 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3596 "parse_tree.prog_io_util.c"
    {
#line 3598 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____parser_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3601 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3603 "parse_tree.prog_io_util.c"
  }
#line 3605 "parse_tree.prog_io_util.c"
}

#line 3608 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2pvar_0_0_10001(
#line 3611 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3613 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 3615 "parse_tree.prog_io_util.c"
{
#line 3617 "parse_tree.prog_io_util.c"
  {
#line 3619 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3622 "parse_tree.prog_io_util.c"
    {
#line 3624 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____var2pvar_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 3627 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3629 "parse_tree.prog_io_util.c"
  }
#line 3631 "parse_tree.prog_io_util.c"
}

#line 3634 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____var2pvar_0_0_10001(
#line 3637 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 3639 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3641 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3643 "parse_tree.prog_io_util.c"
{
#line 3645 "parse_tree.prog_io_util.c"
  {
#line 3647 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3650 "parse_tree.prog_io_util.c"
    {
#line 3652 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____var2pvar_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3655 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3657 "parse_tree.prog_io_util.c"
  }
#line 3659 "parse_tree.prog_io_util.c"
}

#line 3662 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2tvar_0_0_10001(
#line 3665 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3667 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 3669 "parse_tree.prog_io_util.c"
{
#line 3671 "parse_tree.prog_io_util.c"
  {
#line 3673 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3676 "parse_tree.prog_io_util.c"
    {
#line 3678 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____var2tvar_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 3681 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3683 "parse_tree.prog_io_util.c"
  }
#line 3685 "parse_tree.prog_io_util.c"
}

#line 3688 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____var2tvar_0_0_10001(
#line 3691 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 3693 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3695 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3697 "parse_tree.prog_io_util.c"
{
#line 3699 "parse_tree.prog_io_util.c"
  {
#line 3701 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3704 "parse_tree.prog_io_util.c"
    {
#line 3706 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____var2tvar_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3709 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3711 "parse_tree.prog_io_util.c"
  }
#line 3713 "parse_tree.prog_io_util.c"
}

#line 1174 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(
#line 1174 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Op_5,
#line 1174 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_6,
#line 1174 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__List0_7,
#line 1174 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__OneOrMore_8)
#line 1174 "prog_io_util.m"
{
#line 1178 "prog_io_util.m"
  while (MR_TRUE)
#line 1178 "prog_io_util.m"
    {
#line 1178 "prog_io_util.m"
      /* tailcall optimized into a loop */
#line 1178 "prog_io_util.m"
      {
#line 1178 "prog_io_util.m"
        MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_6)) == (MR_mktag((MR_Integer) 0)));
#line 1178 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__L_9;
#line 1178 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__R_10;
#line 1178 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_14_14;
#line 1178 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_15_15;
#line 1178 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_16_16;
#line 1178 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_17_17;
#line 1178 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_21_21;
#line 1178 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util___Context_11;

#line 1178 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1178 "prog_io_util.m"
          {
#line 1178 "prog_io_util.m"
            parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_6, (MR_Integer) 0)));
#line 1178 "prog_io_util.m"
            parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_6, (MR_Integer) 1)));
#line 1178 "prog_io_util.m"
            parse_tree__prog_io_util___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_6, (MR_Integer) 2)));
#line 1178 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_14_14)) == (MR_mktag((MR_Integer) 0)));
#line 1178 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1178 "prog_io_util.m"
              {
#line 1178 "prog_io_util.m"
                parse_tree__prog_io_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_14_14, (MR_Integer) 0)));
#line 1178 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Op_5, parse_tree__prog_io_util__V_21_21) == 0);
#line 1178 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1178 "prog_io_util.m"
                  {
#line 1178 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 1178 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1178 "prog_io_util.m"
                      {
#line 1178 "prog_io_util.m"
                        parse_tree__prog_io_util__L_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 0)));
#line 1178 "prog_io_util.m"
                        parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 1)));
#line 1178 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 1178 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1178 "prog_io_util.m"
                          {
#line 1178 "prog_io_util.m"
                            parse_tree__prog_io_util__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
#line 1178 "prog_io_util.m"
                            parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
#line 1178 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1178 "prog_io_util.m"
                          }
#line 1178 "prog_io_util.m"
                      }
#line 1178 "prog_io_util.m"
                  }
#line 1178 "prog_io_util.m"
              }
#line 1178 "prog_io_util.m"
          }
#line 1178 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1180 "prog_io_util.m"
          {
#line 1180 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__RHead_12;
#line 1180 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__RTail_13;
#line 1180 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_18_18;
#line 1180 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_19_19;

#line 1179 "prog_io_util.m"
            {
#line 1179 "prog_io_util.m"
              parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(parse_tree__prog_io_util__Op_5, parse_tree__prog_io_util__R_10, parse_tree__prog_io_util__List0_7, &parse_tree__prog_io_util__V_18_18);
            }
#line 1180 "prog_io_util.m"
            parse_tree__prog_io_util__RHead_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_18_18, (MR_Integer) 0)));
#line 1180 "prog_io_util.m"
            parse_tree__prog_io_util__RTail_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_18_18, (MR_Integer) 1)));
#line 1181 "prog_io_util.m"
            {
#line 1181 "prog_io_util.m"
              parse_tree__prog_io_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1181 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 0) = ((MR_Box) (parse_tree__prog_io_util__RHead_12));
#line 1181 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io_util__RTail_13));
#line 1181 "prog_io_util.m"
            }
#line 1181 "prog_io_util.m"
            /* direct tailcall eliminated */
#line 1181 "prog_io_util.m"
            {
#line 1181 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Term__tmp_copy_6 = parse_tree__prog_io_util__L_9;
#line 1181 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__List0__tmp_copy_7 = parse_tree__prog_io_util__V_19_19;

#line 1181 "prog_io_util.m"
              parse_tree__prog_io_util__List0_7 = parse_tree__prog_io_util__List0__tmp_copy_7;
#line 1181 "prog_io_util.m"
              parse_tree__prog_io_util__Term_6 = parse_tree__prog_io_util__Term__tmp_copy_6;
#line 1181 "prog_io_util.m"
            }
#line 1181 "prog_io_util.m"
            continue;
#line 1180 "prog_io_util.m"
          }
#line 1178 "prog_io_util.m"
        else
#line 1183 "prog_io_util.m"
          {
#line 1183 "prog_io_util.m"
            MR_Word base;
#line 1183 "prog_io_util.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1183 "prog_io_util.m"
            *parse_tree__prog_io_util__OneOrMore_8 = base;
#line 1183 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Term_6));
#line 1183 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__List0_7));
#line 1183 "prog_io_util.m"
          }
#line 1178 "prog_io_util.m"
      }
#line 1178 "prog_io_util.m"
      break;
#line 1178 "prog_io_util.m"
    }
#line 1174 "prog_io_util.m"
}

#line 866 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
#line 866 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Name_4,
#line 866 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Args_5,
#line 866 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__KnownInst_6)
#line 866 "prog_io_util.m"
{
#line 910 "prog_io_util.m"
  {
#line 910 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 910 "prog_io_util.m"
    {
#line 910 "prog_io_util.m"
      MR_Integer parse_tree__prog_io_util__case_num_0 = (MR_Integer) -1;

#line 910 "prog_io_util.m"
#line 910 "prog_io_util.m"
      switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 0)) {
#line 910 "prog_io_util.m"
        case (MR_Integer) 61:
#line 910 "prog_io_util.m"
          if (MR_offset_streq(1, parse_tree__prog_io_util__Name_4, (MR_String) "=<"))
#line 910 "prog_io_util.m"
            parse_tree__prog_io_util__case_num_0 = (MR_Integer) 0;
#line 910 "prog_io_util.m"
          break;
#line 910 "prog_io_util.m"
        case (MR_Integer) 97:
#line 910 "prog_io_util.m"
          if (MR_offset_streq(1, parse_tree__prog_io_util__Name_4, (MR_String) "any"))
#line 910 "prog_io_util.m"
            parse_tree__prog_io_util__case_num_0 = (MR_Integer) 1;
#line 910 "prog_io_util.m"
          break;
#line 910 "prog_io_util.m"
        case (MR_Integer) 98:
#line 910 "prog_io_util.m"
          if (((((((((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 1)) == (MR_Integer) 111)) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 2)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 3)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 4)) == (MR_Integer) 100))))
#line 910 "prog_io_util.m"
#line 910 "prog_io_util.m"
            switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 5)) {
#line 910 "prog_io_util.m"
              case (MR_Integer) 0:
#line 910 "prog_io_util.m"
                parse_tree__prog_io_util__case_num_0 = (MR_Integer) 2;
#line 910 "prog_io_util.m"
                break;
#line 910 "prog_io_util.m"
              case (MR_Integer) 95:
#line 910 "prog_io_util.m"
                if (MR_offset_streq(6, parse_tree__prog_io_util__Name_4, (MR_String) "bound_unique"))
#line 910 "prog_io_util.m"
                  parse_tree__prog_io_util__case_num_0 = (MR_Integer) 3;
#line 910 "prog_io_util.m"
                break;
#line 910 "prog_io_util.m"
            }
#line 910 "prog_io_util.m"
          break;
#line 910 "prog_io_util.m"
        case (MR_Integer) 99:
#line 910 "prog_io_util.m"
          if (((((((((((((((((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 1)) == (MR_Integer) 108)) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 2)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 3)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 4)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 5)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 6)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 7)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 8)) == (MR_Integer) 100))))
#line 910 "prog_io_util.m"
#line 910 "prog_io_util.m"
            switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 9)) {
#line 910 "prog_io_util.m"
              case (MR_Integer) 0:
#line 910 "prog_io_util.m"
                parse_tree__prog_io_util__case_num_0 = (MR_Integer) 4;
#line 910 "prog_io_util.m"
                break;
#line 910 "prog_io_util.m"
              case (MR_Integer) 95:
#line 910 "prog_io_util.m"
                if (MR_offset_streq(10, parse_tree__prog_io_util__Name_4, (MR_String) "clobbered_any"))
#line 910 "prog_io_util.m"
                  parse_tree__prog_io_util__case_num_0 = (MR_Integer) 5;
#line 910 "prog_io_util.m"
                break;
#line 910 "prog_io_util.m"
            }
#line 910 "prog_io_util.m"
          break;
#line 910 "prog_io_util.m"
        case (MR_Integer) 102:
#line 910 "prog_io_util.m"
          if (MR_offset_streq(1, parse_tree__prog_io_util__Name_4, (MR_String) "free"))
#line 910 "prog_io_util.m"
            parse_tree__prog_io_util__case_num_0 = (MR_Integer) 6;
#line 910 "prog_io_util.m"
          break;
#line 910 "prog_io_util.m"
        case (MR_Integer) 103:
#line 910 "prog_io_util.m"
          if (MR_offset_streq(1, parse_tree__prog_io_util__Name_4, (MR_String) "ground"))
#line 910 "prog_io_util.m"
            parse_tree__prog_io_util__case_num_0 = (MR_Integer) 7;
#line 910 "prog_io_util.m"
          break;
#line 910 "prog_io_util.m"
        case (MR_Integer) 105:
#line 910 "prog_io_util.m"
          if (MR_offset_streq(1, parse_tree__prog_io_util__Name_4, (MR_String) "is"))
#line 910 "prog_io_util.m"
            parse_tree__prog_io_util__case_num_0 = (MR_Integer) 8;
#line 910 "prog_io_util.m"
          break;
#line 910 "prog_io_util.m"
        case (MR_Integer) 109:
#line 910 "prog_io_util.m"
          if (((((((((((((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 1)) == (MR_Integer) 111)) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 2)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 3)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 4)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 5)) == (MR_Integer) 121)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 6)) == (MR_Integer) 95))))
#line 910 "prog_io_util.m"
#line 910 "prog_io_util.m"
            switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 7)) {
#line 910 "prog_io_util.m"
              case (MR_Integer) 99:
#line 910 "prog_io_util.m"
                if (((((((((((((((((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 8)) == (MR_Integer) 108)) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 9)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 10)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 11)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 12)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 13)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 14)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 15)) == (MR_Integer) 100))))
#line 910 "prog_io_util.m"
#line 910 "prog_io_util.m"
                  switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 16)) {
#line 910 "prog_io_util.m"
                    case (MR_Integer) 0:
#line 910 "prog_io_util.m"
                      parse_tree__prog_io_util__case_num_0 = (MR_Integer) 9;
#line 910 "prog_io_util.m"
                      break;
#line 910 "prog_io_util.m"
                    case (MR_Integer) 95:
#line 910 "prog_io_util.m"
                      if (MR_offset_streq(17, parse_tree__prog_io_util__Name_4, (MR_String) "mostly_clobbered_any"))
#line 910 "prog_io_util.m"
                        parse_tree__prog_io_util__case_num_0 = (MR_Integer) 10;
#line 910 "prog_io_util.m"
                      break;
#line 910 "prog_io_util.m"
                  }
#line 910 "prog_io_util.m"
                break;
#line 910 "prog_io_util.m"
              case (MR_Integer) 117:
#line 910 "prog_io_util.m"
                if (((((((((((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 8)) == (MR_Integer) 110)) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 9)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 10)) == (MR_Integer) 113)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 11)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 12)) == (MR_Integer) 101))))
#line 910 "prog_io_util.m"
#line 910 "prog_io_util.m"
                  switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 13)) {
#line 910 "prog_io_util.m"
                    case (MR_Integer) 0:
#line 910 "prog_io_util.m"
                      parse_tree__prog_io_util__case_num_0 = (MR_Integer) 11;
#line 910 "prog_io_util.m"
                      break;
#line 910 "prog_io_util.m"
                    case (MR_Integer) 95:
#line 910 "prog_io_util.m"
                      if (MR_offset_streq(14, parse_tree__prog_io_util__Name_4, (MR_String) "mostly_unique_any"))
#line 910 "prog_io_util.m"
                        parse_tree__prog_io_util__case_num_0 = (MR_Integer) 12;
#line 910 "prog_io_util.m"
                      break;
#line 910 "prog_io_util.m"
                  }
#line 910 "prog_io_util.m"
                break;
#line 910 "prog_io_util.m"
            }
#line 910 "prog_io_util.m"
          break;
#line 910 "prog_io_util.m"
        case (MR_Integer) 110:
#line 910 "prog_io_util.m"
          if (MR_offset_streq(1, parse_tree__prog_io_util__Name_4, (MR_String) "not_reached"))
#line 910 "prog_io_util.m"
            parse_tree__prog_io_util__case_num_0 = (MR_Integer) 13;
#line 910 "prog_io_util.m"
          break;
#line 910 "prog_io_util.m"
        case (MR_Integer) 117:
#line 910 "prog_io_util.m"
          if (((((((((((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 1)) == (MR_Integer) 110)) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 2)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 3)) == (MR_Integer) 113)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 4)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 5)) == (MR_Integer) 101))))
#line 910 "prog_io_util.m"
#line 910 "prog_io_util.m"
            switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 6)) {
#line 910 "prog_io_util.m"
              case (MR_Integer) 0:
#line 910 "prog_io_util.m"
                parse_tree__prog_io_util__case_num_0 = (MR_Integer) 14;
#line 910 "prog_io_util.m"
                break;
#line 910 "prog_io_util.m"
              case (MR_Integer) 95:
#line 910 "prog_io_util.m"
                if (MR_offset_streq(7, parse_tree__prog_io_util__Name_4, (MR_String) "unique_any"))
#line 910 "prog_io_util.m"
                  parse_tree__prog_io_util__case_num_0 = (MR_Integer) 15;
#line 910 "prog_io_util.m"
                break;
#line 910 "prog_io_util.m"
            }
#line 910 "prog_io_util.m"
          break;
#line 910 "prog_io_util.m"
      }
#line 910 "prog_io_util.m"
#line 910 "prog_io_util.m"
      switch (parse_tree__prog_io_util__case_num_0) {
#line 910 "prog_io_util.m"
        default:
#line 910 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 910 "prog_io_util.m"
          break;
#line 910 "prog_io_util.m"
        case (MR_Integer) 0:
#line 950 "prog_io_util.m"
          {
#line 950 "prog_io_util.m"
            /* case "=<" */
#line 950 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 954 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 950 "prog_io_util.m"
            else
#line 956 "prog_io_util.m"
              {
#line 956 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 956 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_181_181 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 956 "prog_io_util.m"
                if ((parse_tree__prog_io_util__V_180_180 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 955 "prog_io_util.m"
                  *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 956 "prog_io_util.m"
                else
#line 956 "prog_io_util.m"
                  {
#line 956 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_180_180, (MR_Integer) 1)));
#line 956 "prog_io_util.m"
                    MR_Box parse_tree__prog_io_util__V_193_193 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_180_180, (MR_Integer) 0));

#line 956 "prog_io_util.m"
                    if ((parse_tree__prog_io_util__V_192_192 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 957 "prog_io_util.m"
                      {
#line 957 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_44_44;

#line 958 "prog_io_util.m"
                        {
#line 958 "prog_io_util.m"
                          parse_tree__prog_io_util__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 958 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_44_44, 0) = parse_tree__prog_io_util__V_181_181;
#line 958 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_44_44, 1) = parse_tree__prog_io_util__V_193_193;
#line 958 "prog_io_util.m"
                        }
#line 958 "prog_io_util.m"
                        {
#line 958 "prog_io_util.m"
                          MR_Word base;
#line 958 "prog_io_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 958 "prog_io_util.m"
                          *parse_tree__prog_io_util__KnownInst_6 = base;
#line 958 "prog_io_util.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_44_44));
#line 958 "prog_io_util.m"
                        }
#line 957 "prog_io_util.m"
                      }
#line 956 "prog_io_util.m"
                    else
#line 961 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 956 "prog_io_util.m"
                  }
#line 956 "prog_io_util.m"
              }
#line 950 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 950 "prog_io_util.m"
          }
#line 910 "prog_io_util.m"
          break;
#line 910 "prog_io_util.m"
        case (MR_Integer) 1:
#line 902 "prog_io_util.m"
          {
#line 902 "prog_io_util.m"
            /* case "any" */
#line 906 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 904 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[19]);
#line 906 "prog_io_util.m"
            else
#line 908 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 902 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 902 "prog_io_util.m"
          }
#line 910 "prog_io_util.m"
          break;
#line 910 "prog_io_util.m"
        case (MR_Integer) 2:
#line 964 "prog_io_util.m"
          {
#line 964 "prog_io_util.m"
            /* case "bound" */
#line 964 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 966 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 964 "prog_io_util.m"
            else
#line 968 "prog_io_util.m"
              {
#line 968 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 968 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_183_183 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 968 "prog_io_util.m"
                if ((parse_tree__prog_io_util__V_182_182 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 969 "prog_io_util.m"
                  {
#line 969 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_39_39;

#line 970 "prog_io_util.m"
                    {
#line 970 "prog_io_util.m"
                      parse_tree__prog_io_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 970 "prog_io_util.m"
                      MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__V_39_39, 0) = parse_tree__prog_io_util__V_183_183;
#line 970 "prog_io_util.m"
                    }
#line 970 "prog_io_util.m"
                    {
#line 970 "prog_io_util.m"
                      MR_Word base;
#line 970 "prog_io_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 970 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownInst_6 = base;
#line 970 "prog_io_util.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_39_39));
#line 970 "prog_io_util.m"
                    }
#line 969 "prog_io_util.m"
                  }
#line 968 "prog_io_util.m"
                else
#line 973 "prog_io_util.m"
                  *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 968 "prog_io_util.m"
              }
#line 964 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 964 "prog_io_util.m"
          }
#line 910 "prog_io_util.m"
          break;
#line 910 "prog_io_util.m"
        case (MR_Integer) 3:
#line 976 "prog_io_util.m"
          {
#line 976 "prog_io_util.m"
            /* case "bound_unique" */
#line 976 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 980 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 976 "prog_io_util.m"
            else
#line 982 "prog_io_util.m"
              {
#line 982 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 982 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_185_185 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 982 "prog_io_util.m"
                if ((parse_tree__prog_io_util__V_184_184 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 983 "prog_io_util.m"
                  {
#line 983 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_36_36;

#line 984 "prog_io_util.m"
                    {
#line 984 "prog_io_util.m"
                      parse_tree__prog_io_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 984 "prog_io_util.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 984 "prog_io_util.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_36_36, 1) = parse_tree__prog_io_util__V_185_185;
#line 984 "prog_io_util.m"
                    }
#line 984 "prog_io_util.m"
                    {
#line 984 "prog_io_util.m"
                      MR_Word base;
#line 984 "prog_io_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 984 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownInst_6 = base;
#line 984 "prog_io_util.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 984 "prog_io_util.m"
                    }
#line 983 "prog_io_util.m"
                  }
#line 982 "prog_io_util.m"
                else
#line 987 "prog_io_util.m"
                  *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 982 "prog_io_util.m"
              }
#line 976 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 976 "prog_io_util.m"
          }
#line 910 "prog_io_util.m"
          break;
#line 910 "prog_io_util.m"
        case (MR_Integer) 4:
#line 902 "prog_io_util.m"
          {
#line 902 "prog_io_util.m"
            /* case "clobbered" */
#line 906 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 904 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[20]);
#line 906 "prog_io_util.m"
            else
#line 908 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 902 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 902 "prog_io_util.m"
          }
#line 910 "prog_io_util.m"
          break;
#line 910 "prog_io_util.m"
        case (MR_Integer) 5:
#line 902 "prog_io_util.m"
          {
#line 902 "prog_io_util.m"
            /* case "clobbered_any" */
#line 906 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 904 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[21]);
#line 906 "prog_io_util.m"
            else
#line 908 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 902 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 902 "prog_io_util.m"
          }
#line 910 "prog_io_util.m"
          break;
#line 910 "prog_io_util.m"
        case (MR_Integer) 6:
#line 902 "prog_io_util.m"
          {
#line 902 "prog_io_util.m"
            /* case "free" */
#line 906 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 904 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[22]);
#line 906 "prog_io_util.m"
            else
#line 908 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 902 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 902 "prog_io_util.m"
          }
#line 910 "prog_io_util.m"
          break;
#line 910 "prog_io_util.m"
        case (MR_Integer) 7:
#line 902 "prog_io_util.m"
          {
#line 902 "prog_io_util.m"
            /* case "ground" */
#line 906 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 904 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[23]);
#line 906 "prog_io_util.m"
            else
#line 908 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 902 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 902 "prog_io_util.m"
          }
#line 910 "prog_io_util.m"
          break;
#line 910 "prog_io_util.m"
        case (MR_Integer) 8:
#line 936 "prog_io_util.m"
          {
#line 936 "prog_io_util.m"
            /* case "is" */
#line 936 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 940 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 936 "prog_io_util.m"
            else
#line 942 "prog_io_util.m"
              {
#line 942 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 942 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_187_187 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 942 "prog_io_util.m"
                if ((parse_tree__prog_io_util__V_186_186 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 941 "prog_io_util.m"
                  *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 942 "prog_io_util.m"
                else
#line 942 "prog_io_util.m"
                  {
#line 942 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_186_186, (MR_Integer) 1)));
#line 942 "prog_io_util.m"
                    MR_Box parse_tree__prog_io_util__V_195_195 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_186_186, (MR_Integer) 0));

#line 942 "prog_io_util.m"
                    if ((parse_tree__prog_io_util__V_194_194 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 943 "prog_io_util.m"
                      {
#line 943 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_50_50;

#line 944 "prog_io_util.m"
                        {
#line 944 "prog_io_util.m"
                          parse_tree__prog_io_util__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 944 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_50_50, 0) = parse_tree__prog_io_util__V_187_187;
#line 944 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_50_50, 1) = parse_tree__prog_io_util__V_195_195;
#line 944 "prog_io_util.m"
                        }
#line 944 "prog_io_util.m"
                        {
#line 944 "prog_io_util.m"
                          MR_Word base;
#line 944 "prog_io_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 944 "prog_io_util.m"
                          *parse_tree__prog_io_util__KnownInst_6 = base;
#line 944 "prog_io_util.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_50_50));
#line 944 "prog_io_util.m"
                        }
#line 943 "prog_io_util.m"
                      }
#line 942 "prog_io_util.m"
                    else
#line 947 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 942 "prog_io_util.m"
                  }
#line 942 "prog_io_util.m"
              }
#line 936 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 936 "prog_io_util.m"
          }
#line 910 "prog_io_util.m"
          break;
#line 910 "prog_io_util.m"
        case (MR_Integer) 9:
#line 902 "prog_io_util.m"
          {
#line 902 "prog_io_util.m"
            /* case "mostly_clobbered" */
#line 906 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 904 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[24]);
#line 906 "prog_io_util.m"
            else
#line 908 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 902 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 902 "prog_io_util.m"
          }
#line 910 "prog_io_util.m"
          break;
#line 910 "prog_io_util.m"
        case (MR_Integer) 10:
#line 902 "prog_io_util.m"
          {
#line 902 "prog_io_util.m"
            /* case "mostly_clobbered_any" */
#line 906 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 904 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[25]);
#line 906 "prog_io_util.m"
            else
#line 908 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 902 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 902 "prog_io_util.m"
          }
#line 910 "prog_io_util.m"
          break;
#line 910 "prog_io_util.m"
        case (MR_Integer) 11:
#line 923 "prog_io_util.m"
          {
#line 923 "prog_io_util.m"
            /* case "mostly_unique" */
#line 923 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 925 "prog_io_util.m"
              {
#line 926 "prog_io_util.m"
                *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[26]);
#line 925 "prog_io_util.m"
              }
#line 923 "prog_io_util.m"
            else
#line 928 "prog_io_util.m"
              {
#line 928 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 928 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_189_189 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 928 "prog_io_util.m"
                if ((parse_tree__prog_io_util__V_188_188 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 929 "prog_io_util.m"
                  {
#line 929 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_54_54;

#line 930 "prog_io_util.m"
                    {
#line 930 "prog_io_util.m"
                      parse_tree__prog_io_util__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 930 "prog_io_util.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 930 "prog_io_util.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_54_54, 1) = parse_tree__prog_io_util__V_189_189;
#line 930 "prog_io_util.m"
                    }
#line 930 "prog_io_util.m"
                    {
#line 930 "prog_io_util.m"
                      MR_Word base;
#line 930 "prog_io_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 930 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownInst_6 = base;
#line 930 "prog_io_util.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_54_54));
#line 930 "prog_io_util.m"
                    }
#line 929 "prog_io_util.m"
                  }
#line 928 "prog_io_util.m"
                else
#line 933 "prog_io_util.m"
                  *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 928 "prog_io_util.m"
              }
#line 923 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 923 "prog_io_util.m"
          }
#line 910 "prog_io_util.m"
          break;
#line 910 "prog_io_util.m"
        case (MR_Integer) 12:
#line 902 "prog_io_util.m"
          {
#line 902 "prog_io_util.m"
            /* case "mostly_unique_any" */
#line 906 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 904 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[27]);
#line 906 "prog_io_util.m"
            else
#line 908 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 902 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 902 "prog_io_util.m"
          }
#line 910 "prog_io_util.m"
          break;
#line 910 "prog_io_util.m"
        case (MR_Integer) 13:
#line 902 "prog_io_util.m"
          {
#line 902 "prog_io_util.m"
            /* case "not_reached" */
#line 906 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 904 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[28]);
#line 906 "prog_io_util.m"
            else
#line 908 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 902 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 902 "prog_io_util.m"
          }
#line 910 "prog_io_util.m"
          break;
#line 910 "prog_io_util.m"
        case (MR_Integer) 14:
#line 911 "prog_io_util.m"
          {
#line 911 "prog_io_util.m"
            /* case "unique" */
#line 911 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 913 "prog_io_util.m"
              {
#line 914 "prog_io_util.m"
                *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[29]);
#line 913 "prog_io_util.m"
              }
#line 911 "prog_io_util.m"
            else
#line 915 "prog_io_util.m"
              {
#line 915 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 915 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_191_191 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 915 "prog_io_util.m"
                if ((parse_tree__prog_io_util__V_190_190 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 916 "prog_io_util.m"
                  {
#line 916 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_60_60;

#line 917 "prog_io_util.m"
                    {
#line 917 "prog_io_util.m"
                      parse_tree__prog_io_util__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 917 "prog_io_util.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 917 "prog_io_util.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_60_60, 1) = parse_tree__prog_io_util__V_191_191;
#line 917 "prog_io_util.m"
                    }
#line 917 "prog_io_util.m"
                    {
#line 917 "prog_io_util.m"
                      MR_Word base;
#line 917 "prog_io_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 917 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownInst_6 = base;
#line 917 "prog_io_util.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_60_60));
#line 917 "prog_io_util.m"
                    }
#line 916 "prog_io_util.m"
                  }
#line 915 "prog_io_util.m"
                else
#line 920 "prog_io_util.m"
                  *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 915 "prog_io_util.m"
              }
#line 911 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 911 "prog_io_util.m"
          }
#line 910 "prog_io_util.m"
          break;
#line 910 "prog_io_util.m"
        case (MR_Integer) 15:
#line 902 "prog_io_util.m"
          {
#line 902 "prog_io_util.m"
            /* case "unique_any" */
#line 906 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 904 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[30]);
#line 906 "prog_io_util.m"
            else
#line 908 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 902 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 902 "prog_io_util.m"
          }
#line 910 "prog_io_util.m"
          break;
#line 910 "prog_io_util.m"
      }
#line 910 "prog_io_util.m"
    }
#line 910 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 910 "prog_io_util.m"
  }
#line 866 "prog_io_util.m"
}

#line 435 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_116_121_112_101_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
#line 435 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Name_4,
#line 435 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Args_5,
#line 435 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__KnownType_6)
#line 435 "prog_io_util.m"
{
#line 467 "prog_io_util.m"
  {
#line 467 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 467 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__slot_0;
#line 467 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__str_1;

#line 467 "prog_io_util.m"
    /* hashed string jump switch */
#line 467 "prog_io_util.m"
    /* compute the hash value of the input string */
#line 467 "prog_io_util.m"
    parse_tree__prog_io_util__slot_0 = ((MR_hash_string6(parse_tree__prog_io_util__Name_4)) & (MR_Integer) 31);
#line 467 "prog_io_util.m"
    /* hash chain loop */
#line 467 "prog_io_util.m"
    do
#line 467 "prog_io_util.m"
      {
#line 467 "prog_io_util.m"
        /* lookup the string for this hash slot */
#line 467 "prog_io_util.m"
        parse_tree__prog_io_util__str_1 = ((&parse_tree__prog_io_util_vector_common_7[0 + parse_tree__prog_io_util__slot_0]))->parse_tree__prog_io_util__vector_common_type_7_0__vct_7_f_0;
#line 467 "prog_io_util.m"
        /* did we find a match? */
#line 467 "prog_io_util.m"
        if ((((parse_tree__prog_io_util__str_1 != NULL)) && ((strcmp(parse_tree__prog_io_util__str_1, parse_tree__prog_io_util__Name_4) == 0))))
#line 467 "prog_io_util.m"
          {
#line 467 "prog_io_util.m"
            /* we found a match; dispatch to the corresponding code */
#line 467 "prog_io_util.m"
#line 467 "prog_io_util.m"
            switch (parse_tree__prog_io_util__slot_0) {
#line 467 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 467 "prog_io_util.m"
              case (MR_Integer) 0:
#line 506 "prog_io_util.m"
                {
#line 506 "prog_io_util.m"
                  /* case "" */
#line 506 "prog_io_util.m"
                  {
#line 506 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_21_21;

#line 507 "prog_io_util.m"
                    {
#line 507 "prog_io_util.m"
                      parse_tree__prog_io_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 507 "prog_io_util.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 507 "prog_io_util.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_21_21, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_5));
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
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_21_21));
#line 507 "prog_io_util.m"
                    }
#line 506 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 506 "prog_io_util.m"
                  }
#line 506 "prog_io_util.m"
                }
#line 467 "prog_io_util.m"
                break;
#line 467 "prog_io_util.m"
              case (MR_Integer) 1:
#line 459 "prog_io_util.m"
                {
#line 459 "prog_io_util.m"
                  /* case "string" */
#line 463 "prog_io_util.m"
                  if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 461 "prog_io_util.m"
                    {
#line 462 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[18]);
#line 461 "prog_io_util.m"
                    }
#line 463 "prog_io_util.m"
                  else
#line 465 "prog_io_util.m"
                    *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 459 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 459 "prog_io_util.m"
                }
#line 467 "prog_io_util.m"
                break;
#line 467 "prog_io_util.m"
              case (MR_Integer) 2:
#line 495 "prog_io_util.m"
                {
#line 495 "prog_io_util.m"
                  /* case "semipure" */
#line 501 "prog_io_util.m"
                  if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 499 "prog_io_util.m"
                    *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 501 "prog_io_util.m"
                  else
#line 501 "prog_io_util.m"
                    {
#line 501 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 501 "prog_io_util.m"
                      MR_Box parse_tree__prog_io_util__V_145_145 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 501 "prog_io_util.m"
                      if ((parse_tree__prog_io_util__V_144_144 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 502 "prog_io_util.m"
                        {
#line 502 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_95_95;

#line 503 "prog_io_util.m"
                          {
#line 503 "prog_io_util.m"
                            parse_tree__prog_io_util__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 503 "prog_io_util.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 503 "prog_io_util.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_95_95, 1) = ((MR_Box) ((MR_Integer) 1));
#line 503 "prog_io_util.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_95_95, 2) = parse_tree__prog_io_util__V_145_145;
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
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_95_95));
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
#line 495 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 495 "prog_io_util.m"
                }
#line 467 "prog_io_util.m"
                break;
#line 467 "prog_io_util.m"
              case (MR_Integer) 3:
#line 459 "prog_io_util.m"
                {
#line 459 "prog_io_util.m"
                  /* case "float" */
#line 463 "prog_io_util.m"
                  if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 461 "prog_io_util.m"
                    {
#line 462 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[14]);
#line 461 "prog_io_util.m"
                    }
#line 463 "prog_io_util.m"
                  else
#line 465 "prog_io_util.m"
                    *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 459 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 459 "prog_io_util.m"
                }
#line 467 "prog_io_util.m"
                break;
#line 467 "prog_io_util.m"
              case (MR_Integer) 4:
#line 459 "prog_io_util.m"
                {
#line 459 "prog_io_util.m"
                  /* case "character" */
#line 463 "prog_io_util.m"
                  if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 461 "prog_io_util.m"
                    {
#line 462 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[12]);
#line 461 "prog_io_util.m"
                    }
#line 463 "prog_io_util.m"
                  else
#line 465 "prog_io_util.m"
                    *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 459 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 459 "prog_io_util.m"
                }
#line 467 "prog_io_util.m"
                break;
#line 467 "prog_io_util.m"
              case (MR_Integer) 5:
#line 495 "prog_io_util.m"
                {
#line 495 "prog_io_util.m"
                  /* case "impure" */
#line 501 "prog_io_util.m"
                  if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 499 "prog_io_util.m"
                    *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 501 "prog_io_util.m"
                  else
#line 501 "prog_io_util.m"
                    {
#line 501 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 501 "prog_io_util.m"
                      MR_Box parse_tree__prog_io_util__V_141_141 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 501 "prog_io_util.m"
                      if ((parse_tree__prog_io_util__V_140_140 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 502 "prog_io_util.m"
                        {
#line 502 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_23_23;

#line 503 "prog_io_util.m"
                          {
#line 503 "prog_io_util.m"
                            parse_tree__prog_io_util__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 503 "prog_io_util.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 503 "prog_io_util.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_23_23, 1) = ((MR_Box) ((MR_Integer) 2));
#line 503 "prog_io_util.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_23_23, 2) = parse_tree__prog_io_util__V_141_141;
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
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_23_23));
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
#line 495 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 495 "prog_io_util.m"
                }
#line 467 "prog_io_util.m"
                break;
#line 467 "prog_io_util.m"
              case (MR_Integer) 8:
#line 459 "prog_io_util.m"
                {
#line 459 "prog_io_util.m"
                  /* case "int" */
#line 463 "prog_io_util.m"
                  if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 461 "prog_io_util.m"
                    {
#line 462 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[16]);
#line 461 "prog_io_util.m"
                    }
#line 463 "prog_io_util.m"
                  else
#line 465 "prog_io_util.m"
                    *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 459 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 459 "prog_io_util.m"
                }
#line 467 "prog_io_util.m"
                break;
#line 467 "prog_io_util.m"
              case (MR_Integer) 10:
#line 468 "prog_io_util.m"
                {
#line 468 "prog_io_util.m"
                  /* case "{}" */
#line 468 "prog_io_util.m"
                  {
#line 468 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_32_32;

#line 469 "prog_io_util.m"
                    {
#line 469 "prog_io_util.m"
                      parse_tree__prog_io_util__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 469 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io_util__Args_5));
#line 469 "prog_io_util.m"
                    }
#line 469 "prog_io_util.m"
                    {
#line 469 "prog_io_util.m"
                      MR_Word base;
#line 469 "prog_io_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 469 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownType_6 = base;
#line 469 "prog_io_util.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_32_32));
#line 469 "prog_io_util.m"
                    }
#line 468 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 468 "prog_io_util.m"
                  }
#line 468 "prog_io_util.m"
                }
#line 467 "prog_io_util.m"
                break;
#line 467 "prog_io_util.m"
              case (MR_Integer) 24:
#line 495 "prog_io_util.m"
                {
#line 495 "prog_io_util.m"
                  /* case "pure" */
#line 501 "prog_io_util.m"
                  if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 499 "prog_io_util.m"
                    *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 501 "prog_io_util.m"
                  else
#line 501 "prog_io_util.m"
                    {
#line 501 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 501 "prog_io_util.m"
                      MR_Box parse_tree__prog_io_util__V_143_143 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 501 "prog_io_util.m"
                      if ((parse_tree__prog_io_util__V_142_142 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 502 "prog_io_util.m"
                        {
#line 502 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_63_63;

#line 503 "prog_io_util.m"
                          {
#line 503 "prog_io_util.m"
                            parse_tree__prog_io_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 503 "prog_io_util.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 503 "prog_io_util.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_63_63, 1) = ((MR_Box) ((MR_Integer) 0));
#line 503 "prog_io_util.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_63_63, 2) = parse_tree__prog_io_util__V_143_143;
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
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_63_63));
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
#line 495 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 495 "prog_io_util.m"
                }
#line 467 "prog_io_util.m"
                break;
#line 467 "prog_io_util.m"
              case (MR_Integer) 28:
#line 471 "prog_io_util.m"
                {
#line 471 "prog_io_util.m"
                  /* case "=" */
#line 471 "prog_io_util.m"
                  if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 476 "prog_io_util.m"
                    *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 471 "prog_io_util.m"
                  else
#line 478 "prog_io_util.m"
                    {
#line 478 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 478 "prog_io_util.m"
                      MR_Box parse_tree__prog_io_util__V_139_139 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 478 "prog_io_util.m"
                      if ((parse_tree__prog_io_util__V_138_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 477 "prog_io_util.m"
                        *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 478 "prog_io_util.m"
                      else
#line 478 "prog_io_util.m"
                        {
#line 478 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_138_138, (MR_Integer) 1)));
#line 478 "prog_io_util.m"
                          MR_Box parse_tree__prog_io_util__V_147_147 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_138_138, (MR_Integer) 0));

#line 478 "prog_io_util.m"
                          if ((parse_tree__prog_io_util__V_146_146 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 479 "prog_io_util.m"
                            {
#line 479 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__V_28_28;

#line 480 "prog_io_util.m"
                              {
#line 480 "prog_io_util.m"
                                parse_tree__prog_io_util__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 480 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_28_28, 0) = parse_tree__prog_io_util__V_139_139;
#line 480 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_28_28, 1) = parse_tree__prog_io_util__V_147_147;
#line 480 "prog_io_util.m"
                              }
#line 480 "prog_io_util.m"
                              {
#line 480 "prog_io_util.m"
                                MR_Word base;
#line 480 "prog_io_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 480 "prog_io_util.m"
                                *parse_tree__prog_io_util__KnownType_6 = base;
#line 480 "prog_io_util.m"
                                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_28_28));
#line 480 "prog_io_util.m"
                              }
#line 479 "prog_io_util.m"
                            }
#line 478 "prog_io_util.m"
                          else
#line 477 "prog_io_util.m"
                            *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 478 "prog_io_util.m"
                        }
#line 478 "prog_io_util.m"
                    }
#line 471 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 471 "prog_io_util.m"
                }
#line 467 "prog_io_util.m"
                break;
#line 467 "prog_io_util.m"
              case (MR_Integer) 31:
#line 483 "prog_io_util.m"
                {
#line 483 "prog_io_util.m"
                  /* case "pred" */
#line 483 "prog_io_util.m"
                  {
#line 483 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_25_25;

#line 484 "prog_io_util.m"
                    {
#line 484 "prog_io_util.m"
                      parse_tree__prog_io_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 484 "prog_io_util.m"
                      MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_util__Args_5));
#line 484 "prog_io_util.m"
                    }
#line 484 "prog_io_util.m"
                    {
#line 484 "prog_io_util.m"
                      MR_Word base;
#line 484 "prog_io_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 484 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownType_6 = base;
#line 484 "prog_io_util.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_25_25));
#line 484 "prog_io_util.m"
                    }
#line 483 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 483 "prog_io_util.m"
                  }
#line 483 "prog_io_util.m"
                }
#line 467 "prog_io_util.m"
                break;
#line 467 "prog_io_util.m"
            }
#line 467 "prog_io_util.m"
            /* jump out of search loop */
#line 467 "prog_io_util.m"
            goto label_0;
#line 467 "prog_io_util.m"
          }
#line 467 "prog_io_util.m"
        else
#line 467 "prog_io_util.m"
          {
#line 467 "prog_io_util.m"
            /* no match yet, so get next slot in hash chain */
#line 467 "prog_io_util.m"
            parse_tree__prog_io_util__slot_0 = ((&parse_tree__prog_io_util_vector_common_7[0 + parse_tree__prog_io_util__slot_0]))->parse_tree__prog_io_util__vector_common_type_7_0__vct_7_f_1;
#line 467 "prog_io_util.m"
          }
#line 467 "prog_io_util.m"
      }
#line 467 "prog_io_util.m"
    while ((parse_tree__prog_io_util__slot_0 >= (MR_Integer) 0));
#line 467 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 467 "prog_io_util.m"
  label_0:;
#line 467 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 467 "prog_io_util.m"
  }
#line 435 "prog_io_util.m"
}

#line 53 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____var2tvar_0_0(
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
    }
#line 53 "prog_io_util.m"
  }
#line 53 "prog_io_util.m"
}

#line 53 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2tvar_0_0(
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
      parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_2[2], ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar2_4)));
    }
#line 53 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 53 "prog_io_util.m"
  }
#line 53 "prog_io_util.m"
}

#line 54 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____var2pvar_0_0(
#line 54 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 54 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 54 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 54 "prog_io_util.m"
{
#line 54 "prog_io_util.m"
  {
#line 54 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 54 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_4 = parse_tree__prog_io_util__HeadVar__2_2;
#line 54 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_5 = parse_tree__prog_io_util__HeadVar__3_3;

#line 54 "prog_io_util.m"
    {
#line 54 "prog_io_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_2[1], parse_tree__prog_io_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar2_5)));
    }
#line 54 "prog_io_util.m"
  }
#line 54 "prog_io_util.m"
}

#line 54 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2pvar_0_0(
#line 54 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 54 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 54 "prog_io_util.m"
{
#line 54 "prog_io_util.m"
  {
#line 54 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 54 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_3 = parse_tree__prog_io_util__HeadVar__1_1;
#line 54 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_4 = parse_tree__prog_io_util__HeadVar__2_2;

#line 54 "prog_io_util.m"
    {
#line 54 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_2[1], ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar2_4)));
    }
#line 54 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 54 "prog_io_util.m"
  }
#line 54 "prog_io_util.m"
}

#line 56 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____parser_1_0(
#line 56 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_6,
#line 56 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 56 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 56 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 56 "prog_io_util.m"
{
#line 56 "prog_io_util.m"
  {
#line 56 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 56 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_4 = parse_tree__prog_io_util__HeadVar__2_2;
#line 56 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_5 = parse_tree__prog_io_util__HeadVar__3_3;

#line 56 "prog_io_util.m"
    {
#line 56 "prog_io_util.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__prog_io_util__HeadVar__1_1, (MR_Word) parse_tree__prog_io_util__Cast_HeadVar1_4, (MR_Word) parse_tree__prog_io_util__Cast_HeadVar2_5);
    }
#line 56 "prog_io_util.m"
  }
#line 56 "prog_io_util.m"
}

#line 56 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____parser_1_0(
#line 56 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_5,
#line 56 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 56 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 56 "prog_io_util.m"
{
#line 56 "prog_io_util.m"
  {
#line 56 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 56 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_3 = parse_tree__prog_io_util__HeadVar__1_1;
#line 56 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_4 = parse_tree__prog_io_util__HeadVar__2_2;

#line 56 "prog_io_util.m"
    {
#line 56 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__prog_io_util__Cast_HeadVar1_3, (MR_Word) parse_tree__prog_io_util__Cast_HeadVar2_4);
    }
#line 56 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 56 "prog_io_util.m"
  }
#line 56 "prog_io_util.m"
}

#line 1321 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_var_1_0(
#line 1321 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_14,
#line 1321 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 1321 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 1321 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 1321 "prog_io_util.m"
{
#line 1321 "prog_io_util.m"
  {
#line 1321 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1321 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_12 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 1321 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_13 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 1321 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_12 == parse_tree__prog_io_util__CastY_13);
#line 1321 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 5502 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1321 "prog_io_util.m"
    else
#line 1321 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1321 "prog_io_util.m"
      {
#line 1321 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1321 "prog_io_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1321 "prog_io_util.m"
          {
#line 1321 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1321 "prog_io_util.m"
            {
#line 1321 "prog_io_util.m"
              mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_14, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_19_19, parse_tree__prog_io_util__V_5_5);
            }
#line 1321 "prog_io_util.m"
          }
#line 1321 "prog_io_util.m"
        else
#line 5529 "parse_tree.prog_io_util.c"
          *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1321 "prog_io_util.m"
      }
#line 1321 "prog_io_util.m"
    else
#line 1321 "prog_io_util.m"
      {
#line 1321 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1321 "prog_io_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5542 "parse_tree.prog_io_util.c"
          *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1321 "prog_io_util.m"
        else
#line 1321 "prog_io_util.m"
          {
#line 1321 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1321 "prog_io_util.m"
            {
#line 1321 "prog_io_util.m"
              mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_14, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_20_20, parse_tree__prog_io_util__V_11_11);
            }
#line 1321 "prog_io_util.m"
          }
#line 1321 "prog_io_util.m"
      }
#line 1321 "prog_io_util.m"
  }
#line 1321 "prog_io_util.m"
}

#line 1321 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_var_1_0(
#line 1321 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
#line 1321 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 1321 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 1321 "prog_io_util.m"
{
#line 1321 "prog_io_util.m"
  {
#line 1321 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1321 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_7 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 1321 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_8 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 1321 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_7 == parse_tree__prog_io_util__CastY_8);
#line 1321 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1321 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1321 "prog_io_util.m"
    else
#line 1321 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1321 "prog_io_util.m"
      {
#line 1321 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1321 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_4_4;

#line 1321 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1321 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1321 "prog_io_util.m"
          {
#line 1321 "prog_io_util.m"
            parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5610 "parse_tree.prog_io_util.c"
            {
#line 5612 "parse_tree.prog_io_util.c"
              parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_9, parse_tree__prog_io_util__V_3_3, parse_tree__prog_io_util__V_4_4);
            }
#line 1321 "prog_io_util.m"
          }
#line 1321 "prog_io_util.m"
      }
#line 1321 "prog_io_util.m"
    else
#line 1321 "prog_io_util.m"
      {
#line 1321 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1321 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_6_6;

#line 1321 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1321 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1321 "prog_io_util.m"
          {
#line 1321 "prog_io_util.m"
            parse_tree__prog_io_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5636 "parse_tree.prog_io_util.c"
            {
#line 5638 "parse_tree.prog_io_util.c"
              parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_9, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_6_6);
            }
#line 1321 "prog_io_util.m"
          }
#line 1321 "prog_io_util.m"
      }
#line 1321 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1321 "prog_io_util.m"
  }
#line 1321 "prog_io_util.m"
}

#line 1382 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0(
#line 1382 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_38,
#line 1382 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 1382 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 1382 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 1382 "prog_io_util.m"
{
#line 1382 "prog_io_util.m"
  {
#line 1382 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1382 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_36 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 1382 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_37 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 1382 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_36 == parse_tree__prog_io_util__CastY_37);
#line 1382 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 5678 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1382 "prog_io_util.m"
    else
#line 1382 "prog_io_util.m"
#line 1382 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) {
#line 1382 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1382 "prog_io_util.m"
        case (MR_Integer) 0:
#line 1382 "prog_io_util.m"
          {
#line 1382 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1382 "prog_io_util.m"
#line 1382 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 1382 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1382 "prog_io_util.m"
              case (MR_Integer) 0:
#line 1382 "prog_io_util.m"
                {
#line 1382 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1382 "prog_io_util.m"
                  {
#line 1382 "prog_io_util.m"
                    mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_38, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_49_49, parse_tree__prog_io_util__V_5_5);
                  }
#line 1382 "prog_io_util.m"
                }
#line 1382 "prog_io_util.m"
                break;
#line 1382 "prog_io_util.m"
              case (MR_Integer) 1:
#line 5717 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1382 "prog_io_util.m"
                break;
#line 1382 "prog_io_util.m"
              case (MR_Integer) 2:
#line 5723 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1382 "prog_io_util.m"
                break;
#line 1382 "prog_io_util.m"
              case (MR_Integer) 3:
#line 5729 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1382 "prog_io_util.m"
                break;
#line 1382 "prog_io_util.m"
            }
#line 1382 "prog_io_util.m"
          }
#line 1382 "prog_io_util.m"
          break;
#line 1382 "prog_io_util.m"
        case (MR_Integer) 1:
#line 1382 "prog_io_util.m"
          {
#line 1382 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1382 "prog_io_util.m"
#line 1382 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 1382 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1382 "prog_io_util.m"
              case (MR_Integer) 0:
#line 5753 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1382 "prog_io_util.m"
                break;
#line 1382 "prog_io_util.m"
              case (MR_Integer) 1:
#line 1382 "prog_io_util.m"
                {
#line 1382 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1382 "prog_io_util.m"
                  {
#line 1382 "prog_io_util.m"
                    mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_38, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_50_50, parse_tree__prog_io_util__V_15_15);
                  }
#line 1382 "prog_io_util.m"
                }
#line 1382 "prog_io_util.m"
                break;
#line 1382 "prog_io_util.m"
              case (MR_Integer) 2:
#line 5775 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1382 "prog_io_util.m"
                break;
#line 1382 "prog_io_util.m"
              case (MR_Integer) 3:
#line 5781 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1382 "prog_io_util.m"
                break;
#line 1382 "prog_io_util.m"
            }
#line 1382 "prog_io_util.m"
          }
#line 1382 "prog_io_util.m"
          break;
#line 1382 "prog_io_util.m"
        case (MR_Integer) 2:
#line 1382 "prog_io_util.m"
          {
#line 1382 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1382 "prog_io_util.m"
#line 1382 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 1382 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1382 "prog_io_util.m"
              case (MR_Integer) 0:
#line 5805 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1382 "prog_io_util.m"
                break;
#line 1382 "prog_io_util.m"
              case (MR_Integer) 1:
#line 5811 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1382 "prog_io_util.m"
                break;
#line 1382 "prog_io_util.m"
              case (MR_Integer) 2:
#line 1382 "prog_io_util.m"
                {
#line 1382 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1382 "prog_io_util.m"
                  {
#line 1382 "prog_io_util.m"
                    mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_38, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_48_48, parse_tree__prog_io_util__V_25_25);
                  }
#line 1382 "prog_io_util.m"
                }
#line 1382 "prog_io_util.m"
                break;
#line 1382 "prog_io_util.m"
              case (MR_Integer) 3:
#line 5833 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1382 "prog_io_util.m"
                break;
#line 1382 "prog_io_util.m"
            }
#line 1382 "prog_io_util.m"
          }
#line 1382 "prog_io_util.m"
          break;
#line 1382 "prog_io_util.m"
        case (MR_Integer) 3:
#line 1382 "prog_io_util.m"
          {
#line 1382 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1382 "prog_io_util.m"
#line 1382 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 1382 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1382 "prog_io_util.m"
              case (MR_Integer) 0:
#line 5857 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1382 "prog_io_util.m"
                break;
#line 1382 "prog_io_util.m"
              case (MR_Integer) 1:
#line 5863 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1382 "prog_io_util.m"
                break;
#line 1382 "prog_io_util.m"
              case (MR_Integer) 2:
#line 5869 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1382 "prog_io_util.m"
                break;
#line 1382 "prog_io_util.m"
              case (MR_Integer) 3:
#line 1382 "prog_io_util.m"
                {
#line 1382 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1382 "prog_io_util.m"
                  {
#line 1382 "prog_io_util.m"
                    mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_38, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_47_47, parse_tree__prog_io_util__V_35_35);
                  }
#line 1382 "prog_io_util.m"
                }
#line 1382 "prog_io_util.m"
                break;
#line 1382 "prog_io_util.m"
            }
#line 1382 "prog_io_util.m"
          }
#line 1382 "prog_io_util.m"
          break;
#line 1382 "prog_io_util.m"
      }
#line 1382 "prog_io_util.m"
  }
#line 1382 "prog_io_util.m"
}

#line 1382 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0(
#line 1382 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_13,
#line 1382 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 1382 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 1382 "prog_io_util.m"
{
#line 1382 "prog_io_util.m"
  {
#line 1382 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1382 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_11 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 1382 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_12 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 1382 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_11 == parse_tree__prog_io_util__CastY_12);
#line 1382 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1382 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1382 "prog_io_util.m"
    else
#line 1382 "prog_io_util.m"
#line 1382 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) {
#line 1382 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1382 "prog_io_util.m"
        case (MR_Integer) 0:
#line 1382 "prog_io_util.m"
          {
#line 1382 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1382 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_4_4;

#line 1382 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1382 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1382 "prog_io_util.m"
              {
#line 1382 "prog_io_util.m"
                parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5952 "parse_tree.prog_io_util.c"
                {
#line 5954 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_13, parse_tree__prog_io_util__V_3_3, parse_tree__prog_io_util__V_4_4);
                }
#line 1382 "prog_io_util.m"
              }
#line 1382 "prog_io_util.m"
          }
#line 1382 "prog_io_util.m"
          break;
#line 1382 "prog_io_util.m"
        case (MR_Integer) 1:
#line 1382 "prog_io_util.m"
          {
#line 1382 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1382 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_6_6;

#line 1382 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1382 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1382 "prog_io_util.m"
              {
#line 1382 "prog_io_util.m"
                parse_tree__prog_io_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5980 "parse_tree.prog_io_util.c"
                {
#line 5982 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_13, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_6_6);
                }
#line 1382 "prog_io_util.m"
              }
#line 1382 "prog_io_util.m"
          }
#line 1382 "prog_io_util.m"
          break;
#line 1382 "prog_io_util.m"
        case (MR_Integer) 2:
#line 1382 "prog_io_util.m"
          {
#line 1382 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1382 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_8_8;

#line 1382 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1382 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1382 "prog_io_util.m"
              {
#line 1382 "prog_io_util.m"
                parse_tree__prog_io_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6008 "parse_tree.prog_io_util.c"
                {
#line 6010 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_13, parse_tree__prog_io_util__V_7_7, parse_tree__prog_io_util__V_8_8);
                }
#line 1382 "prog_io_util.m"
              }
#line 1382 "prog_io_util.m"
          }
#line 1382 "prog_io_util.m"
          break;
#line 1382 "prog_io_util.m"
        case (MR_Integer) 3:
#line 1382 "prog_io_util.m"
          {
#line 1382 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1382 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_10_10;

#line 1382 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 1382 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1382 "prog_io_util.m"
              {
#line 1382 "prog_io_util.m"
                parse_tree__prog_io_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6036 "parse_tree.prog_io_util.c"
                {
#line 6038 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_13, parse_tree__prog_io_util__V_9_9, parse_tree__prog_io_util__V_10_10);
                }
#line 1382 "prog_io_util.m"
              }
#line 1382 "prog_io_util.m"
          }
#line 1382 "prog_io_util.m"
          break;
#line 1382 "prog_io_util.m"
      }
#line 1382 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1382 "prog_io_util.m"
  }
#line 1382 "prog_io_util.m"
}

#line 51 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_pred_or_func_1_0(
#line 51 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_6,
#line 51 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 51 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 51 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 51 "prog_io_util.m"
{
#line 51 "prog_io_util.m"
  {
#line 51 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 51 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeInfo_9_9;
#line 51 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeInfo_11_11;
#line 51 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeInfo_13_13;
#line 51 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_4 = parse_tree__prog_io_util__HeadVar__2_2;
#line 51 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_5 = parse_tree__prog_io_util__HeadVar__3_3;

#line 6084 "parse_tree.prog_io_util.c"
    {
#line 6086 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6088 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6090 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_6));
#line 6092 "parse_tree.prog_io_util.c"
    }
#line 6094 "parse_tree.prog_io_util.c"
    {
#line 6096 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6098 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 6100 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_6));
#line 6102 "parse_tree.prog_io_util.c"
    }
#line 6104 "parse_tree.prog_io_util.c"
    {
#line 6106 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6108 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 6110 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_13_13, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_9_9));
#line 6112 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_13_13, 2) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_11_11));
#line 6114 "parse_tree.prog_io_util.c"
    }
#line 51 "prog_io_util.m"
    {
#line 51 "prog_io_util.m"
      parse_tree__maybe_error____Compare____maybe2_2_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__prog_io_util__TypeInfo_13_13, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__Cast_HeadVar1_4, parse_tree__prog_io_util__Cast_HeadVar2_5);
    }
#line 51 "prog_io_util.m"
  }
#line 51 "prog_io_util.m"
}

#line 51 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_pred_or_func_1_0(
#line 51 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_5,
#line 51 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 51 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 51 "prog_io_util.m"
{
#line 51 "prog_io_util.m"
  {
#line 51 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 51 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeInfo_8_8;
#line 51 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeInfo_10_10;
#line 51 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeInfo_12_12;
#line 51 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_3 = parse_tree__prog_io_util__HeadVar__1_1;
#line 51 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_4 = parse_tree__prog_io_util__HeadVar__2_2;

#line 6152 "parse_tree.prog_io_util.c"
    {
#line 6154 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6156 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6158 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_5));
#line 6160 "parse_tree.prog_io_util.c"
    }
#line 6162 "parse_tree.prog_io_util.c"
    {
#line 6164 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6166 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 6168 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_10_10, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_5));
#line 6170 "parse_tree.prog_io_util.c"
    }
#line 6172 "parse_tree.prog_io_util.c"
    {
#line 6174 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6176 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_12_12, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 6178 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_12_12, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_8_8));
#line 6180 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_12_12, 2) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_10_10));
#line 6182 "parse_tree.prog_io_util.c"
    }
#line 51 "prog_io_util.m"
    {
#line 51 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = parse_tree__maybe_error____Unify____maybe2_2_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__prog_io_util__TypeInfo_12_12, parse_tree__prog_io_util__Cast_HeadVar1_3, parse_tree__prog_io_util__Cast_HeadVar2_4);
    }
#line 51 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 51 "prog_io_util.m"
  }
#line 51 "prog_io_util.m"
}

#line 48 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_1_0(
#line 48 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_6,
#line 48 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 48 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 48 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 48 "prog_io_util.m"
{
#line 48 "prog_io_util.m"
  {
#line 48 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 48 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeInfo_9_9;
#line 48 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeInfo_11_11;
#line 48 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_4 = parse_tree__prog_io_util__HeadVar__2_2;
#line 48 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_5 = parse_tree__prog_io_util__HeadVar__3_3;

#line 6222 "parse_tree.prog_io_util.c"
    {
#line 6224 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6226 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
#line 6228 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_6));
#line 6230 "parse_tree.prog_io_util.c"
    }
#line 6232 "parse_tree.prog_io_util.c"
    {
#line 6234 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6236 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6238 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_9_9));
#line 6240 "parse_tree.prog_io_util.c"
    }
#line 48 "prog_io_util.m"
    {
#line 48 "prog_io_util.m"
      parse_tree__maybe_error____Compare____maybe2_2_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__prog_io_util__TypeInfo_11_11, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__Cast_HeadVar1_4, parse_tree__prog_io_util__Cast_HeadVar2_5);
    }
#line 48 "prog_io_util.m"
  }
#line 48 "prog_io_util.m"
}

#line 48 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_1_0(
#line 48 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_5,
#line 48 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 48 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 48 "prog_io_util.m"
{
#line 48 "prog_io_util.m"
  {
#line 48 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 48 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeInfo_8_8;
#line 48 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeInfo_10_10;
#line 48 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_3 = parse_tree__prog_io_util__HeadVar__1_1;
#line 48 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_4 = parse_tree__prog_io_util__HeadVar__2_2;

#line 6276 "parse_tree.prog_io_util.c"
    {
#line 6278 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6280 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
#line 6282 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_5));
#line 6284 "parse_tree.prog_io_util.c"
    }
#line 6286 "parse_tree.prog_io_util.c"
    {
#line 6288 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6290 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6292 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_10_10, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_8_8));
#line 6294 "parse_tree.prog_io_util.c"
    }
#line 48 "prog_io_util.m"
    {
#line 48 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = parse_tree__maybe_error____Unify____maybe2_2_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__prog_io_util__TypeInfo_10_10, parse_tree__prog_io_util__Cast_HeadVar1_3, parse_tree__prog_io_util__Cast_HeadVar2_4);
    }
#line 48 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 48 "prog_io_util.m"
  }
#line 48 "prog_io_util.m"
}

#line 47 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_0_0(
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
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_4 = parse_tree__prog_io_util__HeadVar__2_2;
#line 47 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_5 = parse_tree__prog_io_util__HeadVar__3_3;

#line 47 "prog_io_util.m"
    {
#line 47 "prog_io_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_2[0], parse_tree__prog_io_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar2_5)));
    }
#line 47 "prog_io_util.m"
  }
#line 47 "prog_io_util.m"
}

#line 47 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_0_0(
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
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_3 = parse_tree__prog_io_util__HeadVar__1_1;
#line 47 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_4 = parse_tree__prog_io_util__HeadVar__2_2;

#line 47 "prog_io_util.m"
    {
#line 47 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_2[0], ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar2_4)));
    }
#line 47 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 47 "prog_io_util.m"
  }
#line 47 "prog_io_util.m"
}

#line 420 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_type_kind_1_0(
#line 420 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_18,
#line 420 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 420 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 420 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 420 "prog_io_util.m"
{
#line 420 "prog_io_util.m"
  {
#line 420 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 420 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_16 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 420 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_17 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 420 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_16 == parse_tree__prog_io_util__CastY_17);
#line 420 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 6394 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 420 "prog_io_util.m"
    else
#line 420 "prog_io_util.m"
#line 420 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) {
#line 420 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 420 "prog_io_util.m"
        case (MR_Integer) 0:
#line 420 "prog_io_util.m"
#line 420 "prog_io_util.m"
          switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 420 "prog_io_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 420 "prog_io_util.m"
            case (MR_Integer) 0:
#line 420 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 420 "prog_io_util.m"
              break;
#line 420 "prog_io_util.m"
            case (MR_Integer) 1:
#line 6418 "parse_tree.prog_io_util.c"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 420 "prog_io_util.m"
              break;
#line 420 "prog_io_util.m"
            case (MR_Integer) 2:
#line 6424 "parse_tree.prog_io_util.c"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 420 "prog_io_util.m"
              break;
#line 420 "prog_io_util.m"
          }
#line 420 "prog_io_util.m"
          break;
#line 420 "prog_io_util.m"
        case (MR_Integer) 1:
#line 420 "prog_io_util.m"
          {
#line 420 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 420 "prog_io_util.m"
#line 420 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 420 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 420 "prog_io_util.m"
              case (MR_Integer) 0:
#line 6446 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 420 "prog_io_util.m"
                break;
#line 420 "prog_io_util.m"
              case (MR_Integer) 1:
#line 420 "prog_io_util.m"
                {
#line 420 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 420 "prog_io_util.m"
                  {
#line 420 "prog_io_util.m"
                    parse_tree__prog_data____Compare____mer_type_0_0(parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_23_23, parse_tree__prog_io_util__V_5_5);
                  }
#line 420 "prog_io_util.m"
                }
#line 420 "prog_io_util.m"
                break;
#line 420 "prog_io_util.m"
              case (MR_Integer) 2:
#line 6468 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 420 "prog_io_util.m"
                break;
#line 420 "prog_io_util.m"
            }
#line 420 "prog_io_util.m"
          }
#line 420 "prog_io_util.m"
          break;
#line 420 "prog_io_util.m"
        case (MR_Integer) 2:
#line 420 "prog_io_util.m"
          {
#line 420 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 420 "prog_io_util.m"
#line 420 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 420 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 420 "prog_io_util.m"
              case (MR_Integer) 0:
#line 6492 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 420 "prog_io_util.m"
                break;
#line 420 "prog_io_util.m"
              case (MR_Integer) 1:
#line 6498 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 420 "prog_io_util.m"
                break;
#line 420 "prog_io_util.m"
              case (MR_Integer) 2:
#line 420 "prog_io_util.m"
                {
#line 420 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 420 "prog_io_util.m"
                  {
#line 420 "prog_io_util.m"
                    parse_tree__prog_io_util____Compare____known_compound_type_kind_1_0(parse_tree__prog_io_util__TypeInfo_for_T_18, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_22_22, parse_tree__prog_io_util__V_12_12);
                  }
#line 420 "prog_io_util.m"
                }
#line 420 "prog_io_util.m"
                break;
#line 420 "prog_io_util.m"
            }
#line 420 "prog_io_util.m"
          }
#line 420 "prog_io_util.m"
          break;
#line 420 "prog_io_util.m"
      }
#line 420 "prog_io_util.m"
  }
#line 420 "prog_io_util.m"
}

#line 420 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_type_kind_1_0(
#line 420 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_11,
#line 420 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 420 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 420 "prog_io_util.m"
{
#line 420 "prog_io_util.m"
  {
#line 420 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 420 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_9 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 420 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_10 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 420 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_9 == parse_tree__prog_io_util__CastY_10);
#line 420 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 420 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 420 "prog_io_util.m"
    else
#line 420 "prog_io_util.m"
#line 420 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) {
#line 420 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 420 "prog_io_util.m"
        case (MR_Integer) 0:
#line 420 "prog_io_util.m"
          {
#line 420 "prog_io_util.m"
            MR_Integer parse_tree__prog_io_util__CastX_7 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 420 "prog_io_util.m"
            MR_Integer parse_tree__prog_io_util__CastY_8 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 420 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastY_8 == parse_tree__prog_io_util__CastX_7);
#line 420 "prog_io_util.m"
          }
#line 420 "prog_io_util.m"
          break;
#line 420 "prog_io_util.m"
        case (MR_Integer) 1:
#line 420 "prog_io_util.m"
          {
#line 420 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 420 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_4_4;

#line 420 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 420 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 420 "prog_io_util.m"
              {
#line 420 "prog_io_util.m"
                parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6596 "parse_tree.prog_io_util.c"
                {
#line 6598 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__prog_io_util__V_3_3, parse_tree__prog_io_util__V_4_4);
                }
#line 420 "prog_io_util.m"
              }
#line 420 "prog_io_util.m"
          }
#line 420 "prog_io_util.m"
          break;
#line 420 "prog_io_util.m"
        case (MR_Integer) 2:
#line 420 "prog_io_util.m"
          {
#line 420 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 420 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_6_6;

#line 420 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 420 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 420 "prog_io_util.m"
              {
#line 420 "prog_io_util.m"
                parse_tree__prog_io_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6624 "parse_tree.prog_io_util.c"
                {
#line 6626 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____known_compound_type_kind_1_0(parse_tree__prog_io_util__TypeInfo_for_T_11, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_6_6);
                }
#line 420 "prog_io_util.m"
              }
#line 420 "prog_io_util.m"
          }
#line 420 "prog_io_util.m"
          break;
#line 420 "prog_io_util.m"
      }
#line 420 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 420 "prog_io_util.m"
  }
#line 420 "prog_io_util.m"
}

#line 848 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_inst_kind_1_0(
#line 848 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_18,
#line 848 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 848 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 848 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 848 "prog_io_util.m"
{
#line 848 "prog_io_util.m"
  {
#line 848 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 848 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_16 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 848 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_17 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 848 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_16 == parse_tree__prog_io_util__CastY_17);
#line 848 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 6670 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 848 "prog_io_util.m"
    else
#line 848 "prog_io_util.m"
#line 848 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) {
#line 848 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 848 "prog_io_util.m"
        case (MR_Integer) 0:
#line 848 "prog_io_util.m"
#line 848 "prog_io_util.m"
          switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 848 "prog_io_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 848 "prog_io_util.m"
            case (MR_Integer) 0:
#line 848 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 848 "prog_io_util.m"
              break;
#line 848 "prog_io_util.m"
            case (MR_Integer) 1:
#line 6694 "parse_tree.prog_io_util.c"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 848 "prog_io_util.m"
              break;
#line 848 "prog_io_util.m"
            case (MR_Integer) 2:
#line 6700 "parse_tree.prog_io_util.c"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 848 "prog_io_util.m"
              break;
#line 848 "prog_io_util.m"
          }
#line 848 "prog_io_util.m"
          break;
#line 848 "prog_io_util.m"
        case (MR_Integer) 1:
#line 848 "prog_io_util.m"
          {
#line 848 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 848 "prog_io_util.m"
#line 848 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 848 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 848 "prog_io_util.m"
              case (MR_Integer) 0:
#line 6722 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 848 "prog_io_util.m"
                break;
#line 848 "prog_io_util.m"
              case (MR_Integer) 1:
#line 848 "prog_io_util.m"
                {
#line 848 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 848 "prog_io_util.m"
                  {
#line 848 "prog_io_util.m"
                    parse_tree__prog_data____Compare____mer_inst_0_0(parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_23_23, parse_tree__prog_io_util__V_5_5);
                  }
#line 848 "prog_io_util.m"
                }
#line 848 "prog_io_util.m"
                break;
#line 848 "prog_io_util.m"
              case (MR_Integer) 2:
#line 6744 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 848 "prog_io_util.m"
                break;
#line 848 "prog_io_util.m"
            }
#line 848 "prog_io_util.m"
          }
#line 848 "prog_io_util.m"
          break;
#line 848 "prog_io_util.m"
        case (MR_Integer) 2:
#line 848 "prog_io_util.m"
          {
#line 848 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 848 "prog_io_util.m"
#line 848 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 848 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 848 "prog_io_util.m"
              case (MR_Integer) 0:
#line 6768 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 848 "prog_io_util.m"
                break;
#line 848 "prog_io_util.m"
              case (MR_Integer) 1:
#line 6774 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 848 "prog_io_util.m"
                break;
#line 848 "prog_io_util.m"
              case (MR_Integer) 2:
#line 848 "prog_io_util.m"
                {
#line 848 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 848 "prog_io_util.m"
                  {
#line 848 "prog_io_util.m"
                    parse_tree__prog_io_util____Compare____known_compound_inst_kind_1_0(parse_tree__prog_io_util__TypeInfo_for_T_18, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_22_22, parse_tree__prog_io_util__V_12_12);
                  }
#line 848 "prog_io_util.m"
                }
#line 848 "prog_io_util.m"
                break;
#line 848 "prog_io_util.m"
            }
#line 848 "prog_io_util.m"
          }
#line 848 "prog_io_util.m"
          break;
#line 848 "prog_io_util.m"
      }
#line 848 "prog_io_util.m"
  }
#line 848 "prog_io_util.m"
}

#line 848 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_inst_kind_1_0(
#line 848 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_11,
#line 848 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 848 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 848 "prog_io_util.m"
{
#line 848 "prog_io_util.m"
  {
#line 848 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 848 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_9 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 848 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_10 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 848 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_9 == parse_tree__prog_io_util__CastY_10);
#line 848 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 848 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 848 "prog_io_util.m"
    else
#line 848 "prog_io_util.m"
#line 848 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) {
#line 848 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 848 "prog_io_util.m"
        case (MR_Integer) 0:
#line 848 "prog_io_util.m"
          {
#line 848 "prog_io_util.m"
            MR_Integer parse_tree__prog_io_util__CastX_7 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 848 "prog_io_util.m"
            MR_Integer parse_tree__prog_io_util__CastY_8 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 848 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastY_8 == parse_tree__prog_io_util__CastX_7);
#line 848 "prog_io_util.m"
          }
#line 848 "prog_io_util.m"
          break;
#line 848 "prog_io_util.m"
        case (MR_Integer) 1:
#line 848 "prog_io_util.m"
          {
#line 848 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 848 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_4_4;

#line 848 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 848 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 848 "prog_io_util.m"
              {
#line 848 "prog_io_util.m"
                parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6872 "parse_tree.prog_io_util.c"
                {
#line 6874 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__prog_io_util__V_3_3, parse_tree__prog_io_util__V_4_4);
                }
#line 848 "prog_io_util.m"
              }
#line 848 "prog_io_util.m"
          }
#line 848 "prog_io_util.m"
          break;
#line 848 "prog_io_util.m"
        case (MR_Integer) 2:
#line 848 "prog_io_util.m"
          {
#line 848 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 848 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_6_6;

#line 848 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 848 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 848 "prog_io_util.m"
              {
#line 848 "prog_io_util.m"
                parse_tree__prog_io_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6900 "parse_tree.prog_io_util.c"
                {
#line 6902 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____known_compound_inst_kind_1_0(parse_tree__prog_io_util__TypeInfo_for_T_11, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_6_6);
                }
#line 848 "prog_io_util.m"
              }
#line 848 "prog_io_util.m"
          }
#line 848 "prog_io_util.m"
          break;
#line 848 "prog_io_util.m"
      }
#line 848 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 848 "prog_io_util.m"
  }
#line 848 "prog_io_util.m"
}

#line 413 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_type_kind_1_0(
#line 413 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_78,
#line 413 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 413 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 413 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 413 "prog_io_util.m"
{
#line 413 "prog_io_util.m"
  {
#line 413 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 413 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_76 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 413 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_77 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 413 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_76 == parse_tree__prog_io_util__CastY_77);
#line 413 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 6946 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 413 "prog_io_util.m"
    else
#line 413 "prog_io_util.m"
#line 413 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) {
#line 413 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 413 "prog_io_util.m"
        case (MR_Integer) 0:
#line 413 "prog_io_util.m"
          {
#line 413 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 413 "prog_io_util.m"
#line 413 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 413 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 413 "prog_io_util.m"
              case (MR_Integer) 0:
#line 413 "prog_io_util.m"
                {
#line 413 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 413 "prog_io_util.m"
                  {
#line 413 "prog_io_util.m"
                    mercury__list____Compare____list_1_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_92_92, parse_tree__prog_io_util__V_5_5);
                  }
#line 413 "prog_io_util.m"
                }
#line 413 "prog_io_util.m"
                break;
#line 413 "prog_io_util.m"
              case (MR_Integer) 1:
#line 6985 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 413 "prog_io_util.m"
                break;
#line 413 "prog_io_util.m"
              case (MR_Integer) 2:
#line 6991 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 413 "prog_io_util.m"
                break;
#line 413 "prog_io_util.m"
              case (MR_Integer) 3:
#line 413 "prog_io_util.m"
#line 413 "prog_io_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 413 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 413 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 7004 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 413 "prog_io_util.m"
                    break;
#line 413 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 7010 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 413 "prog_io_util.m"
                    break;
#line 413 "prog_io_util.m"
                }
#line 413 "prog_io_util.m"
                break;
#line 413 "prog_io_util.m"
            }
#line 413 "prog_io_util.m"
          }
#line 413 "prog_io_util.m"
          break;
#line 413 "prog_io_util.m"
        case (MR_Integer) 1:
#line 413 "prog_io_util.m"
          {
#line 413 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_87_87 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 413 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_88_88 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));

#line 413 "prog_io_util.m"
#line 413 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 413 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 413 "prog_io_util.m"
              case (MR_Integer) 0:
#line 7040 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 413 "prog_io_util.m"
                break;
#line 413 "prog_io_util.m"
              case (MR_Integer) 1:
#line 413 "prog_io_util.m"
                {
#line 413 "prog_io_util.m"
                  MR_Box parse_tree__prog_io_util__V_21_21 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0));
#line 413 "prog_io_util.m"
                  MR_Box parse_tree__prog_io_util__V_22_22 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1));
#line 413 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_23_23;

#line 413 "prog_io_util.m"
                  {
#line 413 "prog_io_util.m"
                    mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, &parse_tree__prog_io_util__V_23_23, parse_tree__prog_io_util__V_88_88, parse_tree__prog_io_util__V_21_21);
                  }
#line 7060 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_23_23 == (MR_Integer) 0);
#line 413 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 413 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 413 "prog_io_util.m"
                    *parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__V_23_23;
#line 413 "prog_io_util.m"
                  else
#line 413 "prog_io_util.m"
                    {
#line 413 "prog_io_util.m"
                      mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_87_87, parse_tree__prog_io_util__V_22_22);
                    }
#line 413 "prog_io_util.m"
                }
#line 413 "prog_io_util.m"
                break;
#line 413 "prog_io_util.m"
              case (MR_Integer) 2:
#line 7081 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 413 "prog_io_util.m"
                break;
#line 413 "prog_io_util.m"
              case (MR_Integer) 3:
#line 413 "prog_io_util.m"
#line 413 "prog_io_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 413 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 413 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 7094 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 413 "prog_io_util.m"
                    break;
#line 413 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 7100 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 413 "prog_io_util.m"
                    break;
#line 413 "prog_io_util.m"
                }
#line 413 "prog_io_util.m"
                break;
#line 413 "prog_io_util.m"
            }
#line 413 "prog_io_util.m"
          }
#line 413 "prog_io_util.m"
          break;
#line 413 "prog_io_util.m"
        case (MR_Integer) 2:
#line 413 "prog_io_util.m"
          {
#line 413 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 413 "prog_io_util.m"
#line 413 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 413 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 413 "prog_io_util.m"
              case (MR_Integer) 0:
#line 7128 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 413 "prog_io_util.m"
                break;
#line 413 "prog_io_util.m"
              case (MR_Integer) 1:
#line 7134 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 413 "prog_io_util.m"
                break;
#line 413 "prog_io_util.m"
              case (MR_Integer) 2:
#line 413 "prog_io_util.m"
                {
#line 413 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 413 "prog_io_util.m"
                  {
#line 413 "prog_io_util.m"
                    mercury__list____Compare____list_1_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_89_89, parse_tree__prog_io_util__V_40_40);
                  }
#line 413 "prog_io_util.m"
                }
#line 413 "prog_io_util.m"
                break;
#line 413 "prog_io_util.m"
              case (MR_Integer) 3:
#line 413 "prog_io_util.m"
#line 413 "prog_io_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 413 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 413 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 7163 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 413 "prog_io_util.m"
                    break;
#line 413 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 7169 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 413 "prog_io_util.m"
                    break;
#line 413 "prog_io_util.m"
                }
#line 413 "prog_io_util.m"
                break;
#line 413 "prog_io_util.m"
            }
#line 413 "prog_io_util.m"
          }
#line 413 "prog_io_util.m"
          break;
#line 413 "prog_io_util.m"
        case (MR_Integer) 3:
#line 413 "prog_io_util.m"
#line 413 "prog_io_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)))) {
#line 413 "prog_io_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 413 "prog_io_util.m"
            case (MR_Integer) 0:
#line 413 "prog_io_util.m"
              {
#line 413 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_90_90 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 2));
#line 413 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));

#line 413 "prog_io_util.m"
#line 413 "prog_io_util.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 413 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 413 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 7206 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 413 "prog_io_util.m"
                    break;
#line 413 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 7212 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 413 "prog_io_util.m"
                    break;
#line 413 "prog_io_util.m"
                  case (MR_Integer) 2:
#line 7218 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 413 "prog_io_util.m"
                    break;
#line 413 "prog_io_util.m"
                  case (MR_Integer) 3:
#line 413 "prog_io_util.m"
#line 413 "prog_io_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 413 "prog_io_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 413 "prog_io_util.m"
                      case (MR_Integer) 0:
#line 413 "prog_io_util.m"
                        {
#line 413 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1)));
#line 413 "prog_io_util.m"
                          MR_Box parse_tree__prog_io_util__V_59_59 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 2));
#line 413 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_60_60;
#line 413 "prog_io_util.m"
                          MR_Integer parse_tree__prog_io_util__V_93_93 = (MR_Integer) parse_tree__prog_io_util__V_91_91;
#line 413 "prog_io_util.m"
                          MR_Integer parse_tree__prog_io_util__V_94_94 = (MR_Integer) parse_tree__prog_io_util__V_58_58;

#line 413 "prog_io_util.m"
                          {
#line 413 "prog_io_util.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_io_util__V_60_60, parse_tree__prog_io_util__V_93_93, parse_tree__prog_io_util__V_94_94);
                          }
#line 7249 "parse_tree.prog_io_util.c"
                          parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_60_60 == (MR_Integer) 0);
#line 413 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 413 "prog_io_util.m"
                          if (parse_tree__prog_io_util__succeeded)
#line 413 "prog_io_util.m"
                            *parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__V_60_60;
#line 413 "prog_io_util.m"
                          else
#line 413 "prog_io_util.m"
                            {
#line 413 "prog_io_util.m"
                              mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_90_90, parse_tree__prog_io_util__V_59_59);
                            }
#line 413 "prog_io_util.m"
                        }
#line 413 "prog_io_util.m"
                        break;
#line 413 "prog_io_util.m"
                      case (MR_Integer) 1:
#line 7270 "parse_tree.prog_io_util.c"
                        *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 413 "prog_io_util.m"
                        break;
#line 413 "prog_io_util.m"
                    }
#line 413 "prog_io_util.m"
                    break;
#line 413 "prog_io_util.m"
                }
#line 413 "prog_io_util.m"
              }
#line 413 "prog_io_util.m"
              break;
#line 413 "prog_io_util.m"
            case (MR_Integer) 1:
#line 413 "prog_io_util.m"
              {
#line 413 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));

#line 413 "prog_io_util.m"
#line 413 "prog_io_util.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 413 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 413 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 7298 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 413 "prog_io_util.m"
                    break;
#line 413 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 7304 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 413 "prog_io_util.m"
                    break;
#line 413 "prog_io_util.m"
                  case (MR_Integer) 2:
#line 7310 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 413 "prog_io_util.m"
                    break;
#line 413 "prog_io_util.m"
                  case (MR_Integer) 3:
#line 413 "prog_io_util.m"
#line 413 "prog_io_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 413 "prog_io_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 413 "prog_io_util.m"
                      case (MR_Integer) 0:
#line 7323 "parse_tree.prog_io_util.c"
                        *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 413 "prog_io_util.m"
                        break;
#line 413 "prog_io_util.m"
                      case (MR_Integer) 1:
#line 413 "prog_io_util.m"
                        {
#line 413 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1)));

#line 413 "prog_io_util.m"
                          {
#line 413 "prog_io_util.m"
                            mercury__list____Compare____list_1_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_86_86, parse_tree__prog_io_util__V_75_75);
                          }
#line 413 "prog_io_util.m"
                        }
#line 413 "prog_io_util.m"
                        break;
#line 413 "prog_io_util.m"
                    }
#line 413 "prog_io_util.m"
                    break;
#line 413 "prog_io_util.m"
                }
#line 413 "prog_io_util.m"
              }
#line 413 "prog_io_util.m"
              break;
#line 413 "prog_io_util.m"
          }
#line 413 "prog_io_util.m"
          break;
#line 413 "prog_io_util.m"
      }
#line 413 "prog_io_util.m"
  }
#line 413 "prog_io_util.m"
}

#line 413 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_type_kind_1_0(
#line 413 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_19,
#line 413 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 413 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 413 "prog_io_util.m"
{
#line 413 "prog_io_util.m"
  {
#line 413 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 413 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_17 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 413 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_18 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 413 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_17 == parse_tree__prog_io_util__CastY_18);
#line 413 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 413 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 413 "prog_io_util.m"
    else
#line 413 "prog_io_util.m"
#line 413 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) {
#line 413 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 413 "prog_io_util.m"
        case (MR_Integer) 0:
#line 413 "prog_io_util.m"
          {
#line 413 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 413 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_4_4;

#line 413 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 413 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 413 "prog_io_util.m"
              {
#line 413 "prog_io_util.m"
                parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 7414 "parse_tree.prog_io_util.c"
                {
#line 7416 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = mercury__list____Unify____list_1_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_3_3, parse_tree__prog_io_util__V_4_4);
                }
#line 413 "prog_io_util.m"
              }
#line 413 "prog_io_util.m"
          }
#line 413 "prog_io_util.m"
          break;
#line 413 "prog_io_util.m"
        case (MR_Integer) 1:
#line 413 "prog_io_util.m"
          {
#line 413 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_5_5 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0));
#line 413 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_6_6 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1));
#line 413 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_7_7;
#line 413 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_8_8;

#line 413 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 413 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 413 "prog_io_util.m"
              {
#line 413 "prog_io_util.m"
                parse_tree__prog_io_util__V_7_7 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));
#line 413 "prog_io_util.m"
                parse_tree__prog_io_util__V_8_8 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 7448 "parse_tree.prog_io_util.c"
                {
#line 7450 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_7_7);
                }
#line 413 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 7455 "parse_tree.prog_io_util.c"
                  {
#line 7457 "parse_tree.prog_io_util.c"
                    parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_6_6, parse_tree__prog_io_util__V_8_8);
                  }
#line 413 "prog_io_util.m"
              }
#line 413 "prog_io_util.m"
          }
#line 413 "prog_io_util.m"
          break;
#line 413 "prog_io_util.m"
        case (MR_Integer) 2:
#line 413 "prog_io_util.m"
          {
#line 413 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 413 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_10_10;

#line 413 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 413 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 413 "prog_io_util.m"
              {
#line 413 "prog_io_util.m"
                parse_tree__prog_io_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 7483 "parse_tree.prog_io_util.c"
                {
#line 7485 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = mercury__list____Unify____list_1_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_9_9, parse_tree__prog_io_util__V_10_10);
                }
#line 413 "prog_io_util.m"
              }
#line 413 "prog_io_util.m"
          }
#line 413 "prog_io_util.m"
          break;
#line 413 "prog_io_util.m"
        case (MR_Integer) 3:
#line 413 "prog_io_util.m"
#line 413 "prog_io_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)))) {
#line 413 "prog_io_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 413 "prog_io_util.m"
            case (MR_Integer) 0:
#line 413 "prog_io_util.m"
              {
#line 413 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 413 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_12_12 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 2));
#line 413 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_13_13;
#line 413 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_14_14;

#line 413 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 413 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 413 "prog_io_util.m"
                  {
#line 413 "prog_io_util.m"
                    parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 413 "prog_io_util.m"
                    parse_tree__prog_io_util__V_14_14 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 2));
#line 7524 "parse_tree.prog_io_util.c"
                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_11_11 == parse_tree__prog_io_util__V_13_13);
#line 413 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 7528 "parse_tree.prog_io_util.c"
                      {
#line 7530 "parse_tree.prog_io_util.c"
                        parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_12_12, parse_tree__prog_io_util__V_14_14);
                      }
#line 413 "prog_io_util.m"
                  }
#line 413 "prog_io_util.m"
              }
#line 413 "prog_io_util.m"
              break;
#line 413 "prog_io_util.m"
            case (MR_Integer) 1:
#line 413 "prog_io_util.m"
              {
#line 413 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 413 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_16_16;

#line 413 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 413 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 413 "prog_io_util.m"
                  {
#line 413 "prog_io_util.m"
                    parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7556 "parse_tree.prog_io_util.c"
                    {
#line 7558 "parse_tree.prog_io_util.c"
                      parse_tree__prog_io_util__succeeded = mercury__list____Unify____list_1_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_15_15, parse_tree__prog_io_util__V_16_16);
                    }
#line 413 "prog_io_util.m"
                  }
#line 413 "prog_io_util.m"
              }
#line 413 "prog_io_util.m"
              break;
#line 413 "prog_io_util.m"
          }
#line 413 "prog_io_util.m"
          break;
#line 413 "prog_io_util.m"
      }
#line 413 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 413 "prog_io_util.m"
  }
#line 413 "prog_io_util.m"
}

#line 841 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_inst_kind_1_0(
#line 841 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_78,
#line 841 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 841 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 841 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 841 "prog_io_util.m"
{
#line 841 "prog_io_util.m"
  {
#line 841 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 841 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_76 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 841 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_77 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 841 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_76 == parse_tree__prog_io_util__CastY_77);
#line 841 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 7606 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 841 "prog_io_util.m"
    else
#line 841 "prog_io_util.m"
#line 841 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) {
#line 841 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 841 "prog_io_util.m"
        case (MR_Integer) 0:
#line 841 "prog_io_util.m"
          {
#line 841 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_82_82 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 841 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_83_83 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));

#line 841 "prog_io_util.m"
#line 841 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 841 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 841 "prog_io_util.m"
              case (MR_Integer) 0:
#line 841 "prog_io_util.m"
                {
#line 841 "prog_io_util.m"
                  MR_Box parse_tree__prog_io_util__V_6_6 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0));
#line 841 "prog_io_util.m"
                  MR_Box parse_tree__prog_io_util__V_7_7 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1));
#line 841 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_8_8;

#line 841 "prog_io_util.m"
                  {
#line 841 "prog_io_util.m"
                    mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, &parse_tree__prog_io_util__V_8_8, parse_tree__prog_io_util__V_83_83, parse_tree__prog_io_util__V_6_6);
                  }
#line 7645 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_8_8 == (MR_Integer) 0);
#line 841 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 841 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 841 "prog_io_util.m"
                    *parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__V_8_8;
#line 841 "prog_io_util.m"
                  else
#line 841 "prog_io_util.m"
                    {
#line 841 "prog_io_util.m"
                      mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_82_82, parse_tree__prog_io_util__V_7_7);
                    }
#line 841 "prog_io_util.m"
                }
#line 841 "prog_io_util.m"
                break;
#line 841 "prog_io_util.m"
              case (MR_Integer) 1:
#line 7666 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 841 "prog_io_util.m"
                break;
#line 841 "prog_io_util.m"
              case (MR_Integer) 2:
#line 7672 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 841 "prog_io_util.m"
                break;
#line 841 "prog_io_util.m"
              case (MR_Integer) 3:
#line 841 "prog_io_util.m"
#line 841 "prog_io_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 841 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 841 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 7685 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 841 "prog_io_util.m"
                    break;
#line 841 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 7691 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 841 "prog_io_util.m"
                    break;
#line 841 "prog_io_util.m"
                }
#line 841 "prog_io_util.m"
                break;
#line 841 "prog_io_util.m"
            }
#line 841 "prog_io_util.m"
          }
#line 841 "prog_io_util.m"
          break;
#line 841 "prog_io_util.m"
        case (MR_Integer) 1:
#line 841 "prog_io_util.m"
          {
#line 841 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_80_80 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 841 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_81_81 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));

#line 841 "prog_io_util.m"
#line 841 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 841 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 841 "prog_io_util.m"
              case (MR_Integer) 0:
#line 7721 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 841 "prog_io_util.m"
                break;
#line 841 "prog_io_util.m"
              case (MR_Integer) 1:
#line 841 "prog_io_util.m"
                {
#line 841 "prog_io_util.m"
                  MR_Box parse_tree__prog_io_util__V_28_28 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0));
#line 841 "prog_io_util.m"
                  MR_Box parse_tree__prog_io_util__V_29_29 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1));
#line 841 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_30_30;

#line 841 "prog_io_util.m"
                  {
#line 841 "prog_io_util.m"
                    mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, &parse_tree__prog_io_util__V_30_30, parse_tree__prog_io_util__V_81_81, parse_tree__prog_io_util__V_28_28);
                  }
#line 7741 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_30_30 == (MR_Integer) 0);
#line 841 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 841 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 841 "prog_io_util.m"
                    *parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__V_30_30;
#line 841 "prog_io_util.m"
                  else
#line 841 "prog_io_util.m"
                    {
#line 841 "prog_io_util.m"
                      mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_80_80, parse_tree__prog_io_util__V_29_29);
                    }
#line 841 "prog_io_util.m"
                }
#line 841 "prog_io_util.m"
                break;
#line 841 "prog_io_util.m"
              case (MR_Integer) 2:
#line 7762 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 841 "prog_io_util.m"
                break;
#line 841 "prog_io_util.m"
              case (MR_Integer) 3:
#line 841 "prog_io_util.m"
#line 841 "prog_io_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 841 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 841 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 7775 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 841 "prog_io_util.m"
                    break;
#line 841 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 7781 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 841 "prog_io_util.m"
                    break;
#line 841 "prog_io_util.m"
                }
#line 841 "prog_io_util.m"
                break;
#line 841 "prog_io_util.m"
            }
#line 841 "prog_io_util.m"
          }
#line 841 "prog_io_util.m"
          break;
#line 841 "prog_io_util.m"
        case (MR_Integer) 2:
#line 841 "prog_io_util.m"
          {
#line 841 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_79_79 = (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));

#line 841 "prog_io_util.m"
#line 841 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 841 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 841 "prog_io_util.m"
              case (MR_Integer) 0:
#line 7809 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 841 "prog_io_util.m"
                break;
#line 841 "prog_io_util.m"
              case (MR_Integer) 1:
#line 7815 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 841 "prog_io_util.m"
                break;
#line 841 "prog_io_util.m"
              case (MR_Integer) 2:
#line 841 "prog_io_util.m"
                {
#line 841 "prog_io_util.m"
                  MR_Box parse_tree__prog_io_util__V_47_47 = (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0));

#line 841 "prog_io_util.m"
                  {
#line 841 "prog_io_util.m"
                    mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_79_79, parse_tree__prog_io_util__V_47_47);
                  }
#line 841 "prog_io_util.m"
                }
#line 841 "prog_io_util.m"
                break;
#line 841 "prog_io_util.m"
              case (MR_Integer) 3:
#line 841 "prog_io_util.m"
#line 841 "prog_io_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 841 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 841 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 7844 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 841 "prog_io_util.m"
                    break;
#line 841 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 7850 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 841 "prog_io_util.m"
                    break;
#line 841 "prog_io_util.m"
                }
#line 841 "prog_io_util.m"
                break;
#line 841 "prog_io_util.m"
            }
#line 841 "prog_io_util.m"
          }
#line 841 "prog_io_util.m"
          break;
#line 841 "prog_io_util.m"
        case (MR_Integer) 3:
#line 841 "prog_io_util.m"
#line 841 "prog_io_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)))) {
#line 841 "prog_io_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 841 "prog_io_util.m"
            case (MR_Integer) 0:
#line 841 "prog_io_util.m"
              {
#line 841 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_85_85 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));

#line 841 "prog_io_util.m"
#line 841 "prog_io_util.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 841 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 841 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 7885 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 841 "prog_io_util.m"
                    break;
#line 841 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 7891 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 841 "prog_io_util.m"
                    break;
#line 841 "prog_io_util.m"
                  case (MR_Integer) 2:
#line 7897 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 841 "prog_io_util.m"
                    break;
#line 841 "prog_io_util.m"
                  case (MR_Integer) 3:
#line 841 "prog_io_util.m"
#line 841 "prog_io_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 841 "prog_io_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 841 "prog_io_util.m"
                      case (MR_Integer) 0:
#line 841 "prog_io_util.m"
                        {
#line 841 "prog_io_util.m"
                          MR_Box parse_tree__prog_io_util__V_61_61 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1));

#line 841 "prog_io_util.m"
                          {
#line 841 "prog_io_util.m"
                            mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_85_85, parse_tree__prog_io_util__V_61_61);
                          }
#line 841 "prog_io_util.m"
                        }
#line 841 "prog_io_util.m"
                        break;
#line 841 "prog_io_util.m"
                      case (MR_Integer) 1:
#line 7926 "parse_tree.prog_io_util.c"
                        *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 841 "prog_io_util.m"
                        break;
#line 841 "prog_io_util.m"
                    }
#line 841 "prog_io_util.m"
                    break;
#line 841 "prog_io_util.m"
                }
#line 841 "prog_io_util.m"
              }
#line 841 "prog_io_util.m"
              break;
#line 841 "prog_io_util.m"
            case (MR_Integer) 1:
#line 841 "prog_io_util.m"
              {
#line 841 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_84_84 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));

#line 841 "prog_io_util.m"
#line 841 "prog_io_util.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 841 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 841 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 7954 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 841 "prog_io_util.m"
                    break;
#line 841 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 7960 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 841 "prog_io_util.m"
                    break;
#line 841 "prog_io_util.m"
                  case (MR_Integer) 2:
#line 7966 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 841 "prog_io_util.m"
                    break;
#line 841 "prog_io_util.m"
                  case (MR_Integer) 3:
#line 841 "prog_io_util.m"
#line 841 "prog_io_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 841 "prog_io_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 841 "prog_io_util.m"
                      case (MR_Integer) 0:
#line 7979 "parse_tree.prog_io_util.c"
                        *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 841 "prog_io_util.m"
                        break;
#line 841 "prog_io_util.m"
                      case (MR_Integer) 1:
#line 841 "prog_io_util.m"
                        {
#line 841 "prog_io_util.m"
                          MR_Box parse_tree__prog_io_util__V_75_75 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1));

#line 841 "prog_io_util.m"
                          {
#line 841 "prog_io_util.m"
                            mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_84_84, parse_tree__prog_io_util__V_75_75);
                          }
#line 841 "prog_io_util.m"
                        }
#line 841 "prog_io_util.m"
                        break;
#line 841 "prog_io_util.m"
                    }
#line 841 "prog_io_util.m"
                    break;
#line 841 "prog_io_util.m"
                }
#line 841 "prog_io_util.m"
              }
#line 841 "prog_io_util.m"
              break;
#line 841 "prog_io_util.m"
          }
#line 841 "prog_io_util.m"
          break;
#line 841 "prog_io_util.m"
      }
#line 841 "prog_io_util.m"
  }
#line 841 "prog_io_util.m"
}

#line 841 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_inst_kind_1_0(
#line 841 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_19,
#line 841 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 841 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 841 "prog_io_util.m"
{
#line 841 "prog_io_util.m"
  {
#line 841 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 841 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_17 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 841 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_18 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 841 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_17 == parse_tree__prog_io_util__CastY_18);
#line 841 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 841 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 841 "prog_io_util.m"
    else
#line 841 "prog_io_util.m"
#line 841 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) {
#line 841 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 841 "prog_io_util.m"
        case (MR_Integer) 0:
#line 841 "prog_io_util.m"
          {
#line 841 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_3_3 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0));
#line 841 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_4_4 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1));
#line 841 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_5_5;
#line 841 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_6_6;

#line 841 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 841 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 841 "prog_io_util.m"
              {
#line 841 "prog_io_util.m"
                parse_tree__prog_io_util__V_5_5 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));
#line 841 "prog_io_util.m"
                parse_tree__prog_io_util__V_6_6 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 8076 "parse_tree.prog_io_util.c"
                {
#line 8078 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_3_3, parse_tree__prog_io_util__V_5_5);
                }
#line 841 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 8083 "parse_tree.prog_io_util.c"
                  {
#line 8085 "parse_tree.prog_io_util.c"
                    parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_4_4, parse_tree__prog_io_util__V_6_6);
                  }
#line 841 "prog_io_util.m"
              }
#line 841 "prog_io_util.m"
          }
#line 841 "prog_io_util.m"
          break;
#line 841 "prog_io_util.m"
        case (MR_Integer) 1:
#line 841 "prog_io_util.m"
          {
#line 841 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_7_7 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0));
#line 841 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_8_8 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1));
#line 841 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_9_9;
#line 841 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_10_10;

#line 841 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 841 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 841 "prog_io_util.m"
              {
#line 841 "prog_io_util.m"
                parse_tree__prog_io_util__V_9_9 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));
#line 841 "prog_io_util.m"
                parse_tree__prog_io_util__V_10_10 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 8117 "parse_tree.prog_io_util.c"
                {
#line 8119 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_7_7, parse_tree__prog_io_util__V_9_9);
                }
#line 841 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 8124 "parse_tree.prog_io_util.c"
                  {
#line 8126 "parse_tree.prog_io_util.c"
                    parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_8_8, parse_tree__prog_io_util__V_10_10);
                  }
#line 841 "prog_io_util.m"
              }
#line 841 "prog_io_util.m"
          }
#line 841 "prog_io_util.m"
          break;
#line 841 "prog_io_util.m"
        case (MR_Integer) 2:
#line 841 "prog_io_util.m"
          {
#line 841 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_11_11 = (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0));
#line 841 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_12_12;

#line 841 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 841 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 841 "prog_io_util.m"
              {
#line 841 "prog_io_util.m"
                parse_tree__prog_io_util__V_12_12 = (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));
#line 8152 "parse_tree.prog_io_util.c"
                {
#line 8154 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_11_11, parse_tree__prog_io_util__V_12_12);
                }
#line 841 "prog_io_util.m"
              }
#line 841 "prog_io_util.m"
          }
#line 841 "prog_io_util.m"
          break;
#line 841 "prog_io_util.m"
        case (MR_Integer) 3:
#line 841 "prog_io_util.m"
#line 841 "prog_io_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)))) {
#line 841 "prog_io_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 841 "prog_io_util.m"
            case (MR_Integer) 0:
#line 841 "prog_io_util.m"
              {
#line 841 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_13_13 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1));
#line 841 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_14_14;

#line 841 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 841 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 841 "prog_io_util.m"
                  {
#line 841 "prog_io_util.m"
                    parse_tree__prog_io_util__V_14_14 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 8187 "parse_tree.prog_io_util.c"
                    {
#line 8189 "parse_tree.prog_io_util.c"
                      parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_13_13, parse_tree__prog_io_util__V_14_14);
                    }
#line 841 "prog_io_util.m"
                  }
#line 841 "prog_io_util.m"
              }
#line 841 "prog_io_util.m"
              break;
#line 841 "prog_io_util.m"
            case (MR_Integer) 1:
#line 841 "prog_io_util.m"
              {
#line 841 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_15_15 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1));
#line 841 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_16_16;

#line 841 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 841 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 841 "prog_io_util.m"
                  {
#line 841 "prog_io_util.m"
                    parse_tree__prog_io_util__V_16_16 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 8215 "parse_tree.prog_io_util.c"
                    {
#line 8217 "parse_tree.prog_io_util.c"
                      parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_15_15, parse_tree__prog_io_util__V_16_16);
                    }
#line 841 "prog_io_util.m"
                  }
#line 841 "prog_io_util.m"
              }
#line 841 "prog_io_util.m"
              break;
#line 841 "prog_io_util.m"
          }
#line 841 "prog_io_util.m"
          break;
#line 841 "prog_io_util.m"
      }
#line 841 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 841 "prog_io_util.m"
  }
#line 841 "prog_io_util.m"
}

#line 122 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____allow_constrained_inst_var_0_0(
#line 122 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 122 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 122 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 122 "prog_io_util.m"
{
#line 122 "prog_io_util.m"
  {
#line 122 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 122 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 122 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 122 "prog_io_util.m"
    {
#line 122 "prog_io_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__Cast_HeadVar1_4, parse_tree__prog_io_util__Cast_HeadVar2_5);
    }
#line 122 "prog_io_util.m"
  }
#line 122 "prog_io_util.m"
}

#line 122 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____allow_constrained_inst_var_0_0(
#line 122 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_1,
#line 122 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 122 "prog_io_util.m"
{
#line 8278 "parse_tree.prog_io_util.c"
  {
#line 8280 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__HeadVar__2_1 == parse_tree__prog_io_util__HeadVar__2_2);

#line 8283 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 8285 "parse_tree.prog_io_util.c"
  }
#line 122 "prog_io_util.m"
}

#line 1511 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(
#line 1511 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_44,
#line 1511 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_6,
#line 1511 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_7,
#line 1511 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Expected_8,
#line 1511 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_9,
#line 1511 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Spec_10)
#line 1511 "prog_io_util.m"
{
#line 1515 "prog_io_util.m"
  {
#line 1515 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1515 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeCtorInfo_45_45;
#line 1515 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__TermStr_11;
#line 1515 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Pieces_12;
#line 1515 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 1515 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_14_14;
#line 1515 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_16_16;
#line 1515 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_19_19;
#line 1515 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_20_20;
#line 1515 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_21_21;
#line 1515 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_24_24;
#line 1515 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_27_27;
#line 1515 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_28_28;
#line 1515 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_37_37;
#line 1515 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_38_38;
#line 1515 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_39_39;
#line 1515 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_40_40;
#line 1515 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_41_41;

#line 1516 "prog_io_util.m"
    {
#line 1516 "prog_io_util.m"
      parse_tree__prog_io_util__TermStr_11 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_util__TypeInfo_for_T_44, parse_tree__prog_io_util__VarSet_7, parse_tree__prog_io_util__Term_9);
    }
#line 8351 "parse_tree.prog_io_util.c"
    parse_tree__prog_io_util__TypeCtorInfo_45_45 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1517 "prog_io_util.m"
    {
#line 1517 "prog_io_util.m"
      parse_tree__prog_io_util__V_13_13 = mercury__cord__list_1_f_0(parse_tree__prog_io_util__TypeCtorInfo_45_45, parse_tree__prog_io_util__ContextPieces_6);
    }
#line 1518 "prog_io_util.m"
    {
#line 1518 "prog_io_util.m"
      parse_tree__prog_io_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1518 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1518 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_20_20, 1) = ((MR_Box) (parse_tree__prog_io_util__Expected_8));
#line 1518 "prog_io_util.m"
    }
#line 1519 "prog_io_util.m"
    {
#line 1519 "prog_io_util.m"
      parse_tree__prog_io_util__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1519 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1519 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_28_28, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_11));
#line 1519 "prog_io_util.m"
    }
#line 1519 "prog_io_util.m"
    {
#line 1519 "prog_io_util.m"
      parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1519 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_util__V_28_28));
#line 1519 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[8])));
#line 1519 "prog_io_util.m"
    }
#line 1519 "prog_io_util.m"
    {
#line 1519 "prog_io_util.m"
      parse_tree__prog_io_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1519 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_24_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[15])));
#line 1519 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_24_24, 1) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
#line 1519 "prog_io_util.m"
    }
#line 1518 "prog_io_util.m"
    {
#line 1518 "prog_io_util.m"
      parse_tree__prog_io_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1518 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[14])));
#line 1518 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, 1) = ((MR_Box) (parse_tree__prog_io_util__V_24_24));
#line 1518 "prog_io_util.m"
    }
#line 1518 "prog_io_util.m"
    {
#line 1518 "prog_io_util.m"
      parse_tree__prog_io_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1518 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 0) = ((MR_Box) (parse_tree__prog_io_util__V_20_20));
#line 1518 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io_util__V_21_21));
#line 1518 "prog_io_util.m"
    }
#line 1518 "prog_io_util.m"
    {
#line 1518 "prog_io_util.m"
      parse_tree__prog_io_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1518 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[13])));
#line 1518 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 1) = ((MR_Box) (parse_tree__prog_io_util__V_19_19));
#line 1518 "prog_io_util.m"
    }
#line 1517 "prog_io_util.m"
    {
#line 1517 "prog_io_util.m"
      parse_tree__prog_io_util__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1517 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_14_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1517 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_14_14, 1) = ((MR_Box) (parse_tree__prog_io_util__V_16_16));
#line 1517 "prog_io_util.m"
    }
#line 1517 "prog_io_util.m"
    {
#line 1517 "prog_io_util.m"
      parse_tree__prog_io_util__Pieces_12 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_util__TypeCtorInfo_45_45, parse_tree__prog_io_util__V_13_13, parse_tree__prog_io_util__V_14_14);
    }
#line 1521 "prog_io_util.m"
    {
#line 1521 "prog_io_util.m"
      parse_tree__prog_io_util__V_39_39 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_util__TypeInfo_for_T_44, parse_tree__prog_io_util__Term_9);
    }
#line 1521 "prog_io_util.m"
    {
#line 1521 "prog_io_util.m"
      parse_tree__prog_io_util__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1521 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_12));
#line 1521 "prog_io_util.m"
    }
#line 1521 "prog_io_util.m"
    {
#line 1521 "prog_io_util.m"
      parse_tree__prog_io_util__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1521 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_util__V_41_41));
#line 1521 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1521 "prog_io_util.m"
    }
#line 1521 "prog_io_util.m"
    {
#line 1521 "prog_io_util.m"
      parse_tree__prog_io_util__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1521 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io_util__V_39_39));
#line 1521 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_38_38, 1) = ((MR_Box) (parse_tree__prog_io_util__V_40_40));
#line 1521 "prog_io_util.m"
    }
#line 1521 "prog_io_util.m"
    {
#line 1521 "prog_io_util.m"
      parse_tree__prog_io_util__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1521 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_util__V_38_38));
#line 1521 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1521 "prog_io_util.m"
    }
#line 1520 "prog_io_util.m"
    {
#line 1520 "prog_io_util.m"
      MR_Word base;
#line 1520 "prog_io_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1520 "prog_io_util.m"
      *parse_tree__prog_io_util__Spec_10 = base;
#line 1520 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1520 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1520 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_37_37));
#line 1520 "prog_io_util.m"
    }
#line 1515 "prog_io_util.m"
  }
#line 1511 "prog_io_util.m"
}

#line 1501 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__generate_repeated_state_var_msg_4_p_0(
#line 1501 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_34,
#line 1501 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_5,
#line 1501 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 1501 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_7,
#line 1501 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Spec_8)
#line 1501 "prog_io_util.m"
{
#line 1504 "prog_io_util.m"
  {
#line 1504 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1504 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeCtorInfo_35_35;
#line 1504 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__TermStr_9;
#line 1504 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Pieces_10;
#line 1504 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;
#line 1504 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_12_12;
#line 1504 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_14_14;
#line 1504 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_17_17;
#line 1504 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_18_18;
#line 1504 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_27_27;
#line 1504 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_28_28;
#line 1504 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_29_29;
#line 1504 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_30_30;
#line 1504 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_31_31;

#line 1505 "prog_io_util.m"
    {
#line 1505 "prog_io_util.m"
      parse_tree__prog_io_util__TermStr_9 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_util__TypeInfo_for_T_34, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__Term_7);
    }
#line 8558 "parse_tree.prog_io_util.c"
    parse_tree__prog_io_util__TypeCtorInfo_35_35 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1506 "prog_io_util.m"
    {
#line 1506 "prog_io_util.m"
      parse_tree__prog_io_util__V_11_11 = mercury__cord__list_1_f_0(parse_tree__prog_io_util__TypeCtorInfo_35_35, parse_tree__prog_io_util__ContextPieces_5);
    }
#line 1507 "prog_io_util.m"
    {
#line 1507 "prog_io_util.m"
      parse_tree__prog_io_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1507 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1507 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_18_18, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_9));
#line 1507 "prog_io_util.m"
    }
#line 1507 "prog_io_util.m"
    {
#line 1507 "prog_io_util.m"
      parse_tree__prog_io_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1507 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_17_17, 0) = ((MR_Box) (parse_tree__prog_io_util__V_18_18));
#line 1507 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[8])));
#line 1507 "prog_io_util.m"
    }
#line 1507 "prog_io_util.m"
    {
#line 1507 "prog_io_util.m"
      parse_tree__prog_io_util__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1507 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_14_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[12])));
#line 1507 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_14_14, 1) = ((MR_Box) (parse_tree__prog_io_util__V_17_17));
#line 1507 "prog_io_util.m"
    }
#line 1506 "prog_io_util.m"
    {
#line 1506 "prog_io_util.m"
      parse_tree__prog_io_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1506 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_12_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1506 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_12_12, 1) = ((MR_Box) (parse_tree__prog_io_util__V_14_14));
#line 1506 "prog_io_util.m"
    }
#line 1506 "prog_io_util.m"
    {
#line 1506 "prog_io_util.m"
      parse_tree__prog_io_util__Pieces_10 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_util__TypeCtorInfo_35_35, parse_tree__prog_io_util__V_11_11, parse_tree__prog_io_util__V_12_12);
    }
#line 1509 "prog_io_util.m"
    {
#line 1509 "prog_io_util.m"
      parse_tree__prog_io_util__V_29_29 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_util__TypeInfo_for_T_34, parse_tree__prog_io_util__Term_7);
    }
#line 1509 "prog_io_util.m"
    {
#line 1509 "prog_io_util.m"
      parse_tree__prog_io_util__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1509 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_10));
#line 1509 "prog_io_util.m"
    }
#line 1509 "prog_io_util.m"
    {
#line 1509 "prog_io_util.m"
      parse_tree__prog_io_util__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1509 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_util__V_31_31));
#line 1509 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1509 "prog_io_util.m"
    }
#line 1509 "prog_io_util.m"
    {
#line 1509 "prog_io_util.m"
      parse_tree__prog_io_util__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1509 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io_util__V_29_29));
#line 1509 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, 1) = ((MR_Box) (parse_tree__prog_io_util__V_30_30));
#line 1509 "prog_io_util.m"
    }
#line 1509 "prog_io_util.m"
    {
#line 1509 "prog_io_util.m"
      parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1509 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_util__V_28_28));
#line 1509 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1509 "prog_io_util.m"
    }
#line 1508 "prog_io_util.m"
    {
#line 1508 "prog_io_util.m"
      MR_Word base;
#line 1508 "prog_io_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1508 "prog_io_util.m"
      *parse_tree__prog_io_util__Spec_8 = base;
#line 1508 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1508 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1508 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
#line 1508 "prog_io_util.m"
    }
#line 1504 "prog_io_util.m"
  }
#line 1501 "prog_io_util.m"
}

#line 1491 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(
#line 1491 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_34,
#line 1491 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_5,
#line 1491 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 1491 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_7,
#line 1491 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Spec_8)
#line 1491 "prog_io_util.m"
{
#line 1494 "prog_io_util.m"
  {
#line 1494 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1494 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeCtorInfo_35_35;
#line 1494 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__TermStr_9;
#line 1494 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Pieces_10;
#line 1494 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;
#line 1494 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_12_12;
#line 1494 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_14_14;
#line 1494 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_17_17;
#line 1494 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_18_18;
#line 1494 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_27_27;
#line 1494 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_28_28;
#line 1494 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_29_29;
#line 1494 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_30_30;
#line 1494 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_31_31;

#line 1495 "prog_io_util.m"
    {
#line 1495 "prog_io_util.m"
      parse_tree__prog_io_util__TermStr_9 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_util__TypeInfo_for_T_34, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__Term_7);
    }
#line 8725 "parse_tree.prog_io_util.c"
    parse_tree__prog_io_util__TypeCtorInfo_35_35 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1496 "prog_io_util.m"
    {
#line 1496 "prog_io_util.m"
      parse_tree__prog_io_util__V_11_11 = mercury__cord__list_1_f_0(parse_tree__prog_io_util__TypeCtorInfo_35_35, parse_tree__prog_io_util__ContextPieces_5);
    }
#line 1497 "prog_io_util.m"
    {
#line 1497 "prog_io_util.m"
      parse_tree__prog_io_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1497 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1497 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_18_18, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_9));
#line 1497 "prog_io_util.m"
    }
#line 1497 "prog_io_util.m"
    {
#line 1497 "prog_io_util.m"
      parse_tree__prog_io_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1497 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_17_17, 0) = ((MR_Box) (parse_tree__prog_io_util__V_18_18));
#line 1497 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[8])));
#line 1497 "prog_io_util.m"
    }
#line 1497 "prog_io_util.m"
    {
#line 1497 "prog_io_util.m"
      parse_tree__prog_io_util__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1497 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_14_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[11])));
#line 1497 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_14_14, 1) = ((MR_Box) (parse_tree__prog_io_util__V_17_17));
#line 1497 "prog_io_util.m"
    }
#line 1496 "prog_io_util.m"
    {
#line 1496 "prog_io_util.m"
      parse_tree__prog_io_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1496 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_12_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1496 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_12_12, 1) = ((MR_Box) (parse_tree__prog_io_util__V_14_14));
#line 1496 "prog_io_util.m"
    }
#line 1496 "prog_io_util.m"
    {
#line 1496 "prog_io_util.m"
      parse_tree__prog_io_util__Pieces_10 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_util__TypeCtorInfo_35_35, parse_tree__prog_io_util__V_11_11, parse_tree__prog_io_util__V_12_12);
    }
#line 1499 "prog_io_util.m"
    {
#line 1499 "prog_io_util.m"
      parse_tree__prog_io_util__V_29_29 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_util__TypeInfo_for_T_34, parse_tree__prog_io_util__Term_7);
    }
#line 1499 "prog_io_util.m"
    {
#line 1499 "prog_io_util.m"
      parse_tree__prog_io_util__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1499 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_10));
#line 1499 "prog_io_util.m"
    }
#line 1499 "prog_io_util.m"
    {
#line 1499 "prog_io_util.m"
      parse_tree__prog_io_util__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1499 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_util__V_31_31));
#line 1499 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1499 "prog_io_util.m"
    }
#line 1499 "prog_io_util.m"
    {
#line 1499 "prog_io_util.m"
      parse_tree__prog_io_util__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1499 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io_util__V_29_29));
#line 1499 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, 1) = ((MR_Box) (parse_tree__prog_io_util__V_30_30));
#line 1499 "prog_io_util.m"
    }
#line 1499 "prog_io_util.m"
    {
#line 1499 "prog_io_util.m"
      parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1499 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_util__V_28_28));
#line 1499 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1499 "prog_io_util.m"
    }
#line 1498 "prog_io_util.m"
    {
#line 1498 "prog_io_util.m"
      MR_Word base;
#line 1498 "prog_io_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1498 "prog_io_util.m"
      *parse_tree__prog_io_util__Spec_8 = base;
#line 1498 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1498 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1498 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
#line 1498 "prog_io_util.m"
    }
#line 1494 "prog_io_util.m"
  }
#line 1491 "prog_io_util.m"
}

#line 1194 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__map_parser_one_or_more_4_p_0(
#line 1194 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_29,
#line 1194 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Parser_5,
#line 1194 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Head_6,
#line 1194 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Tail_7,
#line 1194 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_8)
#line 1194 "prog_io_util.m"
{
#line 1197 "prog_io_util.m"
  {
#line 1197 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1197 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__HeadResult_9;
#line 1198 "prog_io_util.m"
    void MR_CALL (* parse_tree__prog_io_util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Parser_5, (MR_Integer) 1)));
#line 1198 "prog_io_util.m"
    MR_Box parse_tree__prog_io_util__conv1_HeadResult_9;

#line 1198 "prog_io_util.m"
    {
#line 1198 "prog_io_util.m"
      parse_tree__prog_io_util__func_0(((MR_Box) parse_tree__prog_io_util__Parser_5), ((MR_Box) (parse_tree__prog_io_util__Head_6)), &parse_tree__prog_io_util__conv1_HeadResult_9);
    }
#line 1198 "prog_io_util.m"
    parse_tree__prog_io_util__HeadResult_9 = ((MR_Word) parse_tree__prog_io_util__conv1_HeadResult_9);
#line 1208 "prog_io_util.m"
    if ((parse_tree__prog_io_util__Tail_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1200 "prog_io_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadResult_9)) == (MR_mktag((MR_Integer) 0))))
#line 1203 "prog_io_util.m"
        *parse_tree__prog_io_util__Result_8 = (MR_Word) parse_tree__prog_io_util__HeadResult_9;
#line 1200 "prog_io_util.m"
      else
#line 1205 "prog_io_util.m"
        {
#line 1205 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__Item_11 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadResult_9, (MR_Integer) 0));
#line 1205 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_23_23;

#line 1206 "prog_io_util.m"
          {
#line 1206 "prog_io_util.m"
            parse_tree__prog_io_util__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1206 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_23_23, 0) = parse_tree__prog_io_util__Item_11;
#line 1206 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1206 "prog_io_util.m"
          }
#line 1206 "prog_io_util.m"
          {
#line 1206 "prog_io_util.m"
            MR_Word base;
#line 1206 "prog_io_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1206 "prog_io_util.m"
            *parse_tree__prog_io_util__Result_8 = base;
#line 1206 "prog_io_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_23_23));
#line 1206 "prog_io_util.m"
          }
#line 1205 "prog_io_util.m"
        }
#line 1208 "prog_io_util.m"
    else
#line 1209 "prog_io_util.m"
      {
#line 1209 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__HeadTail_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Tail_7, (MR_Integer) 0)));
#line 1209 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TailTail_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Tail_7, (MR_Integer) 1)));
#line 1209 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TailResult_14;

#line 1210 "prog_io_util.m"
        {
#line 1210 "prog_io_util.m"
          parse_tree__prog_io_util__map_parser_one_or_more_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_29, parse_tree__prog_io_util__Parser_5, parse_tree__prog_io_util__HeadTail_12, parse_tree__prog_io_util__TailTail_13, &parse_tree__prog_io_util__TailResult_14);
        }
#line 1215 "prog_io_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadResult_9)) == (MR_mktag((MR_Integer) 0))))
#line 1215 "prog_io_util.m"
          {
#line 1215 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadResult_9, (MR_Integer) 0)));

#line 1215 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__TailResult_14)) == (MR_mktag((MR_Integer) 0))))
#line 1212 "prog_io_util.m"
              {
#line 1212 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailSpecs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TailResult_14, (MR_Integer) 0)));
#line 1212 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_22_22;

#line 1214 "prog_io_util.m"
                {
#line 1214 "prog_io_util.m"
                  parse_tree__prog_io_util__V_22_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_util__V_31_31, parse_tree__prog_io_util__TailSpecs_16);
                }
#line 1214 "prog_io_util.m"
                {
#line 1214 "prog_io_util.m"
                  MR_Word base;
#line 1214 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1214 "prog_io_util.m"
                  *parse_tree__prog_io_util__Result_8 = base;
#line 1214 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_22_22));
#line 1214 "prog_io_util.m"
                }
#line 1212 "prog_io_util.m"
              }
#line 1215 "prog_io_util.m"
            else
#line 1218 "prog_io_util.m"
              *parse_tree__prog_io_util__Result_8 = (MR_Word) parse_tree__prog_io_util__HeadResult_9;
#line 1215 "prog_io_util.m"
          }
#line 1215 "prog_io_util.m"
        else
#line 1215 "prog_io_util.m"
          {
#line 1215 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_32_32 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadResult_9, (MR_Integer) 0));

#line 1215 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__TailResult_14)) == (MR_mktag((MR_Integer) 0))))
#line 1222 "prog_io_util.m"
              *parse_tree__prog_io_util__Result_8 = parse_tree__prog_io_util__TailResult_14;
#line 1215 "prog_io_util.m"
            else
#line 1224 "prog_io_util.m"
              {
#line 1224 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailItems_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TailResult_14, (MR_Integer) 0)));
#line 1224 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_21_21;

#line 1226 "prog_io_util.m"
                {
#line 1226 "prog_io_util.m"
                  parse_tree__prog_io_util__V_21_21 = mercury__list__one_or_more_cons_2_f_0(parse_tree__prog_io_util__TypeInfo_for_T_29, parse_tree__prog_io_util__V_32_32, parse_tree__prog_io_util__TailItems_20);
                }
#line 1226 "prog_io_util.m"
                {
#line 1226 "prog_io_util.m"
                  MR_Word base;
#line 1226 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1226 "prog_io_util.m"
                  *parse_tree__prog_io_util__Result_8 = base;
#line 1226 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_21_21));
#line 1226 "prog_io_util.m"
                }
#line 1224 "prog_io_util.m"
              }
#line 1215 "prog_io_util.m"
          }
#line 1209 "prog_io_util.m"
      }
#line 1197 "prog_io_util.m"
  }
#line 1194 "prog_io_util.m"
}

#line 1108 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_bound_inst_3_p_0(
#line 1108 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_4,
#line 1108 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__InstTerm_5,
#line 1108 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__BoundInst_6)
#line 1108 "prog_io_util.m"
{
#line 1111 "prog_io_util.m"
  {
#line 1111 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__InstTerm_5)) == (MR_mktag((MR_Integer) 0)));
#line 1111 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Functor_7;
#line 1111 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Args0_8;
#line 1111 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Args1_12;
#line 1111 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__ConsId_14;
#line 1111 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Args_21;
#line 1112 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 1112 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1112 "prog_io_util.m"
      {
#line 1112 "prog_io_util.m"
        parse_tree__prog_io_util__Functor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__InstTerm_5, (MR_Integer) 0)));
#line 1112 "prog_io_util.m"
        parse_tree__prog_io_util__Args0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__InstTerm_5, (MR_Integer) 1)));
#line 1112 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__InstTerm_5, (MR_Integer) 2)));
#line 1120 "prog_io_util.m"
#line 1120 "prog_io_util.m"
        switch (MR_tag((MR_Word) parse_tree__prog_io_util__Functor_7)) {
#line 1120 "prog_io_util.m"
          default:
#line 1120 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 1120 "prog_io_util.m"
            break;
#line 1120 "prog_io_util.m"
          case (MR_Integer) 0:
#line 1115 "prog_io_util.m"
            {
#line 1115 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__TypeInfo_25_25;
#line 1115 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__SymName_11;
#line 1115 "prog_io_util.m"
              MR_Integer parse_tree__prog_io_util__Arity_13;
#line 1115 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_22_22;

#line 1116 "prog_io_util.m"
              {
#line 1116 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_from_f_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__Functor_7, parse_tree__prog_io_util__Args0_8, &parse_tree__prog_io_util__SymName_11, &parse_tree__prog_io_util__Args1_12);
              }
#line 1115 "prog_io_util.m"
              if (parse_tree__prog_io_util__succeeded)
#line 1115 "prog_io_util.m"
                {
#line 9087 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__TypeInfo_25_25 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[0];
#line 1118 "prog_io_util.m"
                  {
#line 1118 "prog_io_util.m"
                    mercury__list__length_2_p_0(parse_tree__prog_io_util__TypeInfo_25_25, parse_tree__prog_io_util__Args1_12, &parse_tree__prog_io_util__Arity_13);
                  }
#line 1119 "prog_io_util.m"
                  {
#line 1119 "prog_io_util.m"
                    parse_tree__prog_io_util__V_22_22 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                  }
#line 1119 "prog_io_util.m"
                  {
#line 1119 "prog_io_util.m"
                    parse_tree__prog_io_util__ConsId_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1119 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__ConsId_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1119 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__ConsId_14, 1) = ((MR_Box) (parse_tree__prog_io_util__SymName_11));
#line 1119 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__ConsId_14, 2) = ((MR_Box) (parse_tree__prog_io_util__Arity_13));
#line 1119 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__ConsId_14, 3) = ((MR_Box) (parse_tree__prog_io_util__V_22_22));
#line 1119 "prog_io_util.m"
                  }
#line 1119 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1115 "prog_io_util.m"
                }
#line 1115 "prog_io_util.m"
            }
#line 1120 "prog_io_util.m"
            break;
#line 1120 "prog_io_util.m"
          case (MR_Integer) 1:
#line 1120 "prog_io_util.m"
          case (MR_Integer) 2:
#line 1130 "prog_io_util.m"
            {
#line 1130 "prog_io_util.m"
              MR_Integer parse_tree__prog_io_util__Arity_23;

#line 1131 "prog_io_util.m"
              parse_tree__prog_io_util__Args1_12 = parse_tree__prog_io_util__Args0_8;
#line 1132 "prog_io_util.m"
              {
#line 1132 "prog_io_util.m"
                mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[0], parse_tree__prog_io_util__Args1_12, &parse_tree__prog_io_util__Arity_23);
              }
#line 1133 "prog_io_util.m"
              {
#line 1133 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = parse_tree__prog_util__make_functor_cons_id_3_p_0(parse_tree__prog_io_util__Functor_7, parse_tree__prog_io_util__Arity_23, &parse_tree__prog_io_util__ConsId_14);
              }
#line 1130 "prog_io_util.m"
            }
#line 1120 "prog_io_util.m"
            break;
#line 1120 "prog_io_util.m"
          case (MR_Integer) 3:
#line 1120 "prog_io_util.m"
#line 1120 "prog_io_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Functor_7, (MR_Integer) 0)))) {
#line 1120 "prog_io_util.m"
              default:
#line 1120 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 1120 "prog_io_util.m"
                break;
#line 1120 "prog_io_util.m"
              case (MR_Integer) 0:
#line 1120 "prog_io_util.m"
              case (MR_Integer) 1:
#line 1130 "prog_io_util.m"
                {
#line 1130 "prog_io_util.m"
                  MR_Integer parse_tree__prog_io_util__Arity_23;

#line 1131 "prog_io_util.m"
                  parse_tree__prog_io_util__Args1_12 = parse_tree__prog_io_util__Args0_8;
#line 1132 "prog_io_util.m"
                  {
#line 1132 "prog_io_util.m"
                    mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[0], parse_tree__prog_io_util__Args1_12, &parse_tree__prog_io_util__Arity_23);
                  }
#line 1133 "prog_io_util.m"
                  {
#line 1133 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = parse_tree__prog_util__make_functor_cons_id_3_p_0(parse_tree__prog_io_util__Functor_7, parse_tree__prog_io_util__Arity_23, &parse_tree__prog_io_util__ConsId_14);
                  }
#line 1130 "prog_io_util.m"
                }
#line 1120 "prog_io_util.m"
                break;
#line 1120 "prog_io_util.m"
            }
#line 1120 "prog_io_util.m"
            break;
#line 1120 "prog_io_util.m"
        }
#line 1111 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1111 "prog_io_util.m"
          {
#line 1135 "prog_io_util.m"
            {
#line 1135 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__Args1_12, &parse_tree__prog_io_util__Args_21);
            }
#line 1111 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1111 "prog_io_util.m"
              {
#line 1136 "prog_io_util.m"
                {
#line 1136 "prog_io_util.m"
                  MR_Word base;
#line 1136 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1136 "prog_io_util.m"
                  *parse_tree__prog_io_util__BoundInst_6 = base;
#line 1136 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__ConsId_14));
#line 1136 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_21));
#line 1136 "prog_io_util.m"
                }
#line 1136 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1111 "prog_io_util.m"
              }
#line 1111 "prog_io_util.m"
          }
#line 1112 "prog_io_util.m"
      }
#line 1111 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1111 "prog_io_util.m"
  }
#line 1108 "prog_io_util.m"
}

#line 1100 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_bound_inst_list_3_p_0(
#line 1100 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
#line 1100 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 1100 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3)
#line 1100 "prog_io_util.m"
{
#line 1103 "prog_io_util.m"
  {
#line 1103 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 1103 "prog_io_util.m"
    if ((parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1103 "prog_io_util.m"
      {
#line 1103 "prog_io_util.m"
        *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1103 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1103 "prog_io_util.m"
      }
#line 1103 "prog_io_util.m"
    else
#line 1104 "prog_io_util.m"
      {
#line 1104 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__H0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1104 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__T0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1104 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__H_8;
#line 1104 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__T_9;

#line 1105 "prog_io_util.m"
        {
#line 1105 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_bound_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__H0_6, &parse_tree__prog_io_util__H_8);
        }
#line 1104 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1104 "prog_io_util.m"
          {
#line 1106 "prog_io_util.m"
            {
#line 1106 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_bound_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__T0_7, &parse_tree__prog_io_util__T_9);
            }
#line 1104 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1104 "prog_io_util.m"
              {
#line 1104 "prog_io_util.m"
                {
#line 1104 "prog_io_util.m"
                  MR_Word base;
#line 1104 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1104 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 1104 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__H_8));
#line 1104 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__T_9));
#line 1104 "prog_io_util.m"
                }
#line 1104 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1104 "prog_io_util.m"
              }
#line 1104 "prog_io_util.m"
          }
#line 1104 "prog_io_util.m"
      }
#line 1103 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1103 "prog_io_util.m"
  }
#line 1100 "prog_io_util.m"
}

#line 1093 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_1(
#line 1093 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg)
#line 1093 "prog_io_util.m"
{
#line 1093 "prog_io_util.m"
  {
#line 1093 "prog_io_util.m"
    struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s * parse_tree__prog_io_util__env_ptr = (struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s *) parse_tree__prog_io_util__env_ptr_arg;

#line 1093 "prog_io_util.m"
    MR_builtin_longjmp((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__commit_0, 1);
#line 1093 "prog_io_util.m"
  }
#line 1093 "prog_io_util.m"
}

#line 1093 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_2(
#line 1093 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg)
#line 1093 "prog_io_util.m"
{
#line 1093 "prog_io_util.m"
  {
#line 1093 "prog_io_util.m"
    struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s * parse_tree__prog_io_util__env_ptr = (struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s *) parse_tree__prog_io_util__env_ptr_arg;

#line 1093 "prog_io_util.m"
    {
#line 1094 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_16_16;
#line 1095 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_18_18;
#line 1096 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_19_19;

#line 1094 "prog_io_util.m"
      (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13)) == (MR_mktag((MR_Integer) 1)));
#line 1094 "prog_io_util.m"
      if ((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 1094 "prog_io_util.m"
        {
#line 1094 "prog_io_util.m"
          {
#line 1094 "prog_io_util.m"
            (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13, (MR_Integer) 0)));
#line 1094 "prog_io_util.m"
            (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13, (MR_Integer) 1)));
#line 1094 "prog_io_util.m"
          }
#line 1093 "prog_io_util.m"
          {
#line 1094 "prog_io_util.m"
            (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 1094 "prog_io_util.m"
            if ((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 1094 "prog_io_util.m"
              {
#line 1094 "prog_io_util.m"
                {
#line 1094 "prog_io_util.m"
                  (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20, (MR_Integer) 0)));
#line 1094 "prog_io_util.m"
                  parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20, (MR_Integer) 1)));
#line 1094 "prog_io_util.m"
                }
#line 1093 "prog_io_util.m"
                {
#line 1095 "prog_io_util.m"
                  (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__ConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F1_14, (MR_Integer) 0)));
#line 1095 "prog_io_util.m"
                  parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F1_14, (MR_Integer) 1)));
#line 1096 "prog_io_util.m"
                  (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F2_15, (MR_Integer) 0)));
#line 1096 "prog_io_util.m"
                  parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F2_15, (MR_Integer) 1)));
#line 1096 "prog_io_util.m"
                  {
#line 1096 "prog_io_util.m"
                    (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = parse_tree__prog_data____Unify____cons_id_0_0((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__ConsId_17, (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_24_24);
                  }
#line 1096 "prog_io_util.m"
                  if ((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 1096 "prog_io_util.m"
                    {
#line 1096 "prog_io_util.m"
                      parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_1(parse_tree__prog_io_util__env_ptr);
                    }
#line 1093 "prog_io_util.m"
                }
#line 1094 "prog_io_util.m"
              }
#line 1093 "prog_io_util.m"
          }
#line 1094 "prog_io_util.m"
        }
#line 1093 "prog_io_util.m"
    }
#line 1093 "prog_io_util.m"
  }
#line 1093 "prog_io_util.m"
}

#line 1093 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_3(
#line 1093 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg)
#line 1093 "prog_io_util.m"
{
#line 1093 "prog_io_util.m"
  {
#line 1093 "prog_io_util.m"
    struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s * parse_tree__prog_io_util__env_ptr = (struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s *) parse_tree__prog_io_util__env_ptr_arg;

#line 1093 "prog_io_util.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__commit_0) == 0)
#line 1093 "prog_io_util.m"
      {
#line 1093 "prog_io_util.m"
        {
#line 1093 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_12_12;

#line 1093 "prog_io_util.m"
          {
#line 1093 "prog_io_util.m"
            mercury__list__append_3_p_4((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23, &parse_tree__prog_io_util__V_12_12, &(parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13, (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__Functors_11, parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_2, parse_tree__prog_io_util__env_ptr);
          }
#line 1093 "prog_io_util.m"
        }
#line 1093 "prog_io_util.m"
        (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = MR_FALSE;
#line 1093 "prog_io_util.m"
      }
#line 1093 "prog_io_util.m"
    else
#line 1093 "prog_io_util.m"
      (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = MR_TRUE;
#line 1093 "prog_io_util.m"
  }
#line 1093 "prog_io_util.m"
}

#line 1084 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(
#line 1084 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
#line 1084 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Disj_6,
#line 1084 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Uniqueness_7,
#line 1084 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Inst_8)
#line 1084 "prog_io_util.m"
{
#line 1084 "prog_io_util.m"
  {
#line 1084 "prog_io_util.m"
    struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s parse_tree__prog_io_util__env;

#line 1087 "prog_io_util.m"
    {
#line 1087 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__Functors0_10;
#line 1087 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_21_21;
#line 1087 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_31_31;
#line 1087 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__H0_38;
#line 1087 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__T0_39;
#line 1087 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__H_40;
#line 1087 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__T_41;

#line 1172 "prog_io_util.m"
      {
#line 1172 "prog_io_util.m"
        parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ";", parse_tree__prog_io_util__Disj_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_31_31);
      }
#line 1142 "prog_io_util.m"
      parse_tree__prog_io_util__H0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_31_31, (MR_Integer) 0)));
#line 1142 "prog_io_util.m"
      parse_tree__prog_io_util__T0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_31_31, (MR_Integer) 1)));
#line 1105 "prog_io_util.m"
      {
#line 1105 "prog_io_util.m"
        (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = parse_tree__prog_io_util__convert_bound_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__H0_38, &parse_tree__prog_io_util__H_40);
      }
#line 1087 "prog_io_util.m"
      if ((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 1087 "prog_io_util.m"
        {
#line 1106 "prog_io_util.m"
          {
#line 1106 "prog_io_util.m"
            (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = parse_tree__prog_io_util__convert_bound_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__T0_39, &parse_tree__prog_io_util__T_41);
          }
#line 1087 "prog_io_util.m"
          if ((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 1087 "prog_io_util.m"
            {
#line 9526 "parse_tree.prog_io_util.c"
              (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 1104 "prog_io_util.m"
              {
#line 1104 "prog_io_util.m"
                parse_tree__prog_io_util__Functors0_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1104 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Functors0_10, 0) = ((MR_Box) (parse_tree__prog_io_util__H_40));
#line 1104 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Functors0_10, 1) = ((MR_Box) (parse_tree__prog_io_util__T_41));
#line 1104 "prog_io_util.m"
              }
#line 1090 "prog_io_util.m"
              {
#line 1090 "prog_io_util.m"
                mercury__list__sort_2_p_0((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23, parse_tree__prog_io_util__Functors0_10, &(parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__Functors_11);
              }
#line 1093 "prog_io_util.m"
              {
#line 1093 "prog_io_util.m"
                parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_3(&parse_tree__prog_io_util__env);
              }
#line 1092 "prog_io_util.m"
              (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = !((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded);
#line 1087 "prog_io_util.m"
              if ((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 1087 "prog_io_util.m"
                {
#line 1098 "prog_io_util.m"
                  parse_tree__prog_io_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1098 "prog_io_util.m"
                  {
#line 1098 "prog_io_util.m"
                    MR_Word base;
#line 1098 "prog_io_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1098 "prog_io_util.m"
                    *parse_tree__prog_io_util__Inst_8 = base;
#line 1098 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1098 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Uniqueness_7));
#line 1098 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_21_21));
#line 1098 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) ((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__Functors_11));
#line 1098 "prog_io_util.m"
                  }
#line 1098 "prog_io_util.m"
                  (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = MR_TRUE;
#line 1087 "prog_io_util.m"
                }
#line 1087 "prog_io_util.m"
            }
#line 1087 "prog_io_util.m"
        }
#line 1087 "prog_io_util.m"
      return (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded;
#line 1087 "prog_io_util.m"
    }
#line 1084 "prog_io_util.m"
  }
#line 1084 "prog_io_util.m"
}

#line 991 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_higher_order_inst_4_p_0(
#line 991 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
#line 991 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__BeforeIsTerm_6,
#line 991 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__DetTerm_7,
#line 991 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Inst_8)
#line 991 "prog_io_util.m"
{
#line 995 "prog_io_util.m"
  {
#line 995 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__BeforeIsTerm_6)) == (MR_mktag((MR_Integer) 0)));
#line 995 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__BeforeIsFunctor_9;
#line 995 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__BeforeIsArgTerms_10;
#line 995 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_27_27;
#line 997 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;

#line 997 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 997 "prog_io_util.m"
      {
#line 997 "prog_io_util.m"
        parse_tree__prog_io_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__BeforeIsTerm_6, (MR_Integer) 0)));
#line 997 "prog_io_util.m"
        parse_tree__prog_io_util__BeforeIsArgTerms_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__BeforeIsTerm_6, (MR_Integer) 1)));
#line 997 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__BeforeIsTerm_6, (MR_Integer) 2)));
#line 997 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_27_27)) == (MR_mktag((MR_Integer) 0)));
#line 997 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 997 "prog_io_util.m"
          {
#line 997 "prog_io_util.m"
            parse_tree__prog_io_util__BeforeIsFunctor_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, (MR_Integer) 0)));
#line 1034 "prog_io_util.m"
            if ((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "=") == 0))
#line 1035 "prog_io_util.m"
              {
#line 1035 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TypeCtorInfo_53_53;
#line 1035 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__FuncTerm_18;
#line 1035 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__RetModeTerm_19;
#line 1035 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__FuncTermFunctor_20;
#line 1035 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__ArgModesTerms_21;
#line 1035 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_28_28;
#line 1035 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_29_29;
#line 1035 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_30_30;
#line 1035 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_31_31;
#line 1035 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_32_32;
#line 1035 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_34_34;
#line 1035 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_35_35;
#line 1035 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_36_36;
#line 1035 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__DetString_51;
#line 1037 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_22_22;
#line 1058 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_23_23;

#line 1036 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__BeforeIsArgTerms_10)) == (MR_mktag((MR_Integer) 1)));
#line 1036 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1036 "prog_io_util.m"
                  {
#line 1036 "prog_io_util.m"
                    parse_tree__prog_io_util__FuncTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__BeforeIsArgTerms_10, (MR_Integer) 0)));
#line 1036 "prog_io_util.m"
                    parse_tree__prog_io_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__BeforeIsArgTerms_10, (MR_Integer) 1)));
#line 1036 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 1036 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1036 "prog_io_util.m"
                      {
#line 1036 "prog_io_util.m"
                        parse_tree__prog_io_util__RetModeTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_28_28, (MR_Integer) 0)));
#line 1036 "prog_io_util.m"
                        parse_tree__prog_io_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_28_28, (MR_Integer) 1)));
#line 1036 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1035 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1035 "prog_io_util.m"
                          {
#line 1037 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__FuncTerm_18)) == (MR_mktag((MR_Integer) 0)));
#line 1037 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1037 "prog_io_util.m"
                              {
#line 1037 "prog_io_util.m"
                                parse_tree__prog_io_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_18, (MR_Integer) 0)));
#line 1037 "prog_io_util.m"
                                parse_tree__prog_io_util__ArgModesTerms_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_18, (MR_Integer) 1)));
#line 1037 "prog_io_util.m"
                                parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_18, (MR_Integer) 2)));
#line 1037 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_30_30)) == (MR_mktag((MR_Integer) 0)));
#line 1037 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 1037 "prog_io_util.m"
                                  {
#line 1037 "prog_io_util.m"
                                    parse_tree__prog_io_util__FuncTermFunctor_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_30_30, (MR_Integer) 0)));
#line 1058 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 1058 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 1058 "prog_io_util.m"
                                      {
#line 1058 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 0)));
#line 1058 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 1)));
#line 1058 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 2)));
#line 1058 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1035 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 1035 "prog_io_util.m"
                                          {
#line 1058 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_31_31)) == (MR_mktag((MR_Integer) 0)));
#line 1058 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 1058 "prog_io_util.m"
                                              {
#line 1058 "prog_io_util.m"
                                                parse_tree__prog_io_util__DetString_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_31_31, (MR_Integer) 0)));
#line 1062 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 9746 "parse_tree.prog_io_util.c"
                                                parse_tree__prog_io_util__TypeCtorInfo_53_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1063 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_35_35 = (MR_Integer) 1;
#line 1064 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 9752 "parse_tree.prog_io_util.c"
                                                if ((strcmp(parse_tree__prog_io_util__FuncTermFunctor_20, (MR_String) "func") == 0))
#line 9754 "parse_tree.prog_io_util.c"
                                                  {
#line 9756 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_39_39;
#line 9758 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_40_40;
#line 9760 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__ArgModes0_55;
#line 9762 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__RetMode_56;
#line 9764 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__FuncInst_57;
#line 9766 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_58_58;
#line 9768 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__ArgModes_60;
#line 9770 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__Detism_61;

#line 1059 "prog_io_util.m"
                                                    {
#line 1059 "prog_io_util.m"
                                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_51, &parse_tree__prog_io_util__Detism_61);
                                                    }
#line 9778 "parse_tree.prog_io_util.c"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 9780 "parse_tree.prog_io_util.c"
                                                      {
#line 1060 "prog_io_util.m"
                                                        {
#line 1060 "prog_io_util.m"
                                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__ArgModesTerms_21, &parse_tree__prog_io_util__ArgModes0_55);
                                                        }
#line 9787 "parse_tree.prog_io_util.c"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 9789 "parse_tree.prog_io_util.c"
                                                          {
#line 1061 "prog_io_util.m"
                                                            {
#line 1061 "prog_io_util.m"
                                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__RetModeTerm_19, &parse_tree__prog_io_util__RetMode_56);
                                                            }
#line 9796 "parse_tree.prog_io_util.c"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 9798 "parse_tree.prog_io_util.c"
                                                              {
#line 1062 "prog_io_util.m"
                                                                {
#line 1062 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1062 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_58_58, 0) = ((MR_Box) (parse_tree__prog_io_util__RetMode_56));
#line 1062 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_58_58, 1) = ((MR_Box) (parse_tree__prog_io_util__V_34_34));
#line 1062 "prog_io_util.m"
                                                                }
#line 1062 "prog_io_util.m"
                                                                {
#line 1062 "prog_io_util.m"
                                                                  mercury__list__append_3_p_1(parse_tree__prog_io_util__TypeCtorInfo_53_53, parse_tree__prog_io_util__ArgModes0_55, parse_tree__prog_io_util__V_58_58, &parse_tree__prog_io_util__ArgModes_60);
                                                                }
#line 1067 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_39_39 = (MR_Integer) 0;
#line 1063 "prog_io_util.m"
                                                                {
#line 1063 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__FuncInst_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1063 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_57, 0) = ((MR_Box) (parse_tree__prog_io_util__V_35_35));
#line 1063 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_57, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_60));
#line 1063 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_57, 2) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 1063 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_57, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_61));
#line 1063 "prog_io_util.m"
                                                                }
#line 1067 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__FuncInst_57);
#line 1067 "prog_io_util.m"
                                                                {
#line 1067 "prog_io_util.m"
                                                                  MR_Word base;
#line 1067 "prog_io_util.m"
                                                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1067 "prog_io_util.m"
                                                                  *parse_tree__prog_io_util__Inst_8 = base;
#line 1067 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1067 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_39_39));
#line 1067 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_40_40));
#line 1067 "prog_io_util.m"
                                                                }
#line 1067 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 9851 "parse_tree.prog_io_util.c"
                                                              }
#line 9853 "parse_tree.prog_io_util.c"
                                                          }
#line 9855 "parse_tree.prog_io_util.c"
                                                      }
#line 9857 "parse_tree.prog_io_util.c"
                                                  }
#line 9859 "parse_tree.prog_io_util.c"
                                                else
#line 9861 "parse_tree.prog_io_util.c"
                                                if ((strcmp(parse_tree__prog_io_util__FuncTermFunctor_20, (MR_String) "any_func") == 0))
#line 9863 "parse_tree.prog_io_util.c"
                                                  {
#line 9865 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__ArgModes0_24;
#line 9867 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__RetMode_25;
#line 9869 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__FuncInst_26;
#line 9871 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_33_33;
#line 9873 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_37_37;
#line 9875 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_38_38;
#line 9877 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__ArgModes_50;
#line 9879 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__Detism_52;

#line 1059 "prog_io_util.m"
                                                    {
#line 1059 "prog_io_util.m"
                                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_51, &parse_tree__prog_io_util__Detism_52);
                                                    }
#line 9887 "parse_tree.prog_io_util.c"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 9889 "parse_tree.prog_io_util.c"
                                                      {
#line 1060 "prog_io_util.m"
                                                        {
#line 1060 "prog_io_util.m"
                                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__ArgModesTerms_21, &parse_tree__prog_io_util__ArgModes0_24);
                                                        }
#line 9896 "parse_tree.prog_io_util.c"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 9898 "parse_tree.prog_io_util.c"
                                                          {
#line 1061 "prog_io_util.m"
                                                            {
#line 1061 "prog_io_util.m"
                                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__RetModeTerm_19, &parse_tree__prog_io_util__RetMode_25);
                                                            }
#line 9905 "parse_tree.prog_io_util.c"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 9907 "parse_tree.prog_io_util.c"
                                                              {
#line 1062 "prog_io_util.m"
                                                                {
#line 1062 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1062 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_util__RetMode_25));
#line 1062 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io_util__V_34_34));
#line 1062 "prog_io_util.m"
                                                                }
#line 1062 "prog_io_util.m"
                                                                {
#line 1062 "prog_io_util.m"
                                                                  mercury__list__append_3_p_1(parse_tree__prog_io_util__TypeCtorInfo_53_53, parse_tree__prog_io_util__ArgModes0_24, parse_tree__prog_io_util__V_33_33, &parse_tree__prog_io_util__ArgModes_50);
                                                                }
#line 1070 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_37_37 = (MR_Integer) 0;
#line 1063 "prog_io_util.m"
                                                                {
#line 1063 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__FuncInst_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1063 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_26, 0) = ((MR_Box) (parse_tree__prog_io_util__V_35_35));
#line 1063 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_26, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_50));
#line 1063 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_26, 2) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 1063 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_26, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_52));
#line 1063 "prog_io_util.m"
                                                                }
#line 1070 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__FuncInst_26);
#line 1070 "prog_io_util.m"
                                                                {
#line 1070 "prog_io_util.m"
                                                                  MR_Word base;
#line 1070 "prog_io_util.m"
                                                                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1070 "prog_io_util.m"
                                                                  *parse_tree__prog_io_util__Inst_8 = base;
#line 1070 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_37_37));
#line 1070 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_38_38));
#line 1070 "prog_io_util.m"
                                                                }
#line 1070 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 9958 "parse_tree.prog_io_util.c"
                                                              }
#line 9960 "parse_tree.prog_io_util.c"
                                                          }
#line 9962 "parse_tree.prog_io_util.c"
                                                      }
#line 9964 "parse_tree.prog_io_util.c"
                                                  }
#line 9966 "parse_tree.prog_io_util.c"
                                                else
#line 9968 "parse_tree.prog_io_util.c"
                                                  parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 1058 "prog_io_util.m"
                                              }
#line 1035 "prog_io_util.m"
                                          }
#line 1058 "prog_io_util.m"
                                      }
#line 1037 "prog_io_util.m"
                                  }
#line 1037 "prog_io_util.m"
                              }
#line 1035 "prog_io_util.m"
                          }
#line 1036 "prog_io_util.m"
                      }
#line 1036 "prog_io_util.m"
                  }
#line 1035 "prog_io_util.m"
              }
#line 1034 "prog_io_util.m"
            else
#line 1034 "prog_io_util.m"
            if ((((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "any_pred") == 0)) || ((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "pred") == 0))))
#line 1001 "prog_io_util.m"
              {
#line 1001 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__ArgModes_13;
#line 1001 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__DetString_14;
#line 1001 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Detism_16;
#line 1001 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__PredInst_17;
#line 1001 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_41_41;
#line 1001 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_42_42;
#line 1001 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_43_43;
#line 1001 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_44_44;
#line 1023 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_15_15;

#line 1022 "prog_io_util.m"
                {
#line 1022 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__BeforeIsArgTerms_10, &parse_tree__prog_io_util__ArgModes_13);
                }
#line 1001 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1001 "prog_io_util.m"
                  {
#line 1023 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 1023 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1023 "prog_io_util.m"
                      {
#line 1023 "prog_io_util.m"
                        parse_tree__prog_io_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 0)));
#line 1023 "prog_io_util.m"
                        parse_tree__prog_io_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 1)));
#line 1023 "prog_io_util.m"
                        parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 2)));
#line 1023 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1001 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1001 "prog_io_util.m"
                          {
#line 1023 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_41_41)) == (MR_mktag((MR_Integer) 0)));
#line 1023 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1023 "prog_io_util.m"
                              {
#line 1023 "prog_io_util.m"
                                parse_tree__prog_io_util__DetString_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_41_41, (MR_Integer) 0)));
#line 1024 "prog_io_util.m"
                                {
#line 1024 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_14, &parse_tree__prog_io_util__Detism_16);
                                }
#line 1001 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 1001 "prog_io_util.m"
                                  {
#line 1025 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_43_43 = (MR_Integer) 0;
#line 1026 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1025 "prog_io_util.m"
                                    {
#line 1025 "prog_io_util.m"
                                      parse_tree__prog_io_util__PredInst_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1025 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_17, 0) = ((MR_Box) (parse_tree__prog_io_util__V_43_43));
#line 1025 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_17, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_13));
#line 1025 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_17, 2) = ((MR_Box) (parse_tree__prog_io_util__V_44_44));
#line 1025 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_17, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_16));
#line 1025 "prog_io_util.m"
                                    }
#line 10075 "parse_tree.prog_io_util.c"
                                    if ((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "pred") == 0))
#line 10077 "parse_tree.prog_io_util.c"
                                      {
#line 10079 "parse_tree.prog_io_util.c"
                                        MR_Word parse_tree__prog_io_util__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__PredInst_17);

#line 1029 "prog_io_util.m"
                                        {
#line 1029 "prog_io_util.m"
                                          MR_Word base;
#line 1029 "prog_io_util.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1029 "prog_io_util.m"
                                          *parse_tree__prog_io_util__Inst_8 = base;
#line 1029 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1029 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1029 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_48_48));
#line 1029 "prog_io_util.m"
                                        }
#line 10098 "parse_tree.prog_io_util.c"
                                      }
#line 10100 "parse_tree.prog_io_util.c"
                                    else
#line 10102 "parse_tree.prog_io_util.c"
                                      {
#line 10104 "parse_tree.prog_io_util.c"
                                        MR_Word parse_tree__prog_io_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__PredInst_17);

#line 1032 "prog_io_util.m"
                                        {
#line 1032 "prog_io_util.m"
                                          MR_Word base;
#line 1032 "prog_io_util.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1032 "prog_io_util.m"
                                          *parse_tree__prog_io_util__Inst_8 = base;
#line 1032 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1032 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_46_46));
#line 1032 "prog_io_util.m"
                                        }
#line 10121 "parse_tree.prog_io_util.c"
                                      }
#line 10123 "parse_tree.prog_io_util.c"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1001 "prog_io_util.m"
                                  }
#line 1023 "prog_io_util.m"
                              }
#line 1001 "prog_io_util.m"
                          }
#line 1023 "prog_io_util.m"
                      }
#line 1001 "prog_io_util.m"
                  }
#line 1001 "prog_io_util.m"
              }
#line 1034 "prog_io_util.m"
            else
#line 1034 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 997 "prog_io_util.m"
          }
#line 997 "prog_io_util.m"
      }
#line 995 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 995 "prog_io_util.m"
  }
#line 991 "prog_io_util.m"
}

#line 676 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_higher_order_mode_4_p_0(
#line 676 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
#line 676 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__BeforeIsTerm_6,
#line 676 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__DetTerm_7,
#line 676 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Mode_8)
#line 676 "prog_io_util.m"
{
#line 680 "prog_io_util.m"
  {
#line 680 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__BeforeIsTerm_6)) == (MR_mktag((MR_Integer) 0)));
#line 680 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__BeforeIsFunctor_9;
#line 680 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__BeforeIsArgTerms_10;
#line 680 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_28_28;
#line 682 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;

#line 682 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 682 "prog_io_util.m"
      {
#line 682 "prog_io_util.m"
        parse_tree__prog_io_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__BeforeIsTerm_6, (MR_Integer) 0)));
#line 682 "prog_io_util.m"
        parse_tree__prog_io_util__BeforeIsArgTerms_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__BeforeIsTerm_6, (MR_Integer) 1)));
#line 682 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__BeforeIsTerm_6, (MR_Integer) 2)));
#line 682 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_28_28)) == (MR_mktag((MR_Integer) 0)));
#line 682 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 682 "prog_io_util.m"
          {
#line 682 "prog_io_util.m"
            parse_tree__prog_io_util__BeforeIsFunctor_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, (MR_Integer) 0)));
#line 723 "prog_io_util.m"
            if ((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "=") == 0))
#line 724 "prog_io_util.m"
              {
#line 724 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TypeCtorInfo_57_57;
#line 724 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__FuncTerm_19;
#line 724 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__RetModeTerm_20;
#line 724 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__FuncTermFunctor_21;
#line 724 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__ArgModesTerms_22;
#line 724 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_29_29;
#line 724 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_30_30;
#line 724 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_31_31;
#line 724 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_32_32;
#line 724 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_33_33;
#line 724 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_35_35;
#line 724 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_36_36;
#line 724 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_37_37;
#line 724 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__DetString_54;
#line 724 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Inst_56;
#line 726 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_23_23;
#line 748 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_24_24;

#line 725 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__BeforeIsArgTerms_10)) == (MR_mktag((MR_Integer) 1)));
#line 725 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 725 "prog_io_util.m"
                  {
#line 725 "prog_io_util.m"
                    parse_tree__prog_io_util__FuncTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__BeforeIsArgTerms_10, (MR_Integer) 0)));
#line 725 "prog_io_util.m"
                    parse_tree__prog_io_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__BeforeIsArgTerms_10, (MR_Integer) 1)));
#line 725 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 725 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 725 "prog_io_util.m"
                      {
#line 725 "prog_io_util.m"
                        parse_tree__prog_io_util__RetModeTerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, (MR_Integer) 0)));
#line 725 "prog_io_util.m"
                        parse_tree__prog_io_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, (MR_Integer) 1)));
#line 725 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 724 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 724 "prog_io_util.m"
                          {
#line 726 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__FuncTerm_19)) == (MR_mktag((MR_Integer) 0)));
#line 726 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 726 "prog_io_util.m"
                              {
#line 726 "prog_io_util.m"
                                parse_tree__prog_io_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_19, (MR_Integer) 0)));
#line 726 "prog_io_util.m"
                                parse_tree__prog_io_util__ArgModesTerms_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_19, (MR_Integer) 1)));
#line 726 "prog_io_util.m"
                                parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_19, (MR_Integer) 2)));
#line 726 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_31_31)) == (MR_mktag((MR_Integer) 0)));
#line 726 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 726 "prog_io_util.m"
                                  {
#line 726 "prog_io_util.m"
                                    parse_tree__prog_io_util__FuncTermFunctor_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_31_31, (MR_Integer) 0)));
#line 748 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 748 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 748 "prog_io_util.m"
                                      {
#line 748 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 0)));
#line 748 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 1)));
#line 748 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 2)));
#line 748 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 724 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 724 "prog_io_util.m"
                                          {
#line 748 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_32_32)) == (MR_mktag((MR_Integer) 0)));
#line 748 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 748 "prog_io_util.m"
                                              {
#line 748 "prog_io_util.m"
                                                parse_tree__prog_io_util__DetString_54 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_32_32, (MR_Integer) 0)));
#line 752 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_35_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10309 "parse_tree.prog_io_util.c"
                                                parse_tree__prog_io_util__TypeCtorInfo_57_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 753 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_36_36 = (MR_Integer) 1;
#line 754 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_37_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10315 "parse_tree.prog_io_util.c"
                                                if ((strcmp(parse_tree__prog_io_util__FuncTermFunctor_21, (MR_String) "func") == 0))
#line 10317 "parse_tree.prog_io_util.c"
                                                  {
#line 10319 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_40_40;
#line 10321 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_41_41;
#line 10323 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__ArgModes0_59;
#line 10325 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__RetMode_60;
#line 10327 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__FuncInstInfo_61;
#line 10329 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_62_62;
#line 10331 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__ArgModes_64;
#line 10333 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__Detism_65;

#line 749 "prog_io_util.m"
                                                    {
#line 749 "prog_io_util.m"
                                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_54, &parse_tree__prog_io_util__Detism_65);
                                                    }
#line 10341 "parse_tree.prog_io_util.c"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 10343 "parse_tree.prog_io_util.c"
                                                      {
#line 750 "prog_io_util.m"
                                                        {
#line 750 "prog_io_util.m"
                                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__ArgModesTerms_22, &parse_tree__prog_io_util__ArgModes0_59);
                                                        }
#line 10350 "parse_tree.prog_io_util.c"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 10352 "parse_tree.prog_io_util.c"
                                                          {
#line 751 "prog_io_util.m"
                                                            {
#line 751 "prog_io_util.m"
                                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__RetModeTerm_20, &parse_tree__prog_io_util__RetMode_60);
                                                            }
#line 10359 "parse_tree.prog_io_util.c"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 10361 "parse_tree.prog_io_util.c"
                                                              {
#line 752 "prog_io_util.m"
                                                                {
#line 752 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_util__RetMode_60));
#line 752 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_62_62, 1) = ((MR_Box) (parse_tree__prog_io_util__V_35_35));
#line 752 "prog_io_util.m"
                                                                }
#line 752 "prog_io_util.m"
                                                                {
#line 752 "prog_io_util.m"
                                                                  mercury__list__append_3_p_1(parse_tree__prog_io_util__TypeCtorInfo_57_57, parse_tree__prog_io_util__ArgModes0_59, parse_tree__prog_io_util__V_62_62, &parse_tree__prog_io_util__ArgModes_64);
                                                                }
#line 757 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_40_40 = (MR_Integer) 0;
#line 753 "prog_io_util.m"
                                                                {
#line 753 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__FuncInstInfo_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 753 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_61, 0) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 753 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_61, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_64));
#line 753 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_61, 2) = ((MR_Box) (parse_tree__prog_io_util__V_37_37));
#line 753 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_61, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_65));
#line 753 "prog_io_util.m"
                                                                }
#line 757 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__FuncInstInfo_61);
#line 757 "prog_io_util.m"
                                                                {
#line 757 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__Inst_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 757 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 757 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_56, 1) = ((MR_Box) (parse_tree__prog_io_util__V_40_40));
#line 757 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_56, 2) = ((MR_Box) (parse_tree__prog_io_util__V_41_41));
#line 757 "prog_io_util.m"
                                                                }
#line 757 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 10410 "parse_tree.prog_io_util.c"
                                                              }
#line 10412 "parse_tree.prog_io_util.c"
                                                          }
#line 10414 "parse_tree.prog_io_util.c"
                                                      }
#line 10416 "parse_tree.prog_io_util.c"
                                                  }
#line 10418 "parse_tree.prog_io_util.c"
                                                else
#line 10420 "parse_tree.prog_io_util.c"
                                                if ((strcmp(parse_tree__prog_io_util__FuncTermFunctor_21, (MR_String) "any_func") == 0))
#line 10422 "parse_tree.prog_io_util.c"
                                                  {
#line 10424 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__ArgModes0_25;
#line 10426 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__RetMode_26;
#line 10428 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__FuncInstInfo_27;
#line 10430 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_34_34;
#line 10432 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_38_38;
#line 10434 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_39_39;
#line 10436 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__ArgModes_53;
#line 10438 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__Detism_55;

#line 749 "prog_io_util.m"
                                                    {
#line 749 "prog_io_util.m"
                                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_54, &parse_tree__prog_io_util__Detism_55);
                                                    }
#line 10446 "parse_tree.prog_io_util.c"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 10448 "parse_tree.prog_io_util.c"
                                                      {
#line 750 "prog_io_util.m"
                                                        {
#line 750 "prog_io_util.m"
                                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__ArgModesTerms_22, &parse_tree__prog_io_util__ArgModes0_25);
                                                        }
#line 10455 "parse_tree.prog_io_util.c"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 10457 "parse_tree.prog_io_util.c"
                                                          {
#line 751 "prog_io_util.m"
                                                            {
#line 751 "prog_io_util.m"
                                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__RetModeTerm_20, &parse_tree__prog_io_util__RetMode_26);
                                                            }
#line 10464 "parse_tree.prog_io_util.c"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 10466 "parse_tree.prog_io_util.c"
                                                              {
#line 752 "prog_io_util.m"
                                                                {
#line 752 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_util__RetMode_26));
#line 752 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, 1) = ((MR_Box) (parse_tree__prog_io_util__V_35_35));
#line 752 "prog_io_util.m"
                                                                }
#line 752 "prog_io_util.m"
                                                                {
#line 752 "prog_io_util.m"
                                                                  mercury__list__append_3_p_1(parse_tree__prog_io_util__TypeCtorInfo_57_57, parse_tree__prog_io_util__ArgModes0_25, parse_tree__prog_io_util__V_34_34, &parse_tree__prog_io_util__ArgModes_53);
                                                                }
#line 760 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_38_38 = (MR_Integer) 0;
#line 753 "prog_io_util.m"
                                                                {
#line 753 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__FuncInstInfo_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 753 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_27, 0) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 753 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_27, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_53));
#line 753 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_27, 2) = ((MR_Box) (parse_tree__prog_io_util__V_37_37));
#line 753 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_27, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_55));
#line 753 "prog_io_util.m"
                                                                }
#line 760 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__FuncInstInfo_27);
#line 760 "prog_io_util.m"
                                                                {
#line 760 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__Inst_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 760 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Inst_56, 0) = ((MR_Box) (parse_tree__prog_io_util__V_38_38));
#line 760 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Inst_56, 1) = ((MR_Box) (parse_tree__prog_io_util__V_39_39));
#line 760 "prog_io_util.m"
                                                                }
#line 760 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 10513 "parse_tree.prog_io_util.c"
                                                              }
#line 10515 "parse_tree.prog_io_util.c"
                                                          }
#line 10517 "parse_tree.prog_io_util.c"
                                                      }
#line 10519 "parse_tree.prog_io_util.c"
                                                  }
#line 10521 "parse_tree.prog_io_util.c"
                                                else
#line 10523 "parse_tree.prog_io_util.c"
                                                  parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 724 "prog_io_util.m"
                                                if (parse_tree__prog_io_util__succeeded)
#line 724 "prog_io_util.m"
                                                  {
#line 762 "prog_io_util.m"
                                                    {
#line 762 "prog_io_util.m"
                                                      MR_Word base;
#line 762 "prog_io_util.m"
                                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 762 "prog_io_util.m"
                                                      *parse_tree__prog_io_util__Mode_8 = base;
#line 762 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Inst_56));
#line 762 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Inst_56));
#line 762 "prog_io_util.m"
                                                    }
#line 762 "prog_io_util.m"
                                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 724 "prog_io_util.m"
                                                  }
#line 748 "prog_io_util.m"
                                              }
#line 724 "prog_io_util.m"
                                          }
#line 748 "prog_io_util.m"
                                      }
#line 726 "prog_io_util.m"
                                  }
#line 726 "prog_io_util.m"
                              }
#line 724 "prog_io_util.m"
                          }
#line 725 "prog_io_util.m"
                      }
#line 725 "prog_io_util.m"
                  }
#line 724 "prog_io_util.m"
              }
#line 723 "prog_io_util.m"
            else
#line 723 "prog_io_util.m"
            if ((((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "any_pred") == 0)) || ((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "pred") == 0))))
#line 686 "prog_io_util.m"
              {
#line 686 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__ArgModes_13;
#line 686 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__DetString_14;
#line 686 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Detism_16;
#line 686 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__PredInstInfo_17;
#line 686 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Inst_18;
#line 686 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_43_43;
#line 686 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_44_44;
#line 686 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_45_45;
#line 686 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_46_46;
#line 711 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_15_15;

#line 710 "prog_io_util.m"
                {
#line 710 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__BeforeIsArgTerms_10, &parse_tree__prog_io_util__ArgModes_13);
                }
#line 686 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 686 "prog_io_util.m"
                  {
#line 711 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 711 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 711 "prog_io_util.m"
                      {
#line 711 "prog_io_util.m"
                        parse_tree__prog_io_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 0)));
#line 711 "prog_io_util.m"
                        parse_tree__prog_io_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 1)));
#line 711 "prog_io_util.m"
                        parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 2)));
#line 711 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 686 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 686 "prog_io_util.m"
                          {
#line 711 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_43_43)) == (MR_mktag((MR_Integer) 0)));
#line 711 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 711 "prog_io_util.m"
                              {
#line 711 "prog_io_util.m"
                                parse_tree__prog_io_util__DetString_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_43_43, (MR_Integer) 0)));
#line 712 "prog_io_util.m"
                                {
#line 712 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_14, &parse_tree__prog_io_util__Detism_16);
                                }
#line 686 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 686 "prog_io_util.m"
                                  {
#line 713 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_45_45 = (MR_Integer) 0;
#line 714 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 713 "prog_io_util.m"
                                    {
#line 713 "prog_io_util.m"
                                      parse_tree__prog_io_util__PredInstInfo_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 713 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_17, 0) = ((MR_Box) (parse_tree__prog_io_util__V_45_45));
#line 713 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_17, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_13));
#line 713 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_17, 2) = ((MR_Box) (parse_tree__prog_io_util__V_46_46));
#line 713 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_17, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_16));
#line 713 "prog_io_util.m"
                                    }
#line 10654 "parse_tree.prog_io_util.c"
                                    if ((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "pred") == 0))
#line 10656 "parse_tree.prog_io_util.c"
                                      {
#line 10658 "parse_tree.prog_io_util.c"
                                        MR_Word parse_tree__prog_io_util__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__PredInstInfo_17);

#line 717 "prog_io_util.m"
                                        {
#line 717 "prog_io_util.m"
                                          parse_tree__prog_io_util__Inst_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 717 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 717 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_18, 1) = ((MR_Box) ((MR_Integer) 0));
#line 717 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_18, 2) = ((MR_Box) (parse_tree__prog_io_util__V_50_50));
#line 717 "prog_io_util.m"
                                        }
#line 10673 "parse_tree.prog_io_util.c"
                                      }
#line 10675 "parse_tree.prog_io_util.c"
                                    else
#line 10677 "parse_tree.prog_io_util.c"
                                      {
#line 10679 "parse_tree.prog_io_util.c"
                                        MR_Word parse_tree__prog_io_util__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__PredInstInfo_17);

#line 720 "prog_io_util.m"
                                        {
#line 720 "prog_io_util.m"
                                          parse_tree__prog_io_util__Inst_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 720 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Inst_18, 0) = ((MR_Box) ((MR_Integer) 0));
#line 720 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Inst_18, 1) = ((MR_Box) (parse_tree__prog_io_util__V_48_48));
#line 720 "prog_io_util.m"
                                        }
#line 10692 "parse_tree.prog_io_util.c"
                                      }
#line 722 "prog_io_util.m"
                                    {
#line 722 "prog_io_util.m"
                                      MR_Word base;
#line 722 "prog_io_util.m"
                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 722 "prog_io_util.m"
                                      *parse_tree__prog_io_util__Mode_8 = base;
#line 722 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Inst_18));
#line 722 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Inst_18));
#line 722 "prog_io_util.m"
                                    }
#line 722 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 686 "prog_io_util.m"
                                  }
#line 711 "prog_io_util.m"
                              }
#line 686 "prog_io_util.m"
                          }
#line 711 "prog_io_util.m"
                      }
#line 686 "prog_io_util.m"
                  }
#line 686 "prog_io_util.m"
              }
#line 723 "prog_io_util.m"
            else
#line 723 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 682 "prog_io_util.m"
          }
#line 682 "prog_io_util.m"
      }
#line 680 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 680 "prog_io_util.m"
  }
#line 676 "prog_io_util.m"
}

#line 616 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_qualified_term_3_p_0(
#line 616 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 616 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Args_2,
#line 616 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Term_3)
#line 616 "prog_io_util.m"
{
#line 618 "prog_io_util.m"
  {
#line 618 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 618 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 621 "prog_io_util.m"
      {
#line 621 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Qualifier_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 621 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 621 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Context_13;
#line 621 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__QualTerm_14;
#line 621 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Term0_15;
#line 621 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_17_17;
#line 621 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_20_20;
#line 621 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_21_21;

#line 622 "prog_io_util.m"
        {
#line 622 "prog_io_util.m"
          parse_tree__prog_io_util__Context_13 = mercury__term__context_init_0_f_0();
        }
#line 623 "prog_io_util.m"
        {
#line 623 "prog_io_util.m"
          parse_tree__prog_io_util__unparse_qualified_term_3_p_0(parse_tree__prog_io_util__Qualifier_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__QualTerm_14);
        }
#line 624 "prog_io_util.m"
        {
#line 624 "prog_io_util.m"
          parse_tree__prog_io_util__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 624 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_17_17, 0) = ((MR_Box) (parse_tree__prog_io_util__Name_10));
#line 624 "prog_io_util.m"
        }
#line 624 "prog_io_util.m"
        {
#line 624 "prog_io_util.m"
          parse_tree__prog_io_util__Term0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 624 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_17_17));
#line 624 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_15, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_2));
#line 624 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_15, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_13));
#line 624 "prog_io_util.m"
        }
#line 625 "prog_io_util.m"
        {
#line 625 "prog_io_util.m"
          parse_tree__prog_io_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, 0) = ((MR_Box) (parse_tree__prog_io_util__Term0_15));
#line 625 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 625 "prog_io_util.m"
        }
#line 625 "prog_io_util.m"
        {
#line 625 "prog_io_util.m"
          parse_tree__prog_io_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, 0) = ((MR_Box) (parse_tree__prog_io_util__QualTerm_14));
#line 625 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, 1) = ((MR_Box) (parse_tree__prog_io_util__V_21_21));
#line 625 "prog_io_util.m"
        }
#line 625 "prog_io_util.m"
        {
#line 625 "prog_io_util.m"
          MR_Word base;
#line 625 "prog_io_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 625 "prog_io_util.m"
          *parse_tree__prog_io_util__Term_3 = base;
#line 625 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[10]));
#line 625 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_20_20));
#line 625 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_13));
#line 625 "prog_io_util.m"
        }
#line 621 "prog_io_util.m"
      }
#line 618 "prog_io_util.m"
    else
#line 618 "prog_io_util.m"
      {
#line 618 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 618 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Context_7;
#line 618 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_8_8;

#line 619 "prog_io_util.m"
        {
#line 619 "prog_io_util.m"
          parse_tree__prog_io_util__Context_7 = mercury__term__context_init_0_f_0();
        }
#line 620 "prog_io_util.m"
        {
#line 620 "prog_io_util.m"
          parse_tree__prog_io_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 620 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, 0) = ((MR_Box) (parse_tree__prog_io_util__Name_4));
#line 620 "prog_io_util.m"
        }
#line 620 "prog_io_util.m"
        {
#line 620 "prog_io_util.m"
          MR_Word base;
#line 620 "prog_io_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 620 "prog_io_util.m"
          *parse_tree__prog_io_util__Term_3 = base;
#line 620 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_8_8));
#line 620 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_2));
#line 620 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_7));
#line 620 "prog_io_util.m"
        }
#line 618 "prog_io_util.m"
      }
#line 618 "prog_io_util.m"
  }
#line 616 "prog_io_util.m"
}

#line 614 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_type_list_2_p_0_1(
#line 614 "prog_io_util.m"
  MR_Box parse_tree__prog_io_util__closure_arg,
#line 614 "prog_io_util.m"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 614 "prog_io_util.m"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2)
#line 614 "prog_io_util.m"
{
#line 614 "prog_io_util.m"
  {
#line 614 "prog_io_util.m"
    MR_Box parse_tree__prog_io_util__closure = parse_tree__prog_io_util__closure_arg;
#line 614 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__conv0_Term_4;

#line 614 "prog_io_util.m"
    {
#line 614 "prog_io_util.m"
      parse_tree__prog_io_util__unparse_type_2_p_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_Term_4);
    }
#line 614 "prog_io_util.m"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_Term_4));
#line 614 "prog_io_util.m"
  }
#line 614 "prog_io_util.m"
}

#line 611 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_type_list_2_p_0(
#line 611 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Types_3,
#line 611 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Terms_4)
#line 611 "prog_io_util.m"
{
#line 613 "prog_io_util.m"
  {
#line 613 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 614 "prog_io_util.m"
    {
#line 614 "prog_io_util.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_io_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_io_util_scalar_common_2[3], parse_tree__prog_io_util__Types_3, parse_tree__prog_io_util__Terms_4);
    }
#line 613 "prog_io_util.m"
  }
#line 611 "prog_io_util.m"
}

#line 538 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_types_acc_7_p_0(
#line 538 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 538 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_2,
#line 538 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_3,
#line 538 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_0_4,
#line 538 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_5,
#line 538 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__STATE_VARIABLE_Specs_0_6,
#line 538 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__STATE_VARIABLE_Specs_7)
#line 538 "prog_io_util.m"
{
#line 542 "prog_io_util.m"
  while (MR_TRUE)
#line 542 "prog_io_util.m"
    {
#line 542 "prog_io_util.m"
      /* tailcall optimized into a loop */
#line 542 "prog_io_util.m"
      {
#line 542 "prog_io_util.m"
        MR_bool parse_tree__prog_io_util__succeeded;

#line 542 "prog_io_util.m"
        if ((parse_tree__prog_io_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 542 "prog_io_util.m"
          {
#line 542 "prog_io_util.m"
            *parse_tree__prog_io_util__STATE_VARIABLE_Specs_7 = parse_tree__prog_io_util__STATE_VARIABLE_Specs_0_6;
#line 542 "prog_io_util.m"
            *parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_5 = parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_0_4;
#line 542 "prog_io_util.m"
          }
#line 542 "prog_io_util.m"
        else
#line 543 "prog_io_util.m"
          {
#line 543 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Term_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 543 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Terms_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 543 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TermResult_22;
#line 543 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__STATE_VARIABLE_Specs_29_29;
#line 543 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_30_30;

#line 545 "prog_io_util.m"
            {
#line 545 "prog_io_util.m"
              parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_util__Term_16, parse_tree__prog_io_util__VarSet_2, parse_tree__prog_io_util__ContextPieces_3, &parse_tree__prog_io_util__TermResult_22);
            }
#line 549 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__TermResult_22)) == (MR_mktag((MR_Integer) 0))))
#line 550 "prog_io_util.m"
              {
#line 550 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TermSpecs_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TermResult_22, (MR_Integer) 0)));

#line 551 "prog_io_util.m"
                {
#line 551 "prog_io_util.m"
                  parse_tree__prog_io_util__STATE_VARIABLE_Specs_29_29 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_util__TermSpecs_24, parse_tree__prog_io_util__STATE_VARIABLE_Specs_0_6);
                }
#line 550 "prog_io_util.m"
                parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_30_30 = parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_0_4;
#line 550 "prog_io_util.m"
              }
#line 549 "prog_io_util.m"
            else
#line 547 "prog_io_util.m"
              {
#line 547 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermResult_22, (MR_Integer) 0)));

#line 548 "prog_io_util.m"
                {
#line 548 "prog_io_util.m"
                  parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 548 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_30_30, 0) = ((MR_Box) (parse_tree__prog_io_util__Type_23));
#line 548 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_30_30, 1) = ((MR_Box) (parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_0_4));
#line 548 "prog_io_util.m"
                }
#line 547 "prog_io_util.m"
                parse_tree__prog_io_util__STATE_VARIABLE_Specs_29_29 = parse_tree__prog_io_util__STATE_VARIABLE_Specs_0_6;
#line 547 "prog_io_util.m"
              }
#line 553 "prog_io_util.m"
            /* direct tailcall eliminated */
#line 553 "prog_io_util.m"
            {
#line 553 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__HeadVar__1__tmp_copy_1 = parse_tree__prog_io_util__Terms_17;
#line 553 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_0__tmp_copy_4 = parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_30_30;
#line 553 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__STATE_VARIABLE_Specs_0__tmp_copy_6 = parse_tree__prog_io_util__STATE_VARIABLE_Specs_29_29;

#line 553 "prog_io_util.m"
              parse_tree__prog_io_util__STATE_VARIABLE_Specs_0_6 = parse_tree__prog_io_util__STATE_VARIABLE_Specs_0__tmp_copy_6;
#line 553 "prog_io_util.m"
              parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_0_4 = parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_0__tmp_copy_4;
#line 553 "prog_io_util.m"
              parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__HeadVar__1__tmp_copy_1;
#line 553 "prog_io_util.m"
            }
#line 553 "prog_io_util.m"
            continue;
#line 543 "prog_io_util.m"
          }
#line 542 "prog_io_util.m"
      }
#line 542 "prog_io_util.m"
      break;
#line 542 "prog_io_util.m"
    }
#line 538 "prog_io_util.m"
}

#line 510 "prog_io_util.m"
static MR_Word MR_CALL 
parse_tree__prog_io_util__ill_formed_type_result_3_f_0(
#line 510 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_5,
#line 510 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 510 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_7)
#line 510 "prog_io_util.m"
{
#line 513 "prog_io_util.m"
  {
#line 513 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 513 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Result_8;
#line 513 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeCtorInfo_37_37 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 513 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeCtorInfo_38_38;
#line 513 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__TermStr_9;
#line 513 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Pieces_10;
#line 513 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Spec_11;
#line 513 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_12_12;
#line 513 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 513 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_15_15;
#line 513 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_18_18;
#line 513 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_19_19;
#line 513 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_28_28;
#line 513 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_29_29;
#line 513 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_30_30;
#line 513 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_31_31;
#line 513 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_32_32;
#line 513 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_35_35;

#line 514 "prog_io_util.m"
    {
#line 514 "prog_io_util.m"
      parse_tree__prog_io_util__TermStr_9 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_util__TypeCtorInfo_37_37, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__Term_7);
    }
#line 11127 "parse_tree.prog_io_util.c"
    parse_tree__prog_io_util__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 515 "prog_io_util.m"
    {
#line 515 "prog_io_util.m"
      parse_tree__prog_io_util__V_12_12 = mercury__cord__list_1_f_0(parse_tree__prog_io_util__TypeCtorInfo_38_38, parse_tree__prog_io_util__ContextPieces_5);
    }
#line 516 "prog_io_util.m"
    {
#line 516 "prog_io_util.m"
      parse_tree__prog_io_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 516 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 516 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_9));
#line 516 "prog_io_util.m"
    }
#line 516 "prog_io_util.m"
    {
#line 516 "prog_io_util.m"
      parse_tree__prog_io_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 516 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, 0) = ((MR_Box) (parse_tree__prog_io_util__V_19_19));
#line 516 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[8])));
#line 516 "prog_io_util.m"
    }
#line 516 "prog_io_util.m"
    {
#line 516 "prog_io_util.m"
      parse_tree__prog_io_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 516 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[10])));
#line 516 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, 1) = ((MR_Box) (parse_tree__prog_io_util__V_18_18));
#line 516 "prog_io_util.m"
    }
#line 515 "prog_io_util.m"
    {
#line 515 "prog_io_util.m"
      parse_tree__prog_io_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_13_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 515 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_13_13, 1) = ((MR_Box) (parse_tree__prog_io_util__V_15_15));
#line 515 "prog_io_util.m"
    }
#line 515 "prog_io_util.m"
    {
#line 515 "prog_io_util.m"
      parse_tree__prog_io_util__Pieces_10 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_util__TypeCtorInfo_38_38, parse_tree__prog_io_util__V_12_12, parse_tree__prog_io_util__V_13_13);
    }
#line 518 "prog_io_util.m"
    {
#line 518 "prog_io_util.m"
      parse_tree__prog_io_util__V_30_30 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_util__TypeCtorInfo_37_37, parse_tree__prog_io_util__Term_7);
    }
#line 518 "prog_io_util.m"
    {
#line 518 "prog_io_util.m"
      parse_tree__prog_io_util__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 518 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_10));
#line 518 "prog_io_util.m"
    }
#line 518 "prog_io_util.m"
    {
#line 518 "prog_io_util.m"
      parse_tree__prog_io_util__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_util__V_32_32));
#line 518 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 518 "prog_io_util.m"
    }
#line 518 "prog_io_util.m"
    {
#line 518 "prog_io_util.m"
      parse_tree__prog_io_util__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 518 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io_util__V_30_30));
#line 518 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io_util__V_31_31));
#line 518 "prog_io_util.m"
    }
#line 518 "prog_io_util.m"
    {
#line 518 "prog_io_util.m"
      parse_tree__prog_io_util__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io_util__V_29_29));
#line 518 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 518 "prog_io_util.m"
    }
#line 517 "prog_io_util.m"
    {
#line 517 "prog_io_util.m"
      parse_tree__prog_io_util__Spec_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 517 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 517 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 517 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_11, 2) = ((MR_Box) (parse_tree__prog_io_util__V_28_28));
#line 517 "prog_io_util.m"
    }
#line 519 "prog_io_util.m"
    {
#line 519 "prog_io_util.m"
      parse_tree__prog_io_util__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_11));
#line 519 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "prog_io_util.m"
    }
#line 519 "prog_io_util.m"
    {
#line 519 "prog_io_util.m"
      parse_tree__prog_io_util__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 519 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_util__V_35_35));
#line 519 "prog_io_util.m"
    }
#line 513 "prog_io_util.m"
    return parse_tree__prog_io_util__Result_8;
#line 513 "prog_io_util.m"
  }
#line 510 "prog_io_util.m"
}

#line 330 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_compound_type_5_p_0(
#line 330 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_6,
#line 330 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_7,
#line 330 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_8,
#line 330 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__CompoundTypeKind_9,
#line 330 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_10)
#line 330 "prog_io_util.m"
{
#line 335 "prog_io_util.m"
  {
#line 335 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 335 "prog_io_util.m"
#line 335 "prog_io_util.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io_util__CompoundTypeKind_9)) {
#line 335 "prog_io_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 335 "prog_io_util.m"
      case (MR_Integer) 0:
#line 335 "prog_io_util.m"
        {
#line 335 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__CompoundTypeKind_9, (MR_Integer) 0)));
#line 335 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__ArgsResult_12;

#line 336 "prog_io_util.m"
          {
#line 336 "prog_io_util.m"
            parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_util__Args_11, parse_tree__prog_io_util__VarSet_7, parse_tree__prog_io_util__ContextPieces_8, &parse_tree__prog_io_util__ArgsResult_12);
          }
#line 340 "prog_io_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_util__ArgsResult_12)) == (MR_mktag((MR_Integer) 0))))
#line 342 "prog_io_util.m"
            *parse_tree__prog_io_util__Result_10 = (MR_Word) parse_tree__prog_io_util__ArgsResult_12;
#line 340 "prog_io_util.m"
          else
#line 338 "prog_io_util.m"
            {
#line 338 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__ArgTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ArgsResult_12, (MR_Integer) 0)));
#line 338 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_76_76;

#line 339 "prog_io_util.m"
              {
#line 339 "prog_io_util.m"
                parse_tree__prog_io_util__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 339 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 339 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_76_76, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTypes_13));
#line 339 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_76_76, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 339 "prog_io_util.m"
              }
#line 339 "prog_io_util.m"
              {
#line 339 "prog_io_util.m"
                MR_Word base;
#line 339 "prog_io_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 339 "prog_io_util.m"
                *parse_tree__prog_io_util__Result_10 = base;
#line 339 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_76_76));
#line 339 "prog_io_util.m"
              }
#line 338 "prog_io_util.m"
            }
#line 335 "prog_io_util.m"
        }
#line 335 "prog_io_util.m"
        break;
#line 335 "prog_io_util.m"
      case (MR_Integer) 1:
#line 365 "prog_io_util.m"
        {
#line 365 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__Arg1_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__CompoundTypeKind_9, (MR_Integer) 0)));
#line 365 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__Arg2_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__CompoundTypeKind_9, (MR_Integer) 1)));
#line 366 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__RetType_23;
#line 366 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__ArgTypes_81;
#line 367 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__FuncArgs_21;
#line 367 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_41_41;
#line 367 "prog_io_util.m"
          MR_String parse_tree__prog_io_util__V_42_42;
#line 367 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_22_22;

#line 367 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Arg1_19)) == (MR_mktag((MR_Integer) 0)));
#line 367 "prog_io_util.m"
          if (parse_tree__prog_io_util__succeeded)
#line 367 "prog_io_util.m"
            {
#line 367 "prog_io_util.m"
              parse_tree__prog_io_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Arg1_19, (MR_Integer) 0)));
#line 367 "prog_io_util.m"
              parse_tree__prog_io_util__FuncArgs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Arg1_19, (MR_Integer) 1)));
#line 367 "prog_io_util.m"
              parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Arg1_19, (MR_Integer) 2)));
#line 367 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_41_41)) == (MR_mktag((MR_Integer) 0)));
#line 367 "prog_io_util.m"
              if (parse_tree__prog_io_util__succeeded)
#line 367 "prog_io_util.m"
                {
#line 367 "prog_io_util.m"
                  parse_tree__prog_io_util__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_41_41, (MR_Integer) 0)));
#line 367 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_42_42, (MR_String) "func") == 0);
#line 367 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 367 "prog_io_util.m"
                    {
#line 368 "prog_io_util.m"
                      {
#line 368 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__maybe_parse_types_2_p_0(parse_tree__prog_io_util__FuncArgs_21, &parse_tree__prog_io_util__ArgTypes_81);
                      }
#line 367 "prog_io_util.m"
                      if (parse_tree__prog_io_util__succeeded)
#line 369 "prog_io_util.m"
                        {
#line 369 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_util__Arg2_20, &parse_tree__prog_io_util__RetType_23);
                        }
#line 367 "prog_io_util.m"
                    }
#line 367 "prog_io_util.m"
                }
#line 367 "prog_io_util.m"
            }
#line 366 "prog_io_util.m"
          if (parse_tree__prog_io_util__succeeded)
#line 371 "prog_io_util.m"
            {
#line 371 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_43_43;
#line 371 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_44_44;

#line 372 "prog_io_util.m"
              {
#line 372 "prog_io_util.m"
                parse_tree__prog_io_util__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 372 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_util__RetType_23));
#line 372 "prog_io_util.m"
              }
#line 372 "prog_io_util.m"
              mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 371 "prog_io_util.m"
              {
#line 371 "prog_io_util.m"
                parse_tree__prog_io_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 371 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 371 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_43_43, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTypes_81));
#line 371 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_43_43, 2) = ((MR_Box) (parse_tree__prog_io_util__V_44_44));
#line 371 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_43_43, 3) = ((MR_Box) ((MR_Integer) 0));
#line 371 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_43_43, 4) = NULL;
#line 371 "prog_io_util.m"
              }
#line 371 "prog_io_util.m"
              {
#line 371 "prog_io_util.m"
                MR_Word base;
#line 371 "prog_io_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 371 "prog_io_util.m"
                *parse_tree__prog_io_util__Result_10 = base;
#line 371 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_43_43));
#line 371 "prog_io_util.m"
              }
#line 371 "prog_io_util.m"
            }
#line 366 "prog_io_util.m"
          else
#line 374 "prog_io_util.m"
            {
#line 374 "prog_io_util.m"
              *parse_tree__prog_io_util__Result_10 = parse_tree__prog_io_util__ill_formed_type_result_3_f_0(parse_tree__prog_io_util__ContextPieces_8, parse_tree__prog_io_util__VarSet_7, parse_tree__prog_io_util__Term_6);
            }
#line 365 "prog_io_util.m"
        }
#line 335 "prog_io_util.m"
        break;
#line 335 "prog_io_util.m"
      case (MR_Integer) 2:
#line 355 "prog_io_util.m"
        {
#line 355 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__Args_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__CompoundTypeKind_9, (MR_Integer) 0)));
#line 356 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__ArgTypes_78;

#line 357 "prog_io_util.m"
          {
#line 357 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__maybe_parse_types_2_p_0(parse_tree__prog_io_util__Args_79, &parse_tree__prog_io_util__ArgTypes_78);
          }
#line 356 "prog_io_util.m"
          if (parse_tree__prog_io_util__succeeded)
#line 359 "prog_io_util.m"
            {
#line 359 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_47_47;

#line 360 "prog_io_util.m"
              mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 359 "prog_io_util.m"
              {
#line 359 "prog_io_util.m"
                parse_tree__prog_io_util__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 359 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 359 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_47_47, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTypes_78));
#line 359 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_47_47, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 359 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_47_47, 3) = ((MR_Box) ((MR_Integer) 0));
#line 359 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_47_47, 4) = NULL;
#line 359 "prog_io_util.m"
              }
#line 359 "prog_io_util.m"
              {
#line 359 "prog_io_util.m"
                MR_Word base;
#line 359 "prog_io_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 359 "prog_io_util.m"
                *parse_tree__prog_io_util__Result_10 = base;
#line 359 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_47_47));
#line 359 "prog_io_util.m"
              }
#line 359 "prog_io_util.m"
            }
#line 356 "prog_io_util.m"
          else
#line 362 "prog_io_util.m"
            {
#line 362 "prog_io_util.m"
              *parse_tree__prog_io_util__Result_10 = parse_tree__prog_io_util__ill_formed_type_result_3_f_0(parse_tree__prog_io_util__ContextPieces_8, parse_tree__prog_io_util__VarSet_7, parse_tree__prog_io_util__Term_6);
            }
#line 355 "prog_io_util.m"
        }
#line 335 "prog_io_util.m"
        break;
#line 335 "prog_io_util.m"
      case (MR_Integer) 3:
#line 335 "prog_io_util.m"
#line 335 "prog_io_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__CompoundTypeKind_9, (MR_Integer) 0)))) {
#line 335 "prog_io_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 335 "prog_io_util.m"
          case (MR_Integer) 0:
#line 377 "prog_io_util.m"
            {
#line 377 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Purity_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__CompoundTypeKind_9, (MR_Integer) 1)));
#line 377 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__SubTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__CompoundTypeKind_9, (MR_Integer) 2)));
#line 378 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__ResultPrime_29;
#line 379 "prog_io_util.m"
              MR_String parse_tree__prog_io_util__Name_26;
#line 379 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_30_30;
#line 379 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Args_94;
#line 379 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_27_27;

#line 379 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__SubTerm_25)) == (MR_mktag((MR_Integer) 0)));
#line 379 "prog_io_util.m"
              if (parse_tree__prog_io_util__succeeded)
#line 379 "prog_io_util.m"
                {
#line 379 "prog_io_util.m"
                  parse_tree__prog_io_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__SubTerm_25, (MR_Integer) 0)));
#line 379 "prog_io_util.m"
                  parse_tree__prog_io_util__Args_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__SubTerm_25, (MR_Integer) 1)));
#line 379 "prog_io_util.m"
                  parse_tree__prog_io_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__SubTerm_25, (MR_Integer) 2)));
#line 379 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_30_30)) == (MR_mktag((MR_Integer) 0)));
#line 379 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 379 "prog_io_util.m"
                    {
#line 379 "prog_io_util.m"
                      parse_tree__prog_io_util__Name_26 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_30_30, (MR_Integer) 0)));
#line 388 "prog_io_util.m"
                      if ((strcmp(parse_tree__prog_io_util__Name_26, (MR_String) "=") == 0))
#line 381 "prog_io_util.m"
                        {
#line 381 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_34_34;
#line 381 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_35_35;
#line 381 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_36_36;
#line 381 "prog_io_util.m"
                          MR_String parse_tree__prog_io_util__V_37_37;
#line 381 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_38_38;
#line 381 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_39_39;
#line 381 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__ArgTypes_83;
#line 381 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__Arg1_84;
#line 381 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__Arg2_85;
#line 381 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__FuncArgs_86;
#line 381 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__RetType_87;
#line 383 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_28_28;

#line 382 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args_94)) == (MR_mktag((MR_Integer) 1)));
#line 382 "prog_io_util.m"
                          if (parse_tree__prog_io_util__succeeded)
#line 382 "prog_io_util.m"
                            {
#line 382 "prog_io_util.m"
                              parse_tree__prog_io_util__Arg1_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_94, (MR_Integer) 0)));
#line 382 "prog_io_util.m"
                              parse_tree__prog_io_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_94, (MR_Integer) 1)));
#line 382 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 382 "prog_io_util.m"
                              if (parse_tree__prog_io_util__succeeded)
#line 382 "prog_io_util.m"
                                {
#line 382 "prog_io_util.m"
                                  parse_tree__prog_io_util__Arg2_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
#line 382 "prog_io_util.m"
                                  parse_tree__prog_io_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 1)));
#line 382 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 381 "prog_io_util.m"
                                  if (parse_tree__prog_io_util__succeeded)
#line 381 "prog_io_util.m"
                                    {
#line 383 "prog_io_util.m"
                                      parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Arg1_84)) == (MR_mktag((MR_Integer) 0)));
#line 383 "prog_io_util.m"
                                      if (parse_tree__prog_io_util__succeeded)
#line 383 "prog_io_util.m"
                                        {
#line 383 "prog_io_util.m"
                                          parse_tree__prog_io_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Arg1_84, (MR_Integer) 0)));
#line 383 "prog_io_util.m"
                                          parse_tree__prog_io_util__FuncArgs_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Arg1_84, (MR_Integer) 1)));
#line 383 "prog_io_util.m"
                                          parse_tree__prog_io_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Arg1_84, (MR_Integer) 2)));
#line 383 "prog_io_util.m"
                                          parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_36_36)) == (MR_mktag((MR_Integer) 0)));
#line 383 "prog_io_util.m"
                                          if (parse_tree__prog_io_util__succeeded)
#line 383 "prog_io_util.m"
                                            {
#line 383 "prog_io_util.m"
                                              parse_tree__prog_io_util__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_36_36, (MR_Integer) 0)));
#line 383 "prog_io_util.m"
                                              parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_37_37, (MR_String) "func") == 0);
#line 381 "prog_io_util.m"
                                              if (parse_tree__prog_io_util__succeeded)
#line 381 "prog_io_util.m"
                                                {
#line 384 "prog_io_util.m"
                                                  {
#line 384 "prog_io_util.m"
                                                    parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__maybe_parse_types_2_p_0(parse_tree__prog_io_util__FuncArgs_86, &parse_tree__prog_io_util__ArgTypes_83);
                                                  }
#line 381 "prog_io_util.m"
                                                  if (parse_tree__prog_io_util__succeeded)
#line 381 "prog_io_util.m"
                                                    {
#line 385 "prog_io_util.m"
                                                      {
#line 385 "prog_io_util.m"
                                                        parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_util__Arg2_85, &parse_tree__prog_io_util__RetType_87);
                                                      }
#line 381 "prog_io_util.m"
                                                      if (parse_tree__prog_io_util__succeeded)
#line 381 "prog_io_util.m"
                                                        {
#line 387 "prog_io_util.m"
                                                          mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 387 "prog_io_util.m"
                                                          {
#line 387 "prog_io_util.m"
                                                            parse_tree__prog_io_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 387 "prog_io_util.m"
                                                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_util__RetType_87));
#line 387 "prog_io_util.m"
                                                          }
#line 386 "prog_io_util.m"
                                                          {
#line 386 "prog_io_util.m"
                                                            parse_tree__prog_io_util__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 386 "prog_io_util.m"
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 386 "prog_io_util.m"
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_38_38, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTypes_83));
#line 386 "prog_io_util.m"
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_38_38, 2) = ((MR_Box) (parse_tree__prog_io_util__V_39_39));
#line 386 "prog_io_util.m"
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_38_38, 3) = ((MR_Box) (parse_tree__prog_io_util__Purity_24));
#line 386 "prog_io_util.m"
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_38_38, 4) = NULL;
#line 386 "prog_io_util.m"
                                                          }
#line 386 "prog_io_util.m"
                                                          {
#line 386 "prog_io_util.m"
                                                            parse_tree__prog_io_util__ResultPrime_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 386 "prog_io_util.m"
                                                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ResultPrime_29, 0) = ((MR_Box) (parse_tree__prog_io_util__V_38_38));
#line 386 "prog_io_util.m"
                                                          }
#line 386 "prog_io_util.m"
                                                          parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 381 "prog_io_util.m"
                                                        }
#line 381 "prog_io_util.m"
                                                    }
#line 381 "prog_io_util.m"
                                                }
#line 383 "prog_io_util.m"
                                            }
#line 383 "prog_io_util.m"
                                        }
#line 381 "prog_io_util.m"
                                    }
#line 382 "prog_io_util.m"
                                }
#line 382 "prog_io_util.m"
                            }
#line 381 "prog_io_util.m"
                        }
#line 388 "prog_io_util.m"
                      else
#line 388 "prog_io_util.m"
                      if ((strcmp(parse_tree__prog_io_util__Name_26, (MR_String) "pred") == 0))
#line 389 "prog_io_util.m"
                        {
#line 389 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_31_31;
#line 389 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_32_32;
#line 389 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__ArgTypes_88;

#line 390 "prog_io_util.m"
                          {
#line 390 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__maybe_parse_types_2_p_0(parse_tree__prog_io_util__Args_94, &parse_tree__prog_io_util__ArgTypes_88);
                          }
#line 389 "prog_io_util.m"
                          if (parse_tree__prog_io_util__succeeded)
#line 389 "prog_io_util.m"
                            {
#line 391 "prog_io_util.m"
                              parse_tree__prog_io_util__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 392 "prog_io_util.m"
                              mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 391 "prog_io_util.m"
                              {
#line 391 "prog_io_util.m"
                                parse_tree__prog_io_util__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 391 "prog_io_util.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 391 "prog_io_util.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_31_31, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTypes_88));
#line 391 "prog_io_util.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_31_31, 2) = ((MR_Box) (parse_tree__prog_io_util__V_32_32));
#line 391 "prog_io_util.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_31_31, 3) = ((MR_Box) (parse_tree__prog_io_util__Purity_24));
#line 391 "prog_io_util.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_31_31, 4) = NULL;
#line 391 "prog_io_util.m"
                              }
#line 391 "prog_io_util.m"
                              {
#line 391 "prog_io_util.m"
                                parse_tree__prog_io_util__ResultPrime_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 391 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ResultPrime_29, 0) = ((MR_Box) (parse_tree__prog_io_util__V_31_31));
#line 391 "prog_io_util.m"
                              }
#line 391 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 389 "prog_io_util.m"
                            }
#line 389 "prog_io_util.m"
                        }
#line 388 "prog_io_util.m"
                      else
#line 388 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 379 "prog_io_util.m"
                    }
#line 379 "prog_io_util.m"
                }
#line 378 "prog_io_util.m"
              if (parse_tree__prog_io_util__succeeded)
#line 395 "prog_io_util.m"
                *parse_tree__prog_io_util__Result_10 = parse_tree__prog_io_util__ResultPrime_29;
#line 378 "prog_io_util.m"
              else
#line 397 "prog_io_util.m"
                {
#line 397 "prog_io_util.m"
                  *parse_tree__prog_io_util__Result_10 = parse_tree__prog_io_util__ill_formed_type_result_3_f_0(parse_tree__prog_io_util__ContextPieces_8, parse_tree__prog_io_util__VarSet_7, parse_tree__prog_io_util__Term_6);
                }
#line 377 "prog_io_util.m"
            }
#line 335 "prog_io_util.m"
            break;
#line 335 "prog_io_util.m"
          case (MR_Integer) 1:
#line 345 "prog_io_util.m"
            {
#line 345 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__TypeCtorInfo_112_112 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 345 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__TypeCtorInfo_113_113;
#line 345 "prog_io_util.m"
              MR_String parse_tree__prog_io_util__TermStr_16;
#line 345 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Pieces_17;
#line 345 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Spec_18;
#line 345 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_51_51;
#line 345 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_52_52;
#line 345 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_54_54;
#line 345 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_57_57;
#line 345 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_58_58;
#line 345 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_67_67;
#line 345 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_68_68;
#line 345 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_69_69;
#line 345 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_70_70;
#line 345 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_71_71;
#line 345 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_74_74;

#line 348 "prog_io_util.m"
              {
#line 348 "prog_io_util.m"
                parse_tree__prog_io_util__TermStr_16 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_util__TypeCtorInfo_112_112, parse_tree__prog_io_util__VarSet_7, parse_tree__prog_io_util__Term_6);
              }
#line 11850 "parse_tree.prog_io_util.c"
              parse_tree__prog_io_util__TypeCtorInfo_113_113 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 349 "prog_io_util.m"
              {
#line 349 "prog_io_util.m"
                parse_tree__prog_io_util__V_51_51 = mercury__cord__list_1_f_0(parse_tree__prog_io_util__TypeCtorInfo_113_113, parse_tree__prog_io_util__ContextPieces_8);
              }
#line 350 "prog_io_util.m"
              {
#line 350 "prog_io_util.m"
                parse_tree__prog_io_util__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 350 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_58_58, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_16));
#line 350 "prog_io_util.m"
              }
#line 350 "prog_io_util.m"
              {
#line 350 "prog_io_util.m"
                parse_tree__prog_io_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_util__V_58_58));
#line 350 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[8])));
#line 350 "prog_io_util.m"
              }
#line 350 "prog_io_util.m"
              {
#line 350 "prog_io_util.m"
                parse_tree__prog_io_util__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[10])));
#line 350 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_util__V_57_57));
#line 350 "prog_io_util.m"
              }
#line 349 "prog_io_util.m"
              {
#line 349 "prog_io_util.m"
                parse_tree__prog_io_util__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 349 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_52_52, 1) = ((MR_Box) (parse_tree__prog_io_util__V_54_54));
#line 349 "prog_io_util.m"
              }
#line 349 "prog_io_util.m"
              {
#line 349 "prog_io_util.m"
                parse_tree__prog_io_util__Pieces_17 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_util__TypeCtorInfo_113_113, parse_tree__prog_io_util__V_51_51, parse_tree__prog_io_util__V_52_52);
              }
#line 352 "prog_io_util.m"
              {
#line 352 "prog_io_util.m"
                parse_tree__prog_io_util__V_69_69 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_util__TypeCtorInfo_112_112, parse_tree__prog_io_util__Term_6);
              }
#line 352 "prog_io_util.m"
              {
#line 352 "prog_io_util.m"
                parse_tree__prog_io_util__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 352 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_71_71, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_17));
#line 352 "prog_io_util.m"
              }
#line 352 "prog_io_util.m"
              {
#line 352 "prog_io_util.m"
                parse_tree__prog_io_util__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_util__V_71_71));
#line 352 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 352 "prog_io_util.m"
              }
#line 352 "prog_io_util.m"
              {
#line 352 "prog_io_util.m"
                parse_tree__prog_io_util__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 352 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_util__V_69_69));
#line 352 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_68_68, 1) = ((MR_Box) (parse_tree__prog_io_util__V_70_70));
#line 352 "prog_io_util.m"
              }
#line 352 "prog_io_util.m"
              {
#line 352 "prog_io_util.m"
                parse_tree__prog_io_util__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_util__V_68_68));
#line 352 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 352 "prog_io_util.m"
              }
#line 351 "prog_io_util.m"
              {
#line 351 "prog_io_util.m"
                parse_tree__prog_io_util__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 351 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 351 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 351 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_18, 2) = ((MR_Box) (parse_tree__prog_io_util__V_67_67));
#line 351 "prog_io_util.m"
              }
#line 353 "prog_io_util.m"
              {
#line 353 "prog_io_util.m"
                parse_tree__prog_io_util__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 353 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_74_74, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_18));
#line 353 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 353 "prog_io_util.m"
              }
#line 353 "prog_io_util.m"
              {
#line 353 "prog_io_util.m"
                MR_Word base;
#line 353 "prog_io_util.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 353 "prog_io_util.m"
                *parse_tree__prog_io_util__Result_10 = base;
#line 353 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_74_74));
#line 353 "prog_io_util.m"
              }
#line 345 "prog_io_util.m"
            }
#line 335 "prog_io_util.m"
            break;
#line 335 "prog_io_util.m"
        }
#line 335 "prog_io_util.m"
        break;
#line 335 "prog_io_util.m"
    }
#line 335 "prog_io_util.m"
  }
#line 330 "prog_io_util.m"
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
#line 1527 "prog_io_util.m"
  {
#line 1527 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 1527 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_19_19;
#line 1527 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_20_20;
#line 1527 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_21_21;
#line 1527 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_18_18;

#line 1527 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1527 "prog_io_util.m"
      {
#line 1527 "prog_io_util.m"
        parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_3, (MR_Integer) 0)));
#line 1527 "prog_io_util.m"
        parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_3, (MR_Integer) 1)));
#line 1527 "prog_io_util.m"
        parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_3, (MR_Integer) 2)));
#line 1531 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_20_20)) == (MR_mktag((MR_Integer) 0)));
#line 1531 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1531 "prog_io_util.m"
          {
#line 1531 "prog_io_util.m"
            parse_tree__prog_io_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_20_20, (MR_Integer) 0)));
#line 1527 "prog_io_util.m"
            if ((parse_tree__prog_io_util__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1531 "prog_io_util.m"
              {
#line 1531 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_21_21, (MR_String) "[]") == 0);
#line 1531 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1531 "prog_io_util.m"
                  {
#line 1532 "prog_io_util.m"
                    *parse_tree__prog_io_util__Terms_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1532 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1531 "prog_io_util.m"
                  }
#line 1531 "prog_io_util.m"
              }
#line 1527 "prog_io_util.m"
            else
#line 1527 "prog_io_util.m"
              {
#line 1527 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__HeadTerm_5;
#line 1527 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailTerm_6;
#line 1527 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailTerms_8;
#line 1527 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_16_16;
#line 1527 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_17_17;

#line 1527 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_21_21, (MR_String) "[|]") == 0);
#line 1527 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1527 "prog_io_util.m"
                  {
#line 1527 "prog_io_util.m"
                    parse_tree__prog_io_util__HeadTerm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, (MR_Integer) 0)));
#line 1527 "prog_io_util.m"
                    parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, (MR_Integer) 1)));
#line 1527 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 1527 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1527 "prog_io_util.m"
                      {
#line 1527 "prog_io_util.m"
                        parse_tree__prog_io_util__TailTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
#line 1527 "prog_io_util.m"
                        parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
#line 1527 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1527 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1527 "prog_io_util.m"
                          {
#line 1528 "prog_io_util.m"
                            {
#line 1528 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__list_term_to_term_list_2_p_0(parse_tree__prog_io_util__TailTerm_6, &parse_tree__prog_io_util__TailTerms_8);
                            }
#line 1527 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1527 "prog_io_util.m"
                              {
#line 1529 "prog_io_util.m"
                                {
#line 1529 "prog_io_util.m"
                                  MR_Word base;
#line 1529 "prog_io_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1529 "prog_io_util.m"
                                  *parse_tree__prog_io_util__Terms_4 = base;
#line 1529 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadTerm_5));
#line 1529 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailTerms_8));
#line 1529 "prog_io_util.m"
                                }
#line 1529 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1527 "prog_io_util.m"
                              }
#line 1527 "prog_io_util.m"
                          }
#line 1527 "prog_io_util.m"
                      }
#line 1527 "prog_io_util.m"
                  }
#line 1527 "prog_io_util.m"
              }
#line 1531 "prog_io_util.m"
          }
#line 1527 "prog_io_util.m"
      }
#line 1527 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1527 "prog_io_util.m"
  }
#line 182 "prog_io_util.m"
}

#line 179 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__map_parser_3_p_0(
#line 179 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_22,
#line 179 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Parser_1,
#line 179 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 179 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3)
#line 179 "prog_io_util.m"
{
#line 1230 "prog_io_util.m"
  {
#line 1230 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 1230 "prog_io_util.m"
    if ((parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1230 "prog_io_util.m"
      {
#line 1230 "prog_io_util.m"
        *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[9]);
#line 1230 "prog_io_util.m"
      }
#line 1230 "prog_io_util.m"
    else
#line 1231 "prog_io_util.m"
      {
#line 1231 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1231 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1231 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__HeadResult_10;
#line 1231 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TailResult_11;
#line 1232 "prog_io_util.m"
        void MR_CALL (* parse_tree__prog_io_util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Parser_1, (MR_Integer) 1)));
#line 1232 "prog_io_util.m"
        MR_Box parse_tree__prog_io_util__conv1_HeadResult_10;

#line 1232 "prog_io_util.m"
        {
#line 1232 "prog_io_util.m"
          parse_tree__prog_io_util__func_0(((MR_Box) parse_tree__prog_io_util__Parser_1), ((MR_Box) (parse_tree__prog_io_util__Head_7)), &parse_tree__prog_io_util__conv1_HeadResult_10);
        }
#line 1232 "prog_io_util.m"
        parse_tree__prog_io_util__HeadResult_10 = ((MR_Word) parse_tree__prog_io_util__conv1_HeadResult_10);
#line 1233 "prog_io_util.m"
        {
#line 1233 "prog_io_util.m"
          parse_tree__prog_io_util__map_parser_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_22, parse_tree__prog_io_util__Parser_1, parse_tree__prog_io_util__Tail_8, &parse_tree__prog_io_util__TailResult_11);
        }
#line 1238 "prog_io_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadResult_10)) == (MR_mktag((MR_Integer) 0))))
#line 1238 "prog_io_util.m"
          {
#line 1238 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadResult_10, (MR_Integer) 0)));

#line 1238 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__TailResult_11)) == (MR_mktag((MR_Integer) 0))))
#line 1235 "prog_io_util.m"
              {
#line 1235 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailSpecs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TailResult_11, (MR_Integer) 0)));
#line 1235 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_20_20;

#line 1237 "prog_io_util.m"
                {
#line 1237 "prog_io_util.m"
                  parse_tree__prog_io_util__V_20_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_util__V_24_24, parse_tree__prog_io_util__TailSpecs_13);
                }
#line 1237 "prog_io_util.m"
                {
#line 1237 "prog_io_util.m"
                  MR_Word base;
#line 1237 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1237 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 1237 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_20_20));
#line 1237 "prog_io_util.m"
                }
#line 1235 "prog_io_util.m"
              }
#line 1238 "prog_io_util.m"
            else
#line 1241 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) parse_tree__prog_io_util__HeadResult_10;
#line 1238 "prog_io_util.m"
          }
#line 1238 "prog_io_util.m"
        else
#line 1238 "prog_io_util.m"
          {
#line 1238 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_25_25 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadResult_10, (MR_Integer) 0));

#line 1238 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__TailResult_11)) == (MR_mktag((MR_Integer) 0))))
#line 1245 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__3_3 = parse_tree__prog_io_util__TailResult_11;
#line 1238 "prog_io_util.m"
            else
#line 1247 "prog_io_util.m"
              {
#line 1247 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailItems_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TailResult_11, (MR_Integer) 0)));
#line 1247 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_19_19;

#line 1249 "prog_io_util.m"
                {
#line 1249 "prog_io_util.m"
                  parse_tree__prog_io_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1249 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 0) = parse_tree__prog_io_util__V_25_25;
#line 1249 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io_util__TailItems_18));
#line 1249 "prog_io_util.m"
                }
#line 1249 "prog_io_util.m"
                {
#line 1249 "prog_io_util.m"
                  MR_Word base;
#line 1249 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1249 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 1249 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_19_19));
#line 1249 "prog_io_util.m"
                }
#line 1247 "prog_io_util.m"
              }
#line 1238 "prog_io_util.m"
          }
#line 1231 "prog_io_util.m"
      }
#line 1230 "prog_io_util.m"
  }
#line 179 "prog_io_util.m"
}

#line 176 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_list_3_p_0(
#line 176 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_8,
#line 176 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Parser_4,
#line 176 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_5,
#line 176 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_6)
#line 176 "prog_io_util.m"
{
#line 1190 "prog_io_util.m"
  {
#line 1190 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1190 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__List_7;
#line 1190 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Head_12;
#line 1190 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Tail_13;
#line 1190 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_15_15;

#line 1172 "prog_io_util.m"
    {
#line 1172 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", parse_tree__prog_io_util__Term_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_15_15);
    }
#line 1149 "prog_io_util.m"
    parse_tree__prog_io_util__Head_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_15_15, (MR_Integer) 0)));
#line 1149 "prog_io_util.m"
    parse_tree__prog_io_util__Tail_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_15_15, (MR_Integer) 1)));
#line 1150 "prog_io_util.m"
    {
#line 1150 "prog_io_util.m"
      parse_tree__prog_io_util__List_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1150 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__List_7, 0) = ((MR_Box) (parse_tree__prog_io_util__Head_12));
#line 1150 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__List_7, 1) = ((MR_Box) (parse_tree__prog_io_util__Tail_13));
#line 1150 "prog_io_util.m"
    }
#line 1192 "prog_io_util.m"
    {
#line 1192 "prog_io_util.m"
      parse_tree__prog_io_util__map_parser_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_8, parse_tree__prog_io_util__Parser_4, parse_tree__prog_io_util__List_7, parse_tree__prog_io_util__Result_6);
    }
#line 1190 "prog_io_util.m"
  }
#line 176 "prog_io_util.m"
}

#line 174 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_one_or_more_3_p_0(
#line 174 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_10,
#line 174 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Parser_4,
#line 174 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_5,
#line 174 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_6)
#line 174 "prog_io_util.m"
{
#line 1186 "prog_io_util.m"
  {
#line 1186 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1186 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Head_7;
#line 1186 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Tail_8;
#line 1186 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 1172 "prog_io_util.m"
    {
#line 1172 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", parse_tree__prog_io_util__Term_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_9_9);
    }
#line 1187 "prog_io_util.m"
    parse_tree__prog_io_util__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_9_9, (MR_Integer) 0)));
#line 1187 "prog_io_util.m"
    parse_tree__prog_io_util__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_9_9, (MR_Integer) 1)));
#line 1188 "prog_io_util.m"
    {
#line 1188 "prog_io_util.m"
      parse_tree__prog_io_util__map_parser_one_or_more_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_10, parse_tree__prog_io_util__Parser_4, parse_tree__prog_io_util__Head_7, parse_tree__prog_io_util__Tail_8, parse_tree__prog_io_util__Result_6);
    }
#line 1186 "prog_io_util.m"
  }
#line 174 "prog_io_util.m"
}

#line 169 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__sum_to_list_2_p_0(
#line 169 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
#line 169 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 169 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__List_4)
#line 169 "prog_io_util.m"
{
#line 1161 "prog_io_util.m"
  {
#line 1161 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1161 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Head_5;
#line 1161 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Tail_6;
#line 1161 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_8_8;

#line 1172 "prog_io_util.m"
    {
#line 1172 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) "+", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_8_8);
    }
#line 1162 "prog_io_util.m"
    parse_tree__prog_io_util__Head_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 0)));
#line 1162 "prog_io_util.m"
    parse_tree__prog_io_util__Tail_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 1)));
#line 1163 "prog_io_util.m"
    {
#line 1163 "prog_io_util.m"
      MR_Word base;
#line 1163 "prog_io_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1163 "prog_io_util.m"
      *parse_tree__prog_io_util__List_4 = base;
#line 1163 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Head_5));
#line 1163 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Tail_6));
#line 1163 "prog_io_util.m"
    }
#line 1161 "prog_io_util.m"
  }
#line 169 "prog_io_util.m"
}

#line 168 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__sum_to_one_or_more_2_p_0(
#line 168 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_6,
#line 168 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 168 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__OneOrMore_4)
#line 168 "prog_io_util.m"
{
#line 1158 "prog_io_util.m"
  {
#line 1158 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 1172 "prog_io_util.m"
    {
#line 1172 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) "+", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_util__OneOrMore_4);
    }
#line 1158 "prog_io_util.m"
  }
#line 168 "prog_io_util.m"
}

#line 162 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__one_or_more_to_conjunction_3_p_0(
#line 162 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_20,
#line 162 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Context_1,
#line 162 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 162 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Term_3)
#line 162 "prog_io_util.m"
{
#line 1152 "prog_io_util.m"
  {
#line 1152 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1152 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1152 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1152 "prog_io_util.m"
    if ((parse_tree__prog_io_util__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1152 "prog_io_util.m"
      *parse_tree__prog_io_util__Term_3 = parse_tree__prog_io_util__V_22_22;
#line 1152 "prog_io_util.m"
    else
#line 1154 "prog_io_util.m"
      {
#line 1154 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Second_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, (MR_Integer) 0)));
#line 1154 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, (MR_Integer) 1)));
#line 1154 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Tail_12;
#line 1154 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_14_14;
#line 1154 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_17_17;
#line 1154 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_18_18;

#line 1155 "prog_io_util.m"
        {
#line 1155 "prog_io_util.m"
          parse_tree__prog_io_util__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1155 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_14_14, 0) = ((MR_Box) (parse_tree__prog_io_util__Second_9));
#line 1155 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_14_14, 1) = ((MR_Box) (parse_tree__prog_io_util__Rest_10));
#line 1155 "prog_io_util.m"
        }
#line 1155 "prog_io_util.m"
        {
#line 1155 "prog_io_util.m"
          parse_tree__prog_io_util__one_or_more_to_conjunction_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_20, parse_tree__prog_io_util__Context_1, parse_tree__prog_io_util__V_14_14, &parse_tree__prog_io_util__Tail_12);
        }
#line 1156 "prog_io_util.m"
        {
#line 1156 "prog_io_util.m"
          parse_tree__prog_io_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1156 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, 0) = ((MR_Box) (parse_tree__prog_io_util__Tail_12));
#line 1156 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1156 "prog_io_util.m"
        }
#line 1156 "prog_io_util.m"
        {
#line 1156 "prog_io_util.m"
          parse_tree__prog_io_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1156 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_17_17, 0) = ((MR_Box) (parse_tree__prog_io_util__V_22_22));
#line 1156 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_17_17, 1) = ((MR_Box) (parse_tree__prog_io_util__V_18_18));
#line 1156 "prog_io_util.m"
        }
#line 1156 "prog_io_util.m"
        {
#line 1156 "prog_io_util.m"
          MR_Word base;
#line 1156 "prog_io_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1156 "prog_io_util.m"
          *parse_tree__prog_io_util__Term_3 = base;
#line 1156 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[8]));
#line 1156 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_17_17));
#line 1156 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_1));
#line 1156 "prog_io_util.m"
        }
#line 1154 "prog_io_util.m"
      }
#line 1152 "prog_io_util.m"
  }
#line 162 "prog_io_util.m"
}

#line 155 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__conjunction_to_list_2_p_0(
#line 155 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
#line 155 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 155 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__List_4)
#line 155 "prog_io_util.m"
{
#line 1148 "prog_io_util.m"
  {
#line 1148 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1148 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Head_5;
#line 1148 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Tail_6;
#line 1148 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_8_8;

#line 1172 "prog_io_util.m"
    {
#line 1172 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_8_8);
    }
#line 1149 "prog_io_util.m"
    parse_tree__prog_io_util__Head_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 0)));
#line 1149 "prog_io_util.m"
    parse_tree__prog_io_util__Tail_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 1)));
#line 1150 "prog_io_util.m"
    {
#line 1150 "prog_io_util.m"
      MR_Word base;
#line 1150 "prog_io_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1150 "prog_io_util.m"
      *parse_tree__prog_io_util__List_4 = base;
#line 1150 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Head_5));
#line 1150 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Tail_6));
#line 1150 "prog_io_util.m"
    }
#line 1148 "prog_io_util.m"
  }
#line 155 "prog_io_util.m"
}

#line 153 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__conjunction_to_one_or_more_2_p_0(
#line 153 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_6,
#line 153 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 153 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__OneOrMore_4)
#line 153 "prog_io_util.m"
{
#line 1145 "prog_io_util.m"
  {
#line 1145 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 1172 "prog_io_util.m"
    {
#line 1172 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_util__OneOrMore_4);
    }
#line 1145 "prog_io_util.m"
  }
#line 153 "prog_io_util.m"
}

#line 149 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__disjunction_to_list_2_p_0(
#line 149 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
#line 149 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 149 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__List_4)
#line 149 "prog_io_util.m"
{
#line 1141 "prog_io_util.m"
  {
#line 1141 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1141 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Head_5;
#line 1141 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Tail_6;
#line 1141 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_8_8;

#line 1172 "prog_io_util.m"
    {
#line 1172 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ";", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_8_8);
    }
#line 1142 "prog_io_util.m"
    parse_tree__prog_io_util__Head_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 0)));
#line 1142 "prog_io_util.m"
    parse_tree__prog_io_util__Tail_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 1)));
#line 1143 "prog_io_util.m"
    {
#line 1143 "prog_io_util.m"
      MR_Word base;
#line 1143 "prog_io_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1143 "prog_io_util.m"
      *parse_tree__prog_io_util__List_4 = base;
#line 1143 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Head_5));
#line 1143 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Tail_6));
#line 1143 "prog_io_util.m"
    }
#line 1141 "prog_io_util.m"
  }
#line 149 "prog_io_util.m"
}

#line 147 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__disjunction_to_one_or_more_2_p_0(
#line 147 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_6,
#line 147 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 147 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__OneOrMore_4)
#line 147 "prog_io_util.m"
{
#line 1138 "prog_io_util.m"
  {
#line 1138 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 1172 "prog_io_util.m"
    {
#line 1172 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ";", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_util__OneOrMore_4);
    }
#line 1138 "prog_io_util.m"
  }
#line 147 "prog_io_util.m"
}

#line 143 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__standard_det_2_p_0(
#line 143 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__HeadVar__1_1,
#line 143 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__2_2)
#line 143 "prog_io_util.m"
{
#line 1074 "prog_io_util.m"
  {
#line 1074 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1074 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__slot_0;
#line 1074 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__str_1;

#line 1074 "prog_io_util.m"
    /* hashed string simple lookup switch */
#line 1074 "prog_io_util.m"
    /* compute the hash value of the input string */
#line 1074 "prog_io_util.m"
    parse_tree__prog_io_util__slot_0 = ((MR_hash_string4(parse_tree__prog_io_util__HeadVar__1_1)) & (MR_Integer) 31);
#line 1074 "prog_io_util.m"
    /* hash chain loop */
#line 1074 "prog_io_util.m"
    do
#line 1074 "prog_io_util.m"
      {
#line 1074 "prog_io_util.m"
        /* lookup the string for this hash slot */
#line 1074 "prog_io_util.m"
        parse_tree__prog_io_util__str_1 = ((&parse_tree__prog_io_util_vector_common_5[0 + parse_tree__prog_io_util__slot_0]))->parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_0;
#line 1074 "prog_io_util.m"
        /* did we find a match? */
#line 1074 "prog_io_util.m"
        if ((((parse_tree__prog_io_util__str_1 != NULL)) && ((strcmp(parse_tree__prog_io_util__str_1, parse_tree__prog_io_util__HeadVar__1_1) == 0))))
#line 1074 "prog_io_util.m"
          {
#line 1074 "prog_io_util.m"
            /* we found a match; look up the results */
#line 1074 "prog_io_util.m"
            *parse_tree__prog_io_util__HeadVar__2_2 = ((&parse_tree__prog_io_util_vector_common_5[0 + parse_tree__prog_io_util__slot_0]))->parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_2;
#line 1074 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1074 "prog_io_util.m"
            /* jump out of search loop */
#line 1074 "prog_io_util.m"
            goto label_0;
#line 1074 "prog_io_util.m"
          }
#line 1074 "prog_io_util.m"
        else
#line 1074 "prog_io_util.m"
          {
#line 1074 "prog_io_util.m"
            /* no match yet, so get next slot in hash chain */
#line 1074 "prog_io_util.m"
            parse_tree__prog_io_util__slot_0 = ((&parse_tree__prog_io_util_vector_common_5[0 + parse_tree__prog_io_util__slot_0]))->parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_1;
#line 1074 "prog_io_util.m"
          }
#line 1074 "prog_io_util.m"
      }
#line 1074 "prog_io_util.m"
    while ((parse_tree__prog_io_util__slot_0 >= (MR_Integer) 0));
#line 1074 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 1074 "prog_io_util.m"
  label_0:;
#line 1074 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1074 "prog_io_util.m"
  }
#line 143 "prog_io_util.m"
}

#line 141 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__is_known_inst_name_1_p_0(
#line 141 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Name_2)
#line 141 "prog_io_util.m"
{
#line 853 "prog_io_util.m"
  {
#line 853 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 854 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_3_3;

#line 854 "prog_io_util.m"
    {
#line 854 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_util__Name_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_3_3);
    }
#line 853 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 853 "prog_io_util.m"
  }
#line 141 "prog_io_util.m"
}

#line 140 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__is_known_mode_name_1_p_0(
#line 140 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__HeadVar__1_1)
#line 140 "prog_io_util.m"
{
#line 673 "prog_io_util.m"
  {
#line 673 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 673 "prog_io_util.m"
    if ((strcmp(parse_tree__prog_io_util__HeadVar__1_1, (MR_String) ">>") == 0))
#line 673 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 673 "prog_io_util.m"
    else
#line 673 "prog_io_util.m"
    if ((strcmp(parse_tree__prog_io_util__HeadVar__1_1, (MR_String) "is") == 0))
#line 674 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 673 "prog_io_util.m"
    else
#line 673 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 673 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 673 "prog_io_util.m"
  }
#line 140 "prog_io_util.m"
}

#line 137 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__convert_inst_3_p_0(
#line 137 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
#line 137 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_2,
#line 137 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Inst_3)
#line 137 "prog_io_util.m"
{
#line 770 "prog_io_util.m"
  {
#line 770 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 770 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__Term_2)) == (MR_mktag((MR_Integer) 0))))
#line 774 "prog_io_util.m"
      {
#line 774 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Functor_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_2, (MR_Integer) 0)));
#line 774 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Args0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_2, (MR_Integer) 1)));
#line 774 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__Name_16;
#line 775 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util___Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_2, (MR_Integer) 2)));
#line 780 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__KnownInstKind_17;

#line 776 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Functor_13)) == (MR_mktag((MR_Integer) 0)));
#line 776 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 776 "prog_io_util.m"
          {
#line 776 "prog_io_util.m"
            parse_tree__prog_io_util__Name_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Functor_13, (MR_Integer) 0)));
#line 780 "prog_io_util.m"
            {
#line 780 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_util__Name_16, parse_tree__prog_io_util__Args0_14, &parse_tree__prog_io_util__KnownInstKind_17);
            }
#line 780 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 784 "prog_io_util.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_util__KnownInstKind_17)) == (MR_mktag((MR_Integer) 2))))
#line 787 "prog_io_util.m"
                {
#line 787 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__CompoundInstKind_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__KnownInstKind_17, (MR_Integer) 0)));

#line 792 "prog_io_util.m"
#line 792 "prog_io_util.m"
                  switch (MR_tag((MR_Word) parse_tree__prog_io_util__CompoundInstKind_18)) {
#line 792 "prog_io_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 792 "prog_io_util.m"
                    case (MR_Integer) 0:
#line 789 "prog_io_util.m"
                      {
#line 789 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__BeforeIsTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 0)));
#line 789 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__DetTerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 1)));

#line 790 "prog_io_util.m"
                        {
#line 790 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_higher_order_inst_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__BeforeIsTerm_19, parse_tree__prog_io_util__DetTerm_20, parse_tree__prog_io_util__Inst_3);
                        }
#line 789 "prog_io_util.m"
                      }
#line 792 "prog_io_util.m"
                      break;
#line 792 "prog_io_util.m"
                    case (MR_Integer) 1:
#line 805 "prog_io_util.m"
                      {
#line 805 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TypeInfo_53_53;
#line 805 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TypeCtorInfo_54_54;
#line 805 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TypeCtorInfo_55_55;
#line 805 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__VarTerm_22;
#line 805 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__SubInstTerm_23;
#line 805 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Var_24;
#line 805 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__SubInst_26;
#line 805 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_35_35;
#line 805 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_36_36;
#line 805 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_37_37;
#line 807 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_25_25;

#line 806 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__AllowConstrainedInstVar_1 == (MR_Integer) 0);
#line 805 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 805 "prog_io_util.m"
                          {
#line 805 "prog_io_util.m"
                            parse_tree__prog_io_util__VarTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 0)));
#line 805 "prog_io_util.m"
                            parse_tree__prog_io_util__SubInstTerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 1)));
#line 807 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__VarTerm_22)) == (MR_mktag((MR_Integer) 1)));
#line 807 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 807 "prog_io_util.m"
                              {
#line 807 "prog_io_util.m"
                                parse_tree__prog_io_util__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarTerm_22, (MR_Integer) 0)));
#line 807 "prog_io_util.m"
                                parse_tree__prog_io_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarTerm_22, (MR_Integer) 1)));
#line 809 "prog_io_util.m"
                                parse_tree__prog_io_util__V_35_35 = (MR_Integer) 1;
#line 809 "prog_io_util.m"
                                {
#line 809 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_util__V_35_35, parse_tree__prog_io_util__SubInstTerm_23, &parse_tree__prog_io_util__SubInst_26);
                                }
#line 805 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 805 "prog_io_util.m"
                                  {
#line 12985 "parse_tree.prog_io_util.c"
                                    parse_tree__prog_io_util__TypeInfo_53_53 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[1];
#line 12987 "parse_tree.prog_io_util.c"
                                    parse_tree__prog_io_util__TypeCtorInfo_54_54 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 12989 "parse_tree.prog_io_util.c"
                                    parse_tree__prog_io_util__TypeCtorInfo_55_55 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 812 "prog_io_util.m"
                                    {
#line 812 "prog_io_util.m"
                                      parse_tree__prog_io_util__V_37_37 = mercury__term__coerce_var_1_f_0(parse_tree__prog_io_util__TypeCtorInfo_54_54, parse_tree__prog_io_util__TypeCtorInfo_55_55, parse_tree__prog_io_util__Var_24);
                                    }
#line 811 "prog_io_util.m"
                                    {
#line 811 "prog_io_util.m"
                                      parse_tree__prog_io_util__V_36_36 = mercury__set__make_singleton_set_1_f_0(parse_tree__prog_io_util__TypeInfo_53_53, ((MR_Box) (parse_tree__prog_io_util__V_37_37)));
                                    }
#line 811 "prog_io_util.m"
                                    {
#line 811 "prog_io_util.m"
                                      MR_Word base;
#line 811 "prog_io_util.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 811 "prog_io_util.m"
                                      *parse_tree__prog_io_util__Inst_3 = base;
#line 811 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 811 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 811 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_util__SubInst_26));
#line 811 "prog_io_util.m"
                                    }
#line 811 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 805 "prog_io_util.m"
                                  }
#line 807 "prog_io_util.m"
                              }
#line 805 "prog_io_util.m"
                          }
#line 805 "prog_io_util.m"
                      }
#line 792 "prog_io_util.m"
                      break;
#line 792 "prog_io_util.m"
                    case (MR_Integer) 2:
#line 793 "prog_io_util.m"
                      {
#line 793 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__DisjTerm_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 0)));

#line 794 "prog_io_util.m"
                        {
#line 794 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__DisjTerm_21, (MR_Integer) 0, parse_tree__prog_io_util__Inst_3);
                        }
#line 793 "prog_io_util.m"
                      }
#line 792 "prog_io_util.m"
                      break;
#line 792 "prog_io_util.m"
                    case (MR_Integer) 3:
#line 792 "prog_io_util.m"
#line 792 "prog_io_util.m"
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 0)))) {
#line 792 "prog_io_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 792 "prog_io_util.m"
                        case (MR_Integer) 0:
#line 797 "prog_io_util.m"
                          {
#line 797 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__DisjTerm_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 1)));

#line 798 "prog_io_util.m"
                            {
#line 798 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__DisjTerm_45, (MR_Integer) 1, parse_tree__prog_io_util__Inst_3);
                            }
#line 797 "prog_io_util.m"
                          }
#line 792 "prog_io_util.m"
                          break;
#line 792 "prog_io_util.m"
                        case (MR_Integer) 1:
#line 801 "prog_io_util.m"
                          {
#line 801 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__DisjTerm_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 1)));

#line 802 "prog_io_util.m"
                            {
#line 802 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__DisjTerm_46, (MR_Integer) 2, parse_tree__prog_io_util__Inst_3);
                            }
#line 801 "prog_io_util.m"
                          }
#line 792 "prog_io_util.m"
                          break;
#line 792 "prog_io_util.m"
                      }
#line 792 "prog_io_util.m"
                      break;
#line 792 "prog_io_util.m"
                  }
#line 787 "prog_io_util.m"
                }
#line 784 "prog_io_util.m"
              else
#line 784 "prog_io_util.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_util__KnownInstKind_17)) == (MR_mktag((MR_Integer) 1))))
#line 785 "prog_io_util.m"
                {
#line 785 "prog_io_util.m"
                  *parse_tree__prog_io_util__Inst_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__KnownInstKind_17, (MR_Integer) 0)));
#line 785 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 785 "prog_io_util.m"
                }
#line 784 "prog_io_util.m"
              else
#line 784 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 780 "prog_io_util.m"
            else
#line 818 "prog_io_util.m"
              {
#line 818 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__QualifiedName_27;
#line 818 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Args1_28;
#line 819 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__InstPrime_31;
#line 820 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__BuiltinModule_29;
#line 820 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__UnqualifiedName_30;
#line 820 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_41_41;
#line 820 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__V_42_42;
#line 820 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__KnownInstKind_47;
#line 820 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_58_58;
#line 832 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_43_43;
#line 832 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_32_32;
#line 832 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_33_33;

#line 817 "prog_io_util.m"
                {
#line 817 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_from_f_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__Functor_13, parse_tree__prog_io_util__Args0_14, &parse_tree__prog_io_util__QualifiedName_27, &parse_tree__prog_io_util__Args1_28);
                }
#line 818 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 818 "prog_io_util.m"
                  {
#line 820 "prog_io_util.m"
                    {
#line 820 "prog_io_util.m"
                      parse_tree__prog_io_util__BuiltinModule_29 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                    }
#line 821 "prog_io_util.m"
                    parse_tree__prog_io_util__V_42_42 = (MR_String) "";
#line 821 "prog_io_util.m"
                    parse_tree__prog_io_util__V_41_41 = (MR_Word) &parse_tree__prog_io_util_scalar_common_3[1];
#line 821 "prog_io_util.m"
                    {
#line 821 "prog_io_util.m"
                      mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(parse_tree__prog_io_util__QualifiedName_27, parse_tree__prog_io_util__V_41_41, &parse_tree__prog_io_util__V_58_58);
                    }
#line 821 "prog_io_util.m"
                    {
#line 821 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_util__BuiltinModule_29, parse_tree__prog_io_util__V_58_58);
                    }
#line 820 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 820 "prog_io_util.m"
                      {
#line 825 "prog_io_util.m"
                        {
#line 825 "prog_io_util.m"
                          parse_tree__prog_io_util__UnqualifiedName_30 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_io_util__QualifiedName_27);
                        }
#line 826 "prog_io_util.m"
                        {
#line 826 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_util__UnqualifiedName_30, parse_tree__prog_io_util__Args1_28, &parse_tree__prog_io_util__KnownInstKind_47);
                        }
#line 820 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 820 "prog_io_util.m"
                          {
#line 827 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__KnownInstKind_47)) == (MR_mktag((MR_Integer) 1)));
#line 827 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 827 "prog_io_util.m"
                              {
#line 827 "prog_io_util.m"
                                parse_tree__prog_io_util__InstPrime_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__KnownInstKind_47, (MR_Integer) 0)));
#line 832 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_util__InstPrime_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__InstPrime_31, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 832 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 832 "prog_io_util.m"
                                  {
#line 832 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__InstPrime_31, (MR_Integer) 1)));
#line 832 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_43_43)) == (MR_mktag((MR_Integer) 0)));
#line 832 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 832 "prog_io_util.m"
                                      {
#line 832 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_43_43, (MR_Integer) 0)));
#line 832 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_43_43, (MR_Integer) 1)));
#line 832 "prog_io_util.m"
                                      }
#line 832 "prog_io_util.m"
                                  }
#line 832 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 827 "prog_io_util.m"
                              }
#line 820 "prog_io_util.m"
                          }
#line 820 "prog_io_util.m"
                      }
#line 819 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 834 "prog_io_util.m"
                      {
#line 834 "prog_io_util.m"
                        *parse_tree__prog_io_util__Inst_3 = parse_tree__prog_io_util__InstPrime_31;
#line 834 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 834 "prog_io_util.m"
                      }
#line 819 "prog_io_util.m"
                    else
#line 836 "prog_io_util.m"
                      {
#line 836 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Args_34;
#line 836 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_44_44;

#line 836 "prog_io_util.m"
                        {
#line 836 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__Args1_28, &parse_tree__prog_io_util__Args_34);
                        }
#line 836 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 836 "prog_io_util.m"
                          {
#line 837 "prog_io_util.m"
                            {
#line 837 "prog_io_util.m"
                              parse_tree__prog_io_util__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 837 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_util__QualifiedName_27));
#line 837 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_44_44, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_34));
#line 837 "prog_io_util.m"
                            }
#line 837 "prog_io_util.m"
                            {
#line 837 "prog_io_util.m"
                              MR_Word base;
#line 837 "prog_io_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 837 "prog_io_util.m"
                              *parse_tree__prog_io_util__Inst_3 = base;
#line 837 "prog_io_util.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 837 "prog_io_util.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_44_44));
#line 837 "prog_io_util.m"
                            }
#line 837 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 836 "prog_io_util.m"
                          }
#line 836 "prog_io_util.m"
                      }
#line 818 "prog_io_util.m"
                  }
#line 818 "prog_io_util.m"
              }
#line 776 "prog_io_util.m"
          }
#line 774 "prog_io_util.m"
      }
#line 770 "prog_io_util.m"
    else
#line 770 "prog_io_util.m"
      {
#line 770 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Term_2, (MR_Integer) 0)));
#line 770 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_9;
#line 771 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Term_2, (MR_Integer) 1)));

#line 772 "prog_io_util.m"
        {
#line 772 "prog_io_util.m"
          mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_util__V0_7, &parse_tree__prog_io_util__V_9);
        }
#line 773 "prog_io_util.m"
        {
#line 773 "prog_io_util.m"
          MR_Word base;
#line 773 "prog_io_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 773 "prog_io_util.m"
          *parse_tree__prog_io_util__Inst_3 = base;
#line 773 "prog_io_util.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 773 "prog_io_util.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_9));
#line 773 "prog_io_util.m"
        }
#line 770 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 770 "prog_io_util.m"
      }
#line 770 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 770 "prog_io_util.m"
  }
#line 137 "prog_io_util.m"
}

#line 134 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__convert_inst_list_3_p_0(
#line 134 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
#line 134 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 134 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3)
#line 134 "prog_io_util.m"
{
#line 765 "prog_io_util.m"
  {
#line 765 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 765 "prog_io_util.m"
    if ((parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 765 "prog_io_util.m"
      {
#line 765 "prog_io_util.m"
        *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 765 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 765 "prog_io_util.m"
      }
#line 765 "prog_io_util.m"
    else
#line 766 "prog_io_util.m"
      {
#line 766 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Term_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 766 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Terms_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 766 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Inst_8;
#line 766 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Insts_9;

#line 767 "prog_io_util.m"
        {
#line 767 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__Term_6, &parse_tree__prog_io_util__Inst_8);
        }
#line 766 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 766 "prog_io_util.m"
          {
#line 768 "prog_io_util.m"
            {
#line 768 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__Terms_7, &parse_tree__prog_io_util__Insts_9);
            }
#line 766 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 766 "prog_io_util.m"
              {
#line 766 "prog_io_util.m"
                {
#line 766 "prog_io_util.m"
                  MR_Word base;
#line 766 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 766 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 766 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Inst_8));
#line 766 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Insts_9));
#line 766 "prog_io_util.m"
                }
#line 766 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 766 "prog_io_util.m"
              }
#line 766 "prog_io_util.m"
          }
#line 766 "prog_io_util.m"
      }
#line 765 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 765 "prog_io_util.m"
  }
#line 134 "prog_io_util.m"
}

#line 131 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__convert_mode_3_p_0(
#line 131 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_4,
#line 131 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_5,
#line 131 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Mode_6)
#line 131 "prog_io_util.m"
{
#line 647 "prog_io_util.m"
  {
#line 647 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 647 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TermFunctor_7;
#line 647 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TermArgs_8;
#line 648 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;
#line 652 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_19_19;

#line 648 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 648 "prog_io_util.m"
      {
#line 648 "prog_io_util.m"
        parse_tree__prog_io_util__TermFunctor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 648 "prog_io_util.m"
        parse_tree__prog_io_util__TermArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 648 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 652 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermFunctor_7)) == (MR_mktag((MR_Integer) 0)));
#line 652 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 652 "prog_io_util.m"
          {
#line 652 "prog_io_util.m"
            parse_tree__prog_io_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TermFunctor_7, (MR_Integer) 0)));
#line 652 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_19_19, (MR_String) ">>") == 0);
#line 652 "prog_io_util.m"
          }
#line 651 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 654 "prog_io_util.m"
          {
#line 654 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__InstTermA_10;
#line 654 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__InstTermB_11;
#line 654 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__InstA_12;
#line 654 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__InstB_13;
#line 654 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_20_20;
#line 654 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_21_21;

#line 654 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermArgs_8)) == (MR_mktag((MR_Integer) 1)));
#line 654 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 654 "prog_io_util.m"
              {
#line 654 "prog_io_util.m"
                parse_tree__prog_io_util__InstTermA_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 0)));
#line 654 "prog_io_util.m"
                parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 1)));
#line 654 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 654 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 654 "prog_io_util.m"
                  {
#line 654 "prog_io_util.m"
                    parse_tree__prog_io_util__InstTermB_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, (MR_Integer) 0)));
#line 654 "prog_io_util.m"
                    parse_tree__prog_io_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, (MR_Integer) 1)));
#line 654 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 654 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 654 "prog_io_util.m"
                      {
#line 655 "prog_io_util.m"
                        {
#line 655 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__InstTermA_10, &parse_tree__prog_io_util__InstA_12);
                        }
#line 654 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 654 "prog_io_util.m"
                          {
#line 656 "prog_io_util.m"
                            {
#line 656 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__InstTermB_11, &parse_tree__prog_io_util__InstB_13);
                            }
#line 654 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 654 "prog_io_util.m"
                              {
#line 657 "prog_io_util.m"
                                {
#line 657 "prog_io_util.m"
                                  MR_Word base;
#line 657 "prog_io_util.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 657 "prog_io_util.m"
                                  *parse_tree__prog_io_util__Mode_6 = base;
#line 657 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__InstA_12));
#line 657 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__InstB_13));
#line 657 "prog_io_util.m"
                                }
#line 657 "prog_io_util.m"
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
#line 651 "prog_io_util.m"
        else
#line 658 "prog_io_util.m"
          {
#line 659 "prog_io_util.m"
            MR_String parse_tree__prog_io_util__V_22_22;

#line 659 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermFunctor_7)) == (MR_mktag((MR_Integer) 0)));
#line 659 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 659 "prog_io_util.m"
              {
#line 659 "prog_io_util.m"
                parse_tree__prog_io_util__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TermFunctor_7, (MR_Integer) 0)));
#line 659 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_22_22, (MR_String) "is") == 0);
#line 659 "prog_io_util.m"
              }
#line 658 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 661 "prog_io_util.m"
              {
#line 661 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__BeforeIsTerm_14;
#line 661 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__DetTerm_15;
#line 661 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_23_23;
#line 661 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_24_24;

#line 661 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermArgs_8)) == (MR_mktag((MR_Integer) 1)));
#line 661 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 661 "prog_io_util.m"
                  {
#line 661 "prog_io_util.m"
                    parse_tree__prog_io_util__BeforeIsTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 0)));
#line 661 "prog_io_util.m"
                    parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 1)));
#line 661 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 661 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 661 "prog_io_util.m"
                      {
#line 661 "prog_io_util.m"
                        parse_tree__prog_io_util__DetTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_23_23, (MR_Integer) 0)));
#line 661 "prog_io_util.m"
                        parse_tree__prog_io_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_23_23, (MR_Integer) 1)));
#line 661 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 661 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 662 "prog_io_util.m"
                          {
#line 662 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_higher_order_mode_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__BeforeIsTerm_14, parse_tree__prog_io_util__DetTerm_15, parse_tree__prog_io_util__Mode_6);
                          }
#line 661 "prog_io_util.m"
                      }
#line 661 "prog_io_util.m"
                  }
#line 661 "prog_io_util.m"
              }
#line 658 "prog_io_util.m"
            else
#line 668 "prog_io_util.m"
              {
#line 668 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Name_16;
#line 668 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Args_17;
#line 668 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__ConvertedArgs_18;

#line 667 "prog_io_util.m"
                {
#line 667 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_from_f_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__TermFunctor_7, parse_tree__prog_io_util__TermArgs_8, &parse_tree__prog_io_util__Name_16, &parse_tree__prog_io_util__Args_17);
                }
#line 668 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 668 "prog_io_util.m"
                  {
#line 669 "prog_io_util.m"
                    {
#line 669 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__Args_17, &parse_tree__prog_io_util__ConvertedArgs_18);
                    }
#line 668 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 668 "prog_io_util.m"
                      {
#line 670 "prog_io_util.m"
                        {
#line 670 "prog_io_util.m"
                          MR_Word base;
#line 670 "prog_io_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "prog_io_util.m"
                          *parse_tree__prog_io_util__Mode_6 = base;
#line 670 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Name_16));
#line 670 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__ConvertedArgs_18));
#line 670 "prog_io_util.m"
                        }
#line 670 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 668 "prog_io_util.m"
                      }
#line 668 "prog_io_util.m"
                  }
#line 668 "prog_io_util.m"
              }
#line 658 "prog_io_util.m"
          }
#line 648 "prog_io_util.m"
      }
#line 647 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 647 "prog_io_util.m"
  }
#line 131 "prog_io_util.m"
}

#line 129 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__convert_mode_list_3_p_0(
#line 129 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
#line 129 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 129 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3)
#line 129 "prog_io_util.m"
{
#line 642 "prog_io_util.m"
  {
#line 642 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 642 "prog_io_util.m"
    if ((parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 642 "prog_io_util.m"
      {
#line 642 "prog_io_util.m"
        *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 642 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 642 "prog_io_util.m"
      }
#line 642 "prog_io_util.m"
    else
#line 643 "prog_io_util.m"
      {
#line 643 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__H0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 643 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__T0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 643 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__H_8;
#line 643 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__T_9;

#line 644 "prog_io_util.m"
        {
#line 644 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__H0_6, &parse_tree__prog_io_util__H_8);
        }
#line 643 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 643 "prog_io_util.m"
          {
#line 645 "prog_io_util.m"
            {
#line 645 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__T0_7, &parse_tree__prog_io_util__T_9);
            }
#line 643 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 643 "prog_io_util.m"
              {
#line 643 "prog_io_util.m"
                {
#line 643 "prog_io_util.m"
                  MR_Word base;
#line 643 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 643 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 643 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__H_8));
#line 643 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__T_9));
#line 643 "prog_io_util.m"
                }
#line 643 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 643 "prog_io_util.m"
              }
#line 643 "prog_io_util.m"
          }
#line 643 "prog_io_util.m"
      }
#line 642 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 642 "prog_io_util.m"
  }
#line 129 "prog_io_util.m"
}

#line 120 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_purity_annotation_3_p_0(
#line 120 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_14,
#line 120 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term0_4,
#line 120 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Purity_5,
#line 120 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Term_6)
#line 120 "prog_io_util.m"
{
#line 556 "prog_io_util.m"
  {
#line 556 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term0_4)) == (MR_mktag((MR_Integer) 0)));
#line 556 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Term1_8;
#line 556 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Purity0_10;
#line 557 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__PurityName_7;
#line 557 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;
#line 557 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_12_12;
#line 557 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 557 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 557 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 557 "prog_io_util.m"
      {
#line 557 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_4, (MR_Integer) 0)));
#line 557 "prog_io_util.m"
        parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_4, (MR_Integer) 1)));
#line 557 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_4, (MR_Integer) 2)));
#line 557 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_11_11)) == (MR_mktag((MR_Integer) 0)));
#line 557 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 557 "prog_io_util.m"
          {
#line 557 "prog_io_util.m"
            parse_tree__prog_io_util__PurityName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_11_11, (MR_Integer) 0)));
#line 557 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 557 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 557 "prog_io_util.m"
              {
#line 557 "prog_io_util.m"
                parse_tree__prog_io_util__Term1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_12_12, (MR_Integer) 0)));
#line 557 "prog_io_util.m"
                parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_12_12, (MR_Integer) 1)));
#line 557 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 557 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 558 "prog_io_util.m"
                  {
#line 558 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = parse_tree__prog_out__purity_name_2_p_1(&parse_tree__prog_io_util__Purity0_10, parse_tree__prog_io_util__PurityName_7);
                  }
#line 557 "prog_io_util.m"
              }
#line 557 "prog_io_util.m"
          }
#line 557 "prog_io_util.m"
      }
#line 556 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 560 "prog_io_util.m"
      {
#line 560 "prog_io_util.m"
        *parse_tree__prog_io_util__Purity_5 = parse_tree__prog_io_util__Purity0_10;
#line 561 "prog_io_util.m"
        *parse_tree__prog_io_util__Term_6 = parse_tree__prog_io_util__Term1_8;
#line 560 "prog_io_util.m"
      }
#line 556 "prog_io_util.m"
    else
#line 563 "prog_io_util.m"
      {
#line 563 "prog_io_util.m"
        *parse_tree__prog_io_util__Purity_5 = (MR_Integer) 0;
#line 564 "prog_io_util.m"
        *parse_tree__prog_io_util__Term_6 = parse_tree__prog_io_util__Term0_4;
#line 563 "prog_io_util.m"
      }
#line 556 "prog_io_util.m"
  }
#line 120 "prog_io_util.m"
}

#line 118 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__unparse_type_2_p_0(
#line 118 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Type_3,
#line 118 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Term_4)
#line 118 "prog_io_util.m"
{
#line 567 "prog_io_util.m"
  {
#line 567 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 567 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Context_5;

#line 568 "prog_io_util.m"
    {
#line 568 "prog_io_util.m"
      parse_tree__prog_io_util__Context_5 = mercury__term__context_init_0_f_0();
    }
#line 573 "prog_io_util.m"
#line 573 "prog_io_util.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io_util__Type_3)) {
#line 573 "prog_io_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 573 "prog_io_util.m"
      case (MR_Integer) 0:
#line 570 "prog_io_util.m"
        {
#line 570 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__TVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Type_3, (MR_Integer) 0)));
#line 570 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__Var_8;
#line 570 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Type_3, (MR_Integer) 1)));

#line 571 "prog_io_util.m"
          {
#line 571 "prog_io_util.m"
            parse_tree__prog_io_util__Var_8 = mercury__term__coerce_var_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__TVar_6);
          }
#line 572 "prog_io_util.m"
          {
#line 572 "prog_io_util.m"
            MR_Word base;
#line 572 "prog_io_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "prog_io_util.m"
            *parse_tree__prog_io_util__Term_4 = base;
#line 572 "prog_io_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Var_8));
#line 572 "prog_io_util.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Context_5));
#line 572 "prog_io_util.m"
          }
#line 570 "prog_io_util.m"
        }
#line 573 "prog_io_util.m"
        break;
#line 573 "prog_io_util.m"
      case (MR_Integer) 1:
#line 574 "prog_io_util.m"
        {
#line 574 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Type_3, (MR_Integer) 0)));
#line 574 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Type_3, (MR_Integer) 1)));
#line 574 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__ArgTerms_12;
#line 574 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Type_3, (MR_Integer) 2)));

#line 575 "prog_io_util.m"
          {
#line 575 "prog_io_util.m"
            parse_tree__prog_io_util__unparse_type_list_2_p_0(parse_tree__prog_io_util__Args_10, &parse_tree__prog_io_util__ArgTerms_12);
          }
#line 576 "prog_io_util.m"
          {
#line 576 "prog_io_util.m"
            parse_tree__prog_io_util__unparse_qualified_term_3_p_0(parse_tree__prog_io_util__SymName_9, parse_tree__prog_io_util__ArgTerms_12, parse_tree__prog_io_util__Term_4);
          }
#line 574 "prog_io_util.m"
        }
#line 573 "prog_io_util.m"
        break;
#line 573 "prog_io_util.m"
      case (MR_Integer) 2:
#line 578 "prog_io_util.m"
        {
#line 578 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__BuiltinType_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Type_3, (MR_Integer) 0)));
#line 578 "prog_io_util.m"
          MR_String parse_tree__prog_io_util__Name_14;
#line 578 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_45_45;

#line 579 "prog_io_util.m"
          {
#line 579 "prog_io_util.m"
            parse_tree__prog_out__builtin_type_to_string_2_p_0(parse_tree__prog_io_util__BuiltinType_13, &parse_tree__prog_io_util__Name_14);
          }
#line 580 "prog_io_util.m"
          {
#line 580 "prog_io_util.m"
            parse_tree__prog_io_util__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 580 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_util__Name_14));
#line 580 "prog_io_util.m"
          }
#line 580 "prog_io_util.m"
          {
#line 580 "prog_io_util.m"
            MR_Word base;
#line 580 "prog_io_util.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 580 "prog_io_util.m"
            *parse_tree__prog_io_util__Term_4 = base;
#line 580 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_45_45));
#line 580 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 580 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_5));
#line 580 "prog_io_util.m"
          }
#line 578 "prog_io_util.m"
        }
#line 573 "prog_io_util.m"
        break;
#line 573 "prog_io_util.m"
      case (MR_Integer) 3:
#line 573 "prog_io_util.m"
#line 573 "prog_io_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 0)))) {
#line 573 "prog_io_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 573 "prog_io_util.m"
          case (MR_Integer) 0:
#line 597 "prog_io_util.m"
            {
#line 597 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Args_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 1)));
#line 597 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__ArgTerms_51;
#line 597 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 2)));

#line 598 "prog_io_util.m"
              {
#line 598 "prog_io_util.m"
                parse_tree__prog_io_util__unparse_type_list_2_p_0(parse_tree__prog_io_util__Args_50, &parse_tree__prog_io_util__ArgTerms_51);
              }
#line 599 "prog_io_util.m"
              {
#line 599 "prog_io_util.m"
                MR_Word base;
#line 599 "prog_io_util.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 599 "prog_io_util.m"
                *parse_tree__prog_io_util__Term_4 = base;
#line 599 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[7]));
#line 599 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTerms_51));
#line 599 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_5));
#line 599 "prog_io_util.m"
              }
#line 597 "prog_io_util.m"
            }
#line 573 "prog_io_util.m"
            break;
#line 573 "prog_io_util.m"
          case (MR_Integer) 1:
#line 582 "prog_io_util.m"
            {
#line 582 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__MaybeRet_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 2)));
#line 582 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Purity_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 3)));
#line 582 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Term2_22;
#line 582 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Args_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 1)));
#line 582 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__ArgTerms_49;

#line 583 "prog_io_util.m"
              {
#line 583 "prog_io_util.m"
                parse_tree__prog_io_util__unparse_type_list_2_p_0(parse_tree__prog_io_util__Args_48, &parse_tree__prog_io_util__ArgTerms_49);
              }
#line 590 "prog_io_util.m"
              if ((parse_tree__prog_io_util__MaybeRet_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 591 "prog_io_util.m"
                {
#line 592 "prog_io_util.m"
                  {
#line 592 "prog_io_util.m"
                    parse_tree__prog_io_util__Term2_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 592 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_22, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[2]));
#line 592 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_22, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTerms_49));
#line 592 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_22, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_5));
#line 592 "prog_io_util.m"
                  }
#line 591 "prog_io_util.m"
                }
#line 590 "prog_io_util.m"
              else
#line 585 "prog_io_util.m"
                {
#line 585 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__Ret_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeRet_15, (MR_Integer) 0)));
#line 585 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__Term1_20;
#line 585 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__RetTerm_21;
#line 585 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_42_42;
#line 585 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_43_43;

#line 586 "prog_io_util.m"
                  {
#line 586 "prog_io_util.m"
                    parse_tree__prog_io_util__Term1_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 586 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_20, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[3]));
#line 586 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_20, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTerms_49));
#line 586 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_20, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_5));
#line 586 "prog_io_util.m"
                  }
#line 588 "prog_io_util.m"
                  {
#line 588 "prog_io_util.m"
                    parse_tree__prog_io_util__unparse_type_2_p_0(parse_tree__prog_io_util__Ret_18, &parse_tree__prog_io_util__RetTerm_21);
                  }
#line 589 "prog_io_util.m"
                  {
#line 589 "prog_io_util.m"
                    parse_tree__prog_io_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 589 "prog_io_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_util__RetTerm_21));
#line 589 "prog_io_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 589 "prog_io_util.m"
                  }
#line 589 "prog_io_util.m"
                  {
#line 589 "prog_io_util.m"
                    parse_tree__prog_io_util__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 589 "prog_io_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_util__Term1_20));
#line 589 "prog_io_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_42_42, 1) = ((MR_Box) (parse_tree__prog_io_util__V_43_43));
#line 589 "prog_io_util.m"
                  }
#line 589 "prog_io_util.m"
                  {
#line 589 "prog_io_util.m"
                    parse_tree__prog_io_util__Term2_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 589 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_22, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[4]));
#line 589 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_22, 1) = ((MR_Box) (parse_tree__prog_io_util__V_42_42));
#line 589 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_22, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_5));
#line 589 "prog_io_util.m"
                  }
#line 585 "prog_io_util.m"
                }
#line 634 "prog_io_util.m"
#line 634 "prog_io_util.m"
              switch (parse_tree__prog_io_util__Purity_16) {
#line 634 "prog_io_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 634 "prog_io_util.m"
                case (MR_Integer) 2:
#line 638 "prog_io_util.m"
                  {
#line 638 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Context_72;
#line 638 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_75_75;

#line 639 "prog_io_util.m"
                    {
#line 639 "prog_io_util.m"
                      parse_tree__prog_io_util__Context_72 = mercury__term__context_init_0_f_0();
                    }
#line 640 "prog_io_util.m"
                    {
#line 640 "prog_io_util.m"
                      parse_tree__prog_io_util__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 640 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_util__Term2_22));
#line 640 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 640 "prog_io_util.m"
                    }
#line 640 "prog_io_util.m"
                    {
#line 640 "prog_io_util.m"
                      MR_Word base;
#line 640 "prog_io_util.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 640 "prog_io_util.m"
                      *parse_tree__prog_io_util__Term_4 = base;
#line 640 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[5]));
#line 640 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_75_75));
#line 640 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_72));
#line 640 "prog_io_util.m"
                    }
#line 638 "prog_io_util.m"
                  }
#line 634 "prog_io_util.m"
                  break;
#line 634 "prog_io_util.m"
                case (MR_Integer) 0:
#line 634 "prog_io_util.m"
                  *parse_tree__prog_io_util__Term_4 = parse_tree__prog_io_util__Term2_22;
#line 634 "prog_io_util.m"
                  break;
#line 634 "prog_io_util.m"
                case (MR_Integer) 1:
#line 635 "prog_io_util.m"
                  {
#line 635 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Context_65;
#line 635 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_68_68;

#line 636 "prog_io_util.m"
                    {
#line 636 "prog_io_util.m"
                      parse_tree__prog_io_util__Context_65 = mercury__term__context_init_0_f_0();
                    }
#line 637 "prog_io_util.m"
                    {
#line 637 "prog_io_util.m"
                      parse_tree__prog_io_util__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 637 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_util__Term2_22));
#line 637 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 637 "prog_io_util.m"
                    }
#line 637 "prog_io_util.m"
                    {
#line 637 "prog_io_util.m"
                      MR_Word base;
#line 637 "prog_io_util.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 637 "prog_io_util.m"
                      *parse_tree__prog_io_util__Term_4 = base;
#line 637 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[6]));
#line 637 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_68_68));
#line 637 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_65));
#line 637 "prog_io_util.m"
                    }
#line 635 "prog_io_util.m"
                  }
#line 634 "prog_io_util.m"
                  break;
#line 634 "prog_io_util.m"
              }
#line 582 "prog_io_util.m"
            }
#line 573 "prog_io_util.m"
            break;
#line 573 "prog_io_util.m"
          case (MR_Integer) 2:
#line 601 "prog_io_util.m"
            {
#line 601 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_32_32;
#line 601 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_33_33;
#line 601 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__TVar_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 1)));
#line 601 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Var_53;
#line 601 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Args_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 2)));
#line 601 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__ArgTerms_55;
#line 601 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 3)));

#line 602 "prog_io_util.m"
              {
#line 602 "prog_io_util.m"
                parse_tree__prog_io_util__Var_53 = mercury__term__coerce_var_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__TVar_52);
              }
#line 603 "prog_io_util.m"
              {
#line 603 "prog_io_util.m"
                parse_tree__prog_io_util__unparse_type_list_2_p_0(parse_tree__prog_io_util__Args_54, &parse_tree__prog_io_util__ArgTerms_55);
              }
#line 605 "prog_io_util.m"
              {
#line 605 "prog_io_util.m"
                parse_tree__prog_io_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_util__Var_53));
#line 605 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io_util__Context_5));
#line 605 "prog_io_util.m"
              }
#line 605 "prog_io_util.m"
              {
#line 605 "prog_io_util.m"
                parse_tree__prog_io_util__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io_util__V_33_33));
#line 605 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_32_32, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTerms_55));
#line 605 "prog_io_util.m"
              }
#line 604 "prog_io_util.m"
              {
#line 604 "prog_io_util.m"
                MR_Word base;
#line 604 "prog_io_util.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 604 "prog_io_util.m"
                *parse_tree__prog_io_util__Term_4 = base;
#line 604 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[1]));
#line 604 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_32_32));
#line 604 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_5));
#line 604 "prog_io_util.m"
              }
#line 601 "prog_io_util.m"
            }
#line 573 "prog_io_util.m"
            break;
#line 573 "prog_io_util.m"
          case (MR_Integer) 3:
#line 607 "prog_io_util.m"
            {
#line 608 "prog_io_util.m"
              {
#line 608 "prog_io_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_io_util", (MR_String) "predicate \140parse_tree.prog_io_util.unparse_type\'/2", (MR_String) "kind annotation");
#line 608 "prog_io_util.m"
                return;
              }
#line 607 "prog_io_util.m"
            }
#line 573 "prog_io_util.m"
            break;
#line 573 "prog_io_util.m"
        }
#line 573 "prog_io_util.m"
        break;
#line 573 "prog_io_util.m"
    }
#line 567 "prog_io_util.m"
  }
#line 118 "prog_io_util.m"
}

#line 116 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__is_known_type_name_1_p_0(
#line 116 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Name_2)
#line 116 "prog_io_util.m"
{
#line 403 "prog_io_util.m"
  {
#line 403 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 403 "prog_io_util.m"
    {
#line 403 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_3_3;

#line 403 "prog_io_util.m"
      {
#line 403 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_116_121_112_101_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_util__Name_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_3_3);
      }
#line 403 "prog_io_util.m"
    }
#line 403 "prog_io_util.m"
    if (!(parse_tree__prog_io_util__succeeded))
#line 410 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Name_2, (MR_String) "func") == 0);
#line 403 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 403 "prog_io_util.m"
  }
#line 116 "prog_io_util.m"
}

#line 113 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_types_4_p_0(
#line 113 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Terms_5,
#line 113 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 113 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_7,
#line 113 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_8)
#line 113 "prog_io_util.m"
{
#line 528 "prog_io_util.m"
  {
#line 528 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 528 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__RevTypes_9;
#line 528 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Specs_10;

#line 529 "prog_io_util.m"
    {
#line 529 "prog_io_util.m"
      parse_tree__prog_io_util__parse_types_acc_7_p_0(parse_tree__prog_io_util__Terms_5, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__RevTypes_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__Specs_10);
    }
#line 533 "prog_io_util.m"
    if ((parse_tree__prog_io_util__Specs_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 531 "prog_io_util.m"
      {
#line 531 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_15_15;

#line 532 "prog_io_util.m"
        {
#line 532 "prog_io_util.m"
          parse_tree__prog_io_util__V_15_15 = mercury__list__reverse_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_io_util__RevTypes_9);
        }
#line 532 "prog_io_util.m"
        {
#line 532 "prog_io_util.m"
          MR_Word base;
#line 532 "prog_io_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 532 "prog_io_util.m"
          *parse_tree__prog_io_util__Result_8 = base;
#line 532 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_15_15));
#line 532 "prog_io_util.m"
        }
#line 531 "prog_io_util.m"
      }
#line 533 "prog_io_util.m"
    else
#line 535 "prog_io_util.m"
      {
#line 535 "prog_io_util.m"
        MR_Word base;
#line 535 "prog_io_util.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 535 "prog_io_util.m"
        *parse_tree__prog_io_util__Result_8 = base;
#line 535 "prog_io_util.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Specs_10));
#line 535 "prog_io_util.m"
      }
#line 528 "prog_io_util.m"
  }
#line 113 "prog_io_util.m"
}

#line 111 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__maybe_parse_types_2_p_0(
#line 111 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 111 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Types_4)
#line 111 "prog_io_util.m"
{
#line 521 "prog_io_util.m"
  {
#line 521 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 521 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__VarSet_5;
#line 521 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__ContextPieces_6;
#line 521 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_7_7;

#line 524 "prog_io_util.m"
    {
#line 524 "prog_io_util.m"
      parse_tree__prog_io_util__VarSet_5 = mercury__varset__init_0_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0);
    }
#line 525 "prog_io_util.m"
    {
#line 525 "prog_io_util.m"
      parse_tree__prog_io_util__ContextPieces_6 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
    }
#line 526 "prog_io_util.m"
    {
#line 526 "prog_io_util.m"
      parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_util__Term_3, parse_tree__prog_io_util__VarSet_5, parse_tree__prog_io_util__ContextPieces_6, &parse_tree__prog_io_util__V_7_7);
    }
#line 526 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_7_7)) == (MR_mktag((MR_Integer) 1)));
#line 526 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 526 "prog_io_util.m"
      *parse_tree__prog_io_util__Types_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_7_7, (MR_Integer) 0)));
#line 521 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 521 "prog_io_util.m"
  }
#line 111 "prog_io_util.m"
}

#line 108 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_type_4_p_0(
#line 108 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_5,
#line 108 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 108 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_7,
#line 108 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_8)
#line 108 "prog_io_util.m"
{
#line 275 "prog_io_util.m"
  {
#line 275 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 275 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0))))
#line 279 "prog_io_util.m"
      {
#line 279 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Functor_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 279 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__ArgTerms_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 279 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));

#line 288 "prog_io_util.m"
#line 288 "prog_io_util.m"
        switch (MR_tag((MR_Word) parse_tree__prog_io_util__Functor_12)) {
#line 288 "prog_io_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 288 "prog_io_util.m"
          case (MR_Integer) 0:
#line 289 "prog_io_util.m"
            {
#line 289 "prog_io_util.m"
              MR_String parse_tree__prog_io_util__Name_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Functor_12, (MR_Integer) 0)));
#line 292 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__KnownTypeKind_22;

#line 292 "prog_io_util.m"
              {
#line 292 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_116_121_112_101_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_util__Name_21, parse_tree__prog_io_util__ArgTerms_13, &parse_tree__prog_io_util__KnownTypeKind_22);
              }
#line 292 "prog_io_util.m"
              if (parse_tree__prog_io_util__succeeded)
#line 296 "prog_io_util.m"
#line 296 "prog_io_util.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_util__KnownTypeKind_22)) {
#line 296 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 296 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 302 "prog_io_util.m"
                    {
#line 302 "prog_io_util.m"
                      *parse_tree__prog_io_util__Result_8 = parse_tree__prog_io_util__ill_formed_type_result_3_f_0(parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__Term_5);
                    }
#line 296 "prog_io_util.m"
                    break;
#line 296 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 294 "prog_io_util.m"
                    {
#line 294 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__KnownTypeKind_22, (MR_Integer) 0)));

#line 295 "prog_io_util.m"
                      {
#line 295 "prog_io_util.m"
                        MR_Word base;
#line 295 "prog_io_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 295 "prog_io_util.m"
                        *parse_tree__prog_io_util__Result_8 = base;
#line 295 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Type_23));
#line 295 "prog_io_util.m"
                      }
#line 294 "prog_io_util.m"
                    }
#line 296 "prog_io_util.m"
                    break;
#line 296 "prog_io_util.m"
                  case (MR_Integer) 2:
#line 297 "prog_io_util.m"
                    {
#line 297 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__CompoundTypeKind_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__KnownTypeKind_22, (MR_Integer) 0)));

#line 298 "prog_io_util.m"
                      {
#line 298 "prog_io_util.m"
                        parse_tree__prog_io_util__parse_compound_type_5_p_0(parse_tree__prog_io_util__Term_5, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__CompoundTypeKind_24, parse_tree__prog_io_util__Result_8);
                      }
#line 297 "prog_io_util.m"
                    }
#line 296 "prog_io_util.m"
                    break;
#line 296 "prog_io_util.m"
                }
#line 292 "prog_io_util.m"
              else
#line 309 "prog_io_util.m"
                {
#line 309 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__NameResult_25;

#line 308 "prog_io_util.m"
                  {
#line 308 "prog_io_util.m"
                    parse_tree__prog_io_sym_name__parse_sym_name_and_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__Term_5, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__NameResult_25);
                  }
#line 322 "prog_io_util.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io_util__NameResult_25)) == (MR_mktag((MR_Integer) 0))))
#line 323 "prog_io_util.m"
                    {
#line 323 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__Specs_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__NameResult_25, (MR_Integer) 0)));

#line 324 "prog_io_util.m"
                      {
#line 324 "prog_io_util.m"
                        MR_Word base;
#line 324 "prog_io_util.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 324 "prog_io_util.m"
                        *parse_tree__prog_io_util__Result_8 = base;
#line 324 "prog_io_util.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Specs_35));
#line 324 "prog_io_util.m"
                      }
#line 323 "prog_io_util.m"
                    }
#line 322 "prog_io_util.m"
                  else
#line 311 "prog_io_util.m"
                    {
#line 311 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__SymName_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__NameResult_25, (MR_Integer) 0)));
#line 311 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__SymNameArgTerms_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__NameResult_25, (MR_Integer) 1)));
#line 311 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__SymNameArgsResult_28;

#line 312 "prog_io_util.m"
                      {
#line 312 "prog_io_util.m"
                        parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_util__SymNameArgTerms_27, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__SymNameArgsResult_28);
                      }
#line 318 "prog_io_util.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_io_util__SymNameArgsResult_28)) == (MR_mktag((MR_Integer) 0))))
#line 320 "prog_io_util.m"
                        *parse_tree__prog_io_util__Result_8 = (MR_Word) parse_tree__prog_io_util__SymNameArgsResult_28;
#line 318 "prog_io_util.m"
                      else
#line 315 "prog_io_util.m"
                        {
#line 315 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__ArgTypes_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__SymNameArgsResult_28, (MR_Integer) 0)));
#line 315 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_31_31;

#line 316 "prog_io_util.m"
                          {
#line 316 "prog_io_util.m"
                            parse_tree__prog_io_util__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 316 "prog_io_util.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_util__SymName_26));
#line 316 "prog_io_util.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_31_31, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTypes_29));
#line 316 "prog_io_util.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_31_31, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 316 "prog_io_util.m"
                          }
#line 316 "prog_io_util.m"
                          {
#line 316 "prog_io_util.m"
                            MR_Word base;
#line 316 "prog_io_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 316 "prog_io_util.m"
                            *parse_tree__prog_io_util__Result_8 = base;
#line 316 "prog_io_util.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_31_31));
#line 316 "prog_io_util.m"
                          }
#line 315 "prog_io_util.m"
                        }
#line 311 "prog_io_util.m"
                    }
#line 309 "prog_io_util.m"
                }
#line 289 "prog_io_util.m"
            }
#line 288 "prog_io_util.m"
            break;
#line 288 "prog_io_util.m"
          case (MR_Integer) 1:
#line 288 "prog_io_util.m"
          case (MR_Integer) 2:
#line 287 "prog_io_util.m"
            {
#line 287 "prog_io_util.m"
              *parse_tree__prog_io_util__Result_8 = parse_tree__prog_io_util__ill_formed_type_result_3_f_0(parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__Term_5);
            }
#line 288 "prog_io_util.m"
            break;
#line 288 "prog_io_util.m"
          case (MR_Integer) 3:
#line 287 "prog_io_util.m"
            {
#line 287 "prog_io_util.m"
              *parse_tree__prog_io_util__Result_8 = parse_tree__prog_io_util__ill_formed_type_result_3_f_0(parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__Term_5);
            }
#line 288 "prog_io_util.m"
            break;
#line 288 "prog_io_util.m"
        }
#line 279 "prog_io_util.m"
      }
#line 275 "prog_io_util.m"
    else
#line 275 "prog_io_util.m"
      {
#line 275 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 275 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Var_11;
#line 275 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_33_33;
#line 275 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));

#line 276 "prog_io_util.m"
        {
#line 276 "prog_io_util.m"
          mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_util__Var0_9, &parse_tree__prog_io_util__Var_11);
        }
#line 277 "prog_io_util.m"
        {
#line 277 "prog_io_util.m"
          parse_tree__prog_io_util__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 277 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_util__Var_11));
#line 277 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 277 "prog_io_util.m"
        }
#line 277 "prog_io_util.m"
        {
#line 277 "prog_io_util.m"
          MR_Word base;
#line 277 "prog_io_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 277 "prog_io_util.m"
          *parse_tree__prog_io_util__Result_8 = base;
#line 277 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_33_33));
#line 277 "prog_io_util.m"
        }
#line 275 "prog_io_util.m"
      }
#line 275 "prog_io_util.m"
  }
#line 108 "prog_io_util.m"
}

#line 106 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__maybe_parse_type_2_p_0(
#line 106 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 106 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Type_4)
#line 106 "prog_io_util.m"
{
#line 264 "prog_io_util.m"
  {
#line 264 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 264 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__VarSet_5;
#line 264 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__ContextPieces_6;
#line 264 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_7_7;

#line 267 "prog_io_util.m"
    {
#line 267 "prog_io_util.m"
      parse_tree__prog_io_util__VarSet_5 = mercury__varset__init_0_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0);
    }
#line 268 "prog_io_util.m"
    {
#line 268 "prog_io_util.m"
      parse_tree__prog_io_util__ContextPieces_6 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
    }
#line 269 "prog_io_util.m"
    {
#line 269 "prog_io_util.m"
      parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_util__Term_3, parse_tree__prog_io_util__VarSet_5, parse_tree__prog_io_util__ContextPieces_6, &parse_tree__prog_io_util__V_7_7);
    }
#line 269 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_7_7)) == (MR_mktag((MR_Integer) 1)));
#line 269 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 269 "prog_io_util.m"
      *parse_tree__prog_io_util__Type_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_7_7, (MR_Integer) 0)));
#line 264 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 264 "prog_io_util.m"
  }
#line 106 "prog_io_util.m"
}

#line 102 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_pred_or_func_and_args_general_5_p_0(
#line 102 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for__T_28,
#line 102 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__MaybeModuleName_6,
#line 102 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__PredAndArgsTerm_7,
#line 102 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_8,
#line 102 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_9,
#line 102 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__PredAndArgsResult_10)
#line 102 "prog_io_util.m"
{
#line 235 "prog_io_util.m"
  {
#line 235 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredAndArgsTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 235 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FunctorTerm_14;
#line 235 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__MaybeFuncResult_15;
#line 235 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__GenericVarSet_16;
#line 235 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Result_18;
#line 236 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FuncAndArgsTerm_11;
#line 236 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FuncResultTerm_12;
#line 237 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_22_22;
#line 237 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_23_23;
#line 237 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_24_24;
#line 237 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_25_25;
#line 237 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_26_26;
#line 237 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;

#line 237 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 237 "prog_io_util.m"
      {
#line 237 "prog_io_util.m"
        parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_7, (MR_Integer) 0)));
#line 237 "prog_io_util.m"
        parse_tree__prog_io_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_7, (MR_Integer) 1)));
#line 237 "prog_io_util.m"
        parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_7, (MR_Integer) 2)));
#line 237 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_22_22)) == (MR_mktag((MR_Integer) 0)));
#line 237 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 237 "prog_io_util.m"
          {
#line 237 "prog_io_util.m"
            parse_tree__prog_io_util__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_22_22, (MR_Integer) 0)));
#line 237 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_23_23, (MR_String) "=") == 0);
#line 237 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 237 "prog_io_util.m"
              {
#line 238 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 238 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 238 "prog_io_util.m"
                  {
#line 238 "prog_io_util.m"
                    parse_tree__prog_io_util__FuncAndArgsTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_24_24, (MR_Integer) 0)));
#line 238 "prog_io_util.m"
                    parse_tree__prog_io_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_24_24, (MR_Integer) 1)));
#line 238 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 238 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 238 "prog_io_util.m"
                      {
#line 238 "prog_io_util.m"
                        parse_tree__prog_io_util__FuncResultTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_25_25, (MR_Integer) 0)));
#line 238 "prog_io_util.m"
                        parse_tree__prog_io_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_25_25, (MR_Integer) 1)));
#line 238 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 238 "prog_io_util.m"
                      }
#line 238 "prog_io_util.m"
                  }
#line 237 "prog_io_util.m"
              }
#line 237 "prog_io_util.m"
          }
#line 237 "prog_io_util.m"
      }
#line 236 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 240 "prog_io_util.m"
      {
#line 240 "prog_io_util.m"
        parse_tree__prog_io_util__FunctorTerm_14 = parse_tree__prog_io_util__FuncAndArgsTerm_11;
#line 241 "prog_io_util.m"
        {
#line 241 "prog_io_util.m"
          parse_tree__prog_io_util__MaybeFuncResult_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 241 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeFuncResult_15, 0) = ((MR_Box) (parse_tree__prog_io_util__FuncResultTerm_12));
#line 241 "prog_io_util.m"
        }
#line 240 "prog_io_util.m"
      }
#line 236 "prog_io_util.m"
    else
#line 243 "prog_io_util.m"
      {
#line 243 "prog_io_util.m"
        parse_tree__prog_io_util__FunctorTerm_14 = parse_tree__prog_io_util__PredAndArgsTerm_7;
#line 244 "prog_io_util.m"
        parse_tree__prog_io_util__MaybeFuncResult_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 243 "prog_io_util.m"
      }
#line 246 "prog_io_util.m"
    {
#line 246 "prog_io_util.m"
      mercury__varset__coerce_2_p_0(parse_tree__prog_io_util__TypeInfo_for__T_28, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__VarSet_8, &parse_tree__prog_io_util__GenericVarSet_16);
    }
#line 251 "prog_io_util.m"
    if ((parse_tree__prog_io_util__MaybeModuleName_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 253 "prog_io_util.m"
      {
#line 253 "prog_io_util.m"
        parse_tree__prog_io_sym_name__parse_sym_name_and_args_4_p_0(parse_tree__prog_io_util__TypeInfo_for__T_28, parse_tree__prog_io_util__FunctorTerm_14, parse_tree__prog_io_util__GenericVarSet_16, parse_tree__prog_io_util__ContextPieces_9, &parse_tree__prog_io_util__Result_18);
      }
#line 251 "prog_io_util.m"
    else
#line 248 "prog_io_util.m"
      {
#line 248 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeModuleName_6, (MR_Integer) 0)));

#line 249 "prog_io_util.m"
        {
#line 249 "prog_io_util.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_util__TypeInfo_for__T_28, parse_tree__prog_io_util__ModuleName_17, parse_tree__prog_io_util__FunctorTerm_14, parse_tree__prog_io_util__GenericVarSet_16, parse_tree__prog_io_util__ContextPieces_9, &parse_tree__prog_io_util__Result_18);
        }
#line 248 "prog_io_util.m"
      }
#line 259 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__Result_18)) == (MR_mktag((MR_Integer) 0))))
#line 261 "prog_io_util.m"
      *parse_tree__prog_io_util__PredAndArgsResult_10 = (MR_Word) parse_tree__prog_io_util__Result_18;
#line 259 "prog_io_util.m"
    else
#line 257 "prog_io_util.m"
      {
#line 257 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__SymName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Result_18, (MR_Integer) 0)));
#line 257 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Result_18, (MR_Integer) 1)));
#line 257 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_27_27;

#line 258 "prog_io_util.m"
        {
#line 258 "prog_io_util.m"
          parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 258 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_util__Args_20));
#line 258 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io_util__MaybeFuncResult_15));
#line 258 "prog_io_util.m"
        }
#line 258 "prog_io_util.m"
        {
#line 258 "prog_io_util.m"
          MR_Word base;
#line 258 "prog_io_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "prog_io_util.m"
          *parse_tree__prog_io_util__PredAndArgsResult_10 = base;
#line 258 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__SymName_19));
#line 258 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
#line 258 "prog_io_util.m"
        }
#line 257 "prog_io_util.m"
      }
#line 235 "prog_io_util.m"
  }
#line 102 "prog_io_util.m"
}

#line 99 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__parse_pred_or_func_and_args_4_p_0(
#line 99 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for__T_20,
#line 99 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__PredAndArgsTerm_5,
#line 99 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__PredOrFunc_6,
#line 99 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__SymName_7,
#line 99 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__ArgTerms_8)
#line 99 "prog_io_util.m"
{
#line 222 "prog_io_util.m"
  {
#line 222 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredAndArgsTerm_5)) == (MR_mktag((MR_Integer) 0)));
#line 222 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FuncAndArgsTerm_9;
#line 222 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_16_16;
#line 223 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 223 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_14_14;
#line 223 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_15_15;
#line 223 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_17_17;
#line 223 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;
#line 224 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FuncResultTerm_10;

#line 223 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 223 "prog_io_util.m"
      {
#line 223 "prog_io_util.m"
        parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_5, (MR_Integer) 0)));
#line 223 "prog_io_util.m"
        parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_5, (MR_Integer) 1)));
#line 223 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_5, (MR_Integer) 2)));
#line 223 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 223 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 223 "prog_io_util.m"
          {
#line 223 "prog_io_util.m"
            parse_tree__prog_io_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_13_13, (MR_Integer) 0)));
#line 223 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_14_14, (MR_String) "=") == 0);
#line 223 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 223 "prog_io_util.m"
              {
#line 224 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 224 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 224 "prog_io_util.m"
                  {
#line 224 "prog_io_util.m"
                    parse_tree__prog_io_util__FuncAndArgsTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 0)));
#line 224 "prog_io_util.m"
                    parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 1)));
#line 224 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 224 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 224 "prog_io_util.m"
                      {
#line 224 "prog_io_util.m"
                        parse_tree__prog_io_util__FuncResultTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
#line 224 "prog_io_util.m"
                        parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
#line 224 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 224 "prog_io_util.m"
                      }
#line 224 "prog_io_util.m"
                  }
#line 223 "prog_io_util.m"
              }
#line 223 "prog_io_util.m"
          }
#line 223 "prog_io_util.m"
      }
#line 222 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 226 "prog_io_util.m"
      {
#line 226 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TypeCtorInfo_21_21;
#line 226 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TypeInfo_22_22;
#line 226 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__ArgTerms0_12;
#line 228 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__conv0_ArgTerms_8;

#line 226 "prog_io_util.m"
        {
#line 226 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0(parse_tree__prog_io_util__TypeInfo_for__T_20, parse_tree__prog_io_util__FuncAndArgsTerm_9, parse_tree__prog_io_util__SymName_7, &parse_tree__prog_io_util__ArgTerms0_12);
        }
#line 226 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 226 "prog_io_util.m"
          {
#line 227 "prog_io_util.m"
            *parse_tree__prog_io_util__PredOrFunc_6 = (MR_Integer) 1;
#line 15133 "parse_tree.prog_io_util.c"
            parse_tree__prog_io_util__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 15135 "parse_tree.prog_io_util.c"
            {
#line 15137 "parse_tree.prog_io_util.c"
              parse_tree__prog_io_util__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15139 "parse_tree.prog_io_util.c"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_22_22, 0) = ((MR_Box) (parse_tree__prog_io_util__TypeCtorInfo_21_21));
#line 15141 "parse_tree.prog_io_util.c"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_22_22, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for__T_20));
#line 15143 "parse_tree.prog_io_util.c"
            }
#line 228 "prog_io_util.m"
            {
#line 228 "prog_io_util.m"
              parse_tree__prog_io_util__conv0_ArgTerms_8 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_util__TypeInfo_22_22, (MR_Word) parse_tree__prog_io_util__ArgTerms0_12, (MR_Word) parse_tree__prog_io_util__V_16_16);
            }
#line 228 "prog_io_util.m"
            *parse_tree__prog_io_util__ArgTerms_8 = (MR_Word) parse_tree__prog_io_util__conv0_ArgTerms_8;
#line 228 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 226 "prog_io_util.m"
          }
#line 226 "prog_io_util.m"
      }
#line 222 "prog_io_util.m"
    else
#line 230 "prog_io_util.m"
      {
#line 230 "prog_io_util.m"
        {
#line 230 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0(parse_tree__prog_io_util__TypeInfo_for__T_20, parse_tree__prog_io_util__PredAndArgsTerm_5, parse_tree__prog_io_util__SymName_7, parse_tree__prog_io_util__ArgTerms_8);
        }
#line 230 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 230 "prog_io_util.m"
          {
#line 231 "prog_io_util.m"
            *parse_tree__prog_io_util__PredOrFunc_6 = (MR_Integer) 0;
#line 231 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 230 "prog_io_util.m"
          }
#line 230 "prog_io_util.m"
      }
#line 222 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 222 "prog_io_util.m"
  }
#line 99 "prog_io_util.m"
}

#line 96 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__parse_pred_or_func_name_and_arity_4_p_0(
#line 96 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_17,
#line 96 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__PorFPredAndArityTerm_5,
#line 96 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__PredOrFunc_6,
#line 96 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__SymName_7,
#line 96 "prog_io_util.m"
  MR_Integer * parse_tree__prog_io_util__Arity_8)
#line 96 "prog_io_util.m"
{
#line 212 "prog_io_util.m"
  {
#line 212 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PorFPredAndArityTerm_5)) == (MR_mktag((MR_Integer) 0)));
#line 212 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__PredOrFuncStr_9;
#line 212 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Args_10;
#line 212 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Arg_12;
#line 212 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__ModuleName_13;
#line 212 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_14_14;
#line 212 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_15_15;
#line 212 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_16_16;
#line 213 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;

#line 213 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 213 "prog_io_util.m"
      {
#line 213 "prog_io_util.m"
        parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PorFPredAndArityTerm_5, (MR_Integer) 0)));
#line 213 "prog_io_util.m"
        parse_tree__prog_io_util__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PorFPredAndArityTerm_5, (MR_Integer) 1)));
#line 213 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PorFPredAndArityTerm_5, (MR_Integer) 2)));
#line 213 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_14_14)) == (MR_mktag((MR_Integer) 0)));
#line 213 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 213 "prog_io_util.m"
          {
#line 213 "prog_io_util.m"
            parse_tree__prog_io_util__PredOrFuncStr_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_14_14, (MR_Integer) 0)));
#line 215 "prog_io_util.m"
            if ((strcmp(parse_tree__prog_io_util__PredOrFuncStr_9, (MR_String) "func") == 0))
#line 215 "prog_io_util.m"
              {
#line 215 "prog_io_util.m"
                *parse_tree__prog_io_util__PredOrFunc_6 = (MR_Integer) 1;
#line 215 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 215 "prog_io_util.m"
              }
#line 215 "prog_io_util.m"
            else
#line 215 "prog_io_util.m"
            if ((strcmp(parse_tree__prog_io_util__PredOrFuncStr_9, (MR_String) "pred") == 0))
#line 214 "prog_io_util.m"
              {
#line 214 "prog_io_util.m"
                *parse_tree__prog_io_util__PredOrFunc_6 = (MR_Integer) 0;
#line 214 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 214 "prog_io_util.m"
              }
#line 215 "prog_io_util.m"
            else
#line 215 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 212 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 212 "prog_io_util.m"
              {
#line 217 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args_10)) == (MR_mktag((MR_Integer) 1)));
#line 217 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 217 "prog_io_util.m"
                  {
#line 217 "prog_io_util.m"
                    parse_tree__prog_io_util__Arg_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_10, (MR_Integer) 0)));
#line 217 "prog_io_util.m"
                    parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_10, (MR_Integer) 1)));
#line 217 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 212 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 212 "prog_io_util.m"
                      {
#line 218 "prog_io_util.m"
                        parse_tree__prog_io_util__V_16_16 = (MR_String) "";
#line 218 "prog_io_util.m"
                        parse_tree__prog_io_util__ModuleName_13 = (MR_Word) &parse_tree__prog_io_util_scalar_common_3[1];
#line 219 "prog_io_util.m"
                        {
#line 219 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_name_and_arity_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_17, parse_tree__prog_io_util__ModuleName_13, parse_tree__prog_io_util__Arg_12, parse_tree__prog_io_util__SymName_7, parse_tree__prog_io_util__Arity_8);
                        }
#line 212 "prog_io_util.m"
                      }
#line 217 "prog_io_util.m"
                  }
#line 212 "prog_io_util.m"
              }
#line 213 "prog_io_util.m"
          }
#line 213 "prog_io_util.m"
      }
#line 212 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 212 "prog_io_util.m"
  }
#line 96 "prog_io_util.m"
}

#line 93 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__parse_name_and_arity_unqualified_3_p_0(
#line 93 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
#line 93 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__PredAndArityTerm_4,
#line 93 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__SymName_5,
#line 93 "prog_io_util.m"
  MR_Integer * parse_tree__prog_io_util__Arity_6)
#line 93 "prog_io_util.m"
{
#line 208 "prog_io_util.m"
  {
#line 208 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 209 "prog_io_util.m"
    {
#line 209 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_name_and_arity_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_9, (MR_Word) &parse_tree__prog_io_util_scalar_common_3[1], parse_tree__prog_io_util__PredAndArityTerm_4, parse_tree__prog_io_util__SymName_5, parse_tree__prog_io_util__Arity_6);
    }
#line 208 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 208 "prog_io_util.m"
  }
#line 93 "prog_io_util.m"
}

#line 90 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__parse_name_and_arity_4_p_0(
#line 90 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_20,
#line 90 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ModuleName_5,
#line 90 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__PredAndArityTerm_6,
#line 90 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__SymName_7,
#line 90 "prog_io_util.m"
  MR_Integer * parse_tree__prog_io_util__Arity_8)
#line 90 "prog_io_util.m"
{
#line 201 "prog_io_util.m"
  {
#line 201 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredAndArityTerm_6)) == (MR_mktag((MR_Integer) 0)));
#line 201 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__PredNameTerm_9;
#line 201 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__ArityTerm_10;
#line 201 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 201 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_14_14;
#line 201 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_15_15;
#line 201 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_16_16;
#line 201 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_17_17;
#line 201 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_18_18;
#line 201 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_19_19;
#line 202 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;
#line 206 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_12_12;

#line 202 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 202 "prog_io_util.m"
      {
#line 202 "prog_io_util.m"
        parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArityTerm_6, (MR_Integer) 0)));
#line 202 "prog_io_util.m"
        parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArityTerm_6, (MR_Integer) 1)));
#line 202 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArityTerm_6, (MR_Integer) 2)));
#line 202 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 202 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 202 "prog_io_util.m"
          {
#line 202 "prog_io_util.m"
            parse_tree__prog_io_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_13_13, (MR_Integer) 0)));
#line 202 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_14_14, (MR_String) "/") == 0);
#line 201 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 201 "prog_io_util.m"
              {
#line 203 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 203 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 203 "prog_io_util.m"
                  {
#line 203 "prog_io_util.m"
                    parse_tree__prog_io_util__PredNameTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 0)));
#line 203 "prog_io_util.m"
                    parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 1)));
#line 203 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 203 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 203 "prog_io_util.m"
                      {
#line 203 "prog_io_util.m"
                        parse_tree__prog_io_util__ArityTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
#line 203 "prog_io_util.m"
                        parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
#line 203 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 201 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 201 "prog_io_util.m"
                          {
#line 204 "prog_io_util.m"
                            {
#line 204 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_implicitly_qualified_sym_name_and_no_args_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_20, parse_tree__prog_io_util__ModuleName_5, parse_tree__prog_io_util__PredNameTerm_9, parse_tree__prog_io_util__SymName_7);
                            }
#line 201 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 201 "prog_io_util.m"
                              {
#line 206 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__ArityTerm_10)) == (MR_mktag((MR_Integer) 0)));
#line 206 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 206 "prog_io_util.m"
                                  {
#line 206 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__ArityTerm_10, (MR_Integer) 0)));
#line 206 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__ArityTerm_10, (MR_Integer) 1)));
#line 206 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__ArityTerm_10, (MR_Integer) 2)));
#line 206 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 206 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 206 "prog_io_util.m"
                                      {
#line 206 "prog_io_util.m"
                                        *parse_tree__prog_io_util__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, (MR_Integer) 0)));
#line 206 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 206 "prog_io_util.m"
                                      }
#line 206 "prog_io_util.m"
                                  }
#line 201 "prog_io_util.m"
                              }
#line 201 "prog_io_util.m"
                          }
#line 203 "prog_io_util.m"
                      }
#line 203 "prog_io_util.m"
                  }
#line 201 "prog_io_util.m"
              }
#line 202 "prog_io_util.m"
          }
#line 202 "prog_io_util.m"
      }
#line 201 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 201 "prog_io_util.m"
  }
#line 90 "prog_io_util.m"
}

#line 85 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_vars_and_state_vars_4_p_0(
#line 85 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_96,
#line 85 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_5,
#line 85 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 85 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_7,
#line 85 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__MaybeVars_8)
#line 85 "prog_io_util.m"
{
#line 1389 "prog_io_util.m"
  {
#line 1389 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1389 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_40_40;
#line 1389 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_41_41;
#line 1389 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_42_42;
#line 1389 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 1389 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1389 "prog_io_util.m"
      {
#line 1389 "prog_io_util.m"
        parse_tree__prog_io_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 1389 "prog_io_util.m"
        parse_tree__prog_io_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 1389 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 1389 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1389 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1389 "prog_io_util.m"
          {
#line 1389 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_40_40)) == (MR_mktag((MR_Integer) 0)));
#line 1389 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1389 "prog_io_util.m"
              {
#line 1389 "prog_io_util.m"
                parse_tree__prog_io_util__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_40_40, (MR_Integer) 0)));
#line 1389 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_41_41, (MR_String) "[]") == 0);
#line 1389 "prog_io_util.m"
              }
#line 1389 "prog_io_util.m"
          }
#line 1389 "prog_io_util.m"
      }
#line 1389 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1390 "prog_io_util.m"
      {
#line 1390 "prog_io_util.m"
        *parse_tree__prog_io_util__MaybeVars_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_4[0]);
#line 1390 "prog_io_util.m"
      }
#line 1389 "prog_io_util.m"
    else
#line 1391 "prog_io_util.m"
      {
#line 1391 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__HeadTerm_10;
#line 1391 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Tail_11;
#line 1391 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_47_47;
#line 1391 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_48_48;
#line 1391 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_49_49;
#line 1391 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_50_50;
#line 1391 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_51_51;
#line 1391 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_12_12;

#line 1391 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1391 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1391 "prog_io_util.m"
          {
#line 1391 "prog_io_util.m"
            parse_tree__prog_io_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 1391 "prog_io_util.m"
            parse_tree__prog_io_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 1391 "prog_io_util.m"
            parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 1391 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_47_47)) == (MR_mktag((MR_Integer) 0)));
#line 1391 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1391 "prog_io_util.m"
              {
#line 1391 "prog_io_util.m"
                parse_tree__prog_io_util__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_47_47, (MR_Integer) 0)));
#line 1391 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_48_48, (MR_String) "[|]") == 0);
#line 1391 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1391 "prog_io_util.m"
                  {
#line 1391 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_49_49)) == (MR_mktag((MR_Integer) 1)));
#line 1391 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1391 "prog_io_util.m"
                      {
#line 1391 "prog_io_util.m"
                        parse_tree__prog_io_util__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_49_49, (MR_Integer) 0)));
#line 1391 "prog_io_util.m"
                        parse_tree__prog_io_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_49_49, (MR_Integer) 1)));
#line 1391 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_50_50)) == (MR_mktag((MR_Integer) 1)));
#line 1391 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1391 "prog_io_util.m"
                          {
#line 1391 "prog_io_util.m"
                            parse_tree__prog_io_util__Tail_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_50_50, (MR_Integer) 0)));
#line 1391 "prog_io_util.m"
                            parse_tree__prog_io_util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_50_50, (MR_Integer) 1)));
#line 1391 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_51_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1391 "prog_io_util.m"
                          }
#line 1391 "prog_io_util.m"
                      }
#line 1391 "prog_io_util.m"
                  }
#line 1391 "prog_io_util.m"
              }
#line 1391 "prog_io_util.m"
          }
#line 1391 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1412 "prog_io_util.m"
          {
#line 1412 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__MaybeHeadVar_23;
#line 1412 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__MaybeTailVars_25;
#line 1392 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__VarKind0_15;
#line 1415 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__VarKind_26;
#line 1415 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TailVars_27;
#line 1415 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TailStateVars_28;
#line 1415 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TailDotVars_29;
#line 1415 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TailColonVars_30;

#line 1396 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadTerm_10)) == (MR_mktag((MR_Integer) 0))))
#line 1396 "prog_io_util.m"
              {
#line 1396 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));
#line 1396 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 1396 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_127_127;
#line 1396 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_128_128;
#line 1396 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__V_129_129;
#line 1396 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_131_131;
#line 1397 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 2)));
#line 1397 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_130_130;

#line 1397 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_125_125)) == (MR_mktag((MR_Integer) 1)));
#line 1397 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1397 "prog_io_util.m"
                  {
#line 1397 "prog_io_util.m"
                    parse_tree__prog_io_util__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_125_125, (MR_Integer) 0)));
#line 1397 "prog_io_util.m"
                    parse_tree__prog_io_util__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_125_125, (MR_Integer) 1)));
#line 1397 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_127_127 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1396 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1396 "prog_io_util.m"
                      {
#line 1397 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_126_126)) == (MR_mktag((MR_Integer) 0)));
#line 1397 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1397 "prog_io_util.m"
                          {
#line 1397 "prog_io_util.m"
                            parse_tree__prog_io_util__V_129_129 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_126_126, (MR_Integer) 0)));
#line 1397 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_128_128)) == (MR_mktag((MR_Integer) 1)));
#line 1397 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1397 "prog_io_util.m"
                              {
#line 1397 "prog_io_util.m"
                                parse_tree__prog_io_util__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_128_128, (MR_Integer) 0)));
#line 1397 "prog_io_util.m"
                                parse_tree__prog_io_util__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_128_128, (MR_Integer) 1)));
#line 1396 "prog_io_util.m"
                                if ((strcmp(parse_tree__prog_io_util__V_129_129, (MR_String) "!") == 0))
#line 1398 "prog_io_util.m"
                                  {
#line 1398 "prog_io_util.m"
                                    {
#line 1398 "prog_io_util.m"
                                      parse_tree__prog_io_util__VarKind0_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1398 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarKind0_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_131_131));
#line 1398 "prog_io_util.m"
                                    }
#line 1398 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1398 "prog_io_util.m"
                                  }
#line 1396 "prog_io_util.m"
                                else
#line 1396 "prog_io_util.m"
                                if ((strcmp(parse_tree__prog_io_util__V_129_129, (MR_String) "!.") == 0))
#line 1401 "prog_io_util.m"
                                  {
#line 1401 "prog_io_util.m"
                                    {
#line 1401 "prog_io_util.m"
                                      parse_tree__prog_io_util__VarKind0_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1401 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__VarKind0_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_131_131));
#line 1401 "prog_io_util.m"
                                    }
#line 1401 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1401 "prog_io_util.m"
                                  }
#line 1396 "prog_io_util.m"
                                else
#line 1396 "prog_io_util.m"
                                if ((strcmp(parse_tree__prog_io_util__V_129_129, (MR_String) "!:") == 0))
#line 1404 "prog_io_util.m"
                                  {
#line 1404 "prog_io_util.m"
                                    {
#line 1404 "prog_io_util.m"
                                      parse_tree__prog_io_util__VarKind0_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1404 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__VarKind0_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_131_131));
#line 1404 "prog_io_util.m"
                                    }
#line 1404 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1404 "prog_io_util.m"
                                  }
#line 1396 "prog_io_util.m"
                                else
#line 1396 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 1397 "prog_io_util.m"
                              }
#line 1397 "prog_io_util.m"
                          }
#line 1396 "prog_io_util.m"
                      }
#line 1397 "prog_io_util.m"
                  }
#line 1396 "prog_io_util.m"
              }
#line 1396 "prog_io_util.m"
            else
#line 1394 "prog_io_util.m"
              {
#line 1394 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 1394 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));

#line 1395 "prog_io_util.m"
                {
#line 1395 "prog_io_util.m"
                  parse_tree__prog_io_util__VarKind0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1395 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__VarKind0_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V0_13));
#line 1395 "prog_io_util.m"
                }
#line 1394 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1394 "prog_io_util.m"
              }
#line 1392 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1407 "prog_io_util.m"
              {
#line 1407 "prog_io_util.m"
                parse_tree__prog_io_util__MaybeHeadVar_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1407 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeHeadVar_23, 0) = ((MR_Box) (parse_tree__prog_io_util__VarKind0_15));
#line 1407 "prog_io_util.m"
              }
#line 1392 "prog_io_util.m"
            else
#line 1410 "prog_io_util.m"
              {
#line 1410 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__HeadSpec_24;
#line 1410 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_68_68;

#line 1409 "prog_io_util.m"
                {
#line 1409 "prog_io_util.m"
                  parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "a variable or state variable", parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__HeadSpec_24);
                }
#line 1411 "prog_io_util.m"
                {
#line 1411 "prog_io_util.m"
                  parse_tree__prog_io_util__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1411 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadSpec_24));
#line 1411 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1411 "prog_io_util.m"
                }
#line 1411 "prog_io_util.m"
                {
#line 1411 "prog_io_util.m"
                  parse_tree__prog_io_util__MaybeHeadVar_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1411 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__MaybeHeadVar_23, 0) = ((MR_Box) (parse_tree__prog_io_util__V_68_68));
#line 1411 "prog_io_util.m"
                }
#line 1410 "prog_io_util.m"
              }
#line 1413 "prog_io_util.m"
            {
#line 1413 "prog_io_util.m"
              parse_tree__prog_io_util__parse_vars_and_state_vars_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__Tail_11, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__MaybeTailVars_25);
            }
#line 1416 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeHeadVar_23)) == (MR_mktag((MR_Integer) 1)));
#line 1416 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1416 "prog_io_util.m"
              {
#line 1416 "prog_io_util.m"
                parse_tree__prog_io_util__VarKind_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeHeadVar_23, (MR_Integer) 0)));
#line 1417 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeTailVars_25)) == (MR_mktag((MR_Integer) 1)));
#line 1417 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1417 "prog_io_util.m"
                  {
#line 1417 "prog_io_util.m"
                    parse_tree__prog_io_util__TailVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeTailVars_25, (MR_Integer) 0)));
#line 1417 "prog_io_util.m"
                    parse_tree__prog_io_util__TailStateVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeTailVars_25, (MR_Integer) 1)));
#line 1417 "prog_io_util.m"
                    parse_tree__prog_io_util__TailDotVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeTailVars_25, (MR_Integer) 2)));
#line 1417 "prog_io_util.m"
                    parse_tree__prog_io_util__TailColonVars_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeTailVars_25, (MR_Integer) 3)));
#line 1417 "prog_io_util.m"
                  }
#line 1416 "prog_io_util.m"
              }
#line 1415 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1431 "prog_io_util.m"
#line 1431 "prog_io_util.m"
              switch (MR_tag((MR_Word) parse_tree__prog_io_util__VarKind_26)) {
#line 1431 "prog_io_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1431 "prog_io_util.m"
                case (MR_Integer) 0:
#line 1421 "prog_io_util.m"
                  {
#line 1421 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__VarKind_26, (MR_Integer) 0)));
#line 1422 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__TypeInfo_98_98;

#line 15891 "parse_tree.prog_io_util.c"
                    {
#line 15893 "parse_tree.prog_io_util.c"
                      parse_tree__prog_io_util__TypeInfo_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15895 "parse_tree.prog_io_util.c"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_98_98, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 15897 "parse_tree.prog_io_util.c"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_98_98, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 15899 "parse_tree.prog_io_util.c"
                    }
#line 1422 "prog_io_util.m"
                    {
#line 1422 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_98_98, parse_tree__prog_io_util__V_31, parse_tree__prog_io_util__TailVars_27);
                    }
#line 1422 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1424 "prog_io_util.m"
                      {
#line 1424 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Spec_32;
#line 1424 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_76_76;

#line 1423 "prog_io_util.m"
                        {
#line 1423 "prog_io_util.m"
                          parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_32);
                        }
#line 1425 "prog_io_util.m"
                        {
#line 1425 "prog_io_util.m"
                          parse_tree__prog_io_util__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1425 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_32));
#line 1425 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1425 "prog_io_util.m"
                        }
#line 1425 "prog_io_util.m"
                        {
#line 1425 "prog_io_util.m"
                          MR_Word base;
#line 1425 "prog_io_util.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1425 "prog_io_util.m"
                          *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1425 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_76_76));
#line 1425 "prog_io_util.m"
                        }
#line 1424 "prog_io_util.m"
                      }
#line 1422 "prog_io_util.m"
                    else
#line 1427 "prog_io_util.m"
                      {
#line 1427 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Vars_33;

#line 1427 "prog_io_util.m"
                        {
#line 1427 "prog_io_util.m"
                          parse_tree__prog_io_util__Vars_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1427 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_33, 0) = ((MR_Box) (parse_tree__prog_io_util__V_31));
#line 1427 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_33, 1) = ((MR_Box) (parse_tree__prog_io_util__TailVars_27));
#line 1427 "prog_io_util.m"
                        }
#line 1428 "prog_io_util.m"
                        {
#line 1428 "prog_io_util.m"
                          MR_Word base;
#line 1428 "prog_io_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1428 "prog_io_util.m"
                          *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1428 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Vars_33));
#line 1428 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_28));
#line 1428 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_util__TailDotVars_29));
#line 1428 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_io_util__TailColonVars_30));
#line 1428 "prog_io_util.m"
                        }
#line 1427 "prog_io_util.m"
                      }
#line 1421 "prog_io_util.m"
                  }
#line 1431 "prog_io_util.m"
                  break;
#line 1431 "prog_io_util.m"
                case (MR_Integer) 1:
#line 1432 "prog_io_util.m"
                  {
#line 1432 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__SV_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarKind_26, (MR_Integer) 0)));

#line 1434 "prog_io_util.m"
                    {
#line 1434 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__TypeInfo_100_100;

#line 15997 "parse_tree.prog_io_util.c"
                      {
#line 15999 "parse_tree.prog_io_util.c"
                        parse_tree__prog_io_util__TypeInfo_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 16001 "parse_tree.prog_io_util.c"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_100_100, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 16003 "parse_tree.prog_io_util.c"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_100_100, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 16005 "parse_tree.prog_io_util.c"
                      }
#line 1434 "prog_io_util.m"
                      {
#line 1434 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_100_100, parse_tree__prog_io_util__SV_34, parse_tree__prog_io_util__TailStateVars_28);
                      }
#line 1434 "prog_io_util.m"
                    }
#line 1435 "prog_io_util.m"
                    if (!(parse_tree__prog_io_util__succeeded))
#line 1435 "prog_io_util.m"
                      {
#line 1435 "prog_io_util.m"
                        {
#line 1435 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__TypeInfo_102_102;

#line 16023 "parse_tree.prog_io_util.c"
                          {
#line 16025 "parse_tree.prog_io_util.c"
                            parse_tree__prog_io_util__TypeInfo_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 16027 "parse_tree.prog_io_util.c"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_102_102, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 16029 "parse_tree.prog_io_util.c"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_102_102, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 16031 "parse_tree.prog_io_util.c"
                          }
#line 1435 "prog_io_util.m"
                          {
#line 1435 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_102_102, parse_tree__prog_io_util__SV_34, parse_tree__prog_io_util__TailDotVars_29);
                          }
#line 1435 "prog_io_util.m"
                        }
#line 1435 "prog_io_util.m"
                        if (!(parse_tree__prog_io_util__succeeded))
#line 1436 "prog_io_util.m"
                          {
#line 1436 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__TypeInfo_104_104;

#line 16047 "parse_tree.prog_io_util.c"
                            {
#line 16049 "parse_tree.prog_io_util.c"
                              parse_tree__prog_io_util__TypeInfo_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 16051 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_104_104, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 16053 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_104_104, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 16055 "parse_tree.prog_io_util.c"
                            }
#line 1436 "prog_io_util.m"
                            {
#line 1436 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_104_104, parse_tree__prog_io_util__SV_34, parse_tree__prog_io_util__TailColonVars_30);
                            }
#line 1436 "prog_io_util.m"
                          }
#line 1435 "prog_io_util.m"
                      }
#line 1433 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1440 "prog_io_util.m"
                      {
#line 1440 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_74_74;
#line 1440 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Spec_84;

#line 1439 "prog_io_util.m"
                        {
#line 1439 "prog_io_util.m"
                          parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_84);
                        }
#line 1441 "prog_io_util.m"
                        {
#line 1441 "prog_io_util.m"
                          parse_tree__prog_io_util__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1441 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_74_74, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_84));
#line 1441 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1441 "prog_io_util.m"
                        }
#line 1441 "prog_io_util.m"
                        {
#line 1441 "prog_io_util.m"
                          MR_Word base;
#line 1441 "prog_io_util.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1441 "prog_io_util.m"
                          *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1441 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_74_74));
#line 1441 "prog_io_util.m"
                        }
#line 1440 "prog_io_util.m"
                      }
#line 1433 "prog_io_util.m"
                    else
#line 1443 "prog_io_util.m"
                      {
#line 1443 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__StateVars_35;

#line 1443 "prog_io_util.m"
                        {
#line 1443 "prog_io_util.m"
                          parse_tree__prog_io_util__StateVars_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1443 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__StateVars_35, 0) = ((MR_Box) (parse_tree__prog_io_util__SV_34));
#line 1443 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__StateVars_35, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_28));
#line 1443 "prog_io_util.m"
                        }
#line 1444 "prog_io_util.m"
                        {
#line 1444 "prog_io_util.m"
                          MR_Word base;
#line 1444 "prog_io_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1444 "prog_io_util.m"
                          *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1444 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__TailVars_27));
#line 1444 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__StateVars_35));
#line 1444 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_util__TailDotVars_29));
#line 1444 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_io_util__TailColonVars_30));
#line 1444 "prog_io_util.m"
                        }
#line 1443 "prog_io_util.m"
                      }
#line 1432 "prog_io_util.m"
                  }
#line 1431 "prog_io_util.m"
                  break;
#line 1431 "prog_io_util.m"
                case (MR_Integer) 2:
#line 1448 "prog_io_util.m"
                  {
#line 1448 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__SV_90 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__VarKind_26, (MR_Integer) 0)));

#line 1450 "prog_io_util.m"
                    {
#line 1450 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__TypeInfo_106_106;

#line 16157 "parse_tree.prog_io_util.c"
                      {
#line 16159 "parse_tree.prog_io_util.c"
                        parse_tree__prog_io_util__TypeInfo_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 16161 "parse_tree.prog_io_util.c"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_106_106, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 16163 "parse_tree.prog_io_util.c"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_106_106, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 16165 "parse_tree.prog_io_util.c"
                      }
#line 1450 "prog_io_util.m"
                      {
#line 1450 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_106_106, parse_tree__prog_io_util__SV_90, parse_tree__prog_io_util__TailStateVars_28);
                      }
#line 1450 "prog_io_util.m"
                    }
#line 1451 "prog_io_util.m"
                    if (!(parse_tree__prog_io_util__succeeded))
#line 1451 "prog_io_util.m"
                      {
#line 1451 "prog_io_util.m"
                        {
#line 1451 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__TypeInfo_108_108;

#line 16183 "parse_tree.prog_io_util.c"
                          {
#line 16185 "parse_tree.prog_io_util.c"
                            parse_tree__prog_io_util__TypeInfo_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 16187 "parse_tree.prog_io_util.c"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_108_108, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 16189 "parse_tree.prog_io_util.c"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_108_108, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 16191 "parse_tree.prog_io_util.c"
                          }
#line 1451 "prog_io_util.m"
                          {
#line 1451 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_108_108, parse_tree__prog_io_util__SV_90, parse_tree__prog_io_util__TailDotVars_29);
                          }
#line 1451 "prog_io_util.m"
                        }
#line 1451 "prog_io_util.m"
                        if (!(parse_tree__prog_io_util__succeeded))
#line 1452 "prog_io_util.m"
                          {
#line 1452 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__TypeInfo_110_110;

#line 16207 "parse_tree.prog_io_util.c"
                            {
#line 16209 "parse_tree.prog_io_util.c"
                              parse_tree__prog_io_util__TypeInfo_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 16211 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_110_110, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 16213 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_110_110, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 16215 "parse_tree.prog_io_util.c"
                            }
#line 1452 "prog_io_util.m"
                            {
#line 1452 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_110_110, parse_tree__prog_io_util__SV_90, parse_tree__prog_io_util__TailColonVars_30);
                            }
#line 1452 "prog_io_util.m"
                          }
#line 1451 "prog_io_util.m"
                      }
#line 1449 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1456 "prog_io_util.m"
                      {
#line 1456 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_72_72;
#line 1456 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Spec_87;

#line 1455 "prog_io_util.m"
                        {
#line 1455 "prog_io_util.m"
                          parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_87);
                        }
#line 1457 "prog_io_util.m"
                        {
#line 1457 "prog_io_util.m"
                          parse_tree__prog_io_util__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1457 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_87));
#line 1457 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1457 "prog_io_util.m"
                        }
#line 1457 "prog_io_util.m"
                        {
#line 1457 "prog_io_util.m"
                          MR_Word base;
#line 1457 "prog_io_util.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1457 "prog_io_util.m"
                          *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1457 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_72_72));
#line 1457 "prog_io_util.m"
                        }
#line 1456 "prog_io_util.m"
                      }
#line 1449 "prog_io_util.m"
                    else
#line 1459 "prog_io_util.m"
                      {
#line 1459 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__DotVars_36;

#line 1459 "prog_io_util.m"
                        {
#line 1459 "prog_io_util.m"
                          parse_tree__prog_io_util__DotVars_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1459 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__DotVars_36, 0) = ((MR_Box) (parse_tree__prog_io_util__SV_90));
#line 1459 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__DotVars_36, 1) = ((MR_Box) (parse_tree__prog_io_util__TailDotVars_29));
#line 1459 "prog_io_util.m"
                        }
#line 1460 "prog_io_util.m"
                        {
#line 1460 "prog_io_util.m"
                          MR_Word base;
#line 1460 "prog_io_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1460 "prog_io_util.m"
                          *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1460 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__TailVars_27));
#line 1460 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_28));
#line 1460 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_util__DotVars_36));
#line 1460 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_io_util__TailColonVars_30));
#line 1460 "prog_io_util.m"
                        }
#line 1459 "prog_io_util.m"
                      }
#line 1448 "prog_io_util.m"
                  }
#line 1431 "prog_io_util.m"
                  break;
#line 1431 "prog_io_util.m"
                case (MR_Integer) 3:
#line 1464 "prog_io_util.m"
                  {
#line 1464 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__SV_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__VarKind_26, (MR_Integer) 0)));

#line 1466 "prog_io_util.m"
                    {
#line 1466 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__TypeInfo_112_112;

#line 16317 "parse_tree.prog_io_util.c"
                      {
#line 16319 "parse_tree.prog_io_util.c"
                        parse_tree__prog_io_util__TypeInfo_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 16321 "parse_tree.prog_io_util.c"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_112_112, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 16323 "parse_tree.prog_io_util.c"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_112_112, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 16325 "parse_tree.prog_io_util.c"
                      }
#line 1466 "prog_io_util.m"
                      {
#line 1466 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_112_112, parse_tree__prog_io_util__SV_94, parse_tree__prog_io_util__TailStateVars_28);
                      }
#line 1466 "prog_io_util.m"
                    }
#line 1467 "prog_io_util.m"
                    if (!(parse_tree__prog_io_util__succeeded))
#line 1467 "prog_io_util.m"
                      {
#line 1467 "prog_io_util.m"
                        {
#line 1467 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__TypeInfo_114_114;

#line 16343 "parse_tree.prog_io_util.c"
                          {
#line 16345 "parse_tree.prog_io_util.c"
                            parse_tree__prog_io_util__TypeInfo_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 16347 "parse_tree.prog_io_util.c"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_114_114, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 16349 "parse_tree.prog_io_util.c"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_114_114, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 16351 "parse_tree.prog_io_util.c"
                          }
#line 1467 "prog_io_util.m"
                          {
#line 1467 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_114_114, parse_tree__prog_io_util__SV_94, parse_tree__prog_io_util__TailDotVars_29);
                          }
#line 1467 "prog_io_util.m"
                        }
#line 1467 "prog_io_util.m"
                        if (!(parse_tree__prog_io_util__succeeded))
#line 1468 "prog_io_util.m"
                          {
#line 1468 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__TypeInfo_116_116;

#line 16367 "parse_tree.prog_io_util.c"
                            {
#line 16369 "parse_tree.prog_io_util.c"
                              parse_tree__prog_io_util__TypeInfo_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 16371 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_116_116, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 16373 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_116_116, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 16375 "parse_tree.prog_io_util.c"
                            }
#line 1468 "prog_io_util.m"
                            {
#line 1468 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_116_116, parse_tree__prog_io_util__SV_94, parse_tree__prog_io_util__TailColonVars_30);
                            }
#line 1468 "prog_io_util.m"
                          }
#line 1467 "prog_io_util.m"
                      }
#line 1465 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1472 "prog_io_util.m"
                      {
#line 1472 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_70_70;
#line 1472 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Spec_91;

#line 1471 "prog_io_util.m"
                        {
#line 1471 "prog_io_util.m"
                          parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_91);
                        }
#line 1473 "prog_io_util.m"
                        {
#line 1473 "prog_io_util.m"
                          parse_tree__prog_io_util__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1473 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_91));
#line 1473 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1473 "prog_io_util.m"
                        }
#line 1473 "prog_io_util.m"
                        {
#line 1473 "prog_io_util.m"
                          MR_Word base;
#line 1473 "prog_io_util.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1473 "prog_io_util.m"
                          *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1473 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_70_70));
#line 1473 "prog_io_util.m"
                        }
#line 1472 "prog_io_util.m"
                      }
#line 1465 "prog_io_util.m"
                    else
#line 1475 "prog_io_util.m"
                      {
#line 1475 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__ColonVars_37;

#line 1475 "prog_io_util.m"
                        {
#line 1475 "prog_io_util.m"
                          parse_tree__prog_io_util__ColonVars_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1475 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ColonVars_37, 0) = ((MR_Box) (parse_tree__prog_io_util__SV_94));
#line 1475 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ColonVars_37, 1) = ((MR_Box) (parse_tree__prog_io_util__TailColonVars_30));
#line 1475 "prog_io_util.m"
                        }
#line 1476 "prog_io_util.m"
                        {
#line 1476 "prog_io_util.m"
                          MR_Word base;
#line 1476 "prog_io_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1476 "prog_io_util.m"
                          *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1476 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__TailVars_27));
#line 1476 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_28));
#line 1476 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_util__TailDotVars_29));
#line 1476 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_io_util__ColonVars_37));
#line 1476 "prog_io_util.m"
                        }
#line 1475 "prog_io_util.m"
                      }
#line 1464 "prog_io_util.m"
                  }
#line 1431 "prog_io_util.m"
                  break;
#line 1431 "prog_io_util.m"
              }
#line 1415 "prog_io_util.m"
            else
#line 1481 "prog_io_util.m"
              {
#line 1481 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TypeInfo_118_118;
#line 1481 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TypeInfo_120_120;
#line 1481 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TypeInfo_122_122;
#line 1481 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__HeadSpecs_38;
#line 1481 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailSpecs_39;
#line 1481 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_78_78;

#line 16484 "parse_tree.prog_io_util.c"
                {
#line 16486 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__TypeInfo_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 16488 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_118_118, 0) = ((MR_Box) (&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_ordinary_state_dot_colon_var_1));
#line 16490 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_118_118, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 16492 "parse_tree.prog_io_util.c"
                }
#line 1481 "prog_io_util.m"
                {
#line 1481 "prog_io_util.m"
                  parse_tree__prog_io_util__HeadSpecs_38 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_util__TypeInfo_118_118, (MR_Word) parse_tree__prog_io_util__MaybeHeadVar_23);
                }
#line 16499 "parse_tree.prog_io_util.c"
                {
#line 16501 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__TypeInfo_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 16503 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_120_120, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 16505 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_120_120, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 16507 "parse_tree.prog_io_util.c"
                }
#line 16509 "parse_tree.prog_io_util.c"
                {
#line 16511 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__TypeInfo_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 16513 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_122_122, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 16515 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_122_122, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_120_120));
#line 16517 "parse_tree.prog_io_util.c"
                }
#line 1482 "prog_io_util.m"
                {
#line 1482 "prog_io_util.m"
                  parse_tree__prog_io_util__TailSpecs_39 = parse_tree__maybe_error__get_any_errors4_1_f_0(parse_tree__prog_io_util__TypeInfo_122_122, parse_tree__prog_io_util__TypeInfo_122_122, parse_tree__prog_io_util__TypeInfo_122_122, parse_tree__prog_io_util__TypeInfo_122_122, (MR_Word) parse_tree__prog_io_util__MaybeTailVars_25);
                }
#line 1483 "prog_io_util.m"
                {
#line 1483 "prog_io_util.m"
                  parse_tree__prog_io_util__V_78_78 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_util__HeadSpecs_38, parse_tree__prog_io_util__TailSpecs_39);
                }
#line 1483 "prog_io_util.m"
                {
#line 1483 "prog_io_util.m"
                  MR_Word base;
#line 1483 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1483 "prog_io_util.m"
                  *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1483 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_78_78));
#line 1483 "prog_io_util.m"
                }
#line 1481 "prog_io_util.m"
              }
#line 1412 "prog_io_util.m"
          }
#line 1391 "prog_io_util.m"
        else
#line 1487 "prog_io_util.m"
          {
#line 1487 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_80_80;
#line 1487 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Spec_95;

#line 1486 "prog_io_util.m"
            {
#line 1486 "prog_io_util.m"
              parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "a list of variables and/or state variables", parse_tree__prog_io_util__Term_5, &parse_tree__prog_io_util__Spec_95);
            }
#line 1488 "prog_io_util.m"
            {
#line 1488 "prog_io_util.m"
              parse_tree__prog_io_util__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1488 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_95));
#line 1488 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1488 "prog_io_util.m"
            }
#line 1488 "prog_io_util.m"
            {
#line 1488 "prog_io_util.m"
              MR_Word base;
#line 1488 "prog_io_util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1488 "prog_io_util.m"
              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1488 "prog_io_util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_80_80));
#line 1488 "prog_io_util.m"
            }
#line 1487 "prog_io_util.m"
          }
#line 1391 "prog_io_util.m"
      }
#line 1389 "prog_io_util.m"
  }
#line 85 "prog_io_util.m"
}

#line 76 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_quantifier_vars_4_p_0(
#line 76 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_62,
#line 76 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_5,
#line 76 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 76 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_7,
#line 76 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__MaybeVars_8)
#line 76 "prog_io_util.m"
{
#line 1326 "prog_io_util.m"
  {
#line 1326 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1326 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_32_32;
#line 1326 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_33_33;
#line 1326 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_34_34;
#line 1326 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 1326 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1326 "prog_io_util.m"
      {
#line 1326 "prog_io_util.m"
        parse_tree__prog_io_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 1326 "prog_io_util.m"
        parse_tree__prog_io_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 1326 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 1326 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1326 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1326 "prog_io_util.m"
          {
#line 1326 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_32_32)) == (MR_mktag((MR_Integer) 0)));
#line 1326 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1326 "prog_io_util.m"
              {
#line 1326 "prog_io_util.m"
                parse_tree__prog_io_util__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_32_32, (MR_Integer) 0)));
#line 1326 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_33_33, (MR_String) "[]") == 0);
#line 1326 "prog_io_util.m"
              }
#line 1326 "prog_io_util.m"
          }
#line 1326 "prog_io_util.m"
      }
#line 1326 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1327 "prog_io_util.m"
      {
#line 1327 "prog_io_util.m"
        *parse_tree__prog_io_util__MaybeVars_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[9]);
#line 1327 "prog_io_util.m"
      }
#line 1326 "prog_io_util.m"
    else
#line 1328 "prog_io_util.m"
      {
#line 1328 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__HeadTerm_10;
#line 1328 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TailTerm_11;
#line 1328 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_37_37;
#line 1328 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_38_38;
#line 1328 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_39_39;
#line 1328 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_40_40;
#line 1328 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_41_41;
#line 1328 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_12_12;

#line 1328 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1328 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1328 "prog_io_util.m"
          {
#line 1328 "prog_io_util.m"
            parse_tree__prog_io_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 1328 "prog_io_util.m"
            parse_tree__prog_io_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 1328 "prog_io_util.m"
            parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 1328 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_37_37)) == (MR_mktag((MR_Integer) 0)));
#line 1328 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1328 "prog_io_util.m"
              {
#line 1328 "prog_io_util.m"
                parse_tree__prog_io_util__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_37_37, (MR_Integer) 0)));
#line 1328 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_38_38, (MR_String) "[|]") == 0);
#line 1328 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1328 "prog_io_util.m"
                  {
#line 1328 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 1328 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1328 "prog_io_util.m"
                      {
#line 1328 "prog_io_util.m"
                        parse_tree__prog_io_util__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_39_39, (MR_Integer) 0)));
#line 1328 "prog_io_util.m"
                        parse_tree__prog_io_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_39_39, (MR_Integer) 1)));
#line 1328 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 1328 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1328 "prog_io_util.m"
                          {
#line 1328 "prog_io_util.m"
                            parse_tree__prog_io_util__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_40_40, (MR_Integer) 0)));
#line 1328 "prog_io_util.m"
                            parse_tree__prog_io_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_40_40, (MR_Integer) 1)));
#line 1328 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1328 "prog_io_util.m"
                          }
#line 1328 "prog_io_util.m"
                      }
#line 1328 "prog_io_util.m"
                  }
#line 1328 "prog_io_util.m"
              }
#line 1328 "prog_io_util.m"
          }
#line 1328 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1343 "prog_io_util.m"
          {
#line 1343 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__MaybeHeadVar_19;
#line 1343 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__MaybeTailVars_21;
#line 1329 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__VarKind0_15;
#line 1346 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__VarKind_22;
#line 1346 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TailVars_23;
#line 1346 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TailStateVars_24;

#line 1333 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadTerm_10)) == (MR_mktag((MR_Integer) 0))))
#line 1334 "prog_io_util.m"
              {
#line 1334 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__SV0_16;
#line 1334 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 1334 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__V_43_43;
#line 1334 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));
#line 1334 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_45_45;
#line 1334 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_46_46;
#line 1334 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 2)));
#line 1334 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_17_17;

#line 1334 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_42_42)) == (MR_mktag((MR_Integer) 0)));
#line 1334 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1334 "prog_io_util.m"
                  {
#line 1334 "prog_io_util.m"
                    parse_tree__prog_io_util__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_42_42, (MR_Integer) 0)));
#line 1334 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_43_43, (MR_String) "!") == 0);
#line 1334 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1334 "prog_io_util.m"
                      {
#line 1334 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_44_44)) == (MR_mktag((MR_Integer) 1)));
#line 1334 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1334 "prog_io_util.m"
                          {
#line 1334 "prog_io_util.m"
                            parse_tree__prog_io_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_44_44, (MR_Integer) 0)));
#line 1334 "prog_io_util.m"
                            parse_tree__prog_io_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_44_44, (MR_Integer) 1)));
#line 1334 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1334 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1334 "prog_io_util.m"
                              {
#line 1334 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_45_45)) == (MR_mktag((MR_Integer) 1)));
#line 1334 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 1334 "prog_io_util.m"
                                  {
#line 1334 "prog_io_util.m"
                                    parse_tree__prog_io_util__SV0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, (MR_Integer) 0)));
#line 1334 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, (MR_Integer) 1)));
#line 1335 "prog_io_util.m"
                                    {
#line 1335 "prog_io_util.m"
                                      parse_tree__prog_io_util__VarKind0_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1335 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarKind0_15, 0) = ((MR_Box) (parse_tree__prog_io_util__SV0_16));
#line 1335 "prog_io_util.m"
                                    }
#line 1335 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1334 "prog_io_util.m"
                                  }
#line 1334 "prog_io_util.m"
                              }
#line 1334 "prog_io_util.m"
                          }
#line 1334 "prog_io_util.m"
                      }
#line 1334 "prog_io_util.m"
                  }
#line 1334 "prog_io_util.m"
              }
#line 1333 "prog_io_util.m"
            else
#line 1331 "prog_io_util.m"
              {
#line 1331 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 1331 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));

#line 1332 "prog_io_util.m"
                {
#line 1332 "prog_io_util.m"
                  parse_tree__prog_io_util__VarKind0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1332 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__VarKind0_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V0_13));
#line 1332 "prog_io_util.m"
                }
#line 1331 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1331 "prog_io_util.m"
              }
#line 1329 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1338 "prog_io_util.m"
              {
#line 1338 "prog_io_util.m"
                parse_tree__prog_io_util__MaybeHeadVar_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1338 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeHeadVar_19, 0) = ((MR_Box) (parse_tree__prog_io_util__VarKind0_15));
#line 1338 "prog_io_util.m"
              }
#line 1329 "prog_io_util.m"
            else
#line 1341 "prog_io_util.m"
              {
#line 1341 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__HeadSpec_20;
#line 1341 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_48_48;

#line 1340 "prog_io_util.m"
                {
#line 1340 "prog_io_util.m"
                  parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_62, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "a variable or state variable", parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__HeadSpec_20);
                }
#line 1342 "prog_io_util.m"
                {
#line 1342 "prog_io_util.m"
                  parse_tree__prog_io_util__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1342 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadSpec_20));
#line 1342 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1342 "prog_io_util.m"
                }
#line 1342 "prog_io_util.m"
                {
#line 1342 "prog_io_util.m"
                  parse_tree__prog_io_util__MaybeHeadVar_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1342 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__MaybeHeadVar_19, 0) = ((MR_Box) (parse_tree__prog_io_util__V_48_48));
#line 1342 "prog_io_util.m"
                }
#line 1341 "prog_io_util.m"
              }
#line 1344 "prog_io_util.m"
            {
#line 1344 "prog_io_util.m"
              parse_tree__prog_io_util__parse_quantifier_vars_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_62, parse_tree__prog_io_util__TailTerm_11, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__MaybeTailVars_21);
            }
#line 1347 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeHeadVar_19)) == (MR_mktag((MR_Integer) 1)));
#line 1347 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1347 "prog_io_util.m"
              {
#line 1347 "prog_io_util.m"
                parse_tree__prog_io_util__VarKind_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeHeadVar_19, (MR_Integer) 0)));
#line 1348 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeTailVars_21)) == (MR_mktag((MR_Integer) 1)));
#line 1348 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1348 "prog_io_util.m"
                  {
#line 1348 "prog_io_util.m"
                    parse_tree__prog_io_util__TailVars_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeTailVars_21, (MR_Integer) 0)));
#line 1348 "prog_io_util.m"
                    parse_tree__prog_io_util__TailStateVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeTailVars_21, (MR_Integer) 1)));
#line 1348 "prog_io_util.m"
                  }
#line 1347 "prog_io_util.m"
              }
#line 1346 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1360 "prog_io_util.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_util__VarKind_22)) == (MR_mktag((MR_Integer) 0))))
#line 1351 "prog_io_util.m"
                {
#line 1351 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__VarKind_22, (MR_Integer) 0)));
#line 1352 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__TypeInfo_64_64;

#line 16940 "parse_tree.prog_io_util.c"
                  {
#line 16942 "parse_tree.prog_io_util.c"
                    parse_tree__prog_io_util__TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 16944 "parse_tree.prog_io_util.c"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_64_64, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 16946 "parse_tree.prog_io_util.c"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_64_64, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_62));
#line 16948 "parse_tree.prog_io_util.c"
                  }
#line 1352 "prog_io_util.m"
                  {
#line 1352 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_62, parse_tree__prog_io_util__TypeInfo_64_64, parse_tree__prog_io_util__V_25, parse_tree__prog_io_util__TailVars_23);
                  }
#line 1352 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 1354 "prog_io_util.m"
                    {
#line 1354 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__Spec_26;
#line 1354 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__V_52_52;

#line 1353 "prog_io_util.m"
                      {
#line 1353 "prog_io_util.m"
                        parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_62, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_26);
                      }
#line 1355 "prog_io_util.m"
                      {
#line 1355 "prog_io_util.m"
                        parse_tree__prog_io_util__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1355 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_26));
#line 1355 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1355 "prog_io_util.m"
                      }
#line 1355 "prog_io_util.m"
                      {
#line 1355 "prog_io_util.m"
                        MR_Word base;
#line 1355 "prog_io_util.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1355 "prog_io_util.m"
                        *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1355 "prog_io_util.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_52_52));
#line 1355 "prog_io_util.m"
                      }
#line 1354 "prog_io_util.m"
                    }
#line 1352 "prog_io_util.m"
                  else
#line 1357 "prog_io_util.m"
                    {
#line 1357 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__Vars_27;

#line 1357 "prog_io_util.m"
                      {
#line 1357 "prog_io_util.m"
                        parse_tree__prog_io_util__Vars_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1357 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_27, 0) = ((MR_Box) (parse_tree__prog_io_util__V_25));
#line 1357 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_27, 1) = ((MR_Box) (parse_tree__prog_io_util__TailVars_23));
#line 1357 "prog_io_util.m"
                      }
#line 1358 "prog_io_util.m"
                      {
#line 1358 "prog_io_util.m"
                        MR_Word base;
#line 1358 "prog_io_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1358 "prog_io_util.m"
                        *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1358 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Vars_27));
#line 1358 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_24));
#line 1358 "prog_io_util.m"
                      }
#line 1357 "prog_io_util.m"
                    }
#line 1351 "prog_io_util.m"
                }
#line 1360 "prog_io_util.m"
              else
#line 1361 "prog_io_util.m"
                {
#line 1361 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__SV_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarKind_22, (MR_Integer) 0)));
#line 1362 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__TypeInfo_66_66;

#line 17037 "parse_tree.prog_io_util.c"
                  {
#line 17039 "parse_tree.prog_io_util.c"
                    parse_tree__prog_io_util__TypeInfo_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 17041 "parse_tree.prog_io_util.c"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_66_66, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 17043 "parse_tree.prog_io_util.c"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_66_66, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_62));
#line 17045 "parse_tree.prog_io_util.c"
                  }
#line 1362 "prog_io_util.m"
                  {
#line 1362 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_62, parse_tree__prog_io_util__TypeInfo_66_66, parse_tree__prog_io_util__SV_28, parse_tree__prog_io_util__TailStateVars_24);
                  }
#line 1362 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 1364 "prog_io_util.m"
                    {
#line 1364 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__V_50_50;
#line 1364 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__Spec_58;

#line 1363 "prog_io_util.m"
                      {
#line 1363 "prog_io_util.m"
                        parse_tree__prog_io_util__generate_repeated_state_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_62, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_58);
                      }
#line 1365 "prog_io_util.m"
                      {
#line 1365 "prog_io_util.m"
                        parse_tree__prog_io_util__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1365 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_58));
#line 1365 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1365 "prog_io_util.m"
                      }
#line 1365 "prog_io_util.m"
                      {
#line 1365 "prog_io_util.m"
                        MR_Word base;
#line 1365 "prog_io_util.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1365 "prog_io_util.m"
                        *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1365 "prog_io_util.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_50_50));
#line 1365 "prog_io_util.m"
                      }
#line 1364 "prog_io_util.m"
                    }
#line 1362 "prog_io_util.m"
                  else
#line 1367 "prog_io_util.m"
                    {
#line 1367 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__StateVars_29;

#line 1367 "prog_io_util.m"
                      {
#line 1367 "prog_io_util.m"
                        parse_tree__prog_io_util__StateVars_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1367 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__StateVars_29, 0) = ((MR_Box) (parse_tree__prog_io_util__SV_28));
#line 1367 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__StateVars_29, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_24));
#line 1367 "prog_io_util.m"
                      }
#line 1368 "prog_io_util.m"
                      {
#line 1368 "prog_io_util.m"
                        MR_Word base;
#line 1368 "prog_io_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1368 "prog_io_util.m"
                        *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1368 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__TailVars_23));
#line 1368 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__StateVars_29));
#line 1368 "prog_io_util.m"
                      }
#line 1367 "prog_io_util.m"
                    }
#line 1361 "prog_io_util.m"
                }
#line 1346 "prog_io_util.m"
            else
#line 1372 "prog_io_util.m"
              {
#line 1372 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TypeInfo_68_68;
#line 1372 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TypeInfo_70_70;
#line 1372 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TypeInfo_72_72;
#line 1372 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__HeadSpecs_30;
#line 1372 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailSpecs_31;
#line 1372 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_54_54;

#line 17142 "parse_tree.prog_io_util.c"
                {
#line 17144 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__TypeInfo_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 17146 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_68_68, 0) = ((MR_Box) (&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_ordinary_state_var_1));
#line 17148 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_68_68, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_62));
#line 17150 "parse_tree.prog_io_util.c"
                }
#line 1372 "prog_io_util.m"
                {
#line 1372 "prog_io_util.m"
                  parse_tree__prog_io_util__HeadSpecs_30 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_util__TypeInfo_68_68, (MR_Word) parse_tree__prog_io_util__MaybeHeadVar_19);
                }
#line 17157 "parse_tree.prog_io_util.c"
                {
#line 17159 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__TypeInfo_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 17161 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_70_70, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 17163 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_70_70, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_62));
#line 17165 "parse_tree.prog_io_util.c"
                }
#line 17167 "parse_tree.prog_io_util.c"
                {
#line 17169 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__TypeInfo_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 17171 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_72_72, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 17173 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_72_72, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_70_70));
#line 17175 "parse_tree.prog_io_util.c"
                }
#line 1373 "prog_io_util.m"
                {
#line 1373 "prog_io_util.m"
                  parse_tree__prog_io_util__TailSpecs_31 = parse_tree__maybe_error__get_any_errors2_1_f_0(parse_tree__prog_io_util__TypeInfo_72_72, parse_tree__prog_io_util__TypeInfo_72_72, (MR_Word) parse_tree__prog_io_util__MaybeTailVars_21);
                }
#line 1374 "prog_io_util.m"
                {
#line 1374 "prog_io_util.m"
                  parse_tree__prog_io_util__V_54_54 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_util__HeadSpecs_30, parse_tree__prog_io_util__TailSpecs_31);
                }
#line 1374 "prog_io_util.m"
                {
#line 1374 "prog_io_util.m"
                  MR_Word base;
#line 1374 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1374 "prog_io_util.m"
                  *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1374 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_54_54));
#line 1374 "prog_io_util.m"
                }
#line 1372 "prog_io_util.m"
              }
#line 1343 "prog_io_util.m"
          }
#line 1328 "prog_io_util.m"
        else
#line 1378 "prog_io_util.m"
          {
#line 1378 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_56_56;
#line 1378 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Spec_61;

#line 1377 "prog_io_util.m"
            {
#line 1377 "prog_io_util.m"
              parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_62, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "a list of variables and/or state variables", parse_tree__prog_io_util__Term_5, &parse_tree__prog_io_util__Spec_61);
            }
#line 1379 "prog_io_util.m"
            {
#line 1379 "prog_io_util.m"
              parse_tree__prog_io_util__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1379 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_61));
#line 1379 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1379 "prog_io_util.m"
            }
#line 1379 "prog_io_util.m"
            {
#line 1379 "prog_io_util.m"
              MR_Word base;
#line 1379 "prog_io_util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1379 "prog_io_util.m"
              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1379 "prog_io_util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_56_56));
#line 1379 "prog_io_util.m"
            }
#line 1378 "prog_io_util.m"
          }
#line 1328 "prog_io_util.m"
      }
#line 1326 "prog_io_util.m"
  }
#line 76 "prog_io_util.m"
}

#line 69 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_vars_4_p_0(
#line 69 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_46,
#line 69 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_5,
#line 69 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 69 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_7,
#line 69 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__MaybeVars_8)
#line 69 "prog_io_util.m"
{
#line 1285 "prog_io_util.m"
  {
#line 1285 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1285 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_27_27;
#line 1285 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_28_28;
#line 1285 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_29_29;
#line 1285 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 1285 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1285 "prog_io_util.m"
      {
#line 1285 "prog_io_util.m"
        parse_tree__prog_io_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 1285 "prog_io_util.m"
        parse_tree__prog_io_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 1285 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 1285 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1285 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1285 "prog_io_util.m"
          {
#line 1285 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_27_27)) == (MR_mktag((MR_Integer) 0)));
#line 1285 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1285 "prog_io_util.m"
              {
#line 1285 "prog_io_util.m"
                parse_tree__prog_io_util__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, (MR_Integer) 0)));
#line 1285 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_28_28, (MR_String) "[]") == 0);
#line 1285 "prog_io_util.m"
              }
#line 1285 "prog_io_util.m"
          }
#line 1285 "prog_io_util.m"
      }
#line 1285 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1286 "prog_io_util.m"
      {
#line 1286 "prog_io_util.m"
        *parse_tree__prog_io_util__MaybeVars_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[0]);
#line 1286 "prog_io_util.m"
      }
#line 1285 "prog_io_util.m"
    else
#line 1287 "prog_io_util.m"
      {
#line 1287 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__HeadTerm_10;
#line 1287 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TailTerm_11;
#line 1287 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_31_31;
#line 1287 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_32_32;
#line 1287 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_33_33;
#line 1287 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_34_34;
#line 1287 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_35_35;
#line 1287 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_12_12;

#line 1287 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1287 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1287 "prog_io_util.m"
          {
#line 1287 "prog_io_util.m"
            parse_tree__prog_io_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 1287 "prog_io_util.m"
            parse_tree__prog_io_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 1287 "prog_io_util.m"
            parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 1287 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_31_31)) == (MR_mktag((MR_Integer) 0)));
#line 1287 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1287 "prog_io_util.m"
              {
#line 1287 "prog_io_util.m"
                parse_tree__prog_io_util__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_31_31, (MR_Integer) 0)));
#line 1287 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_32_32, (MR_String) "[|]") == 0);
#line 1287 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1287 "prog_io_util.m"
                  {
#line 1287 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 1287 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1287 "prog_io_util.m"
                      {
#line 1287 "prog_io_util.m"
                        parse_tree__prog_io_util__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, (MR_Integer) 0)));
#line 1287 "prog_io_util.m"
                        parse_tree__prog_io_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, (MR_Integer) 1)));
#line 1287 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1287 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1287 "prog_io_util.m"
                          {
#line 1287 "prog_io_util.m"
                            parse_tree__prog_io_util__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
#line 1287 "prog_io_util.m"
                            parse_tree__prog_io_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 1)));
#line 1287 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1287 "prog_io_util.m"
                          }
#line 1287 "prog_io_util.m"
                      }
#line 1287 "prog_io_util.m"
                  }
#line 1287 "prog_io_util.m"
              }
#line 1287 "prog_io_util.m"
          }
#line 1287 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1296 "prog_io_util.m"
          {
#line 1296 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__MaybeHeadVar_15;
#line 1296 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__MaybeTailVars_20;
#line 1298 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__HeadVar_21;
#line 1298 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TailVars_22;

#line 1291 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadTerm_10)) == (MR_mktag((MR_Integer) 0))))
#line 1292 "prog_io_util.m"
              {
#line 1292 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__HeadSpec_19;
#line 1292 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_37_37;

#line 1293 "prog_io_util.m"
                {
#line 1293 "prog_io_util.m"
                  parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_46, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "a variable", parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__HeadSpec_19);
                }
#line 1295 "prog_io_util.m"
                {
#line 1295 "prog_io_util.m"
                  parse_tree__prog_io_util__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1295 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadSpec_19));
#line 1295 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1295 "prog_io_util.m"
                }
#line 1295 "prog_io_util.m"
                {
#line 1295 "prog_io_util.m"
                  parse_tree__prog_io_util__MaybeHeadVar_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1295 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__MaybeHeadVar_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_37_37));
#line 1295 "prog_io_util.m"
                }
#line 1292 "prog_io_util.m"
              }
#line 1291 "prog_io_util.m"
            else
#line 1289 "prog_io_util.m"
              {
#line 1289 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__HeadVar0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 1289 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));

#line 1290 "prog_io_util.m"
                {
#line 1290 "prog_io_util.m"
                  parse_tree__prog_io_util__MaybeHeadVar_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1290 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeHeadVar_15, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadVar0_13));
#line 1290 "prog_io_util.m"
                }
#line 1289 "prog_io_util.m"
              }
#line 1297 "prog_io_util.m"
            {
#line 1297 "prog_io_util.m"
              parse_tree__prog_io_util__parse_vars_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_46, parse_tree__prog_io_util__TailTerm_11, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__MaybeTailVars_20);
            }
#line 1299 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeHeadVar_15)) == (MR_mktag((MR_Integer) 1)));
#line 1299 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1299 "prog_io_util.m"
              {
#line 1299 "prog_io_util.m"
                parse_tree__prog_io_util__HeadVar_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeHeadVar_15, (MR_Integer) 0)));
#line 1300 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeTailVars_20)) == (MR_mktag((MR_Integer) 1)));
#line 1300 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1300 "prog_io_util.m"
                  parse_tree__prog_io_util__TailVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeTailVars_20, (MR_Integer) 0)));
#line 1299 "prog_io_util.m"
              }
#line 1298 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1302 "prog_io_util.m"
              {
#line 1302 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TypeInfo_48_48;

#line 17489 "parse_tree.prog_io_util.c"
                {
#line 17491 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__TypeInfo_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 17493 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_48_48, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 17495 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_48_48, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_46));
#line 17497 "parse_tree.prog_io_util.c"
                }
#line 1302 "prog_io_util.m"
                {
#line 1302 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_46, parse_tree__prog_io_util__TypeInfo_48_48, parse_tree__prog_io_util__HeadVar_21, parse_tree__prog_io_util__TailVars_22);
                }
#line 1302 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1304 "prog_io_util.m"
                  {
#line 1304 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Spec_23;
#line 1304 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_39_39;

#line 1303 "prog_io_util.m"
                    {
#line 1303 "prog_io_util.m"
                      parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_46, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_23);
                    }
#line 1305 "prog_io_util.m"
                    {
#line 1305 "prog_io_util.m"
                      parse_tree__prog_io_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1305 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_23));
#line 1305 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1305 "prog_io_util.m"
                    }
#line 1305 "prog_io_util.m"
                    {
#line 1305 "prog_io_util.m"
                      MR_Word base;
#line 1305 "prog_io_util.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1305 "prog_io_util.m"
                      *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1305 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_39_39));
#line 1305 "prog_io_util.m"
                    }
#line 1304 "prog_io_util.m"
                  }
#line 1302 "prog_io_util.m"
                else
#line 1307 "prog_io_util.m"
                  {
#line 1307 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Vars_24;

#line 1307 "prog_io_util.m"
                    {
#line 1307 "prog_io_util.m"
                      parse_tree__prog_io_util__Vars_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1307 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_24, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadVar_21));
#line 1307 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_24, 1) = ((MR_Box) (parse_tree__prog_io_util__TailVars_22));
#line 1307 "prog_io_util.m"
                    }
#line 1308 "prog_io_util.m"
                    {
#line 1308 "prog_io_util.m"
                      MR_Word base;
#line 1308 "prog_io_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1308 "prog_io_util.m"
                      *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1308 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Vars_24));
#line 1308 "prog_io_util.m"
                    }
#line 1307 "prog_io_util.m"
                  }
#line 1302 "prog_io_util.m"
              }
#line 1298 "prog_io_util.m"
            else
#line 1311 "prog_io_util.m"
              {
#line 1311 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TypeInfo_50_50;
#line 1311 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TypeInfo_52_52;
#line 1311 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__HeadSpecs_25;
#line 1311 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailSpecs_26;
#line 1311 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_41_41;

#line 17590 "parse_tree.prog_io_util.c"
                {
#line 17592 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__TypeInfo_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 17594 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_50_50, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 17596 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_50_50, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_46));
#line 17598 "parse_tree.prog_io_util.c"
                }
#line 1311 "prog_io_util.m"
                {
#line 1311 "prog_io_util.m"
                  parse_tree__prog_io_util__HeadSpecs_25 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_util__TypeInfo_50_50, (MR_Word) parse_tree__prog_io_util__MaybeHeadVar_15);
                }
#line 17605 "parse_tree.prog_io_util.c"
                {
#line 17607 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__TypeInfo_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 17609 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_52_52, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 17611 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_52_52, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_50_50));
#line 17613 "parse_tree.prog_io_util.c"
                }
#line 1312 "prog_io_util.m"
                {
#line 1312 "prog_io_util.m"
                  parse_tree__prog_io_util__TailSpecs_26 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_util__TypeInfo_52_52, (MR_Word) parse_tree__prog_io_util__MaybeTailVars_20);
                }
#line 1313 "prog_io_util.m"
                {
#line 1313 "prog_io_util.m"
                  parse_tree__prog_io_util__V_41_41 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_util__HeadSpecs_25, parse_tree__prog_io_util__TailSpecs_26);
                }
#line 1313 "prog_io_util.m"
                {
#line 1313 "prog_io_util.m"
                  MR_Word base;
#line 1313 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1313 "prog_io_util.m"
                  *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1313 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_41_41));
#line 1313 "prog_io_util.m"
                }
#line 1311 "prog_io_util.m"
              }
#line 1296 "prog_io_util.m"
          }
#line 1287 "prog_io_util.m"
        else
#line 1317 "prog_io_util.m"
          {
#line 1317 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_43_43;
#line 1317 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Spec_45;

#line 1316 "prog_io_util.m"
            {
#line 1316 "prog_io_util.m"
              parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_46, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "a list of variables", parse_tree__prog_io_util__Term_5, &parse_tree__prog_io_util__Spec_45);
            }
#line 1318 "prog_io_util.m"
            {
#line 1318 "prog_io_util.m"
              parse_tree__prog_io_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1318 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_45));
#line 1318 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1318 "prog_io_util.m"
            }
#line 1318 "prog_io_util.m"
            {
#line 1318 "prog_io_util.m"
              MR_Word base;
#line 1318 "prog_io_util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1318 "prog_io_util.m"
              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1318 "prog_io_util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_43_43));
#line 1318 "prog_io_util.m"
            }
#line 1317 "prog_io_util.m"
          }
#line 1287 "prog_io_util.m"
      }
#line 1285 "prog_io_util.m"
  }
#line 69 "prog_io_util.m"
}

#line 63 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_list_of_vars_4_p_0(
#line 63 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_43,
#line 63 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_5,
#line 63 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_6,
#line 63 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_7,
#line 63 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__MaybeVars_8)
#line 63 "prog_io_util.m"
{
#line 1255 "prog_io_util.m"
  {
#line 1255 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 1255 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_24_24;
#line 1255 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_25_25;
#line 1255 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_26_26;
#line 1255 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 1255 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1255 "prog_io_util.m"
      {
#line 1255 "prog_io_util.m"
        parse_tree__prog_io_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_7, (MR_Integer) 0)));
#line 1255 "prog_io_util.m"
        parse_tree__prog_io_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_7, (MR_Integer) 1)));
#line 1255 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_7, (MR_Integer) 2)));
#line 1255 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1255 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1255 "prog_io_util.m"
          {
#line 1255 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_24_24)) == (MR_mktag((MR_Integer) 0)));
#line 1255 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1255 "prog_io_util.m"
              {
#line 1255 "prog_io_util.m"
                parse_tree__prog_io_util__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_24_24, (MR_Integer) 0)));
#line 1255 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_25_25, (MR_String) "[]") == 0);
#line 1255 "prog_io_util.m"
              }
#line 1255 "prog_io_util.m"
          }
#line 1255 "prog_io_util.m"
      }
#line 1255 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1256 "prog_io_util.m"
      {
#line 1256 "prog_io_util.m"
        *parse_tree__prog_io_util__MaybeVars_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[0]);
#line 1256 "prog_io_util.m"
      }
#line 1255 "prog_io_util.m"
    else
#line 1257 "prog_io_util.m"
      {
#line 1257 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__HeadTerm_10;
#line 1257 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TailTerm_11;
#line 1257 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_28_28;
#line 1257 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_29_29;
#line 1257 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_30_30;
#line 1257 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_31_31;
#line 1257 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_32_32;
#line 1257 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_12_12;

#line 1257 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_7)) == (MR_mktag((MR_Integer) 0)));
#line 1257 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1257 "prog_io_util.m"
          {
#line 1257 "prog_io_util.m"
            parse_tree__prog_io_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_7, (MR_Integer) 0)));
#line 1257 "prog_io_util.m"
            parse_tree__prog_io_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_7, (MR_Integer) 1)));
#line 1257 "prog_io_util.m"
            parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_7, (MR_Integer) 2)));
#line 1257 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_28_28)) == (MR_mktag((MR_Integer) 0)));
#line 1257 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1257 "prog_io_util.m"
              {
#line 1257 "prog_io_util.m"
                parse_tree__prog_io_util__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, (MR_Integer) 0)));
#line 1257 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_29_29, (MR_String) "[|]") == 0);
#line 1257 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1257 "prog_io_util.m"
                  {
#line 1257 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 1257 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1257 "prog_io_util.m"
                      {
#line 1257 "prog_io_util.m"
                        parse_tree__prog_io_util__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_30_30, (MR_Integer) 0)));
#line 1257 "prog_io_util.m"
                        parse_tree__prog_io_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_30_30, (MR_Integer) 1)));
#line 1257 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 1257 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1257 "prog_io_util.m"
                          {
#line 1257 "prog_io_util.m"
                            parse_tree__prog_io_util__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_31_31, (MR_Integer) 0)));
#line 1257 "prog_io_util.m"
                            parse_tree__prog_io_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_31_31, (MR_Integer) 1)));
#line 1257 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1257 "prog_io_util.m"
                          }
#line 1257 "prog_io_util.m"
                      }
#line 1257 "prog_io_util.m"
                  }
#line 1257 "prog_io_util.m"
              }
#line 1257 "prog_io_util.m"
          }
#line 1257 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1266 "prog_io_util.m"
          {
#line 1266 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__MaybeHeadVar_15;
#line 1266 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__MaybeTailVars_20;
#line 1268 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__HeadVar_21;
#line 1268 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TailVars_22;

#line 1261 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadTerm_10)) == (MR_mktag((MR_Integer) 0))))
#line 1262 "prog_io_util.m"
              {
#line 1262 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Spec_19;
#line 1262 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_34_34;

#line 1263 "prog_io_util.m"
                {
#line 1263 "prog_io_util.m"
                  parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_43, parse_tree__prog_io_util__ContextPieces_6, parse_tree__prog_io_util__VarSet_5, (MR_String) "a variable", parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_19);
                }
#line 1265 "prog_io_util.m"
                {
#line 1265 "prog_io_util.m"
                  parse_tree__prog_io_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1265 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_19));
#line 1265 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1265 "prog_io_util.m"
                }
#line 1265 "prog_io_util.m"
                {
#line 1265 "prog_io_util.m"
                  parse_tree__prog_io_util__MaybeHeadVar_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1265 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__MaybeHeadVar_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_34_34));
#line 1265 "prog_io_util.m"
                }
#line 1262 "prog_io_util.m"
              }
#line 1261 "prog_io_util.m"
            else
#line 1259 "prog_io_util.m"
              {
#line 1259 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__HeadVar0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 1259 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));

#line 1260 "prog_io_util.m"
                {
#line 1260 "prog_io_util.m"
                  parse_tree__prog_io_util__MaybeHeadVar_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1260 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeHeadVar_15, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadVar0_13));
#line 1260 "prog_io_util.m"
                }
#line 1259 "prog_io_util.m"
              }
#line 1267 "prog_io_util.m"
            {
#line 1267 "prog_io_util.m"
              parse_tree__prog_io_util__parse_list_of_vars_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_43, parse_tree__prog_io_util__VarSet_5, parse_tree__prog_io_util__ContextPieces_6, parse_tree__prog_io_util__TailTerm_11, &parse_tree__prog_io_util__MaybeTailVars_20);
            }
#line 1269 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeHeadVar_15)) == (MR_mktag((MR_Integer) 1)));
#line 1269 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1269 "prog_io_util.m"
              {
#line 1269 "prog_io_util.m"
                parse_tree__prog_io_util__HeadVar_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeHeadVar_15, (MR_Integer) 0)));
#line 1270 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeTailVars_20)) == (MR_mktag((MR_Integer) 1)));
#line 1270 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1270 "prog_io_util.m"
                  parse_tree__prog_io_util__TailVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeTailVars_20, (MR_Integer) 0)));
#line 1269 "prog_io_util.m"
              }
#line 1268 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1272 "prog_io_util.m"
              {
#line 1272 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_36_36;

#line 1272 "prog_io_util.m"
                {
#line 1272 "prog_io_util.m"
                  parse_tree__prog_io_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1272 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadVar_21));
#line 1272 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_36_36, 1) = ((MR_Box) (parse_tree__prog_io_util__TailVars_22));
#line 1272 "prog_io_util.m"
                }
#line 1272 "prog_io_util.m"
                {
#line 1272 "prog_io_util.m"
                  MR_Word base;
#line 1272 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1272 "prog_io_util.m"
                  *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1272 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 1272 "prog_io_util.m"
                }
#line 1272 "prog_io_util.m"
              }
#line 1268 "prog_io_util.m"
            else
#line 1275 "prog_io_util.m"
              {
#line 1275 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TypeInfo_46_46;
#line 1275 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TypeInfo_48_48;
#line 1275 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Specs_23;
#line 1275 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_37_37;
#line 1275 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_38_38;

#line 17966 "parse_tree.prog_io_util.c"
                {
#line 17968 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 17970 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_46_46, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 17972 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_46_46, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_43));
#line 17974 "parse_tree.prog_io_util.c"
                }
#line 1274 "prog_io_util.m"
                {
#line 1274 "prog_io_util.m"
                  parse_tree__prog_io_util__V_37_37 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_util__TypeInfo_46_46, (MR_Word) parse_tree__prog_io_util__MaybeHeadVar_15);
                }
#line 17981 "parse_tree.prog_io_util.c"
                {
#line 17983 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__TypeInfo_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 17985 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_48_48, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 17987 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_48_48, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_46_46));
#line 17989 "parse_tree.prog_io_util.c"
                }
#line 1275 "prog_io_util.m"
                {
#line 1275 "prog_io_util.m"
                  parse_tree__prog_io_util__V_38_38 = parse_tree__maybe_error__get_any_errors1_1_f_0(parse_tree__prog_io_util__TypeInfo_48_48, (MR_Word) parse_tree__prog_io_util__MaybeTailVars_20);
                }
#line 1274 "prog_io_util.m"
                {
#line 1274 "prog_io_util.m"
                  parse_tree__prog_io_util__Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_util__V_37_37, parse_tree__prog_io_util__V_38_38);
                }
#line 1276 "prog_io_util.m"
                {
#line 1276 "prog_io_util.m"
                  MR_Word base;
#line 1276 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1276 "prog_io_util.m"
                  *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1276 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Specs_23));
#line 1276 "prog_io_util.m"
                }
#line 1275 "prog_io_util.m"
              }
#line 1266 "prog_io_util.m"
          }
#line 1257 "prog_io_util.m"
        else
#line 1280 "prog_io_util.m"
          {
#line 1280 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_40_40;
#line 1280 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Spec_42;

#line 1279 "prog_io_util.m"
            {
#line 1279 "prog_io_util.m"
              parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_43, parse_tree__prog_io_util__ContextPieces_6, parse_tree__prog_io_util__VarSet_5, (MR_String) "a list of variables", parse_tree__prog_io_util__Term_7, &parse_tree__prog_io_util__Spec_42);
            }
#line 1281 "prog_io_util.m"
            {
#line 1281 "prog_io_util.m"
              parse_tree__prog_io_util__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1281 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_42));
#line 1281 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1281 "prog_io_util.m"
            }
#line 1281 "prog_io_util.m"
            {
#line 1281 "prog_io_util.m"
              MR_Word base;
#line 1281 "prog_io_util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1281 "prog_io_util.m"
              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1281 "prog_io_util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_40_40));
#line 1281 "prog_io_util.m"
            }
#line 1280 "prog_io_util.m"
          }
#line 1257 "prog_io_util.m"
      }
#line 1255 "prog_io_util.m"
  }
#line 63 "prog_io_util.m"
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
