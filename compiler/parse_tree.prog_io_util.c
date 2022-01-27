/*
** Automatically generated from `prog_io_util.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 1139 "prog_io_util.m"
struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s {
#line 1142 "prog_io_util.m"
  MR_bool parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded;
#line 1142 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23;
#line 1142 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__Functors_11;
#line 1148 "prog_io_util.m"
  jmp_buf parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__commit_0;
#line 1148 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13;
#line 1148 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F1_14;
#line 1148 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F2_15;
#line 1148 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__ConsId_17;
#line 1148 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20;
#line 1148 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_24_24;
#line 1139 "prog_io_util.m"
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
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_0[2];

#line 205 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_0;

#line 208 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_1[2];

#line 211 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_1;

#line 214 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_2[1];

#line 217 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_2;

#line 220 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_3[1];

#line 223 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_3;

#line 226 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_4[1];

#line 229 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_4;

#line 232 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_0[1];

#line 235 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_1[1];

#line 238 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_2[1];

#line 241 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_3[2];

#line 244 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_known_compound_inst_kind_1[4];

#line 247 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_compound_inst_kind_1[5];

#line 250 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_compound_inst_kind_1[5];

#line 253 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__list__pti_list_1__pseudo_1;

#line 256 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_0[1];

#line 259 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_0;

#line 262 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_1[2];

#line 265 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_1;

#line 268 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_2[1];

#line 271 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_2;

#line 274 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_3[2];

#line 277 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_3;

#line 280 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_4[1];

#line 283 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_4;

#line 286 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_0[1];

#line 289 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_1[1];

#line 292 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_2[1];

#line 295 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_3[2];

#line 298 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_known_compound_type_kind_1[4];

#line 301 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_compound_type_kind_1[5];

#line 304 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_compound_type_kind_1[5];

#line 307 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_inst_kind_1_0[1];

#line 310 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_0;

#line 313 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_known_compound_inst_kind_1__pseudo_1;

#line 316 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_inst_kind_1_1[1];

#line 319 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_1;

#line 322 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_2;

#line 325 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_0[1];

#line 328 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_1[1];

#line 331 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_2[1];

#line 334 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_known_inst_kind_1[3];

#line 337 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_inst_kind_1[3];

#line 340 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_inst_kind_1[3];

#line 343 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_type_kind_1_0[1];

#line 346 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_0;

#line 349 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_known_compound_type_kind_1__pseudo_1;

#line 352 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_type_kind_1_1[1];

#line 355 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_1;

#line 358 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_2;

#line 361 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_type_kind_1_0[1];

#line 364 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_type_kind_1_1[1];

#line 367 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_type_kind_1_2[1];

#line 370 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_known_type_kind_1[3];

#line 373 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_type_kind_1[3];

#line 376 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_type_kind_1[3];

#line 379 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 382 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe1_1_0[1];

#line 385 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe1_1_0;

#line 388 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe1_1_1[1];

#line 391 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe1_1_1;

#line 394 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe1_1_0[1];

#line 397 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe1_1_1[1];

#line 400 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_maybe1_1[2];

#line 403 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe1_1[2];

#line 406 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe1_1[2];

#line 409 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe2_2_0[1];

#line 412 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe2_2_0;

#line 415 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe2_2_1[2];

#line 418 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe2_2_1;

#line 421 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe2_2_0[1];

#line 424 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe2_2_1[1];

#line 427 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_maybe2_2[2];

#line 430 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe2_2[2];

#line 433 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe2_2[2];

#line 436 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe3_3_0[1];

#line 439 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe3_3_0;

#line 442 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe3_3_1[3];

#line 445 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe3_3_1;

#line 448 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe3_3_0[1];

#line 451 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe3_3_1[1];

#line 454 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_maybe3_3[2];

#line 457 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe3_3[2];

#line 460 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe3_3[2];

#line 463 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe4_4_0[1];

#line 466 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe4_4_0;

#line 469 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe4_4_1[4];

#line 472 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe4_4_1;

#line 475 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe4_4_0[1];

#line 478 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe4_4_1[1];

#line 481 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_maybe4_4[2];

#line 484 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe4_4[2];

#line 487 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe4_4[2];

#line 490 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_term_1__pseudo_1;

#line 493 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1;

#line 496 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1;

#line 499 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0;

#line 502 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__prog_io_util__ti_maybe2_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0;

#line 505 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__maybe__pti_maybe_1__pseudo_1;

#line 508 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1;

#line 511 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1;

#line 514 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_var_1__pseudo_1;

#line 517 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_0[1];

#line 520 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_0;

#line 523 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_1[1];

#line 526 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_1;

#line 529 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_2[1];

#line 532 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_2;

#line 535 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_3[1];

#line 538 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_3;

#line 541 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_0[1];

#line 544 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_1[1];

#line 547 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_2[1];

#line 550 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_3[1];

#line 553 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_ordinary_state_dot_colon_var_1[4];

#line 556 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_dot_colon_var_1[4];

#line 559 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_dot_colon_var_1[4];

#line 562 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_0[1];

#line 565 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_0;

#line 568 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_1[1];

#line 571 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_1;

#line 574 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_0[1];

#line 577 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_1[1];

#line 580 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_ordinary_state_var_1[2];

#line 583 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_var_1[2];

#line 586 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_var_1[2];

#line 589 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe1_1__pseudo_1;

#line 592 "parse_tree.prog_io_util.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_parse_tree__prog_io_util__pti_maybe1_1__pseudo_1;

#line 595 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_0;

#line 598 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_1;

#line 601 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_value_ordered_quantifier_type_0[2];

#line 604 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_name_ordered_quantifier_type_0[2];

#line 607 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_quantifier_type_0[2];

#line 610 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 613 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 616 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 619 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 622 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____allow_constrained_inst_var_0_0_10001(
#line 625 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 627 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 630 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____allow_constrained_inst_var_0_0_10001(
#line 633 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 635 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 637 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 640 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____decl_attribute_0_0_10001(
#line 643 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 645 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 648 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____decl_attribute_0_0_10001(
#line 651 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 653 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 655 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 658 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____decl_attrs_0_0_10001(
#line 661 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 663 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 666 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____decl_attrs_0_0_10001(
#line 669 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 671 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 673 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 676 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_inst_kind_1_0_10001(
#line 679 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 681 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 683 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 686 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_inst_kind_1_0_10001(
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
parse_tree__prog_io_util____Unify____known_compound_type_kind_1_0_10001(
#line 701 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 703 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 705 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 708 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_type_kind_1_0_10001(
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
parse_tree__prog_io_util____Unify____known_inst_kind_1_0_10001(
#line 723 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 725 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 727 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 730 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_inst_kind_1_0_10001(
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
parse_tree__prog_io_util____Unify____known_type_kind_1_0_10001(
#line 745 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 747 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 749 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 752 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_type_kind_1_0_10001(
#line 755 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 757 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 759 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 761 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 764 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe1_1_0_10001(
#line 767 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 769 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 771 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 774 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe1_1_0_10001(
#line 777 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 779 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 781 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 783 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 786 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe2_2_0_10001(
#line 789 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 791 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 793 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 795 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 798 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe2_2_0_10001(
#line 801 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 803 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 805 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_3,
#line 807 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 809 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5);

#line 812 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe3_3_0_10001(
#line 815 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 817 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 819 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 821 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 823 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5);

#line 826 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe3_3_0_10001(
#line 829 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 831 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 833 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 835 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_4,
#line 837 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5,
#line 839 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_6);

#line 842 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe4_4_0_10001(
#line 845 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 847 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 849 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 851 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 853 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5,
#line 855 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_6);

#line 858 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe4_4_0_10001(
#line 861 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 863 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 865 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 867 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 869 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_5,
#line 871 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_6,
#line 873 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_7);

#line 876 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_1_0_10001(
#line 879 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 881 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 883 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 886 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_1_0_10001(
#line 889 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 891 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 893 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 895 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 898 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_0_0_10001(
#line 901 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 903 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 906 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_0_0_10001(
#line 909 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 911 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 913 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 916 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_pred_or_func_1_0_10001(
#line 919 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 921 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 923 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 926 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_pred_or_func_1_0_10001(
#line 929 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 931 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 933 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 935 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 938 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0_10001(
#line 941 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 943 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 945 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 948 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0_10001(
#line 951 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 953 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 955 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 957 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 960 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_var_1_0_10001(
#line 963 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 965 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 967 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 970 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_var_1_0_10001(
#line 973 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 975 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 977 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 979 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 982 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____parser_1_0_10001(
#line 985 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 987 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 989 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 992 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____parser_1_0_10001(
#line 995 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 997 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 999 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 1001 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 1004 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____quantifier_type_0_0_10001(
#line 1007 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 1009 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 1012 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____quantifier_type_0_0_10001(
#line 1015 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 1017 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 1019 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 1022 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2pvar_0_0_10001(
#line 1025 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 1027 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 1030 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____var2pvar_0_0_10001(
#line 1033 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 1035 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 1037 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 1040 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2tvar_0_0_10001(
#line 1043 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 1045 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 1048 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____var2tvar_0_0_10001(
#line 1051 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 1053 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 1055 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 1229 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(
#line 1229 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Op_5,
#line 1229 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_6,
#line 1229 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__List0_7,
#line 1229 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__OneOrMore_8);

#line 922 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
#line 922 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Name_4,
#line 922 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Args_5,
#line 922 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__KnownInst_6);

#line 491 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_116_121_112_101_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
#line 491 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Name_4,
#line 491 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Args_5,
#line 491 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__KnownType_6);

#line 1352 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_var_1_0(
#line 1352 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_14,
#line 1352 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 1352 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 1352 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3);

#line 1352 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_var_1_0(
#line 1352 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
#line 1352 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 1352 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2);

#line 1413 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0(
#line 1413 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_38,
#line 1413 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 1413 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 1413 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3);

#line 1413 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0(
#line 1413 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_13,
#line 1413 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 1413 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2);

#line 476 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_type_kind_1_0(
#line 476 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_18,
#line 476 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 476 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 476 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3);

#line 476 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_type_kind_1_0(
#line 476 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_11,
#line 476 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 476 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2);

#line 904 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_inst_kind_1_0(
#line 904 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_18,
#line 904 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 904 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 904 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3);

#line 904 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_inst_kind_1_0(
#line 904 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_11,
#line 904 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 904 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2);

#line 469 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_type_kind_1_0(
#line 469 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_78,
#line 469 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 469 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 469 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3);

#line 469 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_type_kind_1_0(
#line 469 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_19,
#line 469 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 469 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2);

#line 897 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_inst_kind_1_0(
#line 897 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_78,
#line 897 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 897 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 897 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3);

#line 897 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_inst_kind_1_0(
#line 897 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_19,
#line 897 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 897 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2);

#line 1542 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(
#line 1542 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_43,
#line 1542 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_6,
#line 1542 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_7,
#line 1542 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Expected_8,
#line 1542 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_9,
#line 1542 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Spec_10);

#line 1532 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__generate_repeated_state_var_msg_4_p_0(
#line 1532 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_33,
#line 1532 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_5,
#line 1532 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 1532 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_7,
#line 1532 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Spec_8);

#line 1522 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(
#line 1522 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_33,
#line 1522 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_5,
#line 1522 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 1522 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_7,
#line 1522 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Spec_8);

#line 1249 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__map_parser_one_or_more_4_p_0(
#line 1249 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_29,
#line 1249 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Parser_5,
#line 1249 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Head_6,
#line 1249 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Tail_7,
#line 1249 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_8);

#line 1163 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_bound_inst_3_p_0(
#line 1163 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_4,
#line 1163 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__InstTerm_5,
#line 1163 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__BoundInst_6);

#line 1155 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_bound_inst_list_3_p_0(
#line 1155 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
#line 1155 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 1155 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3);

#line 1148 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_1(
#line 1148 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg);

#line 1148 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_2(
#line 1148 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg);

#line 1148 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_3(
#line 1148 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg);

#line 1139 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(
#line 1139 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
#line 1139 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Disj_6,
#line 1139 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Uniqueness_7,
#line 1139 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Inst_8);

#line 1046 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_higher_order_inst_4_p_0(
#line 1046 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
#line 1046 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__BeforeIsTerm_6,
#line 1046 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__DetTerm_7,
#line 1046 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Inst_8);

#line 732 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_higher_order_mode_4_p_0(
#line 732 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
#line 732 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__BeforeIsTerm_6,
#line 732 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__DetTerm_7,
#line 732 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Mode_8);

#line 672 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_qualified_term_3_p_0(
#line 672 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 672 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Args_2,
#line 672 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Term_3);

#line 670 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_type_list_2_p_0_1(
#line 670 "prog_io_util.m"
  MR_Box parse_tree__prog_io_util__closure_arg,
#line 670 "prog_io_util.m"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 670 "prog_io_util.m"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2);

#line 667 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_type_list_2_p_0(
#line 667 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Types_3,
#line 667 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Terms_4);

#line 594 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_types_acc_7_p_0(
#line 594 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 594 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_2,
#line 594 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_3,
#line 594 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_0_4,
#line 594 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_5,
#line 594 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__STATE_VARIABLE_Specs_0_6,
#line 594 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__STATE_VARIABLE_Specs_7);

#line 566 "prog_io_util.m"
static MR_Word MR_CALL 
parse_tree__prog_io_util__ill_formed_type_result_3_f_0(
#line 566 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_5,
#line 566 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 566 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_7);

#line 386 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_compound_type_5_p_0(
#line 386 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_6,
#line 386 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_7,
#line 386 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_8,
#line 386 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__CompoundTypeKind_9,
#line 386 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_10);


static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_1[27][2];

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_2[10][3];

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_3[33][1];

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_4[1][4];

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_7[1][5];


#line 1129 "prog_io_util.m"
/* sealed */ struct parse_tree__prog_io_util__vector_common_type_5_0_s {
#line 1129 "prog_io_util.m"
  const MR_String parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_0;
#line 1129 "prog_io_util.m"
  const MR_Integer parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_1;
#line 1129 "prog_io_util.m"
  const MR_Word parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_2;
#line 1129 "prog_io_util.m"
};

static /* final */ const struct parse_tree__prog_io_util__vector_common_type_5_0_s parse_tree__prog_io_util_vector_common_5[32];

#line 1570 "prog_io_util.m"
/* sealed */ struct parse_tree__prog_io_util__vector_common_type_6_0_s {
#line 1570 "prog_io_util.m"
  const MR_String parse_tree__prog_io_util__vector_common_type_6_0__vct_6_f_0;
#line 1570 "prog_io_util.m"
  const MR_Integer parse_tree__prog_io_util__vector_common_type_6_0__vct_6_f_1;
#line 1570 "prog_io_util.m"
};

static /* final */ const struct parse_tree__prog_io_util__vector_common_type_6_0_s parse_tree__prog_io_util_vector_common_6[39];



static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_1[27][2] = {
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
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_io_util_scalar_common_1[0]))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not allowed here."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
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
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: ill-formed type"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Repeated variable"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Repeated state variable"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Expected"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not"))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 26 */
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
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[22])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[5])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[23])))
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
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[24])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[8])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[25])))
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
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[26])))
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



#line 2221 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2229 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_0 = {
  (MR_String) "allow_constrained_inst_var",
  (MR_Integer) 0
};

#line 2235 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_1 = {
  (MR_String) "no_allow_constrained_inst_var",
  (MR_Integer) 1
};

#line 2241 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_value_ordered_allow_constrained_inst_var_0[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_1
};

#line 2247 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_name_ordered_allow_constrained_inst_var_0[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_1
};

#line 2253 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_allow_constrained_inst_var_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2259 "parse_tree.prog_io_util.c"
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

#line 2276 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_decl_attribute_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0
};

#line 2281 "parse_tree.prog_io_util.c"
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

#line 2296 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2304 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 2312 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_decl_attribute_0_1[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_quantifier_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0
};

#line 2318 "parse_tree.prog_io_util.c"
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

#line 2333 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2341 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_decl_attribute_0_2[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_quantifier_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0
};

#line 2347 "parse_tree.prog_io_util.c"
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

#line 2362 "parse_tree.prog_io_util.c"
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

#line 2377 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_3
};

#line 2382 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_0
};

#line 2387 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_2[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_1
};

#line 2392 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_3[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_2
};

#line 2397 "parse_tree.prog_io_util.c"
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

#line 2421 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_decl_attribute_0[4] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_2,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_1,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_3
};

#line 2429 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_decl_attribute_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3
};

#line 2437 "parse_tree.prog_io_util.c"
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

#line 2454 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__pair__ti_pair_2parse_tree__prog_io_util__type_ctor_info_decl_attribute_0term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_decl_attribute_0,
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 2463 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1pair__ti_pair_2parse_tree__prog_io_util__type_ctor_info_decl_attribute_0term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__pair__ti_pair_2parse_tree__prog_io_util__type_ctor_info_decl_attribute_0term__type_ctor_info_context_0
  }
};

#line 2471 "parse_tree.prog_io_util.c"
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

#line 2488 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2494 "parse_tree.prog_io_util.c"
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

#line 2509 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2515 "parse_tree.prog_io_util.c"
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

#line 2530 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_2[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2535 "parse_tree.prog_io_util.c"
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

#line 2550 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_3[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2555 "parse_tree.prog_io_util.c"
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

#line 2570 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_4[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2575 "parse_tree.prog_io_util.c"
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

#line 2590 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_0
};

#line 2595 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_1
};

#line 2600 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_2[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_2
};

#line 2605 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_3[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_3,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_4
};

#line 2611 "parse_tree.prog_io_util.c"
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

#line 2635 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_compound_inst_kind_1[5] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_2,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_1,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_4,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_3
};

#line 2644 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_compound_inst_kind_1[5] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 3
};

#line 2653 "parse_tree.prog_io_util.c"
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

#line 2670 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2678 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__pti_list_1__pseudo_1
};

#line 2683 "parse_tree.prog_io_util.c"
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

#line 2698 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2704 "parse_tree.prog_io_util.c"
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

#line 2719 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__pti_list_1__pseudo_1
};

#line 2724 "parse_tree.prog_io_util.c"
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

#line 2739 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_3[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2745 "parse_tree.prog_io_util.c"
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

#line 2760 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_type_kind_1_4[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__pti_list_1__pseudo_1
};

#line 2765 "parse_tree.prog_io_util.c"
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

#line 2780 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_0
};

#line 2785 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_1
};

#line 2790 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_2[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_2
};

#line 2795 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_type_kind_1_3[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_3,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_4
};

#line 2801 "parse_tree.prog_io_util.c"
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

#line 2825 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_compound_type_kind_1[5] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_4,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_1,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_2,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_3,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_type_kind_1_0
};

#line 2834 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_compound_type_kind_1[5] = {
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 2843 "parse_tree.prog_io_util.c"
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

#line 2860 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_inst_kind_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

#line 2865 "parse_tree.prog_io_util.c"
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

#line 2880 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_known_compound_inst_kind_1__pseudo_1 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_known_compound_inst_kind_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2888 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_inst_kind_1_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__pti_known_compound_inst_kind_1__pseudo_1
};

#line 2893 "parse_tree.prog_io_util.c"
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

#line 2908 "parse_tree.prog_io_util.c"
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

#line 2923 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_2
};

#line 2928 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_0
};

#line 2933 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_2[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_1
};

#line 2938 "parse_tree.prog_io_util.c"
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

#line 2957 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_inst_kind_1[3] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_2,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_1,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_0
};

#line 2964 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_inst_kind_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2971 "parse_tree.prog_io_util.c"
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

#line 2988 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_type_kind_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 2993 "parse_tree.prog_io_util.c"
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

#line 3008 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_known_compound_type_kind_1__pseudo_1 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_known_compound_type_kind_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 3016 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_type_kind_1_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__pti_known_compound_type_kind_1__pseudo_1
};

#line 3021 "parse_tree.prog_io_util.c"
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

#line 3036 "parse_tree.prog_io_util.c"
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

#line 3051 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_type_kind_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_2
};

#line 3056 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_type_kind_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_0
};

#line 3061 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_type_kind_1_2[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_1
};

#line 3066 "parse_tree.prog_io_util.c"
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

#line 3085 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_type_kind_1[3] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_2,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_1,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_type_kind_1_0
};

#line 3092 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_type_kind_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3099 "parse_tree.prog_io_util.c"
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

#line 3116 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 3124 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe1_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 3129 "parse_tree.prog_io_util.c"
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

#line 3144 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe1_1_1[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 3149 "parse_tree.prog_io_util.c"
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

#line 3164 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe1_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe1_1_0
};

#line 3169 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe1_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe1_1_1
};

#line 3174 "parse_tree.prog_io_util.c"
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

#line 3188 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe1_1[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe1_1_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe1_1_1
};

#line 3194 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe1_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3200 "parse_tree.prog_io_util.c"
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

#line 3217 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe2_2_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 3222 "parse_tree.prog_io_util.c"
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

#line 3237 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe2_2_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 3243 "parse_tree.prog_io_util.c"
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

#line 3258 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe2_2_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe2_2_0
};

#line 3263 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe2_2_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe2_2_1
};

#line 3268 "parse_tree.prog_io_util.c"
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

#line 3282 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe2_2[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe2_2_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe2_2_1
};

#line 3288 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe2_2[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3294 "parse_tree.prog_io_util.c"
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

#line 3311 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe3_3_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 3316 "parse_tree.prog_io_util.c"
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

#line 3331 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe3_3_1[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) (MR_Integer) 3
};

#line 3338 "parse_tree.prog_io_util.c"
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

#line 3353 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe3_3_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe3_3_0
};

#line 3358 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe3_3_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe3_3_1
};

#line 3363 "parse_tree.prog_io_util.c"
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

#line 3377 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe3_3[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe3_3_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe3_3_1
};

#line 3383 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe3_3[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3389 "parse_tree.prog_io_util.c"
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

#line 3406 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe4_4_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 3411 "parse_tree.prog_io_util.c"
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

#line 3426 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe4_4_1[4] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) (MR_Integer) 3,
  (MR_PseudoTypeInfo) (MR_Integer) 4
};

#line 3434 "parse_tree.prog_io_util.c"
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

#line 3449 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe4_4_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe4_4_0
};

#line 3454 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe4_4_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe4_4_1
};

#line 3459 "parse_tree.prog_io_util.c"
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

#line 3473 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe4_4[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe4_4_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe4_4_1
};

#line 3479 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe4_4[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3485 "parse_tree.prog_io_util.c"
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

#line 3502 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 3510 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_term_1__pseudo_1
  }
};

#line 3518 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe2_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1
  }
};

#line 3527 "parse_tree.prog_io_util.c"
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

#line 3544 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0
  }
};

#line 3552 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__prog_io_util__ti_maybe2_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe2_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__prog_io_util__list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0
  }
};

#line 3561 "parse_tree.prog_io_util.c"
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

#line 3578 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__maybe__pti_maybe_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 3586 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__pti_list_1__pseudo_1,
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__maybe__pti_maybe_1__pseudo_1
  }
};

#line 3595 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe2_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1
  }
};

#line 3604 "parse_tree.prog_io_util.c"
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

#line 3621 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 3629 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 3634 "parse_tree.prog_io_util.c"
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

#line 3649 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 3654 "parse_tree.prog_io_util.c"
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

#line 3669 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 3674 "parse_tree.prog_io_util.c"
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

#line 3689 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 3694 "parse_tree.prog_io_util.c"
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

#line 3709 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_0
};

#line 3714 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_1
};

#line 3719 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_2[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_2
};

#line 3724 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_3[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_3
};

#line 3729 "parse_tree.prog_io_util.c"
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

#line 3753 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_dot_colon_var_1[4] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_3,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_2,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_1
};

#line 3761 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_dot_colon_var_1[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3769 "parse_tree.prog_io_util.c"
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

#line 3786 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 3791 "parse_tree.prog_io_util.c"
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

#line 3806 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 3811 "parse_tree.prog_io_util.c"
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

#line 3826 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_0
};

#line 3831 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_1
};

#line 3836 "parse_tree.prog_io_util.c"
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

#line 3850 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_var_1[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_1
};

#line 3856 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_var_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3862 "parse_tree.prog_io_util.c"
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

#line 3879 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe1_1__pseudo_1 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 3887 "parse_tree.prog_io_util.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_parse_tree__prog_io_util__pti_maybe1_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe1_1__pseudo_1
  }
};

#line 3897 "parse_tree.prog_io_util.c"
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

#line 3914 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_0 = {
  (MR_String) "quant_type_exist",
  (MR_Integer) 0
};

#line 3920 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_1 = {
  (MR_String) "quant_type_univ",
  (MR_Integer) 1
};

#line 3926 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_value_ordered_quantifier_type_0[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_1
};

#line 3932 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_name_ordered_quantifier_type_0[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_1
};

#line 3938 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_quantifier_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3944 "parse_tree.prog_io_util.c"
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

#line 3961 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3969 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3978 "parse_tree.prog_io_util.c"
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

#line 3995 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 4003 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 4012 "parse_tree.prog_io_util.c"
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

#line 4029 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____allow_constrained_inst_var_0_0_10001(
#line 4032 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4034 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 4036 "parse_tree.prog_io_util.c"
{
#line 4038 "parse_tree.prog_io_util.c"
  {
#line 4040 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 4043 "parse_tree.prog_io_util.c"
    {
#line 4045 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____allow_constrained_inst_var_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 4048 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 4050 "parse_tree.prog_io_util.c"
  }
#line 4052 "parse_tree.prog_io_util.c"
}

#line 4055 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____allow_constrained_inst_var_0_0_10001(
#line 4058 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 4060 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 4062 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 4064 "parse_tree.prog_io_util.c"
{
#line 4066 "parse_tree.prog_io_util.c"
  {
#line 4068 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 4071 "parse_tree.prog_io_util.c"
    {
#line 4073 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____allow_constrained_inst_var_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 4076 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 4078 "parse_tree.prog_io_util.c"
  }
#line 4080 "parse_tree.prog_io_util.c"
}

#line 4083 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____decl_attribute_0_0_10001(
#line 4086 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4088 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 4090 "parse_tree.prog_io_util.c"
{
#line 4092 "parse_tree.prog_io_util.c"
  {
#line 4094 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 4097 "parse_tree.prog_io_util.c"
    {
#line 4099 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____decl_attribute_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 4102 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 4104 "parse_tree.prog_io_util.c"
  }
#line 4106 "parse_tree.prog_io_util.c"
}

#line 4109 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____decl_attribute_0_0_10001(
#line 4112 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 4114 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 4116 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 4118 "parse_tree.prog_io_util.c"
{
#line 4120 "parse_tree.prog_io_util.c"
  {
#line 4122 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 4125 "parse_tree.prog_io_util.c"
    {
#line 4127 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____decl_attribute_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 4130 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 4132 "parse_tree.prog_io_util.c"
  }
#line 4134 "parse_tree.prog_io_util.c"
}

#line 4137 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____decl_attrs_0_0_10001(
#line 4140 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4142 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 4144 "parse_tree.prog_io_util.c"
{
#line 4146 "parse_tree.prog_io_util.c"
  {
#line 4148 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 4151 "parse_tree.prog_io_util.c"
    {
#line 4153 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____decl_attrs_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 4156 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 4158 "parse_tree.prog_io_util.c"
  }
#line 4160 "parse_tree.prog_io_util.c"
}

#line 4163 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____decl_attrs_0_0_10001(
#line 4166 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 4168 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 4170 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 4172 "parse_tree.prog_io_util.c"
{
#line 4174 "parse_tree.prog_io_util.c"
  {
#line 4176 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 4179 "parse_tree.prog_io_util.c"
    {
#line 4181 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____decl_attrs_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 4184 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 4186 "parse_tree.prog_io_util.c"
  }
#line 4188 "parse_tree.prog_io_util.c"
}

#line 4191 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_inst_kind_1_0_10001(
#line 4194 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4196 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 4198 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 4200 "parse_tree.prog_io_util.c"
{
#line 4202 "parse_tree.prog_io_util.c"
  {
#line 4204 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 4207 "parse_tree.prog_io_util.c"
    {
#line 4209 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____known_compound_inst_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 4212 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 4214 "parse_tree.prog_io_util.c"
  }
#line 4216 "parse_tree.prog_io_util.c"
}

#line 4219 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_inst_kind_1_0_10001(
#line 4222 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4224 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 4226 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 4228 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 4230 "parse_tree.prog_io_util.c"
{
#line 4232 "parse_tree.prog_io_util.c"
  {
#line 4234 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 4237 "parse_tree.prog_io_util.c"
    {
#line 4239 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____known_compound_inst_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 4242 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 4244 "parse_tree.prog_io_util.c"
  }
#line 4246 "parse_tree.prog_io_util.c"
}

#line 4249 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_type_kind_1_0_10001(
#line 4252 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4254 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 4256 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 4258 "parse_tree.prog_io_util.c"
{
#line 4260 "parse_tree.prog_io_util.c"
  {
#line 4262 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 4265 "parse_tree.prog_io_util.c"
    {
#line 4267 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____known_compound_type_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 4270 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 4272 "parse_tree.prog_io_util.c"
  }
#line 4274 "parse_tree.prog_io_util.c"
}

#line 4277 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_type_kind_1_0_10001(
#line 4280 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4282 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 4284 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 4286 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 4288 "parse_tree.prog_io_util.c"
{
#line 4290 "parse_tree.prog_io_util.c"
  {
#line 4292 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 4295 "parse_tree.prog_io_util.c"
    {
#line 4297 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____known_compound_type_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 4300 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 4302 "parse_tree.prog_io_util.c"
  }
#line 4304 "parse_tree.prog_io_util.c"
}

#line 4307 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_inst_kind_1_0_10001(
#line 4310 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4312 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 4314 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 4316 "parse_tree.prog_io_util.c"
{
#line 4318 "parse_tree.prog_io_util.c"
  {
#line 4320 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 4323 "parse_tree.prog_io_util.c"
    {
#line 4325 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____known_inst_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 4328 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 4330 "parse_tree.prog_io_util.c"
  }
#line 4332 "parse_tree.prog_io_util.c"
}

#line 4335 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_inst_kind_1_0_10001(
#line 4338 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4340 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 4342 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 4344 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 4346 "parse_tree.prog_io_util.c"
{
#line 4348 "parse_tree.prog_io_util.c"
  {
#line 4350 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 4353 "parse_tree.prog_io_util.c"
    {
#line 4355 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____known_inst_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 4358 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 4360 "parse_tree.prog_io_util.c"
  }
#line 4362 "parse_tree.prog_io_util.c"
}

#line 4365 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_type_kind_1_0_10001(
#line 4368 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4370 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 4372 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 4374 "parse_tree.prog_io_util.c"
{
#line 4376 "parse_tree.prog_io_util.c"
  {
#line 4378 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 4381 "parse_tree.prog_io_util.c"
    {
#line 4383 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____known_type_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 4386 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 4388 "parse_tree.prog_io_util.c"
  }
#line 4390 "parse_tree.prog_io_util.c"
}

#line 4393 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_type_kind_1_0_10001(
#line 4396 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4398 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 4400 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 4402 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 4404 "parse_tree.prog_io_util.c"
{
#line 4406 "parse_tree.prog_io_util.c"
  {
#line 4408 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 4411 "parse_tree.prog_io_util.c"
    {
#line 4413 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____known_type_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 4416 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 4418 "parse_tree.prog_io_util.c"
  }
#line 4420 "parse_tree.prog_io_util.c"
}

#line 4423 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe1_1_0_10001(
#line 4426 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4428 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 4430 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 4432 "parse_tree.prog_io_util.c"
{
#line 4434 "parse_tree.prog_io_util.c"
  {
#line 4436 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 4439 "parse_tree.prog_io_util.c"
    {
#line 4441 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe1_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 4444 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 4446 "parse_tree.prog_io_util.c"
  }
#line 4448 "parse_tree.prog_io_util.c"
}

#line 4451 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe1_1_0_10001(
#line 4454 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4456 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 4458 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 4460 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 4462 "parse_tree.prog_io_util.c"
{
#line 4464 "parse_tree.prog_io_util.c"
  {
#line 4466 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 4469 "parse_tree.prog_io_util.c"
    {
#line 4471 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe1_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 4474 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 4476 "parse_tree.prog_io_util.c"
  }
#line 4478 "parse_tree.prog_io_util.c"
}

#line 4481 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe2_2_0_10001(
#line 4484 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4486 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 4488 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 4490 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 4492 "parse_tree.prog_io_util.c"
{
#line 4494 "parse_tree.prog_io_util.c"
  {
#line 4496 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 4499 "parse_tree.prog_io_util.c"
    {
#line 4501 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe2_2_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 4504 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 4506 "parse_tree.prog_io_util.c"
  }
#line 4508 "parse_tree.prog_io_util.c"
}

#line 4511 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe2_2_0_10001(
#line 4514 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4516 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 4518 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_3,
#line 4520 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 4522 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5)
#line 4524 "parse_tree.prog_io_util.c"
{
#line 4526 "parse_tree.prog_io_util.c"
  {
#line 4528 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 4531 "parse_tree.prog_io_util.c"
    {
#line 4533 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe2_2_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_5));
    }
#line 4536 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 4538 "parse_tree.prog_io_util.c"
  }
#line 4540 "parse_tree.prog_io_util.c"
}

#line 4543 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe3_3_0_10001(
#line 4546 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4548 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 4550 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 4552 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 4554 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5)
#line 4556 "parse_tree.prog_io_util.c"
{
#line 4558 "parse_tree.prog_io_util.c"
  {
#line 4560 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 4563 "parse_tree.prog_io_util.c"
    {
#line 4565 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe3_3_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_5));
    }
#line 4568 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 4570 "parse_tree.prog_io_util.c"
  }
#line 4572 "parse_tree.prog_io_util.c"
}

#line 4575 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe3_3_0_10001(
#line 4578 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4580 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 4582 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 4584 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_4,
#line 4586 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5,
#line 4588 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_6)
#line 4590 "parse_tree.prog_io_util.c"
{
#line 4592 "parse_tree.prog_io_util.c"
  {
#line 4594 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 4597 "parse_tree.prog_io_util.c"
    {
#line 4599 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe3_3_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_5), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_6));
    }
#line 4602 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_4 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 4604 "parse_tree.prog_io_util.c"
  }
#line 4606 "parse_tree.prog_io_util.c"
}

#line 4609 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe4_4_0_10001(
#line 4612 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4614 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 4616 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 4618 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 4620 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5,
#line 4622 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_6)
#line 4624 "parse_tree.prog_io_util.c"
{
#line 4626 "parse_tree.prog_io_util.c"
  {
#line 4628 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 4631 "parse_tree.prog_io_util.c"
    {
#line 4633 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe4_4_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_5), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_6));
    }
#line 4636 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 4638 "parse_tree.prog_io_util.c"
  }
#line 4640 "parse_tree.prog_io_util.c"
}

#line 4643 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe4_4_0_10001(
#line 4646 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4648 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 4650 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 4652 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 4654 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_5,
#line 4656 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_6,
#line 4658 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_7)
#line 4660 "parse_tree.prog_io_util.c"
{
#line 4662 "parse_tree.prog_io_util.c"
  {
#line 4664 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 4667 "parse_tree.prog_io_util.c"
    {
#line 4669 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe4_4_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_6), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_7));
    }
#line 4672 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_5 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 4674 "parse_tree.prog_io_util.c"
  }
#line 4676 "parse_tree.prog_io_util.c"
}

#line 4679 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_1_0_10001(
#line 4682 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4684 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 4686 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 4688 "parse_tree.prog_io_util.c"
{
#line 4690 "parse_tree.prog_io_util.c"
  {
#line 4692 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 4695 "parse_tree.prog_io_util.c"
    {
#line 4697 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe_functor_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 4700 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 4702 "parse_tree.prog_io_util.c"
  }
#line 4704 "parse_tree.prog_io_util.c"
}

#line 4707 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_1_0_10001(
#line 4710 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4712 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 4714 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 4716 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 4718 "parse_tree.prog_io_util.c"
{
#line 4720 "parse_tree.prog_io_util.c"
  {
#line 4722 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 4725 "parse_tree.prog_io_util.c"
    {
#line 4727 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe_functor_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 4730 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 4732 "parse_tree.prog_io_util.c"
  }
#line 4734 "parse_tree.prog_io_util.c"
}

#line 4737 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_0_0_10001(
#line 4740 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4742 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 4744 "parse_tree.prog_io_util.c"
{
#line 4746 "parse_tree.prog_io_util.c"
  {
#line 4748 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 4751 "parse_tree.prog_io_util.c"
    {
#line 4753 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe_functor_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 4756 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 4758 "parse_tree.prog_io_util.c"
  }
#line 4760 "parse_tree.prog_io_util.c"
}

#line 4763 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_0_0_10001(
#line 4766 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 4768 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 4770 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 4772 "parse_tree.prog_io_util.c"
{
#line 4774 "parse_tree.prog_io_util.c"
  {
#line 4776 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 4779 "parse_tree.prog_io_util.c"
    {
#line 4781 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe_functor_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 4784 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 4786 "parse_tree.prog_io_util.c"
  }
#line 4788 "parse_tree.prog_io_util.c"
}

#line 4791 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_pred_or_func_1_0_10001(
#line 4794 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4796 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 4798 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 4800 "parse_tree.prog_io_util.c"
{
#line 4802 "parse_tree.prog_io_util.c"
  {
#line 4804 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 4807 "parse_tree.prog_io_util.c"
    {
#line 4809 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe_pred_or_func_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 4812 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 4814 "parse_tree.prog_io_util.c"
  }
#line 4816 "parse_tree.prog_io_util.c"
}

#line 4819 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_pred_or_func_1_0_10001(
#line 4822 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4824 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 4826 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 4828 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 4830 "parse_tree.prog_io_util.c"
{
#line 4832 "parse_tree.prog_io_util.c"
  {
#line 4834 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 4837 "parse_tree.prog_io_util.c"
    {
#line 4839 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe_pred_or_func_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 4842 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 4844 "parse_tree.prog_io_util.c"
  }
#line 4846 "parse_tree.prog_io_util.c"
}

#line 4849 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0_10001(
#line 4852 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4854 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 4856 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 4858 "parse_tree.prog_io_util.c"
{
#line 4860 "parse_tree.prog_io_util.c"
  {
#line 4862 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 4865 "parse_tree.prog_io_util.c"
    {
#line 4867 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 4870 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 4872 "parse_tree.prog_io_util.c"
  }
#line 4874 "parse_tree.prog_io_util.c"
}

#line 4877 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0_10001(
#line 4880 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4882 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 4884 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 4886 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 4888 "parse_tree.prog_io_util.c"
{
#line 4890 "parse_tree.prog_io_util.c"
  {
#line 4892 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 4895 "parse_tree.prog_io_util.c"
    {
#line 4897 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 4900 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 4902 "parse_tree.prog_io_util.c"
  }
#line 4904 "parse_tree.prog_io_util.c"
}

#line 4907 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_var_1_0_10001(
#line 4910 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4912 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 4914 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 4916 "parse_tree.prog_io_util.c"
{
#line 4918 "parse_tree.prog_io_util.c"
  {
#line 4920 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 4923 "parse_tree.prog_io_util.c"
    {
#line 4925 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____ordinary_state_var_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 4928 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 4930 "parse_tree.prog_io_util.c"
  }
#line 4932 "parse_tree.prog_io_util.c"
}

#line 4935 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_var_1_0_10001(
#line 4938 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4940 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 4942 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 4944 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 4946 "parse_tree.prog_io_util.c"
{
#line 4948 "parse_tree.prog_io_util.c"
  {
#line 4950 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 4953 "parse_tree.prog_io_util.c"
    {
#line 4955 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____ordinary_state_var_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 4958 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 4960 "parse_tree.prog_io_util.c"
  }
#line 4962 "parse_tree.prog_io_util.c"
}

#line 4965 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____parser_1_0_10001(
#line 4968 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4970 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 4972 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 4974 "parse_tree.prog_io_util.c"
{
#line 4976 "parse_tree.prog_io_util.c"
  {
#line 4978 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 4981 "parse_tree.prog_io_util.c"
    {
#line 4983 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____parser_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 4986 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 4988 "parse_tree.prog_io_util.c"
  }
#line 4990 "parse_tree.prog_io_util.c"
}

#line 4993 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____parser_1_0_10001(
#line 4996 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4998 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 5000 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 5002 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 5004 "parse_tree.prog_io_util.c"
{
#line 5006 "parse_tree.prog_io_util.c"
  {
#line 5008 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 5011 "parse_tree.prog_io_util.c"
    {
#line 5013 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____parser_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 5016 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 5018 "parse_tree.prog_io_util.c"
  }
#line 5020 "parse_tree.prog_io_util.c"
}

#line 5023 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____quantifier_type_0_0_10001(
#line 5026 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 5028 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 5030 "parse_tree.prog_io_util.c"
{
#line 5032 "parse_tree.prog_io_util.c"
  {
#line 5034 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 5037 "parse_tree.prog_io_util.c"
    {
#line 5039 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____quantifier_type_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 5042 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 5044 "parse_tree.prog_io_util.c"
  }
#line 5046 "parse_tree.prog_io_util.c"
}

#line 5049 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____quantifier_type_0_0_10001(
#line 5052 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 5054 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 5056 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 5058 "parse_tree.prog_io_util.c"
{
#line 5060 "parse_tree.prog_io_util.c"
  {
#line 5062 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 5065 "parse_tree.prog_io_util.c"
    {
#line 5067 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____quantifier_type_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 5070 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 5072 "parse_tree.prog_io_util.c"
  }
#line 5074 "parse_tree.prog_io_util.c"
}

#line 5077 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2pvar_0_0_10001(
#line 5080 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 5082 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 5084 "parse_tree.prog_io_util.c"
{
#line 5086 "parse_tree.prog_io_util.c"
  {
#line 5088 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 5091 "parse_tree.prog_io_util.c"
    {
#line 5093 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____var2pvar_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 5096 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 5098 "parse_tree.prog_io_util.c"
  }
#line 5100 "parse_tree.prog_io_util.c"
}

#line 5103 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____var2pvar_0_0_10001(
#line 5106 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 5108 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 5110 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 5112 "parse_tree.prog_io_util.c"
{
#line 5114 "parse_tree.prog_io_util.c"
  {
#line 5116 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 5119 "parse_tree.prog_io_util.c"
    {
#line 5121 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____var2pvar_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 5124 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 5126 "parse_tree.prog_io_util.c"
  }
#line 5128 "parse_tree.prog_io_util.c"
}

#line 5131 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2tvar_0_0_10001(
#line 5134 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 5136 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 5138 "parse_tree.prog_io_util.c"
{
#line 5140 "parse_tree.prog_io_util.c"
  {
#line 5142 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 5145 "parse_tree.prog_io_util.c"
    {
#line 5147 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____var2tvar_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 5150 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 5152 "parse_tree.prog_io_util.c"
  }
#line 5154 "parse_tree.prog_io_util.c"
}

#line 5157 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____var2tvar_0_0_10001(
#line 5160 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 5162 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 5164 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 5166 "parse_tree.prog_io_util.c"
{
#line 5168 "parse_tree.prog_io_util.c"
  {
#line 5170 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 5173 "parse_tree.prog_io_util.c"
    {
#line 5175 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____var2tvar_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 5178 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 5180 "parse_tree.prog_io_util.c"
  }
#line 5182 "parse_tree.prog_io_util.c"
}

#line 1229 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(
#line 1229 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Op_5,
#line 1229 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_6,
#line 1229 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__List0_7,
#line 1229 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__OneOrMore_8)
#line 1229 "prog_io_util.m"
{
#line 1237 "prog_io_util.m"
  while (MR_TRUE)
#line 1237 "prog_io_util.m"
    {
#line 1237 "prog_io_util.m"
      /* tailcall optimized into a loop */
#line 1237 "prog_io_util.m"
      {
#line 1237 "prog_io_util.m"
        MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_6)) == (MR_mktag((MR_Integer) 0)));
#line 1237 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__L_9;
#line 1237 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__R_10;
#line 1233 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_14_14;
#line 1233 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_15_15;
#line 1233 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_16_16;
#line 1233 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_17_17;
#line 1233 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_21_21;
#line 1233 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util___Context_11;

#line 1233 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1233 "prog_io_util.m"
          {
#line 1233 "prog_io_util.m"
            parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_6, (MR_Integer) 0)));
#line 1233 "prog_io_util.m"
            parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_6, (MR_Integer) 1)));
#line 1233 "prog_io_util.m"
            parse_tree__prog_io_util___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_6, (MR_Integer) 2)));
#line 1233 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_14_14)) == (MR_mktag((MR_Integer) 0)));
#line 1233 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1233 "prog_io_util.m"
              {
#line 1233 "prog_io_util.m"
                parse_tree__prog_io_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_14_14, (MR_Integer) 0)));
#line 1233 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Op_5, parse_tree__prog_io_util__V_21_21) == 0);
#line 1233 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1233 "prog_io_util.m"
                  {
#line 1233 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 1233 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1233 "prog_io_util.m"
                      {
#line 1233 "prog_io_util.m"
                        parse_tree__prog_io_util__L_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 0)));
#line 1233 "prog_io_util.m"
                        parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 1)));
#line 1233 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 1233 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1233 "prog_io_util.m"
                          {
#line 1233 "prog_io_util.m"
                            parse_tree__prog_io_util__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
#line 1233 "prog_io_util.m"
                            parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
#line 1233 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1233 "prog_io_util.m"
                          }
#line 1233 "prog_io_util.m"
                      }
#line 1233 "prog_io_util.m"
                  }
#line 1233 "prog_io_util.m"
              }
#line 1233 "prog_io_util.m"
          }
#line 1237 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1235 "prog_io_util.m"
          {
#line 1235 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__RHead_12;
#line 1235 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__RTail_13;
#line 1235 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_18_18;
#line 1235 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_19_19;

#line 1234 "prog_io_util.m"
            {
#line 1234 "prog_io_util.m"
              parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(parse_tree__prog_io_util__Op_5, parse_tree__prog_io_util__R_10, parse_tree__prog_io_util__List0_7, &parse_tree__prog_io_util__V_18_18);
            }
#line 1235 "prog_io_util.m"
            parse_tree__prog_io_util__RHead_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_18_18, (MR_Integer) 0)));
#line 1235 "prog_io_util.m"
            parse_tree__prog_io_util__RTail_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_18_18, (MR_Integer) 1)));
#line 1236 "prog_io_util.m"
            {
#line 1236 "prog_io_util.m"
              parse_tree__prog_io_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1236 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 0) = ((MR_Box) (parse_tree__prog_io_util__RHead_12));
#line 1236 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io_util__RTail_13));
#line 1236 "prog_io_util.m"
            }
#line 1236 "prog_io_util.m"
            /* direct tailcall eliminated */
#line 1236 "prog_io_util.m"
            {
#line 1236 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Term__tmp_copy_6 = parse_tree__prog_io_util__L_9;
#line 1236 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__List0__tmp_copy_7 = parse_tree__prog_io_util__V_19_19;

#line 1236 "prog_io_util.m"
              parse_tree__prog_io_util__List0_7 = parse_tree__prog_io_util__List0__tmp_copy_7;
#line 1236 "prog_io_util.m"
              parse_tree__prog_io_util__Term_6 = parse_tree__prog_io_util__Term__tmp_copy_6;
#line 1236 "prog_io_util.m"
            }
#line 1236 "prog_io_util.m"
            continue;
#line 1235 "prog_io_util.m"
          }
#line 1237 "prog_io_util.m"
        else
#line 1238 "prog_io_util.m"
          {
#line 1238 "prog_io_util.m"
            MR_Word base;
#line 1238 "prog_io_util.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1238 "prog_io_util.m"
            *parse_tree__prog_io_util__OneOrMore_8 = base;
#line 1238 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Term_6));
#line 1238 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__List0_7));
#line 1238 "prog_io_util.m"
          }
#line 1237 "prog_io_util.m"
      }
#line 1237 "prog_io_util.m"
      break;
#line 1237 "prog_io_util.m"
    }
#line 1229 "prog_io_util.m"
}

#line 922 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
#line 922 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Name_4,
#line 922 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Args_5,
#line 922 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__KnownInst_6)
#line 922 "prog_io_util.m"
{
#line 966 "prog_io_util.m"
  {
#line 966 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 966 "prog_io_util.m"
    {
#line 966 "prog_io_util.m"
      MR_Integer parse_tree__prog_io_util__case_num_0 = (MR_Integer) -1;

#line 966 "prog_io_util.m"
#line 966 "prog_io_util.m"
      switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 0)) {
#line 966 "prog_io_util.m"
        case (MR_Integer) 61:
#line 966 "prog_io_util.m"
          if (MR_offset_streq(1, parse_tree__prog_io_util__Name_4, (MR_String) "=<"))
#line 966 "prog_io_util.m"
            parse_tree__prog_io_util__case_num_0 = (MR_Integer) 0;
#line 966 "prog_io_util.m"
          break;
#line 966 "prog_io_util.m"
        case (MR_Integer) 97:
#line 966 "prog_io_util.m"
          if (MR_offset_streq(1, parse_tree__prog_io_util__Name_4, (MR_String) "any"))
#line 966 "prog_io_util.m"
            parse_tree__prog_io_util__case_num_0 = (MR_Integer) 1;
#line 966 "prog_io_util.m"
          break;
#line 966 "prog_io_util.m"
        case (MR_Integer) 98:
#line 966 "prog_io_util.m"
          if (((((((((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 1)) == (MR_Integer) 111)) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 2)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 3)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 4)) == (MR_Integer) 100))))
#line 966 "prog_io_util.m"
#line 966 "prog_io_util.m"
            switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 5)) {
#line 966 "prog_io_util.m"
              case (MR_Integer) 0:
#line 966 "prog_io_util.m"
                parse_tree__prog_io_util__case_num_0 = (MR_Integer) 2;
#line 966 "prog_io_util.m"
                break;
#line 966 "prog_io_util.m"
              case (MR_Integer) 95:
#line 966 "prog_io_util.m"
                if (MR_offset_streq(6, parse_tree__prog_io_util__Name_4, (MR_String) "bound_unique"))
#line 966 "prog_io_util.m"
                  parse_tree__prog_io_util__case_num_0 = (MR_Integer) 3;
#line 966 "prog_io_util.m"
                break;
#line 966 "prog_io_util.m"
            }
#line 966 "prog_io_util.m"
          break;
#line 966 "prog_io_util.m"
        case (MR_Integer) 99:
#line 966 "prog_io_util.m"
          if (((((((((((((((((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 1)) == (MR_Integer) 108)) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 2)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 3)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 4)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 5)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 6)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 7)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 8)) == (MR_Integer) 100))))
#line 966 "prog_io_util.m"
#line 966 "prog_io_util.m"
            switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 9)) {
#line 966 "prog_io_util.m"
              case (MR_Integer) 0:
#line 966 "prog_io_util.m"
                parse_tree__prog_io_util__case_num_0 = (MR_Integer) 4;
#line 966 "prog_io_util.m"
                break;
#line 966 "prog_io_util.m"
              case (MR_Integer) 95:
#line 966 "prog_io_util.m"
                if (MR_offset_streq(10, parse_tree__prog_io_util__Name_4, (MR_String) "clobbered_any"))
#line 966 "prog_io_util.m"
                  parse_tree__prog_io_util__case_num_0 = (MR_Integer) 5;
#line 966 "prog_io_util.m"
                break;
#line 966 "prog_io_util.m"
            }
#line 966 "prog_io_util.m"
          break;
#line 966 "prog_io_util.m"
        case (MR_Integer) 102:
#line 966 "prog_io_util.m"
          if (MR_offset_streq(1, parse_tree__prog_io_util__Name_4, (MR_String) "free"))
#line 966 "prog_io_util.m"
            parse_tree__prog_io_util__case_num_0 = (MR_Integer) 6;
#line 966 "prog_io_util.m"
          break;
#line 966 "prog_io_util.m"
        case (MR_Integer) 103:
#line 966 "prog_io_util.m"
          if (MR_offset_streq(1, parse_tree__prog_io_util__Name_4, (MR_String) "ground"))
#line 966 "prog_io_util.m"
            parse_tree__prog_io_util__case_num_0 = (MR_Integer) 7;
#line 966 "prog_io_util.m"
          break;
#line 966 "prog_io_util.m"
        case (MR_Integer) 105:
#line 966 "prog_io_util.m"
          if (MR_offset_streq(1, parse_tree__prog_io_util__Name_4, (MR_String) "is"))
#line 966 "prog_io_util.m"
            parse_tree__prog_io_util__case_num_0 = (MR_Integer) 8;
#line 966 "prog_io_util.m"
          break;
#line 966 "prog_io_util.m"
        case (MR_Integer) 109:
#line 966 "prog_io_util.m"
          if (((((((((((((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 1)) == (MR_Integer) 111)) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 2)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 3)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 4)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 5)) == (MR_Integer) 121)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 6)) == (MR_Integer) 95))))
#line 966 "prog_io_util.m"
#line 966 "prog_io_util.m"
            switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 7)) {
#line 966 "prog_io_util.m"
              case (MR_Integer) 99:
#line 966 "prog_io_util.m"
                if (((((((((((((((((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 8)) == (MR_Integer) 108)) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 9)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 10)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 11)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 12)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 13)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 14)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 15)) == (MR_Integer) 100))))
#line 966 "prog_io_util.m"
#line 966 "prog_io_util.m"
                  switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 16)) {
#line 966 "prog_io_util.m"
                    case (MR_Integer) 0:
#line 966 "prog_io_util.m"
                      parse_tree__prog_io_util__case_num_0 = (MR_Integer) 9;
#line 966 "prog_io_util.m"
                      break;
#line 966 "prog_io_util.m"
                    case (MR_Integer) 95:
#line 966 "prog_io_util.m"
                      if (MR_offset_streq(17, parse_tree__prog_io_util__Name_4, (MR_String) "mostly_clobbered_any"))
#line 966 "prog_io_util.m"
                        parse_tree__prog_io_util__case_num_0 = (MR_Integer) 10;
#line 966 "prog_io_util.m"
                      break;
#line 966 "prog_io_util.m"
                  }
#line 966 "prog_io_util.m"
                break;
#line 966 "prog_io_util.m"
              case (MR_Integer) 117:
#line 966 "prog_io_util.m"
                if (((((((((((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 8)) == (MR_Integer) 110)) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 9)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 10)) == (MR_Integer) 113)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 11)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 12)) == (MR_Integer) 101))))
#line 966 "prog_io_util.m"
#line 966 "prog_io_util.m"
                  switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 13)) {
#line 966 "prog_io_util.m"
                    case (MR_Integer) 0:
#line 966 "prog_io_util.m"
                      parse_tree__prog_io_util__case_num_0 = (MR_Integer) 11;
#line 966 "prog_io_util.m"
                      break;
#line 966 "prog_io_util.m"
                    case (MR_Integer) 95:
#line 966 "prog_io_util.m"
                      if (MR_offset_streq(14, parse_tree__prog_io_util__Name_4, (MR_String) "mostly_unique_any"))
#line 966 "prog_io_util.m"
                        parse_tree__prog_io_util__case_num_0 = (MR_Integer) 12;
#line 966 "prog_io_util.m"
                      break;
#line 966 "prog_io_util.m"
                  }
#line 966 "prog_io_util.m"
                break;
#line 966 "prog_io_util.m"
            }
#line 966 "prog_io_util.m"
          break;
#line 966 "prog_io_util.m"
        case (MR_Integer) 110:
#line 966 "prog_io_util.m"
          if (MR_offset_streq(1, parse_tree__prog_io_util__Name_4, (MR_String) "not_reached"))
#line 966 "prog_io_util.m"
            parse_tree__prog_io_util__case_num_0 = (MR_Integer) 13;
#line 966 "prog_io_util.m"
          break;
#line 966 "prog_io_util.m"
        case (MR_Integer) 117:
#line 966 "prog_io_util.m"
          if (((((((((((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 1)) == (MR_Integer) 110)) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 2)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 3)) == (MR_Integer) 113)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 4)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 5)) == (MR_Integer) 101))))
#line 966 "prog_io_util.m"
#line 966 "prog_io_util.m"
            switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 6)) {
#line 966 "prog_io_util.m"
              case (MR_Integer) 0:
#line 966 "prog_io_util.m"
                parse_tree__prog_io_util__case_num_0 = (MR_Integer) 14;
#line 966 "prog_io_util.m"
                break;
#line 966 "prog_io_util.m"
              case (MR_Integer) 95:
#line 966 "prog_io_util.m"
                if (MR_offset_streq(7, parse_tree__prog_io_util__Name_4, (MR_String) "unique_any"))
#line 966 "prog_io_util.m"
                  parse_tree__prog_io_util__case_num_0 = (MR_Integer) 15;
#line 966 "prog_io_util.m"
                break;
#line 966 "prog_io_util.m"
            }
#line 966 "prog_io_util.m"
          break;
#line 966 "prog_io_util.m"
      }
#line 966 "prog_io_util.m"
#line 966 "prog_io_util.m"
      switch (parse_tree__prog_io_util__case_num_0) {
#line 966 "prog_io_util.m"
        default:
#line 966 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 966 "prog_io_util.m"
          break;
#line 966 "prog_io_util.m"
        case (MR_Integer) 0:
#line 1005 "prog_io_util.m"
          {
#line 1005 "prog_io_util.m"
            /* case "=<" */
#line 1005 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1009 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1005 "prog_io_util.m"
            else
#line 1011 "prog_io_util.m"
              {
#line 1011 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 1011 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_181_181 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 1011 "prog_io_util.m"
                if ((parse_tree__prog_io_util__V_180_180 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1010 "prog_io_util.m"
                  *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1011 "prog_io_util.m"
                else
#line 1011 "prog_io_util.m"
                  {
#line 1011 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_180_180, (MR_Integer) 1)));
#line 1011 "prog_io_util.m"
                    MR_Box parse_tree__prog_io_util__V_193_193 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_180_180, (MR_Integer) 0));

#line 1011 "prog_io_util.m"
                    if ((parse_tree__prog_io_util__V_192_192 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1012 "prog_io_util.m"
                      {
#line 1012 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_44_44;

#line 1013 "prog_io_util.m"
                        {
#line 1013 "prog_io_util.m"
                          parse_tree__prog_io_util__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1013 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_44_44, 0) = parse_tree__prog_io_util__V_181_181;
#line 1013 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_44_44, 1) = parse_tree__prog_io_util__V_193_193;
#line 1013 "prog_io_util.m"
                        }
#line 1013 "prog_io_util.m"
                        {
#line 1013 "prog_io_util.m"
                          MR_Word base;
#line 1013 "prog_io_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1013 "prog_io_util.m"
                          *parse_tree__prog_io_util__KnownInst_6 = base;
#line 1013 "prog_io_util.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_44_44));
#line 1013 "prog_io_util.m"
                        }
#line 1012 "prog_io_util.m"
                      }
#line 1011 "prog_io_util.m"
                    else
#line 1016 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1011 "prog_io_util.m"
                  }
#line 1011 "prog_io_util.m"
              }
#line 1005 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1005 "prog_io_util.m"
          }
#line 966 "prog_io_util.m"
          break;
#line 966 "prog_io_util.m"
        case (MR_Integer) 1:
#line 958 "prog_io_util.m"
          {
#line 958 "prog_io_util.m"
            /* case "any" */
#line 962 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 960 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[21]);
#line 962 "prog_io_util.m"
            else
#line 964 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 958 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 958 "prog_io_util.m"
          }
#line 966 "prog_io_util.m"
          break;
#line 966 "prog_io_util.m"
        case (MR_Integer) 2:
#line 1019 "prog_io_util.m"
          {
#line 1019 "prog_io_util.m"
            /* case "bound" */
#line 1019 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1021 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1019 "prog_io_util.m"
            else
#line 1023 "prog_io_util.m"
              {
#line 1023 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 1023 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_183_183 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 1023 "prog_io_util.m"
                if ((parse_tree__prog_io_util__V_182_182 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1024 "prog_io_util.m"
                  {
#line 1024 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_39_39;

#line 1025 "prog_io_util.m"
                    {
#line 1025 "prog_io_util.m"
                      parse_tree__prog_io_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1025 "prog_io_util.m"
                      MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__V_39_39, 0) = parse_tree__prog_io_util__V_183_183;
#line 1025 "prog_io_util.m"
                    }
#line 1025 "prog_io_util.m"
                    {
#line 1025 "prog_io_util.m"
                      MR_Word base;
#line 1025 "prog_io_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1025 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownInst_6 = base;
#line 1025 "prog_io_util.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_39_39));
#line 1025 "prog_io_util.m"
                    }
#line 1024 "prog_io_util.m"
                  }
#line 1023 "prog_io_util.m"
                else
#line 1028 "prog_io_util.m"
                  *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1023 "prog_io_util.m"
              }
#line 1019 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1019 "prog_io_util.m"
          }
#line 966 "prog_io_util.m"
          break;
#line 966 "prog_io_util.m"
        case (MR_Integer) 3:
#line 1031 "prog_io_util.m"
          {
#line 1031 "prog_io_util.m"
            /* case "bound_unique" */
#line 1031 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1035 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1031 "prog_io_util.m"
            else
#line 1037 "prog_io_util.m"
              {
#line 1037 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 1037 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_185_185 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 1037 "prog_io_util.m"
                if ((parse_tree__prog_io_util__V_184_184 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1038 "prog_io_util.m"
                  {
#line 1038 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_36_36;

#line 1039 "prog_io_util.m"
                    {
#line 1039 "prog_io_util.m"
                      parse_tree__prog_io_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1039 "prog_io_util.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1039 "prog_io_util.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_36_36, 1) = parse_tree__prog_io_util__V_185_185;
#line 1039 "prog_io_util.m"
                    }
#line 1039 "prog_io_util.m"
                    {
#line 1039 "prog_io_util.m"
                      MR_Word base;
#line 1039 "prog_io_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1039 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownInst_6 = base;
#line 1039 "prog_io_util.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 1039 "prog_io_util.m"
                    }
#line 1038 "prog_io_util.m"
                  }
#line 1037 "prog_io_util.m"
                else
#line 1042 "prog_io_util.m"
                  *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1037 "prog_io_util.m"
              }
#line 1031 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1031 "prog_io_util.m"
          }
#line 966 "prog_io_util.m"
          break;
#line 966 "prog_io_util.m"
        case (MR_Integer) 4:
#line 958 "prog_io_util.m"
          {
#line 958 "prog_io_util.m"
            /* case "clobbered" */
#line 962 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 960 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[22]);
#line 962 "prog_io_util.m"
            else
#line 964 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 958 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 958 "prog_io_util.m"
          }
#line 966 "prog_io_util.m"
          break;
#line 966 "prog_io_util.m"
        case (MR_Integer) 5:
#line 958 "prog_io_util.m"
          {
#line 958 "prog_io_util.m"
            /* case "clobbered_any" */
#line 962 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 960 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[23]);
#line 962 "prog_io_util.m"
            else
#line 964 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 958 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 958 "prog_io_util.m"
          }
#line 966 "prog_io_util.m"
          break;
#line 966 "prog_io_util.m"
        case (MR_Integer) 6:
#line 958 "prog_io_util.m"
          {
#line 958 "prog_io_util.m"
            /* case "free" */
#line 962 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 960 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[24]);
#line 962 "prog_io_util.m"
            else
#line 964 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 958 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 958 "prog_io_util.m"
          }
#line 966 "prog_io_util.m"
          break;
#line 966 "prog_io_util.m"
        case (MR_Integer) 7:
#line 958 "prog_io_util.m"
          {
#line 958 "prog_io_util.m"
            /* case "ground" */
#line 962 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 960 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[25]);
#line 962 "prog_io_util.m"
            else
#line 964 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 958 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 958 "prog_io_util.m"
          }
#line 966 "prog_io_util.m"
          break;
#line 966 "prog_io_util.m"
        case (MR_Integer) 8:
#line 991 "prog_io_util.m"
          {
#line 991 "prog_io_util.m"
            /* case "is" */
#line 991 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 995 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 991 "prog_io_util.m"
            else
#line 997 "prog_io_util.m"
              {
#line 997 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 997 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_187_187 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 997 "prog_io_util.m"
                if ((parse_tree__prog_io_util__V_186_186 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 996 "prog_io_util.m"
                  *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 997 "prog_io_util.m"
                else
#line 997 "prog_io_util.m"
                  {
#line 997 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_186_186, (MR_Integer) 1)));
#line 997 "prog_io_util.m"
                    MR_Box parse_tree__prog_io_util__V_195_195 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_186_186, (MR_Integer) 0));

#line 997 "prog_io_util.m"
                    if ((parse_tree__prog_io_util__V_194_194 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 998 "prog_io_util.m"
                      {
#line 998 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_50_50;

#line 999 "prog_io_util.m"
                        {
#line 999 "prog_io_util.m"
                          parse_tree__prog_io_util__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 999 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_50_50, 0) = parse_tree__prog_io_util__V_187_187;
#line 999 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_50_50, 1) = parse_tree__prog_io_util__V_195_195;
#line 999 "prog_io_util.m"
                        }
#line 999 "prog_io_util.m"
                        {
#line 999 "prog_io_util.m"
                          MR_Word base;
#line 999 "prog_io_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 999 "prog_io_util.m"
                          *parse_tree__prog_io_util__KnownInst_6 = base;
#line 999 "prog_io_util.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_50_50));
#line 999 "prog_io_util.m"
                        }
#line 998 "prog_io_util.m"
                      }
#line 997 "prog_io_util.m"
                    else
#line 1002 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 997 "prog_io_util.m"
                  }
#line 997 "prog_io_util.m"
              }
#line 991 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 991 "prog_io_util.m"
          }
#line 966 "prog_io_util.m"
          break;
#line 966 "prog_io_util.m"
        case (MR_Integer) 9:
#line 958 "prog_io_util.m"
          {
#line 958 "prog_io_util.m"
            /* case "mostly_clobbered" */
#line 962 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 960 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[26]);
#line 962 "prog_io_util.m"
            else
#line 964 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 958 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 958 "prog_io_util.m"
          }
#line 966 "prog_io_util.m"
          break;
#line 966 "prog_io_util.m"
        case (MR_Integer) 10:
#line 958 "prog_io_util.m"
          {
#line 958 "prog_io_util.m"
            /* case "mostly_clobbered_any" */
#line 962 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 960 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[27]);
#line 962 "prog_io_util.m"
            else
#line 964 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 958 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 958 "prog_io_util.m"
          }
#line 966 "prog_io_util.m"
          break;
#line 966 "prog_io_util.m"
        case (MR_Integer) 11:
#line 979 "prog_io_util.m"
          {
#line 979 "prog_io_util.m"
            /* case "mostly_unique" */
#line 979 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 981 "prog_io_util.m"
              {
#line 982 "prog_io_util.m"
                *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[28]);
#line 981 "prog_io_util.m"
              }
#line 979 "prog_io_util.m"
            else
#line 983 "prog_io_util.m"
              {
#line 983 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 983 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_189_189 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 983 "prog_io_util.m"
                if ((parse_tree__prog_io_util__V_188_188 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 984 "prog_io_util.m"
                  {
#line 984 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_54_54;

#line 985 "prog_io_util.m"
                    {
#line 985 "prog_io_util.m"
                      parse_tree__prog_io_util__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 985 "prog_io_util.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 985 "prog_io_util.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_54_54, 1) = parse_tree__prog_io_util__V_189_189;
#line 985 "prog_io_util.m"
                    }
#line 985 "prog_io_util.m"
                    {
#line 985 "prog_io_util.m"
                      MR_Word base;
#line 985 "prog_io_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 985 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownInst_6 = base;
#line 985 "prog_io_util.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_54_54));
#line 985 "prog_io_util.m"
                    }
#line 984 "prog_io_util.m"
                  }
#line 983 "prog_io_util.m"
                else
#line 988 "prog_io_util.m"
                  *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 983 "prog_io_util.m"
              }
#line 979 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 979 "prog_io_util.m"
          }
#line 966 "prog_io_util.m"
          break;
#line 966 "prog_io_util.m"
        case (MR_Integer) 12:
#line 958 "prog_io_util.m"
          {
#line 958 "prog_io_util.m"
            /* case "mostly_unique_any" */
#line 962 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 960 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[29]);
#line 962 "prog_io_util.m"
            else
#line 964 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 958 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 958 "prog_io_util.m"
          }
#line 966 "prog_io_util.m"
          break;
#line 966 "prog_io_util.m"
        case (MR_Integer) 13:
#line 958 "prog_io_util.m"
          {
#line 958 "prog_io_util.m"
            /* case "not_reached" */
#line 962 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 960 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[30]);
#line 962 "prog_io_util.m"
            else
#line 964 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 958 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 958 "prog_io_util.m"
          }
#line 966 "prog_io_util.m"
          break;
#line 966 "prog_io_util.m"
        case (MR_Integer) 14:
#line 967 "prog_io_util.m"
          {
#line 967 "prog_io_util.m"
            /* case "unique" */
#line 967 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 969 "prog_io_util.m"
              {
#line 970 "prog_io_util.m"
                *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[31]);
#line 969 "prog_io_util.m"
              }
#line 967 "prog_io_util.m"
            else
#line 971 "prog_io_util.m"
              {
#line 971 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 971 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_191_191 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 971 "prog_io_util.m"
                if ((parse_tree__prog_io_util__V_190_190 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 972 "prog_io_util.m"
                  {
#line 972 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_60_60;

#line 973 "prog_io_util.m"
                    {
#line 973 "prog_io_util.m"
                      parse_tree__prog_io_util__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 973 "prog_io_util.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 973 "prog_io_util.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_60_60, 1) = parse_tree__prog_io_util__V_191_191;
#line 973 "prog_io_util.m"
                    }
#line 973 "prog_io_util.m"
                    {
#line 973 "prog_io_util.m"
                      MR_Word base;
#line 973 "prog_io_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 973 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownInst_6 = base;
#line 973 "prog_io_util.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_60_60));
#line 973 "prog_io_util.m"
                    }
#line 972 "prog_io_util.m"
                  }
#line 971 "prog_io_util.m"
                else
#line 976 "prog_io_util.m"
                  *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 971 "prog_io_util.m"
              }
#line 967 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 967 "prog_io_util.m"
          }
#line 966 "prog_io_util.m"
          break;
#line 966 "prog_io_util.m"
        case (MR_Integer) 15:
#line 958 "prog_io_util.m"
          {
#line 958 "prog_io_util.m"
            /* case "unique_any" */
#line 962 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 960 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[32]);
#line 962 "prog_io_util.m"
            else
#line 964 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 958 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 958 "prog_io_util.m"
          }
#line 966 "prog_io_util.m"
          break;
#line 966 "prog_io_util.m"
      }
#line 966 "prog_io_util.m"
    }
#line 966 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 966 "prog_io_util.m"
  }
#line 922 "prog_io_util.m"
}

#line 491 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_116_121_112_101_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
#line 491 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Name_4,
#line 491 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Args_5,
#line 491 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__KnownType_6)
#line 491 "prog_io_util.m"
{
#line 523 "prog_io_util.m"
  {
#line 523 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 523 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__slot_0;
#line 523 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__str_1;

#line 523 "prog_io_util.m"
    /* hashed string jump switch */
#line 523 "prog_io_util.m"
    /* compute the hash value of the input string */
#line 523 "prog_io_util.m"
    parse_tree__prog_io_util__slot_0 = ((MR_hash_string6(parse_tree__prog_io_util__Name_4)) & (MR_Integer) 31);
#line 523 "prog_io_util.m"
    /* hash chain loop */
#line 523 "prog_io_util.m"
    do
#line 523 "prog_io_util.m"
      {
#line 523 "prog_io_util.m"
        /* lookup the string for this hash slot */
#line 523 "prog_io_util.m"
        parse_tree__prog_io_util__str_1 = ((&parse_tree__prog_io_util_vector_common_6[7 + parse_tree__prog_io_util__slot_0]))->parse_tree__prog_io_util__vector_common_type_6_0__vct_6_f_0;
#line 523 "prog_io_util.m"
        /* did we find a match? */
#line 523 "prog_io_util.m"
        if ((((parse_tree__prog_io_util__str_1 != NULL)) && ((strcmp(parse_tree__prog_io_util__str_1, parse_tree__prog_io_util__Name_4) == 0))))
#line 523 "prog_io_util.m"
          {
#line 523 "prog_io_util.m"
            /* we found a match; dispatch to the corresponding code */
#line 523 "prog_io_util.m"
#line 523 "prog_io_util.m"
            switch (parse_tree__prog_io_util__slot_0) {
#line 523 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 523 "prog_io_util.m"
              case (MR_Integer) 0:
#line 562 "prog_io_util.m"
                {
#line 562 "prog_io_util.m"
                  /* case "" */
#line 562 "prog_io_util.m"
                  {
#line 562 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_21_21;

#line 563 "prog_io_util.m"
                    {
#line 563 "prog_io_util.m"
                      parse_tree__prog_io_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 563 "prog_io_util.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 563 "prog_io_util.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_21_21, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_5));
#line 563 "prog_io_util.m"
                    }
#line 563 "prog_io_util.m"
                    {
#line 563 "prog_io_util.m"
                      MR_Word base;
#line 563 "prog_io_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 563 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownType_6 = base;
#line 563 "prog_io_util.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_21_21));
#line 563 "prog_io_util.m"
                    }
#line 562 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 562 "prog_io_util.m"
                  }
#line 562 "prog_io_util.m"
                }
#line 523 "prog_io_util.m"
                break;
#line 523 "prog_io_util.m"
              case (MR_Integer) 1:
#line 515 "prog_io_util.m"
                {
#line 515 "prog_io_util.m"
                  /* case "string" */
#line 519 "prog_io_util.m"
                  if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 517 "prog_io_util.m"
                    {
#line 518 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[20]);
#line 517 "prog_io_util.m"
                    }
#line 519 "prog_io_util.m"
                  else
#line 521 "prog_io_util.m"
                    *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 515 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 515 "prog_io_util.m"
                }
#line 523 "prog_io_util.m"
                break;
#line 523 "prog_io_util.m"
              case (MR_Integer) 2:
#line 551 "prog_io_util.m"
                {
#line 551 "prog_io_util.m"
                  /* case "semipure" */
#line 557 "prog_io_util.m"
                  if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 555 "prog_io_util.m"
                    *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 557 "prog_io_util.m"
                  else
#line 557 "prog_io_util.m"
                    {
#line 557 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 557 "prog_io_util.m"
                      MR_Box parse_tree__prog_io_util__V_145_145 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 557 "prog_io_util.m"
                      if ((parse_tree__prog_io_util__V_144_144 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 558 "prog_io_util.m"
                        {
#line 558 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_95_95;

#line 559 "prog_io_util.m"
                          {
#line 559 "prog_io_util.m"
                            parse_tree__prog_io_util__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 559 "prog_io_util.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 559 "prog_io_util.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_95_95, 1) = ((MR_Box) ((MR_Integer) 1));
#line 559 "prog_io_util.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_95_95, 2) = parse_tree__prog_io_util__V_145_145;
#line 559 "prog_io_util.m"
                          }
#line 559 "prog_io_util.m"
                          {
#line 559 "prog_io_util.m"
                            MR_Word base;
#line 559 "prog_io_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 559 "prog_io_util.m"
                            *parse_tree__prog_io_util__KnownType_6 = base;
#line 559 "prog_io_util.m"
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_95_95));
#line 559 "prog_io_util.m"
                          }
#line 558 "prog_io_util.m"
                        }
#line 557 "prog_io_util.m"
                      else
#line 556 "prog_io_util.m"
                        *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 557 "prog_io_util.m"
                    }
#line 551 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 551 "prog_io_util.m"
                }
#line 523 "prog_io_util.m"
                break;
#line 523 "prog_io_util.m"
              case (MR_Integer) 3:
#line 515 "prog_io_util.m"
                {
#line 515 "prog_io_util.m"
                  /* case "float" */
#line 519 "prog_io_util.m"
                  if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 517 "prog_io_util.m"
                    {
#line 518 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[16]);
#line 517 "prog_io_util.m"
                    }
#line 519 "prog_io_util.m"
                  else
#line 521 "prog_io_util.m"
                    *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 515 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 515 "prog_io_util.m"
                }
#line 523 "prog_io_util.m"
                break;
#line 523 "prog_io_util.m"
              case (MR_Integer) 4:
#line 515 "prog_io_util.m"
                {
#line 515 "prog_io_util.m"
                  /* case "character" */
#line 519 "prog_io_util.m"
                  if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 517 "prog_io_util.m"
                    {
#line 518 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[14]);
#line 517 "prog_io_util.m"
                    }
#line 519 "prog_io_util.m"
                  else
#line 521 "prog_io_util.m"
                    *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 515 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 515 "prog_io_util.m"
                }
#line 523 "prog_io_util.m"
                break;
#line 523 "prog_io_util.m"
              case (MR_Integer) 5:
#line 551 "prog_io_util.m"
                {
#line 551 "prog_io_util.m"
                  /* case "impure" */
#line 557 "prog_io_util.m"
                  if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 555 "prog_io_util.m"
                    *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 557 "prog_io_util.m"
                  else
#line 557 "prog_io_util.m"
                    {
#line 557 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 557 "prog_io_util.m"
                      MR_Box parse_tree__prog_io_util__V_141_141 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 557 "prog_io_util.m"
                      if ((parse_tree__prog_io_util__V_140_140 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 558 "prog_io_util.m"
                        {
#line 558 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_23_23;

#line 559 "prog_io_util.m"
                          {
#line 559 "prog_io_util.m"
                            parse_tree__prog_io_util__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 559 "prog_io_util.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 559 "prog_io_util.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_23_23, 1) = ((MR_Box) ((MR_Integer) 2));
#line 559 "prog_io_util.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_23_23, 2) = parse_tree__prog_io_util__V_141_141;
#line 559 "prog_io_util.m"
                          }
#line 559 "prog_io_util.m"
                          {
#line 559 "prog_io_util.m"
                            MR_Word base;
#line 559 "prog_io_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 559 "prog_io_util.m"
                            *parse_tree__prog_io_util__KnownType_6 = base;
#line 559 "prog_io_util.m"
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_23_23));
#line 559 "prog_io_util.m"
                          }
#line 558 "prog_io_util.m"
                        }
#line 557 "prog_io_util.m"
                      else
#line 556 "prog_io_util.m"
                        *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 557 "prog_io_util.m"
                    }
#line 551 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 551 "prog_io_util.m"
                }
#line 523 "prog_io_util.m"
                break;
#line 523 "prog_io_util.m"
              case (MR_Integer) 8:
#line 515 "prog_io_util.m"
                {
#line 515 "prog_io_util.m"
                  /* case "int" */
#line 519 "prog_io_util.m"
                  if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 517 "prog_io_util.m"
                    {
#line 518 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[18]);
#line 517 "prog_io_util.m"
                    }
#line 519 "prog_io_util.m"
                  else
#line 521 "prog_io_util.m"
                    *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 515 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 515 "prog_io_util.m"
                }
#line 523 "prog_io_util.m"
                break;
#line 523 "prog_io_util.m"
              case (MR_Integer) 10:
#line 524 "prog_io_util.m"
                {
#line 524 "prog_io_util.m"
                  /* case "{}" */
#line 524 "prog_io_util.m"
                  {
#line 524 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_32_32;

#line 525 "prog_io_util.m"
                    {
#line 525 "prog_io_util.m"
                      parse_tree__prog_io_util__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 525 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io_util__Args_5));
#line 525 "prog_io_util.m"
                    }
#line 525 "prog_io_util.m"
                    {
#line 525 "prog_io_util.m"
                      MR_Word base;
#line 525 "prog_io_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 525 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownType_6 = base;
#line 525 "prog_io_util.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_32_32));
#line 525 "prog_io_util.m"
                    }
#line 524 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 524 "prog_io_util.m"
                  }
#line 524 "prog_io_util.m"
                }
#line 523 "prog_io_util.m"
                break;
#line 523 "prog_io_util.m"
              case (MR_Integer) 24:
#line 551 "prog_io_util.m"
                {
#line 551 "prog_io_util.m"
                  /* case "pure" */
#line 557 "prog_io_util.m"
                  if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 555 "prog_io_util.m"
                    *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 557 "prog_io_util.m"
                  else
#line 557 "prog_io_util.m"
                    {
#line 557 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 557 "prog_io_util.m"
                      MR_Box parse_tree__prog_io_util__V_143_143 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 557 "prog_io_util.m"
                      if ((parse_tree__prog_io_util__V_142_142 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 558 "prog_io_util.m"
                        {
#line 558 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_63_63;

#line 559 "prog_io_util.m"
                          {
#line 559 "prog_io_util.m"
                            parse_tree__prog_io_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 559 "prog_io_util.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 559 "prog_io_util.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_63_63, 1) = ((MR_Box) ((MR_Integer) 0));
#line 559 "prog_io_util.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_63_63, 2) = parse_tree__prog_io_util__V_143_143;
#line 559 "prog_io_util.m"
                          }
#line 559 "prog_io_util.m"
                          {
#line 559 "prog_io_util.m"
                            MR_Word base;
#line 559 "prog_io_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 559 "prog_io_util.m"
                            *parse_tree__prog_io_util__KnownType_6 = base;
#line 559 "prog_io_util.m"
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_63_63));
#line 559 "prog_io_util.m"
                          }
#line 558 "prog_io_util.m"
                        }
#line 557 "prog_io_util.m"
                      else
#line 556 "prog_io_util.m"
                        *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 557 "prog_io_util.m"
                    }
#line 551 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 551 "prog_io_util.m"
                }
#line 523 "prog_io_util.m"
                break;
#line 523 "prog_io_util.m"
              case (MR_Integer) 28:
#line 527 "prog_io_util.m"
                {
#line 527 "prog_io_util.m"
                  /* case "=" */
#line 527 "prog_io_util.m"
                  if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "prog_io_util.m"
                    *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 527 "prog_io_util.m"
                  else
#line 534 "prog_io_util.m"
                    {
#line 534 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 534 "prog_io_util.m"
                      MR_Box parse_tree__prog_io_util__V_139_139 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 534 "prog_io_util.m"
                      if ((parse_tree__prog_io_util__V_138_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 533 "prog_io_util.m"
                        *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 534 "prog_io_util.m"
                      else
#line 534 "prog_io_util.m"
                        {
#line 534 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_138_138, (MR_Integer) 1)));
#line 534 "prog_io_util.m"
                          MR_Box parse_tree__prog_io_util__V_147_147 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_138_138, (MR_Integer) 0));

#line 534 "prog_io_util.m"
                          if ((parse_tree__prog_io_util__V_146_146 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 535 "prog_io_util.m"
                            {
#line 535 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__V_28_28;

#line 536 "prog_io_util.m"
                              {
#line 536 "prog_io_util.m"
                                parse_tree__prog_io_util__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 536 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_28_28, 0) = parse_tree__prog_io_util__V_139_139;
#line 536 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_28_28, 1) = parse_tree__prog_io_util__V_147_147;
#line 536 "prog_io_util.m"
                              }
#line 536 "prog_io_util.m"
                              {
#line 536 "prog_io_util.m"
                                MR_Word base;
#line 536 "prog_io_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 536 "prog_io_util.m"
                                *parse_tree__prog_io_util__KnownType_6 = base;
#line 536 "prog_io_util.m"
                                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_28_28));
#line 536 "prog_io_util.m"
                              }
#line 535 "prog_io_util.m"
                            }
#line 534 "prog_io_util.m"
                          else
#line 533 "prog_io_util.m"
                            *parse_tree__prog_io_util__KnownType_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 534 "prog_io_util.m"
                        }
#line 534 "prog_io_util.m"
                    }
#line 527 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 527 "prog_io_util.m"
                }
#line 523 "prog_io_util.m"
                break;
#line 523 "prog_io_util.m"
              case (MR_Integer) 31:
#line 539 "prog_io_util.m"
                {
#line 539 "prog_io_util.m"
                  /* case "pred" */
#line 539 "prog_io_util.m"
                  {
#line 539 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_25_25;

#line 540 "prog_io_util.m"
                    {
#line 540 "prog_io_util.m"
                      parse_tree__prog_io_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 540 "prog_io_util.m"
                      MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_util__Args_5));
#line 540 "prog_io_util.m"
                    }
#line 540 "prog_io_util.m"
                    {
#line 540 "prog_io_util.m"
                      MR_Word base;
#line 540 "prog_io_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 540 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownType_6 = base;
#line 540 "prog_io_util.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_25_25));
#line 540 "prog_io_util.m"
                    }
#line 539 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 539 "prog_io_util.m"
                  }
#line 539 "prog_io_util.m"
                }
#line 523 "prog_io_util.m"
                break;
#line 523 "prog_io_util.m"
            }
#line 523 "prog_io_util.m"
            /* jump out of search loop */
#line 523 "prog_io_util.m"
            goto label_0;
#line 523 "prog_io_util.m"
          }
#line 523 "prog_io_util.m"
        else
#line 523 "prog_io_util.m"
          {
#line 523 "prog_io_util.m"
            /* no match yet, so get next slot in hash chain */
#line 523 "prog_io_util.m"
            parse_tree__prog_io_util__slot_0 = ((&parse_tree__prog_io_util_vector_common_6[7 + parse_tree__prog_io_util__slot_0]))->parse_tree__prog_io_util__vector_common_type_6_0__vct_6_f_1;
#line 523 "prog_io_util.m"
          }
#line 523 "prog_io_util.m"
      }
#line 523 "prog_io_util.m"
    while ((parse_tree__prog_io_util__slot_0 >= (MR_Integer) 0));
#line 523 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 523 "prog_io_util.m"
  label_0:;
#line 523 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 523 "prog_io_util.m"
  }
#line 491 "prog_io_util.m"
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

#line 209 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____quantifier_type_0_0(
#line 209 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 209 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 209 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 209 "prog_io_util.m"
{
#line 209 "prog_io_util.m"
  {
#line 209 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 209 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 209 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 209 "prog_io_util.m"
    {
#line 209 "prog_io_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__Cast_HeadVar1_4, parse_tree__prog_io_util__Cast_HeadVar2_5);
#line 209 "prog_io_util.m"
      return;
    }
#line 209 "prog_io_util.m"
  }
#line 209 "prog_io_util.m"
}

#line 209 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____quantifier_type_0_0(
#line 209 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_1,
#line 209 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 209 "prog_io_util.m"
{
#line 6926 "parse_tree.prog_io_util.c"
  {
#line 6928 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__HeadVar__2_1 == parse_tree__prog_io_util__HeadVar__2_2);

#line 6931 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 6933 "parse_tree.prog_io_util.c"
  }
#line 209 "prog_io_util.m"
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

#line 1352 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_var_1_0(
#line 1352 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_14,
#line 1352 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 1352 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 1352 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 1352 "prog_io_util.m"
{
#line 1352 "prog_io_util.m"
  {
#line 1352 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1352 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_12 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 1352 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_13 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 1352 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_12 == parse_tree__prog_io_util__CastY_13);
#line 1352 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 7030 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1352 "prog_io_util.m"
    else
#line 1352 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1352 "prog_io_util.m"
      {
#line 1352 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1352 "prog_io_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1352 "prog_io_util.m"
          {
#line 1352 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1352 "prog_io_util.m"
            {
#line 1352 "prog_io_util.m"
              mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_14, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_19_19, parse_tree__prog_io_util__V_5_5);
#line 1352 "prog_io_util.m"
              return;
            }
#line 1352 "prog_io_util.m"
          }
#line 1352 "prog_io_util.m"
        else
#line 7059 "parse_tree.prog_io_util.c"
          *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1352 "prog_io_util.m"
      }
#line 1352 "prog_io_util.m"
    else
#line 1352 "prog_io_util.m"
      {
#line 1352 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1352 "prog_io_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 7072 "parse_tree.prog_io_util.c"
          *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1352 "prog_io_util.m"
        else
#line 1352 "prog_io_util.m"
          {
#line 1352 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1352 "prog_io_util.m"
            {
#line 1352 "prog_io_util.m"
              mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_14, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_20_20, parse_tree__prog_io_util__V_11_11);
#line 1352 "prog_io_util.m"
              return;
            }
#line 1352 "prog_io_util.m"
          }
#line 1352 "prog_io_util.m"
      }
#line 1352 "prog_io_util.m"
  }
#line 1352 "prog_io_util.m"
}

#line 1352 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_var_1_0(
#line 1352 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
#line 1352 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 1352 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 1352 "prog_io_util.m"
{
#line 1352 "prog_io_util.m"
  {
#line 1352 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1352 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_7 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 1352 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_8 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 1352 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_7 == parse_tree__prog_io_util__CastY_8);
#line 1352 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1352 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1352 "prog_io_util.m"
    else
#line 1352 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1352 "prog_io_util.m"
      {
#line 1352 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1352 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_4_4;

#line 1352 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1352 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1352 "prog_io_util.m"
          {
#line 1352 "prog_io_util.m"
            parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 7142 "parse_tree.prog_io_util.c"
            {
#line 7144 "parse_tree.prog_io_util.c"
              return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_9, parse_tree__prog_io_util__V_3_3, parse_tree__prog_io_util__V_4_4);
            }
#line 1352 "prog_io_util.m"
          }
#line 1352 "prog_io_util.m"
      }
#line 1352 "prog_io_util.m"
    else
#line 1352 "prog_io_util.m"
      {
#line 1352 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1352 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_6_6;

#line 1352 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1352 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1352 "prog_io_util.m"
          {
#line 1352 "prog_io_util.m"
            parse_tree__prog_io_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 7168 "parse_tree.prog_io_util.c"
            {
#line 7170 "parse_tree.prog_io_util.c"
              return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_9, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_6_6);
            }
#line 1352 "prog_io_util.m"
          }
#line 1352 "prog_io_util.m"
      }
#line 1352 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1352 "prog_io_util.m"
  }
#line 1352 "prog_io_util.m"
}

#line 1413 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0(
#line 1413 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_38,
#line 1413 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 1413 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 1413 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 1413 "prog_io_util.m"
{
#line 1413 "prog_io_util.m"
  {
#line 1413 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1413 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_36 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 1413 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_37 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 1413 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_36 == parse_tree__prog_io_util__CastY_37);
#line 1413 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 7210 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1413 "prog_io_util.m"
    else
#line 1413 "prog_io_util.m"
#line 1413 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) {
#line 1413 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1413 "prog_io_util.m"
        case (MR_Integer) 0:
#line 1413 "prog_io_util.m"
          {
#line 1413 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1413 "prog_io_util.m"
#line 1413 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 1413 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1413 "prog_io_util.m"
              case (MR_Integer) 0:
#line 1413 "prog_io_util.m"
                {
#line 1413 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1413 "prog_io_util.m"
                  {
#line 1413 "prog_io_util.m"
                    mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_38, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_49_49, parse_tree__prog_io_util__V_5_5);
#line 1413 "prog_io_util.m"
                    return;
                  }
#line 1413 "prog_io_util.m"
                }
#line 1413 "prog_io_util.m"
                break;
#line 1413 "prog_io_util.m"
              case (MR_Integer) 1:
#line 7251 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1413 "prog_io_util.m"
                break;
#line 1413 "prog_io_util.m"
              case (MR_Integer) 2:
#line 7257 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1413 "prog_io_util.m"
                break;
#line 1413 "prog_io_util.m"
              case (MR_Integer) 3:
#line 7263 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1413 "prog_io_util.m"
                break;
#line 1413 "prog_io_util.m"
            }
#line 1413 "prog_io_util.m"
          }
#line 1413 "prog_io_util.m"
          break;
#line 1413 "prog_io_util.m"
        case (MR_Integer) 1:
#line 1413 "prog_io_util.m"
          {
#line 1413 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1413 "prog_io_util.m"
#line 1413 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 1413 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1413 "prog_io_util.m"
              case (MR_Integer) 0:
#line 7287 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1413 "prog_io_util.m"
                break;
#line 1413 "prog_io_util.m"
              case (MR_Integer) 1:
#line 1413 "prog_io_util.m"
                {
#line 1413 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1413 "prog_io_util.m"
                  {
#line 1413 "prog_io_util.m"
                    mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_38, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_50_50, parse_tree__prog_io_util__V_15_15);
#line 1413 "prog_io_util.m"
                    return;
                  }
#line 1413 "prog_io_util.m"
                }
#line 1413 "prog_io_util.m"
                break;
#line 1413 "prog_io_util.m"
              case (MR_Integer) 2:
#line 7311 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1413 "prog_io_util.m"
                break;
#line 1413 "prog_io_util.m"
              case (MR_Integer) 3:
#line 7317 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1413 "prog_io_util.m"
                break;
#line 1413 "prog_io_util.m"
            }
#line 1413 "prog_io_util.m"
          }
#line 1413 "prog_io_util.m"
          break;
#line 1413 "prog_io_util.m"
        case (MR_Integer) 2:
#line 1413 "prog_io_util.m"
          {
#line 1413 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1413 "prog_io_util.m"
#line 1413 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 1413 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1413 "prog_io_util.m"
              case (MR_Integer) 0:
#line 7341 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1413 "prog_io_util.m"
                break;
#line 1413 "prog_io_util.m"
              case (MR_Integer) 1:
#line 7347 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1413 "prog_io_util.m"
                break;
#line 1413 "prog_io_util.m"
              case (MR_Integer) 2:
#line 1413 "prog_io_util.m"
                {
#line 1413 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1413 "prog_io_util.m"
                  {
#line 1413 "prog_io_util.m"
                    mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_38, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_48_48, parse_tree__prog_io_util__V_25_25);
#line 1413 "prog_io_util.m"
                    return;
                  }
#line 1413 "prog_io_util.m"
                }
#line 1413 "prog_io_util.m"
                break;
#line 1413 "prog_io_util.m"
              case (MR_Integer) 3:
#line 7371 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1413 "prog_io_util.m"
                break;
#line 1413 "prog_io_util.m"
            }
#line 1413 "prog_io_util.m"
          }
#line 1413 "prog_io_util.m"
          break;
#line 1413 "prog_io_util.m"
        case (MR_Integer) 3:
#line 1413 "prog_io_util.m"
          {
#line 1413 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1413 "prog_io_util.m"
#line 1413 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 1413 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1413 "prog_io_util.m"
              case (MR_Integer) 0:
#line 7395 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1413 "prog_io_util.m"
                break;
#line 1413 "prog_io_util.m"
              case (MR_Integer) 1:
#line 7401 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1413 "prog_io_util.m"
                break;
#line 1413 "prog_io_util.m"
              case (MR_Integer) 2:
#line 7407 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1413 "prog_io_util.m"
                break;
#line 1413 "prog_io_util.m"
              case (MR_Integer) 3:
#line 1413 "prog_io_util.m"
                {
#line 1413 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1413 "prog_io_util.m"
                  {
#line 1413 "prog_io_util.m"
                    mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_38, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_47_47, parse_tree__prog_io_util__V_35_35);
#line 1413 "prog_io_util.m"
                    return;
                  }
#line 1413 "prog_io_util.m"
                }
#line 1413 "prog_io_util.m"
                break;
#line 1413 "prog_io_util.m"
            }
#line 1413 "prog_io_util.m"
          }
#line 1413 "prog_io_util.m"
          break;
#line 1413 "prog_io_util.m"
      }
#line 1413 "prog_io_util.m"
  }
#line 1413 "prog_io_util.m"
}

#line 1413 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0(
#line 1413 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_13,
#line 1413 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 1413 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 1413 "prog_io_util.m"
{
#line 1413 "prog_io_util.m"
  {
#line 1413 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1413 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_11 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 1413 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_12 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 1413 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_11 == parse_tree__prog_io_util__CastY_12);
#line 1413 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1413 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1413 "prog_io_util.m"
    else
#line 1413 "prog_io_util.m"
#line 1413 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) {
#line 1413 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1413 "prog_io_util.m"
        case (MR_Integer) 0:
#line 1413 "prog_io_util.m"
          {
#line 1413 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1413 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_4_4;

#line 1413 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1413 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1413 "prog_io_util.m"
              {
#line 1413 "prog_io_util.m"
                parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 7492 "parse_tree.prog_io_util.c"
                {
#line 7494 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_13, parse_tree__prog_io_util__V_3_3, parse_tree__prog_io_util__V_4_4);
                }
#line 1413 "prog_io_util.m"
              }
#line 1413 "prog_io_util.m"
          }
#line 1413 "prog_io_util.m"
          break;
#line 1413 "prog_io_util.m"
        case (MR_Integer) 1:
#line 1413 "prog_io_util.m"
          {
#line 1413 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1413 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_6_6;

#line 1413 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1413 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1413 "prog_io_util.m"
              {
#line 1413 "prog_io_util.m"
                parse_tree__prog_io_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 7520 "parse_tree.prog_io_util.c"
                {
#line 7522 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_13, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_6_6);
                }
#line 1413 "prog_io_util.m"
              }
#line 1413 "prog_io_util.m"
          }
#line 1413 "prog_io_util.m"
          break;
#line 1413 "prog_io_util.m"
        case (MR_Integer) 2:
#line 1413 "prog_io_util.m"
          {
#line 1413 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1413 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_8_8;

#line 1413 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1413 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1413 "prog_io_util.m"
              {
#line 1413 "prog_io_util.m"
                parse_tree__prog_io_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 7548 "parse_tree.prog_io_util.c"
                {
#line 7550 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_13, parse_tree__prog_io_util__V_7_7, parse_tree__prog_io_util__V_8_8);
                }
#line 1413 "prog_io_util.m"
              }
#line 1413 "prog_io_util.m"
          }
#line 1413 "prog_io_util.m"
          break;
#line 1413 "prog_io_util.m"
        case (MR_Integer) 3:
#line 1413 "prog_io_util.m"
          {
#line 1413 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1413 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_10_10;

#line 1413 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 1413 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1413 "prog_io_util.m"
              {
#line 1413 "prog_io_util.m"
                parse_tree__prog_io_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 7576 "parse_tree.prog_io_util.c"
                {
#line 7578 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_13, parse_tree__prog_io_util__V_9_9, parse_tree__prog_io_util__V_10_10);
                }
#line 1413 "prog_io_util.m"
              }
#line 1413 "prog_io_util.m"
          }
#line 1413 "prog_io_util.m"
          break;
#line 1413 "prog_io_util.m"
      }
#line 1413 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1413 "prog_io_util.m"
  }
#line 1413 "prog_io_util.m"
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

#line 7624 "parse_tree.prog_io_util.c"
    {
#line 7626 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7628 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 7630 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_6));
#line 7632 "parse_tree.prog_io_util.c"
    }
#line 7634 "parse_tree.prog_io_util.c"
    {
#line 7636 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7638 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 7640 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_6));
#line 7642 "parse_tree.prog_io_util.c"
    }
#line 7644 "parse_tree.prog_io_util.c"
    {
#line 7646 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7648 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 7650 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_13_13, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_9_9));
#line 7652 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_13_13, 2) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_11_11));
#line 7654 "parse_tree.prog_io_util.c"
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

#line 7694 "parse_tree.prog_io_util.c"
    {
#line 7696 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7698 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 7700 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_5));
#line 7702 "parse_tree.prog_io_util.c"
    }
#line 7704 "parse_tree.prog_io_util.c"
    {
#line 7706 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7708 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 7710 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_10_10, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_5));
#line 7712 "parse_tree.prog_io_util.c"
    }
#line 7714 "parse_tree.prog_io_util.c"
    {
#line 7716 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7718 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_12_12, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 7720 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_12_12, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_8_8));
#line 7722 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_12_12, 2) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_10_10));
#line 7724 "parse_tree.prog_io_util.c"
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

#line 7764 "parse_tree.prog_io_util.c"
    {
#line 7766 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7768 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
#line 7770 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_6));
#line 7772 "parse_tree.prog_io_util.c"
    }
#line 7774 "parse_tree.prog_io_util.c"
    {
#line 7776 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7778 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 7780 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_9_9));
#line 7782 "parse_tree.prog_io_util.c"
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

#line 7820 "parse_tree.prog_io_util.c"
    {
#line 7822 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7824 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
#line 7826 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_5));
#line 7828 "parse_tree.prog_io_util.c"
    }
#line 7830 "parse_tree.prog_io_util.c"
    {
#line 7832 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7834 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 7836 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_10_10, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_8_8));
#line 7838 "parse_tree.prog_io_util.c"
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
#line 7946 "parse_tree.prog_io_util.c"
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
#line 7975 "parse_tree.prog_io_util.c"
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
#line 7994 "parse_tree.prog_io_util.c"
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
#line 8016 "parse_tree.prog_io_util.c"
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
#line 8036 "parse_tree.prog_io_util.c"
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
#line 8056 "parse_tree.prog_io_util.c"
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
#line 8139 "parse_tree.prog_io_util.c"
            parse_tree__prog_io_util__TypeInfo_19_19 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[5];
#line 8141 "parse_tree.prog_io_util.c"
            {
#line 8143 "parse_tree.prog_io_util.c"
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
#line 8185 "parse_tree.prog_io_util.c"
            {
#line 8187 "parse_tree.prog_io_util.c"
              parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T1_15, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_9_9);
            }
#line 57 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 57 "prog_io_util.m"
              {
#line 8194 "parse_tree.prog_io_util.c"
                {
#line 8196 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T2_16, parse_tree__prog_io_util__V_6_6, parse_tree__prog_io_util__V_10_10);
                }
#line 57 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 57 "prog_io_util.m"
                  {
#line 8203 "parse_tree.prog_io_util.c"
                    {
#line 8205 "parse_tree.prog_io_util.c"
                      parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T3_17, parse_tree__prog_io_util__V_7_7, parse_tree__prog_io_util__V_11_11);
                    }
#line 57 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 8210 "parse_tree.prog_io_util.c"
                      {
#line 8212 "parse_tree.prog_io_util.c"
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
#line 8260 "parse_tree.prog_io_util.c"
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
#line 8289 "parse_tree.prog_io_util.c"
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
#line 8306 "parse_tree.prog_io_util.c"
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
#line 8326 "parse_tree.prog_io_util.c"
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
#line 8346 "parse_tree.prog_io_util.c"
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
#line 8425 "parse_tree.prog_io_util.c"
            parse_tree__prog_io_util__TypeInfo_16_16 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[5];
#line 8427 "parse_tree.prog_io_util.c"
            {
#line 8429 "parse_tree.prog_io_util.c"
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
#line 8465 "parse_tree.prog_io_util.c"
            {
#line 8467 "parse_tree.prog_io_util.c"
              parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T1_13, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_8_8);
            }
#line 53 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 53 "prog_io_util.m"
              {
#line 8474 "parse_tree.prog_io_util.c"
                {
#line 8476 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T2_14, parse_tree__prog_io_util__V_6_6, parse_tree__prog_io_util__V_9_9);
                }
#line 53 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 8481 "parse_tree.prog_io_util.c"
                  {
#line 8483 "parse_tree.prog_io_util.c"
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
#line 8527 "parse_tree.prog_io_util.c"
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
#line 8556 "parse_tree.prog_io_util.c"
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
#line 8571 "parse_tree.prog_io_util.c"
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
#line 8589 "parse_tree.prog_io_util.c"
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
#line 8664 "parse_tree.prog_io_util.c"
            parse_tree__prog_io_util__TypeInfo_13_13 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[5];
#line 8666 "parse_tree.prog_io_util.c"
            {
#line 8668 "parse_tree.prog_io_util.c"
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
#line 8698 "parse_tree.prog_io_util.c"
            {
#line 8700 "parse_tree.prog_io_util.c"
              parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T1_11, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_7_7);
            }
#line 49 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 8705 "parse_tree.prog_io_util.c"
              {
#line 8707 "parse_tree.prog_io_util.c"
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
#line 8747 "parse_tree.prog_io_util.c"
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
#line 8776 "parse_tree.prog_io_util.c"
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
#line 8789 "parse_tree.prog_io_util.c"
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
#line 8861 "parse_tree.prog_io_util.c"
            parse_tree__prog_io_util__TypeInfo_10_10 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[5];
#line 8863 "parse_tree.prog_io_util.c"
            {
#line 8865 "parse_tree.prog_io_util.c"
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
#line 8889 "parse_tree.prog_io_util.c"
            {
#line 8891 "parse_tree.prog_io_util.c"
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

#line 476 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_type_kind_1_0(
#line 476 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_18,
#line 476 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 476 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 476 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 476 "prog_io_util.m"
{
#line 476 "prog_io_util.m"
  {
#line 476 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 476 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_16 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 476 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_17 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 476 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_16 == parse_tree__prog_io_util__CastY_17);
#line 476 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 8931 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 476 "prog_io_util.m"
    else
#line 476 "prog_io_util.m"
#line 476 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) {
#line 476 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 476 "prog_io_util.m"
        case (MR_Integer) 0:
#line 476 "prog_io_util.m"
#line 476 "prog_io_util.m"
          switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 476 "prog_io_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 476 "prog_io_util.m"
            case (MR_Integer) 0:
#line 476 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 476 "prog_io_util.m"
              break;
#line 476 "prog_io_util.m"
            case (MR_Integer) 1:
#line 8955 "parse_tree.prog_io_util.c"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 476 "prog_io_util.m"
              break;
#line 476 "prog_io_util.m"
            case (MR_Integer) 2:
#line 8961 "parse_tree.prog_io_util.c"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 476 "prog_io_util.m"
              break;
#line 476 "prog_io_util.m"
          }
#line 476 "prog_io_util.m"
          break;
#line 476 "prog_io_util.m"
        case (MR_Integer) 1:
#line 476 "prog_io_util.m"
          {
#line 476 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 476 "prog_io_util.m"
#line 476 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 476 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 476 "prog_io_util.m"
              case (MR_Integer) 0:
#line 8983 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 476 "prog_io_util.m"
                break;
#line 476 "prog_io_util.m"
              case (MR_Integer) 1:
#line 476 "prog_io_util.m"
                {
#line 476 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 476 "prog_io_util.m"
                  {
#line 476 "prog_io_util.m"
                    parse_tree__prog_data____Compare____mer_type_0_0(parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_23_23, parse_tree__prog_io_util__V_5_5);
#line 476 "prog_io_util.m"
                    return;
                  }
#line 476 "prog_io_util.m"
                }
#line 476 "prog_io_util.m"
                break;
#line 476 "prog_io_util.m"
              case (MR_Integer) 2:
#line 9007 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 476 "prog_io_util.m"
                break;
#line 476 "prog_io_util.m"
            }
#line 476 "prog_io_util.m"
          }
#line 476 "prog_io_util.m"
          break;
#line 476 "prog_io_util.m"
        case (MR_Integer) 2:
#line 476 "prog_io_util.m"
          {
#line 476 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 476 "prog_io_util.m"
#line 476 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 476 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 476 "prog_io_util.m"
              case (MR_Integer) 0:
#line 9031 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 476 "prog_io_util.m"
                break;
#line 476 "prog_io_util.m"
              case (MR_Integer) 1:
#line 9037 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 476 "prog_io_util.m"
                break;
#line 476 "prog_io_util.m"
              case (MR_Integer) 2:
#line 476 "prog_io_util.m"
                {
#line 476 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 476 "prog_io_util.m"
                  {
#line 476 "prog_io_util.m"
                    parse_tree__prog_io_util____Compare____known_compound_type_kind_1_0(parse_tree__prog_io_util__TypeInfo_for_T_18, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_22_22, parse_tree__prog_io_util__V_12_12);
#line 476 "prog_io_util.m"
                    return;
                  }
#line 476 "prog_io_util.m"
                }
#line 476 "prog_io_util.m"
                break;
#line 476 "prog_io_util.m"
            }
#line 476 "prog_io_util.m"
          }
#line 476 "prog_io_util.m"
          break;
#line 476 "prog_io_util.m"
      }
#line 476 "prog_io_util.m"
  }
#line 476 "prog_io_util.m"
}

#line 476 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_type_kind_1_0(
#line 476 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_11,
#line 476 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 476 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 476 "prog_io_util.m"
{
#line 476 "prog_io_util.m"
  {
#line 476 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 476 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_9 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 476 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_10 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 476 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_9 == parse_tree__prog_io_util__CastY_10);
#line 476 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 476 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 476 "prog_io_util.m"
    else
#line 476 "prog_io_util.m"
#line 476 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) {
#line 476 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 476 "prog_io_util.m"
        case (MR_Integer) 0:
#line 476 "prog_io_util.m"
          {
#line 476 "prog_io_util.m"
            MR_Integer parse_tree__prog_io_util__CastX_7 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 476 "prog_io_util.m"
            MR_Integer parse_tree__prog_io_util__CastY_8 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 476 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastY_8 == parse_tree__prog_io_util__CastX_7);
#line 476 "prog_io_util.m"
          }
#line 476 "prog_io_util.m"
          break;
#line 476 "prog_io_util.m"
        case (MR_Integer) 1:
#line 476 "prog_io_util.m"
          {
#line 476 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 476 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_4_4;

#line 476 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 476 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 476 "prog_io_util.m"
              {
#line 476 "prog_io_util.m"
                parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 9137 "parse_tree.prog_io_util.c"
                {
#line 9139 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__prog_io_util__V_3_3, parse_tree__prog_io_util__V_4_4);
                }
#line 476 "prog_io_util.m"
              }
#line 476 "prog_io_util.m"
          }
#line 476 "prog_io_util.m"
          break;
#line 476 "prog_io_util.m"
        case (MR_Integer) 2:
#line 476 "prog_io_util.m"
          {
#line 476 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 476 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_6_6;

#line 476 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 476 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 476 "prog_io_util.m"
              {
#line 476 "prog_io_util.m"
                parse_tree__prog_io_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 9165 "parse_tree.prog_io_util.c"
                {
#line 9167 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____known_compound_type_kind_1_0(parse_tree__prog_io_util__TypeInfo_for_T_11, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_6_6);
                }
#line 476 "prog_io_util.m"
              }
#line 476 "prog_io_util.m"
          }
#line 476 "prog_io_util.m"
          break;
#line 476 "prog_io_util.m"
      }
#line 476 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 476 "prog_io_util.m"
  }
#line 476 "prog_io_util.m"
}

#line 904 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_inst_kind_1_0(
#line 904 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_18,
#line 904 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 904 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 904 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 904 "prog_io_util.m"
{
#line 904 "prog_io_util.m"
  {
#line 904 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 904 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_16 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 904 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_17 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 904 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_16 == parse_tree__prog_io_util__CastY_17);
#line 904 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 9211 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 904 "prog_io_util.m"
    else
#line 904 "prog_io_util.m"
#line 904 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) {
#line 904 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 904 "prog_io_util.m"
        case (MR_Integer) 0:
#line 904 "prog_io_util.m"
#line 904 "prog_io_util.m"
          switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 904 "prog_io_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 904 "prog_io_util.m"
            case (MR_Integer) 0:
#line 904 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 904 "prog_io_util.m"
              break;
#line 904 "prog_io_util.m"
            case (MR_Integer) 1:
#line 9235 "parse_tree.prog_io_util.c"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 904 "prog_io_util.m"
              break;
#line 904 "prog_io_util.m"
            case (MR_Integer) 2:
#line 9241 "parse_tree.prog_io_util.c"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 904 "prog_io_util.m"
              break;
#line 904 "prog_io_util.m"
          }
#line 904 "prog_io_util.m"
          break;
#line 904 "prog_io_util.m"
        case (MR_Integer) 1:
#line 904 "prog_io_util.m"
          {
#line 904 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 904 "prog_io_util.m"
#line 904 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 904 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 904 "prog_io_util.m"
              case (MR_Integer) 0:
#line 9263 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 904 "prog_io_util.m"
                break;
#line 904 "prog_io_util.m"
              case (MR_Integer) 1:
#line 904 "prog_io_util.m"
                {
#line 904 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 904 "prog_io_util.m"
                  {
#line 904 "prog_io_util.m"
                    parse_tree__prog_data____Compare____mer_inst_0_0(parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_23_23, parse_tree__prog_io_util__V_5_5);
#line 904 "prog_io_util.m"
                    return;
                  }
#line 904 "prog_io_util.m"
                }
#line 904 "prog_io_util.m"
                break;
#line 904 "prog_io_util.m"
              case (MR_Integer) 2:
#line 9287 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 904 "prog_io_util.m"
                break;
#line 904 "prog_io_util.m"
            }
#line 904 "prog_io_util.m"
          }
#line 904 "prog_io_util.m"
          break;
#line 904 "prog_io_util.m"
        case (MR_Integer) 2:
#line 904 "prog_io_util.m"
          {
#line 904 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 904 "prog_io_util.m"
#line 904 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 904 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 904 "prog_io_util.m"
              case (MR_Integer) 0:
#line 9311 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 904 "prog_io_util.m"
                break;
#line 904 "prog_io_util.m"
              case (MR_Integer) 1:
#line 9317 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 904 "prog_io_util.m"
                break;
#line 904 "prog_io_util.m"
              case (MR_Integer) 2:
#line 904 "prog_io_util.m"
                {
#line 904 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 904 "prog_io_util.m"
                  {
#line 904 "prog_io_util.m"
                    parse_tree__prog_io_util____Compare____known_compound_inst_kind_1_0(parse_tree__prog_io_util__TypeInfo_for_T_18, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_22_22, parse_tree__prog_io_util__V_12_12);
#line 904 "prog_io_util.m"
                    return;
                  }
#line 904 "prog_io_util.m"
                }
#line 904 "prog_io_util.m"
                break;
#line 904 "prog_io_util.m"
            }
#line 904 "prog_io_util.m"
          }
#line 904 "prog_io_util.m"
          break;
#line 904 "prog_io_util.m"
      }
#line 904 "prog_io_util.m"
  }
#line 904 "prog_io_util.m"
}

#line 904 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_inst_kind_1_0(
#line 904 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_11,
#line 904 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 904 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 904 "prog_io_util.m"
{
#line 904 "prog_io_util.m"
  {
#line 904 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 904 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_9 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 904 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_10 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 904 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_9 == parse_tree__prog_io_util__CastY_10);
#line 904 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 904 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 904 "prog_io_util.m"
    else
#line 904 "prog_io_util.m"
#line 904 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) {
#line 904 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 904 "prog_io_util.m"
        case (MR_Integer) 0:
#line 904 "prog_io_util.m"
          {
#line 904 "prog_io_util.m"
            MR_Integer parse_tree__prog_io_util__CastX_7 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 904 "prog_io_util.m"
            MR_Integer parse_tree__prog_io_util__CastY_8 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 904 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastY_8 == parse_tree__prog_io_util__CastX_7);
#line 904 "prog_io_util.m"
          }
#line 904 "prog_io_util.m"
          break;
#line 904 "prog_io_util.m"
        case (MR_Integer) 1:
#line 904 "prog_io_util.m"
          {
#line 904 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 904 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_4_4;

#line 904 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 904 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 904 "prog_io_util.m"
              {
#line 904 "prog_io_util.m"
                parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 9417 "parse_tree.prog_io_util.c"
                {
#line 9419 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__prog_io_util__V_3_3, parse_tree__prog_io_util__V_4_4);
                }
#line 904 "prog_io_util.m"
              }
#line 904 "prog_io_util.m"
          }
#line 904 "prog_io_util.m"
          break;
#line 904 "prog_io_util.m"
        case (MR_Integer) 2:
#line 904 "prog_io_util.m"
          {
#line 904 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 904 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_6_6;

#line 904 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 904 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 904 "prog_io_util.m"
              {
#line 904 "prog_io_util.m"
                parse_tree__prog_io_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 9445 "parse_tree.prog_io_util.c"
                {
#line 9447 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____known_compound_inst_kind_1_0(parse_tree__prog_io_util__TypeInfo_for_T_11, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_6_6);
                }
#line 904 "prog_io_util.m"
              }
#line 904 "prog_io_util.m"
          }
#line 904 "prog_io_util.m"
          break;
#line 904 "prog_io_util.m"
      }
#line 904 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 904 "prog_io_util.m"
  }
#line 904 "prog_io_util.m"
}

#line 469 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_type_kind_1_0(
#line 469 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_78,
#line 469 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 469 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 469 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 469 "prog_io_util.m"
{
#line 469 "prog_io_util.m"
  {
#line 469 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 469 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_76 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 469 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_77 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 469 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_76 == parse_tree__prog_io_util__CastY_77);
#line 469 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 9491 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 469 "prog_io_util.m"
    else
#line 469 "prog_io_util.m"
#line 469 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) {
#line 469 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 469 "prog_io_util.m"
        case (MR_Integer) 0:
#line 469 "prog_io_util.m"
          {
#line 469 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 469 "prog_io_util.m"
#line 469 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 469 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 469 "prog_io_util.m"
              case (MR_Integer) 0:
#line 469 "prog_io_util.m"
                {
#line 469 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 469 "prog_io_util.m"
                  {
#line 469 "prog_io_util.m"
                    mercury__list____Compare____list_1_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_92_92, parse_tree__prog_io_util__V_5_5);
#line 469 "prog_io_util.m"
                    return;
                  }
#line 469 "prog_io_util.m"
                }
#line 469 "prog_io_util.m"
                break;
#line 469 "prog_io_util.m"
              case (MR_Integer) 1:
#line 9532 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 469 "prog_io_util.m"
                break;
#line 469 "prog_io_util.m"
              case (MR_Integer) 2:
#line 9538 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 469 "prog_io_util.m"
                break;
#line 469 "prog_io_util.m"
              case (MR_Integer) 3:
#line 469 "prog_io_util.m"
#line 469 "prog_io_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 469 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 469 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 9551 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 469 "prog_io_util.m"
                    break;
#line 469 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 9557 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 469 "prog_io_util.m"
                    break;
#line 469 "prog_io_util.m"
                }
#line 469 "prog_io_util.m"
                break;
#line 469 "prog_io_util.m"
            }
#line 469 "prog_io_util.m"
          }
#line 469 "prog_io_util.m"
          break;
#line 469 "prog_io_util.m"
        case (MR_Integer) 1:
#line 469 "prog_io_util.m"
          {
#line 469 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_87_87 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 469 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_88_88 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));

#line 469 "prog_io_util.m"
#line 469 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 469 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 469 "prog_io_util.m"
              case (MR_Integer) 0:
#line 9587 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 469 "prog_io_util.m"
                break;
#line 469 "prog_io_util.m"
              case (MR_Integer) 1:
#line 469 "prog_io_util.m"
                {
#line 469 "prog_io_util.m"
                  MR_Box parse_tree__prog_io_util__V_21_21 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0));
#line 469 "prog_io_util.m"
                  MR_Box parse_tree__prog_io_util__V_22_22 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1));
#line 469 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_23_23;

#line 469 "prog_io_util.m"
                  {
#line 469 "prog_io_util.m"
                    mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, &parse_tree__prog_io_util__V_23_23, parse_tree__prog_io_util__V_88_88, parse_tree__prog_io_util__V_21_21);
                  }
#line 9607 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_23_23 == (MR_Integer) 0);
#line 469 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 469 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 469 "prog_io_util.m"
                    *parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__V_23_23;
#line 469 "prog_io_util.m"
                  else
#line 469 "prog_io_util.m"
                    {
#line 469 "prog_io_util.m"
                      mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_87_87, parse_tree__prog_io_util__V_22_22);
#line 469 "prog_io_util.m"
                      return;
                    }
#line 469 "prog_io_util.m"
                }
#line 469 "prog_io_util.m"
                break;
#line 469 "prog_io_util.m"
              case (MR_Integer) 2:
#line 9630 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 469 "prog_io_util.m"
                break;
#line 469 "prog_io_util.m"
              case (MR_Integer) 3:
#line 469 "prog_io_util.m"
#line 469 "prog_io_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 469 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 469 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 9643 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 469 "prog_io_util.m"
                    break;
#line 469 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 9649 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 469 "prog_io_util.m"
                    break;
#line 469 "prog_io_util.m"
                }
#line 469 "prog_io_util.m"
                break;
#line 469 "prog_io_util.m"
            }
#line 469 "prog_io_util.m"
          }
#line 469 "prog_io_util.m"
          break;
#line 469 "prog_io_util.m"
        case (MR_Integer) 2:
#line 469 "prog_io_util.m"
          {
#line 469 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 469 "prog_io_util.m"
#line 469 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 469 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 469 "prog_io_util.m"
              case (MR_Integer) 0:
#line 9677 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 469 "prog_io_util.m"
                break;
#line 469 "prog_io_util.m"
              case (MR_Integer) 1:
#line 9683 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 469 "prog_io_util.m"
                break;
#line 469 "prog_io_util.m"
              case (MR_Integer) 2:
#line 469 "prog_io_util.m"
                {
#line 469 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 469 "prog_io_util.m"
                  {
#line 469 "prog_io_util.m"
                    mercury__list____Compare____list_1_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_89_89, parse_tree__prog_io_util__V_40_40);
#line 469 "prog_io_util.m"
                    return;
                  }
#line 469 "prog_io_util.m"
                }
#line 469 "prog_io_util.m"
                break;
#line 469 "prog_io_util.m"
              case (MR_Integer) 3:
#line 469 "prog_io_util.m"
#line 469 "prog_io_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 469 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 469 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 9714 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 469 "prog_io_util.m"
                    break;
#line 469 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 9720 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 469 "prog_io_util.m"
                    break;
#line 469 "prog_io_util.m"
                }
#line 469 "prog_io_util.m"
                break;
#line 469 "prog_io_util.m"
            }
#line 469 "prog_io_util.m"
          }
#line 469 "prog_io_util.m"
          break;
#line 469 "prog_io_util.m"
        case (MR_Integer) 3:
#line 469 "prog_io_util.m"
#line 469 "prog_io_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)))) {
#line 469 "prog_io_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 469 "prog_io_util.m"
            case (MR_Integer) 0:
#line 469 "prog_io_util.m"
              {
#line 469 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_90_90 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 2));
#line 469 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));

#line 469 "prog_io_util.m"
#line 469 "prog_io_util.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 469 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 469 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 9757 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 469 "prog_io_util.m"
                    break;
#line 469 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 9763 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 469 "prog_io_util.m"
                    break;
#line 469 "prog_io_util.m"
                  case (MR_Integer) 2:
#line 9769 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 469 "prog_io_util.m"
                    break;
#line 469 "prog_io_util.m"
                  case (MR_Integer) 3:
#line 469 "prog_io_util.m"
#line 469 "prog_io_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 469 "prog_io_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 469 "prog_io_util.m"
                      case (MR_Integer) 0:
#line 469 "prog_io_util.m"
                        {
#line 469 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1)));
#line 469 "prog_io_util.m"
                          MR_Box parse_tree__prog_io_util__V_59_59 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 2));
#line 469 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_60_60;
#line 469 "prog_io_util.m"
                          MR_Integer parse_tree__prog_io_util__V_93_93 = (MR_Integer) parse_tree__prog_io_util__V_91_91;
#line 469 "prog_io_util.m"
                          MR_Integer parse_tree__prog_io_util__V_94_94 = (MR_Integer) parse_tree__prog_io_util__V_58_58;

#line 469 "prog_io_util.m"
                          {
#line 469 "prog_io_util.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_io_util__V_60_60, parse_tree__prog_io_util__V_93_93, parse_tree__prog_io_util__V_94_94);
                          }
#line 9800 "parse_tree.prog_io_util.c"
                          parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_60_60 == (MR_Integer) 0);
#line 469 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 469 "prog_io_util.m"
                          if (parse_tree__prog_io_util__succeeded)
#line 469 "prog_io_util.m"
                            *parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__V_60_60;
#line 469 "prog_io_util.m"
                          else
#line 469 "prog_io_util.m"
                            {
#line 469 "prog_io_util.m"
                              mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_90_90, parse_tree__prog_io_util__V_59_59);
#line 469 "prog_io_util.m"
                              return;
                            }
#line 469 "prog_io_util.m"
                        }
#line 469 "prog_io_util.m"
                        break;
#line 469 "prog_io_util.m"
                      case (MR_Integer) 1:
#line 9823 "parse_tree.prog_io_util.c"
                        *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 469 "prog_io_util.m"
                        break;
#line 469 "prog_io_util.m"
                    }
#line 469 "prog_io_util.m"
                    break;
#line 469 "prog_io_util.m"
                }
#line 469 "prog_io_util.m"
              }
#line 469 "prog_io_util.m"
              break;
#line 469 "prog_io_util.m"
            case (MR_Integer) 1:
#line 469 "prog_io_util.m"
              {
#line 469 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));

#line 469 "prog_io_util.m"
#line 469 "prog_io_util.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 469 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 469 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 9851 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 469 "prog_io_util.m"
                    break;
#line 469 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 9857 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 469 "prog_io_util.m"
                    break;
#line 469 "prog_io_util.m"
                  case (MR_Integer) 2:
#line 9863 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 469 "prog_io_util.m"
                    break;
#line 469 "prog_io_util.m"
                  case (MR_Integer) 3:
#line 469 "prog_io_util.m"
#line 469 "prog_io_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 469 "prog_io_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 469 "prog_io_util.m"
                      case (MR_Integer) 0:
#line 9876 "parse_tree.prog_io_util.c"
                        *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 469 "prog_io_util.m"
                        break;
#line 469 "prog_io_util.m"
                      case (MR_Integer) 1:
#line 469 "prog_io_util.m"
                        {
#line 469 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1)));

#line 469 "prog_io_util.m"
                          {
#line 469 "prog_io_util.m"
                            mercury__list____Compare____list_1_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_86_86, parse_tree__prog_io_util__V_75_75);
#line 469 "prog_io_util.m"
                            return;
                          }
#line 469 "prog_io_util.m"
                        }
#line 469 "prog_io_util.m"
                        break;
#line 469 "prog_io_util.m"
                    }
#line 469 "prog_io_util.m"
                    break;
#line 469 "prog_io_util.m"
                }
#line 469 "prog_io_util.m"
              }
#line 469 "prog_io_util.m"
              break;
#line 469 "prog_io_util.m"
          }
#line 469 "prog_io_util.m"
          break;
#line 469 "prog_io_util.m"
      }
#line 469 "prog_io_util.m"
  }
#line 469 "prog_io_util.m"
}

#line 469 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_type_kind_1_0(
#line 469 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_19,
#line 469 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 469 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 469 "prog_io_util.m"
{
#line 469 "prog_io_util.m"
  {
#line 469 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 469 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_17 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 469 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_18 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 469 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_17 == parse_tree__prog_io_util__CastY_18);
#line 469 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 469 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 469 "prog_io_util.m"
    else
#line 469 "prog_io_util.m"
#line 469 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) {
#line 469 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 469 "prog_io_util.m"
        case (MR_Integer) 0:
#line 469 "prog_io_util.m"
          {
#line 469 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 469 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_4_4;

#line 469 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 469 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 469 "prog_io_util.m"
              {
#line 469 "prog_io_util.m"
                parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 9969 "parse_tree.prog_io_util.c"
                {
#line 9971 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = mercury__list____Unify____list_1_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_3_3, parse_tree__prog_io_util__V_4_4);
                }
#line 469 "prog_io_util.m"
              }
#line 469 "prog_io_util.m"
          }
#line 469 "prog_io_util.m"
          break;
#line 469 "prog_io_util.m"
        case (MR_Integer) 1:
#line 469 "prog_io_util.m"
          {
#line 469 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_5_5 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0));
#line 469 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_6_6 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1));
#line 469 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_7_7;
#line 469 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_8_8;

#line 469 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 469 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 469 "prog_io_util.m"
              {
#line 469 "prog_io_util.m"
                parse_tree__prog_io_util__V_7_7 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));
#line 469 "prog_io_util.m"
                parse_tree__prog_io_util__V_8_8 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 10003 "parse_tree.prog_io_util.c"
                {
#line 10005 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_7_7);
                }
#line 469 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 10010 "parse_tree.prog_io_util.c"
                  {
#line 10012 "parse_tree.prog_io_util.c"
                    return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_6_6, parse_tree__prog_io_util__V_8_8);
                  }
#line 469 "prog_io_util.m"
              }
#line 469 "prog_io_util.m"
          }
#line 469 "prog_io_util.m"
          break;
#line 469 "prog_io_util.m"
        case (MR_Integer) 2:
#line 469 "prog_io_util.m"
          {
#line 469 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 469 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_10_10;

#line 469 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 469 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 469 "prog_io_util.m"
              {
#line 469 "prog_io_util.m"
                parse_tree__prog_io_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 10038 "parse_tree.prog_io_util.c"
                {
#line 10040 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = mercury__list____Unify____list_1_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_9_9, parse_tree__prog_io_util__V_10_10);
                }
#line 469 "prog_io_util.m"
              }
#line 469 "prog_io_util.m"
          }
#line 469 "prog_io_util.m"
          break;
#line 469 "prog_io_util.m"
        case (MR_Integer) 3:
#line 469 "prog_io_util.m"
#line 469 "prog_io_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)))) {
#line 469 "prog_io_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 469 "prog_io_util.m"
            case (MR_Integer) 0:
#line 469 "prog_io_util.m"
              {
#line 469 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 469 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_12_12 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 2));
#line 469 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_13_13;
#line 469 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_14_14;

#line 469 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 469 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 469 "prog_io_util.m"
                  {
#line 469 "prog_io_util.m"
                    parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 469 "prog_io_util.m"
                    parse_tree__prog_io_util__V_14_14 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 2));
#line 10079 "parse_tree.prog_io_util.c"
                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_11_11 == parse_tree__prog_io_util__V_13_13);
#line 469 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 10083 "parse_tree.prog_io_util.c"
                      {
#line 10085 "parse_tree.prog_io_util.c"
                        return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_12_12, parse_tree__prog_io_util__V_14_14);
                      }
#line 469 "prog_io_util.m"
                  }
#line 469 "prog_io_util.m"
              }
#line 469 "prog_io_util.m"
              break;
#line 469 "prog_io_util.m"
            case (MR_Integer) 1:
#line 469 "prog_io_util.m"
              {
#line 469 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 469 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_16_16;

#line 469 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 469 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 469 "prog_io_util.m"
                  {
#line 469 "prog_io_util.m"
                    parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 10111 "parse_tree.prog_io_util.c"
                    {
#line 10113 "parse_tree.prog_io_util.c"
                      return parse_tree__prog_io_util__succeeded = mercury__list____Unify____list_1_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_15_15, parse_tree__prog_io_util__V_16_16);
                    }
#line 469 "prog_io_util.m"
                  }
#line 469 "prog_io_util.m"
              }
#line 469 "prog_io_util.m"
              break;
#line 469 "prog_io_util.m"
          }
#line 469 "prog_io_util.m"
          break;
#line 469 "prog_io_util.m"
      }
#line 469 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 469 "prog_io_util.m"
  }
#line 469 "prog_io_util.m"
}

#line 897 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_inst_kind_1_0(
#line 897 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_78,
#line 897 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 897 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 897 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 897 "prog_io_util.m"
{
#line 897 "prog_io_util.m"
  {
#line 897 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 897 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_76 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 897 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_77 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 897 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_76 == parse_tree__prog_io_util__CastY_77);
#line 897 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 10161 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 897 "prog_io_util.m"
    else
#line 897 "prog_io_util.m"
#line 897 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) {
#line 897 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 897 "prog_io_util.m"
        case (MR_Integer) 0:
#line 897 "prog_io_util.m"
          {
#line 897 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_82_82 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 897 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_83_83 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));

#line 897 "prog_io_util.m"
#line 897 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 897 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 897 "prog_io_util.m"
              case (MR_Integer) 0:
#line 897 "prog_io_util.m"
                {
#line 897 "prog_io_util.m"
                  MR_Box parse_tree__prog_io_util__V_6_6 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0));
#line 897 "prog_io_util.m"
                  MR_Box parse_tree__prog_io_util__V_7_7 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1));
#line 897 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_8_8;

#line 897 "prog_io_util.m"
                  {
#line 897 "prog_io_util.m"
                    mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, &parse_tree__prog_io_util__V_8_8, parse_tree__prog_io_util__V_83_83, parse_tree__prog_io_util__V_6_6);
                  }
#line 10200 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_8_8 == (MR_Integer) 0);
#line 897 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 897 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 897 "prog_io_util.m"
                    *parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__V_8_8;
#line 897 "prog_io_util.m"
                  else
#line 897 "prog_io_util.m"
                    {
#line 897 "prog_io_util.m"
                      mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_82_82, parse_tree__prog_io_util__V_7_7);
#line 897 "prog_io_util.m"
                      return;
                    }
#line 897 "prog_io_util.m"
                }
#line 897 "prog_io_util.m"
                break;
#line 897 "prog_io_util.m"
              case (MR_Integer) 1:
#line 10223 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 897 "prog_io_util.m"
                break;
#line 897 "prog_io_util.m"
              case (MR_Integer) 2:
#line 10229 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 897 "prog_io_util.m"
                break;
#line 897 "prog_io_util.m"
              case (MR_Integer) 3:
#line 897 "prog_io_util.m"
#line 897 "prog_io_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 897 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 897 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 10242 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 897 "prog_io_util.m"
                    break;
#line 897 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 10248 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 897 "prog_io_util.m"
                    break;
#line 897 "prog_io_util.m"
                }
#line 897 "prog_io_util.m"
                break;
#line 897 "prog_io_util.m"
            }
#line 897 "prog_io_util.m"
          }
#line 897 "prog_io_util.m"
          break;
#line 897 "prog_io_util.m"
        case (MR_Integer) 1:
#line 897 "prog_io_util.m"
          {
#line 897 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_80_80 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 897 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_81_81 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));

#line 897 "prog_io_util.m"
#line 897 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 897 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 897 "prog_io_util.m"
              case (MR_Integer) 0:
#line 10278 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 897 "prog_io_util.m"
                break;
#line 897 "prog_io_util.m"
              case (MR_Integer) 1:
#line 897 "prog_io_util.m"
                {
#line 897 "prog_io_util.m"
                  MR_Box parse_tree__prog_io_util__V_28_28 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0));
#line 897 "prog_io_util.m"
                  MR_Box parse_tree__prog_io_util__V_29_29 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1));
#line 897 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_30_30;

#line 897 "prog_io_util.m"
                  {
#line 897 "prog_io_util.m"
                    mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, &parse_tree__prog_io_util__V_30_30, parse_tree__prog_io_util__V_81_81, parse_tree__prog_io_util__V_28_28);
                  }
#line 10298 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_30_30 == (MR_Integer) 0);
#line 897 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 897 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 897 "prog_io_util.m"
                    *parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__V_30_30;
#line 897 "prog_io_util.m"
                  else
#line 897 "prog_io_util.m"
                    {
#line 897 "prog_io_util.m"
                      mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_80_80, parse_tree__prog_io_util__V_29_29);
#line 897 "prog_io_util.m"
                      return;
                    }
#line 897 "prog_io_util.m"
                }
#line 897 "prog_io_util.m"
                break;
#line 897 "prog_io_util.m"
              case (MR_Integer) 2:
#line 10321 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 897 "prog_io_util.m"
                break;
#line 897 "prog_io_util.m"
              case (MR_Integer) 3:
#line 897 "prog_io_util.m"
#line 897 "prog_io_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 897 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 897 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 10334 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 897 "prog_io_util.m"
                    break;
#line 897 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 10340 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 897 "prog_io_util.m"
                    break;
#line 897 "prog_io_util.m"
                }
#line 897 "prog_io_util.m"
                break;
#line 897 "prog_io_util.m"
            }
#line 897 "prog_io_util.m"
          }
#line 897 "prog_io_util.m"
          break;
#line 897 "prog_io_util.m"
        case (MR_Integer) 2:
#line 897 "prog_io_util.m"
          {
#line 897 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_79_79 = (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));

#line 897 "prog_io_util.m"
#line 897 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 897 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 897 "prog_io_util.m"
              case (MR_Integer) 0:
#line 10368 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 897 "prog_io_util.m"
                break;
#line 897 "prog_io_util.m"
              case (MR_Integer) 1:
#line 10374 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 897 "prog_io_util.m"
                break;
#line 897 "prog_io_util.m"
              case (MR_Integer) 2:
#line 897 "prog_io_util.m"
                {
#line 897 "prog_io_util.m"
                  MR_Box parse_tree__prog_io_util__V_47_47 = (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0));

#line 897 "prog_io_util.m"
                  {
#line 897 "prog_io_util.m"
                    mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_79_79, parse_tree__prog_io_util__V_47_47);
#line 897 "prog_io_util.m"
                    return;
                  }
#line 897 "prog_io_util.m"
                }
#line 897 "prog_io_util.m"
                break;
#line 897 "prog_io_util.m"
              case (MR_Integer) 3:
#line 897 "prog_io_util.m"
#line 897 "prog_io_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 897 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 897 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 10405 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 897 "prog_io_util.m"
                    break;
#line 897 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 10411 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 897 "prog_io_util.m"
                    break;
#line 897 "prog_io_util.m"
                }
#line 897 "prog_io_util.m"
                break;
#line 897 "prog_io_util.m"
            }
#line 897 "prog_io_util.m"
          }
#line 897 "prog_io_util.m"
          break;
#line 897 "prog_io_util.m"
        case (MR_Integer) 3:
#line 897 "prog_io_util.m"
#line 897 "prog_io_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)))) {
#line 897 "prog_io_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 897 "prog_io_util.m"
            case (MR_Integer) 0:
#line 897 "prog_io_util.m"
              {
#line 897 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_85_85 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));

#line 897 "prog_io_util.m"
#line 897 "prog_io_util.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 897 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 897 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 10446 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 897 "prog_io_util.m"
                    break;
#line 897 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 10452 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 897 "prog_io_util.m"
                    break;
#line 897 "prog_io_util.m"
                  case (MR_Integer) 2:
#line 10458 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 897 "prog_io_util.m"
                    break;
#line 897 "prog_io_util.m"
                  case (MR_Integer) 3:
#line 897 "prog_io_util.m"
#line 897 "prog_io_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 897 "prog_io_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 897 "prog_io_util.m"
                      case (MR_Integer) 0:
#line 897 "prog_io_util.m"
                        {
#line 897 "prog_io_util.m"
                          MR_Box parse_tree__prog_io_util__V_61_61 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1));

#line 897 "prog_io_util.m"
                          {
#line 897 "prog_io_util.m"
                            mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_85_85, parse_tree__prog_io_util__V_61_61);
#line 897 "prog_io_util.m"
                            return;
                          }
#line 897 "prog_io_util.m"
                        }
#line 897 "prog_io_util.m"
                        break;
#line 897 "prog_io_util.m"
                      case (MR_Integer) 1:
#line 10489 "parse_tree.prog_io_util.c"
                        *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 897 "prog_io_util.m"
                        break;
#line 897 "prog_io_util.m"
                    }
#line 897 "prog_io_util.m"
                    break;
#line 897 "prog_io_util.m"
                }
#line 897 "prog_io_util.m"
              }
#line 897 "prog_io_util.m"
              break;
#line 897 "prog_io_util.m"
            case (MR_Integer) 1:
#line 897 "prog_io_util.m"
              {
#line 897 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_84_84 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));

#line 897 "prog_io_util.m"
#line 897 "prog_io_util.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 897 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 897 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 10517 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 897 "prog_io_util.m"
                    break;
#line 897 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 10523 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 897 "prog_io_util.m"
                    break;
#line 897 "prog_io_util.m"
                  case (MR_Integer) 2:
#line 10529 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 897 "prog_io_util.m"
                    break;
#line 897 "prog_io_util.m"
                  case (MR_Integer) 3:
#line 897 "prog_io_util.m"
#line 897 "prog_io_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 897 "prog_io_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 897 "prog_io_util.m"
                      case (MR_Integer) 0:
#line 10542 "parse_tree.prog_io_util.c"
                        *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 897 "prog_io_util.m"
                        break;
#line 897 "prog_io_util.m"
                      case (MR_Integer) 1:
#line 897 "prog_io_util.m"
                        {
#line 897 "prog_io_util.m"
                          MR_Box parse_tree__prog_io_util__V_75_75 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1));

#line 897 "prog_io_util.m"
                          {
#line 897 "prog_io_util.m"
                            mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_84_84, parse_tree__prog_io_util__V_75_75);
#line 897 "prog_io_util.m"
                            return;
                          }
#line 897 "prog_io_util.m"
                        }
#line 897 "prog_io_util.m"
                        break;
#line 897 "prog_io_util.m"
                    }
#line 897 "prog_io_util.m"
                    break;
#line 897 "prog_io_util.m"
                }
#line 897 "prog_io_util.m"
              }
#line 897 "prog_io_util.m"
              break;
#line 897 "prog_io_util.m"
          }
#line 897 "prog_io_util.m"
          break;
#line 897 "prog_io_util.m"
      }
#line 897 "prog_io_util.m"
  }
#line 897 "prog_io_util.m"
}

#line 897 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_inst_kind_1_0(
#line 897 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_19,
#line 897 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 897 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 897 "prog_io_util.m"
{
#line 897 "prog_io_util.m"
  {
#line 897 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 897 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_17 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 897 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_18 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 897 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_17 == parse_tree__prog_io_util__CastY_18);
#line 897 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 897 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 897 "prog_io_util.m"
    else
#line 897 "prog_io_util.m"
#line 897 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) {
#line 897 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 897 "prog_io_util.m"
        case (MR_Integer) 0:
#line 897 "prog_io_util.m"
          {
#line 897 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_3_3 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0));
#line 897 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_4_4 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1));
#line 897 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_5_5;
#line 897 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_6_6;

#line 897 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 897 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 897 "prog_io_util.m"
              {
#line 897 "prog_io_util.m"
                parse_tree__prog_io_util__V_5_5 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));
#line 897 "prog_io_util.m"
                parse_tree__prog_io_util__V_6_6 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 10641 "parse_tree.prog_io_util.c"
                {
#line 10643 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_3_3, parse_tree__prog_io_util__V_5_5);
                }
#line 897 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 10648 "parse_tree.prog_io_util.c"
                  {
#line 10650 "parse_tree.prog_io_util.c"
                    return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_4_4, parse_tree__prog_io_util__V_6_6);
                  }
#line 897 "prog_io_util.m"
              }
#line 897 "prog_io_util.m"
          }
#line 897 "prog_io_util.m"
          break;
#line 897 "prog_io_util.m"
        case (MR_Integer) 1:
#line 897 "prog_io_util.m"
          {
#line 897 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_7_7 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0));
#line 897 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_8_8 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1));
#line 897 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_9_9;
#line 897 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_10_10;

#line 897 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 897 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 897 "prog_io_util.m"
              {
#line 897 "prog_io_util.m"
                parse_tree__prog_io_util__V_9_9 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));
#line 897 "prog_io_util.m"
                parse_tree__prog_io_util__V_10_10 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 10682 "parse_tree.prog_io_util.c"
                {
#line 10684 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_7_7, parse_tree__prog_io_util__V_9_9);
                }
#line 897 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 10689 "parse_tree.prog_io_util.c"
                  {
#line 10691 "parse_tree.prog_io_util.c"
                    return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_8_8, parse_tree__prog_io_util__V_10_10);
                  }
#line 897 "prog_io_util.m"
              }
#line 897 "prog_io_util.m"
          }
#line 897 "prog_io_util.m"
          break;
#line 897 "prog_io_util.m"
        case (MR_Integer) 2:
#line 897 "prog_io_util.m"
          {
#line 897 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_11_11 = (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0));
#line 897 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_12_12;

#line 897 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 897 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 897 "prog_io_util.m"
              {
#line 897 "prog_io_util.m"
                parse_tree__prog_io_util__V_12_12 = (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));
#line 10717 "parse_tree.prog_io_util.c"
                {
#line 10719 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_11_11, parse_tree__prog_io_util__V_12_12);
                }
#line 897 "prog_io_util.m"
              }
#line 897 "prog_io_util.m"
          }
#line 897 "prog_io_util.m"
          break;
#line 897 "prog_io_util.m"
        case (MR_Integer) 3:
#line 897 "prog_io_util.m"
#line 897 "prog_io_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)))) {
#line 897 "prog_io_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 897 "prog_io_util.m"
            case (MR_Integer) 0:
#line 897 "prog_io_util.m"
              {
#line 897 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_13_13 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1));
#line 897 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_14_14;

#line 897 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 897 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 897 "prog_io_util.m"
                  {
#line 897 "prog_io_util.m"
                    parse_tree__prog_io_util__V_14_14 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 10752 "parse_tree.prog_io_util.c"
                    {
#line 10754 "parse_tree.prog_io_util.c"
                      return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_13_13, parse_tree__prog_io_util__V_14_14);
                    }
#line 897 "prog_io_util.m"
                  }
#line 897 "prog_io_util.m"
              }
#line 897 "prog_io_util.m"
              break;
#line 897 "prog_io_util.m"
            case (MR_Integer) 1:
#line 897 "prog_io_util.m"
              {
#line 897 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_15_15 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1));
#line 897 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_16_16;

#line 897 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 897 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 897 "prog_io_util.m"
                  {
#line 897 "prog_io_util.m"
                    parse_tree__prog_io_util__V_16_16 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 10780 "parse_tree.prog_io_util.c"
                    {
#line 10782 "parse_tree.prog_io_util.c"
                      return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_15_15, parse_tree__prog_io_util__V_16_16);
                    }
#line 897 "prog_io_util.m"
                  }
#line 897 "prog_io_util.m"
              }
#line 897 "prog_io_util.m"
              break;
#line 897 "prog_io_util.m"
          }
#line 897 "prog_io_util.m"
          break;
#line 897 "prog_io_util.m"
      }
#line 897 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 897 "prog_io_util.m"
  }
#line 897 "prog_io_util.m"
}

#line 217 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____decl_attrs_0_0(
#line 217 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 217 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 217 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 217 "prog_io_util.m"
{
#line 217 "prog_io_util.m"
  {
#line 217 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 217 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_4 = parse_tree__prog_io_util__HeadVar__2_2;
#line 217 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_5 = parse_tree__prog_io_util__HeadVar__3_3;

#line 217 "prog_io_util.m"
    {
#line 217 "prog_io_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[4], parse_tree__prog_io_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar2_5)));
#line 217 "prog_io_util.m"
      return;
    }
#line 217 "prog_io_util.m"
  }
#line 217 "prog_io_util.m"
}

#line 217 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____decl_attrs_0_0(
#line 217 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 217 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 217 "prog_io_util.m"
{
#line 217 "prog_io_util.m"
  {
#line 217 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 217 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_3 = parse_tree__prog_io_util__HeadVar__1_1;
#line 217 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_4 = parse_tree__prog_io_util__HeadVar__2_2;

#line 217 "prog_io_util.m"
    {
#line 217 "prog_io_util.m"
      return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[4], ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar2_4)));
    }
#line 217 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 217 "prog_io_util.m"
  }
#line 217 "prog_io_util.m"
}

#line 202 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____decl_attribute_0_0(
#line 202 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 202 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 202 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 202 "prog_io_util.m"
{
#line 202 "prog_io_util.m"
  {
#line 202 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 202 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_46 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 202 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_47 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 202 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_46 == parse_tree__prog_io_util__CastY_47);
#line 202 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 10890 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 202 "prog_io_util.m"
    else
#line 202 "prog_io_util.m"
#line 202 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) {
#line 202 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 202 "prog_io_util.m"
        case (MR_Integer) 0:
#line 202 "prog_io_util.m"
#line 202 "prog_io_util.m"
          switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 202 "prog_io_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 202 "prog_io_util.m"
            case (MR_Integer) 0:
#line 202 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 202 "prog_io_util.m"
              break;
#line 202 "prog_io_util.m"
            case (MR_Integer) 1:
#line 10914 "parse_tree.prog_io_util.c"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 202 "prog_io_util.m"
              break;
#line 202 "prog_io_util.m"
            case (MR_Integer) 2:
#line 10920 "parse_tree.prog_io_util.c"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 202 "prog_io_util.m"
              break;
#line 202 "prog_io_util.m"
            case (MR_Integer) 3:
#line 10926 "parse_tree.prog_io_util.c"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 202 "prog_io_util.m"
              break;
#line 202 "prog_io_util.m"
          }
#line 202 "prog_io_util.m"
          break;
#line 202 "prog_io_util.m"
        case (MR_Integer) 1:
#line 202 "prog_io_util.m"
          {
#line 202 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 202 "prog_io_util.m"
#line 202 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 202 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 202 "prog_io_util.m"
              case (MR_Integer) 0:
#line 10948 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 202 "prog_io_util.m"
                break;
#line 202 "prog_io_util.m"
              case (MR_Integer) 1:
#line 202 "prog_io_util.m"
                {
#line 202 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));
#line 202 "prog_io_util.m"
                  MR_Integer parse_tree__prog_io_util__V_60_60 = (MR_Integer) parse_tree__prog_io_util__V_55_55;
#line 202 "prog_io_util.m"
                  MR_Integer parse_tree__prog_io_util__V_61_61 = (MR_Integer) parse_tree__prog_io_util__V_5_5;

#line 202 "prog_io_util.m"
                  {
#line 202 "prog_io_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_60_60, parse_tree__prog_io_util__V_61_61);
#line 202 "prog_io_util.m"
                    return;
                  }
#line 202 "prog_io_util.m"
                }
#line 202 "prog_io_util.m"
                break;
#line 202 "prog_io_util.m"
              case (MR_Integer) 2:
#line 10976 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 202 "prog_io_util.m"
                break;
#line 202 "prog_io_util.m"
              case (MR_Integer) 3:
#line 10982 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 202 "prog_io_util.m"
                break;
#line 202 "prog_io_util.m"
            }
#line 202 "prog_io_util.m"
          }
#line 202 "prog_io_util.m"
          break;
#line 202 "prog_io_util.m"
        case (MR_Integer) 2:
#line 202 "prog_io_util.m"
          {
#line 202 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 202 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 202 "prog_io_util.m"
#line 202 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 202 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 202 "prog_io_util.m"
              case (MR_Integer) 0:
#line 11008 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 202 "prog_io_util.m"
                break;
#line 202 "prog_io_util.m"
              case (MR_Integer) 1:
#line 11014 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 202 "prog_io_util.m"
                break;
#line 202 "prog_io_util.m"
              case (MR_Integer) 2:
#line 202 "prog_io_util.m"
                {
#line 202 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));
#line 202 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1)));
#line 202 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_20_20;
#line 202 "prog_io_util.m"
                  MR_Integer parse_tree__prog_io_util__V_62_62 = (MR_Integer) parse_tree__prog_io_util__V_57_57;
#line 202 "prog_io_util.m"
                  MR_Integer parse_tree__prog_io_util__V_63_63 = (MR_Integer) parse_tree__prog_io_util__V_18_18;

#line 202 "prog_io_util.m"
                  {
#line 202 "prog_io_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_io_util__V_20_20, parse_tree__prog_io_util__V_62_62, parse_tree__prog_io_util__V_63_63);
                  }
#line 11038 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_20_20 == (MR_Integer) 0);
#line 202 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 202 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 202 "prog_io_util.m"
                    *parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__V_20_20;
#line 202 "prog_io_util.m"
                  else
#line 202 "prog_io_util.m"
                    {
#line 202 "prog_io_util.m"
                      {
#line 202 "prog_io_util.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[3], parse_tree__prog_io_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_util__V_56_56)), ((MR_Box) (parse_tree__prog_io_util__V_19_19)));
#line 202 "prog_io_util.m"
                        return;
                      }
#line 202 "prog_io_util.m"
                    }
#line 202 "prog_io_util.m"
                }
#line 202 "prog_io_util.m"
                break;
#line 202 "prog_io_util.m"
              case (MR_Integer) 3:
#line 11065 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 202 "prog_io_util.m"
                break;
#line 202 "prog_io_util.m"
            }
#line 202 "prog_io_util.m"
          }
#line 202 "prog_io_util.m"
          break;
#line 202 "prog_io_util.m"
        case (MR_Integer) 3:
#line 202 "prog_io_util.m"
          {
#line 202 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 202 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 202 "prog_io_util.m"
#line 202 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 202 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 202 "prog_io_util.m"
              case (MR_Integer) 0:
#line 11091 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 202 "prog_io_util.m"
                break;
#line 202 "prog_io_util.m"
              case (MR_Integer) 1:
#line 11097 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 202 "prog_io_util.m"
                break;
#line 202 "prog_io_util.m"
              case (MR_Integer) 2:
#line 11103 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 202 "prog_io_util.m"
                break;
#line 202 "prog_io_util.m"
              case (MR_Integer) 3:
#line 202 "prog_io_util.m"
                {
#line 202 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));
#line 202 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1)));
#line 202 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_38_38;
#line 202 "prog_io_util.m"
                  MR_Integer parse_tree__prog_io_util__V_58_58 = (MR_Integer) parse_tree__prog_io_util__V_54_54;
#line 202 "prog_io_util.m"
                  MR_Integer parse_tree__prog_io_util__V_59_59 = (MR_Integer) parse_tree__prog_io_util__V_36_36;

#line 202 "prog_io_util.m"
                  {
#line 202 "prog_io_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_io_util__V_38_38, parse_tree__prog_io_util__V_58_58, parse_tree__prog_io_util__V_59_59);
                  }
#line 11127 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_38_38 == (MR_Integer) 0);
#line 202 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 202 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 202 "prog_io_util.m"
                    *parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__V_38_38;
#line 202 "prog_io_util.m"
                  else
#line 202 "prog_io_util.m"
                    {
#line 202 "prog_io_util.m"
                      {
#line 202 "prog_io_util.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[0], parse_tree__prog_io_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_util__V_53_53)), ((MR_Box) (parse_tree__prog_io_util__V_37_37)));
#line 202 "prog_io_util.m"
                        return;
                      }
#line 202 "prog_io_util.m"
                    }
#line 202 "prog_io_util.m"
                }
#line 202 "prog_io_util.m"
                break;
#line 202 "prog_io_util.m"
            }
#line 202 "prog_io_util.m"
          }
#line 202 "prog_io_util.m"
          break;
#line 202 "prog_io_util.m"
      }
#line 202 "prog_io_util.m"
  }
#line 202 "prog_io_util.m"
}

#line 202 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____decl_attribute_0_0(
#line 202 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 202 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 202 "prog_io_util.m"
{
#line 202 "prog_io_util.m"
  {
#line 202 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 202 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_15 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 202 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_16 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 202 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_15 == parse_tree__prog_io_util__CastY_16);
#line 202 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 202 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 202 "prog_io_util.m"
    else
#line 202 "prog_io_util.m"
#line 202 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) {
#line 202 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 202 "prog_io_util.m"
        case (MR_Integer) 0:
#line 202 "prog_io_util.m"
          {
#line 202 "prog_io_util.m"
            MR_Integer parse_tree__prog_io_util__CastX_13 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 202 "prog_io_util.m"
            MR_Integer parse_tree__prog_io_util__CastY_14 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 202 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastY_14 == parse_tree__prog_io_util__CastX_13);
#line 202 "prog_io_util.m"
          }
#line 202 "prog_io_util.m"
          break;
#line 202 "prog_io_util.m"
        case (MR_Integer) 1:
#line 202 "prog_io_util.m"
          {
#line 202 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 202 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_4_4;

#line 202 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 202 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 202 "prog_io_util.m"
              {
#line 202 "prog_io_util.m"
                parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 11228 "parse_tree.prog_io_util.c"
                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_3_3 == parse_tree__prog_io_util__V_4_4);
#line 202 "prog_io_util.m"
              }
#line 202 "prog_io_util.m"
          }
#line 202 "prog_io_util.m"
          break;
#line 202 "prog_io_util.m"
        case (MR_Integer) 2:
#line 202 "prog_io_util.m"
          {
#line 202 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TypeInfo_18_18;
#line 202 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 202 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 202 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_7_7;
#line 202 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_8_8;

#line 202 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 202 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 202 "prog_io_util.m"
              {
#line 202 "prog_io_util.m"
                parse_tree__prog_io_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 202 "prog_io_util.m"
                parse_tree__prog_io_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 11261 "parse_tree.prog_io_util.c"
                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_5_5 == parse_tree__prog_io_util__V_7_7);
#line 202 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 202 "prog_io_util.m"
                  {
#line 11267 "parse_tree.prog_io_util.c"
                    parse_tree__prog_io_util__TypeInfo_18_18 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[3];
#line 11269 "parse_tree.prog_io_util.c"
                    {
#line 11271 "parse_tree.prog_io_util.c"
                      return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_18_18, ((MR_Box) (parse_tree__prog_io_util__V_6_6)), ((MR_Box) (parse_tree__prog_io_util__V_8_8)));
                    }
#line 202 "prog_io_util.m"
                  }
#line 202 "prog_io_util.m"
              }
#line 202 "prog_io_util.m"
          }
#line 202 "prog_io_util.m"
          break;
#line 202 "prog_io_util.m"
        case (MR_Integer) 3:
#line 202 "prog_io_util.m"
          {
#line 202 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TypeInfo_17_17;
#line 202 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 202 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 202 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_11_11;
#line 202 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_12_12;

#line 202 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 202 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 202 "prog_io_util.m"
              {
#line 202 "prog_io_util.m"
                parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 202 "prog_io_util.m"
                parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 11307 "parse_tree.prog_io_util.c"
                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_9_9 == parse_tree__prog_io_util__V_11_11);
#line 202 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 202 "prog_io_util.m"
                  {
#line 11313 "parse_tree.prog_io_util.c"
                    parse_tree__prog_io_util__TypeInfo_17_17 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[0];
#line 11315 "parse_tree.prog_io_util.c"
                    {
#line 11317 "parse_tree.prog_io_util.c"
                      return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_17_17, ((MR_Box) (parse_tree__prog_io_util__V_10_10)), ((MR_Box) (parse_tree__prog_io_util__V_12_12)));
                    }
#line 202 "prog_io_util.m"
                  }
#line 202 "prog_io_util.m"
              }
#line 202 "prog_io_util.m"
          }
#line 202 "prog_io_util.m"
          break;
#line 202 "prog_io_util.m"
      }
#line 202 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 202 "prog_io_util.m"
  }
#line 202 "prog_io_util.m"
}

#line 140 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____allow_constrained_inst_var_0_0(
#line 140 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 140 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 140 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 140 "prog_io_util.m"
{
#line 140 "prog_io_util.m"
  {
#line 140 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 140 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 140 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 140 "prog_io_util.m"
    {
#line 140 "prog_io_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__Cast_HeadVar1_4, parse_tree__prog_io_util__Cast_HeadVar2_5);
#line 140 "prog_io_util.m"
      return;
    }
#line 140 "prog_io_util.m"
  }
#line 140 "prog_io_util.m"
}

#line 140 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____allow_constrained_inst_var_0_0(
#line 140 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_1,
#line 140 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 140 "prog_io_util.m"
{
#line 11378 "parse_tree.prog_io_util.c"
  {
#line 11380 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__HeadVar__2_1 == parse_tree__prog_io_util__HeadVar__2_2);

#line 11383 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 11385 "parse_tree.prog_io_util.c"
  }
#line 140 "prog_io_util.m"
}

#line 1542 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(
#line 1542 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_43,
#line 1542 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_6,
#line 1542 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_7,
#line 1542 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Expected_8,
#line 1542 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_9,
#line 1542 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Spec_10)
#line 1542 "prog_io_util.m"
{
#line 1546 "prog_io_util.m"
  {
#line 1546 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1546 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__TermStr_11;
#line 1546 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Pieces_12;
#line 1546 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 1546 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_15_15;
#line 1546 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_18_18;
#line 1546 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_19_19;
#line 1546 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_20_20;
#line 1546 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_23_23;
#line 1546 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_26_26;
#line 1546 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_27_27;
#line 1546 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_36_36;
#line 1546 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_37_37;
#line 1546 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_38_38;
#line 1546 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_39_39;
#line 1546 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_40_40;

#line 1547 "prog_io_util.m"
    {
#line 1547 "prog_io_util.m"
      parse_tree__prog_io_util__TermStr_11 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_util__TypeInfo_for_T_43, parse_tree__prog_io_util__VarSet_7, parse_tree__prog_io_util__Term_9);
    }
#line 1549 "prog_io_util.m"
    {
#line 1549 "prog_io_util.m"
      parse_tree__prog_io_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1549 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1549 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io_util__Expected_8));
#line 1549 "prog_io_util.m"
    }
#line 1550 "prog_io_util.m"
    {
#line 1550 "prog_io_util.m"
      parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1550 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1550 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_11));
#line 1550 "prog_io_util.m"
    }
#line 1550 "prog_io_util.m"
    {
#line 1550 "prog_io_util.m"
      parse_tree__prog_io_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1550 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
#line 1550 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[13])));
#line 1550 "prog_io_util.m"
    }
#line 1550 "prog_io_util.m"
    {
#line 1550 "prog_io_util.m"
      parse_tree__prog_io_util__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1550 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_23_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[21])));
#line 1550 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_23_23, 1) = ((MR_Box) (parse_tree__prog_io_util__V_26_26));
#line 1550 "prog_io_util.m"
    }
#line 1549 "prog_io_util.m"
    {
#line 1549 "prog_io_util.m"
      parse_tree__prog_io_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1549 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[20])));
#line 1549 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, 1) = ((MR_Box) (parse_tree__prog_io_util__V_23_23));
#line 1549 "prog_io_util.m"
    }
#line 1549 "prog_io_util.m"
    {
#line 1549 "prog_io_util.m"
      parse_tree__prog_io_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1549 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, 0) = ((MR_Box) (parse_tree__prog_io_util__V_19_19));
#line 1549 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, 1) = ((MR_Box) (parse_tree__prog_io_util__V_20_20));
#line 1549 "prog_io_util.m"
    }
#line 1549 "prog_io_util.m"
    {
#line 1549 "prog_io_util.m"
      parse_tree__prog_io_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1549 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[19])));
#line 1549 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, 1) = ((MR_Box) (parse_tree__prog_io_util__V_18_18));
#line 1549 "prog_io_util.m"
    }
#line 1548 "prog_io_util.m"
    {
#line 1548 "prog_io_util.m"
      parse_tree__prog_io_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1548 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_13_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1548 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_13_13, 1) = ((MR_Box) (parse_tree__prog_io_util__V_15_15));
#line 1548 "prog_io_util.m"
    }
#line 1548 "prog_io_util.m"
    {
#line 1548 "prog_io_util.m"
      parse_tree__prog_io_util__Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_util__ContextPieces_6, parse_tree__prog_io_util__V_13_13);
    }
#line 1552 "prog_io_util.m"
    {
#line 1552 "prog_io_util.m"
      parse_tree__prog_io_util__V_38_38 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_util__TypeInfo_for_T_43, parse_tree__prog_io_util__Term_9);
    }
#line 1552 "prog_io_util.m"
    {
#line 1552 "prog_io_util.m"
      parse_tree__prog_io_util__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1552 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_12));
#line 1552 "prog_io_util.m"
    }
#line 1552 "prog_io_util.m"
    {
#line 1552 "prog_io_util.m"
      parse_tree__prog_io_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1552 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_util__V_40_40));
#line 1552 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1552 "prog_io_util.m"
    }
#line 1552 "prog_io_util.m"
    {
#line 1552 "prog_io_util.m"
      parse_tree__prog_io_util__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1552 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_util__V_38_38));
#line 1552 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_37_37, 1) = ((MR_Box) (parse_tree__prog_io_util__V_39_39));
#line 1552 "prog_io_util.m"
    }
#line 1552 "prog_io_util.m"
    {
#line 1552 "prog_io_util.m"
      parse_tree__prog_io_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1552 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_util__V_37_37));
#line 1552 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1552 "prog_io_util.m"
    }
#line 1551 "prog_io_util.m"
    {
#line 1551 "prog_io_util.m"
      MR_Word base;
#line 1551 "prog_io_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1551 "prog_io_util.m"
      *parse_tree__prog_io_util__Spec_10 = base;
#line 1551 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1551 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1551 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 1551 "prog_io_util.m"
    }
#line 1546 "prog_io_util.m"
  }
#line 1542 "prog_io_util.m"
}

#line 1532 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__generate_repeated_state_var_msg_4_p_0(
#line 1532 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_33,
#line 1532 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_5,
#line 1532 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 1532 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_7,
#line 1532 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Spec_8)
#line 1532 "prog_io_util.m"
{
#line 1535 "prog_io_util.m"
  {
#line 1535 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1535 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__TermStr_9;
#line 1535 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Pieces_10;
#line 1535 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;
#line 1535 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 1535 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_16_16;
#line 1535 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_17_17;
#line 1535 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_26_26;
#line 1535 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_27_27;
#line 1535 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_28_28;
#line 1535 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_29_29;
#line 1535 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_30_30;

#line 1536 "prog_io_util.m"
    {
#line 1536 "prog_io_util.m"
      parse_tree__prog_io_util__TermStr_9 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_util__TypeInfo_for_T_33, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__Term_7);
    }
#line 1538 "prog_io_util.m"
    {
#line 1538 "prog_io_util.m"
      parse_tree__prog_io_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1538 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1538 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_17_17, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_9));
#line 1538 "prog_io_util.m"
    }
#line 1538 "prog_io_util.m"
    {
#line 1538 "prog_io_util.m"
      parse_tree__prog_io_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1538 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 0) = ((MR_Box) (parse_tree__prog_io_util__V_17_17));
#line 1538 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[13])));
#line 1538 "prog_io_util.m"
    }
#line 1538 "prog_io_util.m"
    {
#line 1538 "prog_io_util.m"
      parse_tree__prog_io_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1538 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_13_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[18])));
#line 1538 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_13_13, 1) = ((MR_Box) (parse_tree__prog_io_util__V_16_16));
#line 1538 "prog_io_util.m"
    }
#line 1537 "prog_io_util.m"
    {
#line 1537 "prog_io_util.m"
      parse_tree__prog_io_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1537 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_11_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1537 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_11_11, 1) = ((MR_Box) (parse_tree__prog_io_util__V_13_13));
#line 1537 "prog_io_util.m"
    }
#line 1537 "prog_io_util.m"
    {
#line 1537 "prog_io_util.m"
      parse_tree__prog_io_util__Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_util__ContextPieces_5, parse_tree__prog_io_util__V_11_11);
    }
#line 1540 "prog_io_util.m"
    {
#line 1540 "prog_io_util.m"
      parse_tree__prog_io_util__V_28_28 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_util__TypeInfo_for_T_33, parse_tree__prog_io_util__Term_7);
    }
#line 1540 "prog_io_util.m"
    {
#line 1540 "prog_io_util.m"
      parse_tree__prog_io_util__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1540 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_10));
#line 1540 "prog_io_util.m"
    }
#line 1540 "prog_io_util.m"
    {
#line 1540 "prog_io_util.m"
      parse_tree__prog_io_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1540 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io_util__V_30_30));
#line 1540 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1540 "prog_io_util.m"
    }
#line 1540 "prog_io_util.m"
    {
#line 1540 "prog_io_util.m"
      parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1540 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_util__V_28_28));
#line 1540 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io_util__V_29_29));
#line 1540 "prog_io_util.m"
    }
#line 1540 "prog_io_util.m"
    {
#line 1540 "prog_io_util.m"
      parse_tree__prog_io_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1540 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
#line 1540 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1540 "prog_io_util.m"
    }
#line 1539 "prog_io_util.m"
    {
#line 1539 "prog_io_util.m"
      MR_Word base;
#line 1539 "prog_io_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1539 "prog_io_util.m"
      *parse_tree__prog_io_util__Spec_8 = base;
#line 1539 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1539 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1539 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_26_26));
#line 1539 "prog_io_util.m"
    }
#line 1535 "prog_io_util.m"
  }
#line 1532 "prog_io_util.m"
}

#line 1522 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(
#line 1522 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_33,
#line 1522 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_5,
#line 1522 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 1522 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_7,
#line 1522 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Spec_8)
#line 1522 "prog_io_util.m"
{
#line 1525 "prog_io_util.m"
  {
#line 1525 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1525 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__TermStr_9;
#line 1525 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Pieces_10;
#line 1525 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;
#line 1525 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 1525 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_16_16;
#line 1525 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_17_17;
#line 1525 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_26_26;
#line 1525 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_27_27;
#line 1525 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_28_28;
#line 1525 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_29_29;
#line 1525 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_30_30;

#line 1526 "prog_io_util.m"
    {
#line 1526 "prog_io_util.m"
      parse_tree__prog_io_util__TermStr_9 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_util__TypeInfo_for_T_33, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__Term_7);
    }
#line 1528 "prog_io_util.m"
    {
#line 1528 "prog_io_util.m"
      parse_tree__prog_io_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1528 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1528 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_17_17, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_9));
#line 1528 "prog_io_util.m"
    }
#line 1528 "prog_io_util.m"
    {
#line 1528 "prog_io_util.m"
      parse_tree__prog_io_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1528 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 0) = ((MR_Box) (parse_tree__prog_io_util__V_17_17));
#line 1528 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[13])));
#line 1528 "prog_io_util.m"
    }
#line 1528 "prog_io_util.m"
    {
#line 1528 "prog_io_util.m"
      parse_tree__prog_io_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1528 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_13_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[17])));
#line 1528 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_13_13, 1) = ((MR_Box) (parse_tree__prog_io_util__V_16_16));
#line 1528 "prog_io_util.m"
    }
#line 1527 "prog_io_util.m"
    {
#line 1527 "prog_io_util.m"
      parse_tree__prog_io_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1527 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_11_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1527 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_11_11, 1) = ((MR_Box) (parse_tree__prog_io_util__V_13_13));
#line 1527 "prog_io_util.m"
    }
#line 1527 "prog_io_util.m"
    {
#line 1527 "prog_io_util.m"
      parse_tree__prog_io_util__Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_util__ContextPieces_5, parse_tree__prog_io_util__V_11_11);
    }
#line 1530 "prog_io_util.m"
    {
#line 1530 "prog_io_util.m"
      parse_tree__prog_io_util__V_28_28 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_util__TypeInfo_for_T_33, parse_tree__prog_io_util__Term_7);
    }
#line 1530 "prog_io_util.m"
    {
#line 1530 "prog_io_util.m"
      parse_tree__prog_io_util__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1530 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_10));
#line 1530 "prog_io_util.m"
    }
#line 1530 "prog_io_util.m"
    {
#line 1530 "prog_io_util.m"
      parse_tree__prog_io_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1530 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io_util__V_30_30));
#line 1530 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1530 "prog_io_util.m"
    }
#line 1530 "prog_io_util.m"
    {
#line 1530 "prog_io_util.m"
      parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1530 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_util__V_28_28));
#line 1530 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io_util__V_29_29));
#line 1530 "prog_io_util.m"
    }
#line 1530 "prog_io_util.m"
    {
#line 1530 "prog_io_util.m"
      parse_tree__prog_io_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1530 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
#line 1530 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1530 "prog_io_util.m"
    }
#line 1529 "prog_io_util.m"
    {
#line 1529 "prog_io_util.m"
      MR_Word base;
#line 1529 "prog_io_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1529 "prog_io_util.m"
      *parse_tree__prog_io_util__Spec_8 = base;
#line 1529 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1529 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1529 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_26_26));
#line 1529 "prog_io_util.m"
    }
#line 1525 "prog_io_util.m"
  }
#line 1522 "prog_io_util.m"
}

#line 1249 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__map_parser_one_or_more_4_p_0(
#line 1249 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_29,
#line 1249 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Parser_5,
#line 1249 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Head_6,
#line 1249 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Tail_7,
#line 1249 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_8)
#line 1249 "prog_io_util.m"
{
#line 1252 "prog_io_util.m"
  {
#line 1252 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1252 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__HeadResult_9;
#line 1253 "prog_io_util.m"
    void MR_CALL (* parse_tree__prog_io_util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Parser_5, (MR_Integer) 1)));
#line 1253 "prog_io_util.m"
    MR_Box parse_tree__prog_io_util__conv1_HeadResult_9;

#line 1253 "prog_io_util.m"
    {
#line 1253 "prog_io_util.m"
      parse_tree__prog_io_util__func_0(((MR_Box) parse_tree__prog_io_util__Parser_5), ((MR_Box) (parse_tree__prog_io_util__Head_6)), &parse_tree__prog_io_util__conv1_HeadResult_9);
    }
#line 1253 "prog_io_util.m"
    parse_tree__prog_io_util__HeadResult_9 = ((MR_Word) parse_tree__prog_io_util__conv1_HeadResult_9);
#line 1263 "prog_io_util.m"
    if ((parse_tree__prog_io_util__Tail_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1255 "prog_io_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadResult_9)) == (MR_mktag((MR_Integer) 0))))
#line 1258 "prog_io_util.m"
        *parse_tree__prog_io_util__Result_8 = (MR_Word) parse_tree__prog_io_util__HeadResult_9;
#line 1255 "prog_io_util.m"
      else
#line 1260 "prog_io_util.m"
        {
#line 1260 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__Item_11 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadResult_9, (MR_Integer) 0));
#line 1260 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_23_23;

#line 1261 "prog_io_util.m"
          {
#line 1261 "prog_io_util.m"
            parse_tree__prog_io_util__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1261 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_23_23, 0) = parse_tree__prog_io_util__Item_11;
#line 1261 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1261 "prog_io_util.m"
          }
#line 1261 "prog_io_util.m"
          {
#line 1261 "prog_io_util.m"
            MR_Word base;
#line 1261 "prog_io_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1261 "prog_io_util.m"
            *parse_tree__prog_io_util__Result_8 = base;
#line 1261 "prog_io_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_23_23));
#line 1261 "prog_io_util.m"
          }
#line 1260 "prog_io_util.m"
        }
#line 1263 "prog_io_util.m"
    else
#line 1264 "prog_io_util.m"
      {
#line 1264 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__HeadTail_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Tail_7, (MR_Integer) 0)));
#line 1264 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TailTail_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Tail_7, (MR_Integer) 1)));
#line 1264 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TailResult_14;

#line 1265 "prog_io_util.m"
        {
#line 1265 "prog_io_util.m"
          parse_tree__prog_io_util__map_parser_one_or_more_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_29, parse_tree__prog_io_util__Parser_5, parse_tree__prog_io_util__HeadTail_12, parse_tree__prog_io_util__TailTail_13, &parse_tree__prog_io_util__TailResult_14);
        }
#line 1270 "prog_io_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadResult_9)) == (MR_mktag((MR_Integer) 0))))
#line 1270 "prog_io_util.m"
          {
#line 1270 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadResult_9, (MR_Integer) 0)));

#line 1270 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__TailResult_14)) == (MR_mktag((MR_Integer) 0))))
#line 1267 "prog_io_util.m"
              {
#line 1267 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailSpecs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TailResult_14, (MR_Integer) 0)));
#line 1267 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_22_22;

#line 1269 "prog_io_util.m"
                {
#line 1269 "prog_io_util.m"
                  parse_tree__prog_io_util__V_22_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_util__V_31_31, parse_tree__prog_io_util__TailSpecs_16);
                }
#line 1269 "prog_io_util.m"
                {
#line 1269 "prog_io_util.m"
                  MR_Word base;
#line 1269 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1269 "prog_io_util.m"
                  *parse_tree__prog_io_util__Result_8 = base;
#line 1269 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_22_22));
#line 1269 "prog_io_util.m"
                }
#line 1267 "prog_io_util.m"
              }
#line 1270 "prog_io_util.m"
            else
#line 1273 "prog_io_util.m"
              *parse_tree__prog_io_util__Result_8 = (MR_Word) parse_tree__prog_io_util__HeadResult_9;
#line 1270 "prog_io_util.m"
          }
#line 1270 "prog_io_util.m"
        else
#line 1270 "prog_io_util.m"
          {
#line 1270 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_32_32 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadResult_9, (MR_Integer) 0));

#line 1270 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__TailResult_14)) == (MR_mktag((MR_Integer) 0))))
#line 1277 "prog_io_util.m"
              *parse_tree__prog_io_util__Result_8 = parse_tree__prog_io_util__TailResult_14;
#line 1270 "prog_io_util.m"
            else
#line 1279 "prog_io_util.m"
              {
#line 1279 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailItems_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TailResult_14, (MR_Integer) 0)));
#line 1279 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_21_21;

#line 1281 "prog_io_util.m"
                {
#line 1281 "prog_io_util.m"
                  parse_tree__prog_io_util__V_21_21 = mercury__list__one_or_more_cons_2_f_0(parse_tree__prog_io_util__TypeInfo_for_T_29, parse_tree__prog_io_util__V_32_32, parse_tree__prog_io_util__TailItems_20);
                }
#line 1281 "prog_io_util.m"
                {
#line 1281 "prog_io_util.m"
                  MR_Word base;
#line 1281 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1281 "prog_io_util.m"
                  *parse_tree__prog_io_util__Result_8 = base;
#line 1281 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_21_21));
#line 1281 "prog_io_util.m"
                }
#line 1279 "prog_io_util.m"
              }
#line 1270 "prog_io_util.m"
          }
#line 1264 "prog_io_util.m"
      }
#line 1252 "prog_io_util.m"
  }
#line 1249 "prog_io_util.m"
}

#line 1163 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_bound_inst_3_p_0(
#line 1163 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_4,
#line 1163 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__InstTerm_5,
#line 1163 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__BoundInst_6)
#line 1163 "prog_io_util.m"
{
#line 1166 "prog_io_util.m"
  {
#line 1166 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__InstTerm_5)) == (MR_mktag((MR_Integer) 0)));
#line 1166 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Functor_7;
#line 1166 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Args0_8;
#line 1166 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Args1_12;
#line 1166 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__ConsId_14;
#line 1166 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Args_21;
#line 1167 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 1167 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1167 "prog_io_util.m"
      {
#line 1167 "prog_io_util.m"
        parse_tree__prog_io_util__Functor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__InstTerm_5, (MR_Integer) 0)));
#line 1167 "prog_io_util.m"
        parse_tree__prog_io_util__Args0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__InstTerm_5, (MR_Integer) 1)));
#line 1167 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__InstTerm_5, (MR_Integer) 2)));
#line 1175 "prog_io_util.m"
#line 1175 "prog_io_util.m"
        switch (MR_tag((MR_Word) parse_tree__prog_io_util__Functor_7)) {
#line 1175 "prog_io_util.m"
          default:
#line 1175 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 1175 "prog_io_util.m"
            break;
#line 1175 "prog_io_util.m"
          case (MR_Integer) 0:
#line 1170 "prog_io_util.m"
            {
#line 1170 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__TypeInfo_25_25;
#line 1170 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__SymName_11;
#line 1170 "prog_io_util.m"
              MR_Integer parse_tree__prog_io_util__Arity_13;
#line 1170 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_22_22;

#line 1171 "prog_io_util.m"
              {
#line 1171 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_from_f_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__Functor_7, parse_tree__prog_io_util__Args0_8, &parse_tree__prog_io_util__SymName_11, &parse_tree__prog_io_util__Args1_12);
              }
#line 1170 "prog_io_util.m"
              if (parse_tree__prog_io_util__succeeded)
#line 1170 "prog_io_util.m"
                {
#line 12154 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__TypeInfo_25_25 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[0];
#line 1173 "prog_io_util.m"
                  {
#line 1173 "prog_io_util.m"
                    mercury__list__length_2_p_0(parse_tree__prog_io_util__TypeInfo_25_25, parse_tree__prog_io_util__Args1_12, &parse_tree__prog_io_util__Arity_13);
                  }
#line 1174 "prog_io_util.m"
                  {
#line 1174 "prog_io_util.m"
                    parse_tree__prog_io_util__V_22_22 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                  }
#line 1174 "prog_io_util.m"
                  {
#line 1174 "prog_io_util.m"
                    parse_tree__prog_io_util__ConsId_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1174 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__ConsId_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1174 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__ConsId_14, 1) = ((MR_Box) (parse_tree__prog_io_util__SymName_11));
#line 1174 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__ConsId_14, 2) = ((MR_Box) (parse_tree__prog_io_util__Arity_13));
#line 1174 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__ConsId_14, 3) = ((MR_Box) (parse_tree__prog_io_util__V_22_22));
#line 1174 "prog_io_util.m"
                  }
#line 1174 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1170 "prog_io_util.m"
                }
#line 1170 "prog_io_util.m"
            }
#line 1175 "prog_io_util.m"
            break;
#line 1175 "prog_io_util.m"
          case (MR_Integer) 1:
#line 1175 "prog_io_util.m"
          case (MR_Integer) 2:
#line 1185 "prog_io_util.m"
            {
#line 1185 "prog_io_util.m"
              MR_Integer parse_tree__prog_io_util__Arity_23;

#line 1186 "prog_io_util.m"
              parse_tree__prog_io_util__Args1_12 = parse_tree__prog_io_util__Args0_8;
#line 1187 "prog_io_util.m"
              {
#line 1187 "prog_io_util.m"
                mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[0], parse_tree__prog_io_util__Args1_12, &parse_tree__prog_io_util__Arity_23);
              }
#line 1188 "prog_io_util.m"
              {
#line 1188 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = parse_tree__prog_util__make_functor_cons_id_3_p_0(parse_tree__prog_io_util__Functor_7, parse_tree__prog_io_util__Arity_23, &parse_tree__prog_io_util__ConsId_14);
              }
#line 1185 "prog_io_util.m"
            }
#line 1175 "prog_io_util.m"
            break;
#line 1175 "prog_io_util.m"
          case (MR_Integer) 3:
#line 1175 "prog_io_util.m"
#line 1175 "prog_io_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Functor_7, (MR_Integer) 0)))) {
#line 1175 "prog_io_util.m"
              default:
#line 1175 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 1175 "prog_io_util.m"
                break;
#line 1175 "prog_io_util.m"
              case (MR_Integer) 0:
#line 1175 "prog_io_util.m"
              case (MR_Integer) 1:
#line 1185 "prog_io_util.m"
                {
#line 1185 "prog_io_util.m"
                  MR_Integer parse_tree__prog_io_util__Arity_23;

#line 1186 "prog_io_util.m"
                  parse_tree__prog_io_util__Args1_12 = parse_tree__prog_io_util__Args0_8;
#line 1187 "prog_io_util.m"
                  {
#line 1187 "prog_io_util.m"
                    mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[0], parse_tree__prog_io_util__Args1_12, &parse_tree__prog_io_util__Arity_23);
                  }
#line 1188 "prog_io_util.m"
                  {
#line 1188 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = parse_tree__prog_util__make_functor_cons_id_3_p_0(parse_tree__prog_io_util__Functor_7, parse_tree__prog_io_util__Arity_23, &parse_tree__prog_io_util__ConsId_14);
                  }
#line 1185 "prog_io_util.m"
                }
#line 1175 "prog_io_util.m"
                break;
#line 1175 "prog_io_util.m"
            }
#line 1175 "prog_io_util.m"
            break;
#line 1175 "prog_io_util.m"
        }
#line 1166 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1166 "prog_io_util.m"
          {
#line 1190 "prog_io_util.m"
            {
#line 1190 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__Args1_12, &parse_tree__prog_io_util__Args_21);
            }
#line 1166 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1166 "prog_io_util.m"
              {
#line 1191 "prog_io_util.m"
                {
#line 1191 "prog_io_util.m"
                  MR_Word base;
#line 1191 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1191 "prog_io_util.m"
                  *parse_tree__prog_io_util__BoundInst_6 = base;
#line 1191 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__ConsId_14));
#line 1191 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_21));
#line 1191 "prog_io_util.m"
                }
#line 1191 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1166 "prog_io_util.m"
              }
#line 1166 "prog_io_util.m"
          }
#line 1167 "prog_io_util.m"
      }
#line 1166 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1166 "prog_io_util.m"
  }
#line 1163 "prog_io_util.m"
}

#line 1155 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_bound_inst_list_3_p_0(
#line 1155 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
#line 1155 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 1155 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3)
#line 1155 "prog_io_util.m"
{
#line 1158 "prog_io_util.m"
  {
#line 1158 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 1158 "prog_io_util.m"
    if ((parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1158 "prog_io_util.m"
      {
#line 1158 "prog_io_util.m"
        *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1158 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1158 "prog_io_util.m"
      }
#line 1158 "prog_io_util.m"
    else
#line 1159 "prog_io_util.m"
      {
#line 1159 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__H0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1159 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__T0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1159 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__H_8;
#line 1159 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__T_9;

#line 1160 "prog_io_util.m"
        {
#line 1160 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_bound_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__H0_6, &parse_tree__prog_io_util__H_8);
        }
#line 1159 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1159 "prog_io_util.m"
          {
#line 1161 "prog_io_util.m"
            {
#line 1161 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_bound_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__T0_7, &parse_tree__prog_io_util__T_9);
            }
#line 1159 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1159 "prog_io_util.m"
              {
#line 1159 "prog_io_util.m"
                {
#line 1159 "prog_io_util.m"
                  MR_Word base;
#line 1159 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1159 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 1159 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__H_8));
#line 1159 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__T_9));
#line 1159 "prog_io_util.m"
                }
#line 1159 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1159 "prog_io_util.m"
              }
#line 1159 "prog_io_util.m"
          }
#line 1159 "prog_io_util.m"
      }
#line 1158 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1158 "prog_io_util.m"
  }
#line 1155 "prog_io_util.m"
}

#line 1148 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_1(
#line 1148 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg)
#line 1148 "prog_io_util.m"
{
#line 1148 "prog_io_util.m"
  {
#line 1148 "prog_io_util.m"
    struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s * parse_tree__prog_io_util__env_ptr = (struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s *) parse_tree__prog_io_util__env_ptr_arg;

#line 1148 "prog_io_util.m"
    MR_builtin_longjmp((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__commit_0, 1);
#line 1148 "prog_io_util.m"
  }
#line 1148 "prog_io_util.m"
}

#line 1148 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_2(
#line 1148 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg)
#line 1148 "prog_io_util.m"
{
#line 1148 "prog_io_util.m"
  {
#line 1148 "prog_io_util.m"
    struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s * parse_tree__prog_io_util__env_ptr = (struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s *) parse_tree__prog_io_util__env_ptr_arg;

#line 1148 "prog_io_util.m"
    {
#line 1149 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_16_16;
#line 1150 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_18_18;
#line 1151 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_19_19;

#line 1149 "prog_io_util.m"
      (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13)) == (MR_mktag((MR_Integer) 1)));
#line 1149 "prog_io_util.m"
      if ((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 1149 "prog_io_util.m"
        {
#line 1149 "prog_io_util.m"
          {
#line 1149 "prog_io_util.m"
            (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13, (MR_Integer) 0)));
#line 1149 "prog_io_util.m"
            (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13, (MR_Integer) 1)));
#line 1149 "prog_io_util.m"
          }
#line 1148 "prog_io_util.m"
          {
#line 1149 "prog_io_util.m"
            (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 1149 "prog_io_util.m"
            if ((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 1149 "prog_io_util.m"
              {
#line 1149 "prog_io_util.m"
                {
#line 1149 "prog_io_util.m"
                  (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20, (MR_Integer) 0)));
#line 1149 "prog_io_util.m"
                  parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20, (MR_Integer) 1)));
#line 1149 "prog_io_util.m"
                }
#line 1148 "prog_io_util.m"
                {
#line 1150 "prog_io_util.m"
                  (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__ConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F1_14, (MR_Integer) 0)));
#line 1150 "prog_io_util.m"
                  parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F1_14, (MR_Integer) 1)));
#line 1151 "prog_io_util.m"
                  (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F2_15, (MR_Integer) 0)));
#line 1151 "prog_io_util.m"
                  parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F2_15, (MR_Integer) 1)));
#line 1151 "prog_io_util.m"
                  {
#line 1151 "prog_io_util.m"
                    (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = parse_tree__prog_data____Unify____cons_id_0_0((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__ConsId_17, (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_24_24);
                  }
#line 1151 "prog_io_util.m"
                  if ((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 1151 "prog_io_util.m"
                    {
#line 1151 "prog_io_util.m"
                      parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_1(parse_tree__prog_io_util__env_ptr);
#line 1151 "prog_io_util.m"
                      return;
                    }
#line 1148 "prog_io_util.m"
                }
#line 1149 "prog_io_util.m"
              }
#line 1148 "prog_io_util.m"
          }
#line 1149 "prog_io_util.m"
        }
#line 1148 "prog_io_util.m"
    }
#line 1148 "prog_io_util.m"
  }
#line 1148 "prog_io_util.m"
}

#line 1148 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_3(
#line 1148 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg)
#line 1148 "prog_io_util.m"
{
#line 1148 "prog_io_util.m"
  {
#line 1148 "prog_io_util.m"
    struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s * parse_tree__prog_io_util__env_ptr = (struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s *) parse_tree__prog_io_util__env_ptr_arg;

#line 1148 "prog_io_util.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__commit_0) == 0)
#line 1148 "prog_io_util.m"
      {
#line 1148 "prog_io_util.m"
        {
#line 1148 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_12_12;

#line 1148 "prog_io_util.m"
          {
#line 1148 "prog_io_util.m"
            mercury__list__append_3_p_4((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23, &parse_tree__prog_io_util__V_12_12, &(parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13, (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__Functors_11, parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_2, parse_tree__prog_io_util__env_ptr);
          }
#line 1148 "prog_io_util.m"
        }
#line 1148 "prog_io_util.m"
        (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = MR_FALSE;
#line 1148 "prog_io_util.m"
      }
#line 1148 "prog_io_util.m"
    else
#line 1148 "prog_io_util.m"
      (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = MR_TRUE;
#line 1148 "prog_io_util.m"
  }
#line 1148 "prog_io_util.m"
}

#line 1139 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(
#line 1139 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
#line 1139 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Disj_6,
#line 1139 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Uniqueness_7,
#line 1139 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Inst_8)
#line 1139 "prog_io_util.m"
{
#line 1139 "prog_io_util.m"
  {
#line 1139 "prog_io_util.m"
    struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s parse_tree__prog_io_util__env;

#line 1142 "prog_io_util.m"
    {
#line 1142 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__Functors0_10;
#line 1142 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_21_21;
#line 1142 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_31_31;
#line 1142 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__H0_38;
#line 1142 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__T0_39;
#line 1142 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__H_40;
#line 1142 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__T_41;

#line 1227 "prog_io_util.m"
      {
#line 1227 "prog_io_util.m"
        parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ";", parse_tree__prog_io_util__Disj_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_31_31);
      }
#line 1197 "prog_io_util.m"
      parse_tree__prog_io_util__H0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_31_31, (MR_Integer) 0)));
#line 1197 "prog_io_util.m"
      parse_tree__prog_io_util__T0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_31_31, (MR_Integer) 1)));
#line 1160 "prog_io_util.m"
      {
#line 1160 "prog_io_util.m"
        (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = parse_tree__prog_io_util__convert_bound_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__H0_38, &parse_tree__prog_io_util__H_40);
      }
#line 1142 "prog_io_util.m"
      if ((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 1142 "prog_io_util.m"
        {
#line 1161 "prog_io_util.m"
          {
#line 1161 "prog_io_util.m"
            (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = parse_tree__prog_io_util__convert_bound_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__T0_39, &parse_tree__prog_io_util__T_41);
          }
#line 1142 "prog_io_util.m"
          if ((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 1142 "prog_io_util.m"
            {
#line 12595 "parse_tree.prog_io_util.c"
              (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 1159 "prog_io_util.m"
              {
#line 1159 "prog_io_util.m"
                parse_tree__prog_io_util__Functors0_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1159 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Functors0_10, 0) = ((MR_Box) (parse_tree__prog_io_util__H_40));
#line 1159 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Functors0_10, 1) = ((MR_Box) (parse_tree__prog_io_util__T_41));
#line 1159 "prog_io_util.m"
              }
#line 1145 "prog_io_util.m"
              {
#line 1145 "prog_io_util.m"
                mercury__list__sort_2_p_0((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23, parse_tree__prog_io_util__Functors0_10, &(parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__Functors_11);
              }
#line 1148 "prog_io_util.m"
              {
#line 1148 "prog_io_util.m"
                parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_3(&parse_tree__prog_io_util__env);
              }
#line 1147 "prog_io_util.m"
              (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = !((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded);
#line 1142 "prog_io_util.m"
              if ((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 1142 "prog_io_util.m"
                {
#line 1153 "prog_io_util.m"
                  parse_tree__prog_io_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1153 "prog_io_util.m"
                  {
#line 1153 "prog_io_util.m"
                    MR_Word base;
#line 1153 "prog_io_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1153 "prog_io_util.m"
                    *parse_tree__prog_io_util__Inst_8 = base;
#line 1153 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1153 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Uniqueness_7));
#line 1153 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_21_21));
#line 1153 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) ((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__Functors_11));
#line 1153 "prog_io_util.m"
                  }
#line 1153 "prog_io_util.m"
                  (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = MR_TRUE;
#line 1142 "prog_io_util.m"
                }
#line 1142 "prog_io_util.m"
            }
#line 1142 "prog_io_util.m"
        }
#line 1142 "prog_io_util.m"
      return (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded;
#line 1142 "prog_io_util.m"
    }
#line 1139 "prog_io_util.m"
  }
#line 1139 "prog_io_util.m"
}

#line 1046 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_higher_order_inst_4_p_0(
#line 1046 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
#line 1046 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__BeforeIsTerm_6,
#line 1046 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__DetTerm_7,
#line 1046 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Inst_8)
#line 1046 "prog_io_util.m"
{
#line 1050 "prog_io_util.m"
  {
#line 1050 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__BeforeIsTerm_6)) == (MR_mktag((MR_Integer) 0)));
#line 1050 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__BeforeIsFunctor_9;
#line 1050 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__BeforeIsArgTerms_10;
#line 1050 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_27_27;
#line 1052 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;

#line 1052 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1052 "prog_io_util.m"
      {
#line 1052 "prog_io_util.m"
        parse_tree__prog_io_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__BeforeIsTerm_6, (MR_Integer) 0)));
#line 1052 "prog_io_util.m"
        parse_tree__prog_io_util__BeforeIsArgTerms_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__BeforeIsTerm_6, (MR_Integer) 1)));
#line 1052 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__BeforeIsTerm_6, (MR_Integer) 2)));
#line 1052 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_27_27)) == (MR_mktag((MR_Integer) 0)));
#line 1052 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1052 "prog_io_util.m"
          {
#line 1052 "prog_io_util.m"
            parse_tree__prog_io_util__BeforeIsFunctor_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, (MR_Integer) 0)));
#line 1089 "prog_io_util.m"
            if ((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "=") == 0))
#line 1090 "prog_io_util.m"
              {
#line 1090 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TypeCtorInfo_53_53;
#line 1090 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__FuncTerm_18;
#line 1090 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__RetModeTerm_19;
#line 1090 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__FuncTermFunctor_20;
#line 1090 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__ArgModesTerms_21;
#line 1090 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_28_28;
#line 1090 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_29_29;
#line 1090 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_30_30;
#line 1090 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_31_31;
#line 1090 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_32_32;
#line 1090 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_34_34;
#line 1090 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_35_35;
#line 1090 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_36_36;
#line 1090 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__DetString_51;
#line 1092 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_22_22;
#line 1113 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_23_23;

#line 1091 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__BeforeIsArgTerms_10)) == (MR_mktag((MR_Integer) 1)));
#line 1091 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1091 "prog_io_util.m"
                  {
#line 1091 "prog_io_util.m"
                    parse_tree__prog_io_util__FuncTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__BeforeIsArgTerms_10, (MR_Integer) 0)));
#line 1091 "prog_io_util.m"
                    parse_tree__prog_io_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__BeforeIsArgTerms_10, (MR_Integer) 1)));
#line 1091 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 1091 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1091 "prog_io_util.m"
                      {
#line 1091 "prog_io_util.m"
                        parse_tree__prog_io_util__RetModeTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_28_28, (MR_Integer) 0)));
#line 1091 "prog_io_util.m"
                        parse_tree__prog_io_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_28_28, (MR_Integer) 1)));
#line 1091 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1090 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1090 "prog_io_util.m"
                          {
#line 1092 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__FuncTerm_18)) == (MR_mktag((MR_Integer) 0)));
#line 1092 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1092 "prog_io_util.m"
                              {
#line 1092 "prog_io_util.m"
                                parse_tree__prog_io_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_18, (MR_Integer) 0)));
#line 1092 "prog_io_util.m"
                                parse_tree__prog_io_util__ArgModesTerms_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_18, (MR_Integer) 1)));
#line 1092 "prog_io_util.m"
                                parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_18, (MR_Integer) 2)));
#line 1092 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_30_30)) == (MR_mktag((MR_Integer) 0)));
#line 1092 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 1092 "prog_io_util.m"
                                  {
#line 1092 "prog_io_util.m"
                                    parse_tree__prog_io_util__FuncTermFunctor_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_30_30, (MR_Integer) 0)));
#line 1113 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 1113 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 1113 "prog_io_util.m"
                                      {
#line 1113 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 0)));
#line 1113 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 1)));
#line 1113 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 2)));
#line 1113 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1090 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 1090 "prog_io_util.m"
                                          {
#line 1113 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_31_31)) == (MR_mktag((MR_Integer) 0)));
#line 1113 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 1113 "prog_io_util.m"
                                              {
#line 1113 "prog_io_util.m"
                                                parse_tree__prog_io_util__DetString_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_31_31, (MR_Integer) 0)));
#line 1117 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 12815 "parse_tree.prog_io_util.c"
                                                parse_tree__prog_io_util__TypeCtorInfo_53_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1118 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_35_35 = (MR_Integer) 1;
#line 1119 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 12821 "parse_tree.prog_io_util.c"
                                                if ((strcmp(parse_tree__prog_io_util__FuncTermFunctor_20, (MR_String) "func") == 0))
#line 12823 "parse_tree.prog_io_util.c"
                                                  {
#line 12825 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_39_39;
#line 12827 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_40_40;
#line 12829 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__ArgModes0_55;
#line 12831 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__RetMode_56;
#line 12833 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__FuncInst_57;
#line 12835 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_58_58;
#line 12837 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__ArgModes_60;
#line 12839 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__Detism_61;

#line 1114 "prog_io_util.m"
                                                    {
#line 1114 "prog_io_util.m"
                                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_51, &parse_tree__prog_io_util__Detism_61);
                                                    }
#line 12847 "parse_tree.prog_io_util.c"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 12849 "parse_tree.prog_io_util.c"
                                                      {
#line 1115 "prog_io_util.m"
                                                        {
#line 1115 "prog_io_util.m"
                                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__ArgModesTerms_21, &parse_tree__prog_io_util__ArgModes0_55);
                                                        }
#line 12856 "parse_tree.prog_io_util.c"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 12858 "parse_tree.prog_io_util.c"
                                                          {
#line 1116 "prog_io_util.m"
                                                            {
#line 1116 "prog_io_util.m"
                                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__RetModeTerm_19, &parse_tree__prog_io_util__RetMode_56);
                                                            }
#line 12865 "parse_tree.prog_io_util.c"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 12867 "parse_tree.prog_io_util.c"
                                                              {
#line 1117 "prog_io_util.m"
                                                                {
#line 1117 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1117 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_58_58, 0) = ((MR_Box) (parse_tree__prog_io_util__RetMode_56));
#line 1117 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_58_58, 1) = ((MR_Box) (parse_tree__prog_io_util__V_34_34));
#line 1117 "prog_io_util.m"
                                                                }
#line 1117 "prog_io_util.m"
                                                                {
#line 1117 "prog_io_util.m"
                                                                  mercury__list__append_3_p_1(parse_tree__prog_io_util__TypeCtorInfo_53_53, parse_tree__prog_io_util__ArgModes0_55, parse_tree__prog_io_util__V_58_58, &parse_tree__prog_io_util__ArgModes_60);
                                                                }
#line 1122 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_39_39 = (MR_Integer) 0;
#line 1118 "prog_io_util.m"
                                                                {
#line 1118 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__FuncInst_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1118 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_57, 0) = ((MR_Box) (parse_tree__prog_io_util__V_35_35));
#line 1118 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_57, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_60));
#line 1118 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_57, 2) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 1118 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_57, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_61));
#line 1118 "prog_io_util.m"
                                                                }
#line 1122 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__FuncInst_57);
#line 1122 "prog_io_util.m"
                                                                {
#line 1122 "prog_io_util.m"
                                                                  MR_Word base;
#line 1122 "prog_io_util.m"
                                                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1122 "prog_io_util.m"
                                                                  *parse_tree__prog_io_util__Inst_8 = base;
#line 1122 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1122 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_39_39));
#line 1122 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_40_40));
#line 1122 "prog_io_util.m"
                                                                }
#line 1122 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 12920 "parse_tree.prog_io_util.c"
                                                              }
#line 12922 "parse_tree.prog_io_util.c"
                                                          }
#line 12924 "parse_tree.prog_io_util.c"
                                                      }
#line 12926 "parse_tree.prog_io_util.c"
                                                  }
#line 12928 "parse_tree.prog_io_util.c"
                                                else
#line 12930 "parse_tree.prog_io_util.c"
                                                if ((strcmp(parse_tree__prog_io_util__FuncTermFunctor_20, (MR_String) "any_func") == 0))
#line 12932 "parse_tree.prog_io_util.c"
                                                  {
#line 12934 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__ArgModes0_24;
#line 12936 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__RetMode_25;
#line 12938 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__FuncInst_26;
#line 12940 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_33_33;
#line 12942 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_37_37;
#line 12944 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_38_38;
#line 12946 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__ArgModes_50;
#line 12948 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__Detism_52;

#line 1114 "prog_io_util.m"
                                                    {
#line 1114 "prog_io_util.m"
                                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_51, &parse_tree__prog_io_util__Detism_52);
                                                    }
#line 12956 "parse_tree.prog_io_util.c"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 12958 "parse_tree.prog_io_util.c"
                                                      {
#line 1115 "prog_io_util.m"
                                                        {
#line 1115 "prog_io_util.m"
                                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__ArgModesTerms_21, &parse_tree__prog_io_util__ArgModes0_24);
                                                        }
#line 12965 "parse_tree.prog_io_util.c"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 12967 "parse_tree.prog_io_util.c"
                                                          {
#line 1116 "prog_io_util.m"
                                                            {
#line 1116 "prog_io_util.m"
                                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__RetModeTerm_19, &parse_tree__prog_io_util__RetMode_25);
                                                            }
#line 12974 "parse_tree.prog_io_util.c"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 12976 "parse_tree.prog_io_util.c"
                                                              {
#line 1117 "prog_io_util.m"
                                                                {
#line 1117 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1117 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_util__RetMode_25));
#line 1117 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io_util__V_34_34));
#line 1117 "prog_io_util.m"
                                                                }
#line 1117 "prog_io_util.m"
                                                                {
#line 1117 "prog_io_util.m"
                                                                  mercury__list__append_3_p_1(parse_tree__prog_io_util__TypeCtorInfo_53_53, parse_tree__prog_io_util__ArgModes0_24, parse_tree__prog_io_util__V_33_33, &parse_tree__prog_io_util__ArgModes_50);
                                                                }
#line 1125 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_37_37 = (MR_Integer) 0;
#line 1118 "prog_io_util.m"
                                                                {
#line 1118 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__FuncInst_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1118 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_26, 0) = ((MR_Box) (parse_tree__prog_io_util__V_35_35));
#line 1118 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_26, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_50));
#line 1118 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_26, 2) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 1118 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_26, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_52));
#line 1118 "prog_io_util.m"
                                                                }
#line 1125 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__FuncInst_26);
#line 1125 "prog_io_util.m"
                                                                {
#line 1125 "prog_io_util.m"
                                                                  MR_Word base;
#line 1125 "prog_io_util.m"
                                                                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1125 "prog_io_util.m"
                                                                  *parse_tree__prog_io_util__Inst_8 = base;
#line 1125 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_37_37));
#line 1125 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_38_38));
#line 1125 "prog_io_util.m"
                                                                }
#line 1125 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 13027 "parse_tree.prog_io_util.c"
                                                              }
#line 13029 "parse_tree.prog_io_util.c"
                                                          }
#line 13031 "parse_tree.prog_io_util.c"
                                                      }
#line 13033 "parse_tree.prog_io_util.c"
                                                  }
#line 13035 "parse_tree.prog_io_util.c"
                                                else
#line 13037 "parse_tree.prog_io_util.c"
                                                  parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 1113 "prog_io_util.m"
                                              }
#line 1090 "prog_io_util.m"
                                          }
#line 1113 "prog_io_util.m"
                                      }
#line 1092 "prog_io_util.m"
                                  }
#line 1092 "prog_io_util.m"
                              }
#line 1090 "prog_io_util.m"
                          }
#line 1091 "prog_io_util.m"
                      }
#line 1091 "prog_io_util.m"
                  }
#line 1090 "prog_io_util.m"
              }
#line 1089 "prog_io_util.m"
            else
#line 1089 "prog_io_util.m"
            if ((((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "any_pred") == 0)) || ((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "pred") == 0))))
#line 1056 "prog_io_util.m"
              {
#line 1056 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__ArgModes_13;
#line 1056 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__DetString_14;
#line 1056 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Detism_16;
#line 1056 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__PredInst_17;
#line 1056 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_41_41;
#line 1056 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_42_42;
#line 1056 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_43_43;
#line 1056 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_44_44;
#line 1078 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_15_15;

#line 1077 "prog_io_util.m"
                {
#line 1077 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__BeforeIsArgTerms_10, &parse_tree__prog_io_util__ArgModes_13);
                }
#line 1056 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1056 "prog_io_util.m"
                  {
#line 1078 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 1078 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1078 "prog_io_util.m"
                      {
#line 1078 "prog_io_util.m"
                        parse_tree__prog_io_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 0)));
#line 1078 "prog_io_util.m"
                        parse_tree__prog_io_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 1)));
#line 1078 "prog_io_util.m"
                        parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 2)));
#line 1078 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1056 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1056 "prog_io_util.m"
                          {
#line 1078 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_41_41)) == (MR_mktag((MR_Integer) 0)));
#line 1078 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1078 "prog_io_util.m"
                              {
#line 1078 "prog_io_util.m"
                                parse_tree__prog_io_util__DetString_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_41_41, (MR_Integer) 0)));
#line 1079 "prog_io_util.m"
                                {
#line 1079 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_14, &parse_tree__prog_io_util__Detism_16);
                                }
#line 1056 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 1056 "prog_io_util.m"
                                  {
#line 1080 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_43_43 = (MR_Integer) 0;
#line 1081 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1080 "prog_io_util.m"
                                    {
#line 1080 "prog_io_util.m"
                                      parse_tree__prog_io_util__PredInst_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1080 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_17, 0) = ((MR_Box) (parse_tree__prog_io_util__V_43_43));
#line 1080 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_17, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_13));
#line 1080 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_17, 2) = ((MR_Box) (parse_tree__prog_io_util__V_44_44));
#line 1080 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_17, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_16));
#line 1080 "prog_io_util.m"
                                    }
#line 13144 "parse_tree.prog_io_util.c"
                                    if ((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "pred") == 0))
#line 13146 "parse_tree.prog_io_util.c"
                                      {
#line 13148 "parse_tree.prog_io_util.c"
                                        MR_Word parse_tree__prog_io_util__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__PredInst_17);

#line 1084 "prog_io_util.m"
                                        {
#line 1084 "prog_io_util.m"
                                          MR_Word base;
#line 1084 "prog_io_util.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1084 "prog_io_util.m"
                                          *parse_tree__prog_io_util__Inst_8 = base;
#line 1084 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1084 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1084 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_48_48));
#line 1084 "prog_io_util.m"
                                        }
#line 13167 "parse_tree.prog_io_util.c"
                                      }
#line 13169 "parse_tree.prog_io_util.c"
                                    else
#line 13171 "parse_tree.prog_io_util.c"
                                      {
#line 13173 "parse_tree.prog_io_util.c"
                                        MR_Word parse_tree__prog_io_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__PredInst_17);

#line 1087 "prog_io_util.m"
                                        {
#line 1087 "prog_io_util.m"
                                          MR_Word base;
#line 1087 "prog_io_util.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1087 "prog_io_util.m"
                                          *parse_tree__prog_io_util__Inst_8 = base;
#line 1087 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1087 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_46_46));
#line 1087 "prog_io_util.m"
                                        }
#line 13190 "parse_tree.prog_io_util.c"
                                      }
#line 13192 "parse_tree.prog_io_util.c"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1056 "prog_io_util.m"
                                  }
#line 1078 "prog_io_util.m"
                              }
#line 1056 "prog_io_util.m"
                          }
#line 1078 "prog_io_util.m"
                      }
#line 1056 "prog_io_util.m"
                  }
#line 1056 "prog_io_util.m"
              }
#line 1089 "prog_io_util.m"
            else
#line 1089 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 1052 "prog_io_util.m"
          }
#line 1052 "prog_io_util.m"
      }
#line 1050 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1050 "prog_io_util.m"
  }
#line 1046 "prog_io_util.m"
}

#line 732 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_higher_order_mode_4_p_0(
#line 732 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
#line 732 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__BeforeIsTerm_6,
#line 732 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__DetTerm_7,
#line 732 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Mode_8)
#line 732 "prog_io_util.m"
{
#line 736 "prog_io_util.m"
  {
#line 736 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__BeforeIsTerm_6)) == (MR_mktag((MR_Integer) 0)));
#line 736 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__BeforeIsFunctor_9;
#line 736 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__BeforeIsArgTerms_10;
#line 736 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_28_28;
#line 738 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;

#line 738 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 738 "prog_io_util.m"
      {
#line 738 "prog_io_util.m"
        parse_tree__prog_io_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__BeforeIsTerm_6, (MR_Integer) 0)));
#line 738 "prog_io_util.m"
        parse_tree__prog_io_util__BeforeIsArgTerms_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__BeforeIsTerm_6, (MR_Integer) 1)));
#line 738 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__BeforeIsTerm_6, (MR_Integer) 2)));
#line 738 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_28_28)) == (MR_mktag((MR_Integer) 0)));
#line 738 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 738 "prog_io_util.m"
          {
#line 738 "prog_io_util.m"
            parse_tree__prog_io_util__BeforeIsFunctor_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, (MR_Integer) 0)));
#line 779 "prog_io_util.m"
            if ((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "=") == 0))
#line 780 "prog_io_util.m"
              {
#line 780 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TypeCtorInfo_57_57;
#line 780 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__FuncTerm_19;
#line 780 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__RetModeTerm_20;
#line 780 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__FuncTermFunctor_21;
#line 780 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__ArgModesTerms_22;
#line 780 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_29_29;
#line 780 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_30_30;
#line 780 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_31_31;
#line 780 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_32_32;
#line 780 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_33_33;
#line 780 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_35_35;
#line 780 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_36_36;
#line 780 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_37_37;
#line 780 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__DetString_54;
#line 780 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Inst_56;
#line 782 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_23_23;
#line 804 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_24_24;

#line 781 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__BeforeIsArgTerms_10)) == (MR_mktag((MR_Integer) 1)));
#line 781 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 781 "prog_io_util.m"
                  {
#line 781 "prog_io_util.m"
                    parse_tree__prog_io_util__FuncTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__BeforeIsArgTerms_10, (MR_Integer) 0)));
#line 781 "prog_io_util.m"
                    parse_tree__prog_io_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__BeforeIsArgTerms_10, (MR_Integer) 1)));
#line 781 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 781 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 781 "prog_io_util.m"
                      {
#line 781 "prog_io_util.m"
                        parse_tree__prog_io_util__RetModeTerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, (MR_Integer) 0)));
#line 781 "prog_io_util.m"
                        parse_tree__prog_io_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, (MR_Integer) 1)));
#line 781 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 780 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 780 "prog_io_util.m"
                          {
#line 782 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__FuncTerm_19)) == (MR_mktag((MR_Integer) 0)));
#line 782 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 782 "prog_io_util.m"
                              {
#line 782 "prog_io_util.m"
                                parse_tree__prog_io_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_19, (MR_Integer) 0)));
#line 782 "prog_io_util.m"
                                parse_tree__prog_io_util__ArgModesTerms_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_19, (MR_Integer) 1)));
#line 782 "prog_io_util.m"
                                parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_19, (MR_Integer) 2)));
#line 782 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_31_31)) == (MR_mktag((MR_Integer) 0)));
#line 782 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 782 "prog_io_util.m"
                                  {
#line 782 "prog_io_util.m"
                                    parse_tree__prog_io_util__FuncTermFunctor_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_31_31, (MR_Integer) 0)));
#line 804 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 804 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 804 "prog_io_util.m"
                                      {
#line 804 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 0)));
#line 804 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 1)));
#line 804 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 2)));
#line 804 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 780 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 780 "prog_io_util.m"
                                          {
#line 804 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_32_32)) == (MR_mktag((MR_Integer) 0)));
#line 804 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 804 "prog_io_util.m"
                                              {
#line 804 "prog_io_util.m"
                                                parse_tree__prog_io_util__DetString_54 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_32_32, (MR_Integer) 0)));
#line 808 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_35_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 13378 "parse_tree.prog_io_util.c"
                                                parse_tree__prog_io_util__TypeCtorInfo_57_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 809 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_36_36 = (MR_Integer) 1;
#line 810 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_37_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 13384 "parse_tree.prog_io_util.c"
                                                if ((strcmp(parse_tree__prog_io_util__FuncTermFunctor_21, (MR_String) "func") == 0))
#line 13386 "parse_tree.prog_io_util.c"
                                                  {
#line 13388 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_40_40;
#line 13390 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_41_41;
#line 13392 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__ArgModes0_59;
#line 13394 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__RetMode_60;
#line 13396 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__FuncInstInfo_61;
#line 13398 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_62_62;
#line 13400 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__ArgModes_64;
#line 13402 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__Detism_65;

#line 805 "prog_io_util.m"
                                                    {
#line 805 "prog_io_util.m"
                                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_54, &parse_tree__prog_io_util__Detism_65);
                                                    }
#line 13410 "parse_tree.prog_io_util.c"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 13412 "parse_tree.prog_io_util.c"
                                                      {
#line 806 "prog_io_util.m"
                                                        {
#line 806 "prog_io_util.m"
                                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__ArgModesTerms_22, &parse_tree__prog_io_util__ArgModes0_59);
                                                        }
#line 13419 "parse_tree.prog_io_util.c"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 13421 "parse_tree.prog_io_util.c"
                                                          {
#line 807 "prog_io_util.m"
                                                            {
#line 807 "prog_io_util.m"
                                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__RetModeTerm_20, &parse_tree__prog_io_util__RetMode_60);
                                                            }
#line 13428 "parse_tree.prog_io_util.c"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 13430 "parse_tree.prog_io_util.c"
                                                              {
#line 808 "prog_io_util.m"
                                                                {
#line 808 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 808 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_util__RetMode_60));
#line 808 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_62_62, 1) = ((MR_Box) (parse_tree__prog_io_util__V_35_35));
#line 808 "prog_io_util.m"
                                                                }
#line 808 "prog_io_util.m"
                                                                {
#line 808 "prog_io_util.m"
                                                                  mercury__list__append_3_p_1(parse_tree__prog_io_util__TypeCtorInfo_57_57, parse_tree__prog_io_util__ArgModes0_59, parse_tree__prog_io_util__V_62_62, &parse_tree__prog_io_util__ArgModes_64);
                                                                }
#line 813 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_40_40 = (MR_Integer) 0;
#line 809 "prog_io_util.m"
                                                                {
#line 809 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__FuncInstInfo_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 809 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_61, 0) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 809 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_61, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_64));
#line 809 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_61, 2) = ((MR_Box) (parse_tree__prog_io_util__V_37_37));
#line 809 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_61, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_65));
#line 809 "prog_io_util.m"
                                                                }
#line 813 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__FuncInstInfo_61);
#line 813 "prog_io_util.m"
                                                                {
#line 813 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__Inst_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 813 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 813 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_56, 1) = ((MR_Box) (parse_tree__prog_io_util__V_40_40));
#line 813 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_56, 2) = ((MR_Box) (parse_tree__prog_io_util__V_41_41));
#line 813 "prog_io_util.m"
                                                                }
#line 813 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 13479 "parse_tree.prog_io_util.c"
                                                              }
#line 13481 "parse_tree.prog_io_util.c"
                                                          }
#line 13483 "parse_tree.prog_io_util.c"
                                                      }
#line 13485 "parse_tree.prog_io_util.c"
                                                  }
#line 13487 "parse_tree.prog_io_util.c"
                                                else
#line 13489 "parse_tree.prog_io_util.c"
                                                if ((strcmp(parse_tree__prog_io_util__FuncTermFunctor_21, (MR_String) "any_func") == 0))
#line 13491 "parse_tree.prog_io_util.c"
                                                  {
#line 13493 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__ArgModes0_25;
#line 13495 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__RetMode_26;
#line 13497 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__FuncInstInfo_27;
#line 13499 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_34_34;
#line 13501 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_38_38;
#line 13503 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_39_39;
#line 13505 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__ArgModes_53;
#line 13507 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__Detism_55;

#line 805 "prog_io_util.m"
                                                    {
#line 805 "prog_io_util.m"
                                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_54, &parse_tree__prog_io_util__Detism_55);
                                                    }
#line 13515 "parse_tree.prog_io_util.c"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 13517 "parse_tree.prog_io_util.c"
                                                      {
#line 806 "prog_io_util.m"
                                                        {
#line 806 "prog_io_util.m"
                                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__ArgModesTerms_22, &parse_tree__prog_io_util__ArgModes0_25);
                                                        }
#line 13524 "parse_tree.prog_io_util.c"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 13526 "parse_tree.prog_io_util.c"
                                                          {
#line 807 "prog_io_util.m"
                                                            {
#line 807 "prog_io_util.m"
                                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__RetModeTerm_20, &parse_tree__prog_io_util__RetMode_26);
                                                            }
#line 13533 "parse_tree.prog_io_util.c"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 13535 "parse_tree.prog_io_util.c"
                                                              {
#line 808 "prog_io_util.m"
                                                                {
#line 808 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 808 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_util__RetMode_26));
#line 808 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, 1) = ((MR_Box) (parse_tree__prog_io_util__V_35_35));
#line 808 "prog_io_util.m"
                                                                }
#line 808 "prog_io_util.m"
                                                                {
#line 808 "prog_io_util.m"
                                                                  mercury__list__append_3_p_1(parse_tree__prog_io_util__TypeCtorInfo_57_57, parse_tree__prog_io_util__ArgModes0_25, parse_tree__prog_io_util__V_34_34, &parse_tree__prog_io_util__ArgModes_53);
                                                                }
#line 816 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_38_38 = (MR_Integer) 0;
#line 809 "prog_io_util.m"
                                                                {
#line 809 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__FuncInstInfo_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 809 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_27, 0) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 809 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_27, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_53));
#line 809 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_27, 2) = ((MR_Box) (parse_tree__prog_io_util__V_37_37));
#line 809 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_27, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_55));
#line 809 "prog_io_util.m"
                                                                }
#line 816 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__FuncInstInfo_27);
#line 816 "prog_io_util.m"
                                                                {
#line 816 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__Inst_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 816 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Inst_56, 0) = ((MR_Box) (parse_tree__prog_io_util__V_38_38));
#line 816 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Inst_56, 1) = ((MR_Box) (parse_tree__prog_io_util__V_39_39));
#line 816 "prog_io_util.m"
                                                                }
#line 816 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 13582 "parse_tree.prog_io_util.c"
                                                              }
#line 13584 "parse_tree.prog_io_util.c"
                                                          }
#line 13586 "parse_tree.prog_io_util.c"
                                                      }
#line 13588 "parse_tree.prog_io_util.c"
                                                  }
#line 13590 "parse_tree.prog_io_util.c"
                                                else
#line 13592 "parse_tree.prog_io_util.c"
                                                  parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 780 "prog_io_util.m"
                                                if (parse_tree__prog_io_util__succeeded)
#line 780 "prog_io_util.m"
                                                  {
#line 818 "prog_io_util.m"
                                                    {
#line 818 "prog_io_util.m"
                                                      MR_Word base;
#line 818 "prog_io_util.m"
                                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 818 "prog_io_util.m"
                                                      *parse_tree__prog_io_util__Mode_8 = base;
#line 818 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Inst_56));
#line 818 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Inst_56));
#line 818 "prog_io_util.m"
                                                    }
#line 818 "prog_io_util.m"
                                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 780 "prog_io_util.m"
                                                  }
#line 804 "prog_io_util.m"
                                              }
#line 780 "prog_io_util.m"
                                          }
#line 804 "prog_io_util.m"
                                      }
#line 782 "prog_io_util.m"
                                  }
#line 782 "prog_io_util.m"
                              }
#line 780 "prog_io_util.m"
                          }
#line 781 "prog_io_util.m"
                      }
#line 781 "prog_io_util.m"
                  }
#line 780 "prog_io_util.m"
              }
#line 779 "prog_io_util.m"
            else
#line 779 "prog_io_util.m"
            if ((((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "any_pred") == 0)) || ((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "pred") == 0))))
#line 742 "prog_io_util.m"
              {
#line 742 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__ArgModes_13;
#line 742 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__DetString_14;
#line 742 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Detism_16;
#line 742 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__PredInstInfo_17;
#line 742 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Inst_18;
#line 742 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_43_43;
#line 742 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_44_44;
#line 742 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_45_45;
#line 742 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_46_46;
#line 767 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_15_15;

#line 766 "prog_io_util.m"
                {
#line 766 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__BeforeIsArgTerms_10, &parse_tree__prog_io_util__ArgModes_13);
                }
#line 742 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 742 "prog_io_util.m"
                  {
#line 767 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 767 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 767 "prog_io_util.m"
                      {
#line 767 "prog_io_util.m"
                        parse_tree__prog_io_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 0)));
#line 767 "prog_io_util.m"
                        parse_tree__prog_io_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 1)));
#line 767 "prog_io_util.m"
                        parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 2)));
#line 767 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 742 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 742 "prog_io_util.m"
                          {
#line 767 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_43_43)) == (MR_mktag((MR_Integer) 0)));
#line 767 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 767 "prog_io_util.m"
                              {
#line 767 "prog_io_util.m"
                                parse_tree__prog_io_util__DetString_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_43_43, (MR_Integer) 0)));
#line 768 "prog_io_util.m"
                                {
#line 768 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_14, &parse_tree__prog_io_util__Detism_16);
                                }
#line 742 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 742 "prog_io_util.m"
                                  {
#line 769 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_45_45 = (MR_Integer) 0;
#line 770 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 769 "prog_io_util.m"
                                    {
#line 769 "prog_io_util.m"
                                      parse_tree__prog_io_util__PredInstInfo_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 769 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_17, 0) = ((MR_Box) (parse_tree__prog_io_util__V_45_45));
#line 769 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_17, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_13));
#line 769 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_17, 2) = ((MR_Box) (parse_tree__prog_io_util__V_46_46));
#line 769 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_17, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_16));
#line 769 "prog_io_util.m"
                                    }
#line 13723 "parse_tree.prog_io_util.c"
                                    if ((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "pred") == 0))
#line 13725 "parse_tree.prog_io_util.c"
                                      {
#line 13727 "parse_tree.prog_io_util.c"
                                        MR_Word parse_tree__prog_io_util__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__PredInstInfo_17);

#line 773 "prog_io_util.m"
                                        {
#line 773 "prog_io_util.m"
                                          parse_tree__prog_io_util__Inst_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 773 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 773 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_18, 1) = ((MR_Box) ((MR_Integer) 0));
#line 773 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_18, 2) = ((MR_Box) (parse_tree__prog_io_util__V_50_50));
#line 773 "prog_io_util.m"
                                        }
#line 13742 "parse_tree.prog_io_util.c"
                                      }
#line 13744 "parse_tree.prog_io_util.c"
                                    else
#line 13746 "parse_tree.prog_io_util.c"
                                      {
#line 13748 "parse_tree.prog_io_util.c"
                                        MR_Word parse_tree__prog_io_util__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__PredInstInfo_17);

#line 776 "prog_io_util.m"
                                        {
#line 776 "prog_io_util.m"
                                          parse_tree__prog_io_util__Inst_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 776 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Inst_18, 0) = ((MR_Box) ((MR_Integer) 0));
#line 776 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Inst_18, 1) = ((MR_Box) (parse_tree__prog_io_util__V_48_48));
#line 776 "prog_io_util.m"
                                        }
#line 13761 "parse_tree.prog_io_util.c"
                                      }
#line 778 "prog_io_util.m"
                                    {
#line 778 "prog_io_util.m"
                                      MR_Word base;
#line 778 "prog_io_util.m"
                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 778 "prog_io_util.m"
                                      *parse_tree__prog_io_util__Mode_8 = base;
#line 778 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Inst_18));
#line 778 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Inst_18));
#line 778 "prog_io_util.m"
                                    }
#line 778 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 742 "prog_io_util.m"
                                  }
#line 767 "prog_io_util.m"
                              }
#line 742 "prog_io_util.m"
                          }
#line 767 "prog_io_util.m"
                      }
#line 742 "prog_io_util.m"
                  }
#line 742 "prog_io_util.m"
              }
#line 779 "prog_io_util.m"
            else
#line 779 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 738 "prog_io_util.m"
          }
#line 738 "prog_io_util.m"
      }
#line 736 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 736 "prog_io_util.m"
  }
#line 732 "prog_io_util.m"
}

#line 672 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_qualified_term_3_p_0(
#line 672 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 672 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Args_2,
#line 672 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Term_3)
#line 672 "prog_io_util.m"
{
#line 674 "prog_io_util.m"
  {
#line 674 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 674 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 677 "prog_io_util.m"
      {
#line 677 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Qualifier_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 677 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 677 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Context_13;
#line 677 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__QualTerm_14;
#line 677 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Term0_15;
#line 677 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_17_17;
#line 677 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_20_20;
#line 677 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_21_21;

#line 678 "prog_io_util.m"
        {
#line 678 "prog_io_util.m"
          parse_tree__prog_io_util__Context_13 = mercury__term__context_init_0_f_0();
        }
#line 679 "prog_io_util.m"
        {
#line 679 "prog_io_util.m"
          parse_tree__prog_io_util__unparse_qualified_term_3_p_0(parse_tree__prog_io_util__Qualifier_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__QualTerm_14);
        }
#line 680 "prog_io_util.m"
        {
#line 680 "prog_io_util.m"
          parse_tree__prog_io_util__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 680 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_17_17, 0) = ((MR_Box) (parse_tree__prog_io_util__Name_10));
#line 680 "prog_io_util.m"
        }
#line 680 "prog_io_util.m"
        {
#line 680 "prog_io_util.m"
          parse_tree__prog_io_util__Term0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 680 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_17_17));
#line 680 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_15, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_2));
#line 680 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_15, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_13));
#line 680 "prog_io_util.m"
        }
#line 681 "prog_io_util.m"
        {
#line 681 "prog_io_util.m"
          parse_tree__prog_io_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 681 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, 0) = ((MR_Box) (parse_tree__prog_io_util__Term0_15));
#line 681 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 681 "prog_io_util.m"
        }
#line 681 "prog_io_util.m"
        {
#line 681 "prog_io_util.m"
          parse_tree__prog_io_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 681 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, 0) = ((MR_Box) (parse_tree__prog_io_util__QualTerm_14));
#line 681 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, 1) = ((MR_Box) (parse_tree__prog_io_util__V_21_21));
#line 681 "prog_io_util.m"
        }
#line 681 "prog_io_util.m"
        {
#line 681 "prog_io_util.m"
          MR_Word base;
#line 681 "prog_io_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 681 "prog_io_util.m"
          *parse_tree__prog_io_util__Term_3 = base;
#line 681 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[12]));
#line 681 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_20_20));
#line 681 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_13));
#line 681 "prog_io_util.m"
        }
#line 677 "prog_io_util.m"
      }
#line 674 "prog_io_util.m"
    else
#line 674 "prog_io_util.m"
      {
#line 674 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 674 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Context_7;
#line 674 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_8_8;

#line 675 "prog_io_util.m"
        {
#line 675 "prog_io_util.m"
          parse_tree__prog_io_util__Context_7 = mercury__term__context_init_0_f_0();
        }
#line 676 "prog_io_util.m"
        {
#line 676 "prog_io_util.m"
          parse_tree__prog_io_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 676 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, 0) = ((MR_Box) (parse_tree__prog_io_util__Name_4));
#line 676 "prog_io_util.m"
        }
#line 676 "prog_io_util.m"
        {
#line 676 "prog_io_util.m"
          MR_Word base;
#line 676 "prog_io_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 676 "prog_io_util.m"
          *parse_tree__prog_io_util__Term_3 = base;
#line 676 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_8_8));
#line 676 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_2));
#line 676 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_7));
#line 676 "prog_io_util.m"
        }
#line 674 "prog_io_util.m"
      }
#line 674 "prog_io_util.m"
  }
#line 672 "prog_io_util.m"
}

#line 670 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_type_list_2_p_0_1(
#line 670 "prog_io_util.m"
  MR_Box parse_tree__prog_io_util__closure_arg,
#line 670 "prog_io_util.m"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 670 "prog_io_util.m"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2)
#line 670 "prog_io_util.m"
{
#line 670 "prog_io_util.m"
  {
#line 670 "prog_io_util.m"
    MR_Box parse_tree__prog_io_util__closure = parse_tree__prog_io_util__closure_arg;
#line 670 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__conv0_Term_4;

#line 670 "prog_io_util.m"
    {
#line 670 "prog_io_util.m"
      parse_tree__prog_io_util__unparse_type_2_p_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_Term_4);
    }
#line 670 "prog_io_util.m"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_Term_4));
#line 670 "prog_io_util.m"
  }
#line 670 "prog_io_util.m"
}

#line 667 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_type_list_2_p_0(
#line 667 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Types_3,
#line 667 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Terms_4)
#line 667 "prog_io_util.m"
{
#line 669 "prog_io_util.m"
  {
#line 669 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 670 "prog_io_util.m"
    {
#line 670 "prog_io_util.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_io_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_io_util_scalar_common_2[4], parse_tree__prog_io_util__Types_3, parse_tree__prog_io_util__Terms_4);
#line 670 "prog_io_util.m"
      return;
    }
#line 669 "prog_io_util.m"
  }
#line 667 "prog_io_util.m"
}

#line 594 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_types_acc_7_p_0(
#line 594 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 594 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_2,
#line 594 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_3,
#line 594 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_0_4,
#line 594 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_5,
#line 594 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__STATE_VARIABLE_Specs_0_6,
#line 594 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__STATE_VARIABLE_Specs_7)
#line 594 "prog_io_util.m"
{
#line 598 "prog_io_util.m"
  while (MR_TRUE)
#line 598 "prog_io_util.m"
    {
#line 598 "prog_io_util.m"
      /* tailcall optimized into a loop */
#line 598 "prog_io_util.m"
      {
#line 598 "prog_io_util.m"
        MR_bool parse_tree__prog_io_util__succeeded;

#line 598 "prog_io_util.m"
        if ((parse_tree__prog_io_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 598 "prog_io_util.m"
          {
#line 598 "prog_io_util.m"
            *parse_tree__prog_io_util__STATE_VARIABLE_Specs_7 = parse_tree__prog_io_util__STATE_VARIABLE_Specs_0_6;
#line 598 "prog_io_util.m"
            *parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_5 = parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_0_4;
#line 598 "prog_io_util.m"
          }
#line 598 "prog_io_util.m"
        else
#line 599 "prog_io_util.m"
          {
#line 599 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Term_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 599 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Terms_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 599 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TermResult_22;
#line 599 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__STATE_VARIABLE_Specs_29_29;
#line 599 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_30_30;

#line 601 "prog_io_util.m"
            {
#line 601 "prog_io_util.m"
              parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_util__Term_16, parse_tree__prog_io_util__VarSet_2, parse_tree__prog_io_util__ContextPieces_3, &parse_tree__prog_io_util__TermResult_22);
            }
#line 605 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__TermResult_22)) == (MR_mktag((MR_Integer) 0))))
#line 606 "prog_io_util.m"
              {
#line 606 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TermSpecs_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TermResult_22, (MR_Integer) 0)));

#line 607 "prog_io_util.m"
                {
#line 607 "prog_io_util.m"
                  parse_tree__prog_io_util__STATE_VARIABLE_Specs_29_29 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_util__TermSpecs_24, parse_tree__prog_io_util__STATE_VARIABLE_Specs_0_6);
                }
#line 606 "prog_io_util.m"
                parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_30_30 = parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_0_4;
#line 606 "prog_io_util.m"
              }
#line 605 "prog_io_util.m"
            else
#line 603 "prog_io_util.m"
              {
#line 603 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermResult_22, (MR_Integer) 0)));

#line 604 "prog_io_util.m"
                {
#line 604 "prog_io_util.m"
                  parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_30_30, 0) = ((MR_Box) (parse_tree__prog_io_util__Type_23));
#line 604 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_30_30, 1) = ((MR_Box) (parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_0_4));
#line 604 "prog_io_util.m"
                }
#line 603 "prog_io_util.m"
                parse_tree__prog_io_util__STATE_VARIABLE_Specs_29_29 = parse_tree__prog_io_util__STATE_VARIABLE_Specs_0_6;
#line 603 "prog_io_util.m"
              }
#line 609 "prog_io_util.m"
            /* direct tailcall eliminated */
#line 609 "prog_io_util.m"
            {
#line 609 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__HeadVar__1__tmp_copy_1 = parse_tree__prog_io_util__Terms_17;
#line 609 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_0__tmp_copy_4 = parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_30_30;
#line 609 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__STATE_VARIABLE_Specs_0__tmp_copy_6 = parse_tree__prog_io_util__STATE_VARIABLE_Specs_29_29;

#line 609 "prog_io_util.m"
              parse_tree__prog_io_util__STATE_VARIABLE_Specs_0_6 = parse_tree__prog_io_util__STATE_VARIABLE_Specs_0__tmp_copy_6;
#line 609 "prog_io_util.m"
              parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_0_4 = parse_tree__prog_io_util__STATE_VARIABLE_RevTypes_0__tmp_copy_4;
#line 609 "prog_io_util.m"
              parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__HeadVar__1__tmp_copy_1;
#line 609 "prog_io_util.m"
            }
#line 609 "prog_io_util.m"
            continue;
#line 599 "prog_io_util.m"
          }
#line 598 "prog_io_util.m"
      }
#line 598 "prog_io_util.m"
      break;
#line 598 "prog_io_util.m"
    }
#line 594 "prog_io_util.m"
}

#line 566 "prog_io_util.m"
static MR_Word MR_CALL 
parse_tree__prog_io_util__ill_formed_type_result_3_f_0(
#line 566 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_5,
#line 566 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 566 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_7)
#line 566 "prog_io_util.m"
{
#line 569 "prog_io_util.m"
  {
#line 569 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 569 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Result_8;
#line 569 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeCtorInfo_36_36 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 569 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__TermStr_9;
#line 569 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Pieces_10;
#line 569 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Spec_11;
#line 569 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_12_12;
#line 569 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_14_14;
#line 569 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_17_17;
#line 569 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_18_18;
#line 569 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_27_27;
#line 569 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_28_28;
#line 569 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_29_29;
#line 569 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_30_30;
#line 569 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_31_31;
#line 569 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_34_34;

#line 570 "prog_io_util.m"
    {
#line 570 "prog_io_util.m"
      parse_tree__prog_io_util__TermStr_9 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_util__TypeCtorInfo_36_36, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__Term_7);
    }
#line 572 "prog_io_util.m"
    {
#line 572 "prog_io_util.m"
      parse_tree__prog_io_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 572 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_18_18, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_9));
#line 572 "prog_io_util.m"
    }
#line 572 "prog_io_util.m"
    {
#line 572 "prog_io_util.m"
      parse_tree__prog_io_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_17_17, 0) = ((MR_Box) (parse_tree__prog_io_util__V_18_18));
#line 572 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[13])));
#line 572 "prog_io_util.m"
    }
#line 572 "prog_io_util.m"
    {
#line 572 "prog_io_util.m"
      parse_tree__prog_io_util__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_14_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[16])));
#line 572 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_14_14, 1) = ((MR_Box) (parse_tree__prog_io_util__V_17_17));
#line 572 "prog_io_util.m"
    }
#line 571 "prog_io_util.m"
    {
#line 571 "prog_io_util.m"
      parse_tree__prog_io_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_12_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 571 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_12_12, 1) = ((MR_Box) (parse_tree__prog_io_util__V_14_14));
#line 571 "prog_io_util.m"
    }
#line 571 "prog_io_util.m"
    {
#line 571 "prog_io_util.m"
      parse_tree__prog_io_util__Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_util__ContextPieces_5, parse_tree__prog_io_util__V_12_12);
    }
#line 574 "prog_io_util.m"
    {
#line 574 "prog_io_util.m"
      parse_tree__prog_io_util__V_29_29 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_util__TypeCtorInfo_36_36, parse_tree__prog_io_util__Term_7);
    }
#line 574 "prog_io_util.m"
    {
#line 574 "prog_io_util.m"
      parse_tree__prog_io_util__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 574 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_10));
#line 574 "prog_io_util.m"
    }
#line 574 "prog_io_util.m"
    {
#line 574 "prog_io_util.m"
      parse_tree__prog_io_util__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_util__V_31_31));
#line 574 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 574 "prog_io_util.m"
    }
#line 574 "prog_io_util.m"
    {
#line 574 "prog_io_util.m"
      parse_tree__prog_io_util__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 574 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io_util__V_29_29));
#line 574 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, 1) = ((MR_Box) (parse_tree__prog_io_util__V_30_30));
#line 574 "prog_io_util.m"
    }
#line 574 "prog_io_util.m"
    {
#line 574 "prog_io_util.m"
      parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_util__V_28_28));
#line 574 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 574 "prog_io_util.m"
    }
#line 573 "prog_io_util.m"
    {
#line 573 "prog_io_util.m"
      parse_tree__prog_io_util__Spec_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 573 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 573 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 573 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_11, 2) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
#line 573 "prog_io_util.m"
    }
#line 575 "prog_io_util.m"
    {
#line 575 "prog_io_util.m"
      parse_tree__prog_io_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 575 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_11));
#line 575 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 575 "prog_io_util.m"
    }
#line 575 "prog_io_util.m"
    {
#line 575 "prog_io_util.m"
      parse_tree__prog_io_util__Result_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 575 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Result_8, 0) = ((MR_Box) (parse_tree__prog_io_util__V_34_34));
#line 575 "prog_io_util.m"
    }
#line 569 "prog_io_util.m"
    return parse_tree__prog_io_util__Result_8;
#line 569 "prog_io_util.m"
  }
#line 566 "prog_io_util.m"
}

#line 386 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_compound_type_5_p_0(
#line 386 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_6,
#line 386 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_7,
#line 386 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_8,
#line 386 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__CompoundTypeKind_9,
#line 386 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_10)
#line 386 "prog_io_util.m"
{
#line 391 "prog_io_util.m"
  {
#line 391 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 391 "prog_io_util.m"
#line 391 "prog_io_util.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io_util__CompoundTypeKind_9)) {
#line 391 "prog_io_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 391 "prog_io_util.m"
      case (MR_Integer) 0:
#line 391 "prog_io_util.m"
        {
#line 391 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__CompoundTypeKind_9, (MR_Integer) 0)));
#line 391 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__ArgsResult_12;

#line 392 "prog_io_util.m"
          {
#line 392 "prog_io_util.m"
            parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_util__Args_11, parse_tree__prog_io_util__VarSet_7, parse_tree__prog_io_util__ContextPieces_8, &parse_tree__prog_io_util__ArgsResult_12);
          }
#line 396 "prog_io_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_util__ArgsResult_12)) == (MR_mktag((MR_Integer) 0))))
#line 398 "prog_io_util.m"
            *parse_tree__prog_io_util__Result_10 = (MR_Word) parse_tree__prog_io_util__ArgsResult_12;
#line 396 "prog_io_util.m"
          else
#line 394 "prog_io_util.m"
            {
#line 394 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__ArgTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ArgsResult_12, (MR_Integer) 0)));
#line 394 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_75_75;

#line 395 "prog_io_util.m"
              {
#line 395 "prog_io_util.m"
                parse_tree__prog_io_util__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 395 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 395 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_75_75, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTypes_13));
#line 395 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_75_75, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 395 "prog_io_util.m"
              }
#line 395 "prog_io_util.m"
              {
#line 395 "prog_io_util.m"
                MR_Word base;
#line 395 "prog_io_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 395 "prog_io_util.m"
                *parse_tree__prog_io_util__Result_10 = base;
#line 395 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_75_75));
#line 395 "prog_io_util.m"
              }
#line 394 "prog_io_util.m"
            }
#line 391 "prog_io_util.m"
        }
#line 391 "prog_io_util.m"
        break;
#line 391 "prog_io_util.m"
      case (MR_Integer) 1:
#line 421 "prog_io_util.m"
        {
#line 421 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__Arg1_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__CompoundTypeKind_9, (MR_Integer) 0)));
#line 421 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__Arg2_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__CompoundTypeKind_9, (MR_Integer) 1)));
#line 429 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__RetType_23;
#line 429 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__ArgTypes_80;
#line 423 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__FuncArgs_21;
#line 423 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_41_41;
#line 423 "prog_io_util.m"
          MR_String parse_tree__prog_io_util__V_42_42;
#line 423 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_22_22;

#line 423 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Arg1_19)) == (MR_mktag((MR_Integer) 0)));
#line 423 "prog_io_util.m"
          if (parse_tree__prog_io_util__succeeded)
#line 423 "prog_io_util.m"
            {
#line 423 "prog_io_util.m"
              parse_tree__prog_io_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Arg1_19, (MR_Integer) 0)));
#line 423 "prog_io_util.m"
              parse_tree__prog_io_util__FuncArgs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Arg1_19, (MR_Integer) 1)));
#line 423 "prog_io_util.m"
              parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Arg1_19, (MR_Integer) 2)));
#line 423 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_41_41)) == (MR_mktag((MR_Integer) 0)));
#line 423 "prog_io_util.m"
              if (parse_tree__prog_io_util__succeeded)
#line 423 "prog_io_util.m"
                {
#line 423 "prog_io_util.m"
                  parse_tree__prog_io_util__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_41_41, (MR_Integer) 0)));
#line 423 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_42_42, (MR_String) "func") == 0);
#line 423 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 423 "prog_io_util.m"
                    {
#line 424 "prog_io_util.m"
                      {
#line 424 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__maybe_parse_types_2_p_0(parse_tree__prog_io_util__FuncArgs_21, &parse_tree__prog_io_util__ArgTypes_80);
                      }
#line 423 "prog_io_util.m"
                      if (parse_tree__prog_io_util__succeeded)
#line 425 "prog_io_util.m"
                        {
#line 425 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_util__Arg2_20, &parse_tree__prog_io_util__RetType_23);
                        }
#line 423 "prog_io_util.m"
                    }
#line 423 "prog_io_util.m"
                }
#line 423 "prog_io_util.m"
            }
#line 429 "prog_io_util.m"
          if (parse_tree__prog_io_util__succeeded)
#line 427 "prog_io_util.m"
            {
#line 427 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_43_43;
#line 427 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_44_44;

#line 428 "prog_io_util.m"
              {
#line 428 "prog_io_util.m"
                parse_tree__prog_io_util__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 428 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_util__RetType_23));
#line 428 "prog_io_util.m"
              }
#line 428 "prog_io_util.m"
              mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 427 "prog_io_util.m"
              {
#line 427 "prog_io_util.m"
                parse_tree__prog_io_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 427 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 427 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_43_43, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTypes_80));
#line 427 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_43_43, 2) = ((MR_Box) (parse_tree__prog_io_util__V_44_44));
#line 427 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_43_43, 3) = ((MR_Box) ((MR_Integer) 0));
#line 427 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_43_43, 4) = NULL;
#line 427 "prog_io_util.m"
              }
#line 427 "prog_io_util.m"
              {
#line 427 "prog_io_util.m"
                MR_Word base;
#line 427 "prog_io_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 427 "prog_io_util.m"
                *parse_tree__prog_io_util__Result_10 = base;
#line 427 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_43_43));
#line 427 "prog_io_util.m"
              }
#line 427 "prog_io_util.m"
            }
#line 429 "prog_io_util.m"
          else
#line 430 "prog_io_util.m"
            {
#line 430 "prog_io_util.m"
              *parse_tree__prog_io_util__Result_10 = parse_tree__prog_io_util__ill_formed_type_result_3_f_0(parse_tree__prog_io_util__ContextPieces_8, parse_tree__prog_io_util__VarSet_7, parse_tree__prog_io_util__Term_6);
            }
#line 421 "prog_io_util.m"
        }
#line 391 "prog_io_util.m"
        break;
#line 391 "prog_io_util.m"
      case (MR_Integer) 2:
#line 411 "prog_io_util.m"
        {
#line 411 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__Args_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__CompoundTypeKind_9, (MR_Integer) 0)));
#line 417 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__ArgTypes_77;

#line 413 "prog_io_util.m"
          {
#line 413 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__maybe_parse_types_2_p_0(parse_tree__prog_io_util__Args_78, &parse_tree__prog_io_util__ArgTypes_77);
          }
#line 417 "prog_io_util.m"
          if (parse_tree__prog_io_util__succeeded)
#line 415 "prog_io_util.m"
            {
#line 415 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_47_47;

#line 416 "prog_io_util.m"
              mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 415 "prog_io_util.m"
              {
#line 415 "prog_io_util.m"
                parse_tree__prog_io_util__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 415 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 415 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_47_47, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTypes_77));
#line 415 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_47_47, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 415 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_47_47, 3) = ((MR_Box) ((MR_Integer) 0));
#line 415 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_47_47, 4) = NULL;
#line 415 "prog_io_util.m"
              }
#line 415 "prog_io_util.m"
              {
#line 415 "prog_io_util.m"
                MR_Word base;
#line 415 "prog_io_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 415 "prog_io_util.m"
                *parse_tree__prog_io_util__Result_10 = base;
#line 415 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_47_47));
#line 415 "prog_io_util.m"
              }
#line 415 "prog_io_util.m"
            }
#line 417 "prog_io_util.m"
          else
#line 418 "prog_io_util.m"
            {
#line 418 "prog_io_util.m"
              *parse_tree__prog_io_util__Result_10 = parse_tree__prog_io_util__ill_formed_type_result_3_f_0(parse_tree__prog_io_util__ContextPieces_8, parse_tree__prog_io_util__VarSet_7, parse_tree__prog_io_util__Term_6);
            }
#line 411 "prog_io_util.m"
        }
#line 391 "prog_io_util.m"
        break;
#line 391 "prog_io_util.m"
      case (MR_Integer) 3:
#line 391 "prog_io_util.m"
#line 391 "prog_io_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__CompoundTypeKind_9, (MR_Integer) 0)))) {
#line 391 "prog_io_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 391 "prog_io_util.m"
          case (MR_Integer) 0:
#line 433 "prog_io_util.m"
            {
#line 433 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Purity_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__CompoundTypeKind_9, (MR_Integer) 1)));
#line 433 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__SubTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__CompoundTypeKind_9, (MR_Integer) 2)));
#line 452 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__ResultPrime_29;
#line 435 "prog_io_util.m"
              MR_String parse_tree__prog_io_util__Name_26;
#line 435 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_30_30;
#line 435 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Args_93;
#line 435 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_27_27;

#line 435 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__SubTerm_25)) == (MR_mktag((MR_Integer) 0)));
#line 435 "prog_io_util.m"
              if (parse_tree__prog_io_util__succeeded)
#line 435 "prog_io_util.m"
                {
#line 435 "prog_io_util.m"
                  parse_tree__prog_io_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__SubTerm_25, (MR_Integer) 0)));
#line 435 "prog_io_util.m"
                  parse_tree__prog_io_util__Args_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__SubTerm_25, (MR_Integer) 1)));
#line 435 "prog_io_util.m"
                  parse_tree__prog_io_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__SubTerm_25, (MR_Integer) 2)));
#line 435 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_30_30)) == (MR_mktag((MR_Integer) 0)));
#line 435 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 435 "prog_io_util.m"
                    {
#line 435 "prog_io_util.m"
                      parse_tree__prog_io_util__Name_26 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_30_30, (MR_Integer) 0)));
#line 444 "prog_io_util.m"
                      if ((strcmp(parse_tree__prog_io_util__Name_26, (MR_String) "=") == 0))
#line 437 "prog_io_util.m"
                        {
#line 437 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_34_34;
#line 437 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_35_35;
#line 437 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_36_36;
#line 437 "prog_io_util.m"
                          MR_String parse_tree__prog_io_util__V_37_37;
#line 437 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_38_38;
#line 437 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_39_39;
#line 437 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__ArgTypes_82;
#line 437 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__Arg1_83;
#line 437 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__Arg2_84;
#line 437 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__FuncArgs_85;
#line 437 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__RetType_86;
#line 439 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_28_28;

#line 438 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args_93)) == (MR_mktag((MR_Integer) 1)));
#line 438 "prog_io_util.m"
                          if (parse_tree__prog_io_util__succeeded)
#line 438 "prog_io_util.m"
                            {
#line 438 "prog_io_util.m"
                              parse_tree__prog_io_util__Arg1_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_93, (MR_Integer) 0)));
#line 438 "prog_io_util.m"
                              parse_tree__prog_io_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_93, (MR_Integer) 1)));
#line 438 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 438 "prog_io_util.m"
                              if (parse_tree__prog_io_util__succeeded)
#line 438 "prog_io_util.m"
                                {
#line 438 "prog_io_util.m"
                                  parse_tree__prog_io_util__Arg2_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
#line 438 "prog_io_util.m"
                                  parse_tree__prog_io_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 1)));
#line 438 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 437 "prog_io_util.m"
                                  if (parse_tree__prog_io_util__succeeded)
#line 437 "prog_io_util.m"
                                    {
#line 439 "prog_io_util.m"
                                      parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Arg1_83)) == (MR_mktag((MR_Integer) 0)));
#line 439 "prog_io_util.m"
                                      if (parse_tree__prog_io_util__succeeded)
#line 439 "prog_io_util.m"
                                        {
#line 439 "prog_io_util.m"
                                          parse_tree__prog_io_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Arg1_83, (MR_Integer) 0)));
#line 439 "prog_io_util.m"
                                          parse_tree__prog_io_util__FuncArgs_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Arg1_83, (MR_Integer) 1)));
#line 439 "prog_io_util.m"
                                          parse_tree__prog_io_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Arg1_83, (MR_Integer) 2)));
#line 439 "prog_io_util.m"
                                          parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_36_36)) == (MR_mktag((MR_Integer) 0)));
#line 439 "prog_io_util.m"
                                          if (parse_tree__prog_io_util__succeeded)
#line 439 "prog_io_util.m"
                                            {
#line 439 "prog_io_util.m"
                                              parse_tree__prog_io_util__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_36_36, (MR_Integer) 0)));
#line 439 "prog_io_util.m"
                                              parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_37_37, (MR_String) "func") == 0);
#line 437 "prog_io_util.m"
                                              if (parse_tree__prog_io_util__succeeded)
#line 437 "prog_io_util.m"
                                                {
#line 440 "prog_io_util.m"
                                                  {
#line 440 "prog_io_util.m"
                                                    parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__maybe_parse_types_2_p_0(parse_tree__prog_io_util__FuncArgs_85, &parse_tree__prog_io_util__ArgTypes_82);
                                                  }
#line 437 "prog_io_util.m"
                                                  if (parse_tree__prog_io_util__succeeded)
#line 437 "prog_io_util.m"
                                                    {
#line 441 "prog_io_util.m"
                                                      {
#line 441 "prog_io_util.m"
                                                        parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_util__Arg2_84, &parse_tree__prog_io_util__RetType_86);
                                                      }
#line 437 "prog_io_util.m"
                                                      if (parse_tree__prog_io_util__succeeded)
#line 437 "prog_io_util.m"
                                                        {
#line 443 "prog_io_util.m"
                                                          mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 443 "prog_io_util.m"
                                                          {
#line 443 "prog_io_util.m"
                                                            parse_tree__prog_io_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 443 "prog_io_util.m"
                                                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_util__RetType_86));
#line 443 "prog_io_util.m"
                                                          }
#line 442 "prog_io_util.m"
                                                          {
#line 442 "prog_io_util.m"
                                                            parse_tree__prog_io_util__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 442 "prog_io_util.m"
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 442 "prog_io_util.m"
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_38_38, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTypes_82));
#line 442 "prog_io_util.m"
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_38_38, 2) = ((MR_Box) (parse_tree__prog_io_util__V_39_39));
#line 442 "prog_io_util.m"
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_38_38, 3) = ((MR_Box) (parse_tree__prog_io_util__Purity_24));
#line 442 "prog_io_util.m"
                                                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_38_38, 4) = NULL;
#line 442 "prog_io_util.m"
                                                          }
#line 442 "prog_io_util.m"
                                                          {
#line 442 "prog_io_util.m"
                                                            parse_tree__prog_io_util__ResultPrime_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 442 "prog_io_util.m"
                                                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ResultPrime_29, 0) = ((MR_Box) (parse_tree__prog_io_util__V_38_38));
#line 442 "prog_io_util.m"
                                                          }
#line 442 "prog_io_util.m"
                                                          parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 437 "prog_io_util.m"
                                                        }
#line 437 "prog_io_util.m"
                                                    }
#line 437 "prog_io_util.m"
                                                }
#line 439 "prog_io_util.m"
                                            }
#line 439 "prog_io_util.m"
                                        }
#line 437 "prog_io_util.m"
                                    }
#line 438 "prog_io_util.m"
                                }
#line 438 "prog_io_util.m"
                            }
#line 437 "prog_io_util.m"
                        }
#line 444 "prog_io_util.m"
                      else
#line 444 "prog_io_util.m"
                      if ((strcmp(parse_tree__prog_io_util__Name_26, (MR_String) "pred") == 0))
#line 445 "prog_io_util.m"
                        {
#line 445 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_31_31;
#line 445 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_32_32;
#line 445 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__ArgTypes_87;

#line 446 "prog_io_util.m"
                          {
#line 446 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__maybe_parse_types_2_p_0(parse_tree__prog_io_util__Args_93, &parse_tree__prog_io_util__ArgTypes_87);
                          }
#line 445 "prog_io_util.m"
                          if (parse_tree__prog_io_util__succeeded)
#line 445 "prog_io_util.m"
                            {
#line 447 "prog_io_util.m"
                              parse_tree__prog_io_util__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 448 "prog_io_util.m"
                              mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 447 "prog_io_util.m"
                              {
#line 447 "prog_io_util.m"
                                parse_tree__prog_io_util__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 447 "prog_io_util.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 447 "prog_io_util.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_31_31, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTypes_87));
#line 447 "prog_io_util.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_31_31, 2) = ((MR_Box) (parse_tree__prog_io_util__V_32_32));
#line 447 "prog_io_util.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_31_31, 3) = ((MR_Box) (parse_tree__prog_io_util__Purity_24));
#line 447 "prog_io_util.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_31_31, 4) = NULL;
#line 447 "prog_io_util.m"
                              }
#line 447 "prog_io_util.m"
                              {
#line 447 "prog_io_util.m"
                                parse_tree__prog_io_util__ResultPrime_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 447 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ResultPrime_29, 0) = ((MR_Box) (parse_tree__prog_io_util__V_31_31));
#line 447 "prog_io_util.m"
                              }
#line 447 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 445 "prog_io_util.m"
                            }
#line 445 "prog_io_util.m"
                        }
#line 444 "prog_io_util.m"
                      else
#line 444 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 435 "prog_io_util.m"
                    }
#line 435 "prog_io_util.m"
                }
#line 452 "prog_io_util.m"
              if (parse_tree__prog_io_util__succeeded)
#line 451 "prog_io_util.m"
                *parse_tree__prog_io_util__Result_10 = parse_tree__prog_io_util__ResultPrime_29;
#line 452 "prog_io_util.m"
              else
#line 453 "prog_io_util.m"
                {
#line 453 "prog_io_util.m"
                  *parse_tree__prog_io_util__Result_10 = parse_tree__prog_io_util__ill_formed_type_result_3_f_0(parse_tree__prog_io_util__ContextPieces_8, parse_tree__prog_io_util__VarSet_7, parse_tree__prog_io_util__Term_6);
                }
#line 433 "prog_io_util.m"
            }
#line 391 "prog_io_util.m"
            break;
#line 391 "prog_io_util.m"
          case (MR_Integer) 1:
#line 401 "prog_io_util.m"
            {
#line 401 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__TypeCtorInfo_111_111 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 401 "prog_io_util.m"
              MR_String parse_tree__prog_io_util__TermStr_16;
#line 401 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Pieces_17;
#line 401 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Spec_18;
#line 401 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_51_51;
#line 401 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_53_53;
#line 401 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_56_56;
#line 401 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_57_57;
#line 401 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_66_66;
#line 401 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_67_67;
#line 401 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_68_68;
#line 401 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_69_69;
#line 401 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_70_70;
#line 401 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_73_73;

#line 404 "prog_io_util.m"
              {
#line 404 "prog_io_util.m"
                parse_tree__prog_io_util__TermStr_16 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_util__TypeCtorInfo_111_111, parse_tree__prog_io_util__VarSet_7, parse_tree__prog_io_util__Term_6);
              }
#line 406 "prog_io_util.m"
              {
#line 406 "prog_io_util.m"
                parse_tree__prog_io_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 406 "prog_io_util.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_16));
#line 406 "prog_io_util.m"
              }
#line 406 "prog_io_util.m"
              {
#line 406 "prog_io_util.m"
                parse_tree__prog_io_util__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_util__V_57_57));
#line 406 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[13])));
#line 406 "prog_io_util.m"
              }
#line 406 "prog_io_util.m"
              {
#line 406 "prog_io_util.m"
                parse_tree__prog_io_util__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_53_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[16])));
#line 406 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_53_53, 1) = ((MR_Box) (parse_tree__prog_io_util__V_56_56));
#line 406 "prog_io_util.m"
              }
#line 405 "prog_io_util.m"
              {
#line 405 "prog_io_util.m"
                parse_tree__prog_io_util__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 405 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_51_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 405 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_51_51, 1) = ((MR_Box) (parse_tree__prog_io_util__V_53_53));
#line 405 "prog_io_util.m"
              }
#line 405 "prog_io_util.m"
              {
#line 405 "prog_io_util.m"
                parse_tree__prog_io_util__Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_util__ContextPieces_8, parse_tree__prog_io_util__V_51_51);
              }
#line 408 "prog_io_util.m"
              {
#line 408 "prog_io_util.m"
                parse_tree__prog_io_util__V_68_68 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_util__TypeCtorInfo_111_111, parse_tree__prog_io_util__Term_6);
              }
#line 408 "prog_io_util.m"
              {
#line 408 "prog_io_util.m"
                parse_tree__prog_io_util__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 408 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_17));
#line 408 "prog_io_util.m"
              }
#line 408 "prog_io_util.m"
              {
#line 408 "prog_io_util.m"
                parse_tree__prog_io_util__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_util__V_70_70));
#line 408 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 408 "prog_io_util.m"
              }
#line 408 "prog_io_util.m"
              {
#line 408 "prog_io_util.m"
                parse_tree__prog_io_util__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 408 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_util__V_68_68));
#line 408 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_67_67, 1) = ((MR_Box) (parse_tree__prog_io_util__V_69_69));
#line 408 "prog_io_util.m"
              }
#line 408 "prog_io_util.m"
              {
#line 408 "prog_io_util.m"
                parse_tree__prog_io_util__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_util__V_67_67));
#line 408 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 408 "prog_io_util.m"
              }
#line 407 "prog_io_util.m"
              {
#line 407 "prog_io_util.m"
                parse_tree__prog_io_util__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 407 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 407 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 407 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_18, 2) = ((MR_Box) (parse_tree__prog_io_util__V_66_66));
#line 407 "prog_io_util.m"
              }
#line 409 "prog_io_util.m"
              {
#line 409 "prog_io_util.m"
                parse_tree__prog_io_util__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_18));
#line 409 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 409 "prog_io_util.m"
              }
#line 409 "prog_io_util.m"
              {
#line 409 "prog_io_util.m"
                MR_Word base;
#line 409 "prog_io_util.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 409 "prog_io_util.m"
                *parse_tree__prog_io_util__Result_10 = base;
#line 409 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_73_73));
#line 409 "prog_io_util.m"
              }
#line 401 "prog_io_util.m"
            }
#line 391 "prog_io_util.m"
            break;
#line 391 "prog_io_util.m"
        }
#line 391 "prog_io_util.m"
        break;
#line 391 "prog_io_util.m"
    }
#line 391 "prog_io_util.m"
  }
#line 386 "prog_io_util.m"
}

#line 225 "prog_io_util.m"
MR_String MR_CALL 
parse_tree__prog_io_util__attribute_description_1_f_0(
#line 225 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1)
#line 225 "prog_io_util.m"
{
#line 1616 "prog_io_util.m"
  {
#line 1616 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1616 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__HeadVar__2_2;

#line 1616 "prog_io_util.m"
#line 1616 "prog_io_util.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) {
#line 1616 "prog_io_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1616 "prog_io_util.m"
      case (MR_Integer) 0:
#line 1625 "prog_io_util.m"
        parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "solver type specifier";
#line 1616 "prog_io_util.m"
        break;
#line 1616 "prog_io_util.m"
      case (MR_Integer) 1:
#line 1616 "prog_io_util.m"
        parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "purity specifier";
#line 1616 "prog_io_util.m"
        break;
#line 1616 "prog_io_util.m"
      case (MR_Integer) 2:
#line 1616 "prog_io_util.m"
        {
#line 1616 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1617 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1616 "prog_io_util.m"
#line 1616 "prog_io_util.m"
          switch (parse_tree__prog_io_util__V_15_15) {
#line 1616 "prog_io_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1616 "prog_io_util.m"
            case (MR_Integer) 0:
#line 1620 "prog_io_util.m"
              parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "existential quantifier (\140some\')";
#line 1616 "prog_io_util.m"
              break;
#line 1616 "prog_io_util.m"
            case (MR_Integer) 1:
#line 1618 "prog_io_util.m"
              parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "universal quantifier (\140all\')";
#line 1616 "prog_io_util.m"
              break;
#line 1616 "prog_io_util.m"
          }
#line 1616 "prog_io_util.m"
        }
#line 1616 "prog_io_util.m"
        break;
#line 1616 "prog_io_util.m"
      case (MR_Integer) 3:
#line 1616 "prog_io_util.m"
        {
#line 1616 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1621 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1616 "prog_io_util.m"
#line 1616 "prog_io_util.m"
          switch (parse_tree__prog_io_util__V_13_13) {
#line 1616 "prog_io_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1616 "prog_io_util.m"
            case (MR_Integer) 0:
#line 1624 "prog_io_util.m"
              parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "existentially quantified type class constraint (\140=>\')";
#line 1616 "prog_io_util.m"
              break;
#line 1616 "prog_io_util.m"
            case (MR_Integer) 1:
#line 1622 "prog_io_util.m"
              parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "type class constraint (\140<=\')";
#line 1616 "prog_io_util.m"
              break;
#line 1616 "prog_io_util.m"
          }
#line 1616 "prog_io_util.m"
        }
#line 1616 "prog_io_util.m"
        break;
#line 1616 "prog_io_util.m"
    }
#line 1616 "prog_io_util.m"
    return parse_tree__prog_io_util__HeadVar__2_2;
#line 1616 "prog_io_util.m"
  }
#line 225 "prog_io_util.m"
}

#line 222 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__check_no_attributes_3_p_0(
#line 222 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_35,
#line 222 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Result0_4,
#line 222 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Attributes_5,
#line 222 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_6)
#line 222 "prog_io_util.m"
{
#line 1612 "prog_io_util.m"
  {
#line 1612 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Result0_4)) == (MR_mktag((MR_Integer) 1)));
#line 1612 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Attr_8;
#line 1612 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Context_9;
#line 1603 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 1603 "prog_io_util.m"
    MR_Box parse_tree__prog_io_util__V_7_7;
#line 1604 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_10_10;

#line 1603 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1603 "prog_io_util.m"
      {
#line 1603 "prog_io_util.m"
        parse_tree__prog_io_util__V_7_7 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Result0_4, (MR_Integer) 0));
#line 1604 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Attributes_5)) == (MR_mktag((MR_Integer) 1)));
#line 1604 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1604 "prog_io_util.m"
          {
#line 1604 "prog_io_util.m"
            parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Attributes_5, (MR_Integer) 0)));
#line 1604 "prog_io_util.m"
            parse_tree__prog_io_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Attributes_5, (MR_Integer) 1)));
#line 1604 "prog_io_util.m"
            parse_tree__prog_io_util__Attr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_13_13, (MR_Integer) 0)));
#line 1604 "prog_io_util.m"
            parse_tree__prog_io_util__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_13_13, (MR_Integer) 1)));
#line 1604 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1604 "prog_io_util.m"
          }
#line 1603 "prog_io_util.m"
      }
#line 1612 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1608 "prog_io_util.m"
      {
#line 1608 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Pieces_11;
#line 1608 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Spec_12;
#line 1608 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_16_16;
#line 1608 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_17_17;
#line 1608 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_18_18;
#line 1608 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_27_27;
#line 1608 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_28_28;
#line 1608 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_29_29;
#line 1608 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_30_30;
#line 1608 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_33_33;

#line 1607 "prog_io_util.m"
        {
#line 1607 "prog_io_util.m"
          parse_tree__prog_io_util__V_18_18 = parse_tree__prog_io_util__attribute_description_1_f_0(parse_tree__prog_io_util__Attr_8);
        }
#line 1607 "prog_io_util.m"
        {
#line 1607 "prog_io_util.m"
          parse_tree__prog_io_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1607 "prog_io_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1607 "prog_io_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_17_17, 1) = ((MR_Box) (parse_tree__prog_io_util__V_18_18));
#line 1607 "prog_io_util.m"
        }
#line 1607 "prog_io_util.m"
        {
#line 1607 "prog_io_util.m"
          parse_tree__prog_io_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1607 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 0) = ((MR_Box) (parse_tree__prog_io_util__V_17_17));
#line 1607 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[11])));
#line 1607 "prog_io_util.m"
        }
#line 1607 "prog_io_util.m"
        {
#line 1607 "prog_io_util.m"
          parse_tree__prog_io_util__Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1607 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[15])));
#line 1607 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Pieces_11, 1) = ((MR_Box) (parse_tree__prog_io_util__V_16_16));
#line 1607 "prog_io_util.m"
        }
#line 1610 "prog_io_util.m"
        {
#line 1610 "prog_io_util.m"
          parse_tree__prog_io_util__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1610 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_11));
#line 1610 "prog_io_util.m"
        }
#line 1610 "prog_io_util.m"
        {
#line 1610 "prog_io_util.m"
          parse_tree__prog_io_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1610 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io_util__V_30_30));
#line 1610 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1610 "prog_io_util.m"
        }
#line 1610 "prog_io_util.m"
        {
#line 1610 "prog_io_util.m"
          parse_tree__prog_io_util__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1610 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io_util__Context_9));
#line 1610 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, 1) = ((MR_Box) (parse_tree__prog_io_util__V_29_29));
#line 1610 "prog_io_util.m"
        }
#line 1610 "prog_io_util.m"
        {
#line 1610 "prog_io_util.m"
          parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1610 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_util__V_28_28));
#line 1610 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1610 "prog_io_util.m"
        }
#line 1609 "prog_io_util.m"
        {
#line 1609 "prog_io_util.m"
          parse_tree__prog_io_util__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1609 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1609 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1609 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
#line 1609 "prog_io_util.m"
        }
#line 1611 "prog_io_util.m"
        {
#line 1611 "prog_io_util.m"
          parse_tree__prog_io_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1611 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_12));
#line 1611 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1611 "prog_io_util.m"
        }
#line 1611 "prog_io_util.m"
        {
#line 1611 "prog_io_util.m"
          MR_Word base;
#line 1611 "prog_io_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1611 "prog_io_util.m"
          *parse_tree__prog_io_util__Result_6 = base;
#line 1611 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_33_33));
#line 1611 "prog_io_util.m"
        }
#line 1608 "prog_io_util.m"
      }
#line 1612 "prog_io_util.m"
    else
#line 1613 "prog_io_util.m"
      *parse_tree__prog_io_util__Result_6 = parse_tree__prog_io_util__Result0_4;
#line 1612 "prog_io_util.m"
  }
#line 222 "prog_io_util.m"
}

#line 219 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__parse_decl_attribute_4_p_0(
#line 219 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Functor_5,
#line 219 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ArgTerms_6,
#line 219 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Attribute_7,
#line 219 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__SubTerm_8)
#line 219 "prog_io_util.m"
{
#line 1570 "prog_io_util.m"
  {
#line 1570 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__ArgTerms_6)) == (MR_mktag((MR_Integer) 1)));
#line 1570 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_34_34;
#line 1570 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_35_35;
#line 1570 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__lo_0;
#line 1570 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__hi_1;
#line 1570 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__mid_2;
#line 1570 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__result_3;

#line 1579 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1579 "prog_io_util.m"
      {
#line 1579 "prog_io_util.m"
        parse_tree__prog_io_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ArgTerms_6, (MR_Integer) 0)));
#line 1579 "prog_io_util.m"
        parse_tree__prog_io_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ArgTerms_6, (MR_Integer) 1)));
#line 1570 "prog_io_util.m"
        /* binary string jump switch */
#line 1570 "prog_io_util.m"
        parse_tree__prog_io_util__lo_0 = (MR_Integer) 0;
#line 1570 "prog_io_util.m"
        parse_tree__prog_io_util__hi_1 = (MR_Integer) 6;
#line 1570 "prog_io_util.m"
        do
#line 1570 "prog_io_util.m"
          {
#line 1570 "prog_io_util.m"
            parse_tree__prog_io_util__mid_2 = (((parse_tree__prog_io_util__lo_0 + parse_tree__prog_io_util__hi_1)) / (MR_Integer) 2);
#line 1570 "prog_io_util.m"
            parse_tree__prog_io_util__result_3 = MR_strcmp(parse_tree__prog_io_util__Functor_5, ((&parse_tree__prog_io_util_vector_common_6[0 + parse_tree__prog_io_util__mid_2]))->parse_tree__prog_io_util__vector_common_type_6_0__vct_6_f_0);
#line 1570 "prog_io_util.m"
            if ((parse_tree__prog_io_util__result_3 == (MR_Integer) 0))
#line 1570 "prog_io_util.m"
              {
#line 1570 "prog_io_util.m"
#line 1570 "prog_io_util.m"
                switch (((&parse_tree__prog_io_util_vector_common_6[0 + parse_tree__prog_io_util__mid_2]))->parse_tree__prog_io_util__vector_common_type_6_0__vct_6_f_1) {
#line 1570 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1570 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 1578 "prog_io_util.m"
                    {
#line 1578 "prog_io_util.m"
                      /* case "<=" */
#line 1578 "prog_io_util.m"
                      {
#line 1578 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__ConstraintsTerm_9;
#line 1578 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_23_23;
#line 1578 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_24_24;

#line 1579 "prog_io_util.m"
                        *parse_tree__prog_io_util__SubTerm_8 = parse_tree__prog_io_util__V_35_35;
#line 1579 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1579 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1579 "prog_io_util.m"
                          {
#line 1579 "prog_io_util.m"
                            parse_tree__prog_io_util__ConstraintsTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
#line 1579 "prog_io_util.m"
                            parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 1)));
#line 1579 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1578 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1578 "prog_io_util.m"
                              {
#line 1580 "prog_io_util.m"
                                parse_tree__prog_io_util__V_24_24 = (MR_Integer) 1;
#line 1580 "prog_io_util.m"
                                {
#line 1580 "prog_io_util.m"
                                  MR_Word base;
#line 1580 "prog_io_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1580 "prog_io_util.m"
                                  *parse_tree__prog_io_util__Attribute_7 = base;
#line 1580 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_24_24));
#line 1580 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__ConstraintsTerm_9));
#line 1580 "prog_io_util.m"
                                }
#line 1580 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1578 "prog_io_util.m"
                              }
#line 1579 "prog_io_util.m"
                          }
#line 1578 "prog_io_util.m"
                      }
#line 1578 "prog_io_util.m"
                    }
#line 1570 "prog_io_util.m"
                    break;
#line 1570 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 1582 "prog_io_util.m"
                    {
#line 1582 "prog_io_util.m"
                      /* case "=>" */
#line 1582 "prog_io_util.m"
                      {
#line 1582 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_20_20;
#line 1582 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_21_21;
#line 1582 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__ConstraintsTerm_29;

#line 1583 "prog_io_util.m"
                        *parse_tree__prog_io_util__SubTerm_8 = parse_tree__prog_io_util__V_35_35;
#line 1583 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1583 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1583 "prog_io_util.m"
                          {
#line 1583 "prog_io_util.m"
                            parse_tree__prog_io_util__ConstraintsTerm_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
#line 1583 "prog_io_util.m"
                            parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 1)));
#line 1583 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1582 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1582 "prog_io_util.m"
                              {
#line 1584 "prog_io_util.m"
                                parse_tree__prog_io_util__V_21_21 = (MR_Integer) 0;
#line 1584 "prog_io_util.m"
                                {
#line 1584 "prog_io_util.m"
                                  MR_Word base;
#line 1584 "prog_io_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1584 "prog_io_util.m"
                                  *parse_tree__prog_io_util__Attribute_7 = base;
#line 1584 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_21_21));
#line 1584 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__ConstraintsTerm_29));
#line 1584 "prog_io_util.m"
                                }
#line 1584 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1582 "prog_io_util.m"
                              }
#line 1583 "prog_io_util.m"
                          }
#line 1582 "prog_io_util.m"
                      }
#line 1582 "prog_io_util.m"
                    }
#line 1570 "prog_io_util.m"
                    break;
#line 1570 "prog_io_util.m"
                  case (MR_Integer) 2:
#line 1591 "prog_io_util.m"
                    {
#line 1591 "prog_io_util.m"
                      /* case "all" */
#line 1591 "prog_io_util.m"
                      {
#line 1591 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TypeCtorInfo_33_33;
#line 1591 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_14_14;
#line 1591 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_15_15;
#line 1591 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TVars_31;

#line 1592 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1592 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1592 "prog_io_util.m"
                          {
#line 1592 "prog_io_util.m"
                            *parse_tree__prog_io_util__SubTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
#line 1592 "prog_io_util.m"
                            parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 1)));
#line 1592 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1591 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1591 "prog_io_util.m"
                              {
#line 15560 "parse_tree.prog_io_util.c"
                                parse_tree__prog_io_util__TypeCtorInfo_33_33 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1593 "prog_io_util.m"
                                {
#line 1593 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_list_of_vars_2_p_0(parse_tree__prog_io_util__TypeCtorInfo_33_33, parse_tree__prog_io_util__V_35_35, &parse_tree__prog_io_util__TVars_31);
                                }
#line 1591 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 1591 "prog_io_util.m"
                                  {
#line 1594 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_15_15 = (MR_Integer) 1;
#line 1594 "prog_io_util.m"
                                    {
#line 1594 "prog_io_util.m"
                                      MR_Word base;
#line 1594 "prog_io_util.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1594 "prog_io_util.m"
                                      *parse_tree__prog_io_util__Attribute_7 = base;
#line 1594 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_15_15));
#line 1594 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TVars_31));
#line 1594 "prog_io_util.m"
                                    }
#line 1594 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1591 "prog_io_util.m"
                                  }
#line 1591 "prog_io_util.m"
                              }
#line 1592 "prog_io_util.m"
                          }
#line 1591 "prog_io_util.m"
                      }
#line 1591 "prog_io_util.m"
                    }
#line 1570 "prog_io_util.m"
                    break;
#line 1570 "prog_io_util.m"
                  case (MR_Integer) 3:
#line 1570 "prog_io_util.m"
                    {
#line 1570 "prog_io_util.m"
                      /* case "impure" */
#line 1570 "prog_io_util.m"
                      {
#line 1570 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_28_28;

#line 1571 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1570 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1570 "prog_io_util.m"
                          {
#line 1571 "prog_io_util.m"
                            *parse_tree__prog_io_util__SubTerm_8 = parse_tree__prog_io_util__V_35_35;
#line 1572 "prog_io_util.m"
                            parse_tree__prog_io_util__V_28_28 = (MR_Integer) 2;
#line 1572 "prog_io_util.m"
                            *parse_tree__prog_io_util__Attribute_7 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[11]);
#line 1572 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1570 "prog_io_util.m"
                          }
#line 1570 "prog_io_util.m"
                      }
#line 1570 "prog_io_util.m"
                    }
#line 1570 "prog_io_util.m"
                    break;
#line 1570 "prog_io_util.m"
                  case (MR_Integer) 4:
#line 1574 "prog_io_util.m"
                    {
#line 1574 "prog_io_util.m"
                      /* case "semipure" */
#line 1574 "prog_io_util.m"
                      {
#line 1574 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_26_26;

#line 1575 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1574 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1574 "prog_io_util.m"
                          {
#line 1575 "prog_io_util.m"
                            *parse_tree__prog_io_util__SubTerm_8 = parse_tree__prog_io_util__V_35_35;
#line 1576 "prog_io_util.m"
                            parse_tree__prog_io_util__V_26_26 = (MR_Integer) 1;
#line 1576 "prog_io_util.m"
                            *parse_tree__prog_io_util__Attribute_7 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[10]);
#line 1576 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1574 "prog_io_util.m"
                          }
#line 1574 "prog_io_util.m"
                      }
#line 1574 "prog_io_util.m"
                    }
#line 1570 "prog_io_util.m"
                    break;
#line 1570 "prog_io_util.m"
                  case (MR_Integer) 5:
#line 1596 "prog_io_util.m"
                    {
#line 1596 "prog_io_util.m"
                      /* case "solver" */
#line 1597 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1596 "prog_io_util.m"
                      if (parse_tree__prog_io_util__succeeded)
#line 1596 "prog_io_util.m"
                        {
#line 1597 "prog_io_util.m"
                          *parse_tree__prog_io_util__SubTerm_8 = parse_tree__prog_io_util__V_35_35;
#line 1598 "prog_io_util.m"
                          *parse_tree__prog_io_util__Attribute_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1598 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1596 "prog_io_util.m"
                        }
#line 1596 "prog_io_util.m"
                    }
#line 1570 "prog_io_util.m"
                    break;
#line 1570 "prog_io_util.m"
                  case (MR_Integer) 6:
#line 1586 "prog_io_util.m"
                    {
#line 1586 "prog_io_util.m"
                      /* case "some" */
#line 1586 "prog_io_util.m"
                      {
#line 1586 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TypeCtorInfo_32_32;
#line 1586 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TVars_11;
#line 1586 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_17_17;
#line 1586 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_18_18;

#line 1587 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1587 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1587 "prog_io_util.m"
                          {
#line 1587 "prog_io_util.m"
                            *parse_tree__prog_io_util__SubTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
#line 1587 "prog_io_util.m"
                            parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 1)));
#line 1587 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1586 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1586 "prog_io_util.m"
                              {
#line 15724 "parse_tree.prog_io_util.c"
                                parse_tree__prog_io_util__TypeCtorInfo_32_32 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1588 "prog_io_util.m"
                                {
#line 1588 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_list_of_vars_2_p_0(parse_tree__prog_io_util__TypeCtorInfo_32_32, parse_tree__prog_io_util__V_35_35, &parse_tree__prog_io_util__TVars_11);
                                }
#line 1586 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 1586 "prog_io_util.m"
                                  {
#line 1589 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_18_18 = (MR_Integer) 0;
#line 1589 "prog_io_util.m"
                                    {
#line 1589 "prog_io_util.m"
                                      MR_Word base;
#line 1589 "prog_io_util.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1589 "prog_io_util.m"
                                      *parse_tree__prog_io_util__Attribute_7 = base;
#line 1589 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_18_18));
#line 1589 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TVars_11));
#line 1589 "prog_io_util.m"
                                    }
#line 1589 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1586 "prog_io_util.m"
                                  }
#line 1586 "prog_io_util.m"
                              }
#line 1587 "prog_io_util.m"
                          }
#line 1586 "prog_io_util.m"
                      }
#line 1586 "prog_io_util.m"
                    }
#line 1570 "prog_io_util.m"
                    break;
#line 1570 "prog_io_util.m"
                }
#line 1570 "prog_io_util.m"
                /* jump out of search loop */
#line 1570 "prog_io_util.m"
                goto label_0;
#line 1570 "prog_io_util.m"
              }
#line 1570 "prog_io_util.m"
            else
#line 1570 "prog_io_util.m"
            if ((parse_tree__prog_io_util__result_3 < (MR_Integer) 0))
#line 1570 "prog_io_util.m"
              parse_tree__prog_io_util__hi_1 = (parse_tree__prog_io_util__mid_2 - (MR_Integer) 1);
#line 1570 "prog_io_util.m"
            else
#line 1570 "prog_io_util.m"
              parse_tree__prog_io_util__lo_0 = (parse_tree__prog_io_util__mid_2 + (MR_Integer) 1);
#line 1570 "prog_io_util.m"
          }
#line 1570 "prog_io_util.m"
        while ((parse_tree__prog_io_util__lo_0 <= parse_tree__prog_io_util__hi_1));
#line 1570 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 1570 "prog_io_util.m"
      label_0:;
#line 1579 "prog_io_util.m"
      }
#line 1570 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1570 "prog_io_util.m"
  }
#line 219 "prog_io_util.m"
}

#line 198 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__list_term_to_term_list_2_p_0(
#line 198 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 198 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Terms_4)
#line 198 "prog_io_util.m"
{
#line 1558 "prog_io_util.m"
  {
#line 1558 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 1558 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_19_19;
#line 1558 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_20_20;
#line 1558 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_21_21;
#line 1558 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_18_18;

#line 1558 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1558 "prog_io_util.m"
      {
#line 1558 "prog_io_util.m"
        parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_3, (MR_Integer) 0)));
#line 1558 "prog_io_util.m"
        parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_3, (MR_Integer) 1)));
#line 1558 "prog_io_util.m"
        parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_3, (MR_Integer) 2)));
#line 1562 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_20_20)) == (MR_mktag((MR_Integer) 0)));
#line 1562 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1562 "prog_io_util.m"
          {
#line 1562 "prog_io_util.m"
            parse_tree__prog_io_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_20_20, (MR_Integer) 0)));
#line 1558 "prog_io_util.m"
            if ((parse_tree__prog_io_util__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1562 "prog_io_util.m"
              {
#line 1562 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_21_21, (MR_String) "[]") == 0);
#line 1562 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1562 "prog_io_util.m"
                  {
#line 1563 "prog_io_util.m"
                    *parse_tree__prog_io_util__Terms_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1563 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1562 "prog_io_util.m"
                  }
#line 1562 "prog_io_util.m"
              }
#line 1558 "prog_io_util.m"
            else
#line 1558 "prog_io_util.m"
              {
#line 1558 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__HeadTerm_5;
#line 1558 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailTerm_6;
#line 1558 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailTerms_8;
#line 1558 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_16_16;
#line 1558 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_17_17;

#line 1558 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_21_21, (MR_String) "[|]") == 0);
#line 1558 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1558 "prog_io_util.m"
                  {
#line 1558 "prog_io_util.m"
                    parse_tree__prog_io_util__HeadTerm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, (MR_Integer) 0)));
#line 1558 "prog_io_util.m"
                    parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, (MR_Integer) 1)));
#line 1558 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 1558 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1558 "prog_io_util.m"
                      {
#line 1558 "prog_io_util.m"
                        parse_tree__prog_io_util__TailTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
#line 1558 "prog_io_util.m"
                        parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
#line 1558 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1558 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1558 "prog_io_util.m"
                          {
#line 1559 "prog_io_util.m"
                            {
#line 1559 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__list_term_to_term_list_2_p_0(parse_tree__prog_io_util__TailTerm_6, &parse_tree__prog_io_util__TailTerms_8);
                            }
#line 1558 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1558 "prog_io_util.m"
                              {
#line 1560 "prog_io_util.m"
                                {
#line 1560 "prog_io_util.m"
                                  MR_Word base;
#line 1560 "prog_io_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1560 "prog_io_util.m"
                                  *parse_tree__prog_io_util__Terms_4 = base;
#line 1560 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadTerm_5));
#line 1560 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailTerms_8));
#line 1560 "prog_io_util.m"
                                }
#line 1560 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1558 "prog_io_util.m"
                              }
#line 1558 "prog_io_util.m"
                          }
#line 1558 "prog_io_util.m"
                      }
#line 1558 "prog_io_util.m"
                  }
#line 1558 "prog_io_util.m"
              }
#line 1562 "prog_io_util.m"
          }
#line 1558 "prog_io_util.m"
      }
#line 1558 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1558 "prog_io_util.m"
  }
#line 198 "prog_io_util.m"
}

#line 195 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__map_parser_3_p_0(
#line 195 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_22,
#line 195 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Parser_1,
#line 195 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 195 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3)
#line 195 "prog_io_util.m"
{
#line 1285 "prog_io_util.m"
  {
#line 1285 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 1285 "prog_io_util.m"
    if ((parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1285 "prog_io_util.m"
      {
#line 1285 "prog_io_util.m"
        *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[9]);
#line 1285 "prog_io_util.m"
      }
#line 1285 "prog_io_util.m"
    else
#line 1286 "prog_io_util.m"
      {
#line 1286 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1286 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1286 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__HeadResult_10;
#line 1286 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TailResult_11;
#line 1287 "prog_io_util.m"
        void MR_CALL (* parse_tree__prog_io_util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Parser_1, (MR_Integer) 1)));
#line 1287 "prog_io_util.m"
        MR_Box parse_tree__prog_io_util__conv1_HeadResult_10;

#line 1287 "prog_io_util.m"
        {
#line 1287 "prog_io_util.m"
          parse_tree__prog_io_util__func_0(((MR_Box) parse_tree__prog_io_util__Parser_1), ((MR_Box) (parse_tree__prog_io_util__Head_7)), &parse_tree__prog_io_util__conv1_HeadResult_10);
        }
#line 1287 "prog_io_util.m"
        parse_tree__prog_io_util__HeadResult_10 = ((MR_Word) parse_tree__prog_io_util__conv1_HeadResult_10);
#line 1288 "prog_io_util.m"
        {
#line 1288 "prog_io_util.m"
          parse_tree__prog_io_util__map_parser_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_22, parse_tree__prog_io_util__Parser_1, parse_tree__prog_io_util__Tail_8, &parse_tree__prog_io_util__TailResult_11);
        }
#line 1293 "prog_io_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadResult_10)) == (MR_mktag((MR_Integer) 0))))
#line 1293 "prog_io_util.m"
          {
#line 1293 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadResult_10, (MR_Integer) 0)));

#line 1293 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__TailResult_11)) == (MR_mktag((MR_Integer) 0))))
#line 1290 "prog_io_util.m"
              {
#line 1290 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailSpecs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TailResult_11, (MR_Integer) 0)));
#line 1290 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_20_20;

#line 1292 "prog_io_util.m"
                {
#line 1292 "prog_io_util.m"
                  parse_tree__prog_io_util__V_20_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_util__V_24_24, parse_tree__prog_io_util__TailSpecs_13);
                }
#line 1292 "prog_io_util.m"
                {
#line 1292 "prog_io_util.m"
                  MR_Word base;
#line 1292 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1292 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 1292 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_20_20));
#line 1292 "prog_io_util.m"
                }
#line 1290 "prog_io_util.m"
              }
#line 1293 "prog_io_util.m"
            else
#line 1296 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) parse_tree__prog_io_util__HeadResult_10;
#line 1293 "prog_io_util.m"
          }
#line 1293 "prog_io_util.m"
        else
#line 1293 "prog_io_util.m"
          {
#line 1293 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_25_25 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadResult_10, (MR_Integer) 0));

#line 1293 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__TailResult_11)) == (MR_mktag((MR_Integer) 0))))
#line 1300 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__3_3 = parse_tree__prog_io_util__TailResult_11;
#line 1293 "prog_io_util.m"
            else
#line 1302 "prog_io_util.m"
              {
#line 1302 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailItems_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TailResult_11, (MR_Integer) 0)));
#line 1302 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_19_19;

#line 1304 "prog_io_util.m"
                {
#line 1304 "prog_io_util.m"
                  parse_tree__prog_io_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1304 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 0) = parse_tree__prog_io_util__V_25_25;
#line 1304 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io_util__TailItems_18));
#line 1304 "prog_io_util.m"
                }
#line 1304 "prog_io_util.m"
                {
#line 1304 "prog_io_util.m"
                  MR_Word base;
#line 1304 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1304 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 1304 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_19_19));
#line 1304 "prog_io_util.m"
                }
#line 1302 "prog_io_util.m"
              }
#line 1293 "prog_io_util.m"
          }
#line 1286 "prog_io_util.m"
      }
#line 1285 "prog_io_util.m"
  }
#line 195 "prog_io_util.m"
}

#line 192 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_list_3_p_0(
#line 192 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_8,
#line 192 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Parser_4,
#line 192 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_5,
#line 192 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_6)
#line 192 "prog_io_util.m"
{
#line 1245 "prog_io_util.m"
  {
#line 1245 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1245 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__List_7;
#line 1245 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Head_12;
#line 1245 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Tail_13;
#line 1245 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_15_15;

#line 1227 "prog_io_util.m"
    {
#line 1227 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", parse_tree__prog_io_util__Term_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_15_15);
    }
#line 1204 "prog_io_util.m"
    parse_tree__prog_io_util__Head_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_15_15, (MR_Integer) 0)));
#line 1204 "prog_io_util.m"
    parse_tree__prog_io_util__Tail_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_15_15, (MR_Integer) 1)));
#line 1205 "prog_io_util.m"
    {
#line 1205 "prog_io_util.m"
      parse_tree__prog_io_util__List_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1205 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__List_7, 0) = ((MR_Box) (parse_tree__prog_io_util__Head_12));
#line 1205 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__List_7, 1) = ((MR_Box) (parse_tree__prog_io_util__Tail_13));
#line 1205 "prog_io_util.m"
    }
#line 1247 "prog_io_util.m"
    {
#line 1247 "prog_io_util.m"
      parse_tree__prog_io_util__map_parser_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_8, parse_tree__prog_io_util__Parser_4, parse_tree__prog_io_util__List_7, parse_tree__prog_io_util__Result_6);
#line 1247 "prog_io_util.m"
      return;
    }
#line 1245 "prog_io_util.m"
  }
#line 192 "prog_io_util.m"
}

#line 190 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_one_or_more_3_p_0(
#line 190 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_10,
#line 190 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Parser_4,
#line 190 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_5,
#line 190 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_6)
#line 190 "prog_io_util.m"
{
#line 1241 "prog_io_util.m"
  {
#line 1241 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1241 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Head_7;
#line 1241 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Tail_8;
#line 1241 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 1227 "prog_io_util.m"
    {
#line 1227 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", parse_tree__prog_io_util__Term_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_9_9);
    }
#line 1242 "prog_io_util.m"
    parse_tree__prog_io_util__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_9_9, (MR_Integer) 0)));
#line 1242 "prog_io_util.m"
    parse_tree__prog_io_util__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_9_9, (MR_Integer) 1)));
#line 1243 "prog_io_util.m"
    {
#line 1243 "prog_io_util.m"
      parse_tree__prog_io_util__map_parser_one_or_more_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_10, parse_tree__prog_io_util__Parser_4, parse_tree__prog_io_util__Head_7, parse_tree__prog_io_util__Tail_8, parse_tree__prog_io_util__Result_6);
#line 1243 "prog_io_util.m"
      return;
    }
#line 1241 "prog_io_util.m"
  }
#line 190 "prog_io_util.m"
}

#line 185 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__sum_to_list_2_p_0(
#line 185 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
#line 185 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 185 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__List_4)
#line 185 "prog_io_util.m"
{
#line 1216 "prog_io_util.m"
  {
#line 1216 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1216 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Head_5;
#line 1216 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Tail_6;
#line 1216 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_8_8;

#line 1227 "prog_io_util.m"
    {
#line 1227 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) "+", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_8_8);
    }
#line 1217 "prog_io_util.m"
    parse_tree__prog_io_util__Head_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 0)));
#line 1217 "prog_io_util.m"
    parse_tree__prog_io_util__Tail_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 1)));
#line 1218 "prog_io_util.m"
    {
#line 1218 "prog_io_util.m"
      MR_Word base;
#line 1218 "prog_io_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1218 "prog_io_util.m"
      *parse_tree__prog_io_util__List_4 = base;
#line 1218 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Head_5));
#line 1218 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Tail_6));
#line 1218 "prog_io_util.m"
    }
#line 1216 "prog_io_util.m"
  }
#line 185 "prog_io_util.m"
}

#line 184 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__sum_to_one_or_more_2_p_0(
#line 184 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_6,
#line 184 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 184 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__OneOrMore_4)
#line 184 "prog_io_util.m"
{
#line 1213 "prog_io_util.m"
  {
#line 1213 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 1227 "prog_io_util.m"
    {
#line 1227 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) "+", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_util__OneOrMore_4);
#line 1227 "prog_io_util.m"
      return;
    }
#line 1213 "prog_io_util.m"
  }
#line 184 "prog_io_util.m"
}

#line 178 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__one_or_more_to_conjunction_3_p_0(
#line 178 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_20,
#line 178 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Context_1,
#line 178 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 178 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Term_3)
#line 178 "prog_io_util.m"
{
#line 1207 "prog_io_util.m"
  {
#line 1207 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1207 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1207 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1207 "prog_io_util.m"
    if ((parse_tree__prog_io_util__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1207 "prog_io_util.m"
      *parse_tree__prog_io_util__Term_3 = parse_tree__prog_io_util__V_22_22;
#line 1207 "prog_io_util.m"
    else
#line 1209 "prog_io_util.m"
      {
#line 1209 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Second_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, (MR_Integer) 0)));
#line 1209 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, (MR_Integer) 1)));
#line 1209 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Tail_12;
#line 1209 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_14_14;
#line 1209 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_17_17;
#line 1209 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_18_18;

#line 1210 "prog_io_util.m"
        {
#line 1210 "prog_io_util.m"
          parse_tree__prog_io_util__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1210 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_14_14, 0) = ((MR_Box) (parse_tree__prog_io_util__Second_9));
#line 1210 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_14_14, 1) = ((MR_Box) (parse_tree__prog_io_util__Rest_10));
#line 1210 "prog_io_util.m"
        }
#line 1210 "prog_io_util.m"
        {
#line 1210 "prog_io_util.m"
          parse_tree__prog_io_util__one_or_more_to_conjunction_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_20, parse_tree__prog_io_util__Context_1, parse_tree__prog_io_util__V_14_14, &parse_tree__prog_io_util__Tail_12);
        }
#line 1211 "prog_io_util.m"
        {
#line 1211 "prog_io_util.m"
          parse_tree__prog_io_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1211 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, 0) = ((MR_Box) (parse_tree__prog_io_util__Tail_12));
#line 1211 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1211 "prog_io_util.m"
        }
#line 1211 "prog_io_util.m"
        {
#line 1211 "prog_io_util.m"
          parse_tree__prog_io_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1211 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_17_17, 0) = ((MR_Box) (parse_tree__prog_io_util__V_22_22));
#line 1211 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_17_17, 1) = ((MR_Box) (parse_tree__prog_io_util__V_18_18));
#line 1211 "prog_io_util.m"
        }
#line 1211 "prog_io_util.m"
        {
#line 1211 "prog_io_util.m"
          MR_Word base;
#line 1211 "prog_io_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1211 "prog_io_util.m"
          *parse_tree__prog_io_util__Term_3 = base;
#line 1211 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[8]));
#line 1211 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_17_17));
#line 1211 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_1));
#line 1211 "prog_io_util.m"
        }
#line 1209 "prog_io_util.m"
      }
#line 1207 "prog_io_util.m"
  }
#line 178 "prog_io_util.m"
}

#line 171 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__conjunction_to_list_2_p_0(
#line 171 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
#line 171 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 171 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__List_4)
#line 171 "prog_io_util.m"
{
#line 1203 "prog_io_util.m"
  {
#line 1203 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1203 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Head_5;
#line 1203 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Tail_6;
#line 1203 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_8_8;

#line 1227 "prog_io_util.m"
    {
#line 1227 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_8_8);
    }
#line 1204 "prog_io_util.m"
    parse_tree__prog_io_util__Head_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 0)));
#line 1204 "prog_io_util.m"
    parse_tree__prog_io_util__Tail_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 1)));
#line 1205 "prog_io_util.m"
    {
#line 1205 "prog_io_util.m"
      MR_Word base;
#line 1205 "prog_io_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1205 "prog_io_util.m"
      *parse_tree__prog_io_util__List_4 = base;
#line 1205 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Head_5));
#line 1205 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Tail_6));
#line 1205 "prog_io_util.m"
    }
#line 1203 "prog_io_util.m"
  }
#line 171 "prog_io_util.m"
}

#line 169 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__conjunction_to_one_or_more_2_p_0(
#line 169 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_6,
#line 169 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 169 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__OneOrMore_4)
#line 169 "prog_io_util.m"
{
#line 1200 "prog_io_util.m"
  {
#line 1200 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 1227 "prog_io_util.m"
    {
#line 1227 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_util__OneOrMore_4);
#line 1227 "prog_io_util.m"
      return;
    }
#line 1200 "prog_io_util.m"
  }
#line 169 "prog_io_util.m"
}

#line 165 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__disjunction_to_list_2_p_0(
#line 165 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
#line 165 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 165 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__List_4)
#line 165 "prog_io_util.m"
{
#line 1196 "prog_io_util.m"
  {
#line 1196 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1196 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Head_5;
#line 1196 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Tail_6;
#line 1196 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_8_8;

#line 1227 "prog_io_util.m"
    {
#line 1227 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ";", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_8_8);
    }
#line 1197 "prog_io_util.m"
    parse_tree__prog_io_util__Head_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 0)));
#line 1197 "prog_io_util.m"
    parse_tree__prog_io_util__Tail_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 1)));
#line 1198 "prog_io_util.m"
    {
#line 1198 "prog_io_util.m"
      MR_Word base;
#line 1198 "prog_io_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1198 "prog_io_util.m"
      *parse_tree__prog_io_util__List_4 = base;
#line 1198 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Head_5));
#line 1198 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Tail_6));
#line 1198 "prog_io_util.m"
    }
#line 1196 "prog_io_util.m"
  }
#line 165 "prog_io_util.m"
}

#line 163 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__disjunction_to_one_or_more_2_p_0(
#line 163 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_6,
#line 163 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 163 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__OneOrMore_4)
#line 163 "prog_io_util.m"
{
#line 1193 "prog_io_util.m"
  {
#line 1193 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 1227 "prog_io_util.m"
    {
#line 1227 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ";", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_util__OneOrMore_4);
#line 1227 "prog_io_util.m"
      return;
    }
#line 1193 "prog_io_util.m"
  }
#line 163 "prog_io_util.m"
}

#line 159 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__standard_det_2_p_0(
#line 159 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__HeadVar__1_1,
#line 159 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__2_2)
#line 159 "prog_io_util.m"
{
#line 1129 "prog_io_util.m"
  {
#line 1129 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1129 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__slot_0;
#line 1129 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__str_1;

#line 1129 "prog_io_util.m"
    /* hashed string simple lookup switch */
#line 1129 "prog_io_util.m"
    /* compute the hash value of the input string */
#line 1129 "prog_io_util.m"
    parse_tree__prog_io_util__slot_0 = ((MR_hash_string4(parse_tree__prog_io_util__HeadVar__1_1)) & (MR_Integer) 31);
#line 1129 "prog_io_util.m"
    /* hash chain loop */
#line 1129 "prog_io_util.m"
    do
#line 1129 "prog_io_util.m"
      {
#line 1129 "prog_io_util.m"
        /* lookup the string for this hash slot */
#line 1129 "prog_io_util.m"
        parse_tree__prog_io_util__str_1 = ((&parse_tree__prog_io_util_vector_common_5[0 + parse_tree__prog_io_util__slot_0]))->parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_0;
#line 1129 "prog_io_util.m"
        /* did we find a match? */
#line 1129 "prog_io_util.m"
        if ((((parse_tree__prog_io_util__str_1 != NULL)) && ((strcmp(parse_tree__prog_io_util__str_1, parse_tree__prog_io_util__HeadVar__1_1) == 0))))
#line 1129 "prog_io_util.m"
          {
#line 1129 "prog_io_util.m"
            /* we found a match; look up the results */
#line 1129 "prog_io_util.m"
            *parse_tree__prog_io_util__HeadVar__2_2 = ((&parse_tree__prog_io_util_vector_common_5[0 + parse_tree__prog_io_util__slot_0]))->parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_2;
#line 1129 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1129 "prog_io_util.m"
            /* jump out of search loop */
#line 1129 "prog_io_util.m"
            goto label_0;
#line 1129 "prog_io_util.m"
          }
#line 1129 "prog_io_util.m"
        else
#line 1129 "prog_io_util.m"
          {
#line 1129 "prog_io_util.m"
            /* no match yet, so get next slot in hash chain */
#line 1129 "prog_io_util.m"
            parse_tree__prog_io_util__slot_0 = ((&parse_tree__prog_io_util_vector_common_5[0 + parse_tree__prog_io_util__slot_0]))->parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_1;
#line 1129 "prog_io_util.m"
          }
#line 1129 "prog_io_util.m"
      }
#line 1129 "prog_io_util.m"
    while ((parse_tree__prog_io_util__slot_0 >= (MR_Integer) 0));
#line 1129 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 1129 "prog_io_util.m"
  label_0:;
#line 1129 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1129 "prog_io_util.m"
  }
#line 159 "prog_io_util.m"
}

#line 157 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__is_known_inst_name_1_p_0(
#line 157 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Name_2)
#line 157 "prog_io_util.m"
{
#line 909 "prog_io_util.m"
  {
#line 909 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 910 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_3_3;

#line 910 "prog_io_util.m"
    {
#line 910 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_util__Name_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_3_3);
    }
#line 909 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 909 "prog_io_util.m"
  }
#line 157 "prog_io_util.m"
}

#line 156 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__is_known_mode_name_1_p_0(
#line 156 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__HeadVar__1_1)
#line 156 "prog_io_util.m"
{
#line 729 "prog_io_util.m"
  {
#line 729 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 729 "prog_io_util.m"
    if ((strcmp(parse_tree__prog_io_util__HeadVar__1_1, (MR_String) ">>") == 0))
#line 729 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 729 "prog_io_util.m"
    else
#line 729 "prog_io_util.m"
    if ((strcmp(parse_tree__prog_io_util__HeadVar__1_1, (MR_String) "is") == 0))
#line 730 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 729 "prog_io_util.m"
    else
#line 729 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 729 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 729 "prog_io_util.m"
  }
#line 156 "prog_io_util.m"
}

#line 153 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__convert_inst_3_p_0(
#line 153 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
#line 153 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_2,
#line 153 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Inst_3)
#line 153 "prog_io_util.m"
{
#line 826 "prog_io_util.m"
  {
#line 826 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 826 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__Term_2)) == (MR_mktag((MR_Integer) 0))))
#line 830 "prog_io_util.m"
      {
#line 830 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Functor_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_2, (MR_Integer) 0)));
#line 830 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Args0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_2, (MR_Integer) 1)));
#line 830 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__Name_16;
#line 831 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util___Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_2, (MR_Integer) 2)));
#line 871 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__KnownInstKind_17;

#line 832 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Functor_13)) == (MR_mktag((MR_Integer) 0)));
#line 832 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 832 "prog_io_util.m"
          {
#line 832 "prog_io_util.m"
            parse_tree__prog_io_util__Name_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Functor_13, (MR_Integer) 0)));
#line 836 "prog_io_util.m"
            {
#line 836 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_util__Name_16, parse_tree__prog_io_util__Args0_14, &parse_tree__prog_io_util__KnownInstKind_17);
            }
#line 871 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 840 "prog_io_util.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_util__KnownInstKind_17)) == (MR_mktag((MR_Integer) 2))))
#line 843 "prog_io_util.m"
                {
#line 843 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__CompoundInstKind_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__KnownInstKind_17, (MR_Integer) 0)));

#line 848 "prog_io_util.m"
#line 848 "prog_io_util.m"
                  switch (MR_tag((MR_Word) parse_tree__prog_io_util__CompoundInstKind_18)) {
#line 848 "prog_io_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 848 "prog_io_util.m"
                    case (MR_Integer) 0:
#line 845 "prog_io_util.m"
                      {
#line 845 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__BeforeIsTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 0)));
#line 845 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__DetTerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 1)));

#line 846 "prog_io_util.m"
                        {
#line 846 "prog_io_util.m"
                          return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_higher_order_inst_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__BeforeIsTerm_19, parse_tree__prog_io_util__DetTerm_20, parse_tree__prog_io_util__Inst_3);
                        }
#line 845 "prog_io_util.m"
                      }
#line 848 "prog_io_util.m"
                      break;
#line 848 "prog_io_util.m"
                    case (MR_Integer) 1:
#line 861 "prog_io_util.m"
                      {
#line 861 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TypeInfo_53_53;
#line 861 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TypeCtorInfo_54_54;
#line 861 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TypeCtorInfo_55_55;
#line 861 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__VarTerm_22;
#line 861 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__SubInstTerm_23;
#line 861 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Var_24;
#line 861 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__SubInst_26;
#line 861 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_35_35;
#line 861 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_36_36;
#line 861 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_37_37;
#line 863 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_25_25;

#line 862 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__AllowConstrainedInstVar_1 == (MR_Integer) 0);
#line 861 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 861 "prog_io_util.m"
                          {
#line 861 "prog_io_util.m"
                            parse_tree__prog_io_util__VarTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 0)));
#line 861 "prog_io_util.m"
                            parse_tree__prog_io_util__SubInstTerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 1)));
#line 863 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__VarTerm_22)) == (MR_mktag((MR_Integer) 1)));
#line 863 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 863 "prog_io_util.m"
                              {
#line 863 "prog_io_util.m"
                                parse_tree__prog_io_util__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarTerm_22, (MR_Integer) 0)));
#line 863 "prog_io_util.m"
                                parse_tree__prog_io_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarTerm_22, (MR_Integer) 1)));
#line 865 "prog_io_util.m"
                                parse_tree__prog_io_util__V_35_35 = (MR_Integer) 1;
#line 865 "prog_io_util.m"
                                {
#line 865 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_util__V_35_35, parse_tree__prog_io_util__SubInstTerm_23, &parse_tree__prog_io_util__SubInst_26);
                                }
#line 861 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 861 "prog_io_util.m"
                                  {
#line 16801 "parse_tree.prog_io_util.c"
                                    parse_tree__prog_io_util__TypeInfo_53_53 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[1];
#line 16803 "parse_tree.prog_io_util.c"
                                    parse_tree__prog_io_util__TypeCtorInfo_54_54 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 16805 "parse_tree.prog_io_util.c"
                                    parse_tree__prog_io_util__TypeCtorInfo_55_55 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 868 "prog_io_util.m"
                                    {
#line 868 "prog_io_util.m"
                                      parse_tree__prog_io_util__V_37_37 = mercury__term__coerce_var_1_f_0(parse_tree__prog_io_util__TypeCtorInfo_54_54, parse_tree__prog_io_util__TypeCtorInfo_55_55, parse_tree__prog_io_util__Var_24);
                                    }
#line 867 "prog_io_util.m"
                                    {
#line 867 "prog_io_util.m"
                                      parse_tree__prog_io_util__V_36_36 = mercury__set__make_singleton_set_1_f_0(parse_tree__prog_io_util__TypeInfo_53_53, ((MR_Box) (parse_tree__prog_io_util__V_37_37)));
                                    }
#line 867 "prog_io_util.m"
                                    {
#line 867 "prog_io_util.m"
                                      MR_Word base;
#line 867 "prog_io_util.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 867 "prog_io_util.m"
                                      *parse_tree__prog_io_util__Inst_3 = base;
#line 867 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 867 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 867 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_util__SubInst_26));
#line 867 "prog_io_util.m"
                                    }
#line 867 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 861 "prog_io_util.m"
                                  }
#line 863 "prog_io_util.m"
                              }
#line 861 "prog_io_util.m"
                          }
#line 861 "prog_io_util.m"
                      }
#line 848 "prog_io_util.m"
                      break;
#line 848 "prog_io_util.m"
                    case (MR_Integer) 2:
#line 849 "prog_io_util.m"
                      {
#line 849 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__DisjTerm_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 0)));

#line 850 "prog_io_util.m"
                        {
#line 850 "prog_io_util.m"
                          return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__DisjTerm_21, (MR_Integer) 0, parse_tree__prog_io_util__Inst_3);
                        }
#line 849 "prog_io_util.m"
                      }
#line 848 "prog_io_util.m"
                      break;
#line 848 "prog_io_util.m"
                    case (MR_Integer) 3:
#line 848 "prog_io_util.m"
#line 848 "prog_io_util.m"
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 0)))) {
#line 848 "prog_io_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 848 "prog_io_util.m"
                        case (MR_Integer) 0:
#line 853 "prog_io_util.m"
                          {
#line 853 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__DisjTerm_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 1)));

#line 854 "prog_io_util.m"
                            {
#line 854 "prog_io_util.m"
                              return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__DisjTerm_45, (MR_Integer) 1, parse_tree__prog_io_util__Inst_3);
                            }
#line 853 "prog_io_util.m"
                          }
#line 848 "prog_io_util.m"
                          break;
#line 848 "prog_io_util.m"
                        case (MR_Integer) 1:
#line 857 "prog_io_util.m"
                          {
#line 857 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__DisjTerm_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 1)));

#line 858 "prog_io_util.m"
                            {
#line 858 "prog_io_util.m"
                              return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__DisjTerm_46, (MR_Integer) 2, parse_tree__prog_io_util__Inst_3);
                            }
#line 857 "prog_io_util.m"
                          }
#line 848 "prog_io_util.m"
                          break;
#line 848 "prog_io_util.m"
                      }
#line 848 "prog_io_util.m"
                      break;
#line 848 "prog_io_util.m"
                  }
#line 843 "prog_io_util.m"
                }
#line 840 "prog_io_util.m"
              else
#line 840 "prog_io_util.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_util__KnownInstKind_17)) == (MR_mktag((MR_Integer) 1))))
#line 841 "prog_io_util.m"
                {
#line 841 "prog_io_util.m"
                  *parse_tree__prog_io_util__Inst_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__KnownInstKind_17, (MR_Integer) 0)));
#line 841 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 841 "prog_io_util.m"
                }
#line 840 "prog_io_util.m"
              else
#line 840 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 871 "prog_io_util.m"
            else
#line 874 "prog_io_util.m"
              {
#line 874 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__QualifiedName_27;
#line 874 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Args1_28;
#line 891 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__InstPrime_31;
#line 876 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__BuiltinModule_29;
#line 876 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__UnqualifiedName_30;
#line 876 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_41_41;
#line 876 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__V_42_42;
#line 876 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__KnownInstKind_47;
#line 876 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_58_58;
#line 888 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_43_43;
#line 888 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_32_32;
#line 888 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_33_33;

#line 873 "prog_io_util.m"
                {
#line 873 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_from_f_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__Functor_13, parse_tree__prog_io_util__Args0_14, &parse_tree__prog_io_util__QualifiedName_27, &parse_tree__prog_io_util__Args1_28);
                }
#line 874 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 874 "prog_io_util.m"
                  {
#line 876 "prog_io_util.m"
                    {
#line 876 "prog_io_util.m"
                      parse_tree__prog_io_util__BuiltinModule_29 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                    }
#line 877 "prog_io_util.m"
                    parse_tree__prog_io_util__V_42_42 = (MR_String) "";
#line 877 "prog_io_util.m"
                    parse_tree__prog_io_util__V_41_41 = (MR_Word) &parse_tree__prog_io_util_scalar_common_3[1];
#line 877 "prog_io_util.m"
                    {
#line 877 "prog_io_util.m"
                      mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(parse_tree__prog_io_util__QualifiedName_27, parse_tree__prog_io_util__V_41_41, &parse_tree__prog_io_util__V_58_58);
                    }
#line 877 "prog_io_util.m"
                    {
#line 877 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_util__BuiltinModule_29, parse_tree__prog_io_util__V_58_58);
                    }
#line 876 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 876 "prog_io_util.m"
                      {
#line 881 "prog_io_util.m"
                        {
#line 881 "prog_io_util.m"
                          parse_tree__prog_io_util__UnqualifiedName_30 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_io_util__QualifiedName_27);
                        }
#line 882 "prog_io_util.m"
                        {
#line 882 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_util__UnqualifiedName_30, parse_tree__prog_io_util__Args1_28, &parse_tree__prog_io_util__KnownInstKind_47);
                        }
#line 876 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 876 "prog_io_util.m"
                          {
#line 883 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__KnownInstKind_47)) == (MR_mktag((MR_Integer) 1)));
#line 883 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 883 "prog_io_util.m"
                              {
#line 883 "prog_io_util.m"
                                parse_tree__prog_io_util__InstPrime_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__KnownInstKind_47, (MR_Integer) 0)));
#line 888 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_util__InstPrime_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__InstPrime_31, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 888 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 888 "prog_io_util.m"
                                  {
#line 888 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__InstPrime_31, (MR_Integer) 1)));
#line 888 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_43_43)) == (MR_mktag((MR_Integer) 0)));
#line 888 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 888 "prog_io_util.m"
                                      {
#line 888 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_43_43, (MR_Integer) 0)));
#line 888 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_43_43, (MR_Integer) 1)));
#line 888 "prog_io_util.m"
                                      }
#line 888 "prog_io_util.m"
                                  }
#line 888 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 883 "prog_io_util.m"
                              }
#line 876 "prog_io_util.m"
                          }
#line 876 "prog_io_util.m"
                      }
#line 891 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 890 "prog_io_util.m"
                      {
#line 890 "prog_io_util.m"
                        *parse_tree__prog_io_util__Inst_3 = parse_tree__prog_io_util__InstPrime_31;
#line 890 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 890 "prog_io_util.m"
                      }
#line 891 "prog_io_util.m"
                    else
#line 892 "prog_io_util.m"
                      {
#line 892 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Args_34;
#line 892 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_44_44;

#line 892 "prog_io_util.m"
                        {
#line 892 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__Args1_28, &parse_tree__prog_io_util__Args_34);
                        }
#line 892 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 892 "prog_io_util.m"
                          {
#line 893 "prog_io_util.m"
                            {
#line 893 "prog_io_util.m"
                              parse_tree__prog_io_util__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 893 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_util__QualifiedName_27));
#line 893 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_44_44, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_34));
#line 893 "prog_io_util.m"
                            }
#line 893 "prog_io_util.m"
                            {
#line 893 "prog_io_util.m"
                              MR_Word base;
#line 893 "prog_io_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 893 "prog_io_util.m"
                              *parse_tree__prog_io_util__Inst_3 = base;
#line 893 "prog_io_util.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 893 "prog_io_util.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_44_44));
#line 893 "prog_io_util.m"
                            }
#line 893 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 892 "prog_io_util.m"
                          }
#line 892 "prog_io_util.m"
                      }
#line 874 "prog_io_util.m"
                  }
#line 874 "prog_io_util.m"
              }
#line 832 "prog_io_util.m"
          }
#line 830 "prog_io_util.m"
      }
#line 826 "prog_io_util.m"
    else
#line 826 "prog_io_util.m"
      {
#line 826 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Term_2, (MR_Integer) 0)));
#line 826 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_9;
#line 827 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Term_2, (MR_Integer) 1)));

#line 828 "prog_io_util.m"
        {
#line 828 "prog_io_util.m"
          mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_util__V0_7, &parse_tree__prog_io_util__V_9);
        }
#line 829 "prog_io_util.m"
        {
#line 829 "prog_io_util.m"
          MR_Word base;
#line 829 "prog_io_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 829 "prog_io_util.m"
          *parse_tree__prog_io_util__Inst_3 = base;
#line 829 "prog_io_util.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 829 "prog_io_util.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_9));
#line 829 "prog_io_util.m"
        }
#line 826 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 826 "prog_io_util.m"
      }
#line 826 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 826 "prog_io_util.m"
  }
#line 153 "prog_io_util.m"
}

#line 150 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__convert_inst_list_3_p_0(
#line 150 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
#line 150 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 150 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3)
#line 150 "prog_io_util.m"
{
#line 821 "prog_io_util.m"
  {
#line 821 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 821 "prog_io_util.m"
    if ((parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 821 "prog_io_util.m"
      {
#line 821 "prog_io_util.m"
        *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 821 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 821 "prog_io_util.m"
      }
#line 821 "prog_io_util.m"
    else
#line 822 "prog_io_util.m"
      {
#line 822 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Term_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 822 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Terms_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 822 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Inst_8;
#line 822 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Insts_9;

#line 823 "prog_io_util.m"
        {
#line 823 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__Term_6, &parse_tree__prog_io_util__Inst_8);
        }
#line 822 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 822 "prog_io_util.m"
          {
#line 824 "prog_io_util.m"
            {
#line 824 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__Terms_7, &parse_tree__prog_io_util__Insts_9);
            }
#line 822 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 822 "prog_io_util.m"
              {
#line 822 "prog_io_util.m"
                {
#line 822 "prog_io_util.m"
                  MR_Word base;
#line 822 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 822 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 822 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Inst_8));
#line 822 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Insts_9));
#line 822 "prog_io_util.m"
                }
#line 822 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 822 "prog_io_util.m"
              }
#line 822 "prog_io_util.m"
          }
#line 822 "prog_io_util.m"
      }
#line 821 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 821 "prog_io_util.m"
  }
#line 150 "prog_io_util.m"
}

#line 147 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__convert_mode_3_p_0(
#line 147 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_4,
#line 147 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_5,
#line 147 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Mode_6)
#line 147 "prog_io_util.m"
{
#line 703 "prog_io_util.m"
  {
#line 703 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 703 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TermFunctor_7;
#line 703 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TermArgs_8;
#line 704 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;
#line 708 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_19_19;

#line 704 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 704 "prog_io_util.m"
      {
#line 704 "prog_io_util.m"
        parse_tree__prog_io_util__TermFunctor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 704 "prog_io_util.m"
        parse_tree__prog_io_util__TermArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 704 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 708 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermFunctor_7)) == (MR_mktag((MR_Integer) 0)));
#line 708 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 708 "prog_io_util.m"
          {
#line 708 "prog_io_util.m"
            parse_tree__prog_io_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TermFunctor_7, (MR_Integer) 0)));
#line 708 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_19_19, (MR_String) ">>") == 0);
#line 708 "prog_io_util.m"
          }
#line 714 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 710 "prog_io_util.m"
          {
#line 710 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__InstTermA_10;
#line 710 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__InstTermB_11;
#line 710 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__InstA_12;
#line 710 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__InstB_13;
#line 710 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_20_20;
#line 710 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_21_21;

#line 710 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermArgs_8)) == (MR_mktag((MR_Integer) 1)));
#line 710 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 710 "prog_io_util.m"
              {
#line 710 "prog_io_util.m"
                parse_tree__prog_io_util__InstTermA_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 0)));
#line 710 "prog_io_util.m"
                parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 1)));
#line 710 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 710 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 710 "prog_io_util.m"
                  {
#line 710 "prog_io_util.m"
                    parse_tree__prog_io_util__InstTermB_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, (MR_Integer) 0)));
#line 710 "prog_io_util.m"
                    parse_tree__prog_io_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, (MR_Integer) 1)));
#line 710 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 710 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 710 "prog_io_util.m"
                      {
#line 711 "prog_io_util.m"
                        {
#line 711 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__InstTermA_10, &parse_tree__prog_io_util__InstA_12);
                        }
#line 710 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 710 "prog_io_util.m"
                          {
#line 712 "prog_io_util.m"
                            {
#line 712 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__InstTermB_11, &parse_tree__prog_io_util__InstB_13);
                            }
#line 710 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 710 "prog_io_util.m"
                              {
#line 713 "prog_io_util.m"
                                {
#line 713 "prog_io_util.m"
                                  MR_Word base;
#line 713 "prog_io_util.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 713 "prog_io_util.m"
                                  *parse_tree__prog_io_util__Mode_6 = base;
#line 713 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__InstA_12));
#line 713 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__InstB_13));
#line 713 "prog_io_util.m"
                                }
#line 713 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 710 "prog_io_util.m"
                              }
#line 710 "prog_io_util.m"
                          }
#line 710 "prog_io_util.m"
                      }
#line 710 "prog_io_util.m"
                  }
#line 710 "prog_io_util.m"
              }
#line 710 "prog_io_util.m"
          }
#line 714 "prog_io_util.m"
        else
#line 720 "prog_io_util.m"
          {
#line 715 "prog_io_util.m"
            MR_String parse_tree__prog_io_util__V_22_22;

#line 715 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermFunctor_7)) == (MR_mktag((MR_Integer) 0)));
#line 715 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 715 "prog_io_util.m"
              {
#line 715 "prog_io_util.m"
                parse_tree__prog_io_util__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TermFunctor_7, (MR_Integer) 0)));
#line 715 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_22_22, (MR_String) "is") == 0);
#line 715 "prog_io_util.m"
              }
#line 720 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 717 "prog_io_util.m"
              {
#line 717 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__BeforeIsTerm_14;
#line 717 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__DetTerm_15;
#line 717 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_23_23;
#line 717 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_24_24;

#line 717 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermArgs_8)) == (MR_mktag((MR_Integer) 1)));
#line 717 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 717 "prog_io_util.m"
                  {
#line 717 "prog_io_util.m"
                    parse_tree__prog_io_util__BeforeIsTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 0)));
#line 717 "prog_io_util.m"
                    parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 1)));
#line 717 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 717 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 717 "prog_io_util.m"
                      {
#line 717 "prog_io_util.m"
                        parse_tree__prog_io_util__DetTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_23_23, (MR_Integer) 0)));
#line 717 "prog_io_util.m"
                        parse_tree__prog_io_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_23_23, (MR_Integer) 1)));
#line 717 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 717 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 718 "prog_io_util.m"
                          {
#line 718 "prog_io_util.m"
                            return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_higher_order_mode_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__BeforeIsTerm_14, parse_tree__prog_io_util__DetTerm_15, parse_tree__prog_io_util__Mode_6);
                          }
#line 717 "prog_io_util.m"
                      }
#line 717 "prog_io_util.m"
                  }
#line 717 "prog_io_util.m"
              }
#line 720 "prog_io_util.m"
            else
#line 724 "prog_io_util.m"
              {
#line 724 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Name_16;
#line 724 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Args_17;
#line 724 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__ConvertedArgs_18;

#line 723 "prog_io_util.m"
                {
#line 723 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_from_f_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__TermFunctor_7, parse_tree__prog_io_util__TermArgs_8, &parse_tree__prog_io_util__Name_16, &parse_tree__prog_io_util__Args_17);
                }
#line 724 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 724 "prog_io_util.m"
                  {
#line 725 "prog_io_util.m"
                    {
#line 725 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__Args_17, &parse_tree__prog_io_util__ConvertedArgs_18);
                    }
#line 724 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 724 "prog_io_util.m"
                      {
#line 726 "prog_io_util.m"
                        {
#line 726 "prog_io_util.m"
                          MR_Word base;
#line 726 "prog_io_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "prog_io_util.m"
                          *parse_tree__prog_io_util__Mode_6 = base;
#line 726 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Name_16));
#line 726 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__ConvertedArgs_18));
#line 726 "prog_io_util.m"
                        }
#line 726 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 724 "prog_io_util.m"
                      }
#line 724 "prog_io_util.m"
                  }
#line 724 "prog_io_util.m"
              }
#line 720 "prog_io_util.m"
          }
#line 704 "prog_io_util.m"
      }
#line 703 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 703 "prog_io_util.m"
  }
#line 147 "prog_io_util.m"
}

#line 144 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__convert_mode_list_3_p_0(
#line 144 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
#line 144 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 144 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3)
#line 144 "prog_io_util.m"
{
#line 698 "prog_io_util.m"
  {
#line 698 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 698 "prog_io_util.m"
    if ((parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 698 "prog_io_util.m"
      {
#line 698 "prog_io_util.m"
        *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 698 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 698 "prog_io_util.m"
      }
#line 698 "prog_io_util.m"
    else
#line 699 "prog_io_util.m"
      {
#line 699 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__H0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 699 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__T0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 699 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__H_8;
#line 699 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__T_9;

#line 700 "prog_io_util.m"
        {
#line 700 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__H0_6, &parse_tree__prog_io_util__H_8);
        }
#line 699 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 699 "prog_io_util.m"
          {
#line 701 "prog_io_util.m"
            {
#line 701 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__T0_7, &parse_tree__prog_io_util__T_9);
            }
#line 699 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 699 "prog_io_util.m"
              {
#line 699 "prog_io_util.m"
                {
#line 699 "prog_io_util.m"
                  MR_Word base;
#line 699 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 699 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__H_8));
#line 699 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__T_9));
#line 699 "prog_io_util.m"
                }
#line 699 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 699 "prog_io_util.m"
              }
#line 699 "prog_io_util.m"
          }
#line 699 "prog_io_util.m"
      }
#line 698 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 698 "prog_io_util.m"
  }
#line 144 "prog_io_util.m"
}

#line 138 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_purity_annotation_3_p_0(
#line 138 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_14,
#line 138 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term0_4,
#line 138 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Purity_5,
#line 138 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Term_6)
#line 138 "prog_io_util.m"
{
#line 618 "prog_io_util.m"
  {
#line 618 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term0_4)) == (MR_mktag((MR_Integer) 0)));
#line 618 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Term1_8;
#line 618 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Purity0_10;
#line 613 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__PurityName_7;
#line 613 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;
#line 613 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_12_12;
#line 613 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 613 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 613 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 613 "prog_io_util.m"
      {
#line 613 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_4, (MR_Integer) 0)));
#line 613 "prog_io_util.m"
        parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_4, (MR_Integer) 1)));
#line 613 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_4, (MR_Integer) 2)));
#line 613 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_11_11)) == (MR_mktag((MR_Integer) 0)));
#line 613 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 613 "prog_io_util.m"
          {
#line 613 "prog_io_util.m"
            parse_tree__prog_io_util__PurityName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_11_11, (MR_Integer) 0)));
#line 613 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 613 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 613 "prog_io_util.m"
              {
#line 613 "prog_io_util.m"
                parse_tree__prog_io_util__Term1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_12_12, (MR_Integer) 0)));
#line 613 "prog_io_util.m"
                parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_12_12, (MR_Integer) 1)));
#line 613 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 613 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 614 "prog_io_util.m"
                  {
#line 614 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = parse_tree__prog_out__purity_name_2_p_1(&parse_tree__prog_io_util__Purity0_10, parse_tree__prog_io_util__PurityName_7);
                  }
#line 613 "prog_io_util.m"
              }
#line 613 "prog_io_util.m"
          }
#line 613 "prog_io_util.m"
      }
#line 618 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 616 "prog_io_util.m"
      {
#line 616 "prog_io_util.m"
        *parse_tree__prog_io_util__Purity_5 = parse_tree__prog_io_util__Purity0_10;
#line 617 "prog_io_util.m"
        *parse_tree__prog_io_util__Term_6 = parse_tree__prog_io_util__Term1_8;
#line 616 "prog_io_util.m"
      }
#line 618 "prog_io_util.m"
    else
#line 619 "prog_io_util.m"
      {
#line 619 "prog_io_util.m"
        *parse_tree__prog_io_util__Purity_5 = (MR_Integer) 0;
#line 620 "prog_io_util.m"
        *parse_tree__prog_io_util__Term_6 = parse_tree__prog_io_util__Term0_4;
#line 619 "prog_io_util.m"
      }
#line 618 "prog_io_util.m"
  }
#line 138 "prog_io_util.m"
}

#line 136 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__unparse_type_2_p_0(
#line 136 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Type_3,
#line 136 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Term_4)
#line 136 "prog_io_util.m"
{
#line 623 "prog_io_util.m"
  {
#line 623 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 623 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Context_5;

#line 624 "prog_io_util.m"
    {
#line 624 "prog_io_util.m"
      parse_tree__prog_io_util__Context_5 = mercury__term__context_init_0_f_0();
    }
#line 629 "prog_io_util.m"
#line 629 "prog_io_util.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io_util__Type_3)) {
#line 629 "prog_io_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 629 "prog_io_util.m"
      case (MR_Integer) 0:
#line 626 "prog_io_util.m"
        {
#line 626 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__TVar_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Type_3, (MR_Integer) 0)));
#line 626 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__Var_8;
#line 626 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Type_3, (MR_Integer) 1)));

#line 627 "prog_io_util.m"
          {
#line 627 "prog_io_util.m"
            parse_tree__prog_io_util__Var_8 = mercury__term__coerce_var_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__TVar_6);
          }
#line 628 "prog_io_util.m"
          {
#line 628 "prog_io_util.m"
            MR_Word base;
#line 628 "prog_io_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 628 "prog_io_util.m"
            *parse_tree__prog_io_util__Term_4 = base;
#line 628 "prog_io_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Var_8));
#line 628 "prog_io_util.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Context_5));
#line 628 "prog_io_util.m"
          }
#line 626 "prog_io_util.m"
        }
#line 629 "prog_io_util.m"
        break;
#line 629 "prog_io_util.m"
      case (MR_Integer) 1:
#line 630 "prog_io_util.m"
        {
#line 630 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__SymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Type_3, (MR_Integer) 0)));
#line 630 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Type_3, (MR_Integer) 1)));
#line 630 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__ArgTerms_12;
#line 630 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Type_3, (MR_Integer) 2)));

#line 631 "prog_io_util.m"
          {
#line 631 "prog_io_util.m"
            parse_tree__prog_io_util__unparse_type_list_2_p_0(parse_tree__prog_io_util__Args_10, &parse_tree__prog_io_util__ArgTerms_12);
          }
#line 632 "prog_io_util.m"
          {
#line 632 "prog_io_util.m"
            parse_tree__prog_io_util__unparse_qualified_term_3_p_0(parse_tree__prog_io_util__SymName_9, parse_tree__prog_io_util__ArgTerms_12, parse_tree__prog_io_util__Term_4);
#line 632 "prog_io_util.m"
            return;
          }
#line 630 "prog_io_util.m"
        }
#line 629 "prog_io_util.m"
        break;
#line 629 "prog_io_util.m"
      case (MR_Integer) 2:
#line 634 "prog_io_util.m"
        {
#line 634 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__BuiltinType_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Type_3, (MR_Integer) 0)));
#line 634 "prog_io_util.m"
          MR_String parse_tree__prog_io_util__Name_14;
#line 634 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_45_45;

#line 635 "prog_io_util.m"
          {
#line 635 "prog_io_util.m"
            parse_tree__prog_out__builtin_type_to_string_2_p_0(parse_tree__prog_io_util__BuiltinType_13, &parse_tree__prog_io_util__Name_14);
          }
#line 636 "prog_io_util.m"
          {
#line 636 "prog_io_util.m"
            parse_tree__prog_io_util__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 636 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_util__Name_14));
#line 636 "prog_io_util.m"
          }
#line 636 "prog_io_util.m"
          {
#line 636 "prog_io_util.m"
            MR_Word base;
#line 636 "prog_io_util.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 636 "prog_io_util.m"
            *parse_tree__prog_io_util__Term_4 = base;
#line 636 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_45_45));
#line 636 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 636 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_5));
#line 636 "prog_io_util.m"
          }
#line 634 "prog_io_util.m"
        }
#line 629 "prog_io_util.m"
        break;
#line 629 "prog_io_util.m"
      case (MR_Integer) 3:
#line 629 "prog_io_util.m"
#line 629 "prog_io_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 0)))) {
#line 629 "prog_io_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 629 "prog_io_util.m"
          case (MR_Integer) 0:
#line 653 "prog_io_util.m"
            {
#line 653 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Args_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 1)));
#line 653 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__ArgTerms_51;
#line 653 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 2)));

#line 654 "prog_io_util.m"
              {
#line 654 "prog_io_util.m"
                parse_tree__prog_io_util__unparse_type_list_2_p_0(parse_tree__prog_io_util__Args_50, &parse_tree__prog_io_util__ArgTerms_51);
              }
#line 655 "prog_io_util.m"
              {
#line 655 "prog_io_util.m"
                MR_Word base;
#line 655 "prog_io_util.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 655 "prog_io_util.m"
                *parse_tree__prog_io_util__Term_4 = base;
#line 655 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[7]));
#line 655 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTerms_51));
#line 655 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_5));
#line 655 "prog_io_util.m"
              }
#line 653 "prog_io_util.m"
            }
#line 629 "prog_io_util.m"
            break;
#line 629 "prog_io_util.m"
          case (MR_Integer) 1:
#line 638 "prog_io_util.m"
            {
#line 638 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__MaybeRet_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 2)));
#line 638 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Purity_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 3)));
#line 638 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Term2_22;
#line 638 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Args_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 1)));
#line 638 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__ArgTerms_49;

#line 639 "prog_io_util.m"
              {
#line 639 "prog_io_util.m"
                parse_tree__prog_io_util__unparse_type_list_2_p_0(parse_tree__prog_io_util__Args_48, &parse_tree__prog_io_util__ArgTerms_49);
              }
#line 646 "prog_io_util.m"
              if ((parse_tree__prog_io_util__MaybeRet_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 647 "prog_io_util.m"
                {
#line 648 "prog_io_util.m"
                  {
#line 648 "prog_io_util.m"
                    parse_tree__prog_io_util__Term2_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 648 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_22, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[2]));
#line 648 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_22, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTerms_49));
#line 648 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_22, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_5));
#line 648 "prog_io_util.m"
                  }
#line 647 "prog_io_util.m"
                }
#line 646 "prog_io_util.m"
              else
#line 641 "prog_io_util.m"
                {
#line 641 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__Ret_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeRet_15, (MR_Integer) 0)));
#line 641 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__Term1_20;
#line 641 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__RetTerm_21;
#line 641 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_42_42;
#line 641 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_43_43;

#line 642 "prog_io_util.m"
                  {
#line 642 "prog_io_util.m"
                    parse_tree__prog_io_util__Term1_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 642 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_20, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[3]));
#line 642 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_20, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTerms_49));
#line 642 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_20, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_5));
#line 642 "prog_io_util.m"
                  }
#line 644 "prog_io_util.m"
                  {
#line 644 "prog_io_util.m"
                    parse_tree__prog_io_util__unparse_type_2_p_0(parse_tree__prog_io_util__Ret_18, &parse_tree__prog_io_util__RetTerm_21);
                  }
#line 645 "prog_io_util.m"
                  {
#line 645 "prog_io_util.m"
                    parse_tree__prog_io_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "prog_io_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_util__RetTerm_21));
#line 645 "prog_io_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 645 "prog_io_util.m"
                  }
#line 645 "prog_io_util.m"
                  {
#line 645 "prog_io_util.m"
                    parse_tree__prog_io_util__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "prog_io_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_util__Term1_20));
#line 645 "prog_io_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_42_42, 1) = ((MR_Box) (parse_tree__prog_io_util__V_43_43));
#line 645 "prog_io_util.m"
                  }
#line 645 "prog_io_util.m"
                  {
#line 645 "prog_io_util.m"
                    parse_tree__prog_io_util__Term2_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 645 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_22, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[4]));
#line 645 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_22, 1) = ((MR_Box) (parse_tree__prog_io_util__V_42_42));
#line 645 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_22, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_5));
#line 645 "prog_io_util.m"
                  }
#line 641 "prog_io_util.m"
                }
#line 690 "prog_io_util.m"
#line 690 "prog_io_util.m"
              switch (parse_tree__prog_io_util__Purity_16) {
#line 690 "prog_io_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 690 "prog_io_util.m"
                case (MR_Integer) 2:
#line 694 "prog_io_util.m"
                  {
#line 694 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Context_72;
#line 694 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_75_75;

#line 695 "prog_io_util.m"
                    {
#line 695 "prog_io_util.m"
                      parse_tree__prog_io_util__Context_72 = mercury__term__context_init_0_f_0();
                    }
#line 696 "prog_io_util.m"
                    {
#line 696 "prog_io_util.m"
                      parse_tree__prog_io_util__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_util__Term2_22));
#line 696 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 696 "prog_io_util.m"
                    }
#line 696 "prog_io_util.m"
                    {
#line 696 "prog_io_util.m"
                      MR_Word base;
#line 696 "prog_io_util.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 696 "prog_io_util.m"
                      *parse_tree__prog_io_util__Term_4 = base;
#line 696 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[5]));
#line 696 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_75_75));
#line 696 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_72));
#line 696 "prog_io_util.m"
                    }
#line 694 "prog_io_util.m"
                  }
#line 690 "prog_io_util.m"
                  break;
#line 690 "prog_io_util.m"
                case (MR_Integer) 0:
#line 690 "prog_io_util.m"
                  *parse_tree__prog_io_util__Term_4 = parse_tree__prog_io_util__Term2_22;
#line 690 "prog_io_util.m"
                  break;
#line 690 "prog_io_util.m"
                case (MR_Integer) 1:
#line 691 "prog_io_util.m"
                  {
#line 691 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Context_65;
#line 691 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_68_68;

#line 692 "prog_io_util.m"
                    {
#line 692 "prog_io_util.m"
                      parse_tree__prog_io_util__Context_65 = mercury__term__context_init_0_f_0();
                    }
#line 693 "prog_io_util.m"
                    {
#line 693 "prog_io_util.m"
                      parse_tree__prog_io_util__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 693 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_util__Term2_22));
#line 693 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 693 "prog_io_util.m"
                    }
#line 693 "prog_io_util.m"
                    {
#line 693 "prog_io_util.m"
                      MR_Word base;
#line 693 "prog_io_util.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 693 "prog_io_util.m"
                      *parse_tree__prog_io_util__Term_4 = base;
#line 693 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[6]));
#line 693 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_68_68));
#line 693 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_65));
#line 693 "prog_io_util.m"
                    }
#line 691 "prog_io_util.m"
                  }
#line 690 "prog_io_util.m"
                  break;
#line 690 "prog_io_util.m"
              }
#line 638 "prog_io_util.m"
            }
#line 629 "prog_io_util.m"
            break;
#line 629 "prog_io_util.m"
          case (MR_Integer) 2:
#line 657 "prog_io_util.m"
            {
#line 657 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_32_32;
#line 657 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_33_33;
#line 657 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__TVar_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 1)));
#line 657 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Var_53;
#line 657 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Args_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 2)));
#line 657 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__ArgTerms_55;
#line 657 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Type_3, (MR_Integer) 3)));

#line 658 "prog_io_util.m"
              {
#line 658 "prog_io_util.m"
                parse_tree__prog_io_util__Var_53 = mercury__term__coerce_var_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__TVar_52);
              }
#line 659 "prog_io_util.m"
              {
#line 659 "prog_io_util.m"
                parse_tree__prog_io_util__unparse_type_list_2_p_0(parse_tree__prog_io_util__Args_54, &parse_tree__prog_io_util__ArgTerms_55);
              }
#line 661 "prog_io_util.m"
              {
#line 661 "prog_io_util.m"
                parse_tree__prog_io_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 661 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_util__Var_53));
#line 661 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io_util__Context_5));
#line 661 "prog_io_util.m"
              }
#line 661 "prog_io_util.m"
              {
#line 661 "prog_io_util.m"
                parse_tree__prog_io_util__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 661 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io_util__V_33_33));
#line 661 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_32_32, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTerms_55));
#line 661 "prog_io_util.m"
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
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[1]));
#line 660 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_32_32));
#line 660 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_5));
#line 660 "prog_io_util.m"
              }
#line 657 "prog_io_util.m"
            }
#line 629 "prog_io_util.m"
            break;
#line 629 "prog_io_util.m"
          case (MR_Integer) 3:
#line 663 "prog_io_util.m"
            {
#line 664 "prog_io_util.m"
              {
#line 664 "prog_io_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_io_util", (MR_String) "predicate \140parse_tree.prog_io_util.unparse_type\'/2", (MR_String) "kind annotation");
#line 664 "prog_io_util.m"
                return;
              }
#line 663 "prog_io_util.m"
            }
#line 629 "prog_io_util.m"
            break;
#line 629 "prog_io_util.m"
        }
#line 629 "prog_io_util.m"
        break;
#line 629 "prog_io_util.m"
    }
#line 623 "prog_io_util.m"
  }
#line 136 "prog_io_util.m"
}

#line 134 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__is_known_type_name_1_p_0(
#line 134 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Name_2)
#line 134 "prog_io_util.m"
{
#line 459 "prog_io_util.m"
  {
#line 459 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 459 "prog_io_util.m"
    {
#line 459 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_3_3;

#line 459 "prog_io_util.m"
      {
#line 459 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_116_121_112_101_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_util__Name_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_3_3);
      }
#line 459 "prog_io_util.m"
    }
#line 459 "prog_io_util.m"
    if (!(parse_tree__prog_io_util__succeeded))
#line 466 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Name_2, (MR_String) "func") == 0);
#line 459 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 459 "prog_io_util.m"
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
#line 584 "prog_io_util.m"
  {
#line 584 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 584 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__RevTypes_9;
#line 584 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Specs_10;

#line 585 "prog_io_util.m"
    {
#line 585 "prog_io_util.m"
      parse_tree__prog_io_util__parse_types_acc_7_p_0(parse_tree__prog_io_util__Terms_5, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__RevTypes_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__Specs_10);
    }
#line 589 "prog_io_util.m"
    if ((parse_tree__prog_io_util__Specs_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 587 "prog_io_util.m"
      {
#line 587 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_15_15;

#line 588 "prog_io_util.m"
        {
#line 588 "prog_io_util.m"
          parse_tree__prog_io_util__V_15_15 = mercury__list__reverse_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_io_util__RevTypes_9);
        }
#line 588 "prog_io_util.m"
        {
#line 588 "prog_io_util.m"
          MR_Word base;
#line 588 "prog_io_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 588 "prog_io_util.m"
          *parse_tree__prog_io_util__Result_8 = base;
#line 588 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_15_15));
#line 588 "prog_io_util.m"
        }
#line 587 "prog_io_util.m"
      }
#line 589 "prog_io_util.m"
    else
#line 591 "prog_io_util.m"
      {
#line 591 "prog_io_util.m"
        MR_Word base;
#line 591 "prog_io_util.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 591 "prog_io_util.m"
        *parse_tree__prog_io_util__Result_8 = base;
#line 591 "prog_io_util.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Specs_10));
#line 591 "prog_io_util.m"
      }
#line 584 "prog_io_util.m"
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
#line 577 "prog_io_util.m"
  {
#line 577 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 577 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__VarSet_5;
#line 577 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_7_7;

#line 580 "prog_io_util.m"
    {
#line 580 "prog_io_util.m"
      parse_tree__prog_io_util__VarSet_5 = mercury__varset__init_0_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0);
    }
#line 582 "prog_io_util.m"
    {
#line 582 "prog_io_util.m"
      parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_util__Term_3, parse_tree__prog_io_util__VarSet_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_7_7);
    }
#line 582 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_7_7)) == (MR_mktag((MR_Integer) 1)));
#line 582 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 582 "prog_io_util.m"
      *parse_tree__prog_io_util__Types_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_7_7, (MR_Integer) 0)));
#line 577 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 577 "prog_io_util.m"
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
#line 331 "prog_io_util.m"
  {
#line 331 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 331 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0))))
#line 335 "prog_io_util.m"
      {
#line 335 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Functor_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 335 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__ArgTerms_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 335 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));

#line 344 "prog_io_util.m"
#line 344 "prog_io_util.m"
        switch (MR_tag((MR_Word) parse_tree__prog_io_util__Functor_12)) {
#line 344 "prog_io_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 344 "prog_io_util.m"
          case (MR_Integer) 0:
#line 345 "prog_io_util.m"
            {
#line 345 "prog_io_util.m"
              MR_String parse_tree__prog_io_util__Name_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Functor_12, (MR_Integer) 0)));
#line 361 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__KnownTypeKind_22;

#line 348 "prog_io_util.m"
              {
#line 348 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_116_121_112_101_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_util__Name_21, parse_tree__prog_io_util__ArgTerms_13, &parse_tree__prog_io_util__KnownTypeKind_22);
              }
#line 361 "prog_io_util.m"
              if (parse_tree__prog_io_util__succeeded)
#line 352 "prog_io_util.m"
#line 352 "prog_io_util.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_util__KnownTypeKind_22)) {
#line 352 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 352 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 358 "prog_io_util.m"
                    {
#line 358 "prog_io_util.m"
                      *parse_tree__prog_io_util__Result_8 = parse_tree__prog_io_util__ill_formed_type_result_3_f_0(parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__Term_5);
                    }
#line 352 "prog_io_util.m"
                    break;
#line 352 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 350 "prog_io_util.m"
                    {
#line 350 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__KnownTypeKind_22, (MR_Integer) 0)));

#line 351 "prog_io_util.m"
                      {
#line 351 "prog_io_util.m"
                        MR_Word base;
#line 351 "prog_io_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 351 "prog_io_util.m"
                        *parse_tree__prog_io_util__Result_8 = base;
#line 351 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Type_23));
#line 351 "prog_io_util.m"
                      }
#line 350 "prog_io_util.m"
                    }
#line 352 "prog_io_util.m"
                    break;
#line 352 "prog_io_util.m"
                  case (MR_Integer) 2:
#line 353 "prog_io_util.m"
                    {
#line 353 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__CompoundTypeKind_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__KnownTypeKind_22, (MR_Integer) 0)));

#line 354 "prog_io_util.m"
                      {
#line 354 "prog_io_util.m"
                        parse_tree__prog_io_util__parse_compound_type_5_p_0(parse_tree__prog_io_util__Term_5, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__CompoundTypeKind_24, parse_tree__prog_io_util__Result_8);
#line 354 "prog_io_util.m"
                        return;
                      }
#line 353 "prog_io_util.m"
                    }
#line 352 "prog_io_util.m"
                    break;
#line 352 "prog_io_util.m"
                }
#line 361 "prog_io_util.m"
              else
#line 365 "prog_io_util.m"
                {
#line 365 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__NameResult_25;

#line 364 "prog_io_util.m"
                  {
#line 364 "prog_io_util.m"
                    parse_tree__prog_io_sym_name__parse_sym_name_and_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__Term_5, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__NameResult_25);
                  }
#line 378 "prog_io_util.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io_util__NameResult_25)) == (MR_mktag((MR_Integer) 0))))
#line 379 "prog_io_util.m"
                    {
#line 379 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__Specs_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__NameResult_25, (MR_Integer) 0)));

#line 380 "prog_io_util.m"
                      {
#line 380 "prog_io_util.m"
                        MR_Word base;
#line 380 "prog_io_util.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 380 "prog_io_util.m"
                        *parse_tree__prog_io_util__Result_8 = base;
#line 380 "prog_io_util.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Specs_35));
#line 380 "prog_io_util.m"
                      }
#line 379 "prog_io_util.m"
                    }
#line 378 "prog_io_util.m"
                  else
#line 367 "prog_io_util.m"
                    {
#line 367 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__SymName_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__NameResult_25, (MR_Integer) 0)));
#line 367 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__SymNameArgTerms_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__NameResult_25, (MR_Integer) 1)));
#line 367 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__SymNameArgsResult_28;

#line 368 "prog_io_util.m"
                      {
#line 368 "prog_io_util.m"
                        parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_util__SymNameArgTerms_27, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__SymNameArgsResult_28);
                      }
#line 374 "prog_io_util.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_io_util__SymNameArgsResult_28)) == (MR_mktag((MR_Integer) 0))))
#line 376 "prog_io_util.m"
                        *parse_tree__prog_io_util__Result_8 = (MR_Word) parse_tree__prog_io_util__SymNameArgsResult_28;
#line 374 "prog_io_util.m"
                      else
#line 371 "prog_io_util.m"
                        {
#line 371 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__ArgTypes_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__SymNameArgsResult_28, (MR_Integer) 0)));
#line 371 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_31_31;

#line 372 "prog_io_util.m"
                          {
#line 372 "prog_io_util.m"
                            parse_tree__prog_io_util__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 372 "prog_io_util.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_util__SymName_26));
#line 372 "prog_io_util.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_31_31, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTypes_29));
#line 372 "prog_io_util.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_31_31, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 372 "prog_io_util.m"
                          }
#line 372 "prog_io_util.m"
                          {
#line 372 "prog_io_util.m"
                            MR_Word base;
#line 372 "prog_io_util.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 372 "prog_io_util.m"
                            *parse_tree__prog_io_util__Result_8 = base;
#line 372 "prog_io_util.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_31_31));
#line 372 "prog_io_util.m"
                          }
#line 371 "prog_io_util.m"
                        }
#line 367 "prog_io_util.m"
                    }
#line 365 "prog_io_util.m"
                }
#line 345 "prog_io_util.m"
            }
#line 344 "prog_io_util.m"
            break;
#line 344 "prog_io_util.m"
          case (MR_Integer) 1:
#line 344 "prog_io_util.m"
          case (MR_Integer) 2:
#line 343 "prog_io_util.m"
            {
#line 343 "prog_io_util.m"
              *parse_tree__prog_io_util__Result_8 = parse_tree__prog_io_util__ill_formed_type_result_3_f_0(parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__Term_5);
            }
#line 344 "prog_io_util.m"
            break;
#line 344 "prog_io_util.m"
          case (MR_Integer) 3:
#line 343 "prog_io_util.m"
            {
#line 343 "prog_io_util.m"
              *parse_tree__prog_io_util__Result_8 = parse_tree__prog_io_util__ill_formed_type_result_3_f_0(parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__Term_5);
            }
#line 344 "prog_io_util.m"
            break;
#line 344 "prog_io_util.m"
        }
#line 335 "prog_io_util.m"
      }
#line 331 "prog_io_util.m"
    else
#line 331 "prog_io_util.m"
      {
#line 331 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 331 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Var_11;
#line 331 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_33_33;
#line 331 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));

#line 332 "prog_io_util.m"
        {
#line 332 "prog_io_util.m"
          mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_util__Var0_9, &parse_tree__prog_io_util__Var_11);
        }
#line 333 "prog_io_util.m"
        {
#line 333 "prog_io_util.m"
          parse_tree__prog_io_util__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 333 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_util__Var_11));
#line 333 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_33_33));
#line 333 "prog_io_util.m"
        }
#line 331 "prog_io_util.m"
      }
#line 331 "prog_io_util.m"
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
#line 320 "prog_io_util.m"
  {
#line 320 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 320 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__VarSet_5;
#line 320 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_7_7;

#line 323 "prog_io_util.m"
    {
#line 323 "prog_io_util.m"
      parse_tree__prog_io_util__VarSet_5 = mercury__varset__init_0_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0);
    }
#line 325 "prog_io_util.m"
    {
#line 325 "prog_io_util.m"
      parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_util__Term_3, parse_tree__prog_io_util__VarSet_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_7_7);
    }
#line 325 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_7_7)) == (MR_mktag((MR_Integer) 1)));
#line 325 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 325 "prog_io_util.m"
      *parse_tree__prog_io_util__Type_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_7_7, (MR_Integer) 0)));
#line 320 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 320 "prog_io_util.m"
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
#line 291 "prog_io_util.m"
  {
#line 291 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredAndArgsTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 291 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FunctorTerm_14;
#line 291 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__MaybeFuncResult_15;
#line 291 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__GenericVarSet_16;
#line 291 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Result_18;
#line 298 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FuncAndArgsTerm_11;
#line 298 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FuncResultTerm_12;
#line 293 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_22_22;
#line 293 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_23_23;
#line 293 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_24_24;
#line 293 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_25_25;
#line 293 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_26_26;
#line 293 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;

#line 293 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 293 "prog_io_util.m"
      {
#line 293 "prog_io_util.m"
        parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_7, (MR_Integer) 0)));
#line 293 "prog_io_util.m"
        parse_tree__prog_io_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_7, (MR_Integer) 1)));
#line 293 "prog_io_util.m"
        parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_7, (MR_Integer) 2)));
#line 293 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_22_22)) == (MR_mktag((MR_Integer) 0)));
#line 293 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 293 "prog_io_util.m"
          {
#line 293 "prog_io_util.m"
            parse_tree__prog_io_util__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_22_22, (MR_Integer) 0)));
#line 293 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_23_23, (MR_String) "=") == 0);
#line 293 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 293 "prog_io_util.m"
              {
#line 294 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 294 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 294 "prog_io_util.m"
                  {
#line 294 "prog_io_util.m"
                    parse_tree__prog_io_util__FuncAndArgsTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_24_24, (MR_Integer) 0)));
#line 294 "prog_io_util.m"
                    parse_tree__prog_io_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_24_24, (MR_Integer) 1)));
#line 294 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 294 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 294 "prog_io_util.m"
                      {
#line 294 "prog_io_util.m"
                        parse_tree__prog_io_util__FuncResultTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_25_25, (MR_Integer) 0)));
#line 294 "prog_io_util.m"
                        parse_tree__prog_io_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_25_25, (MR_Integer) 1)));
#line 294 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 294 "prog_io_util.m"
                      }
#line 294 "prog_io_util.m"
                  }
#line 293 "prog_io_util.m"
              }
#line 293 "prog_io_util.m"
          }
#line 293 "prog_io_util.m"
      }
#line 298 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 296 "prog_io_util.m"
      {
#line 296 "prog_io_util.m"
        parse_tree__prog_io_util__FunctorTerm_14 = parse_tree__prog_io_util__FuncAndArgsTerm_11;
#line 297 "prog_io_util.m"
        {
#line 297 "prog_io_util.m"
          parse_tree__prog_io_util__MaybeFuncResult_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 297 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeFuncResult_15, 0) = ((MR_Box) (parse_tree__prog_io_util__FuncResultTerm_12));
#line 297 "prog_io_util.m"
        }
#line 296 "prog_io_util.m"
      }
#line 298 "prog_io_util.m"
    else
#line 299 "prog_io_util.m"
      {
#line 299 "prog_io_util.m"
        parse_tree__prog_io_util__FunctorTerm_14 = parse_tree__prog_io_util__PredAndArgsTerm_7;
#line 300 "prog_io_util.m"
        parse_tree__prog_io_util__MaybeFuncResult_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 299 "prog_io_util.m"
      }
#line 302 "prog_io_util.m"
    {
#line 302 "prog_io_util.m"
      mercury__varset__coerce_2_p_0(parse_tree__prog_io_util__TypeInfo_for__T_28, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__VarSet_8, &parse_tree__prog_io_util__GenericVarSet_16);
    }
#line 307 "prog_io_util.m"
    if ((parse_tree__prog_io_util__MaybeModuleName_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 309 "prog_io_util.m"
      {
#line 309 "prog_io_util.m"
        parse_tree__prog_io_sym_name__parse_sym_name_and_args_4_p_0(parse_tree__prog_io_util__TypeInfo_for__T_28, parse_tree__prog_io_util__FunctorTerm_14, parse_tree__prog_io_util__GenericVarSet_16, parse_tree__prog_io_util__ContextPieces_9, &parse_tree__prog_io_util__Result_18);
      }
#line 307 "prog_io_util.m"
    else
#line 304 "prog_io_util.m"
      {
#line 304 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeModuleName_6, (MR_Integer) 0)));

#line 305 "prog_io_util.m"
        {
#line 305 "prog_io_util.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_util__TypeInfo_for__T_28, parse_tree__prog_io_util__ModuleName_17, parse_tree__prog_io_util__FunctorTerm_14, parse_tree__prog_io_util__GenericVarSet_16, parse_tree__prog_io_util__ContextPieces_9, &parse_tree__prog_io_util__Result_18);
        }
#line 304 "prog_io_util.m"
      }
#line 315 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__Result_18)) == (MR_mktag((MR_Integer) 0))))
#line 317 "prog_io_util.m"
      *parse_tree__prog_io_util__PredAndArgsResult_10 = (MR_Word) parse_tree__prog_io_util__Result_18;
#line 315 "prog_io_util.m"
    else
#line 313 "prog_io_util.m"
      {
#line 313 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__SymName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Result_18, (MR_Integer) 0)));
#line 313 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Result_18, (MR_Integer) 1)));
#line 313 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_27_27;

#line 314 "prog_io_util.m"
        {
#line 314 "prog_io_util.m"
          parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 314 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_util__Args_20));
#line 314 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io_util__MaybeFuncResult_15));
#line 314 "prog_io_util.m"
        }
#line 314 "prog_io_util.m"
        {
#line 314 "prog_io_util.m"
          MR_Word base;
#line 314 "prog_io_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "prog_io_util.m"
          *parse_tree__prog_io_util__PredAndArgsResult_10 = base;
#line 314 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__SymName_19));
#line 314 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
#line 314 "prog_io_util.m"
        }
#line 313 "prog_io_util.m"
      }
#line 291 "prog_io_util.m"
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
#line 285 "prog_io_util.m"
  {
#line 285 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredAndArgsTerm_5)) == (MR_mktag((MR_Integer) 0)));
#line 285 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FuncAndArgsTerm_9;
#line 285 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_16_16;
#line 279 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 279 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_14_14;
#line 279 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_15_15;
#line 279 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_17_17;
#line 279 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;
#line 280 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FuncResultTerm_10;

#line 279 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 279 "prog_io_util.m"
      {
#line 279 "prog_io_util.m"
        parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_5, (MR_Integer) 0)));
#line 279 "prog_io_util.m"
        parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_5, (MR_Integer) 1)));
#line 279 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_5, (MR_Integer) 2)));
#line 279 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 279 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 279 "prog_io_util.m"
          {
#line 279 "prog_io_util.m"
            parse_tree__prog_io_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_13_13, (MR_Integer) 0)));
#line 279 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_14_14, (MR_String) "=") == 0);
#line 279 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 279 "prog_io_util.m"
              {
#line 280 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 280 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 280 "prog_io_util.m"
                  {
#line 280 "prog_io_util.m"
                    parse_tree__prog_io_util__FuncAndArgsTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 0)));
#line 280 "prog_io_util.m"
                    parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 1)));
#line 280 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 280 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 280 "prog_io_util.m"
                      {
#line 280 "prog_io_util.m"
                        parse_tree__prog_io_util__FuncResultTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
#line 280 "prog_io_util.m"
                        parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
#line 280 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 280 "prog_io_util.m"
                      }
#line 280 "prog_io_util.m"
                  }
#line 279 "prog_io_util.m"
              }
#line 279 "prog_io_util.m"
          }
#line 279 "prog_io_util.m"
      }
#line 285 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 282 "prog_io_util.m"
      {
#line 282 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TypeCtorInfo_21_21;
#line 282 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TypeInfo_22_22;
#line 282 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__ArgTerms0_12;
#line 284 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__conv0_ArgTerms_8;

#line 282 "prog_io_util.m"
        {
#line 282 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0(parse_tree__prog_io_util__TypeInfo_for__T_20, parse_tree__prog_io_util__FuncAndArgsTerm_9, parse_tree__prog_io_util__SymName_7, &parse_tree__prog_io_util__ArgTerms0_12);
        }
#line 282 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 282 "prog_io_util.m"
          {
#line 283 "prog_io_util.m"
            *parse_tree__prog_io_util__PredOrFunc_6 = (MR_Integer) 1;
#line 18939 "parse_tree.prog_io_util.c"
            parse_tree__prog_io_util__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 18941 "parse_tree.prog_io_util.c"
            {
#line 18943 "parse_tree.prog_io_util.c"
              parse_tree__prog_io_util__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 18945 "parse_tree.prog_io_util.c"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_22_22, 0) = ((MR_Box) (parse_tree__prog_io_util__TypeCtorInfo_21_21));
#line 18947 "parse_tree.prog_io_util.c"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_22_22, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for__T_20));
#line 18949 "parse_tree.prog_io_util.c"
            }
#line 284 "prog_io_util.m"
            {
#line 284 "prog_io_util.m"
              parse_tree__prog_io_util__conv0_ArgTerms_8 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_util__TypeInfo_22_22, (MR_Word) parse_tree__prog_io_util__ArgTerms0_12, (MR_Word) parse_tree__prog_io_util__V_16_16);
            }
#line 284 "prog_io_util.m"
            *parse_tree__prog_io_util__ArgTerms_8 = (MR_Word) parse_tree__prog_io_util__conv0_ArgTerms_8;
#line 284 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 282 "prog_io_util.m"
          }
#line 282 "prog_io_util.m"
      }
#line 285 "prog_io_util.m"
    else
#line 286 "prog_io_util.m"
      {
#line 286 "prog_io_util.m"
        {
#line 286 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0(parse_tree__prog_io_util__TypeInfo_for__T_20, parse_tree__prog_io_util__PredAndArgsTerm_5, parse_tree__prog_io_util__SymName_7, parse_tree__prog_io_util__ArgTerms_8);
        }
#line 286 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 286 "prog_io_util.m"
          {
#line 287 "prog_io_util.m"
            *parse_tree__prog_io_util__PredOrFunc_6 = (MR_Integer) 0;
#line 287 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 286 "prog_io_util.m"
          }
#line 286 "prog_io_util.m"
      }
#line 285 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 285 "prog_io_util.m"
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
#line 268 "prog_io_util.m"
  {
#line 268 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PorFPredAndArityTerm_5)) == (MR_mktag((MR_Integer) 0)));
#line 268 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__PredOrFuncStr_9;
#line 268 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Args_10;
#line 268 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Arg_12;
#line 268 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__ModuleName_13;
#line 268 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_14_14;
#line 268 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_15_15;
#line 268 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_16_16;
#line 269 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;

#line 269 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 269 "prog_io_util.m"
      {
#line 269 "prog_io_util.m"
        parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PorFPredAndArityTerm_5, (MR_Integer) 0)));
#line 269 "prog_io_util.m"
        parse_tree__prog_io_util__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PorFPredAndArityTerm_5, (MR_Integer) 1)));
#line 269 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PorFPredAndArityTerm_5, (MR_Integer) 2)));
#line 269 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_14_14)) == (MR_mktag((MR_Integer) 0)));
#line 269 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 269 "prog_io_util.m"
          {
#line 269 "prog_io_util.m"
            parse_tree__prog_io_util__PredOrFuncStr_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_14_14, (MR_Integer) 0)));
#line 271 "prog_io_util.m"
            if ((strcmp(parse_tree__prog_io_util__PredOrFuncStr_9, (MR_String) "func") == 0))
#line 271 "prog_io_util.m"
              {
#line 271 "prog_io_util.m"
                *parse_tree__prog_io_util__PredOrFunc_6 = (MR_Integer) 1;
#line 271 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 271 "prog_io_util.m"
              }
#line 271 "prog_io_util.m"
            else
#line 271 "prog_io_util.m"
            if ((strcmp(parse_tree__prog_io_util__PredOrFuncStr_9, (MR_String) "pred") == 0))
#line 270 "prog_io_util.m"
              {
#line 270 "prog_io_util.m"
                *parse_tree__prog_io_util__PredOrFunc_6 = (MR_Integer) 0;
#line 270 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 270 "prog_io_util.m"
              }
#line 271 "prog_io_util.m"
            else
#line 271 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 268 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 268 "prog_io_util.m"
              {
#line 273 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args_10)) == (MR_mktag((MR_Integer) 1)));
#line 273 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 273 "prog_io_util.m"
                  {
#line 273 "prog_io_util.m"
                    parse_tree__prog_io_util__Arg_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_10, (MR_Integer) 0)));
#line 273 "prog_io_util.m"
                    parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_10, (MR_Integer) 1)));
#line 273 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 268 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 268 "prog_io_util.m"
                      {
#line 274 "prog_io_util.m"
                        parse_tree__prog_io_util__V_16_16 = (MR_String) "";
#line 274 "prog_io_util.m"
                        parse_tree__prog_io_util__ModuleName_13 = (MR_Word) &parse_tree__prog_io_util_scalar_common_3[1];
#line 275 "prog_io_util.m"
                        {
#line 275 "prog_io_util.m"
                          return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_name_and_arity_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_17, parse_tree__prog_io_util__ModuleName_13, parse_tree__prog_io_util__Arg_12, parse_tree__prog_io_util__SymName_7, parse_tree__prog_io_util__Arity_8);
                        }
#line 268 "prog_io_util.m"
                      }
#line 273 "prog_io_util.m"
                  }
#line 268 "prog_io_util.m"
              }
#line 269 "prog_io_util.m"
          }
#line 269 "prog_io_util.m"
      }
#line 268 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 268 "prog_io_util.m"
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
#line 263 "prog_io_util.m"
  {
#line 263 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 264 "prog_io_util.m"
    {
#line 264 "prog_io_util.m"
      return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_name_and_arity_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_9, (MR_Word) &parse_tree__prog_io_util_scalar_common_3[1], parse_tree__prog_io_util__PredAndArityTerm_4, parse_tree__prog_io_util__SymName_5, parse_tree__prog_io_util__Arity_6);
    }
#line 263 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 263 "prog_io_util.m"
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
#line 256 "prog_io_util.m"
  {
#line 256 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredAndArityTerm_6)) == (MR_mktag((MR_Integer) 0)));
#line 256 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__PredNameTerm_9;
#line 256 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__ArityTerm_10;
#line 256 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 256 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_14_14;
#line 256 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_15_15;
#line 256 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_16_16;
#line 256 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_17_17;
#line 256 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_18_18;
#line 256 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_19_19;
#line 257 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;
#line 261 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_12_12;

#line 257 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 257 "prog_io_util.m"
      {
#line 257 "prog_io_util.m"
        parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArityTerm_6, (MR_Integer) 0)));
#line 257 "prog_io_util.m"
        parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArityTerm_6, (MR_Integer) 1)));
#line 257 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArityTerm_6, (MR_Integer) 2)));
#line 257 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 257 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 257 "prog_io_util.m"
          {
#line 257 "prog_io_util.m"
            parse_tree__prog_io_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_13_13, (MR_Integer) 0)));
#line 257 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_14_14, (MR_String) "/") == 0);
#line 256 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 256 "prog_io_util.m"
              {
#line 258 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 258 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 258 "prog_io_util.m"
                  {
#line 258 "prog_io_util.m"
                    parse_tree__prog_io_util__PredNameTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 0)));
#line 258 "prog_io_util.m"
                    parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 1)));
#line 258 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 258 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 258 "prog_io_util.m"
                      {
#line 258 "prog_io_util.m"
                        parse_tree__prog_io_util__ArityTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
#line 258 "prog_io_util.m"
                        parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
#line 258 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 256 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 256 "prog_io_util.m"
                          {
#line 259 "prog_io_util.m"
                            {
#line 259 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_implicitly_qualified_sym_name_and_no_args_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_20, parse_tree__prog_io_util__ModuleName_5, parse_tree__prog_io_util__PredNameTerm_9, parse_tree__prog_io_util__SymName_7);
                            }
#line 256 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 256 "prog_io_util.m"
                              {
#line 261 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__ArityTerm_10)) == (MR_mktag((MR_Integer) 0)));
#line 261 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 261 "prog_io_util.m"
                                  {
#line 261 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__ArityTerm_10, (MR_Integer) 0)));
#line 261 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__ArityTerm_10, (MR_Integer) 1)));
#line 261 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__ArityTerm_10, (MR_Integer) 2)));
#line 261 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 261 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 261 "prog_io_util.m"
                                      {
#line 261 "prog_io_util.m"
                                        *parse_tree__prog_io_util__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, (MR_Integer) 0)));
#line 261 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 261 "prog_io_util.m"
                                      }
#line 261 "prog_io_util.m"
                                  }
#line 256 "prog_io_util.m"
                              }
#line 256 "prog_io_util.m"
                          }
#line 258 "prog_io_util.m"
                      }
#line 258 "prog_io_util.m"
                  }
#line 256 "prog_io_util.m"
              }
#line 257 "prog_io_util.m"
          }
#line 257 "prog_io_util.m"
      }
#line 256 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 256 "prog_io_util.m"
  }
#line 108 "prog_io_util.m"
}

#line 103 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_vars_and_state_vars_4_p_0(
#line 103 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_96,
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
#line 1422 "prog_io_util.m"
  {
#line 1422 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1420 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_40_40;
#line 1420 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_41_41;
#line 1420 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_42_42;
#line 1420 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 1420 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1420 "prog_io_util.m"
      {
#line 1420 "prog_io_util.m"
        parse_tree__prog_io_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 1420 "prog_io_util.m"
        parse_tree__prog_io_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 1420 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 1420 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1420 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1420 "prog_io_util.m"
          {
#line 1420 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_40_40)) == (MR_mktag((MR_Integer) 0)));
#line 1420 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1420 "prog_io_util.m"
              {
#line 1420 "prog_io_util.m"
                parse_tree__prog_io_util__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_40_40, (MR_Integer) 0)));
#line 1420 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_41_41, (MR_String) "[]") == 0);
#line 1420 "prog_io_util.m"
              }
#line 1420 "prog_io_util.m"
          }
#line 1420 "prog_io_util.m"
      }
#line 1422 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1421 "prog_io_util.m"
      {
#line 1421 "prog_io_util.m"
        *parse_tree__prog_io_util__MaybeVars_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_4[0]);
#line 1421 "prog_io_util.m"
      }
#line 1422 "prog_io_util.m"
    else
#line 1516 "prog_io_util.m"
      {
#line 1516 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__HeadTerm_10;
#line 1516 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Tail_11;
#line 1422 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_47_47;
#line 1422 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_48_48;
#line 1422 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_49_49;
#line 1422 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_50_50;
#line 1422 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_51_51;
#line 1422 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_12_12;

#line 1422 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1422 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1422 "prog_io_util.m"
          {
#line 1422 "prog_io_util.m"
            parse_tree__prog_io_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 1422 "prog_io_util.m"
            parse_tree__prog_io_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 1422 "prog_io_util.m"
            parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 1422 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_47_47)) == (MR_mktag((MR_Integer) 0)));
#line 1422 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1422 "prog_io_util.m"
              {
#line 1422 "prog_io_util.m"
                parse_tree__prog_io_util__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_47_47, (MR_Integer) 0)));
#line 1422 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_48_48, (MR_String) "[|]") == 0);
#line 1422 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1422 "prog_io_util.m"
                  {
#line 1422 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_49_49)) == (MR_mktag((MR_Integer) 1)));
#line 1422 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1422 "prog_io_util.m"
                      {
#line 1422 "prog_io_util.m"
                        parse_tree__prog_io_util__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_49_49, (MR_Integer) 0)));
#line 1422 "prog_io_util.m"
                        parse_tree__prog_io_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_49_49, (MR_Integer) 1)));
#line 1422 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_50_50)) == (MR_mktag((MR_Integer) 1)));
#line 1422 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1422 "prog_io_util.m"
                          {
#line 1422 "prog_io_util.m"
                            parse_tree__prog_io_util__Tail_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_50_50, (MR_Integer) 0)));
#line 1422 "prog_io_util.m"
                            parse_tree__prog_io_util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_50_50, (MR_Integer) 1)));
#line 1422 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_51_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1422 "prog_io_util.m"
                          }
#line 1422 "prog_io_util.m"
                      }
#line 1422 "prog_io_util.m"
                  }
#line 1422 "prog_io_util.m"
              }
#line 1422 "prog_io_util.m"
          }
#line 1516 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1443 "prog_io_util.m"
          {
#line 1443 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__MaybeHeadVar_23;
#line 1443 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__MaybeTailVars_25;
#line 1439 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__VarKind0_15;
#line 1511 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__VarKind_26;
#line 1511 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TailVars_27;
#line 1511 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TailStateVars_28;
#line 1511 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TailDotVars_29;
#line 1511 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TailColonVars_30;

#line 1427 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadTerm_10)) == (MR_mktag((MR_Integer) 0))))
#line 1427 "prog_io_util.m"
              {
#line 1427 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));
#line 1427 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 1427 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_127_127;
#line 1427 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_128_128;
#line 1427 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__V_129_129;
#line 1427 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_131_131;
#line 1428 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 2)));
#line 1428 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_130_130;

#line 1428 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_125_125)) == (MR_mktag((MR_Integer) 1)));
#line 1428 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1428 "prog_io_util.m"
                  {
#line 1428 "prog_io_util.m"
                    parse_tree__prog_io_util__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_125_125, (MR_Integer) 0)));
#line 1428 "prog_io_util.m"
                    parse_tree__prog_io_util__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_125_125, (MR_Integer) 1)));
#line 1428 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_127_127 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1427 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1427 "prog_io_util.m"
                      {
#line 1428 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_126_126)) == (MR_mktag((MR_Integer) 0)));
#line 1428 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1428 "prog_io_util.m"
                          {
#line 1428 "prog_io_util.m"
                            parse_tree__prog_io_util__V_129_129 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_126_126, (MR_Integer) 0)));
#line 1428 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_128_128)) == (MR_mktag((MR_Integer) 1)));
#line 1428 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1428 "prog_io_util.m"
                              {
#line 1428 "prog_io_util.m"
                                parse_tree__prog_io_util__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_128_128, (MR_Integer) 0)));
#line 1428 "prog_io_util.m"
                                parse_tree__prog_io_util__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_128_128, (MR_Integer) 1)));
#line 1427 "prog_io_util.m"
                                if ((strcmp(parse_tree__prog_io_util__V_129_129, (MR_String) "!") == 0))
#line 1429 "prog_io_util.m"
                                  {
#line 1429 "prog_io_util.m"
                                    {
#line 1429 "prog_io_util.m"
                                      parse_tree__prog_io_util__VarKind0_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1429 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarKind0_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_131_131));
#line 1429 "prog_io_util.m"
                                    }
#line 1429 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1429 "prog_io_util.m"
                                  }
#line 1427 "prog_io_util.m"
                                else
#line 1427 "prog_io_util.m"
                                if ((strcmp(parse_tree__prog_io_util__V_129_129, (MR_String) "!.") == 0))
#line 1432 "prog_io_util.m"
                                  {
#line 1432 "prog_io_util.m"
                                    {
#line 1432 "prog_io_util.m"
                                      parse_tree__prog_io_util__VarKind0_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1432 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__VarKind0_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_131_131));
#line 1432 "prog_io_util.m"
                                    }
#line 1432 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1432 "prog_io_util.m"
                                  }
#line 1427 "prog_io_util.m"
                                else
#line 1427 "prog_io_util.m"
                                if ((strcmp(parse_tree__prog_io_util__V_129_129, (MR_String) "!:") == 0))
#line 1435 "prog_io_util.m"
                                  {
#line 1435 "prog_io_util.m"
                                    {
#line 1435 "prog_io_util.m"
                                      parse_tree__prog_io_util__VarKind0_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1435 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__VarKind0_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_131_131));
#line 1435 "prog_io_util.m"
                                    }
#line 1435 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1435 "prog_io_util.m"
                                  }
#line 1427 "prog_io_util.m"
                                else
#line 1427 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 1428 "prog_io_util.m"
                              }
#line 1428 "prog_io_util.m"
                          }
#line 1427 "prog_io_util.m"
                      }
#line 1428 "prog_io_util.m"
                  }
#line 1427 "prog_io_util.m"
              }
#line 1427 "prog_io_util.m"
            else
#line 1425 "prog_io_util.m"
              {
#line 1425 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 1425 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));

#line 1426 "prog_io_util.m"
                {
#line 1426 "prog_io_util.m"
                  parse_tree__prog_io_util__VarKind0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1426 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__VarKind0_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V0_13));
#line 1426 "prog_io_util.m"
                }
#line 1425 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1425 "prog_io_util.m"
              }
#line 1439 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1438 "prog_io_util.m"
              {
#line 1438 "prog_io_util.m"
                parse_tree__prog_io_util__MaybeHeadVar_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1438 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeHeadVar_23, 0) = ((MR_Box) (parse_tree__prog_io_util__VarKind0_15));
#line 1438 "prog_io_util.m"
              }
#line 1439 "prog_io_util.m"
            else
#line 1441 "prog_io_util.m"
              {
#line 1441 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__HeadSpec_24;
#line 1441 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_68_68;

#line 1440 "prog_io_util.m"
                {
#line 1440 "prog_io_util.m"
                  parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "variable or state variable", parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__HeadSpec_24);
                }
#line 1442 "prog_io_util.m"
                {
#line 1442 "prog_io_util.m"
                  parse_tree__prog_io_util__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1442 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadSpec_24));
#line 1442 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1442 "prog_io_util.m"
                }
#line 1442 "prog_io_util.m"
                {
#line 1442 "prog_io_util.m"
                  parse_tree__prog_io_util__MaybeHeadVar_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1442 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__MaybeHeadVar_23, 0) = ((MR_Box) (parse_tree__prog_io_util__V_68_68));
#line 1442 "prog_io_util.m"
                }
#line 1441 "prog_io_util.m"
              }
#line 1444 "prog_io_util.m"
            {
#line 1444 "prog_io_util.m"
              parse_tree__prog_io_util__parse_vars_and_state_vars_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__Tail_11, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__MaybeTailVars_25);
            }
#line 1447 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeHeadVar_23)) == (MR_mktag((MR_Integer) 1)));
#line 1447 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1447 "prog_io_util.m"
              {
#line 1447 "prog_io_util.m"
                parse_tree__prog_io_util__VarKind_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeHeadVar_23, (MR_Integer) 0)));
#line 1448 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeTailVars_25)) == (MR_mktag((MR_Integer) 1)));
#line 1448 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1448 "prog_io_util.m"
                  {
#line 1448 "prog_io_util.m"
                    parse_tree__prog_io_util__TailVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeTailVars_25, (MR_Integer) 0)));
#line 1448 "prog_io_util.m"
                    parse_tree__prog_io_util__TailStateVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeTailVars_25, (MR_Integer) 1)));
#line 1448 "prog_io_util.m"
                    parse_tree__prog_io_util__TailDotVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeTailVars_25, (MR_Integer) 2)));
#line 1448 "prog_io_util.m"
                    parse_tree__prog_io_util__TailColonVars_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeTailVars_25, (MR_Integer) 3)));
#line 1448 "prog_io_util.m"
                  }
#line 1447 "prog_io_util.m"
              }
#line 1511 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1462 "prog_io_util.m"
#line 1462 "prog_io_util.m"
              switch (MR_tag((MR_Word) parse_tree__prog_io_util__VarKind_26)) {
#line 1462 "prog_io_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1462 "prog_io_util.m"
                case (MR_Integer) 0:
#line 1452 "prog_io_util.m"
                  {
#line 1452 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__VarKind_26, (MR_Integer) 0)));
#line 1453 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__TypeInfo_98_98;

#line 19697 "parse_tree.prog_io_util.c"
                    {
#line 19699 "parse_tree.prog_io_util.c"
                      parse_tree__prog_io_util__TypeInfo_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 19701 "parse_tree.prog_io_util.c"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_98_98, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 19703 "parse_tree.prog_io_util.c"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_98_98, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 19705 "parse_tree.prog_io_util.c"
                    }
#line 1453 "prog_io_util.m"
                    {
#line 1453 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_98_98, parse_tree__prog_io_util__V_31, parse_tree__prog_io_util__TailVars_27);
                    }
#line 1457 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1455 "prog_io_util.m"
                      {
#line 1455 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Spec_32;
#line 1455 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_76_76;

#line 1454 "prog_io_util.m"
                        {
#line 1454 "prog_io_util.m"
                          parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_32);
                        }
#line 1456 "prog_io_util.m"
                        {
#line 1456 "prog_io_util.m"
                          parse_tree__prog_io_util__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1456 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_32));
#line 1456 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1456 "prog_io_util.m"
                        }
#line 1456 "prog_io_util.m"
                        {
#line 1456 "prog_io_util.m"
                          MR_Word base;
#line 1456 "prog_io_util.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1456 "prog_io_util.m"
                          *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1456 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_76_76));
#line 1456 "prog_io_util.m"
                        }
#line 1455 "prog_io_util.m"
                      }
#line 1457 "prog_io_util.m"
                    else
#line 1458 "prog_io_util.m"
                      {
#line 1458 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Vars_33;

#line 1458 "prog_io_util.m"
                        {
#line 1458 "prog_io_util.m"
                          parse_tree__prog_io_util__Vars_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1458 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_33, 0) = ((MR_Box) (parse_tree__prog_io_util__V_31));
#line 1458 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_33, 1) = ((MR_Box) (parse_tree__prog_io_util__TailVars_27));
#line 1458 "prog_io_util.m"
                        }
#line 1459 "prog_io_util.m"
                        {
#line 1459 "prog_io_util.m"
                          MR_Word base;
#line 1459 "prog_io_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1459 "prog_io_util.m"
                          *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1459 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Vars_33));
#line 1459 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_28));
#line 1459 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_util__TailDotVars_29));
#line 1459 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_io_util__TailColonVars_30));
#line 1459 "prog_io_util.m"
                        }
#line 1458 "prog_io_util.m"
                      }
#line 1452 "prog_io_util.m"
                  }
#line 1462 "prog_io_util.m"
                  break;
#line 1462 "prog_io_util.m"
                case (MR_Integer) 1:
#line 1463 "prog_io_util.m"
                  {
#line 1463 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__SV_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarKind_26, (MR_Integer) 0)));

#line 1465 "prog_io_util.m"
                    {
#line 1465 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__TypeInfo_100_100;

#line 19803 "parse_tree.prog_io_util.c"
                      {
#line 19805 "parse_tree.prog_io_util.c"
                        parse_tree__prog_io_util__TypeInfo_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 19807 "parse_tree.prog_io_util.c"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_100_100, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 19809 "parse_tree.prog_io_util.c"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_100_100, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 19811 "parse_tree.prog_io_util.c"
                      }
#line 1465 "prog_io_util.m"
                      {
#line 1465 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_100_100, parse_tree__prog_io_util__SV_34, parse_tree__prog_io_util__TailStateVars_28);
                      }
#line 1465 "prog_io_util.m"
                    }
#line 1466 "prog_io_util.m"
                    if (!(parse_tree__prog_io_util__succeeded))
#line 1466 "prog_io_util.m"
                      {
#line 1466 "prog_io_util.m"
                        {
#line 1466 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__TypeInfo_102_102;

#line 19829 "parse_tree.prog_io_util.c"
                          {
#line 19831 "parse_tree.prog_io_util.c"
                            parse_tree__prog_io_util__TypeInfo_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 19833 "parse_tree.prog_io_util.c"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_102_102, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 19835 "parse_tree.prog_io_util.c"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_102_102, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 19837 "parse_tree.prog_io_util.c"
                          }
#line 1466 "prog_io_util.m"
                          {
#line 1466 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_102_102, parse_tree__prog_io_util__SV_34, parse_tree__prog_io_util__TailDotVars_29);
                          }
#line 1466 "prog_io_util.m"
                        }
#line 1466 "prog_io_util.m"
                        if (!(parse_tree__prog_io_util__succeeded))
#line 1467 "prog_io_util.m"
                          {
#line 1467 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__TypeInfo_104_104;

#line 19853 "parse_tree.prog_io_util.c"
                            {
#line 19855 "parse_tree.prog_io_util.c"
                              parse_tree__prog_io_util__TypeInfo_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 19857 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_104_104, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 19859 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_104_104, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 19861 "parse_tree.prog_io_util.c"
                            }
#line 1467 "prog_io_util.m"
                            {
#line 1467 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_104_104, parse_tree__prog_io_util__SV_34, parse_tree__prog_io_util__TailColonVars_30);
                            }
#line 1467 "prog_io_util.m"
                          }
#line 1466 "prog_io_util.m"
                      }
#line 1473 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1471 "prog_io_util.m"
                      {
#line 1471 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_74_74;
#line 1471 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Spec_84;

#line 1470 "prog_io_util.m"
                        {
#line 1470 "prog_io_util.m"
                          parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_84);
                        }
#line 1472 "prog_io_util.m"
                        {
#line 1472 "prog_io_util.m"
                          parse_tree__prog_io_util__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1472 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_74_74, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_84));
#line 1472 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1472 "prog_io_util.m"
                        }
#line 1472 "prog_io_util.m"
                        {
#line 1472 "prog_io_util.m"
                          MR_Word base;
#line 1472 "prog_io_util.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1472 "prog_io_util.m"
                          *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1472 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_74_74));
#line 1472 "prog_io_util.m"
                        }
#line 1471 "prog_io_util.m"
                      }
#line 1473 "prog_io_util.m"
                    else
#line 1474 "prog_io_util.m"
                      {
#line 1474 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__StateVars_35;

#line 1474 "prog_io_util.m"
                        {
#line 1474 "prog_io_util.m"
                          parse_tree__prog_io_util__StateVars_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1474 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__StateVars_35, 0) = ((MR_Box) (parse_tree__prog_io_util__SV_34));
#line 1474 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__StateVars_35, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_28));
#line 1474 "prog_io_util.m"
                        }
#line 1475 "prog_io_util.m"
                        {
#line 1475 "prog_io_util.m"
                          MR_Word base;
#line 1475 "prog_io_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1475 "prog_io_util.m"
                          *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1475 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__TailVars_27));
#line 1475 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__StateVars_35));
#line 1475 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_util__TailDotVars_29));
#line 1475 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_io_util__TailColonVars_30));
#line 1475 "prog_io_util.m"
                        }
#line 1474 "prog_io_util.m"
                      }
#line 1463 "prog_io_util.m"
                  }
#line 1462 "prog_io_util.m"
                  break;
#line 1462 "prog_io_util.m"
                case (MR_Integer) 2:
#line 1479 "prog_io_util.m"
                  {
#line 1479 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__SV_90 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__VarKind_26, (MR_Integer) 0)));

#line 1481 "prog_io_util.m"
                    {
#line 1481 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__TypeInfo_106_106;

#line 19963 "parse_tree.prog_io_util.c"
                      {
#line 19965 "parse_tree.prog_io_util.c"
                        parse_tree__prog_io_util__TypeInfo_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 19967 "parse_tree.prog_io_util.c"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_106_106, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 19969 "parse_tree.prog_io_util.c"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_106_106, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 19971 "parse_tree.prog_io_util.c"
                      }
#line 1481 "prog_io_util.m"
                      {
#line 1481 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_106_106, parse_tree__prog_io_util__SV_90, parse_tree__prog_io_util__TailStateVars_28);
                      }
#line 1481 "prog_io_util.m"
                    }
#line 1482 "prog_io_util.m"
                    if (!(parse_tree__prog_io_util__succeeded))
#line 1482 "prog_io_util.m"
                      {
#line 1482 "prog_io_util.m"
                        {
#line 1482 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__TypeInfo_108_108;

#line 19989 "parse_tree.prog_io_util.c"
                          {
#line 19991 "parse_tree.prog_io_util.c"
                            parse_tree__prog_io_util__TypeInfo_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 19993 "parse_tree.prog_io_util.c"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_108_108, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 19995 "parse_tree.prog_io_util.c"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_108_108, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 19997 "parse_tree.prog_io_util.c"
                          }
#line 1482 "prog_io_util.m"
                          {
#line 1482 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_108_108, parse_tree__prog_io_util__SV_90, parse_tree__prog_io_util__TailDotVars_29);
                          }
#line 1482 "prog_io_util.m"
                        }
#line 1482 "prog_io_util.m"
                        if (!(parse_tree__prog_io_util__succeeded))
#line 1483 "prog_io_util.m"
                          {
#line 1483 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__TypeInfo_110_110;

#line 20013 "parse_tree.prog_io_util.c"
                            {
#line 20015 "parse_tree.prog_io_util.c"
                              parse_tree__prog_io_util__TypeInfo_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 20017 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_110_110, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 20019 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_110_110, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 20021 "parse_tree.prog_io_util.c"
                            }
#line 1483 "prog_io_util.m"
                            {
#line 1483 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_110_110, parse_tree__prog_io_util__SV_90, parse_tree__prog_io_util__TailColonVars_30);
                            }
#line 1483 "prog_io_util.m"
                          }
#line 1482 "prog_io_util.m"
                      }
#line 1489 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1487 "prog_io_util.m"
                      {
#line 1487 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_72_72;
#line 1487 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Spec_87;

#line 1486 "prog_io_util.m"
                        {
#line 1486 "prog_io_util.m"
                          parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_87);
                        }
#line 1488 "prog_io_util.m"
                        {
#line 1488 "prog_io_util.m"
                          parse_tree__prog_io_util__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1488 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_87));
#line 1488 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_72_72));
#line 1488 "prog_io_util.m"
                        }
#line 1487 "prog_io_util.m"
                      }
#line 1489 "prog_io_util.m"
                    else
#line 1490 "prog_io_util.m"
                      {
#line 1490 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__DotVars_36;

#line 1490 "prog_io_util.m"
                        {
#line 1490 "prog_io_util.m"
                          parse_tree__prog_io_util__DotVars_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1490 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__DotVars_36, 0) = ((MR_Box) (parse_tree__prog_io_util__SV_90));
#line 1490 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__DotVars_36, 1) = ((MR_Box) (parse_tree__prog_io_util__TailDotVars_29));
#line 1490 "prog_io_util.m"
                        }
#line 1491 "prog_io_util.m"
                        {
#line 1491 "prog_io_util.m"
                          MR_Word base;
#line 1491 "prog_io_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1491 "prog_io_util.m"
                          *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1491 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__TailVars_27));
#line 1491 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_28));
#line 1491 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_util__DotVars_36));
#line 1491 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_io_util__TailColonVars_30));
#line 1491 "prog_io_util.m"
                        }
#line 1490 "prog_io_util.m"
                      }
#line 1479 "prog_io_util.m"
                  }
#line 1462 "prog_io_util.m"
                  break;
#line 1462 "prog_io_util.m"
                case (MR_Integer) 3:
#line 1495 "prog_io_util.m"
                  {
#line 1495 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__SV_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__VarKind_26, (MR_Integer) 0)));

#line 1497 "prog_io_util.m"
                    {
#line 1497 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__TypeInfo_112_112;

#line 20123 "parse_tree.prog_io_util.c"
                      {
#line 20125 "parse_tree.prog_io_util.c"
                        parse_tree__prog_io_util__TypeInfo_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 20127 "parse_tree.prog_io_util.c"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_112_112, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 20129 "parse_tree.prog_io_util.c"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_112_112, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 20131 "parse_tree.prog_io_util.c"
                      }
#line 1497 "prog_io_util.m"
                      {
#line 1497 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_112_112, parse_tree__prog_io_util__SV_94, parse_tree__prog_io_util__TailStateVars_28);
                      }
#line 1497 "prog_io_util.m"
                    }
#line 1498 "prog_io_util.m"
                    if (!(parse_tree__prog_io_util__succeeded))
#line 1498 "prog_io_util.m"
                      {
#line 1498 "prog_io_util.m"
                        {
#line 1498 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__TypeInfo_114_114;

#line 20149 "parse_tree.prog_io_util.c"
                          {
#line 20151 "parse_tree.prog_io_util.c"
                            parse_tree__prog_io_util__TypeInfo_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 20153 "parse_tree.prog_io_util.c"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_114_114, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 20155 "parse_tree.prog_io_util.c"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_114_114, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 20157 "parse_tree.prog_io_util.c"
                          }
#line 1498 "prog_io_util.m"
                          {
#line 1498 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_114_114, parse_tree__prog_io_util__SV_94, parse_tree__prog_io_util__TailDotVars_29);
                          }
#line 1498 "prog_io_util.m"
                        }
#line 1498 "prog_io_util.m"
                        if (!(parse_tree__prog_io_util__succeeded))
#line 1499 "prog_io_util.m"
                          {
#line 1499 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__TypeInfo_116_116;

#line 20173 "parse_tree.prog_io_util.c"
                            {
#line 20175 "parse_tree.prog_io_util.c"
                              parse_tree__prog_io_util__TypeInfo_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 20177 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_116_116, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 20179 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_116_116, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 20181 "parse_tree.prog_io_util.c"
                            }
#line 1499 "prog_io_util.m"
                            {
#line 1499 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__TypeInfo_116_116, parse_tree__prog_io_util__SV_94, parse_tree__prog_io_util__TailColonVars_30);
                            }
#line 1499 "prog_io_util.m"
                          }
#line 1498 "prog_io_util.m"
                      }
#line 1505 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1503 "prog_io_util.m"
                      {
#line 1503 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_70_70;
#line 1503 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Spec_91;

#line 1502 "prog_io_util.m"
                        {
#line 1502 "prog_io_util.m"
                          parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_91);
                        }
#line 1504 "prog_io_util.m"
                        {
#line 1504 "prog_io_util.m"
                          parse_tree__prog_io_util__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1504 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_91));
#line 1504 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1504 "prog_io_util.m"
                        }
#line 1504 "prog_io_util.m"
                        {
#line 1504 "prog_io_util.m"
                          MR_Word base;
#line 1504 "prog_io_util.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1504 "prog_io_util.m"
                          *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1504 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_70_70));
#line 1504 "prog_io_util.m"
                        }
#line 1503 "prog_io_util.m"
                      }
#line 1505 "prog_io_util.m"
                    else
#line 1506 "prog_io_util.m"
                      {
#line 1506 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__ColonVars_37;

#line 1506 "prog_io_util.m"
                        {
#line 1506 "prog_io_util.m"
                          parse_tree__prog_io_util__ColonVars_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1506 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ColonVars_37, 0) = ((MR_Box) (parse_tree__prog_io_util__SV_94));
#line 1506 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ColonVars_37, 1) = ((MR_Box) (parse_tree__prog_io_util__TailColonVars_30));
#line 1506 "prog_io_util.m"
                        }
#line 1507 "prog_io_util.m"
                        {
#line 1507 "prog_io_util.m"
                          MR_Word base;
#line 1507 "prog_io_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1507 "prog_io_util.m"
                          *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1507 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__TailVars_27));
#line 1507 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_28));
#line 1507 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_util__TailDotVars_29));
#line 1507 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_io_util__ColonVars_37));
#line 1507 "prog_io_util.m"
                        }
#line 1506 "prog_io_util.m"
                      }
#line 1495 "prog_io_util.m"
                  }
#line 1462 "prog_io_util.m"
                  break;
#line 1462 "prog_io_util.m"
              }
#line 1511 "prog_io_util.m"
            else
#line 1512 "prog_io_util.m"
              {
#line 1512 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TypeInfo_118_118;
#line 1512 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TypeInfo_120_120;
#line 1512 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TypeInfo_122_122;
#line 1512 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__HeadSpecs_38;
#line 1512 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailSpecs_39;
#line 1512 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_78_78;

#line 20290 "parse_tree.prog_io_util.c"
                {
#line 20292 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__TypeInfo_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 20294 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_118_118, 0) = ((MR_Box) (&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_ordinary_state_dot_colon_var_1));
#line 20296 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_118_118, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 20298 "parse_tree.prog_io_util.c"
                }
#line 1512 "prog_io_util.m"
                {
#line 1512 "prog_io_util.m"
                  parse_tree__prog_io_util__HeadSpecs_38 = parse_tree__prog_io_util__get_any_errors1_1_f_0(parse_tree__prog_io_util__TypeInfo_118_118, (MR_Word) parse_tree__prog_io_util__MaybeHeadVar_23);
                }
#line 20305 "parse_tree.prog_io_util.c"
                {
#line 20307 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__TypeInfo_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 20309 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_120_120, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 20311 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_120_120, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_96));
#line 20313 "parse_tree.prog_io_util.c"
                }
#line 20315 "parse_tree.prog_io_util.c"
                {
#line 20317 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__TypeInfo_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 20319 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_122_122, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 20321 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_122_122, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_120_120));
#line 20323 "parse_tree.prog_io_util.c"
                }
#line 1513 "prog_io_util.m"
                {
#line 1513 "prog_io_util.m"
                  parse_tree__prog_io_util__TailSpecs_39 = parse_tree__prog_io_util__get_any_errors4_1_f_0(parse_tree__prog_io_util__TypeInfo_122_122, parse_tree__prog_io_util__TypeInfo_122_122, parse_tree__prog_io_util__TypeInfo_122_122, parse_tree__prog_io_util__TypeInfo_122_122, (MR_Word) parse_tree__prog_io_util__MaybeTailVars_25);
                }
#line 1514 "prog_io_util.m"
                {
#line 1514 "prog_io_util.m"
                  parse_tree__prog_io_util__V_78_78 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_util__HeadSpecs_38, parse_tree__prog_io_util__TailSpecs_39);
                }
#line 1514 "prog_io_util.m"
                {
#line 1514 "prog_io_util.m"
                  MR_Word base;
#line 1514 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1514 "prog_io_util.m"
                  *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1514 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_78_78));
#line 1514 "prog_io_util.m"
                }
#line 1512 "prog_io_util.m"
              }
#line 1443 "prog_io_util.m"
          }
#line 1516 "prog_io_util.m"
        else
#line 1518 "prog_io_util.m"
          {
#line 1518 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_80_80;
#line 1518 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Spec_95;

#line 1517 "prog_io_util.m"
            {
#line 1517 "prog_io_util.m"
              parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_96, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "list of variables and/or state variables", parse_tree__prog_io_util__Term_5, &parse_tree__prog_io_util__Spec_95);
            }
#line 1519 "prog_io_util.m"
            {
#line 1519 "prog_io_util.m"
              parse_tree__prog_io_util__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1519 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_95));
#line 1519 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1519 "prog_io_util.m"
            }
#line 1519 "prog_io_util.m"
            {
#line 1519 "prog_io_util.m"
              MR_Word base;
#line 1519 "prog_io_util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1519 "prog_io_util.m"
              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1519 "prog_io_util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_80_80));
#line 1519 "prog_io_util.m"
            }
#line 1518 "prog_io_util.m"
          }
#line 1516 "prog_io_util.m"
      }
#line 1422 "prog_io_util.m"
  }
#line 103 "prog_io_util.m"
}

#line 94 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_quantifier_vars_4_p_0(
#line 94 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_62,
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
#line 1359 "prog_io_util.m"
  {
#line 1359 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1357 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_32_32;
#line 1357 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_33_33;
#line 1357 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_34_34;
#line 1357 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 1357 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1357 "prog_io_util.m"
      {
#line 1357 "prog_io_util.m"
        parse_tree__prog_io_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 1357 "prog_io_util.m"
        parse_tree__prog_io_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 1357 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 1357 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1357 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1357 "prog_io_util.m"
          {
#line 1357 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_32_32)) == (MR_mktag((MR_Integer) 0)));
#line 1357 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1357 "prog_io_util.m"
              {
#line 1357 "prog_io_util.m"
                parse_tree__prog_io_util__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_32_32, (MR_Integer) 0)));
#line 1357 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_33_33, (MR_String) "[]") == 0);
#line 1357 "prog_io_util.m"
              }
#line 1357 "prog_io_util.m"
          }
#line 1357 "prog_io_util.m"
      }
#line 1359 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1358 "prog_io_util.m"
      {
#line 1358 "prog_io_util.m"
        *parse_tree__prog_io_util__MaybeVars_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[14]);
#line 1358 "prog_io_util.m"
      }
#line 1359 "prog_io_util.m"
    else
#line 1407 "prog_io_util.m"
      {
#line 1407 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__HeadTerm_10;
#line 1407 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TailTerm_11;
#line 1359 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_37_37;
#line 1359 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_38_38;
#line 1359 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_39_39;
#line 1359 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_40_40;
#line 1359 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_41_41;
#line 1359 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_12_12;

#line 1359 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1359 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1359 "prog_io_util.m"
          {
#line 1359 "prog_io_util.m"
            parse_tree__prog_io_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 1359 "prog_io_util.m"
            parse_tree__prog_io_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 1359 "prog_io_util.m"
            parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 1359 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_37_37)) == (MR_mktag((MR_Integer) 0)));
#line 1359 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1359 "prog_io_util.m"
              {
#line 1359 "prog_io_util.m"
                parse_tree__prog_io_util__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_37_37, (MR_Integer) 0)));
#line 1359 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_38_38, (MR_String) "[|]") == 0);
#line 1359 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1359 "prog_io_util.m"
                  {
#line 1359 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 1359 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1359 "prog_io_util.m"
                      {
#line 1359 "prog_io_util.m"
                        parse_tree__prog_io_util__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_39_39, (MR_Integer) 0)));
#line 1359 "prog_io_util.m"
                        parse_tree__prog_io_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_39_39, (MR_Integer) 1)));
#line 1359 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 1359 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1359 "prog_io_util.m"
                          {
#line 1359 "prog_io_util.m"
                            parse_tree__prog_io_util__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_40_40, (MR_Integer) 0)));
#line 1359 "prog_io_util.m"
                            parse_tree__prog_io_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_40_40, (MR_Integer) 1)));
#line 1359 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1359 "prog_io_util.m"
                          }
#line 1359 "prog_io_util.m"
                      }
#line 1359 "prog_io_util.m"
                  }
#line 1359 "prog_io_util.m"
              }
#line 1359 "prog_io_util.m"
          }
#line 1407 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1374 "prog_io_util.m"
          {
#line 1374 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__MaybeHeadVar_19;
#line 1374 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__MaybeTailVars_21;
#line 1370 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__VarKind0_15;
#line 1402 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__VarKind_22;
#line 1402 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TailVars_23;
#line 1402 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TailStateVars_24;

#line 1364 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadTerm_10)) == (MR_mktag((MR_Integer) 0))))
#line 1365 "prog_io_util.m"
              {
#line 1365 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__SV0_16;
#line 1365 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 1365 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__V_43_43;
#line 1365 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));
#line 1365 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_45_45;
#line 1365 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_46_46;
#line 1365 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 2)));
#line 1365 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_17_17;

#line 1365 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_42_42)) == (MR_mktag((MR_Integer) 0)));
#line 1365 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1365 "prog_io_util.m"
                  {
#line 1365 "prog_io_util.m"
                    parse_tree__prog_io_util__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_42_42, (MR_Integer) 0)));
#line 1365 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_43_43, (MR_String) "!") == 0);
#line 1365 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1365 "prog_io_util.m"
                      {
#line 1365 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_44_44)) == (MR_mktag((MR_Integer) 1)));
#line 1365 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1365 "prog_io_util.m"
                          {
#line 1365 "prog_io_util.m"
                            parse_tree__prog_io_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_44_44, (MR_Integer) 0)));
#line 1365 "prog_io_util.m"
                            parse_tree__prog_io_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_44_44, (MR_Integer) 1)));
#line 1365 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1365 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1365 "prog_io_util.m"
                              {
#line 1365 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_45_45)) == (MR_mktag((MR_Integer) 1)));
#line 1365 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 1365 "prog_io_util.m"
                                  {
#line 1365 "prog_io_util.m"
                                    parse_tree__prog_io_util__SV0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, (MR_Integer) 0)));
#line 1365 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, (MR_Integer) 1)));
#line 1366 "prog_io_util.m"
                                    {
#line 1366 "prog_io_util.m"
                                      parse_tree__prog_io_util__VarKind0_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1366 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarKind0_15, 0) = ((MR_Box) (parse_tree__prog_io_util__SV0_16));
#line 1366 "prog_io_util.m"
                                    }
#line 1366 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1365 "prog_io_util.m"
                                  }
#line 1365 "prog_io_util.m"
                              }
#line 1365 "prog_io_util.m"
                          }
#line 1365 "prog_io_util.m"
                      }
#line 1365 "prog_io_util.m"
                  }
#line 1365 "prog_io_util.m"
              }
#line 1364 "prog_io_util.m"
            else
#line 1362 "prog_io_util.m"
              {
#line 1362 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 1362 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));

#line 1363 "prog_io_util.m"
                {
#line 1363 "prog_io_util.m"
                  parse_tree__prog_io_util__VarKind0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1363 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__VarKind0_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V0_13));
#line 1363 "prog_io_util.m"
                }
#line 1362 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1362 "prog_io_util.m"
              }
#line 1370 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1369 "prog_io_util.m"
              {
#line 1369 "prog_io_util.m"
                parse_tree__prog_io_util__MaybeHeadVar_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1369 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeHeadVar_19, 0) = ((MR_Box) (parse_tree__prog_io_util__VarKind0_15));
#line 1369 "prog_io_util.m"
              }
#line 1370 "prog_io_util.m"
            else
#line 1372 "prog_io_util.m"
              {
#line 1372 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__HeadSpec_20;
#line 1372 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_48_48;

#line 1371 "prog_io_util.m"
                {
#line 1371 "prog_io_util.m"
                  parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_62, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "variable or state variable", parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__HeadSpec_20);
                }
#line 1373 "prog_io_util.m"
                {
#line 1373 "prog_io_util.m"
                  parse_tree__prog_io_util__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1373 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadSpec_20));
#line 1373 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1373 "prog_io_util.m"
                }
#line 1373 "prog_io_util.m"
                {
#line 1373 "prog_io_util.m"
                  parse_tree__prog_io_util__MaybeHeadVar_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1373 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__MaybeHeadVar_19, 0) = ((MR_Box) (parse_tree__prog_io_util__V_48_48));
#line 1373 "prog_io_util.m"
                }
#line 1372 "prog_io_util.m"
              }
#line 1375 "prog_io_util.m"
            {
#line 1375 "prog_io_util.m"
              parse_tree__prog_io_util__parse_quantifier_vars_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_62, parse_tree__prog_io_util__TailTerm_11, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__MaybeTailVars_21);
            }
#line 1378 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeHeadVar_19)) == (MR_mktag((MR_Integer) 1)));
#line 1378 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1378 "prog_io_util.m"
              {
#line 1378 "prog_io_util.m"
                parse_tree__prog_io_util__VarKind_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeHeadVar_19, (MR_Integer) 0)));
#line 1379 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeTailVars_21)) == (MR_mktag((MR_Integer) 1)));
#line 1379 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1379 "prog_io_util.m"
                  {
#line 1379 "prog_io_util.m"
                    parse_tree__prog_io_util__TailVars_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeTailVars_21, (MR_Integer) 0)));
#line 1379 "prog_io_util.m"
                    parse_tree__prog_io_util__TailStateVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeTailVars_21, (MR_Integer) 1)));
#line 1379 "prog_io_util.m"
                  }
#line 1378 "prog_io_util.m"
              }
#line 1402 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1391 "prog_io_util.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_util__VarKind_22)) == (MR_mktag((MR_Integer) 0))))
#line 1382 "prog_io_util.m"
                {
#line 1382 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__VarKind_22, (MR_Integer) 0)));
#line 1383 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__TypeInfo_64_64;

#line 20746 "parse_tree.prog_io_util.c"
                  {
#line 20748 "parse_tree.prog_io_util.c"
                    parse_tree__prog_io_util__TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 20750 "parse_tree.prog_io_util.c"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_64_64, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 20752 "parse_tree.prog_io_util.c"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_64_64, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_62));
#line 20754 "parse_tree.prog_io_util.c"
                  }
#line 1383 "prog_io_util.m"
                  {
#line 1383 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_62, parse_tree__prog_io_util__TypeInfo_64_64, parse_tree__prog_io_util__V_25, parse_tree__prog_io_util__TailVars_23);
                  }
#line 1387 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 1385 "prog_io_util.m"
                    {
#line 1385 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__Spec_26;
#line 1385 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__V_52_52;

#line 1384 "prog_io_util.m"
                      {
#line 1384 "prog_io_util.m"
                        parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_62, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_26);
                      }
#line 1386 "prog_io_util.m"
                      {
#line 1386 "prog_io_util.m"
                        parse_tree__prog_io_util__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1386 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_26));
#line 1386 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1386 "prog_io_util.m"
                      }
#line 1386 "prog_io_util.m"
                      {
#line 1386 "prog_io_util.m"
                        MR_Word base;
#line 1386 "prog_io_util.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1386 "prog_io_util.m"
                        *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1386 "prog_io_util.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_52_52));
#line 1386 "prog_io_util.m"
                      }
#line 1385 "prog_io_util.m"
                    }
#line 1387 "prog_io_util.m"
                  else
#line 1388 "prog_io_util.m"
                    {
#line 1388 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__Vars_27;

#line 1388 "prog_io_util.m"
                      {
#line 1388 "prog_io_util.m"
                        parse_tree__prog_io_util__Vars_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1388 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_27, 0) = ((MR_Box) (parse_tree__prog_io_util__V_25));
#line 1388 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_27, 1) = ((MR_Box) (parse_tree__prog_io_util__TailVars_23));
#line 1388 "prog_io_util.m"
                      }
#line 1389 "prog_io_util.m"
                      {
#line 1389 "prog_io_util.m"
                        MR_Word base;
#line 1389 "prog_io_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1389 "prog_io_util.m"
                        *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1389 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Vars_27));
#line 1389 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_24));
#line 1389 "prog_io_util.m"
                      }
#line 1388 "prog_io_util.m"
                    }
#line 1382 "prog_io_util.m"
                }
#line 1391 "prog_io_util.m"
              else
#line 1392 "prog_io_util.m"
                {
#line 1392 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__SV_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarKind_22, (MR_Integer) 0)));
#line 1393 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__TypeInfo_66_66;

#line 20843 "parse_tree.prog_io_util.c"
                  {
#line 20845 "parse_tree.prog_io_util.c"
                    parse_tree__prog_io_util__TypeInfo_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 20847 "parse_tree.prog_io_util.c"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_66_66, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 20849 "parse_tree.prog_io_util.c"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_66_66, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_62));
#line 20851 "parse_tree.prog_io_util.c"
                  }
#line 1393 "prog_io_util.m"
                  {
#line 1393 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_62, parse_tree__prog_io_util__TypeInfo_66_66, parse_tree__prog_io_util__SV_28, parse_tree__prog_io_util__TailStateVars_24);
                  }
#line 1397 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 1395 "prog_io_util.m"
                    {
#line 1395 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__V_50_50;
#line 1395 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__Spec_58;

#line 1394 "prog_io_util.m"
                      {
#line 1394 "prog_io_util.m"
                        parse_tree__prog_io_util__generate_repeated_state_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_62, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_58);
                      }
#line 1396 "prog_io_util.m"
                      {
#line 1396 "prog_io_util.m"
                        parse_tree__prog_io_util__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1396 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_58));
#line 1396 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1396 "prog_io_util.m"
                      }
#line 1396 "prog_io_util.m"
                      {
#line 1396 "prog_io_util.m"
                        MR_Word base;
#line 1396 "prog_io_util.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1396 "prog_io_util.m"
                        *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1396 "prog_io_util.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_50_50));
#line 1396 "prog_io_util.m"
                      }
#line 1395 "prog_io_util.m"
                    }
#line 1397 "prog_io_util.m"
                  else
#line 1398 "prog_io_util.m"
                    {
#line 1398 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__StateVars_29;

#line 1398 "prog_io_util.m"
                      {
#line 1398 "prog_io_util.m"
                        parse_tree__prog_io_util__StateVars_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1398 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__StateVars_29, 0) = ((MR_Box) (parse_tree__prog_io_util__SV_28));
#line 1398 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__StateVars_29, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_24));
#line 1398 "prog_io_util.m"
                      }
#line 1399 "prog_io_util.m"
                      {
#line 1399 "prog_io_util.m"
                        MR_Word base;
#line 1399 "prog_io_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1399 "prog_io_util.m"
                        *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1399 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__TailVars_23));
#line 1399 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__StateVars_29));
#line 1399 "prog_io_util.m"
                      }
#line 1398 "prog_io_util.m"
                    }
#line 1392 "prog_io_util.m"
                }
#line 1402 "prog_io_util.m"
            else
#line 1403 "prog_io_util.m"
              {
#line 1403 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__HeadSpecs_30;
#line 1403 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailSpecs_31;
#line 1403 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_54_54;

#line 244 "prog_io_util.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeHeadVar_19)) == (MR_mktag((MR_Integer) 0))))
#line 245 "prog_io_util.m"
                  parse_tree__prog_io_util__HeadSpecs_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__MaybeHeadVar_19, (MR_Integer) 0)));
#line 244 "prog_io_util.m"
                else
#line 244 "prog_io_util.m"
                  parse_tree__prog_io_util__HeadSpecs_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 247 "prog_io_util.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeTailVars_21)) == (MR_mktag((MR_Integer) 0))))
#line 248 "prog_io_util.m"
                  parse_tree__prog_io_util__TailSpecs_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__MaybeTailVars_21, (MR_Integer) 0)));
#line 247 "prog_io_util.m"
                else
#line 247 "prog_io_util.m"
                  parse_tree__prog_io_util__TailSpecs_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1405 "prog_io_util.m"
                {
#line 1405 "prog_io_util.m"
                  parse_tree__prog_io_util__V_54_54 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_util__HeadSpecs_30, parse_tree__prog_io_util__TailSpecs_31);
                }
#line 1405 "prog_io_util.m"
                {
#line 1405 "prog_io_util.m"
                  MR_Word base;
#line 1405 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1405 "prog_io_util.m"
                  *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1405 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_54_54));
#line 1405 "prog_io_util.m"
                }
#line 1403 "prog_io_util.m"
              }
#line 1374 "prog_io_util.m"
          }
#line 1407 "prog_io_util.m"
        else
#line 1409 "prog_io_util.m"
          {
#line 1409 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_56_56;
#line 1409 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Spec_61;

#line 1408 "prog_io_util.m"
            {
#line 1408 "prog_io_util.m"
              parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_62, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "list of variables and/or state variables", parse_tree__prog_io_util__Term_5, &parse_tree__prog_io_util__Spec_61);
            }
#line 1410 "prog_io_util.m"
            {
#line 1410 "prog_io_util.m"
              parse_tree__prog_io_util__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1410 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_61));
#line 1410 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1410 "prog_io_util.m"
            }
#line 1410 "prog_io_util.m"
            {
#line 1410 "prog_io_util.m"
              MR_Word base;
#line 1410 "prog_io_util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1410 "prog_io_util.m"
              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1410 "prog_io_util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_56_56));
#line 1410 "prog_io_util.m"
            }
#line 1409 "prog_io_util.m"
          }
#line 1407 "prog_io_util.m"
      }
#line 1359 "prog_io_util.m"
  }
#line 94 "prog_io_util.m"
}

#line 87 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_vars_4_p_0(
#line 87 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_46,
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
#line 1318 "prog_io_util.m"
  {
#line 1318 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1316 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_27_27;
#line 1316 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_28_28;
#line 1316 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_29_29;
#line 1316 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 1316 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1316 "prog_io_util.m"
      {
#line 1316 "prog_io_util.m"
        parse_tree__prog_io_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 1316 "prog_io_util.m"
        parse_tree__prog_io_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 1316 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 1316 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1316 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1316 "prog_io_util.m"
          {
#line 1316 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_27_27)) == (MR_mktag((MR_Integer) 0)));
#line 1316 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1316 "prog_io_util.m"
              {
#line 1316 "prog_io_util.m"
                parse_tree__prog_io_util__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, (MR_Integer) 0)));
#line 1316 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_28_28, (MR_String) "[]") == 0);
#line 1316 "prog_io_util.m"
              }
#line 1316 "prog_io_util.m"
          }
#line 1316 "prog_io_util.m"
      }
#line 1318 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1317 "prog_io_util.m"
      {
#line 1317 "prog_io_util.m"
        *parse_tree__prog_io_util__MaybeVars_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[0]);
#line 1317 "prog_io_util.m"
      }
#line 1318 "prog_io_util.m"
    else
#line 1346 "prog_io_util.m"
      {
#line 1346 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__HeadTerm_10;
#line 1346 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TailTerm_11;
#line 1318 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_31_31;
#line 1318 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_32_32;
#line 1318 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_33_33;
#line 1318 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_34_34;
#line 1318 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_35_35;
#line 1318 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_12_12;

#line 1318 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1318 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1318 "prog_io_util.m"
          {
#line 1318 "prog_io_util.m"
            parse_tree__prog_io_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 1318 "prog_io_util.m"
            parse_tree__prog_io_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 1318 "prog_io_util.m"
            parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 1318 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_31_31)) == (MR_mktag((MR_Integer) 0)));
#line 1318 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1318 "prog_io_util.m"
              {
#line 1318 "prog_io_util.m"
                parse_tree__prog_io_util__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_31_31, (MR_Integer) 0)));
#line 1318 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_32_32, (MR_String) "[|]") == 0);
#line 1318 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1318 "prog_io_util.m"
                  {
#line 1318 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 1318 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1318 "prog_io_util.m"
                      {
#line 1318 "prog_io_util.m"
                        parse_tree__prog_io_util__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, (MR_Integer) 0)));
#line 1318 "prog_io_util.m"
                        parse_tree__prog_io_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, (MR_Integer) 1)));
#line 1318 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1318 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1318 "prog_io_util.m"
                          {
#line 1318 "prog_io_util.m"
                            parse_tree__prog_io_util__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
#line 1318 "prog_io_util.m"
                            parse_tree__prog_io_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 1)));
#line 1318 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1318 "prog_io_util.m"
                          }
#line 1318 "prog_io_util.m"
                      }
#line 1318 "prog_io_util.m"
                  }
#line 1318 "prog_io_util.m"
              }
#line 1318 "prog_io_util.m"
          }
#line 1346 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1327 "prog_io_util.m"
          {
#line 1327 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__MaybeHeadVar_15;
#line 1327 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__MaybeTailVars_20;
#line 1341 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__HeadVar_21;
#line 1341 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TailVars_22;

#line 1322 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadTerm_10)) == (MR_mktag((MR_Integer) 0))))
#line 1323 "prog_io_util.m"
              {
#line 1323 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__HeadSpec_19;
#line 1323 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_37_37;

#line 1324 "prog_io_util.m"
                {
#line 1324 "prog_io_util.m"
                  parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_46, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "variable", parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__HeadSpec_19);
                }
#line 1326 "prog_io_util.m"
                {
#line 1326 "prog_io_util.m"
                  parse_tree__prog_io_util__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1326 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadSpec_19));
#line 1326 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1326 "prog_io_util.m"
                }
#line 1326 "prog_io_util.m"
                {
#line 1326 "prog_io_util.m"
                  parse_tree__prog_io_util__MaybeHeadVar_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1326 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__MaybeHeadVar_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_37_37));
#line 1326 "prog_io_util.m"
                }
#line 1323 "prog_io_util.m"
              }
#line 1322 "prog_io_util.m"
            else
#line 1320 "prog_io_util.m"
              {
#line 1320 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__HeadVar0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 1320 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));

#line 1321 "prog_io_util.m"
                {
#line 1321 "prog_io_util.m"
                  parse_tree__prog_io_util__MaybeHeadVar_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1321 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeHeadVar_15, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadVar0_13));
#line 1321 "prog_io_util.m"
                }
#line 1320 "prog_io_util.m"
              }
#line 1328 "prog_io_util.m"
            {
#line 1328 "prog_io_util.m"
              parse_tree__prog_io_util__parse_vars_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_46, parse_tree__prog_io_util__TailTerm_11, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__MaybeTailVars_20);
            }
#line 1330 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeHeadVar_15)) == (MR_mktag((MR_Integer) 1)));
#line 1330 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1330 "prog_io_util.m"
              {
#line 1330 "prog_io_util.m"
                parse_tree__prog_io_util__HeadVar_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeHeadVar_15, (MR_Integer) 0)));
#line 1331 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeTailVars_20)) == (MR_mktag((MR_Integer) 1)));
#line 1331 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1331 "prog_io_util.m"
                  parse_tree__prog_io_util__TailVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeTailVars_20, (MR_Integer) 0)));
#line 1330 "prog_io_util.m"
              }
#line 1341 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1337 "prog_io_util.m"
              {
#line 1333 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TypeInfo_48_48;

#line 21265 "parse_tree.prog_io_util.c"
                {
#line 21267 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__TypeInfo_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 21269 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_48_48, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 21271 "parse_tree.prog_io_util.c"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_48_48, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_46));
#line 21273 "parse_tree.prog_io_util.c"
                }
#line 1333 "prog_io_util.m"
                {
#line 1333 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_46, parse_tree__prog_io_util__TypeInfo_48_48, parse_tree__prog_io_util__HeadVar_21, parse_tree__prog_io_util__TailVars_22);
                }
#line 1337 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1335 "prog_io_util.m"
                  {
#line 1335 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Spec_23;
#line 1335 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_39_39;

#line 1334 "prog_io_util.m"
                    {
#line 1334 "prog_io_util.m"
                      parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_46, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_23);
                    }
#line 1336 "prog_io_util.m"
                    {
#line 1336 "prog_io_util.m"
                      parse_tree__prog_io_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1336 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_23));
#line 1336 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1336 "prog_io_util.m"
                    }
#line 1336 "prog_io_util.m"
                    {
#line 1336 "prog_io_util.m"
                      MR_Word base;
#line 1336 "prog_io_util.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1336 "prog_io_util.m"
                      *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1336 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_39_39));
#line 1336 "prog_io_util.m"
                    }
#line 1335 "prog_io_util.m"
                  }
#line 1337 "prog_io_util.m"
                else
#line 1338 "prog_io_util.m"
                  {
#line 1338 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Vars_24;

#line 1338 "prog_io_util.m"
                    {
#line 1338 "prog_io_util.m"
                      parse_tree__prog_io_util__Vars_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1338 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_24, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadVar_21));
#line 1338 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_24, 1) = ((MR_Box) (parse_tree__prog_io_util__TailVars_22));
#line 1338 "prog_io_util.m"
                    }
#line 1339 "prog_io_util.m"
                    {
#line 1339 "prog_io_util.m"
                      MR_Word base;
#line 1339 "prog_io_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1339 "prog_io_util.m"
                      *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1339 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Vars_24));
#line 1339 "prog_io_util.m"
                    }
#line 1338 "prog_io_util.m"
                  }
#line 1337 "prog_io_util.m"
              }
#line 1341 "prog_io_util.m"
            else
#line 1342 "prog_io_util.m"
              {
#line 1342 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__HeadSpecs_25;
#line 1342 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailSpecs_26;
#line 1342 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_41_41;

#line 244 "prog_io_util.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeHeadVar_15)) == (MR_mktag((MR_Integer) 0))))
#line 245 "prog_io_util.m"
                  parse_tree__prog_io_util__HeadSpecs_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__MaybeHeadVar_15, (MR_Integer) 0)));
#line 244 "prog_io_util.m"
                else
#line 244 "prog_io_util.m"
                  parse_tree__prog_io_util__HeadSpecs_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 244 "prog_io_util.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeTailVars_20)) == (MR_mktag((MR_Integer) 0))))
#line 245 "prog_io_util.m"
                  parse_tree__prog_io_util__TailSpecs_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__MaybeTailVars_20, (MR_Integer) 0)));
#line 244 "prog_io_util.m"
                else
#line 244 "prog_io_util.m"
                  parse_tree__prog_io_util__TailSpecs_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1344 "prog_io_util.m"
                {
#line 1344 "prog_io_util.m"
                  parse_tree__prog_io_util__V_41_41 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_util__HeadSpecs_25, parse_tree__prog_io_util__TailSpecs_26);
                }
#line 1344 "prog_io_util.m"
                {
#line 1344 "prog_io_util.m"
                  MR_Word base;
#line 1344 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1344 "prog_io_util.m"
                  *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1344 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_41_41));
#line 1344 "prog_io_util.m"
                }
#line 1342 "prog_io_util.m"
              }
#line 1327 "prog_io_util.m"
          }
#line 1346 "prog_io_util.m"
        else
#line 1348 "prog_io_util.m"
          {
#line 1348 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_43_43;
#line 1348 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Spec_45;

#line 1347 "prog_io_util.m"
            {
#line 1347 "prog_io_util.m"
              parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_46, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "list of variables", parse_tree__prog_io_util__Term_5, &parse_tree__prog_io_util__Spec_45);
            }
#line 1349 "prog_io_util.m"
            {
#line 1349 "prog_io_util.m"
              parse_tree__prog_io_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1349 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_45));
#line 1349 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1349 "prog_io_util.m"
            }
#line 1349 "prog_io_util.m"
            {
#line 1349 "prog_io_util.m"
              MR_Word base;
#line 1349 "prog_io_util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1349 "prog_io_util.m"
              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1349 "prog_io_util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_43_43));
#line 1349 "prog_io_util.m"
            }
#line 1348 "prog_io_util.m"
          }
#line 1346 "prog_io_util.m"
      }
#line 1318 "prog_io_util.m"
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
#line 1309 "prog_io_util.m"
  {
#line 1309 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 1309 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_20_20;
#line 1309 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_21_21;
#line 1309 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_22_22;
#line 1309 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_19_19;

#line 1309 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1309 "prog_io_util.m"
      {
#line 1309 "prog_io_util.m"
        parse_tree__prog_io_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1309 "prog_io_util.m"
        parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1309 "prog_io_util.m"
        parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1309 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_21_21)) == (MR_mktag((MR_Integer) 0)));
#line 1309 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1309 "prog_io_util.m"
          {
#line 1309 "prog_io_util.m"
            parse_tree__prog_io_util__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_21_21, (MR_Integer) 0)));
#line 1309 "prog_io_util.m"
            if ((parse_tree__prog_io_util__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1309 "prog_io_util.m"
              {
#line 1309 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_22_22, (MR_String) "[]") == 0);
#line 1309 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1309 "prog_io_util.m"
                  {
#line 1309 "prog_io_util.m"
                    *parse_tree__prog_io_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1309 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1309 "prog_io_util.m"
                  }
#line 1309 "prog_io_util.m"
              }
#line 1309 "prog_io_util.m"
            else
#line 1311 "prog_io_util.m"
              {
#line 1311 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Head_7;
#line 1311 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Tail_8;
#line 1311 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Var_10;
#line 1311 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Vars_11;
#line 1311 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_16_16;
#line 1311 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_17_17;
#line 1312 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_12_12;

#line 1310 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_22_22, (MR_String) "[|]") == 0);
#line 1311 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1311 "prog_io_util.m"
                  {
#line 1310 "prog_io_util.m"
                    parse_tree__prog_io_util__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, (MR_Integer) 0)));
#line 1310 "prog_io_util.m"
                    parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, (MR_Integer) 1)));
#line 1310 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 1310 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1310 "prog_io_util.m"
                      {
#line 1310 "prog_io_util.m"
                        parse_tree__prog_io_util__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
#line 1310 "prog_io_util.m"
                        parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
#line 1310 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1311 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1311 "prog_io_util.m"
                          {
#line 1312 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Head_7)) == (MR_mktag((MR_Integer) 1)));
#line 1312 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1312 "prog_io_util.m"
                              {
#line 1312 "prog_io_util.m"
                                parse_tree__prog_io_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Head_7, (MR_Integer) 0)));
#line 1312 "prog_io_util.m"
                                parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Head_7, (MR_Integer) 1)));
#line 1313 "prog_io_util.m"
                                {
#line 1313 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_list_of_vars_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_18, parse_tree__prog_io_util__Tail_8, &parse_tree__prog_io_util__Vars_11);
                                }
#line 1311 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 1311 "prog_io_util.m"
                                  {
#line 1311 "prog_io_util.m"
                                    {
#line 1311 "prog_io_util.m"
                                      MR_Word base;
#line 1311 "prog_io_util.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1311 "prog_io_util.m"
                                      *parse_tree__prog_io_util__HeadVar__2_2 = base;
#line 1311 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Var_10));
#line 1311 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Vars_11));
#line 1311 "prog_io_util.m"
                                    }
#line 1311 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1311 "prog_io_util.m"
                                  }
#line 1312 "prog_io_util.m"
                              }
#line 1311 "prog_io_util.m"
                          }
#line 1310 "prog_io_util.m"
                      }
#line 1311 "prog_io_util.m"
                  }
#line 1311 "prog_io_util.m"
              }
#line 1309 "prog_io_util.m"
          }
#line 1309 "prog_io_util.m"
      }
#line 1309 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1309 "prog_io_util.m"
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
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_known_compound_inst_kind_1);
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_known_compound_type_kind_1);
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_known_inst_kind_1);
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_known_type_kind_1);
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
