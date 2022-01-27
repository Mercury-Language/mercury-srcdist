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



#line 954 "prog_io_util.m"
struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s {
#line 957 "prog_io_util.m"
  MR_bool parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded;
#line 957 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23;
#line 957 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__Functors_11;
#line 963 "prog_io_util.m"
  jmp_buf parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__commit_0;
#line 963 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13;
#line 963 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F1_14;
#line 963 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F2_15;
#line 963 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__ConsId_17;
#line 963 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20;
#line 963 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_24_24;
#line 954 "prog_io_util.m"
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
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_inst_kind_1_0[1];

#line 256 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_0;

#line 259 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_known_compound_inst_kind_1__pseudo_1;

#line 262 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_inst_kind_1_1[1];

#line 265 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_1;

#line 268 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_2;

#line 271 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_0[1];

#line 274 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_1[1];

#line 277 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_2[1];

#line 280 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_known_inst_kind_1[3];

#line 283 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_inst_kind_1[3];

#line 286 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_inst_kind_1[3];

#line 289 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 292 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe1_1_0[1];

#line 295 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe1_1_0;

#line 298 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe1_1_1[1];

#line 301 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe1_1_1;

#line 304 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe1_1_0[1];

#line 307 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe1_1_1[1];

#line 310 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_maybe1_1[2];

#line 313 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe1_1[2];

#line 316 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe1_1[2];

#line 319 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe2_2_0[1];

#line 322 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe2_2_0;

#line 325 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe2_2_1[2];

#line 328 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe2_2_1;

#line 331 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe2_2_0[1];

#line 334 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe2_2_1[1];

#line 337 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_maybe2_2[2];

#line 340 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe2_2[2];

#line 343 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe2_2[2];

#line 346 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe3_3_0[1];

#line 349 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe3_3_0;

#line 352 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe3_3_1[3];

#line 355 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe3_3_1;

#line 358 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe3_3_0[1];

#line 361 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe3_3_1[1];

#line 364 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_maybe3_3[2];

#line 367 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe3_3[2];

#line 370 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe3_3[2];

#line 373 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe4_4_0[1];

#line 376 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe4_4_0;

#line 379 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe4_4_1[4];

#line 382 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe4_4_1;

#line 385 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe4_4_0[1];

#line 388 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe4_4_1[1];

#line 391 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_maybe4_4[2];

#line 394 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe4_4[2];

#line 397 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe4_4[2];

#line 400 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_term_1__pseudo_1;

#line 403 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1;

#line 406 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1;

#line 409 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0;

#line 412 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__prog_io_util__ti_maybe2_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0;

#line 415 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__list__pti_list_1__pseudo_1;

#line 418 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__maybe__pti_maybe_1__pseudo_1;

#line 421 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1;

#line 424 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1;

#line 427 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_var_1__pseudo_1;

#line 430 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_0[1];

#line 433 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_0;

#line 436 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_1[1];

#line 439 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_1;

#line 442 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_2[1];

#line 445 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_2;

#line 448 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_3[1];

#line 451 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_3;

#line 454 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_0[1];

#line 457 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_1[1];

#line 460 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_2[1];

#line 463 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_3[1];

#line 466 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_ordinary_state_dot_colon_var_1[4];

#line 469 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_dot_colon_var_1[4];

#line 472 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_dot_colon_var_1[4];

#line 475 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_0[1];

#line 478 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_0;

#line 481 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_1[1];

#line 484 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_1;

#line 487 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_0[1];

#line 490 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_1[1];

#line 493 "parse_tree.prog_io_util.c"
static const MR_DuPtagLayout parse_tree__prog_io_util__parse_tree__prog_io_util__du_ptag_ordered_ordinary_state_var_1[2];

#line 496 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_var_1[2];

#line 499 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_var_1[2];

#line 502 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe1_1__pseudo_1;

#line 505 "parse_tree.prog_io_util.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_parse_tree__prog_io_util__pti_maybe1_1__pseudo_1;

#line 508 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_0;

#line 511 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_1;

#line 514 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_value_ordered_quantifier_type_0[2];

#line 517 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_name_ordered_quantifier_type_0[2];

#line 520 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_quantifier_type_0[2];

#line 523 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 526 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 529 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 532 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 535 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____allow_constrained_inst_var_0_0_10001(
#line 538 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 540 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 543 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____allow_constrained_inst_var_0_0_10001(
#line 546 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 548 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 550 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 553 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____decl_attribute_0_0_10001(
#line 556 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 558 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 561 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____decl_attribute_0_0_10001(
#line 564 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 566 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 568 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 571 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____decl_attrs_0_0_10001(
#line 574 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 576 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 579 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____decl_attrs_0_0_10001(
#line 582 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 584 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 586 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 589 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_inst_kind_1_0_10001(
#line 592 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 594 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 596 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 599 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_inst_kind_1_0_10001(
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
parse_tree__prog_io_util____Unify____maybe1_1_0_10001(
#line 636 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 638 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 640 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 643 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe1_1_0_10001(
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
parse_tree__prog_io_util____Unify____maybe2_2_0_10001(
#line 658 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 660 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 662 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 664 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 667 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe2_2_0_10001(
#line 670 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 672 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 674 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_3,
#line 676 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 678 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5);

#line 681 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe3_3_0_10001(
#line 684 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 686 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 688 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 690 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 692 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5);

#line 695 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe3_3_0_10001(
#line 698 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 700 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 702 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 704 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_4,
#line 706 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5,
#line 708 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_6);

#line 711 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe4_4_0_10001(
#line 714 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 716 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 718 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 720 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 722 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5,
#line 724 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_6);

#line 727 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe4_4_0_10001(
#line 730 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 732 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 734 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 736 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 738 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_5,
#line 740 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_6,
#line 742 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_7);

#line 745 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_1_0_10001(
#line 748 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 750 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 752 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 755 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_1_0_10001(
#line 758 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 760 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 762 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 764 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 767 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_0_0_10001(
#line 770 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 772 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 775 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_0_0_10001(
#line 778 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 780 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 782 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 785 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_pred_or_func_1_0_10001(
#line 788 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 790 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 792 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 795 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_pred_or_func_1_0_10001(
#line 798 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 800 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 802 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 804 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 807 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0_10001(
#line 810 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 812 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 814 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 817 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0_10001(
#line 820 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 822 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 824 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 826 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 829 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_var_1_0_10001(
#line 832 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 834 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 836 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 839 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_var_1_0_10001(
#line 842 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 844 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 846 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 848 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 851 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____parser_1_0_10001(
#line 854 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 856 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 858 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 861 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____parser_1_0_10001(
#line 864 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 866 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 868 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 870 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4);

#line 873 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____quantifier_type_0_0_10001(
#line 876 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 878 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 881 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____quantifier_type_0_0_10001(
#line 884 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 886 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 888 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 891 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2pvar_0_0_10001(
#line 894 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 896 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 899 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____var2pvar_0_0_10001(
#line 902 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 904 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 906 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 909 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2tvar_0_0_10001(
#line 912 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 914 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2);

#line 917 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____var2tvar_0_0_10001(
#line 920 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 922 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 924 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3);

#line 1044 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(
#line 1044 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Op_5,
#line 1044 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_6,
#line 1044 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__List0_7,
#line 1044 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__OneOrMore_8);

#line 737 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
#line 737 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Name_4,
#line 737 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Args_5,
#line 737 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__KnownInst_6);

#line 1163 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_var_1_0(
#line 1163 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_14,
#line 1163 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 1163 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 1163 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3);

#line 1163 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_var_1_0(
#line 1163 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
#line 1163 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 1163 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2);

#line 1220 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0(
#line 1220 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_38,
#line 1220 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 1220 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 1220 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3);

#line 1220 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0(
#line 1220 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_13,
#line 1220 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 1220 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2);

#line 719 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_inst_kind_1_0(
#line 719 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_18,
#line 719 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 719 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 719 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3);

#line 719 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_inst_kind_1_0(
#line 719 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_11,
#line 719 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 719 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2);

#line 712 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_inst_kind_1_0(
#line 712 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_78,
#line 712 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 712 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 712 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3);

#line 712 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_inst_kind_1_0(
#line 712 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_19,
#line 712 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 712 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2);

#line 1345 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(
#line 1345 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_43,
#line 1345 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_6,
#line 1345 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_7,
#line 1345 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Expected_8,
#line 1345 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_9,
#line 1345 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Spec_10);

#line 1325 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(
#line 1325 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_33,
#line 1325 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_5,
#line 1325 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 1325 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_7,
#line 1325 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Spec_8);

#line 1064 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__map_parser_one_or_more_4_p_0(
#line 1064 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_29,
#line 1064 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Parser_5,
#line 1064 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Head_6,
#line 1064 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Tail_7,
#line 1064 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_8);

#line 978 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_bound_inst_3_p_0(
#line 978 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_4,
#line 978 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__InstTerm_5,
#line 978 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__BoundInst_6);

#line 970 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_bound_inst_list_3_p_0(
#line 970 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
#line 970 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 970 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3);

#line 963 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_1(
#line 963 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg);

#line 963 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_2(
#line 963 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg);

#line 963 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_3(
#line 963 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg);

#line 954 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(
#line 954 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
#line 954 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Disj_6,
#line 954 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Uniqueness_7,
#line 954 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Inst_8);

#line 861 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_higher_order_inst_4_p_0(
#line 861 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
#line 861 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__BeforeIsTerm_6,
#line 861 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__DetTerm_7,
#line 861 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Inst_8);

#line 547 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_higher_order_mode_4_p_0(
#line 547 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
#line 547 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__BeforeIsTerm_6,
#line 547 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__DetTerm_7,
#line 547 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Mode_8);

#line 487 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_qualified_term_3_p_0(
#line 487 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 487 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Args_2,
#line 487 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Term_3);

#line 485 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_type_list_2_p_0_1(
#line 485 "prog_io_util.m"
  MR_Box parse_tree__prog_io_util__closure_arg,
#line 485 "prog_io_util.m"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 485 "prog_io_util.m"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2);

#line 482 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_type_list_2_p_0(
#line 482 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Types_3,
#line 482 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Terms_4);

#line 418 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__parse_higher_order_type_5_p_0(
#line 418 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term0_6,
#line 418 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__ArgTypes_7,
#line 418 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__MaybeRet_8,
#line 418 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Purity_9);

#line 393 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_types_2_5_p_0(
#line 393 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 393 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_2,
#line 393 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_3,
#line 393 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__RevTypes_4,
#line 393 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__5_5);


static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_1[27][2];

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_2[10][3];

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_3[25][1];

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_4[1][4];

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_7[1][5];


#line 944 "prog_io_util.m"
/* sealed */ struct parse_tree__prog_io_util__vector_common_type_5_0_s {
#line 944 "prog_io_util.m"
  const MR_String parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_0;
#line 944 "prog_io_util.m"
  const MR_Integer parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_1;
#line 944 "prog_io_util.m"
  const MR_Word parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_2;
#line 944 "prog_io_util.m"
};

static /* final */ const struct parse_tree__prog_io_util__vector_common_type_5_0_s parse_tree__prog_io_util_vector_common_5[32];

#line 1373 "prog_io_util.m"
/* sealed */ struct parse_tree__prog_io_util__vector_common_type_6_0_s {
#line 1373 "prog_io_util.m"
  const MR_String parse_tree__prog_io_util__vector_common_type_6_0__vct_6_f_0;
#line 1373 "prog_io_util.m"
  const MR_Integer parse_tree__prog_io_util__vector_common_type_6_0__vct_6_f_1;
#line 1373 "prog_io_util.m"
};

static /* final */ const struct parse_tree__prog_io_util__vector_common_type_6_0_s parse_tree__prog_io_util_vector_common_6[7];



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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Repeated variable"))
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

static /* final */ const MR_Box parse_tree__prog_io_util_scalar_common_3[25][1] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[22])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[5])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[23])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[6])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[7])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[24])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[8])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_util_scalar_common_1[25])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_2[9])))
  },
  /* row 24 */
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


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1814 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1822 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_0 = {
  (MR_String) "allow_constrained_inst_var",
  (MR_Integer) 0
};

#line 1828 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_1 = {
  (MR_String) "no_allow_constrained_inst_var",
  (MR_Integer) 1
};

#line 1834 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_value_ordered_allow_constrained_inst_var_0[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_1
};

#line 1840 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_name_ordered_allow_constrained_inst_var_0[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_allow_constrained_inst_var_0_1
};

#line 1846 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_allow_constrained_inst_var_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1852 "parse_tree.prog_io_util.c"
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

#line 1869 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_decl_attribute_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0
};

#line 1874 "parse_tree.prog_io_util.c"
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

#line 1889 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1897 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1905 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_decl_attribute_0_1[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_quantifier_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__ti_list_1term__ti_var_1term__type_ctor_info_generic_0
};

#line 1911 "parse_tree.prog_io_util.c"
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

#line 1926 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1934 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_decl_attribute_0_2[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_quantifier_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0
};

#line 1940 "parse_tree.prog_io_util.c"
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

#line 1955 "parse_tree.prog_io_util.c"
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

#line 1970 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_3
};

#line 1975 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_0
};

#line 1980 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_2[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_1
};

#line 1985 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_decl_attribute_0_3[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_2
};

#line 1990 "parse_tree.prog_io_util.c"
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

#line 2014 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_decl_attribute_0[4] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_2,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_1,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_decl_attribute_0_3
};

#line 2022 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_decl_attribute_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3
};

#line 2030 "parse_tree.prog_io_util.c"
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

#line 2047 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__pair__ti_pair_2parse_tree__prog_io_util__type_ctor_info_decl_attribute_0term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_decl_attribute_0,
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 2056 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1pair__ti_pair_2parse_tree__prog_io_util__type_ctor_info_decl_attribute_0term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__pair__ti_pair_2parse_tree__prog_io_util__type_ctor_info_decl_attribute_0term__type_ctor_info_context_0
  }
};

#line 2064 "parse_tree.prog_io_util.c"
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

#line 2081 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2087 "parse_tree.prog_io_util.c"
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

#line 2102 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2108 "parse_tree.prog_io_util.c"
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

#line 2123 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_2[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2128 "parse_tree.prog_io_util.c"
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

#line 2143 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_3[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2148 "parse_tree.prog_io_util.c"
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

#line 2163 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_compound_inst_kind_1_4[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2168 "parse_tree.prog_io_util.c"
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

#line 2183 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_0
};

#line 2188 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_1
};

#line 2193 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_2[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_2
};

#line 2198 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_compound_inst_kind_1_3[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_3,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_4
};

#line 2204 "parse_tree.prog_io_util.c"
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

#line 2228 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_compound_inst_kind_1[5] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_2,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_1,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_4,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_compound_inst_kind_1_3
};

#line 2237 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_compound_inst_kind_1[5] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 3
};

#line 2246 "parse_tree.prog_io_util.c"
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

#line 2263 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_inst_kind_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

#line 2268 "parse_tree.prog_io_util.c"
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

#line 2283 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_known_compound_inst_kind_1__pseudo_1 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_known_compound_inst_kind_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2291 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_known_inst_kind_1_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__pti_known_compound_inst_kind_1__pseudo_1
};

#line 2296 "parse_tree.prog_io_util.c"
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

#line 2311 "parse_tree.prog_io_util.c"
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

#line 2326 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_2
};

#line 2331 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_0
};

#line 2336 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_known_inst_kind_1_2[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_1
};

#line 2341 "parse_tree.prog_io_util.c"
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

#line 2360 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_known_inst_kind_1[3] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_2,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_1,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_known_inst_kind_1_0
};

#line 2367 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_known_inst_kind_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2374 "parse_tree.prog_io_util.c"
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

#line 2391 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2399 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe1_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 2404 "parse_tree.prog_io_util.c"
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

#line 2419 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe1_1_1[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2424 "parse_tree.prog_io_util.c"
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

#line 2439 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe1_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe1_1_0
};

#line 2444 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe1_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe1_1_1
};

#line 2449 "parse_tree.prog_io_util.c"
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

#line 2463 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe1_1[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe1_1_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe1_1_1
};

#line 2469 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe1_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2475 "parse_tree.prog_io_util.c"
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

#line 2492 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe2_2_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 2497 "parse_tree.prog_io_util.c"
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

#line 2512 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe2_2_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 2518 "parse_tree.prog_io_util.c"
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

#line 2533 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe2_2_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe2_2_0
};

#line 2538 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe2_2_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe2_2_1
};

#line 2543 "parse_tree.prog_io_util.c"
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

#line 2557 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe2_2[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe2_2_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe2_2_1
};

#line 2563 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe2_2[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2569 "parse_tree.prog_io_util.c"
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

#line 2586 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe3_3_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 2591 "parse_tree.prog_io_util.c"
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

#line 2606 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe3_3_1[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) (MR_Integer) 3
};

#line 2613 "parse_tree.prog_io_util.c"
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

#line 2628 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe3_3_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe3_3_0
};

#line 2633 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe3_3_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe3_3_1
};

#line 2638 "parse_tree.prog_io_util.c"
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

#line 2652 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe3_3[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe3_3_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe3_3_1
};

#line 2658 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe3_3[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2664 "parse_tree.prog_io_util.c"
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

#line 2681 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe4_4_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 2686 "parse_tree.prog_io_util.c"
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

#line 2701 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_maybe4_4_1[4] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) (MR_Integer) 3,
  (MR_PseudoTypeInfo) (MR_Integer) 4
};

#line 2709 "parse_tree.prog_io_util.c"
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

#line 2724 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe4_4_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe4_4_0
};

#line 2729 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_maybe4_4_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe4_4_1
};

#line 2734 "parse_tree.prog_io_util.c"
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

#line 2748 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_maybe4_4[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe4_4_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_maybe4_4_1
};

#line 2754 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_maybe4_4[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2760 "parse_tree.prog_io_util.c"
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

#line 2777 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2785 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_term_1__pseudo_1
  }
};

#line 2793 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe2_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1
  }
};

#line 2802 "parse_tree.prog_io_util.c"
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

#line 2819 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0
  }
};

#line 2827 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__prog_io_util__ti_maybe2_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe2_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__prog_io_util__list__ti_list_1term__ti_term_1term__type_ctor_info_generic_0
  }
};

#line 2836 "parse_tree.prog_io_util.c"
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

#line 2853 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2861 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__maybe__pti_maybe_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2869 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__list__pti_list_1__pseudo_1,
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__maybe__pti_maybe_1__pseudo_1
  }
};

#line 2878 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe2_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__pseudo_pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe2_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__pair__pti_pair_2__pseudo_list__pti_list_1__pseudo_1__pseudo_maybe__pti_maybe_1__pseudo_1
  }
};

#line 2887 "parse_tree.prog_io_util.c"
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

#line 2904 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2912 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 2917 "parse_tree.prog_io_util.c"
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

#line 2932 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 2937 "parse_tree.prog_io_util.c"
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

#line 2952 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 2957 "parse_tree.prog_io_util.c"
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

#line 2972 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_dot_colon_var_1_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 2977 "parse_tree.prog_io_util.c"
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

#line 2992 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_0
};

#line 2997 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_1
};

#line 3002 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_2[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_2
};

#line 3007 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_dot_colon_var_1_3[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_3
};

#line 3012 "parse_tree.prog_io_util.c"
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

#line 3036 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_dot_colon_var_1[4] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_3,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_2,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_dot_colon_var_1_1
};

#line 3044 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_dot_colon_var_1[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3052 "parse_tree.prog_io_util.c"
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

#line 3069 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 3074 "parse_tree.prog_io_util.c"
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

#line 3089 "parse_tree.prog_io_util.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_util__parse_tree__prog_io_util__field_types_ordinary_state_var_1_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__pti_var_1__pseudo_1
};

#line 3094 "parse_tree.prog_io_util.c"
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

#line 3109 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_0[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_0
};

#line 3114 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_stag_ordered_ordinary_state_var_1_1[1] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_1
};

#line 3119 "parse_tree.prog_io_util.c"
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

#line 3133 "parse_tree.prog_io_util.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__du_name_ordered_ordinary_state_var_1[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__du_functor_desc_ordinary_state_var_1_1
};

#line 3139 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_ordinary_state_var_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3145 "parse_tree.prog_io_util.c"
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

#line 3162 "parse_tree.prog_io_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe1_1__pseudo_1 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 3170 "parse_tree.prog_io_util.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io_util____vpti_pred_2__plain_term__ti_term_1term__type_ctor_info_generic_0__pseudo_parse_tree__prog_io_util__pti_maybe1_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__term__ti_term_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_io_util__parse_tree__prog_io_util__pti_maybe1_1__pseudo_1
  }
};

#line 3180 "parse_tree.prog_io_util.c"
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

#line 3197 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_0 = {
  (MR_String) "quant_type_exist",
  (MR_Integer) 0
};

#line 3203 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_1 = {
  (MR_String) "quant_type_univ",
  (MR_Integer) 1
};

#line 3209 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_value_ordered_quantifier_type_0[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_1
};

#line 3215 "parse_tree.prog_io_util.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_util__parse_tree__prog_io_util__enum_name_ordered_quantifier_type_0[2] = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_0,
  &parse_tree__prog_io_util__parse_tree__prog_io_util__enum_functor_desc_quantifier_type_0_1
};

#line 3221 "parse_tree.prog_io_util.c"
static const MR_Integer parse_tree__prog_io_util__parse_tree__prog_io_util__functor_number_map_quantifier_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3227 "parse_tree.prog_io_util.c"
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

#line 3244 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3252 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 3261 "parse_tree.prog_io_util.c"
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

#line 3278 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 3286 "parse_tree.prog_io_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_util__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &parse_tree__prog_io_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 3295 "parse_tree.prog_io_util.c"
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

#line 3312 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____allow_constrained_inst_var_0_0_10001(
#line 3315 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3317 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 3319 "parse_tree.prog_io_util.c"
{
#line 3321 "parse_tree.prog_io_util.c"
  {
#line 3323 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3326 "parse_tree.prog_io_util.c"
    {
#line 3328 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____allow_constrained_inst_var_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 3331 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3333 "parse_tree.prog_io_util.c"
  }
#line 3335 "parse_tree.prog_io_util.c"
}

#line 3338 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____allow_constrained_inst_var_0_0_10001(
#line 3341 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 3343 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3345 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3347 "parse_tree.prog_io_util.c"
{
#line 3349 "parse_tree.prog_io_util.c"
  {
#line 3351 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3354 "parse_tree.prog_io_util.c"
    {
#line 3356 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____allow_constrained_inst_var_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3359 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3361 "parse_tree.prog_io_util.c"
  }
#line 3363 "parse_tree.prog_io_util.c"
}

#line 3366 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____decl_attribute_0_0_10001(
#line 3369 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3371 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 3373 "parse_tree.prog_io_util.c"
{
#line 3375 "parse_tree.prog_io_util.c"
  {
#line 3377 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3380 "parse_tree.prog_io_util.c"
    {
#line 3382 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____decl_attribute_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 3385 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3387 "parse_tree.prog_io_util.c"
  }
#line 3389 "parse_tree.prog_io_util.c"
}

#line 3392 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____decl_attribute_0_0_10001(
#line 3395 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 3397 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3399 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3401 "parse_tree.prog_io_util.c"
{
#line 3403 "parse_tree.prog_io_util.c"
  {
#line 3405 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3408 "parse_tree.prog_io_util.c"
    {
#line 3410 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____decl_attribute_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3413 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3415 "parse_tree.prog_io_util.c"
  }
#line 3417 "parse_tree.prog_io_util.c"
}

#line 3420 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____decl_attrs_0_0_10001(
#line 3423 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3425 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 3427 "parse_tree.prog_io_util.c"
{
#line 3429 "parse_tree.prog_io_util.c"
  {
#line 3431 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3434 "parse_tree.prog_io_util.c"
    {
#line 3436 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____decl_attrs_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 3439 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3441 "parse_tree.prog_io_util.c"
  }
#line 3443 "parse_tree.prog_io_util.c"
}

#line 3446 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____decl_attrs_0_0_10001(
#line 3449 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 3451 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3453 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3455 "parse_tree.prog_io_util.c"
{
#line 3457 "parse_tree.prog_io_util.c"
  {
#line 3459 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3462 "parse_tree.prog_io_util.c"
    {
#line 3464 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____decl_attrs_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3467 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3469 "parse_tree.prog_io_util.c"
  }
#line 3471 "parse_tree.prog_io_util.c"
}

#line 3474 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_inst_kind_1_0_10001(
#line 3477 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3479 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3481 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3483 "parse_tree.prog_io_util.c"
{
#line 3485 "parse_tree.prog_io_util.c"
  {
#line 3487 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3490 "parse_tree.prog_io_util.c"
    {
#line 3492 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____known_compound_inst_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3495 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3497 "parse_tree.prog_io_util.c"
  }
#line 3499 "parse_tree.prog_io_util.c"
}

#line 3502 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_inst_kind_1_0_10001(
#line 3505 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3507 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3509 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3511 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3513 "parse_tree.prog_io_util.c"
{
#line 3515 "parse_tree.prog_io_util.c"
  {
#line 3517 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3520 "parse_tree.prog_io_util.c"
    {
#line 3522 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____known_compound_inst_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3525 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3527 "parse_tree.prog_io_util.c"
  }
#line 3529 "parse_tree.prog_io_util.c"
}

#line 3532 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_inst_kind_1_0_10001(
#line 3535 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3537 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3539 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3541 "parse_tree.prog_io_util.c"
{
#line 3543 "parse_tree.prog_io_util.c"
  {
#line 3545 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3548 "parse_tree.prog_io_util.c"
    {
#line 3550 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____known_inst_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3553 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3555 "parse_tree.prog_io_util.c"
  }
#line 3557 "parse_tree.prog_io_util.c"
}

#line 3560 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_inst_kind_1_0_10001(
#line 3563 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3565 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3567 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3569 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3571 "parse_tree.prog_io_util.c"
{
#line 3573 "parse_tree.prog_io_util.c"
  {
#line 3575 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3578 "parse_tree.prog_io_util.c"
    {
#line 3580 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____known_inst_kind_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3583 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3585 "parse_tree.prog_io_util.c"
  }
#line 3587 "parse_tree.prog_io_util.c"
}

#line 3590 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe1_1_0_10001(
#line 3593 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3595 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3597 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3599 "parse_tree.prog_io_util.c"
{
#line 3601 "parse_tree.prog_io_util.c"
  {
#line 3603 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3606 "parse_tree.prog_io_util.c"
    {
#line 3608 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe1_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3611 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3613 "parse_tree.prog_io_util.c"
  }
#line 3615 "parse_tree.prog_io_util.c"
}

#line 3618 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe1_1_0_10001(
#line 3621 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3623 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3625 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3627 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3629 "parse_tree.prog_io_util.c"
{
#line 3631 "parse_tree.prog_io_util.c"
  {
#line 3633 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3636 "parse_tree.prog_io_util.c"
    {
#line 3638 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe1_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3641 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3643 "parse_tree.prog_io_util.c"
  }
#line 3645 "parse_tree.prog_io_util.c"
}

#line 3648 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe2_2_0_10001(
#line 3651 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3653 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3655 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3657 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3659 "parse_tree.prog_io_util.c"
{
#line 3661 "parse_tree.prog_io_util.c"
  {
#line 3663 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3666 "parse_tree.prog_io_util.c"
    {
#line 3668 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe2_2_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3671 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3673 "parse_tree.prog_io_util.c"
  }
#line 3675 "parse_tree.prog_io_util.c"
}

#line 3678 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe2_2_0_10001(
#line 3681 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3683 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3685 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_3,
#line 3687 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 3689 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5)
#line 3691 "parse_tree.prog_io_util.c"
{
#line 3693 "parse_tree.prog_io_util.c"
  {
#line 3695 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3698 "parse_tree.prog_io_util.c"
    {
#line 3700 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe2_2_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_5));
    }
#line 3703 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3705 "parse_tree.prog_io_util.c"
  }
#line 3707 "parse_tree.prog_io_util.c"
}

#line 3710 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe3_3_0_10001(
#line 3713 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3715 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3717 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3719 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 3721 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5)
#line 3723 "parse_tree.prog_io_util.c"
{
#line 3725 "parse_tree.prog_io_util.c"
  {
#line 3727 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3730 "parse_tree.prog_io_util.c"
    {
#line 3732 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe3_3_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_5));
    }
#line 3735 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3737 "parse_tree.prog_io_util.c"
  }
#line 3739 "parse_tree.prog_io_util.c"
}

#line 3742 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe3_3_0_10001(
#line 3745 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3747 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3749 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3751 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_4,
#line 3753 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5,
#line 3755 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_6)
#line 3757 "parse_tree.prog_io_util.c"
{
#line 3759 "parse_tree.prog_io_util.c"
  {
#line 3761 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3764 "parse_tree.prog_io_util.c"
    {
#line 3766 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe3_3_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_5), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_6));
    }
#line 3769 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_4 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3771 "parse_tree.prog_io_util.c"
  }
#line 3773 "parse_tree.prog_io_util.c"
}

#line 3776 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe4_4_0_10001(
#line 3779 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3781 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3783 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3785 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 3787 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_5,
#line 3789 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_6)
#line 3791 "parse_tree.prog_io_util.c"
{
#line 3793 "parse_tree.prog_io_util.c"
  {
#line 3795 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3798 "parse_tree.prog_io_util.c"
    {
#line 3800 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe4_4_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_5), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_6));
    }
#line 3803 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3805 "parse_tree.prog_io_util.c"
  }
#line 3807 "parse_tree.prog_io_util.c"
}

#line 3810 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe4_4_0_10001(
#line 3813 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3815 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3817 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3819 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4,
#line 3821 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_5,
#line 3823 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_6,
#line 3825 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_7)
#line 3827 "parse_tree.prog_io_util.c"
{
#line 3829 "parse_tree.prog_io_util.c"
  {
#line 3831 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3834 "parse_tree.prog_io_util.c"
    {
#line 3836 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe4_4_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_6), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_7));
    }
#line 3839 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_5 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3841 "parse_tree.prog_io_util.c"
  }
#line 3843 "parse_tree.prog_io_util.c"
}

#line 3846 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_1_0_10001(
#line 3849 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3851 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3853 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3855 "parse_tree.prog_io_util.c"
{
#line 3857 "parse_tree.prog_io_util.c"
  {
#line 3859 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3862 "parse_tree.prog_io_util.c"
    {
#line 3864 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe_functor_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3867 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3869 "parse_tree.prog_io_util.c"
  }
#line 3871 "parse_tree.prog_io_util.c"
}

#line 3874 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_1_0_10001(
#line 3877 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3879 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3881 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3883 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3885 "parse_tree.prog_io_util.c"
{
#line 3887 "parse_tree.prog_io_util.c"
  {
#line 3889 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3892 "parse_tree.prog_io_util.c"
    {
#line 3894 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe_functor_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 3897 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3899 "parse_tree.prog_io_util.c"
  }
#line 3901 "parse_tree.prog_io_util.c"
}

#line 3904 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_functor_0_0_10001(
#line 3907 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3909 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 3911 "parse_tree.prog_io_util.c"
{
#line 3913 "parse_tree.prog_io_util.c"
  {
#line 3915 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3918 "parse_tree.prog_io_util.c"
    {
#line 3920 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe_functor_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 3923 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3925 "parse_tree.prog_io_util.c"
  }
#line 3927 "parse_tree.prog_io_util.c"
}

#line 3930 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_functor_0_0_10001(
#line 3933 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 3935 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3937 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3939 "parse_tree.prog_io_util.c"
{
#line 3941 "parse_tree.prog_io_util.c"
  {
#line 3943 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 3946 "parse_tree.prog_io_util.c"
    {
#line 3948 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe_functor_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3951 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 3953 "parse_tree.prog_io_util.c"
  }
#line 3955 "parse_tree.prog_io_util.c"
}

#line 3958 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____maybe_pred_or_func_1_0_10001(
#line 3961 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3963 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 3965 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 3967 "parse_tree.prog_io_util.c"
{
#line 3969 "parse_tree.prog_io_util.c"
  {
#line 3971 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 3974 "parse_tree.prog_io_util.c"
    {
#line 3976 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____maybe_pred_or_func_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 3979 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 3981 "parse_tree.prog_io_util.c"
  }
#line 3983 "parse_tree.prog_io_util.c"
}

#line 3986 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____maybe_pred_or_func_1_0_10001(
#line 3989 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 3991 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 3993 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 3995 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 3997 "parse_tree.prog_io_util.c"
{
#line 3999 "parse_tree.prog_io_util.c"
  {
#line 4001 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 4004 "parse_tree.prog_io_util.c"
    {
#line 4006 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____maybe_pred_or_func_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 4009 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 4011 "parse_tree.prog_io_util.c"
  }
#line 4013 "parse_tree.prog_io_util.c"
}

#line 4016 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0_10001(
#line 4019 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4021 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 4023 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 4025 "parse_tree.prog_io_util.c"
{
#line 4027 "parse_tree.prog_io_util.c"
  {
#line 4029 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 4032 "parse_tree.prog_io_util.c"
    {
#line 4034 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 4037 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 4039 "parse_tree.prog_io_util.c"
  }
#line 4041 "parse_tree.prog_io_util.c"
}

#line 4044 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0_10001(
#line 4047 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4049 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 4051 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 4053 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 4055 "parse_tree.prog_io_util.c"
{
#line 4057 "parse_tree.prog_io_util.c"
  {
#line 4059 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 4062 "parse_tree.prog_io_util.c"
    {
#line 4064 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 4067 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 4069 "parse_tree.prog_io_util.c"
  }
#line 4071 "parse_tree.prog_io_util.c"
}

#line 4074 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_var_1_0_10001(
#line 4077 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4079 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 4081 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 4083 "parse_tree.prog_io_util.c"
{
#line 4085 "parse_tree.prog_io_util.c"
  {
#line 4087 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 4090 "parse_tree.prog_io_util.c"
    {
#line 4092 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____ordinary_state_var_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 4095 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 4097 "parse_tree.prog_io_util.c"
  }
#line 4099 "parse_tree.prog_io_util.c"
}

#line 4102 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_var_1_0_10001(
#line 4105 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4107 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 4109 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 4111 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 4113 "parse_tree.prog_io_util.c"
{
#line 4115 "parse_tree.prog_io_util.c"
  {
#line 4117 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 4120 "parse_tree.prog_io_util.c"
    {
#line 4122 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____ordinary_state_var_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 4125 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 4127 "parse_tree.prog_io_util.c"
  }
#line 4129 "parse_tree.prog_io_util.c"
}

#line 4132 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____parser_1_0_10001(
#line 4135 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4137 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 4139 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 4141 "parse_tree.prog_io_util.c"
{
#line 4143 "parse_tree.prog_io_util.c"
  {
#line 4145 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 4148 "parse_tree.prog_io_util.c"
    {
#line 4150 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____parser_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 4153 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 4155 "parse_tree.prog_io_util.c"
  }
#line 4157 "parse_tree.prog_io_util.c"
}

#line 4160 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____parser_1_0_10001(
#line 4163 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4165 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2,
#line 4167 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3,
#line 4169 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_4)
#line 4171 "parse_tree.prog_io_util.c"
{
#line 4173 "parse_tree.prog_io_util.c"
  {
#line 4175 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 4178 "parse_tree.prog_io_util.c"
    {
#line 4180 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____parser_1_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_4));
    }
#line 4183 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 4185 "parse_tree.prog_io_util.c"
  }
#line 4187 "parse_tree.prog_io_util.c"
}

#line 4190 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____quantifier_type_0_0_10001(
#line 4193 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4195 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 4197 "parse_tree.prog_io_util.c"
{
#line 4199 "parse_tree.prog_io_util.c"
  {
#line 4201 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 4204 "parse_tree.prog_io_util.c"
    {
#line 4206 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____quantifier_type_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 4209 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 4211 "parse_tree.prog_io_util.c"
  }
#line 4213 "parse_tree.prog_io_util.c"
}

#line 4216 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____quantifier_type_0_0_10001(
#line 4219 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 4221 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 4223 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 4225 "parse_tree.prog_io_util.c"
{
#line 4227 "parse_tree.prog_io_util.c"
  {
#line 4229 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 4232 "parse_tree.prog_io_util.c"
    {
#line 4234 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____quantifier_type_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 4237 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 4239 "parse_tree.prog_io_util.c"
  }
#line 4241 "parse_tree.prog_io_util.c"
}

#line 4244 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2pvar_0_0_10001(
#line 4247 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4249 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 4251 "parse_tree.prog_io_util.c"
{
#line 4253 "parse_tree.prog_io_util.c"
  {
#line 4255 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 4258 "parse_tree.prog_io_util.c"
    {
#line 4260 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____var2pvar_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 4263 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 4265 "parse_tree.prog_io_util.c"
  }
#line 4267 "parse_tree.prog_io_util.c"
}

#line 4270 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____var2pvar_0_0_10001(
#line 4273 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 4275 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 4277 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 4279 "parse_tree.prog_io_util.c"
{
#line 4281 "parse_tree.prog_io_util.c"
  {
#line 4283 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 4286 "parse_tree.prog_io_util.c"
    {
#line 4288 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____var2pvar_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 4291 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 4293 "parse_tree.prog_io_util.c"
  }
#line 4295 "parse_tree.prog_io_util.c"
}

#line 4298 "parse_tree.prog_io_util.c"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____var2tvar_0_0_10001(
#line 4301 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 4303 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2)
#line 4305 "parse_tree.prog_io_util.c"
{
#line 4307 "parse_tree.prog_io_util.c"
  {
#line 4309 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 4312 "parse_tree.prog_io_util.c"
    {
#line 4314 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____var2tvar_0_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2));
    }
#line 4317 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 4319 "parse_tree.prog_io_util.c"
  }
#line 4321 "parse_tree.prog_io_util.c"
}

#line 4324 "parse_tree.prog_io_util.c"
static void MR_CALL 
parse_tree__prog_io_util____Compare____var2tvar_0_0_10001(
#line 4327 "parse_tree.prog_io_util.c"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_1,
#line 4329 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_2,
#line 4331 "parse_tree.prog_io_util.c"
  MR_Box parse_tree__prog_io_util__wrapper_arg_3)
#line 4333 "parse_tree.prog_io_util.c"
{
#line 4335 "parse_tree.prog_io_util.c"
  {
#line 4337 "parse_tree.prog_io_util.c"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__1_1;

#line 4340 "parse_tree.prog_io_util.c"
    {
#line 4342 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util____Compare____var2tvar_0_0(&parse_tree__prog_io_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_util__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_util__wrapper_arg_3));
    }
#line 4345 "parse_tree.prog_io_util.c"
    *parse_tree__prog_io_util__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__1_1));
#line 4347 "parse_tree.prog_io_util.c"
  }
#line 4349 "parse_tree.prog_io_util.c"
}

#line 1044 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(
#line 1044 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Op_5,
#line 1044 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_6,
#line 1044 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__List0_7,
#line 1044 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__OneOrMore_8)
#line 1044 "prog_io_util.m"
{
#line 1052 "prog_io_util.m"
  while (MR_TRUE)
#line 1052 "prog_io_util.m"
    {
#line 1052 "prog_io_util.m"
      /* tailcall optimized into a loop */
#line 1052 "prog_io_util.m"
      {
#line 1052 "prog_io_util.m"
        MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_6)) == (MR_mktag((MR_Integer) 0)));
#line 1052 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__L_9;
#line 1052 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__R_10;
#line 1048 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_14_14;
#line 1048 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_15_15;
#line 1048 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_16_16;
#line 1048 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_17_17;
#line 1048 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_21_21;
#line 1048 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util___Context_11;

#line 1048 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1048 "prog_io_util.m"
          {
#line 1048 "prog_io_util.m"
            parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_6, (MR_Integer) 0)));
#line 1048 "prog_io_util.m"
            parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_6, (MR_Integer) 1)));
#line 1048 "prog_io_util.m"
            parse_tree__prog_io_util___Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_6, (MR_Integer) 2)));
#line 1048 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_14_14)) == (MR_mktag((MR_Integer) 0)));
#line 1048 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1048 "prog_io_util.m"
              {
#line 1048 "prog_io_util.m"
                parse_tree__prog_io_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_14_14, (MR_Integer) 0)));
#line 1048 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__Op_5, parse_tree__prog_io_util__V_21_21) == 0);
#line 1048 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1048 "prog_io_util.m"
                  {
#line 1048 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 1048 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1048 "prog_io_util.m"
                      {
#line 1048 "prog_io_util.m"
                        parse_tree__prog_io_util__L_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 0)));
#line 1048 "prog_io_util.m"
                        parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 1)));
#line 1048 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 1048 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1048 "prog_io_util.m"
                          {
#line 1048 "prog_io_util.m"
                            parse_tree__prog_io_util__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
#line 1048 "prog_io_util.m"
                            parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
#line 1048 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1048 "prog_io_util.m"
                          }
#line 1048 "prog_io_util.m"
                      }
#line 1048 "prog_io_util.m"
                  }
#line 1048 "prog_io_util.m"
              }
#line 1048 "prog_io_util.m"
          }
#line 1052 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1050 "prog_io_util.m"
          {
#line 1050 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__RHead_12;
#line 1050 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__RTail_13;
#line 1050 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_18_18;
#line 1050 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_19_19;

#line 1049 "prog_io_util.m"
            {
#line 1049 "prog_io_util.m"
              parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(parse_tree__prog_io_util__Op_5, parse_tree__prog_io_util__R_10, parse_tree__prog_io_util__List0_7, &parse_tree__prog_io_util__V_18_18);
            }
#line 1050 "prog_io_util.m"
            parse_tree__prog_io_util__RHead_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_18_18, (MR_Integer) 0)));
#line 1050 "prog_io_util.m"
            parse_tree__prog_io_util__RTail_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_18_18, (MR_Integer) 1)));
#line 1051 "prog_io_util.m"
            {
#line 1051 "prog_io_util.m"
              parse_tree__prog_io_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1051 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 0) = ((MR_Box) (parse_tree__prog_io_util__RHead_12));
#line 1051 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io_util__RTail_13));
#line 1051 "prog_io_util.m"
            }
#line 1051 "prog_io_util.m"
            /* direct tailcall eliminated */
#line 1051 "prog_io_util.m"
            {
#line 1051 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Term__tmp_copy_6 = parse_tree__prog_io_util__L_9;
#line 1051 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__List0__tmp_copy_7 = parse_tree__prog_io_util__V_19_19;

#line 1051 "prog_io_util.m"
              parse_tree__prog_io_util__List0_7 = parse_tree__prog_io_util__List0__tmp_copy_7;
#line 1051 "prog_io_util.m"
              parse_tree__prog_io_util__Term_6 = parse_tree__prog_io_util__Term__tmp_copy_6;
#line 1051 "prog_io_util.m"
            }
#line 1051 "prog_io_util.m"
            continue;
#line 1050 "prog_io_util.m"
          }
#line 1052 "prog_io_util.m"
        else
#line 1053 "prog_io_util.m"
          {
#line 1053 "prog_io_util.m"
            MR_Word base;
#line 1053 "prog_io_util.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1053 "prog_io_util.m"
            *parse_tree__prog_io_util__OneOrMore_8 = base;
#line 1053 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Term_6));
#line 1053 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__List0_7));
#line 1053 "prog_io_util.m"
          }
#line 1052 "prog_io_util.m"
      }
#line 1052 "prog_io_util.m"
      break;
#line 1052 "prog_io_util.m"
    }
#line 1044 "prog_io_util.m"
}

#line 737 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
#line 737 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Name_4,
#line 737 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Args_5,
#line 737 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__KnownInst_6)
#line 737 "prog_io_util.m"
{
#line 781 "prog_io_util.m"
  {
#line 781 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 781 "prog_io_util.m"
    {
#line 781 "prog_io_util.m"
      MR_Integer parse_tree__prog_io_util__case_num_0 = (MR_Integer) -1;

#line 781 "prog_io_util.m"
#line 781 "prog_io_util.m"
      switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 0)) {
#line 781 "prog_io_util.m"
        case (MR_Integer) 61:
#line 781 "prog_io_util.m"
          if (MR_offset_streq(1, parse_tree__prog_io_util__Name_4, (MR_String) "=<"))
#line 781 "prog_io_util.m"
            parse_tree__prog_io_util__case_num_0 = (MR_Integer) 0;
#line 781 "prog_io_util.m"
          break;
#line 781 "prog_io_util.m"
        case (MR_Integer) 97:
#line 781 "prog_io_util.m"
          if (MR_offset_streq(1, parse_tree__prog_io_util__Name_4, (MR_String) "any"))
#line 781 "prog_io_util.m"
            parse_tree__prog_io_util__case_num_0 = (MR_Integer) 1;
#line 781 "prog_io_util.m"
          break;
#line 781 "prog_io_util.m"
        case (MR_Integer) 98:
#line 781 "prog_io_util.m"
          if (((((((((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 1)) == (MR_Integer) 111)) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 2)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 3)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 4)) == (MR_Integer) 100))))
#line 781 "prog_io_util.m"
#line 781 "prog_io_util.m"
            switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 5)) {
#line 781 "prog_io_util.m"
              case (MR_Integer) 0:
#line 781 "prog_io_util.m"
                parse_tree__prog_io_util__case_num_0 = (MR_Integer) 2;
#line 781 "prog_io_util.m"
                break;
#line 781 "prog_io_util.m"
              case (MR_Integer) 95:
#line 781 "prog_io_util.m"
                if (MR_offset_streq(6, parse_tree__prog_io_util__Name_4, (MR_String) "bound_unique"))
#line 781 "prog_io_util.m"
                  parse_tree__prog_io_util__case_num_0 = (MR_Integer) 3;
#line 781 "prog_io_util.m"
                break;
#line 781 "prog_io_util.m"
            }
#line 781 "prog_io_util.m"
          break;
#line 781 "prog_io_util.m"
        case (MR_Integer) 99:
#line 781 "prog_io_util.m"
          if (((((((((((((((((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 1)) == (MR_Integer) 108)) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 2)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 3)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 4)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 5)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 6)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 7)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 8)) == (MR_Integer) 100))))
#line 781 "prog_io_util.m"
#line 781 "prog_io_util.m"
            switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 9)) {
#line 781 "prog_io_util.m"
              case (MR_Integer) 0:
#line 781 "prog_io_util.m"
                parse_tree__prog_io_util__case_num_0 = (MR_Integer) 4;
#line 781 "prog_io_util.m"
                break;
#line 781 "prog_io_util.m"
              case (MR_Integer) 95:
#line 781 "prog_io_util.m"
                if (MR_offset_streq(10, parse_tree__prog_io_util__Name_4, (MR_String) "clobbered_any"))
#line 781 "prog_io_util.m"
                  parse_tree__prog_io_util__case_num_0 = (MR_Integer) 5;
#line 781 "prog_io_util.m"
                break;
#line 781 "prog_io_util.m"
            }
#line 781 "prog_io_util.m"
          break;
#line 781 "prog_io_util.m"
        case (MR_Integer) 102:
#line 781 "prog_io_util.m"
          if (MR_offset_streq(1, parse_tree__prog_io_util__Name_4, (MR_String) "free"))
#line 781 "prog_io_util.m"
            parse_tree__prog_io_util__case_num_0 = (MR_Integer) 6;
#line 781 "prog_io_util.m"
          break;
#line 781 "prog_io_util.m"
        case (MR_Integer) 103:
#line 781 "prog_io_util.m"
          if (MR_offset_streq(1, parse_tree__prog_io_util__Name_4, (MR_String) "ground"))
#line 781 "prog_io_util.m"
            parse_tree__prog_io_util__case_num_0 = (MR_Integer) 7;
#line 781 "prog_io_util.m"
          break;
#line 781 "prog_io_util.m"
        case (MR_Integer) 105:
#line 781 "prog_io_util.m"
          if (MR_offset_streq(1, parse_tree__prog_io_util__Name_4, (MR_String) "is"))
#line 781 "prog_io_util.m"
            parse_tree__prog_io_util__case_num_0 = (MR_Integer) 8;
#line 781 "prog_io_util.m"
          break;
#line 781 "prog_io_util.m"
        case (MR_Integer) 109:
#line 781 "prog_io_util.m"
          if (((((((((((((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 1)) == (MR_Integer) 111)) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 2)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 3)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 4)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 5)) == (MR_Integer) 121)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 6)) == (MR_Integer) 95))))
#line 781 "prog_io_util.m"
#line 781 "prog_io_util.m"
            switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 7)) {
#line 781 "prog_io_util.m"
              case (MR_Integer) 99:
#line 781 "prog_io_util.m"
                if (((((((((((((((((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 8)) == (MR_Integer) 108)) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 9)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 10)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 11)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 12)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 13)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 14)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 15)) == (MR_Integer) 100))))
#line 781 "prog_io_util.m"
#line 781 "prog_io_util.m"
                  switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 16)) {
#line 781 "prog_io_util.m"
                    case (MR_Integer) 0:
#line 781 "prog_io_util.m"
                      parse_tree__prog_io_util__case_num_0 = (MR_Integer) 9;
#line 781 "prog_io_util.m"
                      break;
#line 781 "prog_io_util.m"
                    case (MR_Integer) 95:
#line 781 "prog_io_util.m"
                      if (MR_offset_streq(17, parse_tree__prog_io_util__Name_4, (MR_String) "mostly_clobbered_any"))
#line 781 "prog_io_util.m"
                        parse_tree__prog_io_util__case_num_0 = (MR_Integer) 10;
#line 781 "prog_io_util.m"
                      break;
#line 781 "prog_io_util.m"
                  }
#line 781 "prog_io_util.m"
                break;
#line 781 "prog_io_util.m"
              case (MR_Integer) 117:
#line 781 "prog_io_util.m"
                if (((((((((((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 8)) == (MR_Integer) 110)) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 9)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 10)) == (MR_Integer) 113)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 11)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 12)) == (MR_Integer) 101))))
#line 781 "prog_io_util.m"
#line 781 "prog_io_util.m"
                  switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 13)) {
#line 781 "prog_io_util.m"
                    case (MR_Integer) 0:
#line 781 "prog_io_util.m"
                      parse_tree__prog_io_util__case_num_0 = (MR_Integer) 11;
#line 781 "prog_io_util.m"
                      break;
#line 781 "prog_io_util.m"
                    case (MR_Integer) 95:
#line 781 "prog_io_util.m"
                      if (MR_offset_streq(14, parse_tree__prog_io_util__Name_4, (MR_String) "mostly_unique_any"))
#line 781 "prog_io_util.m"
                        parse_tree__prog_io_util__case_num_0 = (MR_Integer) 12;
#line 781 "prog_io_util.m"
                      break;
#line 781 "prog_io_util.m"
                  }
#line 781 "prog_io_util.m"
                break;
#line 781 "prog_io_util.m"
            }
#line 781 "prog_io_util.m"
          break;
#line 781 "prog_io_util.m"
        case (MR_Integer) 110:
#line 781 "prog_io_util.m"
          if (MR_offset_streq(1, parse_tree__prog_io_util__Name_4, (MR_String) "not_reached"))
#line 781 "prog_io_util.m"
            parse_tree__prog_io_util__case_num_0 = (MR_Integer) 13;
#line 781 "prog_io_util.m"
          break;
#line 781 "prog_io_util.m"
        case (MR_Integer) 117:
#line 781 "prog_io_util.m"
          if (((((((((((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 1)) == (MR_Integer) 110)) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 2)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 3)) == (MR_Integer) 113)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 4)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 5)) == (MR_Integer) 101))))
#line 781 "prog_io_util.m"
#line 781 "prog_io_util.m"
            switch (MR_nth_code_unit(parse_tree__prog_io_util__Name_4, 6)) {
#line 781 "prog_io_util.m"
              case (MR_Integer) 0:
#line 781 "prog_io_util.m"
                parse_tree__prog_io_util__case_num_0 = (MR_Integer) 14;
#line 781 "prog_io_util.m"
                break;
#line 781 "prog_io_util.m"
              case (MR_Integer) 95:
#line 781 "prog_io_util.m"
                if (MR_offset_streq(7, parse_tree__prog_io_util__Name_4, (MR_String) "unique_any"))
#line 781 "prog_io_util.m"
                  parse_tree__prog_io_util__case_num_0 = (MR_Integer) 15;
#line 781 "prog_io_util.m"
                break;
#line 781 "prog_io_util.m"
            }
#line 781 "prog_io_util.m"
          break;
#line 781 "prog_io_util.m"
      }
#line 781 "prog_io_util.m"
#line 781 "prog_io_util.m"
      switch (parse_tree__prog_io_util__case_num_0) {
#line 781 "prog_io_util.m"
        default:
#line 781 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 781 "prog_io_util.m"
          break;
#line 781 "prog_io_util.m"
        case (MR_Integer) 0:
#line 820 "prog_io_util.m"
          {
#line 820 "prog_io_util.m"
            /* case "=<" */
#line 820 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 824 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 820 "prog_io_util.m"
            else
#line 826 "prog_io_util.m"
              {
#line 826 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 826 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_181_181 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 826 "prog_io_util.m"
                if ((parse_tree__prog_io_util__V_180_180 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 825 "prog_io_util.m"
                  *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 826 "prog_io_util.m"
                else
#line 826 "prog_io_util.m"
                  {
#line 826 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_180_180, (MR_Integer) 1)));
#line 826 "prog_io_util.m"
                    MR_Box parse_tree__prog_io_util__V_193_193 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_180_180, (MR_Integer) 0));

#line 826 "prog_io_util.m"
                    if ((parse_tree__prog_io_util__V_192_192 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 827 "prog_io_util.m"
                      {
#line 827 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_44_44;

#line 828 "prog_io_util.m"
                        {
#line 828 "prog_io_util.m"
                          parse_tree__prog_io_util__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 828 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_44_44, 0) = parse_tree__prog_io_util__V_181_181;
#line 828 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_44_44, 1) = parse_tree__prog_io_util__V_193_193;
#line 828 "prog_io_util.m"
                        }
#line 828 "prog_io_util.m"
                        {
#line 828 "prog_io_util.m"
                          MR_Word base;
#line 828 "prog_io_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 828 "prog_io_util.m"
                          *parse_tree__prog_io_util__KnownInst_6 = base;
#line 828 "prog_io_util.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_44_44));
#line 828 "prog_io_util.m"
                        }
#line 827 "prog_io_util.m"
                      }
#line 826 "prog_io_util.m"
                    else
#line 831 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 826 "prog_io_util.m"
                  }
#line 826 "prog_io_util.m"
              }
#line 820 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 820 "prog_io_util.m"
          }
#line 781 "prog_io_util.m"
          break;
#line 781 "prog_io_util.m"
        case (MR_Integer) 1:
#line 773 "prog_io_util.m"
          {
#line 773 "prog_io_util.m"
            /* case "any" */
#line 777 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 775 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[13]);
#line 777 "prog_io_util.m"
            else
#line 779 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 773 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 773 "prog_io_util.m"
          }
#line 781 "prog_io_util.m"
          break;
#line 781 "prog_io_util.m"
        case (MR_Integer) 2:
#line 834 "prog_io_util.m"
          {
#line 834 "prog_io_util.m"
            /* case "bound" */
#line 834 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 836 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 834 "prog_io_util.m"
            else
#line 838 "prog_io_util.m"
              {
#line 838 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 838 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_183_183 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 838 "prog_io_util.m"
                if ((parse_tree__prog_io_util__V_182_182 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 839 "prog_io_util.m"
                  {
#line 839 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_39_39;

#line 840 "prog_io_util.m"
                    {
#line 840 "prog_io_util.m"
                      parse_tree__prog_io_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 840 "prog_io_util.m"
                      MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__V_39_39, 0) = parse_tree__prog_io_util__V_183_183;
#line 840 "prog_io_util.m"
                    }
#line 840 "prog_io_util.m"
                    {
#line 840 "prog_io_util.m"
                      MR_Word base;
#line 840 "prog_io_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 840 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownInst_6 = base;
#line 840 "prog_io_util.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_39_39));
#line 840 "prog_io_util.m"
                    }
#line 839 "prog_io_util.m"
                  }
#line 838 "prog_io_util.m"
                else
#line 843 "prog_io_util.m"
                  *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 838 "prog_io_util.m"
              }
#line 834 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 834 "prog_io_util.m"
          }
#line 781 "prog_io_util.m"
          break;
#line 781 "prog_io_util.m"
        case (MR_Integer) 3:
#line 846 "prog_io_util.m"
          {
#line 846 "prog_io_util.m"
            /* case "bound_unique" */
#line 846 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 850 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 846 "prog_io_util.m"
            else
#line 852 "prog_io_util.m"
              {
#line 852 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 852 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_185_185 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 852 "prog_io_util.m"
                if ((parse_tree__prog_io_util__V_184_184 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 853 "prog_io_util.m"
                  {
#line 853 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_36_36;

#line 854 "prog_io_util.m"
                    {
#line 854 "prog_io_util.m"
                      parse_tree__prog_io_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "prog_io_util.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 854 "prog_io_util.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_36_36, 1) = parse_tree__prog_io_util__V_185_185;
#line 854 "prog_io_util.m"
                    }
#line 854 "prog_io_util.m"
                    {
#line 854 "prog_io_util.m"
                      MR_Word base;
#line 854 "prog_io_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 854 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownInst_6 = base;
#line 854 "prog_io_util.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 854 "prog_io_util.m"
                    }
#line 853 "prog_io_util.m"
                  }
#line 852 "prog_io_util.m"
                else
#line 857 "prog_io_util.m"
                  *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 852 "prog_io_util.m"
              }
#line 846 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 846 "prog_io_util.m"
          }
#line 781 "prog_io_util.m"
          break;
#line 781 "prog_io_util.m"
        case (MR_Integer) 4:
#line 773 "prog_io_util.m"
          {
#line 773 "prog_io_util.m"
            /* case "clobbered" */
#line 777 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 775 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[14]);
#line 777 "prog_io_util.m"
            else
#line 779 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 773 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 773 "prog_io_util.m"
          }
#line 781 "prog_io_util.m"
          break;
#line 781 "prog_io_util.m"
        case (MR_Integer) 5:
#line 773 "prog_io_util.m"
          {
#line 773 "prog_io_util.m"
            /* case "clobbered_any" */
#line 777 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 775 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[15]);
#line 777 "prog_io_util.m"
            else
#line 779 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 773 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 773 "prog_io_util.m"
          }
#line 781 "prog_io_util.m"
          break;
#line 781 "prog_io_util.m"
        case (MR_Integer) 6:
#line 773 "prog_io_util.m"
          {
#line 773 "prog_io_util.m"
            /* case "free" */
#line 777 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 775 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[16]);
#line 777 "prog_io_util.m"
            else
#line 779 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 773 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 773 "prog_io_util.m"
          }
#line 781 "prog_io_util.m"
          break;
#line 781 "prog_io_util.m"
        case (MR_Integer) 7:
#line 773 "prog_io_util.m"
          {
#line 773 "prog_io_util.m"
            /* case "ground" */
#line 777 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 775 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[17]);
#line 777 "prog_io_util.m"
            else
#line 779 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 773 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 773 "prog_io_util.m"
          }
#line 781 "prog_io_util.m"
          break;
#line 781 "prog_io_util.m"
        case (MR_Integer) 8:
#line 806 "prog_io_util.m"
          {
#line 806 "prog_io_util.m"
            /* case "is" */
#line 806 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 810 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 806 "prog_io_util.m"
            else
#line 812 "prog_io_util.m"
              {
#line 812 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 812 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_187_187 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 812 "prog_io_util.m"
                if ((parse_tree__prog_io_util__V_186_186 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 811 "prog_io_util.m"
                  *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 812 "prog_io_util.m"
                else
#line 812 "prog_io_util.m"
                  {
#line 812 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_186_186, (MR_Integer) 1)));
#line 812 "prog_io_util.m"
                    MR_Box parse_tree__prog_io_util__V_195_195 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_186_186, (MR_Integer) 0));

#line 812 "prog_io_util.m"
                    if ((parse_tree__prog_io_util__V_194_194 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 813 "prog_io_util.m"
                      {
#line 813 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_50_50;

#line 814 "prog_io_util.m"
                        {
#line 814 "prog_io_util.m"
                          parse_tree__prog_io_util__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 814 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_50_50, 0) = parse_tree__prog_io_util__V_187_187;
#line 814 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_50_50, 1) = parse_tree__prog_io_util__V_195_195;
#line 814 "prog_io_util.m"
                        }
#line 814 "prog_io_util.m"
                        {
#line 814 "prog_io_util.m"
                          MR_Word base;
#line 814 "prog_io_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 814 "prog_io_util.m"
                          *parse_tree__prog_io_util__KnownInst_6 = base;
#line 814 "prog_io_util.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_50_50));
#line 814 "prog_io_util.m"
                        }
#line 813 "prog_io_util.m"
                      }
#line 812 "prog_io_util.m"
                    else
#line 817 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 812 "prog_io_util.m"
                  }
#line 812 "prog_io_util.m"
              }
#line 806 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 806 "prog_io_util.m"
          }
#line 781 "prog_io_util.m"
          break;
#line 781 "prog_io_util.m"
        case (MR_Integer) 9:
#line 773 "prog_io_util.m"
          {
#line 773 "prog_io_util.m"
            /* case "mostly_clobbered" */
#line 777 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 775 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[18]);
#line 777 "prog_io_util.m"
            else
#line 779 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 773 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 773 "prog_io_util.m"
          }
#line 781 "prog_io_util.m"
          break;
#line 781 "prog_io_util.m"
        case (MR_Integer) 10:
#line 773 "prog_io_util.m"
          {
#line 773 "prog_io_util.m"
            /* case "mostly_clobbered_any" */
#line 777 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 775 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[19]);
#line 777 "prog_io_util.m"
            else
#line 779 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 773 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 773 "prog_io_util.m"
          }
#line 781 "prog_io_util.m"
          break;
#line 781 "prog_io_util.m"
        case (MR_Integer) 11:
#line 794 "prog_io_util.m"
          {
#line 794 "prog_io_util.m"
            /* case "mostly_unique" */
#line 794 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 796 "prog_io_util.m"
              {
#line 797 "prog_io_util.m"
                *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[20]);
#line 796 "prog_io_util.m"
              }
#line 794 "prog_io_util.m"
            else
#line 798 "prog_io_util.m"
              {
#line 798 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 798 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_189_189 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 798 "prog_io_util.m"
                if ((parse_tree__prog_io_util__V_188_188 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 799 "prog_io_util.m"
                  {
#line 799 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_54_54;

#line 800 "prog_io_util.m"
                    {
#line 800 "prog_io_util.m"
                      parse_tree__prog_io_util__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 800 "prog_io_util.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 800 "prog_io_util.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_54_54, 1) = parse_tree__prog_io_util__V_189_189;
#line 800 "prog_io_util.m"
                    }
#line 800 "prog_io_util.m"
                    {
#line 800 "prog_io_util.m"
                      MR_Word base;
#line 800 "prog_io_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 800 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownInst_6 = base;
#line 800 "prog_io_util.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_54_54));
#line 800 "prog_io_util.m"
                    }
#line 799 "prog_io_util.m"
                  }
#line 798 "prog_io_util.m"
                else
#line 803 "prog_io_util.m"
                  *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 798 "prog_io_util.m"
              }
#line 794 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 794 "prog_io_util.m"
          }
#line 781 "prog_io_util.m"
          break;
#line 781 "prog_io_util.m"
        case (MR_Integer) 12:
#line 773 "prog_io_util.m"
          {
#line 773 "prog_io_util.m"
            /* case "mostly_unique_any" */
#line 777 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 775 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[21]);
#line 777 "prog_io_util.m"
            else
#line 779 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 773 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 773 "prog_io_util.m"
          }
#line 781 "prog_io_util.m"
          break;
#line 781 "prog_io_util.m"
        case (MR_Integer) 13:
#line 773 "prog_io_util.m"
          {
#line 773 "prog_io_util.m"
            /* case "not_reached" */
#line 777 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 775 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[22]);
#line 777 "prog_io_util.m"
            else
#line 779 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 773 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 773 "prog_io_util.m"
          }
#line 781 "prog_io_util.m"
          break;
#line 781 "prog_io_util.m"
        case (MR_Integer) 14:
#line 782 "prog_io_util.m"
          {
#line 782 "prog_io_util.m"
            /* case "unique" */
#line 782 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 784 "prog_io_util.m"
              {
#line 785 "prog_io_util.m"
                *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[23]);
#line 784 "prog_io_util.m"
              }
#line 782 "prog_io_util.m"
            else
#line 786 "prog_io_util.m"
              {
#line 786 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 1)));
#line 786 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_191_191 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_5, (MR_Integer) 0));

#line 786 "prog_io_util.m"
                if ((parse_tree__prog_io_util__V_190_190 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 787 "prog_io_util.m"
                  {
#line 787 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_60_60;

#line 788 "prog_io_util.m"
                    {
#line 788 "prog_io_util.m"
                      parse_tree__prog_io_util__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 788 "prog_io_util.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 788 "prog_io_util.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_60_60, 1) = parse_tree__prog_io_util__V_191_191;
#line 788 "prog_io_util.m"
                    }
#line 788 "prog_io_util.m"
                    {
#line 788 "prog_io_util.m"
                      MR_Word base;
#line 788 "prog_io_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 788 "prog_io_util.m"
                      *parse_tree__prog_io_util__KnownInst_6 = base;
#line 788 "prog_io_util.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_60_60));
#line 788 "prog_io_util.m"
                    }
#line 787 "prog_io_util.m"
                  }
#line 786 "prog_io_util.m"
                else
#line 791 "prog_io_util.m"
                  *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 786 "prog_io_util.m"
              }
#line 782 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 782 "prog_io_util.m"
          }
#line 781 "prog_io_util.m"
          break;
#line 781 "prog_io_util.m"
        case (MR_Integer) 15:
#line 773 "prog_io_util.m"
          {
#line 773 "prog_io_util.m"
            /* case "unique_any" */
#line 777 "prog_io_util.m"
            if ((parse_tree__prog_io_util__Args_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 775 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[24]);
#line 777 "prog_io_util.m"
            else
#line 779 "prog_io_util.m"
              *parse_tree__prog_io_util__KnownInst_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 773 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 773 "prog_io_util.m"
          }
#line 781 "prog_io_util.m"
          break;
#line 781 "prog_io_util.m"
      }
#line 781 "prog_io_util.m"
    }
#line 781 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 781 "prog_io_util.m"
  }
#line 737 "prog_io_util.m"
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

#line 206 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____quantifier_type_0_0(
#line 206 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 206 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 206 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 206 "prog_io_util.m"
{
#line 206 "prog_io_util.m"
  {
#line 206 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 206 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 206 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 206 "prog_io_util.m"
    {
#line 206 "prog_io_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__Cast_HeadVar1_4, parse_tree__prog_io_util__Cast_HeadVar2_5);
#line 206 "prog_io_util.m"
      return;
    }
#line 206 "prog_io_util.m"
  }
#line 206 "prog_io_util.m"
}

#line 206 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____quantifier_type_0_0(
#line 206 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_1,
#line 206 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 206 "prog_io_util.m"
{
#line 5527 "parse_tree.prog_io_util.c"
  {
#line 5529 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__HeadVar__2_1 == parse_tree__prog_io_util__HeadVar__2_2);

#line 5532 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 5534 "parse_tree.prog_io_util.c"
  }
#line 206 "prog_io_util.m"
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

#line 1163 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_var_1_0(
#line 1163 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_14,
#line 1163 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 1163 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 1163 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 1163 "prog_io_util.m"
{
#line 1163 "prog_io_util.m"
  {
#line 1163 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1163 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_12 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 1163 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_13 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 1163 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_12 == parse_tree__prog_io_util__CastY_13);
#line 1163 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 5631 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1163 "prog_io_util.m"
    else
#line 1163 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1163 "prog_io_util.m"
      {
#line 1163 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1163 "prog_io_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1163 "prog_io_util.m"
          {
#line 1163 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1163 "prog_io_util.m"
            {
#line 1163 "prog_io_util.m"
              mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_14, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_19_19, parse_tree__prog_io_util__V_5_5);
#line 1163 "prog_io_util.m"
              return;
            }
#line 1163 "prog_io_util.m"
          }
#line 1163 "prog_io_util.m"
        else
#line 5660 "parse_tree.prog_io_util.c"
          *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1163 "prog_io_util.m"
      }
#line 1163 "prog_io_util.m"
    else
#line 1163 "prog_io_util.m"
      {
#line 1163 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1163 "prog_io_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5673 "parse_tree.prog_io_util.c"
          *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1163 "prog_io_util.m"
        else
#line 1163 "prog_io_util.m"
          {
#line 1163 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1163 "prog_io_util.m"
            {
#line 1163 "prog_io_util.m"
              mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_14, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_20_20, parse_tree__prog_io_util__V_11_11);
#line 1163 "prog_io_util.m"
              return;
            }
#line 1163 "prog_io_util.m"
          }
#line 1163 "prog_io_util.m"
      }
#line 1163 "prog_io_util.m"
  }
#line 1163 "prog_io_util.m"
}

#line 1163 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_var_1_0(
#line 1163 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
#line 1163 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 1163 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 1163 "prog_io_util.m"
{
#line 1163 "prog_io_util.m"
  {
#line 1163 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1163 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_7 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 1163 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_8 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 1163 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_7 == parse_tree__prog_io_util__CastY_8);
#line 1163 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1163 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1163 "prog_io_util.m"
    else
#line 1163 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1163 "prog_io_util.m"
      {
#line 1163 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1163 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_4_4;

#line 1163 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1163 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1163 "prog_io_util.m"
          {
#line 1163 "prog_io_util.m"
            parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5743 "parse_tree.prog_io_util.c"
            {
#line 5745 "parse_tree.prog_io_util.c"
              return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_9, parse_tree__prog_io_util__V_3_3, parse_tree__prog_io_util__V_4_4);
            }
#line 1163 "prog_io_util.m"
          }
#line 1163 "prog_io_util.m"
      }
#line 1163 "prog_io_util.m"
    else
#line 1163 "prog_io_util.m"
      {
#line 1163 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1163 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_6_6;

#line 1163 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1163 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1163 "prog_io_util.m"
          {
#line 1163 "prog_io_util.m"
            parse_tree__prog_io_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5769 "parse_tree.prog_io_util.c"
            {
#line 5771 "parse_tree.prog_io_util.c"
              return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_9, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_6_6);
            }
#line 1163 "prog_io_util.m"
          }
#line 1163 "prog_io_util.m"
      }
#line 1163 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1163 "prog_io_util.m"
  }
#line 1163 "prog_io_util.m"
}

#line 1220 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____ordinary_state_dot_colon_var_1_0(
#line 1220 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_38,
#line 1220 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 1220 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 1220 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 1220 "prog_io_util.m"
{
#line 1220 "prog_io_util.m"
  {
#line 1220 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1220 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_36 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 1220 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_37 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 1220 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_36 == parse_tree__prog_io_util__CastY_37);
#line 1220 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 5811 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1220 "prog_io_util.m"
    else
#line 1220 "prog_io_util.m"
#line 1220 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) {
#line 1220 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1220 "prog_io_util.m"
        case (MR_Integer) 0:
#line 1220 "prog_io_util.m"
          {
#line 1220 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1220 "prog_io_util.m"
#line 1220 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 1220 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1220 "prog_io_util.m"
              case (MR_Integer) 0:
#line 1220 "prog_io_util.m"
                {
#line 1220 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1220 "prog_io_util.m"
                  {
#line 1220 "prog_io_util.m"
                    mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_38, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_49_49, parse_tree__prog_io_util__V_5_5);
#line 1220 "prog_io_util.m"
                    return;
                  }
#line 1220 "prog_io_util.m"
                }
#line 1220 "prog_io_util.m"
                break;
#line 1220 "prog_io_util.m"
              case (MR_Integer) 1:
#line 5852 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1220 "prog_io_util.m"
                break;
#line 1220 "prog_io_util.m"
              case (MR_Integer) 2:
#line 5858 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1220 "prog_io_util.m"
                break;
#line 1220 "prog_io_util.m"
              case (MR_Integer) 3:
#line 5864 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1220 "prog_io_util.m"
                break;
#line 1220 "prog_io_util.m"
            }
#line 1220 "prog_io_util.m"
          }
#line 1220 "prog_io_util.m"
          break;
#line 1220 "prog_io_util.m"
        case (MR_Integer) 1:
#line 1220 "prog_io_util.m"
          {
#line 1220 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1220 "prog_io_util.m"
#line 1220 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 1220 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1220 "prog_io_util.m"
              case (MR_Integer) 0:
#line 5888 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1220 "prog_io_util.m"
                break;
#line 1220 "prog_io_util.m"
              case (MR_Integer) 1:
#line 1220 "prog_io_util.m"
                {
#line 1220 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1220 "prog_io_util.m"
                  {
#line 1220 "prog_io_util.m"
                    mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_38, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_50_50, parse_tree__prog_io_util__V_15_15);
#line 1220 "prog_io_util.m"
                    return;
                  }
#line 1220 "prog_io_util.m"
                }
#line 1220 "prog_io_util.m"
                break;
#line 1220 "prog_io_util.m"
              case (MR_Integer) 2:
#line 5912 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1220 "prog_io_util.m"
                break;
#line 1220 "prog_io_util.m"
              case (MR_Integer) 3:
#line 5918 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1220 "prog_io_util.m"
                break;
#line 1220 "prog_io_util.m"
            }
#line 1220 "prog_io_util.m"
          }
#line 1220 "prog_io_util.m"
          break;
#line 1220 "prog_io_util.m"
        case (MR_Integer) 2:
#line 1220 "prog_io_util.m"
          {
#line 1220 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1220 "prog_io_util.m"
#line 1220 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 1220 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1220 "prog_io_util.m"
              case (MR_Integer) 0:
#line 5942 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1220 "prog_io_util.m"
                break;
#line 1220 "prog_io_util.m"
              case (MR_Integer) 1:
#line 5948 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1220 "prog_io_util.m"
                break;
#line 1220 "prog_io_util.m"
              case (MR_Integer) 2:
#line 1220 "prog_io_util.m"
                {
#line 1220 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1220 "prog_io_util.m"
                  {
#line 1220 "prog_io_util.m"
                    mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_38, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_48_48, parse_tree__prog_io_util__V_25_25);
#line 1220 "prog_io_util.m"
                    return;
                  }
#line 1220 "prog_io_util.m"
                }
#line 1220 "prog_io_util.m"
                break;
#line 1220 "prog_io_util.m"
              case (MR_Integer) 3:
#line 5972 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1220 "prog_io_util.m"
                break;
#line 1220 "prog_io_util.m"
            }
#line 1220 "prog_io_util.m"
          }
#line 1220 "prog_io_util.m"
          break;
#line 1220 "prog_io_util.m"
        case (MR_Integer) 3:
#line 1220 "prog_io_util.m"
          {
#line 1220 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1220 "prog_io_util.m"
#line 1220 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 1220 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1220 "prog_io_util.m"
              case (MR_Integer) 0:
#line 5996 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1220 "prog_io_util.m"
                break;
#line 1220 "prog_io_util.m"
              case (MR_Integer) 1:
#line 6002 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1220 "prog_io_util.m"
                break;
#line 1220 "prog_io_util.m"
              case (MR_Integer) 2:
#line 6008 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1220 "prog_io_util.m"
                break;
#line 1220 "prog_io_util.m"
              case (MR_Integer) 3:
#line 1220 "prog_io_util.m"
                {
#line 1220 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1220 "prog_io_util.m"
                  {
#line 1220 "prog_io_util.m"
                    mercury__term____Compare____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_38, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_47_47, parse_tree__prog_io_util__V_35_35);
#line 1220 "prog_io_util.m"
                    return;
                  }
#line 1220 "prog_io_util.m"
                }
#line 1220 "prog_io_util.m"
                break;
#line 1220 "prog_io_util.m"
            }
#line 1220 "prog_io_util.m"
          }
#line 1220 "prog_io_util.m"
          break;
#line 1220 "prog_io_util.m"
      }
#line 1220 "prog_io_util.m"
  }
#line 1220 "prog_io_util.m"
}

#line 1220 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____ordinary_state_dot_colon_var_1_0(
#line 1220 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_13,
#line 1220 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 1220 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 1220 "prog_io_util.m"
{
#line 1220 "prog_io_util.m"
  {
#line 1220 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1220 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_11 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 1220 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_12 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 1220 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_11 == parse_tree__prog_io_util__CastY_12);
#line 1220 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1220 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1220 "prog_io_util.m"
    else
#line 1220 "prog_io_util.m"
#line 1220 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) {
#line 1220 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1220 "prog_io_util.m"
        case (MR_Integer) 0:
#line 1220 "prog_io_util.m"
          {
#line 1220 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1220 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_4_4;

#line 1220 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1220 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1220 "prog_io_util.m"
              {
#line 1220 "prog_io_util.m"
                parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6093 "parse_tree.prog_io_util.c"
                {
#line 6095 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_13, parse_tree__prog_io_util__V_3_3, parse_tree__prog_io_util__V_4_4);
                }
#line 1220 "prog_io_util.m"
              }
#line 1220 "prog_io_util.m"
          }
#line 1220 "prog_io_util.m"
          break;
#line 1220 "prog_io_util.m"
        case (MR_Integer) 1:
#line 1220 "prog_io_util.m"
          {
#line 1220 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1220 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_6_6;

#line 1220 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1220 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1220 "prog_io_util.m"
              {
#line 1220 "prog_io_util.m"
                parse_tree__prog_io_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6121 "parse_tree.prog_io_util.c"
                {
#line 6123 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_13, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_6_6);
                }
#line 1220 "prog_io_util.m"
              }
#line 1220 "prog_io_util.m"
          }
#line 1220 "prog_io_util.m"
          break;
#line 1220 "prog_io_util.m"
        case (MR_Integer) 2:
#line 1220 "prog_io_util.m"
          {
#line 1220 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1220 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_8_8;

#line 1220 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1220 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1220 "prog_io_util.m"
              {
#line 1220 "prog_io_util.m"
                parse_tree__prog_io_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6149 "parse_tree.prog_io_util.c"
                {
#line 6151 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_13, parse_tree__prog_io_util__V_7_7, parse_tree__prog_io_util__V_8_8);
                }
#line 1220 "prog_io_util.m"
              }
#line 1220 "prog_io_util.m"
          }
#line 1220 "prog_io_util.m"
          break;
#line 1220 "prog_io_util.m"
        case (MR_Integer) 3:
#line 1220 "prog_io_util.m"
          {
#line 1220 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1220 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_10_10;

#line 1220 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 1220 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1220 "prog_io_util.m"
              {
#line 1220 "prog_io_util.m"
                parse_tree__prog_io_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6177 "parse_tree.prog_io_util.c"
                {
#line 6179 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = mercury__term____Unify____var_1_0(parse_tree__prog_io_util__TypeInfo_for_T_13, parse_tree__prog_io_util__V_9_9, parse_tree__prog_io_util__V_10_10);
                }
#line 1220 "prog_io_util.m"
              }
#line 1220 "prog_io_util.m"
          }
#line 1220 "prog_io_util.m"
          break;
#line 1220 "prog_io_util.m"
      }
#line 1220 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1220 "prog_io_util.m"
  }
#line 1220 "prog_io_util.m"
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

#line 6225 "parse_tree.prog_io_util.c"
    {
#line 6227 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6229 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6231 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_6));
#line 6233 "parse_tree.prog_io_util.c"
    }
#line 6235 "parse_tree.prog_io_util.c"
    {
#line 6237 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6239 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 6241 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_6));
#line 6243 "parse_tree.prog_io_util.c"
    }
#line 6245 "parse_tree.prog_io_util.c"
    {
#line 6247 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6249 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 6251 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_13_13, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_9_9));
#line 6253 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_13_13, 2) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_11_11));
#line 6255 "parse_tree.prog_io_util.c"
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

#line 6295 "parse_tree.prog_io_util.c"
    {
#line 6297 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6299 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6301 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_5));
#line 6303 "parse_tree.prog_io_util.c"
    }
#line 6305 "parse_tree.prog_io_util.c"
    {
#line 6307 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6309 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 6311 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_10_10, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_5));
#line 6313 "parse_tree.prog_io_util.c"
    }
#line 6315 "parse_tree.prog_io_util.c"
    {
#line 6317 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6319 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_12_12, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 6321 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_12_12, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_8_8));
#line 6323 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_12_12, 2) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_10_10));
#line 6325 "parse_tree.prog_io_util.c"
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

#line 6365 "parse_tree.prog_io_util.c"
    {
#line 6367 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6369 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
#line 6371 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_9_9, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_6));
#line 6373 "parse_tree.prog_io_util.c"
    }
#line 6375 "parse_tree.prog_io_util.c"
    {
#line 6377 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6379 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6381 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_11_11, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_9_9));
#line 6383 "parse_tree.prog_io_util.c"
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

#line 6421 "parse_tree.prog_io_util.c"
    {
#line 6423 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6425 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
#line 6427 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_8_8, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_5));
#line 6429 "parse_tree.prog_io_util.c"
    }
#line 6431 "parse_tree.prog_io_util.c"
    {
#line 6433 "parse_tree.prog_io_util.c"
      parse_tree__prog_io_util__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6435 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6437 "parse_tree.prog_io_util.c"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_10_10, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_8_8));
#line 6439 "parse_tree.prog_io_util.c"
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
#line 6547 "parse_tree.prog_io_util.c"
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
#line 6576 "parse_tree.prog_io_util.c"
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
#line 6595 "parse_tree.prog_io_util.c"
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
#line 6617 "parse_tree.prog_io_util.c"
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
#line 6637 "parse_tree.prog_io_util.c"
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
#line 6657 "parse_tree.prog_io_util.c"
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
#line 6740 "parse_tree.prog_io_util.c"
            parse_tree__prog_io_util__TypeInfo_19_19 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[5];
#line 6742 "parse_tree.prog_io_util.c"
            {
#line 6744 "parse_tree.prog_io_util.c"
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
#line 6786 "parse_tree.prog_io_util.c"
            {
#line 6788 "parse_tree.prog_io_util.c"
              parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T1_15, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_9_9);
            }
#line 57 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 57 "prog_io_util.m"
              {
#line 6795 "parse_tree.prog_io_util.c"
                {
#line 6797 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T2_16, parse_tree__prog_io_util__V_6_6, parse_tree__prog_io_util__V_10_10);
                }
#line 57 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 57 "prog_io_util.m"
                  {
#line 6804 "parse_tree.prog_io_util.c"
                    {
#line 6806 "parse_tree.prog_io_util.c"
                      parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T3_17, parse_tree__prog_io_util__V_7_7, parse_tree__prog_io_util__V_11_11);
                    }
#line 57 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 6811 "parse_tree.prog_io_util.c"
                      {
#line 6813 "parse_tree.prog_io_util.c"
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
#line 6861 "parse_tree.prog_io_util.c"
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
#line 6890 "parse_tree.prog_io_util.c"
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
#line 6907 "parse_tree.prog_io_util.c"
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
#line 6927 "parse_tree.prog_io_util.c"
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
#line 6947 "parse_tree.prog_io_util.c"
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
#line 7026 "parse_tree.prog_io_util.c"
            parse_tree__prog_io_util__TypeInfo_16_16 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[5];
#line 7028 "parse_tree.prog_io_util.c"
            {
#line 7030 "parse_tree.prog_io_util.c"
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
#line 7066 "parse_tree.prog_io_util.c"
            {
#line 7068 "parse_tree.prog_io_util.c"
              parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T1_13, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_8_8);
            }
#line 53 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 53 "prog_io_util.m"
              {
#line 7075 "parse_tree.prog_io_util.c"
                {
#line 7077 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T2_14, parse_tree__prog_io_util__V_6_6, parse_tree__prog_io_util__V_9_9);
                }
#line 53 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 7082 "parse_tree.prog_io_util.c"
                  {
#line 7084 "parse_tree.prog_io_util.c"
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
#line 7128 "parse_tree.prog_io_util.c"
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
#line 7157 "parse_tree.prog_io_util.c"
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
#line 7172 "parse_tree.prog_io_util.c"
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
#line 7190 "parse_tree.prog_io_util.c"
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
#line 7265 "parse_tree.prog_io_util.c"
            parse_tree__prog_io_util__TypeInfo_13_13 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[5];
#line 7267 "parse_tree.prog_io_util.c"
            {
#line 7269 "parse_tree.prog_io_util.c"
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
#line 7299 "parse_tree.prog_io_util.c"
            {
#line 7301 "parse_tree.prog_io_util.c"
              parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T1_11, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_7_7);
            }
#line 49 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 7306 "parse_tree.prog_io_util.c"
              {
#line 7308 "parse_tree.prog_io_util.c"
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
#line 7348 "parse_tree.prog_io_util.c"
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
#line 7377 "parse_tree.prog_io_util.c"
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
#line 7390 "parse_tree.prog_io_util.c"
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
#line 7462 "parse_tree.prog_io_util.c"
            parse_tree__prog_io_util__TypeInfo_10_10 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[5];
#line 7464 "parse_tree.prog_io_util.c"
            {
#line 7466 "parse_tree.prog_io_util.c"
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
#line 7490 "parse_tree.prog_io_util.c"
            {
#line 7492 "parse_tree.prog_io_util.c"
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

#line 719 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_inst_kind_1_0(
#line 719 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_18,
#line 719 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 719 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 719 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 719 "prog_io_util.m"
{
#line 719 "prog_io_util.m"
  {
#line 719 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 719 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_16 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 719 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_17 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 719 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_16 == parse_tree__prog_io_util__CastY_17);
#line 719 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 7532 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 719 "prog_io_util.m"
    else
#line 719 "prog_io_util.m"
#line 719 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) {
#line 719 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 719 "prog_io_util.m"
        case (MR_Integer) 0:
#line 719 "prog_io_util.m"
#line 719 "prog_io_util.m"
          switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 719 "prog_io_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 719 "prog_io_util.m"
            case (MR_Integer) 0:
#line 719 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 719 "prog_io_util.m"
              break;
#line 719 "prog_io_util.m"
            case (MR_Integer) 1:
#line 7556 "parse_tree.prog_io_util.c"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 719 "prog_io_util.m"
              break;
#line 719 "prog_io_util.m"
            case (MR_Integer) 2:
#line 7562 "parse_tree.prog_io_util.c"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 719 "prog_io_util.m"
              break;
#line 719 "prog_io_util.m"
          }
#line 719 "prog_io_util.m"
          break;
#line 719 "prog_io_util.m"
        case (MR_Integer) 1:
#line 719 "prog_io_util.m"
          {
#line 719 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 719 "prog_io_util.m"
#line 719 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 719 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 719 "prog_io_util.m"
              case (MR_Integer) 0:
#line 7584 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 719 "prog_io_util.m"
                break;
#line 719 "prog_io_util.m"
              case (MR_Integer) 1:
#line 719 "prog_io_util.m"
                {
#line 719 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 719 "prog_io_util.m"
                  {
#line 719 "prog_io_util.m"
                    parse_tree__prog_data____Compare____mer_inst_0_0(parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_23_23, parse_tree__prog_io_util__V_5_5);
#line 719 "prog_io_util.m"
                    return;
                  }
#line 719 "prog_io_util.m"
                }
#line 719 "prog_io_util.m"
                break;
#line 719 "prog_io_util.m"
              case (MR_Integer) 2:
#line 7608 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 719 "prog_io_util.m"
                break;
#line 719 "prog_io_util.m"
            }
#line 719 "prog_io_util.m"
          }
#line 719 "prog_io_util.m"
          break;
#line 719 "prog_io_util.m"
        case (MR_Integer) 2:
#line 719 "prog_io_util.m"
          {
#line 719 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 719 "prog_io_util.m"
#line 719 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 719 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 719 "prog_io_util.m"
              case (MR_Integer) 0:
#line 7632 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 719 "prog_io_util.m"
                break;
#line 719 "prog_io_util.m"
              case (MR_Integer) 1:
#line 7638 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 719 "prog_io_util.m"
                break;
#line 719 "prog_io_util.m"
              case (MR_Integer) 2:
#line 719 "prog_io_util.m"
                {
#line 719 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));

#line 719 "prog_io_util.m"
                  {
#line 719 "prog_io_util.m"
                    parse_tree__prog_io_util____Compare____known_compound_inst_kind_1_0(parse_tree__prog_io_util__TypeInfo_for_T_18, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_22_22, parse_tree__prog_io_util__V_12_12);
#line 719 "prog_io_util.m"
                    return;
                  }
#line 719 "prog_io_util.m"
                }
#line 719 "prog_io_util.m"
                break;
#line 719 "prog_io_util.m"
            }
#line 719 "prog_io_util.m"
          }
#line 719 "prog_io_util.m"
          break;
#line 719 "prog_io_util.m"
      }
#line 719 "prog_io_util.m"
  }
#line 719 "prog_io_util.m"
}

#line 719 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_inst_kind_1_0(
#line 719 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_11,
#line 719 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 719 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 719 "prog_io_util.m"
{
#line 719 "prog_io_util.m"
  {
#line 719 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 719 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_9 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 719 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_10 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 719 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_9 == parse_tree__prog_io_util__CastY_10);
#line 719 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 719 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 719 "prog_io_util.m"
    else
#line 719 "prog_io_util.m"
#line 719 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) {
#line 719 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 719 "prog_io_util.m"
        case (MR_Integer) 0:
#line 719 "prog_io_util.m"
          {
#line 719 "prog_io_util.m"
            MR_Integer parse_tree__prog_io_util__CastX_7 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 719 "prog_io_util.m"
            MR_Integer parse_tree__prog_io_util__CastY_8 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 719 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastY_8 == parse_tree__prog_io_util__CastX_7);
#line 719 "prog_io_util.m"
          }
#line 719 "prog_io_util.m"
          break;
#line 719 "prog_io_util.m"
        case (MR_Integer) 1:
#line 719 "prog_io_util.m"
          {
#line 719 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 719 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_4_4;

#line 719 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 719 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 719 "prog_io_util.m"
              {
#line 719 "prog_io_util.m"
                parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 7738 "parse_tree.prog_io_util.c"
                {
#line 7740 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__prog_io_util__V_3_3, parse_tree__prog_io_util__V_4_4);
                }
#line 719 "prog_io_util.m"
              }
#line 719 "prog_io_util.m"
          }
#line 719 "prog_io_util.m"
          break;
#line 719 "prog_io_util.m"
        case (MR_Integer) 2:
#line 719 "prog_io_util.m"
          {
#line 719 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 719 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_6_6;

#line 719 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 719 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 719 "prog_io_util.m"
              {
#line 719 "prog_io_util.m"
                parse_tree__prog_io_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 7766 "parse_tree.prog_io_util.c"
                {
#line 7768 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util____Unify____known_compound_inst_kind_1_0(parse_tree__prog_io_util__TypeInfo_for_T_11, parse_tree__prog_io_util__V_5_5, parse_tree__prog_io_util__V_6_6);
                }
#line 719 "prog_io_util.m"
              }
#line 719 "prog_io_util.m"
          }
#line 719 "prog_io_util.m"
          break;
#line 719 "prog_io_util.m"
      }
#line 719 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 719 "prog_io_util.m"
  }
#line 719 "prog_io_util.m"
}

#line 712 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util____Compare____known_compound_inst_kind_1_0(
#line 712 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_78,
#line 712 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 712 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 712 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 712 "prog_io_util.m"
{
#line 712 "prog_io_util.m"
  {
#line 712 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 712 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_76 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 712 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_77 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 712 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_76 == parse_tree__prog_io_util__CastY_77);
#line 712 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 7812 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 712 "prog_io_util.m"
    else
#line 712 "prog_io_util.m"
#line 712 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) {
#line 712 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 712 "prog_io_util.m"
        case (MR_Integer) 0:
#line 712 "prog_io_util.m"
          {
#line 712 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_82_82 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 712 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_83_83 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));

#line 712 "prog_io_util.m"
#line 712 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 712 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 712 "prog_io_util.m"
              case (MR_Integer) 0:
#line 712 "prog_io_util.m"
                {
#line 712 "prog_io_util.m"
                  MR_Box parse_tree__prog_io_util__V_6_6 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0));
#line 712 "prog_io_util.m"
                  MR_Box parse_tree__prog_io_util__V_7_7 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1));
#line 712 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_8_8;

#line 712 "prog_io_util.m"
                  {
#line 712 "prog_io_util.m"
                    mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, &parse_tree__prog_io_util__V_8_8, parse_tree__prog_io_util__V_83_83, parse_tree__prog_io_util__V_6_6);
                  }
#line 7851 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_8_8 == (MR_Integer) 0);
#line 712 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 712 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 712 "prog_io_util.m"
                    *parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__V_8_8;
#line 712 "prog_io_util.m"
                  else
#line 712 "prog_io_util.m"
                    {
#line 712 "prog_io_util.m"
                      mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_82_82, parse_tree__prog_io_util__V_7_7);
#line 712 "prog_io_util.m"
                      return;
                    }
#line 712 "prog_io_util.m"
                }
#line 712 "prog_io_util.m"
                break;
#line 712 "prog_io_util.m"
              case (MR_Integer) 1:
#line 7874 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 712 "prog_io_util.m"
                break;
#line 712 "prog_io_util.m"
              case (MR_Integer) 2:
#line 7880 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 712 "prog_io_util.m"
                break;
#line 712 "prog_io_util.m"
              case (MR_Integer) 3:
#line 712 "prog_io_util.m"
#line 712 "prog_io_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 712 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 712 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 7893 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 712 "prog_io_util.m"
                    break;
#line 712 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 7899 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 712 "prog_io_util.m"
                    break;
#line 712 "prog_io_util.m"
                }
#line 712 "prog_io_util.m"
                break;
#line 712 "prog_io_util.m"
            }
#line 712 "prog_io_util.m"
          }
#line 712 "prog_io_util.m"
          break;
#line 712 "prog_io_util.m"
        case (MR_Integer) 1:
#line 712 "prog_io_util.m"
          {
#line 712 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_80_80 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 712 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_81_81 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));

#line 712 "prog_io_util.m"
#line 712 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 712 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 712 "prog_io_util.m"
              case (MR_Integer) 0:
#line 7929 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 712 "prog_io_util.m"
                break;
#line 712 "prog_io_util.m"
              case (MR_Integer) 1:
#line 712 "prog_io_util.m"
                {
#line 712 "prog_io_util.m"
                  MR_Box parse_tree__prog_io_util__V_28_28 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0));
#line 712 "prog_io_util.m"
                  MR_Box parse_tree__prog_io_util__V_29_29 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1));
#line 712 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_30_30;

#line 712 "prog_io_util.m"
                  {
#line 712 "prog_io_util.m"
                    mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, &parse_tree__prog_io_util__V_30_30, parse_tree__prog_io_util__V_81_81, parse_tree__prog_io_util__V_28_28);
                  }
#line 7949 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_30_30 == (MR_Integer) 0);
#line 712 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 712 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 712 "prog_io_util.m"
                    *parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__V_30_30;
#line 712 "prog_io_util.m"
                  else
#line 712 "prog_io_util.m"
                    {
#line 712 "prog_io_util.m"
                      mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_80_80, parse_tree__prog_io_util__V_29_29);
#line 712 "prog_io_util.m"
                      return;
                    }
#line 712 "prog_io_util.m"
                }
#line 712 "prog_io_util.m"
                break;
#line 712 "prog_io_util.m"
              case (MR_Integer) 2:
#line 7972 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 712 "prog_io_util.m"
                break;
#line 712 "prog_io_util.m"
              case (MR_Integer) 3:
#line 712 "prog_io_util.m"
#line 712 "prog_io_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 712 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 712 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 7985 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 712 "prog_io_util.m"
                    break;
#line 712 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 7991 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 712 "prog_io_util.m"
                    break;
#line 712 "prog_io_util.m"
                }
#line 712 "prog_io_util.m"
                break;
#line 712 "prog_io_util.m"
            }
#line 712 "prog_io_util.m"
          }
#line 712 "prog_io_util.m"
          break;
#line 712 "prog_io_util.m"
        case (MR_Integer) 2:
#line 712 "prog_io_util.m"
          {
#line 712 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_79_79 = (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));

#line 712 "prog_io_util.m"
#line 712 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 712 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 712 "prog_io_util.m"
              case (MR_Integer) 0:
#line 8019 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 712 "prog_io_util.m"
                break;
#line 712 "prog_io_util.m"
              case (MR_Integer) 1:
#line 8025 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 712 "prog_io_util.m"
                break;
#line 712 "prog_io_util.m"
              case (MR_Integer) 2:
#line 712 "prog_io_util.m"
                {
#line 712 "prog_io_util.m"
                  MR_Box parse_tree__prog_io_util__V_47_47 = (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0));

#line 712 "prog_io_util.m"
                  {
#line 712 "prog_io_util.m"
                    mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_79_79, parse_tree__prog_io_util__V_47_47);
#line 712 "prog_io_util.m"
                    return;
                  }
#line 712 "prog_io_util.m"
                }
#line 712 "prog_io_util.m"
                break;
#line 712 "prog_io_util.m"
              case (MR_Integer) 3:
#line 712 "prog_io_util.m"
#line 712 "prog_io_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 712 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 712 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 8056 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 712 "prog_io_util.m"
                    break;
#line 712 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 8062 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 712 "prog_io_util.m"
                    break;
#line 712 "prog_io_util.m"
                }
#line 712 "prog_io_util.m"
                break;
#line 712 "prog_io_util.m"
            }
#line 712 "prog_io_util.m"
          }
#line 712 "prog_io_util.m"
          break;
#line 712 "prog_io_util.m"
        case (MR_Integer) 3:
#line 712 "prog_io_util.m"
#line 712 "prog_io_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)))) {
#line 712 "prog_io_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 712 "prog_io_util.m"
            case (MR_Integer) 0:
#line 712 "prog_io_util.m"
              {
#line 712 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_85_85 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));

#line 712 "prog_io_util.m"
#line 712 "prog_io_util.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 712 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 712 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 8097 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 712 "prog_io_util.m"
                    break;
#line 712 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 8103 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 712 "prog_io_util.m"
                    break;
#line 712 "prog_io_util.m"
                  case (MR_Integer) 2:
#line 8109 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 712 "prog_io_util.m"
                    break;
#line 712 "prog_io_util.m"
                  case (MR_Integer) 3:
#line 712 "prog_io_util.m"
#line 712 "prog_io_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 712 "prog_io_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 712 "prog_io_util.m"
                      case (MR_Integer) 0:
#line 712 "prog_io_util.m"
                        {
#line 712 "prog_io_util.m"
                          MR_Box parse_tree__prog_io_util__V_61_61 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1));

#line 712 "prog_io_util.m"
                          {
#line 712 "prog_io_util.m"
                            mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_85_85, parse_tree__prog_io_util__V_61_61);
#line 712 "prog_io_util.m"
                            return;
                          }
#line 712 "prog_io_util.m"
                        }
#line 712 "prog_io_util.m"
                        break;
#line 712 "prog_io_util.m"
                      case (MR_Integer) 1:
#line 8140 "parse_tree.prog_io_util.c"
                        *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 712 "prog_io_util.m"
                        break;
#line 712 "prog_io_util.m"
                    }
#line 712 "prog_io_util.m"
                    break;
#line 712 "prog_io_util.m"
                }
#line 712 "prog_io_util.m"
              }
#line 712 "prog_io_util.m"
              break;
#line 712 "prog_io_util.m"
            case (MR_Integer) 1:
#line 712 "prog_io_util.m"
              {
#line 712 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_84_84 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));

#line 712 "prog_io_util.m"
#line 712 "prog_io_util.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 712 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 712 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 8168 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 712 "prog_io_util.m"
                    break;
#line 712 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 8174 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 712 "prog_io_util.m"
                    break;
#line 712 "prog_io_util.m"
                  case (MR_Integer) 2:
#line 8180 "parse_tree.prog_io_util.c"
                    *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 712 "prog_io_util.m"
                    break;
#line 712 "prog_io_util.m"
                  case (MR_Integer) 3:
#line 712 "prog_io_util.m"
#line 712 "prog_io_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 712 "prog_io_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 712 "prog_io_util.m"
                      case (MR_Integer) 0:
#line 8193 "parse_tree.prog_io_util.c"
                        *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 712 "prog_io_util.m"
                        break;
#line 712 "prog_io_util.m"
                      case (MR_Integer) 1:
#line 712 "prog_io_util.m"
                        {
#line 712 "prog_io_util.m"
                          MR_Box parse_tree__prog_io_util__V_75_75 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1));

#line 712 "prog_io_util.m"
                          {
#line 712 "prog_io_util.m"
                            mercury__builtin__compare_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_78, parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_84_84, parse_tree__prog_io_util__V_75_75);
#line 712 "prog_io_util.m"
                            return;
                          }
#line 712 "prog_io_util.m"
                        }
#line 712 "prog_io_util.m"
                        break;
#line 712 "prog_io_util.m"
                    }
#line 712 "prog_io_util.m"
                    break;
#line 712 "prog_io_util.m"
                }
#line 712 "prog_io_util.m"
              }
#line 712 "prog_io_util.m"
              break;
#line 712 "prog_io_util.m"
          }
#line 712 "prog_io_util.m"
          break;
#line 712 "prog_io_util.m"
      }
#line 712 "prog_io_util.m"
  }
#line 712 "prog_io_util.m"
}

#line 712 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____known_compound_inst_kind_1_0(
#line 712 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_19,
#line 712 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 712 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 712 "prog_io_util.m"
{
#line 712 "prog_io_util.m"
  {
#line 712 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 712 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_17 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 712 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_18 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 712 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_17 == parse_tree__prog_io_util__CastY_18);
#line 712 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 712 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 712 "prog_io_util.m"
    else
#line 712 "prog_io_util.m"
#line 712 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) {
#line 712 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 712 "prog_io_util.m"
        case (MR_Integer) 0:
#line 712 "prog_io_util.m"
          {
#line 712 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_3_3 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0));
#line 712 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_4_4 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1));
#line 712 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_5_5;
#line 712 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_6_6;

#line 712 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 712 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 712 "prog_io_util.m"
              {
#line 712 "prog_io_util.m"
                parse_tree__prog_io_util__V_5_5 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));
#line 712 "prog_io_util.m"
                parse_tree__prog_io_util__V_6_6 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 8292 "parse_tree.prog_io_util.c"
                {
#line 8294 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_3_3, parse_tree__prog_io_util__V_5_5);
                }
#line 712 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 8299 "parse_tree.prog_io_util.c"
                  {
#line 8301 "parse_tree.prog_io_util.c"
                    return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_4_4, parse_tree__prog_io_util__V_6_6);
                  }
#line 712 "prog_io_util.m"
              }
#line 712 "prog_io_util.m"
          }
#line 712 "prog_io_util.m"
          break;
#line 712 "prog_io_util.m"
        case (MR_Integer) 1:
#line 712 "prog_io_util.m"
          {
#line 712 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_7_7 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0));
#line 712 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_8_8 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1));
#line 712 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_9_9;
#line 712 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_10_10;

#line 712 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 712 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 712 "prog_io_util.m"
              {
#line 712 "prog_io_util.m"
                parse_tree__prog_io_util__V_9_9 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));
#line 712 "prog_io_util.m"
                parse_tree__prog_io_util__V_10_10 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 8333 "parse_tree.prog_io_util.c"
                {
#line 8335 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_7_7, parse_tree__prog_io_util__V_9_9);
                }
#line 712 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 8340 "parse_tree.prog_io_util.c"
                  {
#line 8342 "parse_tree.prog_io_util.c"
                    return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_8_8, parse_tree__prog_io_util__V_10_10);
                  }
#line 712 "prog_io_util.m"
              }
#line 712 "prog_io_util.m"
          }
#line 712 "prog_io_util.m"
          break;
#line 712 "prog_io_util.m"
        case (MR_Integer) 2:
#line 712 "prog_io_util.m"
          {
#line 712 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_11_11 = (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0));
#line 712 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_12_12;

#line 712 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 712 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 712 "prog_io_util.m"
              {
#line 712 "prog_io_util.m"
                parse_tree__prog_io_util__V_12_12 = (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0));
#line 8368 "parse_tree.prog_io_util.c"
                {
#line 8370 "parse_tree.prog_io_util.c"
                  return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_11_11, parse_tree__prog_io_util__V_12_12);
                }
#line 712 "prog_io_util.m"
              }
#line 712 "prog_io_util.m"
          }
#line 712 "prog_io_util.m"
          break;
#line 712 "prog_io_util.m"
        case (MR_Integer) 3:
#line 712 "prog_io_util.m"
#line 712 "prog_io_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)))) {
#line 712 "prog_io_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 712 "prog_io_util.m"
            case (MR_Integer) 0:
#line 712 "prog_io_util.m"
              {
#line 712 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_13_13 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1));
#line 712 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_14_14;

#line 712 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 712 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 712 "prog_io_util.m"
                  {
#line 712 "prog_io_util.m"
                    parse_tree__prog_io_util__V_14_14 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 8403 "parse_tree.prog_io_util.c"
                    {
#line 8405 "parse_tree.prog_io_util.c"
                      return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_13_13, parse_tree__prog_io_util__V_14_14);
                    }
#line 712 "prog_io_util.m"
                  }
#line 712 "prog_io_util.m"
              }
#line 712 "prog_io_util.m"
              break;
#line 712 "prog_io_util.m"
            case (MR_Integer) 1:
#line 712 "prog_io_util.m"
              {
#line 712 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_15_15 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1));
#line 712 "prog_io_util.m"
                MR_Box parse_tree__prog_io_util__V_16_16;

#line 712 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 712 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 712 "prog_io_util.m"
                  {
#line 712 "prog_io_util.m"
                    parse_tree__prog_io_util__V_16_16 = (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1));
#line 8431 "parse_tree.prog_io_util.c"
                    {
#line 8433 "parse_tree.prog_io_util.c"
                      return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_19, parse_tree__prog_io_util__V_15_15, parse_tree__prog_io_util__V_16_16);
                    }
#line 712 "prog_io_util.m"
                  }
#line 712 "prog_io_util.m"
              }
#line 712 "prog_io_util.m"
              break;
#line 712 "prog_io_util.m"
          }
#line 712 "prog_io_util.m"
          break;
#line 712 "prog_io_util.m"
      }
#line 712 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 712 "prog_io_util.m"
  }
#line 712 "prog_io_util.m"
}

#line 214 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____decl_attrs_0_0(
#line 214 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 214 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 214 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 214 "prog_io_util.m"
{
#line 214 "prog_io_util.m"
  {
#line 214 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 214 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_4 = parse_tree__prog_io_util__HeadVar__2_2;
#line 214 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_5 = parse_tree__prog_io_util__HeadVar__3_3;

#line 214 "prog_io_util.m"
    {
#line 214 "prog_io_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[4], parse_tree__prog_io_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar2_5)));
#line 214 "prog_io_util.m"
      return;
    }
#line 214 "prog_io_util.m"
  }
#line 214 "prog_io_util.m"
}

#line 214 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____decl_attrs_0_0(
#line 214 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 214 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 214 "prog_io_util.m"
{
#line 214 "prog_io_util.m"
  {
#line 214 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 214 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar1_3 = parse_tree__prog_io_util__HeadVar__1_1;
#line 214 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Cast_HeadVar2_4 = parse_tree__prog_io_util__HeadVar__2_2;

#line 214 "prog_io_util.m"
    {
#line 214 "prog_io_util.m"
      return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[4], ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_io_util__Cast_HeadVar2_4)));
    }
#line 214 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 214 "prog_io_util.m"
  }
#line 214 "prog_io_util.m"
}

#line 199 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util____Compare____decl_attribute_0_0(
#line 199 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__1_1,
#line 199 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 199 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__3_3)
#line 199 "prog_io_util.m"
{
#line 199 "prog_io_util.m"
  {
#line 199 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 199 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_46 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;
#line 199 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_47 = (MR_Integer) parse_tree__prog_io_util__HeadVar__3_3;

#line 199 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_46 == parse_tree__prog_io_util__CastY_47);
#line 199 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 8541 "parse_tree.prog_io_util.c"
      *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 199 "prog_io_util.m"
    else
#line 199 "prog_io_util.m"
#line 199 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) {
#line 199 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 199 "prog_io_util.m"
        case (MR_Integer) 0:
#line 199 "prog_io_util.m"
#line 199 "prog_io_util.m"
          switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 199 "prog_io_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 199 "prog_io_util.m"
            case (MR_Integer) 0:
#line 199 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 0;
#line 199 "prog_io_util.m"
              break;
#line 199 "prog_io_util.m"
            case (MR_Integer) 1:
#line 8565 "parse_tree.prog_io_util.c"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 199 "prog_io_util.m"
              break;
#line 199 "prog_io_util.m"
            case (MR_Integer) 2:
#line 8571 "parse_tree.prog_io_util.c"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 199 "prog_io_util.m"
              break;
#line 199 "prog_io_util.m"
            case (MR_Integer) 3:
#line 8577 "parse_tree.prog_io_util.c"
              *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 199 "prog_io_util.m"
              break;
#line 199 "prog_io_util.m"
          }
#line 199 "prog_io_util.m"
          break;
#line 199 "prog_io_util.m"
        case (MR_Integer) 1:
#line 199 "prog_io_util.m"
          {
#line 199 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 199 "prog_io_util.m"
#line 199 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 199 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 199 "prog_io_util.m"
              case (MR_Integer) 0:
#line 8599 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 199 "prog_io_util.m"
                break;
#line 199 "prog_io_util.m"
              case (MR_Integer) 1:
#line 199 "prog_io_util.m"
                {
#line 199 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));
#line 199 "prog_io_util.m"
                  MR_Integer parse_tree__prog_io_util__V_60_60 = (MR_Integer) parse_tree__prog_io_util__V_55_55;
#line 199 "prog_io_util.m"
                  MR_Integer parse_tree__prog_io_util__V_61_61 = (MR_Integer) parse_tree__prog_io_util__V_5_5;

#line 199 "prog_io_util.m"
                  {
#line 199 "prog_io_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_util__HeadVar__1_1, parse_tree__prog_io_util__V_60_60, parse_tree__prog_io_util__V_61_61);
#line 199 "prog_io_util.m"
                    return;
                  }
#line 199 "prog_io_util.m"
                }
#line 199 "prog_io_util.m"
                break;
#line 199 "prog_io_util.m"
              case (MR_Integer) 2:
#line 8627 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 199 "prog_io_util.m"
                break;
#line 199 "prog_io_util.m"
              case (MR_Integer) 3:
#line 8633 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 199 "prog_io_util.m"
                break;
#line 199 "prog_io_util.m"
            }
#line 199 "prog_io_util.m"
          }
#line 199 "prog_io_util.m"
          break;
#line 199 "prog_io_util.m"
        case (MR_Integer) 2:
#line 199 "prog_io_util.m"
          {
#line 199 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 199 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 199 "prog_io_util.m"
#line 199 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 199 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 199 "prog_io_util.m"
              case (MR_Integer) 0:
#line 8659 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 199 "prog_io_util.m"
                break;
#line 199 "prog_io_util.m"
              case (MR_Integer) 1:
#line 8665 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 199 "prog_io_util.m"
                break;
#line 199 "prog_io_util.m"
              case (MR_Integer) 2:
#line 199 "prog_io_util.m"
                {
#line 199 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));
#line 199 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1)));
#line 199 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_20_20;
#line 199 "prog_io_util.m"
                  MR_Integer parse_tree__prog_io_util__V_62_62 = (MR_Integer) parse_tree__prog_io_util__V_57_57;
#line 199 "prog_io_util.m"
                  MR_Integer parse_tree__prog_io_util__V_63_63 = (MR_Integer) parse_tree__prog_io_util__V_18_18;

#line 199 "prog_io_util.m"
                  {
#line 199 "prog_io_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_io_util__V_20_20, parse_tree__prog_io_util__V_62_62, parse_tree__prog_io_util__V_63_63);
                  }
#line 8689 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_20_20 == (MR_Integer) 0);
#line 199 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 199 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 199 "prog_io_util.m"
                    *parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__V_20_20;
#line 199 "prog_io_util.m"
                  else
#line 199 "prog_io_util.m"
                    {
#line 199 "prog_io_util.m"
                      {
#line 199 "prog_io_util.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[3], parse_tree__prog_io_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_util__V_56_56)), ((MR_Box) (parse_tree__prog_io_util__V_19_19)));
#line 199 "prog_io_util.m"
                        return;
                      }
#line 199 "prog_io_util.m"
                    }
#line 199 "prog_io_util.m"
                }
#line 199 "prog_io_util.m"
                break;
#line 199 "prog_io_util.m"
              case (MR_Integer) 3:
#line 8716 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 199 "prog_io_util.m"
                break;
#line 199 "prog_io_util.m"
            }
#line 199 "prog_io_util.m"
          }
#line 199 "prog_io_util.m"
          break;
#line 199 "prog_io_util.m"
        case (MR_Integer) 3:
#line 199 "prog_io_util.m"
          {
#line 199 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 199 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 199 "prog_io_util.m"
#line 199 "prog_io_util.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__3_3)) {
#line 199 "prog_io_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 199 "prog_io_util.m"
              case (MR_Integer) 0:
#line 8742 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 1;
#line 199 "prog_io_util.m"
                break;
#line 199 "prog_io_util.m"
              case (MR_Integer) 1:
#line 8748 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 199 "prog_io_util.m"
                break;
#line 199 "prog_io_util.m"
              case (MR_Integer) 2:
#line 8754 "parse_tree.prog_io_util.c"
                *parse_tree__prog_io_util__HeadVar__1_1 = (MR_Integer) 2;
#line 199 "prog_io_util.m"
                break;
#line 199 "prog_io_util.m"
              case (MR_Integer) 3:
#line 199 "prog_io_util.m"
                {
#line 199 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 0)));
#line 199 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__3_3, (MR_Integer) 1)));
#line 199 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_38_38;
#line 199 "prog_io_util.m"
                  MR_Integer parse_tree__prog_io_util__V_58_58 = (MR_Integer) parse_tree__prog_io_util__V_54_54;
#line 199 "prog_io_util.m"
                  MR_Integer parse_tree__prog_io_util__V_59_59 = (MR_Integer) parse_tree__prog_io_util__V_36_36;

#line 199 "prog_io_util.m"
                  {
#line 199 "prog_io_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_io_util__V_38_38, parse_tree__prog_io_util__V_58_58, parse_tree__prog_io_util__V_59_59);
                  }
#line 8778 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_38_38 == (MR_Integer) 0);
#line 199 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 199 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 199 "prog_io_util.m"
                    *parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__V_38_38;
#line 199 "prog_io_util.m"
                  else
#line 199 "prog_io_util.m"
                    {
#line 199 "prog_io_util.m"
                      {
#line 199 "prog_io_util.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[0], parse_tree__prog_io_util__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_util__V_53_53)), ((MR_Box) (parse_tree__prog_io_util__V_37_37)));
#line 199 "prog_io_util.m"
                        return;
                      }
#line 199 "prog_io_util.m"
                    }
#line 199 "prog_io_util.m"
                }
#line 199 "prog_io_util.m"
                break;
#line 199 "prog_io_util.m"
            }
#line 199 "prog_io_util.m"
          }
#line 199 "prog_io_util.m"
          break;
#line 199 "prog_io_util.m"
      }
#line 199 "prog_io_util.m"
  }
#line 199 "prog_io_util.m"
}

#line 199 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util____Unify____decl_attribute_0_0(
#line 199 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 199 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2)
#line 199 "prog_io_util.m"
{
#line 199 "prog_io_util.m"
  {
#line 199 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 199 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastX_15 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 199 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__CastY_16 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 199 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastX_15 == parse_tree__prog_io_util__CastY_16);
#line 199 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 199 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 199 "prog_io_util.m"
    else
#line 199 "prog_io_util.m"
#line 199 "prog_io_util.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) {
#line 199 "prog_io_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 199 "prog_io_util.m"
        case (MR_Integer) 0:
#line 199 "prog_io_util.m"
          {
#line 199 "prog_io_util.m"
            MR_Integer parse_tree__prog_io_util__CastX_13 = (MR_Integer) parse_tree__prog_io_util__HeadVar__1_1;
#line 199 "prog_io_util.m"
            MR_Integer parse_tree__prog_io_util__CastY_14 = (MR_Integer) parse_tree__prog_io_util__HeadVar__2_2;

#line 199 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__CastY_14 == parse_tree__prog_io_util__CastX_13);
#line 199 "prog_io_util.m"
          }
#line 199 "prog_io_util.m"
          break;
#line 199 "prog_io_util.m"
        case (MR_Integer) 1:
#line 199 "prog_io_util.m"
          {
#line 199 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 199 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_4_4;

#line 199 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 199 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 199 "prog_io_util.m"
              {
#line 199 "prog_io_util.m"
                parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 8879 "parse_tree.prog_io_util.c"
                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_3_3 == parse_tree__prog_io_util__V_4_4);
#line 199 "prog_io_util.m"
              }
#line 199 "prog_io_util.m"
          }
#line 199 "prog_io_util.m"
          break;
#line 199 "prog_io_util.m"
        case (MR_Integer) 2:
#line 199 "prog_io_util.m"
          {
#line 199 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TypeInfo_18_18;
#line 199 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 199 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 199 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_7_7;
#line 199 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_8_8;

#line 199 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 199 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 199 "prog_io_util.m"
              {
#line 199 "prog_io_util.m"
                parse_tree__prog_io_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 199 "prog_io_util.m"
                parse_tree__prog_io_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8912 "parse_tree.prog_io_util.c"
                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_5_5 == parse_tree__prog_io_util__V_7_7);
#line 199 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 199 "prog_io_util.m"
                  {
#line 8918 "parse_tree.prog_io_util.c"
                    parse_tree__prog_io_util__TypeInfo_18_18 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[3];
#line 8920 "parse_tree.prog_io_util.c"
                    {
#line 8922 "parse_tree.prog_io_util.c"
                      return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_18_18, ((MR_Box) (parse_tree__prog_io_util__V_6_6)), ((MR_Box) (parse_tree__prog_io_util__V_8_8)));
                    }
#line 199 "prog_io_util.m"
                  }
#line 199 "prog_io_util.m"
              }
#line 199 "prog_io_util.m"
          }
#line 199 "prog_io_util.m"
          break;
#line 199 "prog_io_util.m"
        case (MR_Integer) 3:
#line 199 "prog_io_util.m"
          {
#line 199 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__TypeInfo_17_17;
#line 199 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 199 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 199 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_11_11;
#line 199 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_12_12;

#line 199 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 199 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 199 "prog_io_util.m"
              {
#line 199 "prog_io_util.m"
                parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 199 "prog_io_util.m"
                parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8958 "parse_tree.prog_io_util.c"
                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_9_9 == parse_tree__prog_io_util__V_11_11);
#line 199 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 199 "prog_io_util.m"
                  {
#line 8964 "parse_tree.prog_io_util.c"
                    parse_tree__prog_io_util__TypeInfo_17_17 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[0];
#line 8966 "parse_tree.prog_io_util.c"
                    {
#line 8968 "parse_tree.prog_io_util.c"
                      return parse_tree__prog_io_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_util__TypeInfo_17_17, ((MR_Box) (parse_tree__prog_io_util__V_10_10)), ((MR_Box) (parse_tree__prog_io_util__V_12_12)));
                    }
#line 199 "prog_io_util.m"
                  }
#line 199 "prog_io_util.m"
              }
#line 199 "prog_io_util.m"
          }
#line 199 "prog_io_util.m"
          break;
#line 199 "prog_io_util.m"
      }
#line 199 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 199 "prog_io_util.m"
  }
#line 199 "prog_io_util.m"
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
#line 9029 "parse_tree.prog_io_util.c"
  {
#line 9031 "parse_tree.prog_io_util.c"
    MR_bool parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__HeadVar__2_1 == parse_tree__prog_io_util__HeadVar__2_2);

#line 9034 "parse_tree.prog_io_util.c"
    return parse_tree__prog_io_util__succeeded;
#line 9036 "parse_tree.prog_io_util.c"
  }
#line 137 "prog_io_util.m"
}

#line 1345 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(
#line 1345 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_43,
#line 1345 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_6,
#line 1345 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_7,
#line 1345 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Expected_8,
#line 1345 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_9,
#line 1345 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Spec_10)
#line 1345 "prog_io_util.m"
{
#line 1349 "prog_io_util.m"
  {
#line 1349 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1349 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__TermStr_11;
#line 1349 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Pieces_12;
#line 1349 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 1349 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_15_15;
#line 1349 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_18_18;
#line 1349 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_19_19;
#line 1349 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_20_20;
#line 1349 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_23_23;
#line 1349 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_26_26;
#line 1349 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_27_27;
#line 1349 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_36_36;
#line 1349 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_37_37;
#line 1349 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_38_38;
#line 1349 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_39_39;
#line 1349 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_40_40;

#line 1350 "prog_io_util.m"
    {
#line 1350 "prog_io_util.m"
      parse_tree__prog_io_util__TermStr_11 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_util__TypeInfo_for_T_43, parse_tree__prog_io_util__VarSet_7, parse_tree__prog_io_util__Term_9);
    }
#line 1352 "prog_io_util.m"
    {
#line 1352 "prog_io_util.m"
      parse_tree__prog_io_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1352 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1352 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io_util__Expected_8));
#line 1352 "prog_io_util.m"
    }
#line 1353 "prog_io_util.m"
    {
#line 1353 "prog_io_util.m"
      parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1353 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1353 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_11));
#line 1353 "prog_io_util.m"
    }
#line 1353 "prog_io_util.m"
    {
#line 1353 "prog_io_util.m"
      parse_tree__prog_io_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1353 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
#line 1353 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[11])));
#line 1353 "prog_io_util.m"
    }
#line 1353 "prog_io_util.m"
    {
#line 1353 "prog_io_util.m"
      parse_tree__prog_io_util__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1353 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_23_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[21])));
#line 1353 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_23_23, 1) = ((MR_Box) (parse_tree__prog_io_util__V_26_26));
#line 1353 "prog_io_util.m"
    }
#line 1352 "prog_io_util.m"
    {
#line 1352 "prog_io_util.m"
      parse_tree__prog_io_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1352 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[20])));
#line 1352 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, 1) = ((MR_Box) (parse_tree__prog_io_util__V_23_23));
#line 1352 "prog_io_util.m"
    }
#line 1352 "prog_io_util.m"
    {
#line 1352 "prog_io_util.m"
      parse_tree__prog_io_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1352 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, 0) = ((MR_Box) (parse_tree__prog_io_util__V_19_19));
#line 1352 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, 1) = ((MR_Box) (parse_tree__prog_io_util__V_20_20));
#line 1352 "prog_io_util.m"
    }
#line 1352 "prog_io_util.m"
    {
#line 1352 "prog_io_util.m"
      parse_tree__prog_io_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1352 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[19])));
#line 1352 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, 1) = ((MR_Box) (parse_tree__prog_io_util__V_18_18));
#line 1352 "prog_io_util.m"
    }
#line 1351 "prog_io_util.m"
    {
#line 1351 "prog_io_util.m"
      parse_tree__prog_io_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1351 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_13_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1351 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_13_13, 1) = ((MR_Box) (parse_tree__prog_io_util__V_15_15));
#line 1351 "prog_io_util.m"
    }
#line 1351 "prog_io_util.m"
    {
#line 1351 "prog_io_util.m"
      parse_tree__prog_io_util__Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_util__ContextPieces_6, parse_tree__prog_io_util__V_13_13);
    }
#line 1355 "prog_io_util.m"
    {
#line 1355 "prog_io_util.m"
      parse_tree__prog_io_util__V_38_38 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_util__TypeInfo_for_T_43, parse_tree__prog_io_util__Term_9);
    }
#line 1355 "prog_io_util.m"
    {
#line 1355 "prog_io_util.m"
      parse_tree__prog_io_util__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1355 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_12));
#line 1355 "prog_io_util.m"
    }
#line 1355 "prog_io_util.m"
    {
#line 1355 "prog_io_util.m"
      parse_tree__prog_io_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1355 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_util__V_40_40));
#line 1355 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1355 "prog_io_util.m"
    }
#line 1355 "prog_io_util.m"
    {
#line 1355 "prog_io_util.m"
      parse_tree__prog_io_util__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1355 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_util__V_38_38));
#line 1355 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_37_37, 1) = ((MR_Box) (parse_tree__prog_io_util__V_39_39));
#line 1355 "prog_io_util.m"
    }
#line 1355 "prog_io_util.m"
    {
#line 1355 "prog_io_util.m"
      parse_tree__prog_io_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1355 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_util__V_37_37));
#line 1355 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1355 "prog_io_util.m"
    }
#line 1354 "prog_io_util.m"
    {
#line 1354 "prog_io_util.m"
      MR_Word base;
#line 1354 "prog_io_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1354 "prog_io_util.m"
      *parse_tree__prog_io_util__Spec_10 = base;
#line 1354 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1354 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1354 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 1354 "prog_io_util.m"
    }
#line 1349 "prog_io_util.m"
  }
#line 1345 "prog_io_util.m"
}

#line 1325 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(
#line 1325 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_33,
#line 1325 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_5,
#line 1325 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_6,
#line 1325 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_7,
#line 1325 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Spec_8)
#line 1325 "prog_io_util.m"
{
#line 1328 "prog_io_util.m"
  {
#line 1328 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1328 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__TermStr_9;
#line 1328 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Pieces_10;
#line 1328 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;
#line 1328 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 1328 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_16_16;
#line 1328 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_17_17;
#line 1328 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_26_26;
#line 1328 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_27_27;
#line 1328 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_28_28;
#line 1328 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_29_29;
#line 1328 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_30_30;

#line 1329 "prog_io_util.m"
    {
#line 1329 "prog_io_util.m"
      parse_tree__prog_io_util__TermStr_9 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_util__TypeInfo_for_T_33, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__Term_7);
    }
#line 1331 "prog_io_util.m"
    {
#line 1331 "prog_io_util.m"
      parse_tree__prog_io_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1331 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1331 "prog_io_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_17_17, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_9));
#line 1331 "prog_io_util.m"
    }
#line 1331 "prog_io_util.m"
    {
#line 1331 "prog_io_util.m"
      parse_tree__prog_io_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1331 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 0) = ((MR_Box) (parse_tree__prog_io_util__V_17_17));
#line 1331 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[11])));
#line 1331 "prog_io_util.m"
    }
#line 1331 "prog_io_util.m"
    {
#line 1331 "prog_io_util.m"
      parse_tree__prog_io_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1331 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_13_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[18])));
#line 1331 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_13_13, 1) = ((MR_Box) (parse_tree__prog_io_util__V_16_16));
#line 1331 "prog_io_util.m"
    }
#line 1330 "prog_io_util.m"
    {
#line 1330 "prog_io_util.m"
      parse_tree__prog_io_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1330 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_11_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1330 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_11_11, 1) = ((MR_Box) (parse_tree__prog_io_util__V_13_13));
#line 1330 "prog_io_util.m"
    }
#line 1330 "prog_io_util.m"
    {
#line 1330 "prog_io_util.m"
      parse_tree__prog_io_util__Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_util__ContextPieces_5, parse_tree__prog_io_util__V_11_11);
    }
#line 1333 "prog_io_util.m"
    {
#line 1333 "prog_io_util.m"
      parse_tree__prog_io_util__V_28_28 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_util__TypeInfo_for_T_33, parse_tree__prog_io_util__Term_7);
    }
#line 1333 "prog_io_util.m"
    {
#line 1333 "prog_io_util.m"
      parse_tree__prog_io_util__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1333 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_10));
#line 1333 "prog_io_util.m"
    }
#line 1333 "prog_io_util.m"
    {
#line 1333 "prog_io_util.m"
      parse_tree__prog_io_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1333 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io_util__V_30_30));
#line 1333 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1333 "prog_io_util.m"
    }
#line 1333 "prog_io_util.m"
    {
#line 1333 "prog_io_util.m"
      parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1333 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_util__V_28_28));
#line 1333 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io_util__V_29_29));
#line 1333 "prog_io_util.m"
    }
#line 1333 "prog_io_util.m"
    {
#line 1333 "prog_io_util.m"
      parse_tree__prog_io_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1333 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
#line 1333 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1333 "prog_io_util.m"
    }
#line 1332 "prog_io_util.m"
    {
#line 1332 "prog_io_util.m"
      MR_Word base;
#line 1332 "prog_io_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1332 "prog_io_util.m"
      *parse_tree__prog_io_util__Spec_8 = base;
#line 1332 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1332 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1332 "prog_io_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_26_26));
#line 1332 "prog_io_util.m"
    }
#line 1328 "prog_io_util.m"
  }
#line 1325 "prog_io_util.m"
}

#line 1064 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__map_parser_one_or_more_4_p_0(
#line 1064 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_29,
#line 1064 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Parser_5,
#line 1064 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Head_6,
#line 1064 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Tail_7,
#line 1064 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_8)
#line 1064 "prog_io_util.m"
{
#line 1067 "prog_io_util.m"
  {
#line 1067 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1067 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__HeadResult_9;
#line 1068 "prog_io_util.m"
    void MR_CALL (* parse_tree__prog_io_util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Parser_5, (MR_Integer) 1)));
#line 1068 "prog_io_util.m"
    MR_Box parse_tree__prog_io_util__conv1_HeadResult_9;

#line 1068 "prog_io_util.m"
    {
#line 1068 "prog_io_util.m"
      parse_tree__prog_io_util__func_0(((MR_Box) parse_tree__prog_io_util__Parser_5), ((MR_Box) (parse_tree__prog_io_util__Head_6)), &parse_tree__prog_io_util__conv1_HeadResult_9);
    }
#line 1068 "prog_io_util.m"
    parse_tree__prog_io_util__HeadResult_9 = ((MR_Word) parse_tree__prog_io_util__conv1_HeadResult_9);
#line 1078 "prog_io_util.m"
    if ((parse_tree__prog_io_util__Tail_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1070 "prog_io_util.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadResult_9)) == (MR_mktag((MR_Integer) 0))))
#line 1073 "prog_io_util.m"
        *parse_tree__prog_io_util__Result_8 = (MR_Word) parse_tree__prog_io_util__HeadResult_9;
#line 1070 "prog_io_util.m"
      else
#line 1075 "prog_io_util.m"
        {
#line 1075 "prog_io_util.m"
          MR_Box parse_tree__prog_io_util__Item_11 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadResult_9, (MR_Integer) 0));
#line 1075 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_23_23;

#line 1076 "prog_io_util.m"
          {
#line 1076 "prog_io_util.m"
            parse_tree__prog_io_util__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1076 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_23_23, 0) = parse_tree__prog_io_util__Item_11;
#line 1076 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1076 "prog_io_util.m"
          }
#line 1076 "prog_io_util.m"
          {
#line 1076 "prog_io_util.m"
            MR_Word base;
#line 1076 "prog_io_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1076 "prog_io_util.m"
            *parse_tree__prog_io_util__Result_8 = base;
#line 1076 "prog_io_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_23_23));
#line 1076 "prog_io_util.m"
          }
#line 1075 "prog_io_util.m"
        }
#line 1078 "prog_io_util.m"
    else
#line 1079 "prog_io_util.m"
      {
#line 1079 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__HeadTail_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Tail_7, (MR_Integer) 0)));
#line 1079 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TailTail_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Tail_7, (MR_Integer) 1)));
#line 1079 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TailResult_14;

#line 1080 "prog_io_util.m"
        {
#line 1080 "prog_io_util.m"
          parse_tree__prog_io_util__map_parser_one_or_more_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_29, parse_tree__prog_io_util__Parser_5, parse_tree__prog_io_util__HeadTail_12, parse_tree__prog_io_util__TailTail_13, &parse_tree__prog_io_util__TailResult_14);
        }
#line 1085 "prog_io_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadResult_9)) == (MR_mktag((MR_Integer) 0))))
#line 1085 "prog_io_util.m"
          {
#line 1085 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadResult_9, (MR_Integer) 0)));

#line 1085 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__TailResult_14)) == (MR_mktag((MR_Integer) 0))))
#line 1082 "prog_io_util.m"
              {
#line 1082 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailSpecs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TailResult_14, (MR_Integer) 0)));
#line 1082 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_22_22;

#line 1084 "prog_io_util.m"
                {
#line 1084 "prog_io_util.m"
                  parse_tree__prog_io_util__V_22_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_util__V_31_31, parse_tree__prog_io_util__TailSpecs_16);
                }
#line 1084 "prog_io_util.m"
                {
#line 1084 "prog_io_util.m"
                  MR_Word base;
#line 1084 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1084 "prog_io_util.m"
                  *parse_tree__prog_io_util__Result_8 = base;
#line 1084 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_22_22));
#line 1084 "prog_io_util.m"
                }
#line 1082 "prog_io_util.m"
              }
#line 1085 "prog_io_util.m"
            else
#line 1088 "prog_io_util.m"
              *parse_tree__prog_io_util__Result_8 = (MR_Word) parse_tree__prog_io_util__HeadResult_9;
#line 1085 "prog_io_util.m"
          }
#line 1085 "prog_io_util.m"
        else
#line 1085 "prog_io_util.m"
          {
#line 1085 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_32_32 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadResult_9, (MR_Integer) 0));

#line 1085 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__TailResult_14)) == (MR_mktag((MR_Integer) 0))))
#line 1092 "prog_io_util.m"
              *parse_tree__prog_io_util__Result_8 = parse_tree__prog_io_util__TailResult_14;
#line 1085 "prog_io_util.m"
            else
#line 1094 "prog_io_util.m"
              {
#line 1094 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailItems_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TailResult_14, (MR_Integer) 0)));
#line 1094 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_21_21;

#line 1096 "prog_io_util.m"
                {
#line 1096 "prog_io_util.m"
                  parse_tree__prog_io_util__V_21_21 = mercury__list__one_or_more_cons_2_f_0(parse_tree__prog_io_util__TypeInfo_for_T_29, parse_tree__prog_io_util__V_32_32, parse_tree__prog_io_util__TailItems_20);
                }
#line 1096 "prog_io_util.m"
                {
#line 1096 "prog_io_util.m"
                  MR_Word base;
#line 1096 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1096 "prog_io_util.m"
                  *parse_tree__prog_io_util__Result_8 = base;
#line 1096 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_21_21));
#line 1096 "prog_io_util.m"
                }
#line 1094 "prog_io_util.m"
              }
#line 1085 "prog_io_util.m"
          }
#line 1079 "prog_io_util.m"
      }
#line 1067 "prog_io_util.m"
  }
#line 1064 "prog_io_util.m"
}

#line 978 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_bound_inst_3_p_0(
#line 978 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_4,
#line 978 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__InstTerm_5,
#line 978 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__BoundInst_6)
#line 978 "prog_io_util.m"
{
#line 981 "prog_io_util.m"
  {
#line 981 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__InstTerm_5)) == (MR_mktag((MR_Integer) 0)));
#line 981 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Functor_7;
#line 981 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Args0_8;
#line 981 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Args1_12;
#line 981 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__ConsId_14;
#line 981 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Args_21;
#line 982 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 982 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 982 "prog_io_util.m"
      {
#line 982 "prog_io_util.m"
        parse_tree__prog_io_util__Functor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__InstTerm_5, (MR_Integer) 0)));
#line 982 "prog_io_util.m"
        parse_tree__prog_io_util__Args0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__InstTerm_5, (MR_Integer) 1)));
#line 982 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__InstTerm_5, (MR_Integer) 2)));
#line 990 "prog_io_util.m"
#line 990 "prog_io_util.m"
        switch (MR_tag((MR_Word) parse_tree__prog_io_util__Functor_7)) {
#line 990 "prog_io_util.m"
          default:
#line 990 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 990 "prog_io_util.m"
            break;
#line 990 "prog_io_util.m"
          case (MR_Integer) 0:
#line 985 "prog_io_util.m"
            {
#line 985 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__TypeInfo_25_25;
#line 985 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__SymName_11;
#line 985 "prog_io_util.m"
              MR_Integer parse_tree__prog_io_util__Arity_13;
#line 985 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_22_22;

#line 986 "prog_io_util.m"
              {
#line 986 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_from_f_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__Functor_7, parse_tree__prog_io_util__Args0_8, &parse_tree__prog_io_util__SymName_11, &parse_tree__prog_io_util__Args1_12);
              }
#line 985 "prog_io_util.m"
              if (parse_tree__prog_io_util__succeeded)
#line 985 "prog_io_util.m"
                {
#line 9649 "parse_tree.prog_io_util.c"
                  parse_tree__prog_io_util__TypeInfo_25_25 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[0];
#line 988 "prog_io_util.m"
                  {
#line 988 "prog_io_util.m"
                    mercury__list__length_2_p_0(parse_tree__prog_io_util__TypeInfo_25_25, parse_tree__prog_io_util__Args1_12, &parse_tree__prog_io_util__Arity_13);
                  }
#line 989 "prog_io_util.m"
                  {
#line 989 "prog_io_util.m"
                    parse_tree__prog_io_util__V_22_22 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                  }
#line 989 "prog_io_util.m"
                  {
#line 989 "prog_io_util.m"
                    parse_tree__prog_io_util__ConsId_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 989 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__ConsId_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 989 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__ConsId_14, 1) = ((MR_Box) (parse_tree__prog_io_util__SymName_11));
#line 989 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__ConsId_14, 2) = ((MR_Box) (parse_tree__prog_io_util__Arity_13));
#line 989 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__ConsId_14, 3) = ((MR_Box) (parse_tree__prog_io_util__V_22_22));
#line 989 "prog_io_util.m"
                  }
#line 989 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 985 "prog_io_util.m"
                }
#line 985 "prog_io_util.m"
            }
#line 990 "prog_io_util.m"
            break;
#line 990 "prog_io_util.m"
          case (MR_Integer) 1:
#line 990 "prog_io_util.m"
          case (MR_Integer) 2:
#line 1000 "prog_io_util.m"
            {
#line 1000 "prog_io_util.m"
              MR_Integer parse_tree__prog_io_util__Arity_23;

#line 1001 "prog_io_util.m"
              parse_tree__prog_io_util__Args1_12 = parse_tree__prog_io_util__Args0_8;
#line 1002 "prog_io_util.m"
              {
#line 1002 "prog_io_util.m"
                mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[0], parse_tree__prog_io_util__Args1_12, &parse_tree__prog_io_util__Arity_23);
              }
#line 1003 "prog_io_util.m"
              {
#line 1003 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = parse_tree__prog_util__make_functor_cons_id_3_p_0(parse_tree__prog_io_util__Functor_7, parse_tree__prog_io_util__Arity_23, &parse_tree__prog_io_util__ConsId_14);
              }
#line 1000 "prog_io_util.m"
            }
#line 990 "prog_io_util.m"
            break;
#line 990 "prog_io_util.m"
          case (MR_Integer) 3:
#line 990 "prog_io_util.m"
#line 990 "prog_io_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Functor_7, (MR_Integer) 0)))) {
#line 990 "prog_io_util.m"
              default:
#line 990 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 990 "prog_io_util.m"
                break;
#line 990 "prog_io_util.m"
              case (MR_Integer) 0:
#line 990 "prog_io_util.m"
              case (MR_Integer) 1:
#line 1000 "prog_io_util.m"
                {
#line 1000 "prog_io_util.m"
                  MR_Integer parse_tree__prog_io_util__Arity_23;

#line 1001 "prog_io_util.m"
                  parse_tree__prog_io_util__Args1_12 = parse_tree__prog_io_util__Args0_8;
#line 1002 "prog_io_util.m"
                  {
#line 1002 "prog_io_util.m"
                    mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_io_util_scalar_common_1[0], parse_tree__prog_io_util__Args1_12, &parse_tree__prog_io_util__Arity_23);
                  }
#line 1003 "prog_io_util.m"
                  {
#line 1003 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = parse_tree__prog_util__make_functor_cons_id_3_p_0(parse_tree__prog_io_util__Functor_7, parse_tree__prog_io_util__Arity_23, &parse_tree__prog_io_util__ConsId_14);
                  }
#line 1000 "prog_io_util.m"
                }
#line 990 "prog_io_util.m"
                break;
#line 990 "prog_io_util.m"
            }
#line 990 "prog_io_util.m"
            break;
#line 990 "prog_io_util.m"
        }
#line 981 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 981 "prog_io_util.m"
          {
#line 1005 "prog_io_util.m"
            {
#line 1005 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__Args1_12, &parse_tree__prog_io_util__Args_21);
            }
#line 981 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 981 "prog_io_util.m"
              {
#line 1006 "prog_io_util.m"
                {
#line 1006 "prog_io_util.m"
                  MR_Word base;
#line 1006 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1006 "prog_io_util.m"
                  *parse_tree__prog_io_util__BoundInst_6 = base;
#line 1006 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__ConsId_14));
#line 1006 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_21));
#line 1006 "prog_io_util.m"
                }
#line 1006 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 981 "prog_io_util.m"
              }
#line 981 "prog_io_util.m"
          }
#line 982 "prog_io_util.m"
      }
#line 981 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 981 "prog_io_util.m"
  }
#line 978 "prog_io_util.m"
}

#line 970 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_bound_inst_list_3_p_0(
#line 970 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
#line 970 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 970 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3)
#line 970 "prog_io_util.m"
{
#line 973 "prog_io_util.m"
  {
#line 973 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 973 "prog_io_util.m"
    if ((parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 973 "prog_io_util.m"
      {
#line 973 "prog_io_util.m"
        *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 973 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 973 "prog_io_util.m"
      }
#line 973 "prog_io_util.m"
    else
#line 974 "prog_io_util.m"
      {
#line 974 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__H0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 974 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__T0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 974 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__H_8;
#line 974 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__T_9;

#line 975 "prog_io_util.m"
        {
#line 975 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_bound_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__H0_6, &parse_tree__prog_io_util__H_8);
        }
#line 974 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 974 "prog_io_util.m"
          {
#line 976 "prog_io_util.m"
            {
#line 976 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_bound_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__T0_7, &parse_tree__prog_io_util__T_9);
            }
#line 974 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 974 "prog_io_util.m"
              {
#line 974 "prog_io_util.m"
                {
#line 974 "prog_io_util.m"
                  MR_Word base;
#line 974 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 974 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 974 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__H_8));
#line 974 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__T_9));
#line 974 "prog_io_util.m"
                }
#line 974 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 974 "prog_io_util.m"
              }
#line 974 "prog_io_util.m"
          }
#line 974 "prog_io_util.m"
      }
#line 973 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 973 "prog_io_util.m"
  }
#line 970 "prog_io_util.m"
}

#line 963 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_1(
#line 963 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg)
#line 963 "prog_io_util.m"
{
#line 963 "prog_io_util.m"
  {
#line 963 "prog_io_util.m"
    struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s * parse_tree__prog_io_util__env_ptr = (struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s *) parse_tree__prog_io_util__env_ptr_arg;

#line 963 "prog_io_util.m"
    MR_builtin_longjmp((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__commit_0, 1);
#line 963 "prog_io_util.m"
  }
#line 963 "prog_io_util.m"
}

#line 963 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_2(
#line 963 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg)
#line 963 "prog_io_util.m"
{
#line 963 "prog_io_util.m"
  {
#line 963 "prog_io_util.m"
    struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s * parse_tree__prog_io_util__env_ptr = (struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s *) parse_tree__prog_io_util__env_ptr_arg;

#line 963 "prog_io_util.m"
    {
#line 964 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_16_16;
#line 965 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_18_18;
#line 966 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_19_19;

#line 964 "prog_io_util.m"
      (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13)) == (MR_mktag((MR_Integer) 1)));
#line 964 "prog_io_util.m"
      if ((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 964 "prog_io_util.m"
        {
#line 964 "prog_io_util.m"
          {
#line 964 "prog_io_util.m"
            (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13, (MR_Integer) 0)));
#line 964 "prog_io_util.m"
            (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13, (MR_Integer) 1)));
#line 964 "prog_io_util.m"
          }
#line 963 "prog_io_util.m"
          {
#line 964 "prog_io_util.m"
            (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 964 "prog_io_util.m"
            if ((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 964 "prog_io_util.m"
              {
#line 964 "prog_io_util.m"
                {
#line 964 "prog_io_util.m"
                  (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20, (MR_Integer) 0)));
#line 964 "prog_io_util.m"
                  parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_20_20, (MR_Integer) 1)));
#line 964 "prog_io_util.m"
                }
#line 963 "prog_io_util.m"
                {
#line 965 "prog_io_util.m"
                  (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__ConsId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F1_14, (MR_Integer) 0)));
#line 965 "prog_io_util.m"
                  parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F1_14, (MR_Integer) 1)));
#line 966 "prog_io_util.m"
                  (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F2_15, (MR_Integer) 0)));
#line 966 "prog_io_util.m"
                  parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__F2_15, (MR_Integer) 1)));
#line 966 "prog_io_util.m"
                  {
#line 966 "prog_io_util.m"
                    (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = parse_tree__prog_data____Unify____cons_id_0_0((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__ConsId_17, (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__V_24_24);
                  }
#line 966 "prog_io_util.m"
                  if ((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 966 "prog_io_util.m"
                    {
#line 966 "prog_io_util.m"
                      parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_1(parse_tree__prog_io_util__env_ptr);
#line 966 "prog_io_util.m"
                      return;
                    }
#line 963 "prog_io_util.m"
                }
#line 964 "prog_io_util.m"
              }
#line 963 "prog_io_util.m"
          }
#line 964 "prog_io_util.m"
        }
#line 963 "prog_io_util.m"
    }
#line 963 "prog_io_util.m"
  }
#line 963 "prog_io_util.m"
}

#line 963 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_3(
#line 963 "prog_io_util.m"
  void * parse_tree__prog_io_util__env_ptr_arg)
#line 963 "prog_io_util.m"
{
#line 963 "prog_io_util.m"
  {
#line 963 "prog_io_util.m"
    struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s * parse_tree__prog_io_util__env_ptr = (struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s *) parse_tree__prog_io_util__env_ptr_arg;

#line 963 "prog_io_util.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__commit_0) == 0)
#line 963 "prog_io_util.m"
      {
#line 963 "prog_io_util.m"
        {
#line 963 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_12_12;

#line 963 "prog_io_util.m"
          {
#line 963 "prog_io_util.m"
            mercury__list__append_3_p_4((parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23, &parse_tree__prog_io_util__V_12_12, &(parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__SubList_13, (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__Functors_11, parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_2, parse_tree__prog_io_util__env_ptr);
          }
#line 963 "prog_io_util.m"
        }
#line 963 "prog_io_util.m"
        (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = MR_FALSE;
#line 963 "prog_io_util.m"
      }
#line 963 "prog_io_util.m"
    else
#line 963 "prog_io_util.m"
      (parse_tree__prog_io_util__env_ptr)->parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = MR_TRUE;
#line 963 "prog_io_util.m"
  }
#line 963 "prog_io_util.m"
}

#line 954 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(
#line 954 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
#line 954 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Disj_6,
#line 954 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Uniqueness_7,
#line 954 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Inst_8)
#line 954 "prog_io_util.m"
{
#line 954 "prog_io_util.m"
  {
#line 954 "prog_io_util.m"
    struct parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0_s parse_tree__prog_io_util__env;

#line 957 "prog_io_util.m"
    {
#line 957 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__Functors0_10;
#line 957 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_21_21;
#line 957 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__V_31_31;
#line 957 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__H0_38;
#line 957 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__T0_39;
#line 957 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__H_40;
#line 957 "prog_io_util.m"
      MR_Word parse_tree__prog_io_util__T_41;

#line 1042 "prog_io_util.m"
      {
#line 1042 "prog_io_util.m"
        parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ";", parse_tree__prog_io_util__Disj_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_31_31);
      }
#line 1012 "prog_io_util.m"
      parse_tree__prog_io_util__H0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_31_31, (MR_Integer) 0)));
#line 1012 "prog_io_util.m"
      parse_tree__prog_io_util__T0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_31_31, (MR_Integer) 1)));
#line 975 "prog_io_util.m"
      {
#line 975 "prog_io_util.m"
        (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = parse_tree__prog_io_util__convert_bound_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__H0_38, &parse_tree__prog_io_util__H_40);
      }
#line 957 "prog_io_util.m"
      if ((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 957 "prog_io_util.m"
        {
#line 976 "prog_io_util.m"
          {
#line 976 "prog_io_util.m"
            (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = parse_tree__prog_io_util__convert_bound_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__T0_39, &parse_tree__prog_io_util__T_41);
          }
#line 957 "prog_io_util.m"
          if ((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 957 "prog_io_util.m"
            {
#line 10090 "parse_tree.prog_io_util.c"
              (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0;
#line 974 "prog_io_util.m"
              {
#line 974 "prog_io_util.m"
                parse_tree__prog_io_util__Functors0_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 974 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Functors0_10, 0) = ((MR_Box) (parse_tree__prog_io_util__H_40));
#line 974 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Functors0_10, 1) = ((MR_Box) (parse_tree__prog_io_util__T_41));
#line 974 "prog_io_util.m"
              }
#line 960 "prog_io_util.m"
              {
#line 960 "prog_io_util.m"
                mercury__list__sort_2_p_0((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__TypeCtorInfo_23_23, parse_tree__prog_io_util__Functors0_10, &(parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__Functors_11);
              }
#line 963 "prog_io_util.m"
              {
#line 963 "prog_io_util.m"
                parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_3(&parse_tree__prog_io_util__env);
              }
#line 962 "prog_io_util.m"
              (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = !((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded);
#line 957 "prog_io_util.m"
              if ((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded)
#line 957 "prog_io_util.m"
                {
#line 968 "prog_io_util.m"
                  parse_tree__prog_io_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 968 "prog_io_util.m"
                  {
#line 968 "prog_io_util.m"
                    MR_Word base;
#line 968 "prog_io_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 968 "prog_io_util.m"
                    *parse_tree__prog_io_util__Inst_8 = base;
#line 968 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 968 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Uniqueness_7));
#line 968 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_21_21));
#line 968 "prog_io_util.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) ((parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__Functors_11));
#line 968 "prog_io_util.m"
                  }
#line 968 "prog_io_util.m"
                  (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded = MR_TRUE;
#line 957 "prog_io_util.m"
                }
#line 957 "prog_io_util.m"
            }
#line 957 "prog_io_util.m"
        }
#line 957 "prog_io_util.m"
      return (parse_tree__prog_io_util__env).parse_tree__prog_io_util__parse_bound_inst_list_4_p_0_env_0__succeeded;
#line 957 "prog_io_util.m"
    }
#line 954 "prog_io_util.m"
  }
#line 954 "prog_io_util.m"
}

#line 861 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_higher_order_inst_4_p_0(
#line 861 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
#line 861 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__BeforeIsTerm_6,
#line 861 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__DetTerm_7,
#line 861 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Inst_8)
#line 861 "prog_io_util.m"
{
#line 865 "prog_io_util.m"
  {
#line 865 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__BeforeIsTerm_6)) == (MR_mktag((MR_Integer) 0)));
#line 865 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__BeforeIsFunctor_9;
#line 865 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__BeforeIsArgTerms_10;
#line 865 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_27_27;
#line 867 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;

#line 867 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 867 "prog_io_util.m"
      {
#line 867 "prog_io_util.m"
        parse_tree__prog_io_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__BeforeIsTerm_6, (MR_Integer) 0)));
#line 867 "prog_io_util.m"
        parse_tree__prog_io_util__BeforeIsArgTerms_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__BeforeIsTerm_6, (MR_Integer) 1)));
#line 867 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__BeforeIsTerm_6, (MR_Integer) 2)));
#line 867 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_27_27)) == (MR_mktag((MR_Integer) 0)));
#line 867 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 867 "prog_io_util.m"
          {
#line 867 "prog_io_util.m"
            parse_tree__prog_io_util__BeforeIsFunctor_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, (MR_Integer) 0)));
#line 904 "prog_io_util.m"
            if ((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "=") == 0))
#line 905 "prog_io_util.m"
              {
#line 905 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TypeCtorInfo_53_53;
#line 905 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__FuncTerm_18;
#line 905 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__RetModeTerm_19;
#line 905 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__FuncTermFunctor_20;
#line 905 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__ArgModesTerms_21;
#line 905 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_28_28;
#line 905 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_29_29;
#line 905 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_30_30;
#line 905 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_31_31;
#line 905 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_32_32;
#line 905 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_34_34;
#line 905 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_35_35;
#line 905 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_36_36;
#line 905 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__DetString_51;
#line 907 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_22_22;
#line 928 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_23_23;

#line 906 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__BeforeIsArgTerms_10)) == (MR_mktag((MR_Integer) 1)));
#line 906 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 906 "prog_io_util.m"
                  {
#line 906 "prog_io_util.m"
                    parse_tree__prog_io_util__FuncTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__BeforeIsArgTerms_10, (MR_Integer) 0)));
#line 906 "prog_io_util.m"
                    parse_tree__prog_io_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__BeforeIsArgTerms_10, (MR_Integer) 1)));
#line 906 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 906 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 906 "prog_io_util.m"
                      {
#line 906 "prog_io_util.m"
                        parse_tree__prog_io_util__RetModeTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_28_28, (MR_Integer) 0)));
#line 906 "prog_io_util.m"
                        parse_tree__prog_io_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_28_28, (MR_Integer) 1)));
#line 906 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 905 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 905 "prog_io_util.m"
                          {
#line 907 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__FuncTerm_18)) == (MR_mktag((MR_Integer) 0)));
#line 907 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 907 "prog_io_util.m"
                              {
#line 907 "prog_io_util.m"
                                parse_tree__prog_io_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_18, (MR_Integer) 0)));
#line 907 "prog_io_util.m"
                                parse_tree__prog_io_util__ArgModesTerms_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_18, (MR_Integer) 1)));
#line 907 "prog_io_util.m"
                                parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_18, (MR_Integer) 2)));
#line 907 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_30_30)) == (MR_mktag((MR_Integer) 0)));
#line 907 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 907 "prog_io_util.m"
                                  {
#line 907 "prog_io_util.m"
                                    parse_tree__prog_io_util__FuncTermFunctor_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_30_30, (MR_Integer) 0)));
#line 928 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 928 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 928 "prog_io_util.m"
                                      {
#line 928 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 0)));
#line 928 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 1)));
#line 928 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 2)));
#line 928 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 905 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 905 "prog_io_util.m"
                                          {
#line 928 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_31_31)) == (MR_mktag((MR_Integer) 0)));
#line 928 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 928 "prog_io_util.m"
                                              {
#line 928 "prog_io_util.m"
                                                parse_tree__prog_io_util__DetString_51 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_31_31, (MR_Integer) 0)));
#line 932 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10310 "parse_tree.prog_io_util.c"
                                                parse_tree__prog_io_util__TypeCtorInfo_53_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 933 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_35_35 = (MR_Integer) 1;
#line 934 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10316 "parse_tree.prog_io_util.c"
                                                if ((strcmp(parse_tree__prog_io_util__FuncTermFunctor_20, (MR_String) "func") == 0))
#line 10318 "parse_tree.prog_io_util.c"
                                                  {
#line 10320 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_39_39;
#line 10322 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_40_40;
#line 10324 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__ArgModes0_55;
#line 10326 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__RetMode_56;
#line 10328 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__FuncInst_57;
#line 10330 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_58_58;
#line 10332 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__ArgModes_60;
#line 10334 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__Detism_61;

#line 929 "prog_io_util.m"
                                                    {
#line 929 "prog_io_util.m"
                                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_51, &parse_tree__prog_io_util__Detism_61);
                                                    }
#line 10342 "parse_tree.prog_io_util.c"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 10344 "parse_tree.prog_io_util.c"
                                                      {
#line 930 "prog_io_util.m"
                                                        {
#line 930 "prog_io_util.m"
                                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__ArgModesTerms_21, &parse_tree__prog_io_util__ArgModes0_55);
                                                        }
#line 10351 "parse_tree.prog_io_util.c"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 10353 "parse_tree.prog_io_util.c"
                                                          {
#line 931 "prog_io_util.m"
                                                            {
#line 931 "prog_io_util.m"
                                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__RetModeTerm_19, &parse_tree__prog_io_util__RetMode_56);
                                                            }
#line 10360 "parse_tree.prog_io_util.c"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 10362 "parse_tree.prog_io_util.c"
                                                              {
#line 932 "prog_io_util.m"
                                                                {
#line 932 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 932 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_58_58, 0) = ((MR_Box) (parse_tree__prog_io_util__RetMode_56));
#line 932 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_58_58, 1) = ((MR_Box) (parse_tree__prog_io_util__V_34_34));
#line 932 "prog_io_util.m"
                                                                }
#line 932 "prog_io_util.m"
                                                                {
#line 932 "prog_io_util.m"
                                                                  mercury__list__append_3_p_1(parse_tree__prog_io_util__TypeCtorInfo_53_53, parse_tree__prog_io_util__ArgModes0_55, parse_tree__prog_io_util__V_58_58, &parse_tree__prog_io_util__ArgModes_60);
                                                                }
#line 937 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_39_39 = (MR_Integer) 0;
#line 933 "prog_io_util.m"
                                                                {
#line 933 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__FuncInst_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 933 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_57, 0) = ((MR_Box) (parse_tree__prog_io_util__V_35_35));
#line 933 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_57, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_60));
#line 933 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_57, 2) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 933 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_57, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_61));
#line 933 "prog_io_util.m"
                                                                }
#line 937 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__FuncInst_57);
#line 937 "prog_io_util.m"
                                                                {
#line 937 "prog_io_util.m"
                                                                  MR_Word base;
#line 937 "prog_io_util.m"
                                                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 937 "prog_io_util.m"
                                                                  *parse_tree__prog_io_util__Inst_8 = base;
#line 937 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 937 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_39_39));
#line 937 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_40_40));
#line 937 "prog_io_util.m"
                                                                }
#line 937 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 10415 "parse_tree.prog_io_util.c"
                                                              }
#line 10417 "parse_tree.prog_io_util.c"
                                                          }
#line 10419 "parse_tree.prog_io_util.c"
                                                      }
#line 10421 "parse_tree.prog_io_util.c"
                                                  }
#line 10423 "parse_tree.prog_io_util.c"
                                                else
#line 10425 "parse_tree.prog_io_util.c"
                                                if ((strcmp(parse_tree__prog_io_util__FuncTermFunctor_20, (MR_String) "any_func") == 0))
#line 10427 "parse_tree.prog_io_util.c"
                                                  {
#line 10429 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__ArgModes0_24;
#line 10431 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__RetMode_25;
#line 10433 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__FuncInst_26;
#line 10435 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_33_33;
#line 10437 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_37_37;
#line 10439 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_38_38;
#line 10441 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__ArgModes_50;
#line 10443 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__Detism_52;

#line 929 "prog_io_util.m"
                                                    {
#line 929 "prog_io_util.m"
                                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_51, &parse_tree__prog_io_util__Detism_52);
                                                    }
#line 10451 "parse_tree.prog_io_util.c"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 10453 "parse_tree.prog_io_util.c"
                                                      {
#line 930 "prog_io_util.m"
                                                        {
#line 930 "prog_io_util.m"
                                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__ArgModesTerms_21, &parse_tree__prog_io_util__ArgModes0_24);
                                                        }
#line 10460 "parse_tree.prog_io_util.c"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 10462 "parse_tree.prog_io_util.c"
                                                          {
#line 931 "prog_io_util.m"
                                                            {
#line 931 "prog_io_util.m"
                                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__RetModeTerm_19, &parse_tree__prog_io_util__RetMode_25);
                                                            }
#line 10469 "parse_tree.prog_io_util.c"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 10471 "parse_tree.prog_io_util.c"
                                                              {
#line 932 "prog_io_util.m"
                                                                {
#line 932 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 932 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_util__RetMode_25));
#line 932 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io_util__V_34_34));
#line 932 "prog_io_util.m"
                                                                }
#line 932 "prog_io_util.m"
                                                                {
#line 932 "prog_io_util.m"
                                                                  mercury__list__append_3_p_1(parse_tree__prog_io_util__TypeCtorInfo_53_53, parse_tree__prog_io_util__ArgModes0_24, parse_tree__prog_io_util__V_33_33, &parse_tree__prog_io_util__ArgModes_50);
                                                                }
#line 940 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_37_37 = (MR_Integer) 0;
#line 933 "prog_io_util.m"
                                                                {
#line 933 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__FuncInst_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 933 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_26, 0) = ((MR_Box) (parse_tree__prog_io_util__V_35_35));
#line 933 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_26, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_50));
#line 933 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_26, 2) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 933 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInst_26, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_52));
#line 933 "prog_io_util.m"
                                                                }
#line 940 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__FuncInst_26);
#line 940 "prog_io_util.m"
                                                                {
#line 940 "prog_io_util.m"
                                                                  MR_Word base;
#line 940 "prog_io_util.m"
                                                                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 940 "prog_io_util.m"
                                                                  *parse_tree__prog_io_util__Inst_8 = base;
#line 940 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_37_37));
#line 940 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_38_38));
#line 940 "prog_io_util.m"
                                                                }
#line 940 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 10522 "parse_tree.prog_io_util.c"
                                                              }
#line 10524 "parse_tree.prog_io_util.c"
                                                          }
#line 10526 "parse_tree.prog_io_util.c"
                                                      }
#line 10528 "parse_tree.prog_io_util.c"
                                                  }
#line 10530 "parse_tree.prog_io_util.c"
                                                else
#line 10532 "parse_tree.prog_io_util.c"
                                                  parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 928 "prog_io_util.m"
                                              }
#line 905 "prog_io_util.m"
                                          }
#line 928 "prog_io_util.m"
                                      }
#line 907 "prog_io_util.m"
                                  }
#line 907 "prog_io_util.m"
                              }
#line 905 "prog_io_util.m"
                          }
#line 906 "prog_io_util.m"
                      }
#line 906 "prog_io_util.m"
                  }
#line 905 "prog_io_util.m"
              }
#line 904 "prog_io_util.m"
            else
#line 904 "prog_io_util.m"
            if ((((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "any_pred") == 0)) || ((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "pred") == 0))))
#line 871 "prog_io_util.m"
              {
#line 871 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__ArgModes_13;
#line 871 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__DetString_14;
#line 871 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Detism_16;
#line 871 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__PredInst_17;
#line 871 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_41_41;
#line 871 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_42_42;
#line 871 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_43_43;
#line 871 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_44_44;
#line 893 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_15_15;

#line 892 "prog_io_util.m"
                {
#line 892 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__BeforeIsArgTerms_10, &parse_tree__prog_io_util__ArgModes_13);
                }
#line 871 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 871 "prog_io_util.m"
                  {
#line 893 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 893 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 893 "prog_io_util.m"
                      {
#line 893 "prog_io_util.m"
                        parse_tree__prog_io_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 0)));
#line 893 "prog_io_util.m"
                        parse_tree__prog_io_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 1)));
#line 893 "prog_io_util.m"
                        parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 2)));
#line 893 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 871 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 871 "prog_io_util.m"
                          {
#line 893 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_41_41)) == (MR_mktag((MR_Integer) 0)));
#line 893 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 893 "prog_io_util.m"
                              {
#line 893 "prog_io_util.m"
                                parse_tree__prog_io_util__DetString_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_41_41, (MR_Integer) 0)));
#line 894 "prog_io_util.m"
                                {
#line 894 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_14, &parse_tree__prog_io_util__Detism_16);
                                }
#line 871 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 871 "prog_io_util.m"
                                  {
#line 895 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_43_43 = (MR_Integer) 0;
#line 896 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 895 "prog_io_util.m"
                                    {
#line 895 "prog_io_util.m"
                                      parse_tree__prog_io_util__PredInst_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 895 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_17, 0) = ((MR_Box) (parse_tree__prog_io_util__V_43_43));
#line 895 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_17, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_13));
#line 895 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_17, 2) = ((MR_Box) (parse_tree__prog_io_util__V_44_44));
#line 895 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInst_17, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_16));
#line 895 "prog_io_util.m"
                                    }
#line 10639 "parse_tree.prog_io_util.c"
                                    if ((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "pred") == 0))
#line 10641 "parse_tree.prog_io_util.c"
                                      {
#line 10643 "parse_tree.prog_io_util.c"
                                        MR_Word parse_tree__prog_io_util__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__PredInst_17);

#line 899 "prog_io_util.m"
                                        {
#line 899 "prog_io_util.m"
                                          MR_Word base;
#line 899 "prog_io_util.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 899 "prog_io_util.m"
                                          *parse_tree__prog_io_util__Inst_8 = base;
#line 899 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 899 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 899 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_util__V_48_48));
#line 899 "prog_io_util.m"
                                        }
#line 10662 "parse_tree.prog_io_util.c"
                                      }
#line 10664 "parse_tree.prog_io_util.c"
                                    else
#line 10666 "parse_tree.prog_io_util.c"
                                      {
#line 10668 "parse_tree.prog_io_util.c"
                                        MR_Word parse_tree__prog_io_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__PredInst_17);

#line 902 "prog_io_util.m"
                                        {
#line 902 "prog_io_util.m"
                                          MR_Word base;
#line 902 "prog_io_util.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 902 "prog_io_util.m"
                                          *parse_tree__prog_io_util__Inst_8 = base;
#line 902 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 902 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_46_46));
#line 902 "prog_io_util.m"
                                        }
#line 10685 "parse_tree.prog_io_util.c"
                                      }
#line 10687 "parse_tree.prog_io_util.c"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 871 "prog_io_util.m"
                                  }
#line 893 "prog_io_util.m"
                              }
#line 871 "prog_io_util.m"
                          }
#line 893 "prog_io_util.m"
                      }
#line 871 "prog_io_util.m"
                  }
#line 871 "prog_io_util.m"
              }
#line 904 "prog_io_util.m"
            else
#line 904 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 867 "prog_io_util.m"
          }
#line 867 "prog_io_util.m"
      }
#line 865 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 865 "prog_io_util.m"
  }
#line 861 "prog_io_util.m"
}

#line 547 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__convert_higher_order_mode_4_p_0(
#line 547 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_5,
#line 547 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__BeforeIsTerm_6,
#line 547 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__DetTerm_7,
#line 547 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Mode_8)
#line 547 "prog_io_util.m"
{
#line 551 "prog_io_util.m"
  {
#line 551 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__BeforeIsTerm_6)) == (MR_mktag((MR_Integer) 0)));
#line 551 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__BeforeIsFunctor_9;
#line 551 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__BeforeIsArgTerms_10;
#line 551 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_28_28;
#line 553 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;

#line 553 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 553 "prog_io_util.m"
      {
#line 553 "prog_io_util.m"
        parse_tree__prog_io_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__BeforeIsTerm_6, (MR_Integer) 0)));
#line 553 "prog_io_util.m"
        parse_tree__prog_io_util__BeforeIsArgTerms_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__BeforeIsTerm_6, (MR_Integer) 1)));
#line 553 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__BeforeIsTerm_6, (MR_Integer) 2)));
#line 553 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_28_28)) == (MR_mktag((MR_Integer) 0)));
#line 553 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 553 "prog_io_util.m"
          {
#line 553 "prog_io_util.m"
            parse_tree__prog_io_util__BeforeIsFunctor_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, (MR_Integer) 0)));
#line 594 "prog_io_util.m"
            if ((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "=") == 0))
#line 595 "prog_io_util.m"
              {
#line 595 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TypeCtorInfo_57_57;
#line 595 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__FuncTerm_19;
#line 595 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__RetModeTerm_20;
#line 595 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__FuncTermFunctor_21;
#line 595 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__ArgModesTerms_22;
#line 595 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_29_29;
#line 595 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_30_30;
#line 595 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_31_31;
#line 595 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_32_32;
#line 595 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_33_33;
#line 595 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_35_35;
#line 595 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_36_36;
#line 595 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_37_37;
#line 595 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__DetString_54;
#line 595 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Inst_56;
#line 597 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_23_23;
#line 619 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_24_24;

#line 596 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__BeforeIsArgTerms_10)) == (MR_mktag((MR_Integer) 1)));
#line 596 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 596 "prog_io_util.m"
                  {
#line 596 "prog_io_util.m"
                    parse_tree__prog_io_util__FuncTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__BeforeIsArgTerms_10, (MR_Integer) 0)));
#line 596 "prog_io_util.m"
                    parse_tree__prog_io_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__BeforeIsArgTerms_10, (MR_Integer) 1)));
#line 596 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 596 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 596 "prog_io_util.m"
                      {
#line 596 "prog_io_util.m"
                        parse_tree__prog_io_util__RetModeTerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, (MR_Integer) 0)));
#line 596 "prog_io_util.m"
                        parse_tree__prog_io_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, (MR_Integer) 1)));
#line 596 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 595 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 595 "prog_io_util.m"
                          {
#line 597 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__FuncTerm_19)) == (MR_mktag((MR_Integer) 0)));
#line 597 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 597 "prog_io_util.m"
                              {
#line 597 "prog_io_util.m"
                                parse_tree__prog_io_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_19, (MR_Integer) 0)));
#line 597 "prog_io_util.m"
                                parse_tree__prog_io_util__ArgModesTerms_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_19, (MR_Integer) 1)));
#line 597 "prog_io_util.m"
                                parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncTerm_19, (MR_Integer) 2)));
#line 597 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_31_31)) == (MR_mktag((MR_Integer) 0)));
#line 597 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 597 "prog_io_util.m"
                                  {
#line 597 "prog_io_util.m"
                                    parse_tree__prog_io_util__FuncTermFunctor_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_31_31, (MR_Integer) 0)));
#line 619 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 619 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 619 "prog_io_util.m"
                                      {
#line 619 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 0)));
#line 619 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 1)));
#line 619 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 2)));
#line 619 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 595 "prog_io_util.m"
                                        if (parse_tree__prog_io_util__succeeded)
#line 595 "prog_io_util.m"
                                          {
#line 619 "prog_io_util.m"
                                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_32_32)) == (MR_mktag((MR_Integer) 0)));
#line 619 "prog_io_util.m"
                                            if (parse_tree__prog_io_util__succeeded)
#line 619 "prog_io_util.m"
                                              {
#line 619 "prog_io_util.m"
                                                parse_tree__prog_io_util__DetString_54 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_32_32, (MR_Integer) 0)));
#line 623 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_35_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10873 "parse_tree.prog_io_util.c"
                                                parse_tree__prog_io_util__TypeCtorInfo_57_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 624 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_36_36 = (MR_Integer) 1;
#line 625 "prog_io_util.m"
                                                parse_tree__prog_io_util__V_37_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10879 "parse_tree.prog_io_util.c"
                                                if ((strcmp(parse_tree__prog_io_util__FuncTermFunctor_21, (MR_String) "func") == 0))
#line 10881 "parse_tree.prog_io_util.c"
                                                  {
#line 10883 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_40_40;
#line 10885 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_41_41;
#line 10887 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__ArgModes0_59;
#line 10889 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__RetMode_60;
#line 10891 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__FuncInstInfo_61;
#line 10893 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_62_62;
#line 10895 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__ArgModes_64;
#line 10897 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__Detism_65;

#line 620 "prog_io_util.m"
                                                    {
#line 620 "prog_io_util.m"
                                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_54, &parse_tree__prog_io_util__Detism_65);
                                                    }
#line 10905 "parse_tree.prog_io_util.c"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 10907 "parse_tree.prog_io_util.c"
                                                      {
#line 621 "prog_io_util.m"
                                                        {
#line 621 "prog_io_util.m"
                                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__ArgModesTerms_22, &parse_tree__prog_io_util__ArgModes0_59);
                                                        }
#line 10914 "parse_tree.prog_io_util.c"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 10916 "parse_tree.prog_io_util.c"
                                                          {
#line 622 "prog_io_util.m"
                                                            {
#line 622 "prog_io_util.m"
                                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__RetModeTerm_20, &parse_tree__prog_io_util__RetMode_60);
                                                            }
#line 10923 "parse_tree.prog_io_util.c"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 10925 "parse_tree.prog_io_util.c"
                                                              {
#line 623 "prog_io_util.m"
                                                                {
#line 623 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 623 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_util__RetMode_60));
#line 623 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_62_62, 1) = ((MR_Box) (parse_tree__prog_io_util__V_35_35));
#line 623 "prog_io_util.m"
                                                                }
#line 623 "prog_io_util.m"
                                                                {
#line 623 "prog_io_util.m"
                                                                  mercury__list__append_3_p_1(parse_tree__prog_io_util__TypeCtorInfo_57_57, parse_tree__prog_io_util__ArgModes0_59, parse_tree__prog_io_util__V_62_62, &parse_tree__prog_io_util__ArgModes_64);
                                                                }
#line 628 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_40_40 = (MR_Integer) 0;
#line 624 "prog_io_util.m"
                                                                {
#line 624 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__FuncInstInfo_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 624 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_61, 0) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 624 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_61, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_64));
#line 624 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_61, 2) = ((MR_Box) (parse_tree__prog_io_util__V_37_37));
#line 624 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_61, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_65));
#line 624 "prog_io_util.m"
                                                                }
#line 628 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__FuncInstInfo_61);
#line 628 "prog_io_util.m"
                                                                {
#line 628 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__Inst_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 628 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 628 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_56, 1) = ((MR_Box) (parse_tree__prog_io_util__V_40_40));
#line 628 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_56, 2) = ((MR_Box) (parse_tree__prog_io_util__V_41_41));
#line 628 "prog_io_util.m"
                                                                }
#line 628 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 10974 "parse_tree.prog_io_util.c"
                                                              }
#line 10976 "parse_tree.prog_io_util.c"
                                                          }
#line 10978 "parse_tree.prog_io_util.c"
                                                      }
#line 10980 "parse_tree.prog_io_util.c"
                                                  }
#line 10982 "parse_tree.prog_io_util.c"
                                                else
#line 10984 "parse_tree.prog_io_util.c"
                                                if ((strcmp(parse_tree__prog_io_util__FuncTermFunctor_21, (MR_String) "any_func") == 0))
#line 10986 "parse_tree.prog_io_util.c"
                                                  {
#line 10988 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__ArgModes0_25;
#line 10990 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__RetMode_26;
#line 10992 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__FuncInstInfo_27;
#line 10994 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_34_34;
#line 10996 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_38_38;
#line 10998 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__V_39_39;
#line 11000 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__ArgModes_53;
#line 11002 "parse_tree.prog_io_util.c"
                                                    MR_Word parse_tree__prog_io_util__Detism_55;

#line 620 "prog_io_util.m"
                                                    {
#line 620 "prog_io_util.m"
                                                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_54, &parse_tree__prog_io_util__Detism_55);
                                                    }
#line 11010 "parse_tree.prog_io_util.c"
                                                    if (parse_tree__prog_io_util__succeeded)
#line 11012 "parse_tree.prog_io_util.c"
                                                      {
#line 621 "prog_io_util.m"
                                                        {
#line 621 "prog_io_util.m"
                                                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__ArgModesTerms_22, &parse_tree__prog_io_util__ArgModes0_25);
                                                        }
#line 11019 "parse_tree.prog_io_util.c"
                                                        if (parse_tree__prog_io_util__succeeded)
#line 11021 "parse_tree.prog_io_util.c"
                                                          {
#line 622 "prog_io_util.m"
                                                            {
#line 622 "prog_io_util.m"
                                                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__RetModeTerm_20, &parse_tree__prog_io_util__RetMode_26);
                                                            }
#line 11028 "parse_tree.prog_io_util.c"
                                                            if (parse_tree__prog_io_util__succeeded)
#line 11030 "parse_tree.prog_io_util.c"
                                                              {
#line 623 "prog_io_util.m"
                                                                {
#line 623 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 623 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_util__RetMode_26));
#line 623 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, 1) = ((MR_Box) (parse_tree__prog_io_util__V_35_35));
#line 623 "prog_io_util.m"
                                                                }
#line 623 "prog_io_util.m"
                                                                {
#line 623 "prog_io_util.m"
                                                                  mercury__list__append_3_p_1(parse_tree__prog_io_util__TypeCtorInfo_57_57, parse_tree__prog_io_util__ArgModes0_25, parse_tree__prog_io_util__V_34_34, &parse_tree__prog_io_util__ArgModes_53);
                                                                }
#line 631 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_38_38 = (MR_Integer) 0;
#line 624 "prog_io_util.m"
                                                                {
#line 624 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__FuncInstInfo_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 624 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_27, 0) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 624 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_27, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_53));
#line 624 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_27, 2) = ((MR_Box) (parse_tree__prog_io_util__V_37_37));
#line 624 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncInstInfo_27, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_55));
#line 624 "prog_io_util.m"
                                                                }
#line 631 "prog_io_util.m"
                                                                parse_tree__prog_io_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__FuncInstInfo_27);
#line 631 "prog_io_util.m"
                                                                {
#line 631 "prog_io_util.m"
                                                                  parse_tree__prog_io_util__Inst_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 631 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Inst_56, 0) = ((MR_Box) (parse_tree__prog_io_util__V_38_38));
#line 631 "prog_io_util.m"
                                                                  MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Inst_56, 1) = ((MR_Box) (parse_tree__prog_io_util__V_39_39));
#line 631 "prog_io_util.m"
                                                                }
#line 631 "prog_io_util.m"
                                                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 11077 "parse_tree.prog_io_util.c"
                                                              }
#line 11079 "parse_tree.prog_io_util.c"
                                                          }
#line 11081 "parse_tree.prog_io_util.c"
                                                      }
#line 11083 "parse_tree.prog_io_util.c"
                                                  }
#line 11085 "parse_tree.prog_io_util.c"
                                                else
#line 11087 "parse_tree.prog_io_util.c"
                                                  parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 595 "prog_io_util.m"
                                                if (parse_tree__prog_io_util__succeeded)
#line 595 "prog_io_util.m"
                                                  {
#line 633 "prog_io_util.m"
                                                    {
#line 633 "prog_io_util.m"
                                                      MR_Word base;
#line 633 "prog_io_util.m"
                                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 633 "prog_io_util.m"
                                                      *parse_tree__prog_io_util__Mode_8 = base;
#line 633 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Inst_56));
#line 633 "prog_io_util.m"
                                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Inst_56));
#line 633 "prog_io_util.m"
                                                    }
#line 633 "prog_io_util.m"
                                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 595 "prog_io_util.m"
                                                  }
#line 619 "prog_io_util.m"
                                              }
#line 595 "prog_io_util.m"
                                          }
#line 619 "prog_io_util.m"
                                      }
#line 597 "prog_io_util.m"
                                  }
#line 597 "prog_io_util.m"
                              }
#line 595 "prog_io_util.m"
                          }
#line 596 "prog_io_util.m"
                      }
#line 596 "prog_io_util.m"
                  }
#line 595 "prog_io_util.m"
              }
#line 594 "prog_io_util.m"
            else
#line 594 "prog_io_util.m"
            if ((((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "any_pred") == 0)) || ((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "pred") == 0))))
#line 557 "prog_io_util.m"
              {
#line 557 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__ArgModes_13;
#line 557 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__DetString_14;
#line 557 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Detism_16;
#line 557 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__PredInstInfo_17;
#line 557 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Inst_18;
#line 557 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_43_43;
#line 557 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_44_44;
#line 557 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_45_45;
#line 557 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_46_46;
#line 582 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_15_15;

#line 581 "prog_io_util.m"
                {
#line 581 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_5, parse_tree__prog_io_util__BeforeIsArgTerms_10, &parse_tree__prog_io_util__ArgModes_13);
                }
#line 557 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 557 "prog_io_util.m"
                  {
#line 582 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__DetTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 582 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 582 "prog_io_util.m"
                      {
#line 582 "prog_io_util.m"
                        parse_tree__prog_io_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 0)));
#line 582 "prog_io_util.m"
                        parse_tree__prog_io_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 1)));
#line 582 "prog_io_util.m"
                        parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__DetTerm_7, (MR_Integer) 2)));
#line 582 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 557 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 557 "prog_io_util.m"
                          {
#line 582 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_43_43)) == (MR_mktag((MR_Integer) 0)));
#line 582 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 582 "prog_io_util.m"
                              {
#line 582 "prog_io_util.m"
                                parse_tree__prog_io_util__DetString_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_43_43, (MR_Integer) 0)));
#line 583 "prog_io_util.m"
                                {
#line 583 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_util__DetString_14, &parse_tree__prog_io_util__Detism_16);
                                }
#line 557 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 557 "prog_io_util.m"
                                  {
#line 584 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_45_45 = (MR_Integer) 0;
#line 585 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 584 "prog_io_util.m"
                                    {
#line 584 "prog_io_util.m"
                                      parse_tree__prog_io_util__PredInstInfo_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 584 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_17, 0) = ((MR_Box) (parse_tree__prog_io_util__V_45_45));
#line 584 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_17, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgModes_13));
#line 584 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_17, 2) = ((MR_Box) (parse_tree__prog_io_util__V_46_46));
#line 584 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredInstInfo_17, 3) = ((MR_Box) (parse_tree__prog_io_util__Detism_16));
#line 584 "prog_io_util.m"
                                    }
#line 11218 "parse_tree.prog_io_util.c"
                                    if ((strcmp(parse_tree__prog_io_util__BeforeIsFunctor_9, (MR_String) "pred") == 0))
#line 11220 "parse_tree.prog_io_util.c"
                                      {
#line 11222 "parse_tree.prog_io_util.c"
                                        MR_Word parse_tree__prog_io_util__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__PredInstInfo_17);

#line 588 "prog_io_util.m"
                                        {
#line 588 "prog_io_util.m"
                                          parse_tree__prog_io_util__Inst_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 588 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 588 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_18, 1) = ((MR_Box) ((MR_Integer) 0));
#line 588 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__Inst_18, 2) = ((MR_Box) (parse_tree__prog_io_util__V_50_50));
#line 588 "prog_io_util.m"
                                        }
#line 11237 "parse_tree.prog_io_util.c"
                                      }
#line 11239 "parse_tree.prog_io_util.c"
                                    else
#line 11241 "parse_tree.prog_io_util.c"
                                      {
#line 11243 "parse_tree.prog_io_util.c"
                                        MR_Word parse_tree__prog_io_util__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_util__PredInstInfo_17);

#line 591 "prog_io_util.m"
                                        {
#line 591 "prog_io_util.m"
                                          parse_tree__prog_io_util__Inst_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 591 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Inst_18, 0) = ((MR_Box) ((MR_Integer) 0));
#line 591 "prog_io_util.m"
                                          MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__Inst_18, 1) = ((MR_Box) (parse_tree__prog_io_util__V_48_48));
#line 591 "prog_io_util.m"
                                        }
#line 11256 "parse_tree.prog_io_util.c"
                                      }
#line 593 "prog_io_util.m"
                                    {
#line 593 "prog_io_util.m"
                                      MR_Word base;
#line 593 "prog_io_util.m"
                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 593 "prog_io_util.m"
                                      *parse_tree__prog_io_util__Mode_8 = base;
#line 593 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Inst_18));
#line 593 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Inst_18));
#line 593 "prog_io_util.m"
                                    }
#line 593 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 557 "prog_io_util.m"
                                  }
#line 582 "prog_io_util.m"
                              }
#line 557 "prog_io_util.m"
                          }
#line 582 "prog_io_util.m"
                      }
#line 557 "prog_io_util.m"
                  }
#line 557 "prog_io_util.m"
              }
#line 594 "prog_io_util.m"
            else
#line 594 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 553 "prog_io_util.m"
          }
#line 553 "prog_io_util.m"
      }
#line 551 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 551 "prog_io_util.m"
  }
#line 547 "prog_io_util.m"
}

#line 487 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_qualified_term_3_p_0(
#line 487 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 487 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Args_2,
#line 487 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Term_3)
#line 487 "prog_io_util.m"
{
#line 489 "prog_io_util.m"
  {
#line 489 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 489 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 492 "prog_io_util.m"
      {
#line 492 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Qualifier_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 492 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 492 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Context_13;
#line 492 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__QualTerm_14;
#line 492 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Term0_15;
#line 492 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_17_17;
#line 492 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_20_20;
#line 492 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_21_21;

#line 493 "prog_io_util.m"
        {
#line 493 "prog_io_util.m"
          parse_tree__prog_io_util__Context_13 = mercury__term__context_init_0_f_0();
        }
#line 494 "prog_io_util.m"
        {
#line 494 "prog_io_util.m"
          parse_tree__prog_io_util__unparse_qualified_term_3_p_0(parse_tree__prog_io_util__Qualifier_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__QualTerm_14);
        }
#line 495 "prog_io_util.m"
        {
#line 495 "prog_io_util.m"
          parse_tree__prog_io_util__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 495 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_17_17, 0) = ((MR_Box) (parse_tree__prog_io_util__Name_10));
#line 495 "prog_io_util.m"
        }
#line 495 "prog_io_util.m"
        {
#line 495 "prog_io_util.m"
          parse_tree__prog_io_util__Term0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 495 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_17_17));
#line 495 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_15, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_2));
#line 495 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_15, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_13));
#line 495 "prog_io_util.m"
        }
#line 496 "prog_io_util.m"
        {
#line 496 "prog_io_util.m"
          parse_tree__prog_io_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 496 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, 0) = ((MR_Box) (parse_tree__prog_io_util__Term0_15));
#line 496 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 496 "prog_io_util.m"
        }
#line 496 "prog_io_util.m"
        {
#line 496 "prog_io_util.m"
          parse_tree__prog_io_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 496 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, 0) = ((MR_Box) (parse_tree__prog_io_util__QualTerm_14));
#line 496 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, 1) = ((MR_Box) (parse_tree__prog_io_util__V_21_21));
#line 496 "prog_io_util.m"
        }
#line 496 "prog_io_util.m"
        {
#line 496 "prog_io_util.m"
          MR_Word base;
#line 496 "prog_io_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 496 "prog_io_util.m"
          *parse_tree__prog_io_util__Term_3 = base;
#line 496 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[12]));
#line 496 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_20_20));
#line 496 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_13));
#line 496 "prog_io_util.m"
        }
#line 492 "prog_io_util.m"
      }
#line 489 "prog_io_util.m"
    else
#line 489 "prog_io_util.m"
      {
#line 489 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 489 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Context_7;
#line 489 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_8_8;

#line 490 "prog_io_util.m"
        {
#line 490 "prog_io_util.m"
          parse_tree__prog_io_util__Context_7 = mercury__term__context_init_0_f_0();
        }
#line 491 "prog_io_util.m"
        {
#line 491 "prog_io_util.m"
          parse_tree__prog_io_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 491 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, 0) = ((MR_Box) (parse_tree__prog_io_util__Name_4));
#line 491 "prog_io_util.m"
        }
#line 491 "prog_io_util.m"
        {
#line 491 "prog_io_util.m"
          MR_Word base;
#line 491 "prog_io_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 491 "prog_io_util.m"
          *parse_tree__prog_io_util__Term_3 = base;
#line 491 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_8_8));
#line 491 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_2));
#line 491 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_7));
#line 491 "prog_io_util.m"
        }
#line 489 "prog_io_util.m"
      }
#line 489 "prog_io_util.m"
  }
#line 487 "prog_io_util.m"
}

#line 485 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_type_list_2_p_0_1(
#line 485 "prog_io_util.m"
  MR_Box parse_tree__prog_io_util__closure_arg,
#line 485 "prog_io_util.m"
  MR_Box parse_tree__prog_io_util__wrapper_arg_1,
#line 485 "prog_io_util.m"
  MR_Box * parse_tree__prog_io_util__wrapper_arg_2)
#line 485 "prog_io_util.m"
{
#line 485 "prog_io_util.m"
  {
#line 485 "prog_io_util.m"
    MR_Box parse_tree__prog_io_util__closure = parse_tree__prog_io_util__closure_arg;
#line 485 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__conv0_HeadVar__2_2;

#line 485 "prog_io_util.m"
    {
#line 485 "prog_io_util.m"
      parse_tree__prog_io_util__unparse_type_2_p_0(((MR_Word) parse_tree__prog_io_util__wrapper_arg_1), &parse_tree__prog_io_util__conv0_HeadVar__2_2);
    }
#line 485 "prog_io_util.m"
    *parse_tree__prog_io_util__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_util__conv0_HeadVar__2_2));
#line 485 "prog_io_util.m"
  }
#line 485 "prog_io_util.m"
}

#line 482 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__unparse_type_list_2_p_0(
#line 482 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Types_3,
#line 482 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Terms_4)
#line 482 "prog_io_util.m"
{
#line 484 "prog_io_util.m"
  {
#line 484 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 485 "prog_io_util.m"
    {
#line 485 "prog_io_util.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_io_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_io_util_scalar_common_2[4], parse_tree__prog_io_util__Types_3, parse_tree__prog_io_util__Terms_4);
#line 485 "prog_io_util.m"
      return;
    }
#line 484 "prog_io_util.m"
  }
#line 482 "prog_io_util.m"
}

#line 418 "prog_io_util.m"
static MR_bool MR_CALL 
parse_tree__prog_io_util__parse_higher_order_type_5_p_0(
#line 418 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term0_6,
#line 418 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__ArgTypes_7,
#line 418 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__MaybeRet_8,
#line 418 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Purity_9)
#line 418 "prog_io_util.m"
{
#line 421 "prog_io_util.m"
  {
#line 421 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 421 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TypeCtorInfo_8_39;
#line 421 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Term1_10;
#line 421 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Args_14;
#line 421 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__VarSet_36;
#line 421 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__ContextPieces_37;
#line 421 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_38_38;
#line 427 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FuncAndArgs_11;
#line 427 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Ret_12;
#line 423 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_18_18;
#line 423 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_19_19;
#line 423 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_20_20;
#line 423 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_21_21;
#line 423 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_22_22;
#line 423 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;

#line 421 "prog_io_util.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 422 "prog_io_util.m"
    {
#line 422 "prog_io_util.m"
      parse_tree__prog_io_util__parse_purity_annotation_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__Term0_6, parse_tree__prog_io_util__Purity_9, &parse_tree__prog_io_util__Term1_10);
    }
#line 423 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term1_10)) == (MR_mktag((MR_Integer) 0)));
#line 423 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 423 "prog_io_util.m"
      {
#line 423 "prog_io_util.m"
        parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_10, (MR_Integer) 0)));
#line 423 "prog_io_util.m"
        parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_10, (MR_Integer) 1)));
#line 423 "prog_io_util.m"
        parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_10, (MR_Integer) 2)));
#line 423 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 423 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 423 "prog_io_util.m"
          {
#line 423 "prog_io_util.m"
            parse_tree__prog_io_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_18_18, (MR_Integer) 0)));
#line 423 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_19_19, (MR_String) "=") == 0);
#line 423 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 423 "prog_io_util.m"
              {
#line 423 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 423 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 423 "prog_io_util.m"
                  {
#line 423 "prog_io_util.m"
                    parse_tree__prog_io_util__FuncAndArgs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, (MR_Integer) 0)));
#line 423 "prog_io_util.m"
                    parse_tree__prog_io_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, (MR_Integer) 1)));
#line 423 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 423 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 423 "prog_io_util.m"
                      {
#line 423 "prog_io_util.m"
                        parse_tree__prog_io_util__Ret_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, (MR_Integer) 0)));
#line 423 "prog_io_util.m"
                        parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, (MR_Integer) 1)));
#line 423 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 423 "prog_io_util.m"
                      }
#line 423 "prog_io_util.m"
                  }
#line 423 "prog_io_util.m"
              }
#line 423 "prog_io_util.m"
          }
#line 423 "prog_io_util.m"
      }
#line 427 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 424 "prog_io_util.m"
      {
#line 424 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TypeCtorInfo_8_33;
#line 424 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__RetType_16;
#line 424 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_23_23;
#line 424 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_24_24;
#line 424 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__VarSet_30;
#line 424 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__ContextPieces_31;
#line 424 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_32_32;
#line 424 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_15_15;

#line 424 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__FuncAndArgs_11)) == (MR_mktag((MR_Integer) 0)));
#line 424 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 424 "prog_io_util.m"
          {
#line 424 "prog_io_util.m"
            parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncAndArgs_11, (MR_Integer) 0)));
#line 424 "prog_io_util.m"
            parse_tree__prog_io_util__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncAndArgs_11, (MR_Integer) 1)));
#line 424 "prog_io_util.m"
            parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__FuncAndArgs_11, (MR_Integer) 2)));
#line 424 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 424 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 424 "prog_io_util.m"
              {
#line 424 "prog_io_util.m"
                parse_tree__prog_io_util__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_23_23, (MR_Integer) 0)));
#line 424 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_24_24, (MR_String) "func") == 0);
#line 424 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 424 "prog_io_util.m"
                  {
#line 11667 "parse_tree.prog_io_util.c"
                    parse_tree__prog_io_util__TypeCtorInfo_8_33 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 320 "prog_io_util.m"
                    {
#line 320 "prog_io_util.m"
                      parse_tree__prog_io_util__VarSet_30 = mercury__varset__init_0_f_0(parse_tree__prog_io_util__TypeCtorInfo_8_33);
                    }
#line 321 "prog_io_util.m"
                    parse_tree__prog_io_util__ContextPieces_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 322 "prog_io_util.m"
                    {
#line 322 "prog_io_util.m"
                      parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_util__Ret_12, parse_tree__prog_io_util__VarSet_30, parse_tree__prog_io_util__ContextPieces_31, &parse_tree__prog_io_util__V_32_32);
                    }
#line 322 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 322 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 322 "prog_io_util.m"
                      {
#line 322 "prog_io_util.m"
                        parse_tree__prog_io_util__RetType_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_32_32, (MR_Integer) 0)));
#line 426 "prog_io_util.m"
                        {
#line 426 "prog_io_util.m"
                          MR_Word base;
#line 426 "prog_io_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 426 "prog_io_util.m"
                          *parse_tree__prog_io_util__MaybeRet_8 = base;
#line 426 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__RetType_16));
#line 426 "prog_io_util.m"
                        }
#line 426 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 322 "prog_io_util.m"
                      }
#line 424 "prog_io_util.m"
                  }
#line 424 "prog_io_util.m"
              }
#line 424 "prog_io_util.m"
          }
#line 424 "prog_io_util.m"
      }
#line 427 "prog_io_util.m"
    else
#line 428 "prog_io_util.m"
      {
#line 428 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_25_25;
#line 428 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_26_26;
#line 428 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_17_17;

#line 428 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term1_10)) == (MR_mktag((MR_Integer) 0)));
#line 428 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 428 "prog_io_util.m"
          {
#line 428 "prog_io_util.m"
            parse_tree__prog_io_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_10, (MR_Integer) 0)));
#line 428 "prog_io_util.m"
            parse_tree__prog_io_util__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_10, (MR_Integer) 1)));
#line 428 "prog_io_util.m"
            parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_10, (MR_Integer) 2)));
#line 428 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_25_25)) == (MR_mktag((MR_Integer) 0)));
#line 428 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 428 "prog_io_util.m"
              {
#line 428 "prog_io_util.m"
                parse_tree__prog_io_util__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_25_25, (MR_Integer) 0)));
#line 428 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_26_26, (MR_String) "pred") == 0);
#line 428 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 428 "prog_io_util.m"
                  {
#line 429 "prog_io_util.m"
                    *parse_tree__prog_io_util__MaybeRet_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 428 "prog_io_util.m"
                  }
#line 428 "prog_io_util.m"
              }
#line 428 "prog_io_util.m"
          }
#line 428 "prog_io_util.m"
      }
#line 421 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 421 "prog_io_util.m"
      {
#line 11766 "parse_tree.prog_io_util.c"
        parse_tree__prog_io_util__TypeCtorInfo_8_39 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 386 "prog_io_util.m"
        {
#line 386 "prog_io_util.m"
          parse_tree__prog_io_util__VarSet_36 = mercury__varset__init_0_f_0(parse_tree__prog_io_util__TypeCtorInfo_8_39);
        }
#line 387 "prog_io_util.m"
        parse_tree__prog_io_util__ContextPieces_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 388 "prog_io_util.m"
        {
#line 388 "prog_io_util.m"
          parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_util__Args_14, parse_tree__prog_io_util__VarSet_36, parse_tree__prog_io_util__ContextPieces_37, &parse_tree__prog_io_util__V_38_38);
        }
#line 388 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 388 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 388 "prog_io_util.m"
          *parse_tree__prog_io_util__ArgTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_38_38, (MR_Integer) 0)));
#line 421 "prog_io_util.m"
      }
#line 421 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 421 "prog_io_util.m"
  }
#line 418 "prog_io_util.m"
}

#line 393 "prog_io_util.m"
static void MR_CALL 
parse_tree__prog_io_util__parse_types_2_5_p_0(
#line 393 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1,
#line 393 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__VarSet_2,
#line 393 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ContextPieces_3,
#line 393 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__RevTypes_4,
#line 393 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__5_5)
#line 393 "prog_io_util.m"
{
#line 396 "prog_io_util.m"
  while (MR_TRUE)
#line 396 "prog_io_util.m"
    {
#line 396 "prog_io_util.m"
      /* tailcall optimized into a loop */
#line 396 "prog_io_util.m"
      {
#line 396 "prog_io_util.m"
        MR_bool parse_tree__prog_io_util__succeeded;

#line 396 "prog_io_util.m"
        if ((parse_tree__prog_io_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 396 "prog_io_util.m"
          {
#line 396 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Types_9;

#line 397 "prog_io_util.m"
            {
#line 397 "prog_io_util.m"
              mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__prog_io_util__RevTypes_4, &parse_tree__prog_io_util__Types_9);
            }
#line 396 "prog_io_util.m"
            {
#line 396 "prog_io_util.m"
              MR_Word base;
#line 396 "prog_io_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 396 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__5_5 = base;
#line 396 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Types_9));
#line 396 "prog_io_util.m"
            }
#line 396 "prog_io_util.m"
          }
#line 396 "prog_io_util.m"
        else
#line 398 "prog_io_util.m"
          {
#line 398 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Term_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 398 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Terms_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 398 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Result0_16;

#line 399 "prog_io_util.m"
            {
#line 399 "prog_io_util.m"
              parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_util__Term_10, parse_tree__prog_io_util__VarSet_2, parse_tree__prog_io_util__ContextPieces_3, &parse_tree__prog_io_util__Result0_16);
            }
#line 403 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__Result0_16)) == (MR_mktag((MR_Integer) 0))))
#line 405 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__5_5 = (MR_Word) parse_tree__prog_io_util__Result0_16;
#line 403 "prog_io_util.m"
            else
#line 401 "prog_io_util.m"
              {
#line 401 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Type_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Result0_16, (MR_Integer) 0)));
#line 401 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_19_19;

#line 402 "prog_io_util.m"
                {
#line 402 "prog_io_util.m"
                  parse_tree__prog_io_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 0) = ((MR_Box) (parse_tree__prog_io_util__Type_17));
#line 402 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io_util__RevTypes_4));
#line 402 "prog_io_util.m"
                }
#line 402 "prog_io_util.m"
                /* direct tailcall eliminated */
#line 402 "prog_io_util.m"
                {
#line 402 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__HeadVar__1__tmp_copy_1 = parse_tree__prog_io_util__Terms_11;
#line 402 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__RevTypes__tmp_copy_4 = parse_tree__prog_io_util__V_19_19;

#line 402 "prog_io_util.m"
                  parse_tree__prog_io_util__RevTypes_4 = parse_tree__prog_io_util__RevTypes__tmp_copy_4;
#line 402 "prog_io_util.m"
                  parse_tree__prog_io_util__HeadVar__1_1 = parse_tree__prog_io_util__HeadVar__1__tmp_copy_1;
#line 402 "prog_io_util.m"
                }
#line 402 "prog_io_util.m"
                continue;
#line 401 "prog_io_util.m"
              }
#line 398 "prog_io_util.m"
          }
#line 396 "prog_io_util.m"
      }
#line 396 "prog_io_util.m"
      break;
#line 396 "prog_io_util.m"
    }
#line 393 "prog_io_util.m"
}

#line 222 "prog_io_util.m"
MR_String MR_CALL 
parse_tree__prog_io_util__attribute_description_1_f_0(
#line 222 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__1_1)
#line 222 "prog_io_util.m"
{
#line 1419 "prog_io_util.m"
  {
#line 1419 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1419 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__HeadVar__2_2;

#line 1419 "prog_io_util.m"
#line 1419 "prog_io_util.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) {
#line 1419 "prog_io_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1419 "prog_io_util.m"
      case (MR_Integer) 0:
#line 1428 "prog_io_util.m"
        parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "solver type specifier";
#line 1419 "prog_io_util.m"
        break;
#line 1419 "prog_io_util.m"
      case (MR_Integer) 1:
#line 1419 "prog_io_util.m"
        parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "purity specifier";
#line 1419 "prog_io_util.m"
        break;
#line 1419 "prog_io_util.m"
      case (MR_Integer) 2:
#line 1419 "prog_io_util.m"
        {
#line 1419 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1420 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1419 "prog_io_util.m"
#line 1419 "prog_io_util.m"
          switch (parse_tree__prog_io_util__V_15_15) {
#line 1419 "prog_io_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1419 "prog_io_util.m"
            case (MR_Integer) 0:
#line 1423 "prog_io_util.m"
              parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "existential quantifier (\140some\')";
#line 1419 "prog_io_util.m"
              break;
#line 1419 "prog_io_util.m"
            case (MR_Integer) 1:
#line 1421 "prog_io_util.m"
              parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "universal quantifier (\140all\')";
#line 1419 "prog_io_util.m"
              break;
#line 1419 "prog_io_util.m"
          }
#line 1419 "prog_io_util.m"
        }
#line 1419 "prog_io_util.m"
        break;
#line 1419 "prog_io_util.m"
      case (MR_Integer) 3:
#line 1419 "prog_io_util.m"
        {
#line 1419 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1424 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1419 "prog_io_util.m"
#line 1419 "prog_io_util.m"
          switch (parse_tree__prog_io_util__V_13_13) {
#line 1419 "prog_io_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1419 "prog_io_util.m"
            case (MR_Integer) 0:
#line 1427 "prog_io_util.m"
              parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "existentially quantified type class constraint (\140=>\')";
#line 1419 "prog_io_util.m"
              break;
#line 1419 "prog_io_util.m"
            case (MR_Integer) 1:
#line 1425 "prog_io_util.m"
              parse_tree__prog_io_util__HeadVar__2_2 = (MR_String) "type class constraint (\140<=\')";
#line 1419 "prog_io_util.m"
              break;
#line 1419 "prog_io_util.m"
          }
#line 1419 "prog_io_util.m"
        }
#line 1419 "prog_io_util.m"
        break;
#line 1419 "prog_io_util.m"
    }
#line 1419 "prog_io_util.m"
    return parse_tree__prog_io_util__HeadVar__2_2;
#line 1419 "prog_io_util.m"
  }
#line 222 "prog_io_util.m"
}

#line 219 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__check_no_attributes_3_p_0(
#line 219 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_35,
#line 219 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Result0_4,
#line 219 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Attributes_5,
#line 219 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_6)
#line 219 "prog_io_util.m"
{
#line 1415 "prog_io_util.m"
  {
#line 1415 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Result0_4)) == (MR_mktag((MR_Integer) 1)));
#line 1415 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Attr_8;
#line 1415 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Context_9;
#line 1406 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 1406 "prog_io_util.m"
    MR_Box parse_tree__prog_io_util__V_7_7;
#line 1407 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_10_10;

#line 1406 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1406 "prog_io_util.m"
      {
#line 1406 "prog_io_util.m"
        parse_tree__prog_io_util__V_7_7 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Result0_4, (MR_Integer) 0));
#line 1407 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Attributes_5)) == (MR_mktag((MR_Integer) 1)));
#line 1407 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1407 "prog_io_util.m"
          {
#line 1407 "prog_io_util.m"
            parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Attributes_5, (MR_Integer) 0)));
#line 1407 "prog_io_util.m"
            parse_tree__prog_io_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Attributes_5, (MR_Integer) 1)));
#line 1407 "prog_io_util.m"
            parse_tree__prog_io_util__Attr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_13_13, (MR_Integer) 0)));
#line 1407 "prog_io_util.m"
            parse_tree__prog_io_util__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_13_13, (MR_Integer) 1)));
#line 1407 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1407 "prog_io_util.m"
          }
#line 1406 "prog_io_util.m"
      }
#line 1415 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1411 "prog_io_util.m"
      {
#line 1411 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Pieces_11;
#line 1411 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Spec_12;
#line 1411 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_16_16;
#line 1411 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_17_17;
#line 1411 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_18_18;
#line 1411 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_27_27;
#line 1411 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_28_28;
#line 1411 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_29_29;
#line 1411 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_30_30;
#line 1411 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_33_33;

#line 1410 "prog_io_util.m"
        {
#line 1410 "prog_io_util.m"
          parse_tree__prog_io_util__V_18_18 = parse_tree__prog_io_util__attribute_description_1_f_0(parse_tree__prog_io_util__Attr_8);
        }
#line 1410 "prog_io_util.m"
        {
#line 1410 "prog_io_util.m"
          parse_tree__prog_io_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1410 "prog_io_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1410 "prog_io_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_17_17, 1) = ((MR_Box) (parse_tree__prog_io_util__V_18_18));
#line 1410 "prog_io_util.m"
        }
#line 1410 "prog_io_util.m"
        {
#line 1410 "prog_io_util.m"
          parse_tree__prog_io_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1410 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 0) = ((MR_Box) (parse_tree__prog_io_util__V_17_17));
#line 1410 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[13])));
#line 1410 "prog_io_util.m"
        }
#line 1410 "prog_io_util.m"
        {
#line 1410 "prog_io_util.m"
          parse_tree__prog_io_util__Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1410 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[17])));
#line 1410 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Pieces_11, 1) = ((MR_Box) (parse_tree__prog_io_util__V_16_16));
#line 1410 "prog_io_util.m"
        }
#line 1413 "prog_io_util.m"
        {
#line 1413 "prog_io_util.m"
          parse_tree__prog_io_util__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1413 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_11));
#line 1413 "prog_io_util.m"
        }
#line 1413 "prog_io_util.m"
        {
#line 1413 "prog_io_util.m"
          parse_tree__prog_io_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1413 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io_util__V_30_30));
#line 1413 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1413 "prog_io_util.m"
        }
#line 1413 "prog_io_util.m"
        {
#line 1413 "prog_io_util.m"
          parse_tree__prog_io_util__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1413 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io_util__Context_9));
#line 1413 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, 1) = ((MR_Box) (parse_tree__prog_io_util__V_29_29));
#line 1413 "prog_io_util.m"
        }
#line 1413 "prog_io_util.m"
        {
#line 1413 "prog_io_util.m"
          parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1413 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_util__V_28_28));
#line 1413 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1413 "prog_io_util.m"
        }
#line 1412 "prog_io_util.m"
        {
#line 1412 "prog_io_util.m"
          parse_tree__prog_io_util__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1412 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1412 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1412 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
#line 1412 "prog_io_util.m"
        }
#line 1414 "prog_io_util.m"
        {
#line 1414 "prog_io_util.m"
          parse_tree__prog_io_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1414 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_12));
#line 1414 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1414 "prog_io_util.m"
        }
#line 1414 "prog_io_util.m"
        {
#line 1414 "prog_io_util.m"
          MR_Word base;
#line 1414 "prog_io_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1414 "prog_io_util.m"
          *parse_tree__prog_io_util__Result_6 = base;
#line 1414 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_33_33));
#line 1414 "prog_io_util.m"
        }
#line 1411 "prog_io_util.m"
      }
#line 1415 "prog_io_util.m"
    else
#line 1416 "prog_io_util.m"
      *parse_tree__prog_io_util__Result_6 = parse_tree__prog_io_util__Result0_4;
#line 1415 "prog_io_util.m"
  }
#line 219 "prog_io_util.m"
}

#line 216 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__parse_decl_attribute_4_p_0(
#line 216 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Functor_5,
#line 216 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__ArgTerms_6,
#line 216 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Attribute_7,
#line 216 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__SubTerm_8)
#line 216 "prog_io_util.m"
{
#line 1373 "prog_io_util.m"
  {
#line 1373 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__ArgTerms_6)) == (MR_mktag((MR_Integer) 1)));
#line 1373 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_34_34;
#line 1373 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_35_35;
#line 1373 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__lo_0;
#line 1373 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__hi_1;
#line 1373 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__mid_2;
#line 1373 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__result_3;

#line 1382 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1382 "prog_io_util.m"
      {
#line 1382 "prog_io_util.m"
        parse_tree__prog_io_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ArgTerms_6, (MR_Integer) 0)));
#line 1382 "prog_io_util.m"
        parse_tree__prog_io_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ArgTerms_6, (MR_Integer) 1)));
#line 1373 "prog_io_util.m"
        /* binary string jump switch */
#line 1373 "prog_io_util.m"
        parse_tree__prog_io_util__lo_0 = (MR_Integer) 0;
#line 1373 "prog_io_util.m"
        parse_tree__prog_io_util__hi_1 = (MR_Integer) 6;
#line 1373 "prog_io_util.m"
        do
#line 1373 "prog_io_util.m"
          {
#line 1373 "prog_io_util.m"
            parse_tree__prog_io_util__mid_2 = (((parse_tree__prog_io_util__lo_0 + parse_tree__prog_io_util__hi_1)) / (MR_Integer) 2);
#line 1373 "prog_io_util.m"
            parse_tree__prog_io_util__result_3 = MR_strcmp(parse_tree__prog_io_util__Functor_5, ((&parse_tree__prog_io_util_vector_common_6[0 + parse_tree__prog_io_util__mid_2]))->parse_tree__prog_io_util__vector_common_type_6_0__vct_6_f_0);
#line 1373 "prog_io_util.m"
            if ((parse_tree__prog_io_util__result_3 == (MR_Integer) 0))
#line 1373 "prog_io_util.m"
              {
#line 1373 "prog_io_util.m"
#line 1373 "prog_io_util.m"
                switch (((&parse_tree__prog_io_util_vector_common_6[0 + parse_tree__prog_io_util__mid_2]))->parse_tree__prog_io_util__vector_common_type_6_0__vct_6_f_1) {
#line 1373 "prog_io_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1373 "prog_io_util.m"
                  case (MR_Integer) 0:
#line 1381 "prog_io_util.m"
                    {
#line 1381 "prog_io_util.m"
                      /* case "<=" */
#line 1381 "prog_io_util.m"
                      {
#line 1381 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__ConstraintsTerm_9;
#line 1381 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_23_23;
#line 1381 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_24_24;

#line 1382 "prog_io_util.m"
                        *parse_tree__prog_io_util__SubTerm_8 = parse_tree__prog_io_util__V_35_35;
#line 1382 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1382 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1382 "prog_io_util.m"
                          {
#line 1382 "prog_io_util.m"
                            parse_tree__prog_io_util__ConstraintsTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
#line 1382 "prog_io_util.m"
                            parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 1)));
#line 1382 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1381 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1381 "prog_io_util.m"
                              {
#line 1383 "prog_io_util.m"
                                parse_tree__prog_io_util__V_24_24 = (MR_Integer) 1;
#line 1383 "prog_io_util.m"
                                {
#line 1383 "prog_io_util.m"
                                  MR_Word base;
#line 1383 "prog_io_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1383 "prog_io_util.m"
                                  *parse_tree__prog_io_util__Attribute_7 = base;
#line 1383 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_24_24));
#line 1383 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__ConstraintsTerm_9));
#line 1383 "prog_io_util.m"
                                }
#line 1383 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1381 "prog_io_util.m"
                              }
#line 1382 "prog_io_util.m"
                          }
#line 1381 "prog_io_util.m"
                      }
#line 1381 "prog_io_util.m"
                    }
#line 1373 "prog_io_util.m"
                    break;
#line 1373 "prog_io_util.m"
                  case (MR_Integer) 1:
#line 1385 "prog_io_util.m"
                    {
#line 1385 "prog_io_util.m"
                      /* case "=>" */
#line 1385 "prog_io_util.m"
                      {
#line 1385 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_20_20;
#line 1385 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_21_21;
#line 1385 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__ConstraintsTerm_29;

#line 1386 "prog_io_util.m"
                        *parse_tree__prog_io_util__SubTerm_8 = parse_tree__prog_io_util__V_35_35;
#line 1386 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1386 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1386 "prog_io_util.m"
                          {
#line 1386 "prog_io_util.m"
                            parse_tree__prog_io_util__ConstraintsTerm_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
#line 1386 "prog_io_util.m"
                            parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 1)));
#line 1386 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1385 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1385 "prog_io_util.m"
                              {
#line 1387 "prog_io_util.m"
                                parse_tree__prog_io_util__V_21_21 = (MR_Integer) 0;
#line 1387 "prog_io_util.m"
                                {
#line 1387 "prog_io_util.m"
                                  MR_Word base;
#line 1387 "prog_io_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1387 "prog_io_util.m"
                                  *parse_tree__prog_io_util__Attribute_7 = base;
#line 1387 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_21_21));
#line 1387 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__ConstraintsTerm_29));
#line 1387 "prog_io_util.m"
                                }
#line 1387 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1385 "prog_io_util.m"
                              }
#line 1386 "prog_io_util.m"
                          }
#line 1385 "prog_io_util.m"
                      }
#line 1385 "prog_io_util.m"
                    }
#line 1373 "prog_io_util.m"
                    break;
#line 1373 "prog_io_util.m"
                  case (MR_Integer) 2:
#line 1394 "prog_io_util.m"
                    {
#line 1394 "prog_io_util.m"
                      /* case "all" */
#line 1394 "prog_io_util.m"
                      {
#line 1394 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TypeCtorInfo_33_33;
#line 1394 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_14_14;
#line 1394 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_15_15;
#line 1394 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TVars_31;

#line 1395 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1395 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1395 "prog_io_util.m"
                          {
#line 1395 "prog_io_util.m"
                            *parse_tree__prog_io_util__SubTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
#line 1395 "prog_io_util.m"
                            parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 1)));
#line 1395 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1394 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1394 "prog_io_util.m"
                              {
#line 12433 "parse_tree.prog_io_util.c"
                                parse_tree__prog_io_util__TypeCtorInfo_33_33 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1396 "prog_io_util.m"
                                {
#line 1396 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_list_of_vars_2_p_0(parse_tree__prog_io_util__TypeCtorInfo_33_33, parse_tree__prog_io_util__V_35_35, &parse_tree__prog_io_util__TVars_31);
                                }
#line 1394 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 1394 "prog_io_util.m"
                                  {
#line 1397 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_15_15 = (MR_Integer) 1;
#line 1397 "prog_io_util.m"
                                    {
#line 1397 "prog_io_util.m"
                                      MR_Word base;
#line 1397 "prog_io_util.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1397 "prog_io_util.m"
                                      *parse_tree__prog_io_util__Attribute_7 = base;
#line 1397 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_15_15));
#line 1397 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TVars_31));
#line 1397 "prog_io_util.m"
                                    }
#line 1397 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1394 "prog_io_util.m"
                                  }
#line 1394 "prog_io_util.m"
                              }
#line 1395 "prog_io_util.m"
                          }
#line 1394 "prog_io_util.m"
                      }
#line 1394 "prog_io_util.m"
                    }
#line 1373 "prog_io_util.m"
                    break;
#line 1373 "prog_io_util.m"
                  case (MR_Integer) 3:
#line 1373 "prog_io_util.m"
                    {
#line 1373 "prog_io_util.m"
                      /* case "impure" */
#line 1373 "prog_io_util.m"
                      {
#line 1373 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_28_28;

#line 1374 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1373 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1373 "prog_io_util.m"
                          {
#line 1374 "prog_io_util.m"
                            *parse_tree__prog_io_util__SubTerm_8 = parse_tree__prog_io_util__V_35_35;
#line 1375 "prog_io_util.m"
                            parse_tree__prog_io_util__V_28_28 = (MR_Integer) 2;
#line 1375 "prog_io_util.m"
                            *parse_tree__prog_io_util__Attribute_7 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[11]);
#line 1375 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1373 "prog_io_util.m"
                          }
#line 1373 "prog_io_util.m"
                      }
#line 1373 "prog_io_util.m"
                    }
#line 1373 "prog_io_util.m"
                    break;
#line 1373 "prog_io_util.m"
                  case (MR_Integer) 4:
#line 1377 "prog_io_util.m"
                    {
#line 1377 "prog_io_util.m"
                      /* case "semipure" */
#line 1377 "prog_io_util.m"
                      {
#line 1377 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_26_26;

#line 1378 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1377 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1377 "prog_io_util.m"
                          {
#line 1378 "prog_io_util.m"
                            *parse_tree__prog_io_util__SubTerm_8 = parse_tree__prog_io_util__V_35_35;
#line 1379 "prog_io_util.m"
                            parse_tree__prog_io_util__V_26_26 = (MR_Integer) 1;
#line 1379 "prog_io_util.m"
                            *parse_tree__prog_io_util__Attribute_7 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[10]);
#line 1379 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1377 "prog_io_util.m"
                          }
#line 1377 "prog_io_util.m"
                      }
#line 1377 "prog_io_util.m"
                    }
#line 1373 "prog_io_util.m"
                    break;
#line 1373 "prog_io_util.m"
                  case (MR_Integer) 5:
#line 1399 "prog_io_util.m"
                    {
#line 1399 "prog_io_util.m"
                      /* case "solver" */
#line 1400 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1399 "prog_io_util.m"
                      if (parse_tree__prog_io_util__succeeded)
#line 1399 "prog_io_util.m"
                        {
#line 1400 "prog_io_util.m"
                          *parse_tree__prog_io_util__SubTerm_8 = parse_tree__prog_io_util__V_35_35;
#line 1401 "prog_io_util.m"
                          *parse_tree__prog_io_util__Attribute_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1401 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1399 "prog_io_util.m"
                        }
#line 1399 "prog_io_util.m"
                    }
#line 1373 "prog_io_util.m"
                    break;
#line 1373 "prog_io_util.m"
                  case (MR_Integer) 6:
#line 1389 "prog_io_util.m"
                    {
#line 1389 "prog_io_util.m"
                      /* case "some" */
#line 1389 "prog_io_util.m"
                      {
#line 1389 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TypeCtorInfo_32_32;
#line 1389 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TVars_11;
#line 1389 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_17_17;
#line 1389 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_18_18;

#line 1390 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1390 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1390 "prog_io_util.m"
                          {
#line 1390 "prog_io_util.m"
                            *parse_tree__prog_io_util__SubTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
#line 1390 "prog_io_util.m"
                            parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_34_34, (MR_Integer) 1)));
#line 1390 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1389 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1389 "prog_io_util.m"
                              {
#line 12597 "parse_tree.prog_io_util.c"
                                parse_tree__prog_io_util__TypeCtorInfo_32_32 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1391 "prog_io_util.m"
                                {
#line 1391 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_list_of_vars_2_p_0(parse_tree__prog_io_util__TypeCtorInfo_32_32, parse_tree__prog_io_util__V_35_35, &parse_tree__prog_io_util__TVars_11);
                                }
#line 1389 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 1389 "prog_io_util.m"
                                  {
#line 1392 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_18_18 = (MR_Integer) 0;
#line 1392 "prog_io_util.m"
                                    {
#line 1392 "prog_io_util.m"
                                      MR_Word base;
#line 1392 "prog_io_util.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1392 "prog_io_util.m"
                                      *parse_tree__prog_io_util__Attribute_7 = base;
#line 1392 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_18_18));
#line 1392 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TVars_11));
#line 1392 "prog_io_util.m"
                                    }
#line 1392 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1389 "prog_io_util.m"
                                  }
#line 1389 "prog_io_util.m"
                              }
#line 1390 "prog_io_util.m"
                          }
#line 1389 "prog_io_util.m"
                      }
#line 1389 "prog_io_util.m"
                    }
#line 1373 "prog_io_util.m"
                    break;
#line 1373 "prog_io_util.m"
                }
#line 1373 "prog_io_util.m"
                /* jump out of search loop */
#line 1373 "prog_io_util.m"
                goto label_0;
#line 1373 "prog_io_util.m"
              }
#line 1373 "prog_io_util.m"
            else
#line 1373 "prog_io_util.m"
            if ((parse_tree__prog_io_util__result_3 < (MR_Integer) 0))
#line 1373 "prog_io_util.m"
              parse_tree__prog_io_util__hi_1 = (parse_tree__prog_io_util__mid_2 - (MR_Integer) 1);
#line 1373 "prog_io_util.m"
            else
#line 1373 "prog_io_util.m"
              parse_tree__prog_io_util__lo_0 = (parse_tree__prog_io_util__mid_2 + (MR_Integer) 1);
#line 1373 "prog_io_util.m"
          }
#line 1373 "prog_io_util.m"
        while ((parse_tree__prog_io_util__lo_0 <= parse_tree__prog_io_util__hi_1));
#line 1373 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 1373 "prog_io_util.m"
      label_0:;
#line 1382 "prog_io_util.m"
      }
#line 1373 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1373 "prog_io_util.m"
  }
#line 216 "prog_io_util.m"
}

#line 195 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__list_term_to_term_list_2_p_0(
#line 195 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 195 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Terms_4)
#line 195 "prog_io_util.m"
{
#line 1361 "prog_io_util.m"
  {
#line 1361 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 1361 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_19_19;
#line 1361 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_20_20;
#line 1361 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_21_21;
#line 1361 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_18_18;

#line 1361 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1361 "prog_io_util.m"
      {
#line 1361 "prog_io_util.m"
        parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_3, (MR_Integer) 0)));
#line 1361 "prog_io_util.m"
        parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_3, (MR_Integer) 1)));
#line 1361 "prog_io_util.m"
        parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_3, (MR_Integer) 2)));
#line 1365 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_20_20)) == (MR_mktag((MR_Integer) 0)));
#line 1365 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1365 "prog_io_util.m"
          {
#line 1365 "prog_io_util.m"
            parse_tree__prog_io_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_20_20, (MR_Integer) 0)));
#line 1361 "prog_io_util.m"
            if ((parse_tree__prog_io_util__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1365 "prog_io_util.m"
              {
#line 1365 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_21_21, (MR_String) "[]") == 0);
#line 1365 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1365 "prog_io_util.m"
                  {
#line 1366 "prog_io_util.m"
                    *parse_tree__prog_io_util__Terms_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1366 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1365 "prog_io_util.m"
                  }
#line 1365 "prog_io_util.m"
              }
#line 1361 "prog_io_util.m"
            else
#line 1361 "prog_io_util.m"
              {
#line 1361 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__HeadTerm_5;
#line 1361 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailTerm_6;
#line 1361 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailTerms_8;
#line 1361 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_16_16;
#line 1361 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_17_17;

#line 1361 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_21_21, (MR_String) "[|]") == 0);
#line 1361 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1361 "prog_io_util.m"
                  {
#line 1361 "prog_io_util.m"
                    parse_tree__prog_io_util__HeadTerm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, (MR_Integer) 0)));
#line 1361 "prog_io_util.m"
                    parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, (MR_Integer) 1)));
#line 1361 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 1361 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1361 "prog_io_util.m"
                      {
#line 1361 "prog_io_util.m"
                        parse_tree__prog_io_util__TailTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
#line 1361 "prog_io_util.m"
                        parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
#line 1361 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1361 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1361 "prog_io_util.m"
                          {
#line 1362 "prog_io_util.m"
                            {
#line 1362 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__list_term_to_term_list_2_p_0(parse_tree__prog_io_util__TailTerm_6, &parse_tree__prog_io_util__TailTerms_8);
                            }
#line 1361 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1361 "prog_io_util.m"
                              {
#line 1363 "prog_io_util.m"
                                {
#line 1363 "prog_io_util.m"
                                  MR_Word base;
#line 1363 "prog_io_util.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1363 "prog_io_util.m"
                                  *parse_tree__prog_io_util__Terms_4 = base;
#line 1363 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadTerm_5));
#line 1363 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailTerms_8));
#line 1363 "prog_io_util.m"
                                }
#line 1363 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1361 "prog_io_util.m"
                              }
#line 1361 "prog_io_util.m"
                          }
#line 1361 "prog_io_util.m"
                      }
#line 1361 "prog_io_util.m"
                  }
#line 1361 "prog_io_util.m"
              }
#line 1365 "prog_io_util.m"
          }
#line 1361 "prog_io_util.m"
      }
#line 1361 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1361 "prog_io_util.m"
  }
#line 195 "prog_io_util.m"
}

#line 192 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__map_parser_3_p_0(
#line 192 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_22,
#line 192 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Parser_1,
#line 192 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 192 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__3_3)
#line 192 "prog_io_util.m"
{
#line 1100 "prog_io_util.m"
  {
#line 1100 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 1100 "prog_io_util.m"
    if ((parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1100 "prog_io_util.m"
      {
#line 1100 "prog_io_util.m"
        *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[9]);
#line 1100 "prog_io_util.m"
      }
#line 1100 "prog_io_util.m"
    else
#line 1101 "prog_io_util.m"
      {
#line 1101 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1101 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1101 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__HeadResult_10;
#line 1101 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TailResult_11;
#line 1102 "prog_io_util.m"
        void MR_CALL (* parse_tree__prog_io_util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Parser_1, (MR_Integer) 1)));
#line 1102 "prog_io_util.m"
        MR_Box parse_tree__prog_io_util__conv1_HeadResult_10;

#line 1102 "prog_io_util.m"
        {
#line 1102 "prog_io_util.m"
          parse_tree__prog_io_util__func_0(((MR_Box) parse_tree__prog_io_util__Parser_1), ((MR_Box) (parse_tree__prog_io_util__Head_7)), &parse_tree__prog_io_util__conv1_HeadResult_10);
        }
#line 1102 "prog_io_util.m"
        parse_tree__prog_io_util__HeadResult_10 = ((MR_Word) parse_tree__prog_io_util__conv1_HeadResult_10);
#line 1103 "prog_io_util.m"
        {
#line 1103 "prog_io_util.m"
          parse_tree__prog_io_util__map_parser_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_22, parse_tree__prog_io_util__Parser_1, parse_tree__prog_io_util__Tail_8, &parse_tree__prog_io_util__TailResult_11);
        }
#line 1108 "prog_io_util.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadResult_10)) == (MR_mktag((MR_Integer) 0))))
#line 1108 "prog_io_util.m"
          {
#line 1108 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadResult_10, (MR_Integer) 0)));

#line 1108 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__TailResult_11)) == (MR_mktag((MR_Integer) 0))))
#line 1105 "prog_io_util.m"
              {
#line 1105 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailSpecs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TailResult_11, (MR_Integer) 0)));
#line 1105 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_20_20;

#line 1107 "prog_io_util.m"
                {
#line 1107 "prog_io_util.m"
                  parse_tree__prog_io_util__V_20_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_util__V_24_24, parse_tree__prog_io_util__TailSpecs_13);
                }
#line 1107 "prog_io_util.m"
                {
#line 1107 "prog_io_util.m"
                  MR_Word base;
#line 1107 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1107 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 1107 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_20_20));
#line 1107 "prog_io_util.m"
                }
#line 1105 "prog_io_util.m"
              }
#line 1108 "prog_io_util.m"
            else
#line 1111 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) parse_tree__prog_io_util__HeadResult_10;
#line 1108 "prog_io_util.m"
          }
#line 1108 "prog_io_util.m"
        else
#line 1108 "prog_io_util.m"
          {
#line 1108 "prog_io_util.m"
            MR_Box parse_tree__prog_io_util__V_25_25 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadResult_10, (MR_Integer) 0));

#line 1108 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__TailResult_11)) == (MR_mktag((MR_Integer) 0))))
#line 1115 "prog_io_util.m"
              *parse_tree__prog_io_util__HeadVar__3_3 = parse_tree__prog_io_util__TailResult_11;
#line 1108 "prog_io_util.m"
            else
#line 1117 "prog_io_util.m"
              {
#line 1117 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__TailItems_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TailResult_11, (MR_Integer) 0)));
#line 1117 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_19_19;

#line 1119 "prog_io_util.m"
                {
#line 1119 "prog_io_util.m"
                  parse_tree__prog_io_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1119 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 0) = parse_tree__prog_io_util__V_25_25;
#line 1119 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io_util__TailItems_18));
#line 1119 "prog_io_util.m"
                }
#line 1119 "prog_io_util.m"
                {
#line 1119 "prog_io_util.m"
                  MR_Word base;
#line 1119 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1119 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 1119 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_19_19));
#line 1119 "prog_io_util.m"
                }
#line 1117 "prog_io_util.m"
              }
#line 1108 "prog_io_util.m"
          }
#line 1101 "prog_io_util.m"
      }
#line 1100 "prog_io_util.m"
  }
#line 192 "prog_io_util.m"
}

#line 189 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_list_3_p_0(
#line 189 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_8,
#line 189 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Parser_4,
#line 189 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_5,
#line 189 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_6)
#line 189 "prog_io_util.m"
{
#line 1060 "prog_io_util.m"
  {
#line 1060 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1060 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__List_7;
#line 1060 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Head_12;
#line 1060 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Tail_13;
#line 1060 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_15_15;

#line 1042 "prog_io_util.m"
    {
#line 1042 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", parse_tree__prog_io_util__Term_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_15_15);
    }
#line 1019 "prog_io_util.m"
    parse_tree__prog_io_util__Head_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_15_15, (MR_Integer) 0)));
#line 1019 "prog_io_util.m"
    parse_tree__prog_io_util__Tail_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_15_15, (MR_Integer) 1)));
#line 1020 "prog_io_util.m"
    {
#line 1020 "prog_io_util.m"
      parse_tree__prog_io_util__List_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1020 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__List_7, 0) = ((MR_Box) (parse_tree__prog_io_util__Head_12));
#line 1020 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__List_7, 1) = ((MR_Box) (parse_tree__prog_io_util__Tail_13));
#line 1020 "prog_io_util.m"
    }
#line 1062 "prog_io_util.m"
    {
#line 1062 "prog_io_util.m"
      parse_tree__prog_io_util__map_parser_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_8, parse_tree__prog_io_util__Parser_4, parse_tree__prog_io_util__List_7, parse_tree__prog_io_util__Result_6);
#line 1062 "prog_io_util.m"
      return;
    }
#line 1060 "prog_io_util.m"
  }
#line 189 "prog_io_util.m"
}

#line 187 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__parse_one_or_more_3_p_0(
#line 187 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_10,
#line 187 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Parser_4,
#line 187 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_5,
#line 187 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Result_6)
#line 187 "prog_io_util.m"
{
#line 1056 "prog_io_util.m"
  {
#line 1056 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1056 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Head_7;
#line 1056 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Tail_8;
#line 1056 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 1042 "prog_io_util.m"
    {
#line 1042 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", parse_tree__prog_io_util__Term_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_9_9);
    }
#line 1057 "prog_io_util.m"
    parse_tree__prog_io_util__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_9_9, (MR_Integer) 0)));
#line 1057 "prog_io_util.m"
    parse_tree__prog_io_util__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_9_9, (MR_Integer) 1)));
#line 1058 "prog_io_util.m"
    {
#line 1058 "prog_io_util.m"
      parse_tree__prog_io_util__map_parser_one_or_more_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_10, parse_tree__prog_io_util__Parser_4, parse_tree__prog_io_util__Head_7, parse_tree__prog_io_util__Tail_8, parse_tree__prog_io_util__Result_6);
#line 1058 "prog_io_util.m"
      return;
    }
#line 1056 "prog_io_util.m"
  }
#line 187 "prog_io_util.m"
}

#line 182 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__sum_to_list_2_p_0(
#line 182 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
#line 182 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 182 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__List_4)
#line 182 "prog_io_util.m"
{
#line 1031 "prog_io_util.m"
  {
#line 1031 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1031 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Head_5;
#line 1031 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Tail_6;
#line 1031 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_8_8;

#line 1042 "prog_io_util.m"
    {
#line 1042 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) "+", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_8_8);
    }
#line 1032 "prog_io_util.m"
    parse_tree__prog_io_util__Head_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 0)));
#line 1032 "prog_io_util.m"
    parse_tree__prog_io_util__Tail_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 1)));
#line 1033 "prog_io_util.m"
    {
#line 1033 "prog_io_util.m"
      MR_Word base;
#line 1033 "prog_io_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1033 "prog_io_util.m"
      *parse_tree__prog_io_util__List_4 = base;
#line 1033 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Head_5));
#line 1033 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Tail_6));
#line 1033 "prog_io_util.m"
    }
#line 1031 "prog_io_util.m"
  }
#line 182 "prog_io_util.m"
}

#line 181 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__sum_to_one_or_more_2_p_0(
#line 181 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_6,
#line 181 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 181 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__OneOrMore_4)
#line 181 "prog_io_util.m"
{
#line 1028 "prog_io_util.m"
  {
#line 1028 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 1042 "prog_io_util.m"
    {
#line 1042 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) "+", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_util__OneOrMore_4);
#line 1042 "prog_io_util.m"
      return;
    }
#line 1028 "prog_io_util.m"
  }
#line 181 "prog_io_util.m"
}

#line 175 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__one_or_more_to_conjunction_3_p_0(
#line 175 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_20,
#line 175 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Context_1,
#line 175 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__HeadVar__2_2,
#line 175 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Term_3)
#line 175 "prog_io_util.m"
{
#line 1022 "prog_io_util.m"
  {
#line 1022 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1022 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1022 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1022 "prog_io_util.m"
    if ((parse_tree__prog_io_util__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1022 "prog_io_util.m"
      *parse_tree__prog_io_util__Term_3 = parse_tree__prog_io_util__V_22_22;
#line 1022 "prog_io_util.m"
    else
#line 1024 "prog_io_util.m"
      {
#line 1024 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Second_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, (MR_Integer) 0)));
#line 1024 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_21_21, (MR_Integer) 1)));
#line 1024 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Tail_12;
#line 1024 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_14_14;
#line 1024 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_17_17;
#line 1024 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_18_18;

#line 1025 "prog_io_util.m"
        {
#line 1025 "prog_io_util.m"
          parse_tree__prog_io_util__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1025 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_14_14, 0) = ((MR_Box) (parse_tree__prog_io_util__Second_9));
#line 1025 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_14_14, 1) = ((MR_Box) (parse_tree__prog_io_util__Rest_10));
#line 1025 "prog_io_util.m"
        }
#line 1025 "prog_io_util.m"
        {
#line 1025 "prog_io_util.m"
          parse_tree__prog_io_util__one_or_more_to_conjunction_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_20, parse_tree__prog_io_util__Context_1, parse_tree__prog_io_util__V_14_14, &parse_tree__prog_io_util__Tail_12);
        }
#line 1026 "prog_io_util.m"
        {
#line 1026 "prog_io_util.m"
          parse_tree__prog_io_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1026 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, 0) = ((MR_Box) (parse_tree__prog_io_util__Tail_12));
#line 1026 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1026 "prog_io_util.m"
        }
#line 1026 "prog_io_util.m"
        {
#line 1026 "prog_io_util.m"
          parse_tree__prog_io_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1026 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_17_17, 0) = ((MR_Box) (parse_tree__prog_io_util__V_22_22));
#line 1026 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_17_17, 1) = ((MR_Box) (parse_tree__prog_io_util__V_18_18));
#line 1026 "prog_io_util.m"
        }
#line 1026 "prog_io_util.m"
        {
#line 1026 "prog_io_util.m"
          MR_Word base;
#line 1026 "prog_io_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1026 "prog_io_util.m"
          *parse_tree__prog_io_util__Term_3 = base;
#line 1026 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[8]));
#line 1026 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_17_17));
#line 1026 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_1));
#line 1026 "prog_io_util.m"
        }
#line 1024 "prog_io_util.m"
      }
#line 1022 "prog_io_util.m"
  }
#line 175 "prog_io_util.m"
}

#line 168 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__conjunction_to_list_2_p_0(
#line 168 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
#line 168 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 168 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__List_4)
#line 168 "prog_io_util.m"
{
#line 1018 "prog_io_util.m"
  {
#line 1018 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1018 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Head_5;
#line 1018 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Tail_6;
#line 1018 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_8_8;

#line 1042 "prog_io_util.m"
    {
#line 1042 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_8_8);
    }
#line 1019 "prog_io_util.m"
    parse_tree__prog_io_util__Head_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 0)));
#line 1019 "prog_io_util.m"
    parse_tree__prog_io_util__Tail_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 1)));
#line 1020 "prog_io_util.m"
    {
#line 1020 "prog_io_util.m"
      MR_Word base;
#line 1020 "prog_io_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1020 "prog_io_util.m"
      *parse_tree__prog_io_util__List_4 = base;
#line 1020 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Head_5));
#line 1020 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Tail_6));
#line 1020 "prog_io_util.m"
    }
#line 1018 "prog_io_util.m"
  }
#line 168 "prog_io_util.m"
}

#line 166 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__conjunction_to_one_or_more_2_p_0(
#line 166 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_6,
#line 166 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 166 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__OneOrMore_4)
#line 166 "prog_io_util.m"
{
#line 1015 "prog_io_util.m"
  {
#line 1015 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 1042 "prog_io_util.m"
    {
#line 1042 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ",", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_util__OneOrMore_4);
#line 1042 "prog_io_util.m"
      return;
    }
#line 1015 "prog_io_util.m"
  }
#line 166 "prog_io_util.m"
}

#line 162 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__disjunction_to_list_2_p_0(
#line 162 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_9,
#line 162 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 162 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__List_4)
#line 162 "prog_io_util.m"
{
#line 1011 "prog_io_util.m"
  {
#line 1011 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 1011 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Head_5;
#line 1011 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Tail_6;
#line 1011 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_8_8;

#line 1042 "prog_io_util.m"
    {
#line 1042 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ";", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_8_8);
    }
#line 1012 "prog_io_util.m"
    parse_tree__prog_io_util__Head_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 0)));
#line 1012 "prog_io_util.m"
    parse_tree__prog_io_util__Tail_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_8_8, (MR_Integer) 1)));
#line 1013 "prog_io_util.m"
    {
#line 1013 "prog_io_util.m"
      MR_Word base;
#line 1013 "prog_io_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1013 "prog_io_util.m"
      *parse_tree__prog_io_util__List_4 = base;
#line 1013 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Head_5));
#line 1013 "prog_io_util.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Tail_6));
#line 1013 "prog_io_util.m"
    }
#line 1011 "prog_io_util.m"
  }
#line 162 "prog_io_util.m"
}

#line 160 "prog_io_util.m"
void MR_CALL 
parse_tree__prog_io_util__disjunction_to_one_or_more_2_p_0(
#line 160 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__TypeInfo_for_T_6,
#line 160 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_3,
#line 160 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__OneOrMore_4)
#line 160 "prog_io_util.m"
{
#line 1008 "prog_io_util.m"
  {
#line 1008 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 1042 "prog_io_util.m"
    {
#line 1042 "prog_io_util.m"
      parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_105_110_111_112_95_116_101_114_109_95_116_111_95_111_110_101_95_111_114_95_109_111_114_101_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_String) ";", parse_tree__prog_io_util__Term_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_util__OneOrMore_4);
#line 1042 "prog_io_util.m"
      return;
    }
#line 1008 "prog_io_util.m"
  }
#line 160 "prog_io_util.m"
}

#line 156 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__standard_det_2_p_0(
#line 156 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__HeadVar__1_1,
#line 156 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__HeadVar__2_2)
#line 156 "prog_io_util.m"
{
#line 944 "prog_io_util.m"
  {
#line 944 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 944 "prog_io_util.m"
    MR_Integer parse_tree__prog_io_util__slot_0;
#line 944 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__str_1;

#line 944 "prog_io_util.m"
    /* hashed string simple lookup switch */
#line 944 "prog_io_util.m"
    /* compute the hash value of the input string */
#line 944 "prog_io_util.m"
    parse_tree__prog_io_util__slot_0 = ((MR_hash_string4(parse_tree__prog_io_util__HeadVar__1_1)) & (MR_Integer) 31);
#line 944 "prog_io_util.m"
    /* hash chain loop */
#line 944 "prog_io_util.m"
    do
#line 944 "prog_io_util.m"
      {
#line 944 "prog_io_util.m"
        /* lookup the string for this hash slot */
#line 944 "prog_io_util.m"
        parse_tree__prog_io_util__str_1 = ((&parse_tree__prog_io_util_vector_common_5[0 + parse_tree__prog_io_util__slot_0]))->parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_0;
#line 944 "prog_io_util.m"
        /* did we find a match? */
#line 944 "prog_io_util.m"
        if ((((parse_tree__prog_io_util__str_1 != NULL)) && ((strcmp(parse_tree__prog_io_util__str_1, parse_tree__prog_io_util__HeadVar__1_1) == 0))))
#line 944 "prog_io_util.m"
          {
#line 944 "prog_io_util.m"
            /* we found a match; look up the results */
#line 944 "prog_io_util.m"
            *parse_tree__prog_io_util__HeadVar__2_2 = ((&parse_tree__prog_io_util_vector_common_5[0 + parse_tree__prog_io_util__slot_0]))->parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_2;
#line 944 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 944 "prog_io_util.m"
            /* jump out of search loop */
#line 944 "prog_io_util.m"
            goto label_0;
#line 944 "prog_io_util.m"
          }
#line 944 "prog_io_util.m"
        else
#line 944 "prog_io_util.m"
          {
#line 944 "prog_io_util.m"
            /* no match yet, so get next slot in hash chain */
#line 944 "prog_io_util.m"
            parse_tree__prog_io_util__slot_0 = ((&parse_tree__prog_io_util_vector_common_5[0 + parse_tree__prog_io_util__slot_0]))->parse_tree__prog_io_util__vector_common_type_5_0__vct_5_f_1;
#line 944 "prog_io_util.m"
          }
#line 944 "prog_io_util.m"
      }
#line 944 "prog_io_util.m"
    while ((parse_tree__prog_io_util__slot_0 >= (MR_Integer) 0));
#line 944 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 944 "prog_io_util.m"
  label_0:;
#line 944 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 944 "prog_io_util.m"
  }
#line 156 "prog_io_util.m"
}

#line 154 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__is_known_inst_name_1_p_0(
#line 154 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__Name_2)
#line 154 "prog_io_util.m"
{
#line 724 "prog_io_util.m"
  {
#line 724 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 725 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_3_3;

#line 725 "prog_io_util.m"
    {
#line 725 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_util__Name_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_3_3);
    }
#line 724 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 724 "prog_io_util.m"
  }
#line 154 "prog_io_util.m"
}

#line 153 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__is_known_mode_name_1_p_0(
#line 153 "prog_io_util.m"
  MR_String parse_tree__prog_io_util__HeadVar__1_1)
#line 153 "prog_io_util.m"
{
#line 544 "prog_io_util.m"
  {
#line 544 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 544 "prog_io_util.m"
    if ((strcmp(parse_tree__prog_io_util__HeadVar__1_1, (MR_String) ">>") == 0))
#line 544 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 544 "prog_io_util.m"
    else
#line 544 "prog_io_util.m"
    if ((strcmp(parse_tree__prog_io_util__HeadVar__1_1, (MR_String) "is") == 0))
#line 545 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 544 "prog_io_util.m"
    else
#line 544 "prog_io_util.m"
      parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 544 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 544 "prog_io_util.m"
  }
#line 153 "prog_io_util.m"
}

#line 150 "prog_io_util.m"
MR_bool MR_CALL 
parse_tree__prog_io_util__convert_inst_3_p_0(
#line 150 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__AllowConstrainedInstVar_1,
#line 150 "prog_io_util.m"
  MR_Word parse_tree__prog_io_util__Term_2,
#line 150 "prog_io_util.m"
  MR_Word * parse_tree__prog_io_util__Inst_3)
#line 150 "prog_io_util.m"
{
#line 641 "prog_io_util.m"
  {
#line 641 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 641 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__Term_2)) == (MR_mktag((MR_Integer) 0))))
#line 645 "prog_io_util.m"
      {
#line 645 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Functor_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_2, (MR_Integer) 0)));
#line 645 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Args0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_2, (MR_Integer) 1)));
#line 645 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__Name_16;
#line 646 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util___Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_2, (MR_Integer) 2)));
#line 686 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__KnownInstKind_17;

#line 647 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Functor_13)) == (MR_mktag((MR_Integer) 0)));
#line 647 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 647 "prog_io_util.m"
          {
#line 647 "prog_io_util.m"
            parse_tree__prog_io_util__Name_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Functor_13, (MR_Integer) 0)));
#line 651 "prog_io_util.m"
            {
#line 651 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_util__Name_16, parse_tree__prog_io_util__Args0_14, &parse_tree__prog_io_util__KnownInstKind_17);
            }
#line 686 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 655 "prog_io_util.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_util__KnownInstKind_17)) == (MR_mktag((MR_Integer) 2))))
#line 658 "prog_io_util.m"
                {
#line 658 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__CompoundInstKind_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__KnownInstKind_17, (MR_Integer) 0)));

#line 663 "prog_io_util.m"
#line 663 "prog_io_util.m"
                  switch (MR_tag((MR_Word) parse_tree__prog_io_util__CompoundInstKind_18)) {
#line 663 "prog_io_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 663 "prog_io_util.m"
                    case (MR_Integer) 0:
#line 660 "prog_io_util.m"
                      {
#line 660 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__BeforeIsTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 0)));
#line 660 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__DetTerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 1)));

#line 661 "prog_io_util.m"
                        {
#line 661 "prog_io_util.m"
                          return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_higher_order_inst_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__BeforeIsTerm_19, parse_tree__prog_io_util__DetTerm_20, parse_tree__prog_io_util__Inst_3);
                        }
#line 660 "prog_io_util.m"
                      }
#line 663 "prog_io_util.m"
                      break;
#line 663 "prog_io_util.m"
                    case (MR_Integer) 1:
#line 676 "prog_io_util.m"
                      {
#line 676 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TypeInfo_53_53;
#line 676 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TypeCtorInfo_54_54;
#line 676 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TypeCtorInfo_55_55;
#line 676 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__VarTerm_22;
#line 676 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__SubInstTerm_23;
#line 676 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Var_24;
#line 676 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__SubInst_26;
#line 676 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_35_35;
#line 676 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_36_36;
#line 676 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_37_37;
#line 678 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_25_25;

#line 677 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__AllowConstrainedInstVar_1 == (MR_Integer) 0);
#line 676 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 676 "prog_io_util.m"
                          {
#line 676 "prog_io_util.m"
                            parse_tree__prog_io_util__VarTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 0)));
#line 676 "prog_io_util.m"
                            parse_tree__prog_io_util__SubInstTerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 1)));
#line 678 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__VarTerm_22)) == (MR_mktag((MR_Integer) 1)));
#line 678 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 678 "prog_io_util.m"
                              {
#line 678 "prog_io_util.m"
                                parse_tree__prog_io_util__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarTerm_22, (MR_Integer) 0)));
#line 678 "prog_io_util.m"
                                parse_tree__prog_io_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarTerm_22, (MR_Integer) 1)));
#line 680 "prog_io_util.m"
                                parse_tree__prog_io_util__V_35_35 = (MR_Integer) 1;
#line 680 "prog_io_util.m"
                                {
#line 680 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_util__V_35_35, parse_tree__prog_io_util__SubInstTerm_23, &parse_tree__prog_io_util__SubInst_26);
                                }
#line 676 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 676 "prog_io_util.m"
                                  {
#line 13674 "parse_tree.prog_io_util.c"
                                    parse_tree__prog_io_util__TypeInfo_53_53 = (MR_Word) &parse_tree__prog_io_util_scalar_common_1[1];
#line 13676 "parse_tree.prog_io_util.c"
                                    parse_tree__prog_io_util__TypeCtorInfo_54_54 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 13678 "parse_tree.prog_io_util.c"
                                    parse_tree__prog_io_util__TypeCtorInfo_55_55 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 683 "prog_io_util.m"
                                    {
#line 683 "prog_io_util.m"
                                      parse_tree__prog_io_util__V_37_37 = mercury__term__coerce_var_1_f_0(parse_tree__prog_io_util__TypeCtorInfo_54_54, parse_tree__prog_io_util__TypeCtorInfo_55_55, parse_tree__prog_io_util__Var_24);
                                    }
#line 682 "prog_io_util.m"
                                    {
#line 682 "prog_io_util.m"
                                      parse_tree__prog_io_util__V_36_36 = mercury__set__make_singleton_set_1_f_0(parse_tree__prog_io_util__TypeInfo_53_53, ((MR_Box) (parse_tree__prog_io_util__V_37_37)));
                                    }
#line 682 "prog_io_util.m"
                                    {
#line 682 "prog_io_util.m"
                                      MR_Word base;
#line 682 "prog_io_util.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 682 "prog_io_util.m"
                                      *parse_tree__prog_io_util__Inst_3 = base;
#line 682 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 682 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 682 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_util__SubInst_26));
#line 682 "prog_io_util.m"
                                    }
#line 682 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 676 "prog_io_util.m"
                                  }
#line 678 "prog_io_util.m"
                              }
#line 676 "prog_io_util.m"
                          }
#line 676 "prog_io_util.m"
                      }
#line 663 "prog_io_util.m"
                      break;
#line 663 "prog_io_util.m"
                    case (MR_Integer) 2:
#line 664 "prog_io_util.m"
                      {
#line 664 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__DisjTerm_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 0)));

#line 665 "prog_io_util.m"
                        {
#line 665 "prog_io_util.m"
                          return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__DisjTerm_21, (MR_Integer) 0, parse_tree__prog_io_util__Inst_3);
                        }
#line 664 "prog_io_util.m"
                      }
#line 663 "prog_io_util.m"
                      break;
#line 663 "prog_io_util.m"
                    case (MR_Integer) 3:
#line 663 "prog_io_util.m"
#line 663 "prog_io_util.m"
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 0)))) {
#line 663 "prog_io_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 663 "prog_io_util.m"
                        case (MR_Integer) 0:
#line 668 "prog_io_util.m"
                          {
#line 668 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__DisjTerm_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 1)));

#line 669 "prog_io_util.m"
                            {
#line 669 "prog_io_util.m"
                              return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__DisjTerm_45, (MR_Integer) 1, parse_tree__prog_io_util__Inst_3);
                            }
#line 668 "prog_io_util.m"
                          }
#line 663 "prog_io_util.m"
                          break;
#line 663 "prog_io_util.m"
                        case (MR_Integer) 1:
#line 672 "prog_io_util.m"
                          {
#line 672 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__DisjTerm_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__CompoundInstKind_18, (MR_Integer) 1)));

#line 673 "prog_io_util.m"
                            {
#line 673 "prog_io_util.m"
                              return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_bound_inst_list_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__DisjTerm_46, (MR_Integer) 2, parse_tree__prog_io_util__Inst_3);
                            }
#line 672 "prog_io_util.m"
                          }
#line 663 "prog_io_util.m"
                          break;
#line 663 "prog_io_util.m"
                      }
#line 663 "prog_io_util.m"
                      break;
#line 663 "prog_io_util.m"
                  }
#line 658 "prog_io_util.m"
                }
#line 655 "prog_io_util.m"
              else
#line 655 "prog_io_util.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_util__KnownInstKind_17)) == (MR_mktag((MR_Integer) 1))))
#line 656 "prog_io_util.m"
                {
#line 656 "prog_io_util.m"
                  *parse_tree__prog_io_util__Inst_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__KnownInstKind_17, (MR_Integer) 0)));
#line 656 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 656 "prog_io_util.m"
                }
#line 655 "prog_io_util.m"
              else
#line 655 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 686 "prog_io_util.m"
            else
#line 689 "prog_io_util.m"
              {
#line 689 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__QualifiedName_27;
#line 689 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Args1_28;
#line 706 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__InstPrime_31;
#line 691 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__BuiltinModule_29;
#line 691 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__UnqualifiedName_30;
#line 691 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_41_41;
#line 691 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__V_42_42;
#line 691 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__KnownInstKind_47;
#line 691 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_58_58;
#line 703 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_43_43;
#line 703 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_32_32;
#line 703 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_33_33;

#line 688 "prog_io_util.m"
                {
#line 688 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_from_f_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__Functor_13, parse_tree__prog_io_util__Args0_14, &parse_tree__prog_io_util__QualifiedName_27, &parse_tree__prog_io_util__Args1_28);
                }
#line 689 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 689 "prog_io_util.m"
                  {
#line 691 "prog_io_util.m"
                    {
#line 691 "prog_io_util.m"
                      parse_tree__prog_io_util__BuiltinModule_29 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                    }
#line 692 "prog_io_util.m"
                    parse_tree__prog_io_util__V_42_42 = (MR_String) "";
#line 692 "prog_io_util.m"
                    parse_tree__prog_io_util__V_41_41 = (MR_Word) &parse_tree__prog_io_util_scalar_common_3[1];
#line 692 "prog_io_util.m"
                    {
#line 692 "prog_io_util.m"
                      mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(parse_tree__prog_io_util__QualifiedName_27, parse_tree__prog_io_util__V_41_41, &parse_tree__prog_io_util__V_58_58);
                    }
#line 692 "prog_io_util.m"
                    {
#line 692 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_util__BuiltinModule_29, parse_tree__prog_io_util__V_58_58);
                    }
#line 691 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 691 "prog_io_util.m"
                      {
#line 696 "prog_io_util.m"
                        {
#line 696 "prog_io_util.m"
                          parse_tree__prog_io_util__UnqualifiedName_30 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__prog_io_util__QualifiedName_27);
                        }
#line 697 "prog_io_util.m"
                        {
#line 697 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_107_110_111_119_110_95_105_110_115_116_95_110_97_109_101_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(parse_tree__prog_io_util__UnqualifiedName_30, parse_tree__prog_io_util__Args1_28, &parse_tree__prog_io_util__KnownInstKind_47);
                        }
#line 691 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 691 "prog_io_util.m"
                          {
#line 698 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__KnownInstKind_47)) == (MR_mktag((MR_Integer) 1)));
#line 698 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 698 "prog_io_util.m"
                              {
#line 698 "prog_io_util.m"
                                parse_tree__prog_io_util__InstPrime_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__KnownInstKind_47, (MR_Integer) 0)));
#line 703 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_util__InstPrime_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__InstPrime_31, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 703 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 703 "prog_io_util.m"
                                  {
#line 703 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__InstPrime_31, (MR_Integer) 1)));
#line 703 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_43_43)) == (MR_mktag((MR_Integer) 0)));
#line 703 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 703 "prog_io_util.m"
                                      {
#line 703 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_43_43, (MR_Integer) 0)));
#line 703 "prog_io_util.m"
                                        parse_tree__prog_io_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_43_43, (MR_Integer) 1)));
#line 703 "prog_io_util.m"
                                      }
#line 703 "prog_io_util.m"
                                  }
#line 703 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = !(parse_tree__prog_io_util__succeeded);
#line 698 "prog_io_util.m"
                              }
#line 691 "prog_io_util.m"
                          }
#line 691 "prog_io_util.m"
                      }
#line 706 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 705 "prog_io_util.m"
                      {
#line 705 "prog_io_util.m"
                        *parse_tree__prog_io_util__Inst_3 = parse_tree__prog_io_util__InstPrime_31;
#line 705 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 705 "prog_io_util.m"
                      }
#line 706 "prog_io_util.m"
                    else
#line 707 "prog_io_util.m"
                      {
#line 707 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Args_34;
#line 707 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_44_44;

#line 707 "prog_io_util.m"
                        {
#line 707 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__Args1_28, &parse_tree__prog_io_util__Args_34);
                        }
#line 707 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 707 "prog_io_util.m"
                          {
#line 708 "prog_io_util.m"
                            {
#line 708 "prog_io_util.m"
                              parse_tree__prog_io_util__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 708 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_util__QualifiedName_27));
#line 708 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_44_44, 1) = ((MR_Box) (parse_tree__prog_io_util__Args_34));
#line 708 "prog_io_util.m"
                            }
#line 708 "prog_io_util.m"
                            {
#line 708 "prog_io_util.m"
                              MR_Word base;
#line 708 "prog_io_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 708 "prog_io_util.m"
                              *parse_tree__prog_io_util__Inst_3 = base;
#line 708 "prog_io_util.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 708 "prog_io_util.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_44_44));
#line 708 "prog_io_util.m"
                            }
#line 708 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 707 "prog_io_util.m"
                          }
#line 707 "prog_io_util.m"
                      }
#line 689 "prog_io_util.m"
                  }
#line 689 "prog_io_util.m"
              }
#line 647 "prog_io_util.m"
          }
#line 645 "prog_io_util.m"
      }
#line 641 "prog_io_util.m"
    else
#line 641 "prog_io_util.m"
      {
#line 641 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Term_2, (MR_Integer) 0)));
#line 641 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_9;
#line 642 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Term_2, (MR_Integer) 1)));

#line 643 "prog_io_util.m"
        {
#line 643 "prog_io_util.m"
          mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_util__V0_7, &parse_tree__prog_io_util__V_9);
        }
#line 644 "prog_io_util.m"
        {
#line 644 "prog_io_util.m"
          MR_Word base;
#line 644 "prog_io_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "prog_io_util.m"
          *parse_tree__prog_io_util__Inst_3 = base;
#line 644 "prog_io_util.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 644 "prog_io_util.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_9));
#line 644 "prog_io_util.m"
        }
#line 641 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 641 "prog_io_util.m"
      }
#line 641 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 641 "prog_io_util.m"
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
#line 636 "prog_io_util.m"
  {
#line 636 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 636 "prog_io_util.m"
    if ((parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 636 "prog_io_util.m"
      {
#line 636 "prog_io_util.m"
        *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 636 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 636 "prog_io_util.m"
      }
#line 636 "prog_io_util.m"
    else
#line 637 "prog_io_util.m"
      {
#line 637 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Term_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 637 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Terms_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 637 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Inst_8;
#line 637 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Insts_9;

#line 638 "prog_io_util.m"
        {
#line 638 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__Term_6, &parse_tree__prog_io_util__Inst_8);
        }
#line 637 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 637 "prog_io_util.m"
          {
#line 639 "prog_io_util.m"
            {
#line 639 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__Terms_7, &parse_tree__prog_io_util__Insts_9);
            }
#line 637 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 637 "prog_io_util.m"
              {
#line 637 "prog_io_util.m"
                {
#line 637 "prog_io_util.m"
                  MR_Word base;
#line 637 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 637 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 637 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Inst_8));
#line 637 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Insts_9));
#line 637 "prog_io_util.m"
                }
#line 637 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 637 "prog_io_util.m"
              }
#line 637 "prog_io_util.m"
          }
#line 637 "prog_io_util.m"
      }
#line 636 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 636 "prog_io_util.m"
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
#line 518 "prog_io_util.m"
  {
#line 518 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 518 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TermFunctor_7;
#line 518 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__TermArgs_8;
#line 519 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;
#line 523 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_19_19;

#line 519 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 519 "prog_io_util.m"
      {
#line 519 "prog_io_util.m"
        parse_tree__prog_io_util__TermFunctor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 519 "prog_io_util.m"
        parse_tree__prog_io_util__TermArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 519 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 523 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermFunctor_7)) == (MR_mktag((MR_Integer) 0)));
#line 523 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 523 "prog_io_util.m"
          {
#line 523 "prog_io_util.m"
            parse_tree__prog_io_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TermFunctor_7, (MR_Integer) 0)));
#line 523 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_19_19, (MR_String) ">>") == 0);
#line 523 "prog_io_util.m"
          }
#line 529 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 525 "prog_io_util.m"
          {
#line 525 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__InstTermA_10;
#line 525 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__InstTermB_11;
#line 525 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__InstA_12;
#line 525 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__InstB_13;
#line 525 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_20_20;
#line 525 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_21_21;

#line 525 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermArgs_8)) == (MR_mktag((MR_Integer) 1)));
#line 525 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 525 "prog_io_util.m"
              {
#line 525 "prog_io_util.m"
                parse_tree__prog_io_util__InstTermA_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 0)));
#line 525 "prog_io_util.m"
                parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 1)));
#line 525 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 525 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 525 "prog_io_util.m"
                  {
#line 525 "prog_io_util.m"
                    parse_tree__prog_io_util__InstTermB_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, (MR_Integer) 0)));
#line 525 "prog_io_util.m"
                    parse_tree__prog_io_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, (MR_Integer) 1)));
#line 525 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 525 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 525 "prog_io_util.m"
                      {
#line 526 "prog_io_util.m"
                        {
#line 526 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__InstTermA_10, &parse_tree__prog_io_util__InstA_12);
                        }
#line 525 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 525 "prog_io_util.m"
                          {
#line 527 "prog_io_util.m"
                            {
#line 527 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__InstTermB_11, &parse_tree__prog_io_util__InstB_13);
                            }
#line 525 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 525 "prog_io_util.m"
                              {
#line 528 "prog_io_util.m"
                                {
#line 528 "prog_io_util.m"
                                  MR_Word base;
#line 528 "prog_io_util.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 528 "prog_io_util.m"
                                  *parse_tree__prog_io_util__Mode_6 = base;
#line 528 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__InstA_12));
#line 528 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__InstB_13));
#line 528 "prog_io_util.m"
                                }
#line 528 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 525 "prog_io_util.m"
                              }
#line 525 "prog_io_util.m"
                          }
#line 525 "prog_io_util.m"
                      }
#line 525 "prog_io_util.m"
                  }
#line 525 "prog_io_util.m"
              }
#line 525 "prog_io_util.m"
          }
#line 529 "prog_io_util.m"
        else
#line 535 "prog_io_util.m"
          {
#line 530 "prog_io_util.m"
            MR_String parse_tree__prog_io_util__V_22_22;

#line 530 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermFunctor_7)) == (MR_mktag((MR_Integer) 0)));
#line 530 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 530 "prog_io_util.m"
              {
#line 530 "prog_io_util.m"
                parse_tree__prog_io_util__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TermFunctor_7, (MR_Integer) 0)));
#line 530 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_22_22, (MR_String) "is") == 0);
#line 530 "prog_io_util.m"
              }
#line 535 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 532 "prog_io_util.m"
              {
#line 532 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__BeforeIsTerm_14;
#line 532 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__DetTerm_15;
#line 532 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_23_23;
#line 532 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_24_24;

#line 532 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__TermArgs_8)) == (MR_mktag((MR_Integer) 1)));
#line 532 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 532 "prog_io_util.m"
                  {
#line 532 "prog_io_util.m"
                    parse_tree__prog_io_util__BeforeIsTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 0)));
#line 532 "prog_io_util.m"
                    parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__TermArgs_8, (MR_Integer) 1)));
#line 532 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 532 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 532 "prog_io_util.m"
                      {
#line 532 "prog_io_util.m"
                        parse_tree__prog_io_util__DetTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_23_23, (MR_Integer) 0)));
#line 532 "prog_io_util.m"
                        parse_tree__prog_io_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_23_23, (MR_Integer) 1)));
#line 532 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 532 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 533 "prog_io_util.m"
                          {
#line 533 "prog_io_util.m"
                            return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_higher_order_mode_4_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__BeforeIsTerm_14, parse_tree__prog_io_util__DetTerm_15, parse_tree__prog_io_util__Mode_6);
                          }
#line 532 "prog_io_util.m"
                      }
#line 532 "prog_io_util.m"
                  }
#line 532 "prog_io_util.m"
              }
#line 535 "prog_io_util.m"
            else
#line 539 "prog_io_util.m"
              {
#line 539 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Name_16;
#line 539 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Args_17;
#line 539 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__ConvertedArgs_18;

#line 538 "prog_io_util.m"
                {
#line 538 "prog_io_util.m"
                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_from_f_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__TermFunctor_7, parse_tree__prog_io_util__TermArgs_8, &parse_tree__prog_io_util__Name_16, &parse_tree__prog_io_util__Args_17);
                }
#line 539 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 539 "prog_io_util.m"
                  {
#line 540 "prog_io_util.m"
                    {
#line 540 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_inst_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_4, parse_tree__prog_io_util__Args_17, &parse_tree__prog_io_util__ConvertedArgs_18);
                    }
#line 539 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 539 "prog_io_util.m"
                      {
#line 541 "prog_io_util.m"
                        {
#line 541 "prog_io_util.m"
                          MR_Word base;
#line 541 "prog_io_util.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "prog_io_util.m"
                          *parse_tree__prog_io_util__Mode_6 = base;
#line 541 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Name_16));
#line 541 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__ConvertedArgs_18));
#line 541 "prog_io_util.m"
                        }
#line 541 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 539 "prog_io_util.m"
                      }
#line 539 "prog_io_util.m"
                  }
#line 539 "prog_io_util.m"
              }
#line 535 "prog_io_util.m"
          }
#line 519 "prog_io_util.m"
      }
#line 518 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 518 "prog_io_util.m"
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
#line 513 "prog_io_util.m"
  {
#line 513 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 513 "prog_io_util.m"
    if ((parse_tree__prog_io_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 513 "prog_io_util.m"
      {
#line 513 "prog_io_util.m"
        *parse_tree__prog_io_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 513 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 513 "prog_io_util.m"
      }
#line 513 "prog_io_util.m"
    else
#line 514 "prog_io_util.m"
      {
#line 514 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__H0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 0)));
#line 514 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__T0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__2_2, (MR_Integer) 1)));
#line 514 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__H_8;
#line 514 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__T_9;

#line 515 "prog_io_util.m"
        {
#line 515 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__H0_6, &parse_tree__prog_io_util__H_8);
        }
#line 514 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 514 "prog_io_util.m"
          {
#line 516 "prog_io_util.m"
            {
#line 516 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0(parse_tree__prog_io_util__AllowConstrainedInstVar_1, parse_tree__prog_io_util__T0_7, &parse_tree__prog_io_util__T_9);
            }
#line 514 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 514 "prog_io_util.m"
              {
#line 514 "prog_io_util.m"
                {
#line 514 "prog_io_util.m"
                  MR_Word base;
#line 514 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 514 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__3_3 = base;
#line 514 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__H_8));
#line 514 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__T_9));
#line 514 "prog_io_util.m"
                }
#line 514 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 514 "prog_io_util.m"
              }
#line 514 "prog_io_util.m"
          }
#line 514 "prog_io_util.m"
      }
#line 513 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 513 "prog_io_util.m"
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
#line 440 "prog_io_util.m"
  {
#line 440 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term0_4)) == (MR_mktag((MR_Integer) 0)));
#line 440 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Term1_8;
#line 440 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Purity0_10;
#line 435 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__PurityName_7;
#line 435 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;
#line 435 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_12_12;
#line 435 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 435 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 435 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 435 "prog_io_util.m"
      {
#line 435 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_4, (MR_Integer) 0)));
#line 435 "prog_io_util.m"
        parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_4, (MR_Integer) 1)));
#line 435 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term0_4, (MR_Integer) 2)));
#line 435 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_11_11)) == (MR_mktag((MR_Integer) 0)));
#line 435 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 435 "prog_io_util.m"
          {
#line 435 "prog_io_util.m"
            parse_tree__prog_io_util__PurityName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_11_11, (MR_Integer) 0)));
#line 435 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 435 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 435 "prog_io_util.m"
              {
#line 435 "prog_io_util.m"
                parse_tree__prog_io_util__Term1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_12_12, (MR_Integer) 0)));
#line 435 "prog_io_util.m"
                parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_12_12, (MR_Integer) 1)));
#line 435 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 435 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 436 "prog_io_util.m"
                  {
#line 436 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = parse_tree__prog_out__purity_name_2_p_1(&parse_tree__prog_io_util__Purity0_10, parse_tree__prog_io_util__PurityName_7);
                  }
#line 435 "prog_io_util.m"
              }
#line 435 "prog_io_util.m"
          }
#line 435 "prog_io_util.m"
      }
#line 440 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 438 "prog_io_util.m"
      {
#line 438 "prog_io_util.m"
        *parse_tree__prog_io_util__Purity_5 = parse_tree__prog_io_util__Purity0_10;
#line 439 "prog_io_util.m"
        *parse_tree__prog_io_util__Term_6 = parse_tree__prog_io_util__Term1_8;
#line 438 "prog_io_util.m"
      }
#line 440 "prog_io_util.m"
    else
#line 441 "prog_io_util.m"
      {
#line 441 "prog_io_util.m"
        *parse_tree__prog_io_util__Purity_5 = (MR_Integer) 0;
#line 442 "prog_io_util.m"
        *parse_tree__prog_io_util__Term_6 = parse_tree__prog_io_util__Term0_4;
#line 441 "prog_io_util.m"
      }
#line 440 "prog_io_util.m"
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
#line 445 "prog_io_util.m"
  {
#line 445 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 445 "prog_io_util.m"
#line 445 "prog_io_util.m"
    switch (MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) {
#line 445 "prog_io_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 445 "prog_io_util.m"
      case (MR_Integer) 0:
#line 445 "prog_io_util.m"
        {
#line 445 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__TVar_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 445 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__Var_5;
#line 445 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_6_6;
#line 445 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));

#line 445 "prog_io_util.m"
          {
#line 445 "prog_io_util.m"
            parse_tree__prog_io_util__V_6_6 = mercury__term__context_init_0_f_0();
          }
#line 446 "prog_io_util.m"
          {
#line 446 "prog_io_util.m"
            parse_tree__prog_io_util__Var_5 = mercury__term__coerce_var_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__TVar_3);
          }
#line 445 "prog_io_util.m"
          {
#line 445 "prog_io_util.m"
            MR_Word base;
#line 445 "prog_io_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 445 "prog_io_util.m"
            *parse_tree__prog_io_util__HeadVar__2_2 = base;
#line 445 "prog_io_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Var_5));
#line 445 "prog_io_util.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_6_6));
#line 445 "prog_io_util.m"
          }
#line 445 "prog_io_util.m"
        }
#line 445 "prog_io_util.m"
        break;
#line 445 "prog_io_util.m"
      case (MR_Integer) 1:
#line 447 "prog_io_util.m"
        {
#line 447 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__SymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 447 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 447 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__ArgTerms_11;
#line 447 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 2)));

#line 448 "prog_io_util.m"
          {
#line 448 "prog_io_util.m"
            parse_tree__prog_io_util__unparse_type_list_2_p_0(parse_tree__prog_io_util__Args_8, &parse_tree__prog_io_util__ArgTerms_11);
          }
#line 449 "prog_io_util.m"
          {
#line 449 "prog_io_util.m"
            parse_tree__prog_io_util__unparse_qualified_term_3_p_0(parse_tree__prog_io_util__SymName_7, parse_tree__prog_io_util__ArgTerms_11, parse_tree__prog_io_util__HeadVar__2_2);
#line 449 "prog_io_util.m"
            return;
          }
#line 447 "prog_io_util.m"
        }
#line 445 "prog_io_util.m"
        break;
#line 445 "prog_io_util.m"
      case (MR_Integer) 2:
#line 450 "prog_io_util.m"
        {
#line 450 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__BuiltinType_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 450 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__Context_14;
#line 450 "prog_io_util.m"
          MR_String parse_tree__prog_io_util__Name_15;
#line 450 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_16_16;

#line 451 "prog_io_util.m"
          {
#line 451 "prog_io_util.m"
            parse_tree__prog_io_util__Context_14 = mercury__term__context_init_0_f_0();
          }
#line 452 "prog_io_util.m"
          {
#line 452 "prog_io_util.m"
            parse_tree__prog_out__builtin_type_to_string_2_p_0(parse_tree__prog_io_util__BuiltinType_12, &parse_tree__prog_io_util__Name_15);
          }
#line 453 "prog_io_util.m"
          {
#line 453 "prog_io_util.m"
            parse_tree__prog_io_util__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 453 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_16_16, 0) = ((MR_Box) (parse_tree__prog_io_util__Name_15));
#line 453 "prog_io_util.m"
          }
#line 453 "prog_io_util.m"
          {
#line 453 "prog_io_util.m"
            MR_Word base;
#line 453 "prog_io_util.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 453 "prog_io_util.m"
            *parse_tree__prog_io_util__HeadVar__2_2 = base;
#line 453 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_16_16));
#line 453 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 453 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_14));
#line 453 "prog_io_util.m"
          }
#line 450 "prog_io_util.m"
        }
#line 445 "prog_io_util.m"
        break;
#line 445 "prog_io_util.m"
      case (MR_Integer) 3:
#line 445 "prog_io_util.m"
#line 445 "prog_io_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)))) {
#line 445 "prog_io_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 445 "prog_io_util.m"
          case (MR_Integer) 0:
#line 469 "prog_io_util.m"
            {
#line 469 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Args_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 469 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Context_43;
#line 469 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__ArgTerms_44;
#line 469 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 2)));

#line 470 "prog_io_util.m"
              {
#line 470 "prog_io_util.m"
                parse_tree__prog_io_util__Context_43 = mercury__term__context_init_0_f_0();
              }
#line 471 "prog_io_util.m"
              {
#line 471 "prog_io_util.m"
                parse_tree__prog_io_util__unparse_type_list_2_p_0(parse_tree__prog_io_util__Args_40, &parse_tree__prog_io_util__ArgTerms_44);
              }
#line 472 "prog_io_util.m"
              {
#line 472 "prog_io_util.m"
                MR_Word base;
#line 472 "prog_io_util.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 472 "prog_io_util.m"
                *parse_tree__prog_io_util__HeadVar__2_2 = base;
#line 472 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[7]));
#line 472 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTerms_44));
#line 472 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_43));
#line 472 "prog_io_util.m"
              }
#line 469 "prog_io_util.m"
            }
#line 445 "prog_io_util.m"
            break;
#line 445 "prog_io_util.m"
          case (MR_Integer) 1:
#line 454 "prog_io_util.m"
            {
#line 454 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Args_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 454 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__MaybeRet_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 2)));
#line 454 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Purity_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 3)));
#line 454 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Context_23;
#line 454 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__ArgTerms_24;
#line 454 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Term2_29;

#line 455 "prog_io_util.m"
              {
#line 455 "prog_io_util.m"
                parse_tree__prog_io_util__Context_23 = mercury__term__context_init_0_f_0();
              }
#line 456 "prog_io_util.m"
              {
#line 456 "prog_io_util.m"
                parse_tree__prog_io_util__unparse_type_list_2_p_0(parse_tree__prog_io_util__Args_18, &parse_tree__prog_io_util__ArgTerms_24);
              }
#line 463 "prog_io_util.m"
              if ((parse_tree__prog_io_util__MaybeRet_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 464 "prog_io_util.m"
                {
#line 465 "prog_io_util.m"
                  {
#line 465 "prog_io_util.m"
                    parse_tree__prog_io_util__Term2_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 465 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_29, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[2]));
#line 465 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_29, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTerms_24));
#line 465 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_29, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_23));
#line 465 "prog_io_util.m"
                  }
#line 464 "prog_io_util.m"
                }
#line 463 "prog_io_util.m"
              else
#line 458 "prog_io_util.m"
                {
#line 458 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__Ret_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeRet_19, (MR_Integer) 0)));
#line 458 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__Term1_27;
#line 458 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__RetTerm_28;
#line 458 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_36_36;
#line 458 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__V_37_37;

#line 459 "prog_io_util.m"
                  {
#line 459 "prog_io_util.m"
                    parse_tree__prog_io_util__Term1_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 459 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_27, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[3]));
#line 459 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_27, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTerms_24));
#line 459 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term1_27, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_23));
#line 459 "prog_io_util.m"
                  }
#line 461 "prog_io_util.m"
                  {
#line 461 "prog_io_util.m"
                    parse_tree__prog_io_util__unparse_type_2_p_0(parse_tree__prog_io_util__Ret_25, &parse_tree__prog_io_util__RetTerm_28);
                  }
#line 462 "prog_io_util.m"
                  {
#line 462 "prog_io_util.m"
                    parse_tree__prog_io_util__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "prog_io_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_util__RetTerm_28));
#line 462 "prog_io_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 462 "prog_io_util.m"
                  }
#line 462 "prog_io_util.m"
                  {
#line 462 "prog_io_util.m"
                    parse_tree__prog_io_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "prog_io_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_util__Term1_27));
#line 462 "prog_io_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_36_36, 1) = ((MR_Box) (parse_tree__prog_io_util__V_37_37));
#line 462 "prog_io_util.m"
                  }
#line 462 "prog_io_util.m"
                  {
#line 462 "prog_io_util.m"
                    parse_tree__prog_io_util__Term2_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 462 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_29, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[4]));
#line 462 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_29, 1) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 462 "prog_io_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term2_29, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_23));
#line 462 "prog_io_util.m"
                  }
#line 458 "prog_io_util.m"
                }
#line 505 "prog_io_util.m"
#line 505 "prog_io_util.m"
              switch (parse_tree__prog_io_util__Purity_20) {
#line 505 "prog_io_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 505 "prog_io_util.m"
                case (MR_Integer) 2:
#line 509 "prog_io_util.m"
                  {
#line 509 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Context_80;
#line 509 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_83_83;

#line 510 "prog_io_util.m"
                    {
#line 510 "prog_io_util.m"
                      parse_tree__prog_io_util__Context_80 = mercury__term__context_init_0_f_0();
                    }
#line 511 "prog_io_util.m"
                    {
#line 511 "prog_io_util.m"
                      parse_tree__prog_io_util__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_util__Term2_29));
#line 511 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 511 "prog_io_util.m"
                    }
#line 511 "prog_io_util.m"
                    {
#line 511 "prog_io_util.m"
                      MR_Word base;
#line 511 "prog_io_util.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 511 "prog_io_util.m"
                      *parse_tree__prog_io_util__HeadVar__2_2 = base;
#line 511 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[5]));
#line 511 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_83_83));
#line 511 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_80));
#line 511 "prog_io_util.m"
                    }
#line 509 "prog_io_util.m"
                  }
#line 505 "prog_io_util.m"
                  break;
#line 505 "prog_io_util.m"
                case (MR_Integer) 0:
#line 505 "prog_io_util.m"
                  *parse_tree__prog_io_util__HeadVar__2_2 = parse_tree__prog_io_util__Term2_29;
#line 505 "prog_io_util.m"
                  break;
#line 505 "prog_io_util.m"
                case (MR_Integer) 1:
#line 506 "prog_io_util.m"
                  {
#line 506 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Context_73;
#line 506 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_76_76;

#line 507 "prog_io_util.m"
                    {
#line 507 "prog_io_util.m"
                      parse_tree__prog_io_util__Context_73 = mercury__term__context_init_0_f_0();
                    }
#line 508 "prog_io_util.m"
                    {
#line 508 "prog_io_util.m"
                      parse_tree__prog_io_util__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 508 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_util__Term2_29));
#line 508 "prog_io_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[6]));
#line 508 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_76_76));
#line 508 "prog_io_util.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_73));
#line 508 "prog_io_util.m"
                    }
#line 506 "prog_io_util.m"
                  }
#line 505 "prog_io_util.m"
                  break;
#line 505 "prog_io_util.m"
              }
#line 454 "prog_io_util.m"
            }
#line 445 "prog_io_util.m"
            break;
#line 445 "prog_io_util.m"
          case (MR_Integer) 2:
#line 473 "prog_io_util.m"
            {
#line 473 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__TVar_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 473 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Args_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 2)));
#line 473 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Context_51;
#line 473 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Var_52;
#line 473 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__ArgTerms_53;
#line 473 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_56_56;
#line 473 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_57_57;
#line 473 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 3)));

#line 474 "prog_io_util.m"
              {
#line 474 "prog_io_util.m"
                parse_tree__prog_io_util__Context_51 = mercury__term__context_init_0_f_0();
              }
#line 475 "prog_io_util.m"
              {
#line 475 "prog_io_util.m"
                parse_tree__prog_io_util__Var_52 = mercury__term__coerce_var_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__TVar_47);
              }
#line 476 "prog_io_util.m"
              {
#line 476 "prog_io_util.m"
                parse_tree__prog_io_util__unparse_type_list_2_p_0(parse_tree__prog_io_util__Args_48, &parse_tree__prog_io_util__ArgTerms_53);
              }
#line 478 "prog_io_util.m"
              {
#line 478 "prog_io_util.m"
                parse_tree__prog_io_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 478 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_util__Var_52));
#line 478 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io_util__Context_51));
#line 478 "prog_io_util.m"
              }
#line 478 "prog_io_util.m"
              {
#line 478 "prog_io_util.m"
                parse_tree__prog_io_util__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 478 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_util__V_57_57));
#line 478 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTerms_53));
#line 478 "prog_io_util.m"
              }
#line 477 "prog_io_util.m"
              {
#line 477 "prog_io_util.m"
                MR_Word base;
#line 477 "prog_io_util.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 477 "prog_io_util.m"
                *parse_tree__prog_io_util__HeadVar__2_2 = base;
#line 477 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_util_scalar_common_3[1]));
#line 477 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_56_56));
#line 477 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_util__Context_51));
#line 477 "prog_io_util.m"
              }
#line 473 "prog_io_util.m"
            }
#line 445 "prog_io_util.m"
            break;
#line 445 "prog_io_util.m"
          case (MR_Integer) 3:
#line 479 "prog_io_util.m"
            {
#line 480 "prog_io_util.m"
              {
#line 480 "prog_io_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_io_util", (MR_String) "predicate \140parse_tree.prog_io_util.unparse_type\'/2", (MR_String) "kind annotation");
#line 480 "prog_io_util.m"
                return;
              }
#line 479 "prog_io_util.m"
            }
#line 445 "prog_io_util.m"
            break;
#line 445 "prog_io_util.m"
        }
#line 445 "prog_io_util.m"
        break;
#line 445 "prog_io_util.m"
    }
#line 445 "prog_io_util.m"
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
#line 390 "prog_io_util.m"
  {
#line 390 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 391 "prog_io_util.m"
    {
#line 391 "prog_io_util.m"
      parse_tree__prog_io_util__parse_types_2_5_p_0(parse_tree__prog_io_util__Terms_5, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_util__Result_8);
#line 391 "prog_io_util.m"
      return;
    }
#line 390 "prog_io_util.m"
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
#line 383 "prog_io_util.m"
  {
#line 383 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 383 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__VarSet_5;
#line 383 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_7_7;

#line 386 "prog_io_util.m"
    {
#line 386 "prog_io_util.m"
      parse_tree__prog_io_util__VarSet_5 = mercury__varset__init_0_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0);
    }
#line 388 "prog_io_util.m"
    {
#line 388 "prog_io_util.m"
      parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_util__Term_3, parse_tree__prog_io_util__VarSet_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_7_7);
    }
#line 388 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_7_7)) == (MR_mktag((MR_Integer) 1)));
#line 388 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 388 "prog_io_util.m"
      *parse_tree__prog_io_util__Types_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_7_7, (MR_Integer) 0)));
#line 383 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 383 "prog_io_util.m"
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
#line 333 "prog_io_util.m"
  {
#line 333 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 1)));
#line 333 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Var0_9;
#line 329 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_10_10;

#line 329 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 329 "prog_io_util.m"
      {
#line 329 "prog_io_util.m"
        parse_tree__prog_io_util__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 329 "prog_io_util.m"
        parse_tree__prog_io_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 331 "prog_io_util.m"
        {
#line 331 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__Var_11;
#line 331 "prog_io_util.m"
          MR_Word parse_tree__prog_io_util__V_30_30;

#line 331 "prog_io_util.m"
          {
#line 331 "prog_io_util.m"
            mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_util__Var0_9, &parse_tree__prog_io_util__Var_11);
          }
#line 332 "prog_io_util.m"
          {
#line 332 "prog_io_util.m"
            parse_tree__prog_io_util__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 332 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_util__Var_11));
#line 332 "prog_io_util.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 332 "prog_io_util.m"
          }
#line 332 "prog_io_util.m"
          {
#line 332 "prog_io_util.m"
            MR_Word base;
#line 332 "prog_io_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 332 "prog_io_util.m"
            *parse_tree__prog_io_util__Result_8 = base;
#line 332 "prog_io_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_30_30));
#line 332 "prog_io_util.m"
          }
#line 331 "prog_io_util.m"
        }
#line 329 "prog_io_util.m"
      }
#line 329 "prog_io_util.m"
    else
#line 337 "prog_io_util.m"
      {
#line 337 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__BuiltinType_12;
#line 410 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__Name_89;
#line 410 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_91_91;
#line 410 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_92_92;
#line 411 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_90_90;

#line 411 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 411 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 411 "prog_io_util.m"
          {
#line 411 "prog_io_util.m"
            parse_tree__prog_io_util__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 411 "prog_io_util.m"
            parse_tree__prog_io_util__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 411 "prog_io_util.m"
            parse_tree__prog_io_util__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 411 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_92_92 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 410 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 410 "prog_io_util.m"
              {
#line 411 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_91_91)) == (MR_mktag((MR_Integer) 0)));
#line 411 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 411 "prog_io_util.m"
                  {
#line 411 "prog_io_util.m"
                    parse_tree__prog_io_util__Name_89 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_91_91, (MR_Integer) 0)));
#line 412 "prog_io_util.m"
                    {
#line 412 "prog_io_util.m"
                      parse_tree__prog_io_util__succeeded = parse_tree__prog_out__builtin_type_to_string_2_p_1(&parse_tree__prog_io_util__BuiltinType_12, parse_tree__prog_io_util__Name_89);
                    }
#line 411 "prog_io_util.m"
                  }
#line 410 "prog_io_util.m"
              }
#line 411 "prog_io_util.m"
          }
#line 337 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 336 "prog_io_util.m"
          {
#line 336 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_32_32;

#line 336 "prog_io_util.m"
            {
#line 336 "prog_io_util.m"
              parse_tree__prog_io_util__V_32_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 336 "prog_io_util.m"
              MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io_util__BuiltinType_12));
#line 336 "prog_io_util.m"
            }
#line 336 "prog_io_util.m"
            {
#line 336 "prog_io_util.m"
              MR_Word base;
#line 336 "prog_io_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 336 "prog_io_util.m"
              *parse_tree__prog_io_util__Result_8 = base;
#line 336 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_32_32));
#line 336 "prog_io_util.m"
            }
#line 336 "prog_io_util.m"
          }
#line 337 "prog_io_util.m"
        else
#line 341 "prog_io_util.m"
          {
#line 341 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__HOArgs_13;
#line 341 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__MaybeRet_14;
#line 341 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Purity_15;

#line 338 "prog_io_util.m"
            {
#line 338 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_higher_order_type_5_p_0(parse_tree__prog_io_util__Term_5, &parse_tree__prog_io_util__HOArgs_13, &parse_tree__prog_io_util__MaybeRet_14, &parse_tree__prog_io_util__Purity_15);
            }
#line 341 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 340 "prog_io_util.m"
              {
#line 340 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_33_33;

#line 340 "prog_io_util.m"
                {
#line 340 "prog_io_util.m"
                  parse_tree__prog_io_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 340 "prog_io_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 340 "prog_io_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io_util__HOArgs_13));
#line 340 "prog_io_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_33_33, 2) = ((MR_Box) (parse_tree__prog_io_util__MaybeRet_14));
#line 340 "prog_io_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_33_33, 3) = ((MR_Box) (parse_tree__prog_io_util__Purity_15));
#line 340 "prog_io_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_33_33, 4) = NULL;
#line 340 "prog_io_util.m"
                }
#line 340 "prog_io_util.m"
                {
#line 340 "prog_io_util.m"
                  MR_Word base;
#line 340 "prog_io_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 340 "prog_io_util.m"
                  *parse_tree__prog_io_util__Result_8 = base;
#line 340 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_33_33));
#line 340 "prog_io_util.m"
                }
#line 340 "prog_io_util.m"
              }
#line 341 "prog_io_util.m"
            else
#line 352 "prog_io_util.m"
              {
#line 352 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Args_17;
#line 342 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_34_34;
#line 342 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__V_35_35;
#line 342 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_18_18;

#line 342 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 342 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 342 "prog_io_util.m"
                  {
#line 342 "prog_io_util.m"
                    parse_tree__prog_io_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 342 "prog_io_util.m"
                    parse_tree__prog_io_util__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 342 "prog_io_util.m"
                    parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 342 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_34_34)) == (MR_mktag((MR_Integer) 0)));
#line 342 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 342 "prog_io_util.m"
                      {
#line 342 "prog_io_util.m"
                        parse_tree__prog_io_util__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_34_34, (MR_Integer) 0)));
#line 342 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_35_35, (MR_String) "{}") == 0);
#line 342 "prog_io_util.m"
                      }
#line 342 "prog_io_util.m"
                  }
#line 352 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 344 "prog_io_util.m"
                  {
#line 344 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__ArgsResult_19;

#line 344 "prog_io_util.m"
                    {
#line 344 "prog_io_util.m"
                      parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_util__Args_17, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__ArgsResult_19);
                    }
#line 348 "prog_io_util.m"
                    if (((MR_tag((MR_Word) parse_tree__prog_io_util__ArgsResult_19)) == (MR_mktag((MR_Integer) 0))))
#line 350 "prog_io_util.m"
                      *parse_tree__prog_io_util__Result_8 = (MR_Word) parse_tree__prog_io_util__ArgsResult_19;
#line 348 "prog_io_util.m"
                    else
#line 346 "prog_io_util.m"
                      {
#line 346 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__ArgTypes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ArgsResult_19, (MR_Integer) 0)));
#line 346 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_36_36;

#line 347 "prog_io_util.m"
                        {
#line 347 "prog_io_util.m"
                          parse_tree__prog_io_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 347 "prog_io_util.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 347 "prog_io_util.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_36_36, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTypes_20));
#line 347 "prog_io_util.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_36_36, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_36_36));
#line 347 "prog_io_util.m"
                        }
#line 346 "prog_io_util.m"
                      }
#line 344 "prog_io_util.m"
                  }
#line 352 "prog_io_util.m"
                else
#line 363 "prog_io_util.m"
                  {
#line 363 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__Context_23;
#line 355 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_38_38;
#line 355 "prog_io_util.m"
                    MR_String parse_tree__prog_io_util__V_39_39;
#line 355 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__V_22_22;

#line 355 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 355 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 355 "prog_io_util.m"
                      {
#line 355 "prog_io_util.m"
                        parse_tree__prog_io_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 355 "prog_io_util.m"
                        parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 355 "prog_io_util.m"
                        parse_tree__prog_io_util__Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 355 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_38_38)) == (MR_mktag((MR_Integer) 0)));
#line 355 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 355 "prog_io_util.m"
                          {
#line 355 "prog_io_util.m"
                            parse_tree__prog_io_util__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_38_38, (MR_Integer) 0)));
#line 355 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_39_39, (MR_String) "") == 0);
#line 355 "prog_io_util.m"
                          }
#line 355 "prog_io_util.m"
                      }
#line 363 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 357 "prog_io_util.m"
                      {
#line 357 "prog_io_util.m"
                        MR_String parse_tree__prog_io_util__TermStr_24;
#line 357 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Pieces_25;
#line 357 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__Spec_26;
#line 357 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_40_40;
#line 357 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_42_42;
#line 357 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_45_45;
#line 357 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_46_46;
#line 357 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_55_55;
#line 357 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_56_56;
#line 357 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_57_57;
#line 357 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_58_58;
#line 357 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_61_61;

#line 357 "prog_io_util.m"
                        {
#line 357 "prog_io_util.m"
                          parse_tree__prog_io_util__TermStr_24 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__Term_5);
                        }
#line 359 "prog_io_util.m"
                        {
#line 359 "prog_io_util.m"
                          parse_tree__prog_io_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 359 "prog_io_util.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 359 "prog_io_util.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_46_46, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_24));
#line 359 "prog_io_util.m"
                        }
#line 359 "prog_io_util.m"
                        {
#line 359 "prog_io_util.m"
                          parse_tree__prog_io_util__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 359 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_util__V_46_46));
#line 359 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[11])));
#line 359 "prog_io_util.m"
                        }
#line 359 "prog_io_util.m"
                        {
#line 359 "prog_io_util.m"
                          parse_tree__prog_io_util__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 359 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_42_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[16])));
#line 359 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_42_42, 1) = ((MR_Box) (parse_tree__prog_io_util__V_45_45));
#line 359 "prog_io_util.m"
                        }
#line 358 "prog_io_util.m"
                        {
#line 358 "prog_io_util.m"
                          parse_tree__prog_io_util__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 358 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_40_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io_util__V_42_42));
#line 358 "prog_io_util.m"
                        }
#line 358 "prog_io_util.m"
                        {
#line 358 "prog_io_util.m"
                          parse_tree__prog_io_util__Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__V_40_40);
                        }
#line 361 "prog_io_util.m"
                        {
#line 361 "prog_io_util.m"
                          parse_tree__prog_io_util__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 361 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_58_58, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_25));
#line 361 "prog_io_util.m"
                        }
#line 361 "prog_io_util.m"
                        {
#line 361 "prog_io_util.m"
                          parse_tree__prog_io_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 361 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_util__V_58_58));
#line 361 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 361 "prog_io_util.m"
                        }
#line 361 "prog_io_util.m"
                        {
#line 361 "prog_io_util.m"
                          parse_tree__prog_io_util__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 361 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_util__Context_23));
#line 361 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io_util__V_57_57));
#line 361 "prog_io_util.m"
                        }
#line 361 "prog_io_util.m"
                        {
#line 361 "prog_io_util.m"
                          parse_tree__prog_io_util__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 361 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_util__V_56_56));
#line 361 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 361 "prog_io_util.m"
                        }
#line 360 "prog_io_util.m"
                        {
#line 360 "prog_io_util.m"
                          parse_tree__prog_io_util__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 360 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 360 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 360 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_26, 2) = ((MR_Box) (parse_tree__prog_io_util__V_55_55));
#line 360 "prog_io_util.m"
                        }
#line 362 "prog_io_util.m"
                        {
#line 362 "prog_io_util.m"
                          parse_tree__prog_io_util__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 362 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_61_61, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_26));
#line 362 "prog_io_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 362 "prog_io_util.m"
                        }
#line 362 "prog_io_util.m"
                        {
#line 362 "prog_io_util.m"
                          MR_Word base;
#line 362 "prog_io_util.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 362 "prog_io_util.m"
                          *parse_tree__prog_io_util__Result_8 = base;
#line 362 "prog_io_util.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_61_61));
#line 362 "prog_io_util.m"
                        }
#line 357 "prog_io_util.m"
                      }
#line 363 "prog_io_util.m"
                    else
#line 366 "prog_io_util.m"
                      {
#line 366 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__NameResult_27;

#line 366 "prog_io_util.m"
                        {
#line 366 "prog_io_util.m"
                          parse_tree__prog_io_sym_name__parse_sym_name_and_args_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__Term_5, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__NameResult_27);
                        }
#line 377 "prog_io_util.m"
                        if (((MR_tag((MR_Word) parse_tree__prog_io_util__NameResult_27)) == (MR_mktag((MR_Integer) 0))))
#line 378 "prog_io_util.m"
                          {
#line 378 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Specs_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__NameResult_27, (MR_Integer) 0)));

#line 379 "prog_io_util.m"
                            {
#line 379 "prog_io_util.m"
                              MR_Word base;
#line 379 "prog_io_util.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 379 "prog_io_util.m"
                              *parse_tree__prog_io_util__Result_8 = base;
#line 379 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Specs_72));
#line 379 "prog_io_util.m"
                            }
#line 378 "prog_io_util.m"
                          }
#line 377 "prog_io_util.m"
                        else
#line 368 "prog_io_util.m"
                          {
#line 368 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__SymName_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__NameResult_27, (MR_Integer) 0)));
#line 368 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__ArgTerms_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__NameResult_27, (MR_Integer) 1)));
#line 368 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__ArgsResult_69;

#line 369 "prog_io_util.m"
                            {
#line 369 "prog_io_util.m"
                              parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_util__ArgTerms_29, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__ArgsResult_69);
                            }
#line 373 "prog_io_util.m"
                            if (((MR_tag((MR_Word) parse_tree__prog_io_util__ArgsResult_69)) == (MR_mktag((MR_Integer) 0))))
#line 375 "prog_io_util.m"
                              *parse_tree__prog_io_util__Result_8 = (MR_Word) parse_tree__prog_io_util__ArgsResult_69;
#line 373 "prog_io_util.m"
                            else
#line 371 "prog_io_util.m"
                              {
#line 371 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__V_63_63;
#line 371 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__ArgTypes_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ArgsResult_69, (MR_Integer) 0)));

#line 372 "prog_io_util.m"
                                {
#line 372 "prog_io_util.m"
                                  parse_tree__prog_io_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 372 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_util__SymName_28));
#line 372 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io_util__ArgTypes_65));
#line 372 "prog_io_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_63_63, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_63_63));
#line 372 "prog_io_util.m"
                                }
#line 371 "prog_io_util.m"
                              }
#line 368 "prog_io_util.m"
                          }
#line 366 "prog_io_util.m"
                      }
#line 363 "prog_io_util.m"
                  }
#line 352 "prog_io_util.m"
              }
#line 341 "prog_io_util.m"
          }
#line 337 "prog_io_util.m"
      }
#line 333 "prog_io_util.m"
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
#line 317 "prog_io_util.m"
  {
#line 317 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;
#line 317 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__VarSet_5;
#line 317 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_7_7;

#line 320 "prog_io_util.m"
    {
#line 320 "prog_io_util.m"
      parse_tree__prog_io_util__VarSet_5 = mercury__varset__init_0_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0);
    }
#line 322 "prog_io_util.m"
    {
#line 322 "prog_io_util.m"
      parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_util__Term_3, parse_tree__prog_io_util__VarSet_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_util__V_7_7);
    }
#line 322 "prog_io_util.m"
    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_7_7)) == (MR_mktag((MR_Integer) 1)));
#line 322 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 322 "prog_io_util.m"
      *parse_tree__prog_io_util__Type_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_7_7, (MR_Integer) 0)));
#line 317 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 317 "prog_io_util.m"
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
#line 288 "prog_io_util.m"
  {
#line 288 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredAndArgsTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 288 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FunctorTerm_14;
#line 288 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__MaybeFuncResult_15;
#line 288 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__GenericVarSet_16;
#line 288 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Result_18;
#line 295 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FuncAndArgsTerm_11;
#line 295 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FuncResultTerm_12;
#line 290 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_22_22;
#line 290 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_23_23;
#line 290 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_24_24;
#line 290 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_25_25;
#line 290 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_26_26;
#line 290 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;

#line 290 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 290 "prog_io_util.m"
      {
#line 290 "prog_io_util.m"
        parse_tree__prog_io_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_7, (MR_Integer) 0)));
#line 290 "prog_io_util.m"
        parse_tree__prog_io_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_7, (MR_Integer) 1)));
#line 290 "prog_io_util.m"
        parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_7, (MR_Integer) 2)));
#line 290 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_22_22)) == (MR_mktag((MR_Integer) 0)));
#line 290 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 290 "prog_io_util.m"
          {
#line 290 "prog_io_util.m"
            parse_tree__prog_io_util__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_22_22, (MR_Integer) 0)));
#line 290 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_23_23, (MR_String) "=") == 0);
#line 290 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 290 "prog_io_util.m"
              {
#line 291 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 291 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 291 "prog_io_util.m"
                  {
#line 291 "prog_io_util.m"
                    parse_tree__prog_io_util__FuncAndArgsTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_24_24, (MR_Integer) 0)));
#line 291 "prog_io_util.m"
                    parse_tree__prog_io_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_24_24, (MR_Integer) 1)));
#line 291 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 291 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 291 "prog_io_util.m"
                      {
#line 291 "prog_io_util.m"
                        parse_tree__prog_io_util__FuncResultTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_25_25, (MR_Integer) 0)));
#line 291 "prog_io_util.m"
                        parse_tree__prog_io_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_25_25, (MR_Integer) 1)));
#line 291 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "prog_io_util.m"
                      }
#line 291 "prog_io_util.m"
                  }
#line 290 "prog_io_util.m"
              }
#line 290 "prog_io_util.m"
          }
#line 290 "prog_io_util.m"
      }
#line 295 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 293 "prog_io_util.m"
      {
#line 293 "prog_io_util.m"
        parse_tree__prog_io_util__FunctorTerm_14 = parse_tree__prog_io_util__FuncAndArgsTerm_11;
#line 294 "prog_io_util.m"
        {
#line 294 "prog_io_util.m"
          parse_tree__prog_io_util__MaybeFuncResult_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 294 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeFuncResult_15, 0) = ((MR_Box) (parse_tree__prog_io_util__FuncResultTerm_12));
#line 294 "prog_io_util.m"
        }
#line 293 "prog_io_util.m"
      }
#line 295 "prog_io_util.m"
    else
#line 296 "prog_io_util.m"
      {
#line 296 "prog_io_util.m"
        parse_tree__prog_io_util__FunctorTerm_14 = parse_tree__prog_io_util__PredAndArgsTerm_7;
#line 297 "prog_io_util.m"
        parse_tree__prog_io_util__MaybeFuncResult_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 296 "prog_io_util.m"
      }
#line 299 "prog_io_util.m"
    {
#line 299 "prog_io_util.m"
      mercury__varset__coerce_2_p_0(parse_tree__prog_io_util__TypeInfo_for__T_28, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_util__VarSet_8, &parse_tree__prog_io_util__GenericVarSet_16);
    }
#line 304 "prog_io_util.m"
    if ((parse_tree__prog_io_util__MaybeModuleName_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 306 "prog_io_util.m"
      {
#line 306 "prog_io_util.m"
        parse_tree__prog_io_sym_name__parse_sym_name_and_args_4_p_0(parse_tree__prog_io_util__TypeInfo_for__T_28, parse_tree__prog_io_util__FunctorTerm_14, parse_tree__prog_io_util__GenericVarSet_16, parse_tree__prog_io_util__ContextPieces_9, &parse_tree__prog_io_util__Result_18);
      }
#line 304 "prog_io_util.m"
    else
#line 301 "prog_io_util.m"
      {
#line 301 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeModuleName_6, (MR_Integer) 0)));

#line 302 "prog_io_util.m"
        {
#line 302 "prog_io_util.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_util__TypeInfo_for__T_28, parse_tree__prog_io_util__ModuleName_17, parse_tree__prog_io_util__FunctorTerm_14, parse_tree__prog_io_util__GenericVarSet_16, parse_tree__prog_io_util__ContextPieces_9, &parse_tree__prog_io_util__Result_18);
        }
#line 301 "prog_io_util.m"
      }
#line 312 "prog_io_util.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_util__Result_18)) == (MR_mktag((MR_Integer) 0))))
#line 314 "prog_io_util.m"
      *parse_tree__prog_io_util__PredAndArgsResult_10 = (MR_Word) parse_tree__prog_io_util__Result_18;
#line 312 "prog_io_util.m"
    else
#line 310 "prog_io_util.m"
      {
#line 310 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__SymName_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Result_18, (MR_Integer) 0)));
#line 310 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Args_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Result_18, (MR_Integer) 1)));
#line 310 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_27_27;

#line 311 "prog_io_util.m"
        {
#line 311 "prog_io_util.m"
          parse_tree__prog_io_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 311 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_util__Args_20));
#line 311 "prog_io_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io_util__MaybeFuncResult_15));
#line 311 "prog_io_util.m"
        }
#line 311 "prog_io_util.m"
        {
#line 311 "prog_io_util.m"
          MR_Word base;
#line 311 "prog_io_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "prog_io_util.m"
          *parse_tree__prog_io_util__PredAndArgsResult_10 = base;
#line 311 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__SymName_19));
#line 311 "prog_io_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__V_27_27));
#line 311 "prog_io_util.m"
        }
#line 310 "prog_io_util.m"
      }
#line 288 "prog_io_util.m"
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
#line 282 "prog_io_util.m"
  {
#line 282 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredAndArgsTerm_5)) == (MR_mktag((MR_Integer) 0)));
#line 282 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FuncAndArgsTerm_9;
#line 282 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_16_16;
#line 276 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 276 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_14_14;
#line 276 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_15_15;
#line 276 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_17_17;
#line 276 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;
#line 277 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__FuncResultTerm_10;

#line 276 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 276 "prog_io_util.m"
      {
#line 276 "prog_io_util.m"
        parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_5, (MR_Integer) 0)));
#line 276 "prog_io_util.m"
        parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_5, (MR_Integer) 1)));
#line 276 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArgsTerm_5, (MR_Integer) 2)));
#line 276 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 276 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 276 "prog_io_util.m"
          {
#line 276 "prog_io_util.m"
            parse_tree__prog_io_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_13_13, (MR_Integer) 0)));
#line 276 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_14_14, (MR_String) "=") == 0);
#line 276 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 276 "prog_io_util.m"
              {
#line 277 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 277 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 277 "prog_io_util.m"
                  {
#line 277 "prog_io_util.m"
                    parse_tree__prog_io_util__FuncAndArgsTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 0)));
#line 277 "prog_io_util.m"
                    parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 1)));
#line 277 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 277 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 277 "prog_io_util.m"
                      {
#line 277 "prog_io_util.m"
                        parse_tree__prog_io_util__FuncResultTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
#line 277 "prog_io_util.m"
                        parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
#line 277 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 277 "prog_io_util.m"
                      }
#line 277 "prog_io_util.m"
                  }
#line 276 "prog_io_util.m"
              }
#line 276 "prog_io_util.m"
          }
#line 276 "prog_io_util.m"
      }
#line 282 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 279 "prog_io_util.m"
      {
#line 279 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TypeCtorInfo_21_21;
#line 279 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TypeInfo_22_22;
#line 279 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__ArgTerms0_12;
#line 281 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__conv0_ArgTerms_8;

#line 279 "prog_io_util.m"
        {
#line 279 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0(parse_tree__prog_io_util__TypeInfo_for__T_20, parse_tree__prog_io_util__FuncAndArgsTerm_9, parse_tree__prog_io_util__SymName_7, &parse_tree__prog_io_util__ArgTerms0_12);
        }
#line 279 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 279 "prog_io_util.m"
          {
#line 280 "prog_io_util.m"
            *parse_tree__prog_io_util__PredOrFunc_6 = (MR_Integer) 1;
#line 16080 "parse_tree.prog_io_util.c"
            parse_tree__prog_io_util__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 16082 "parse_tree.prog_io_util.c"
            {
#line 16084 "parse_tree.prog_io_util.c"
              parse_tree__prog_io_util__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 16086 "parse_tree.prog_io_util.c"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_22_22, 0) = ((MR_Box) (parse_tree__prog_io_util__TypeCtorInfo_21_21));
#line 16088 "parse_tree.prog_io_util.c"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_22_22, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for__T_20));
#line 16090 "parse_tree.prog_io_util.c"
            }
#line 281 "prog_io_util.m"
            {
#line 281 "prog_io_util.m"
              parse_tree__prog_io_util__conv0_ArgTerms_8 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_util__TypeInfo_22_22, (MR_Word) parse_tree__prog_io_util__ArgTerms0_12, (MR_Word) parse_tree__prog_io_util__V_16_16);
            }
#line 281 "prog_io_util.m"
            *parse_tree__prog_io_util__ArgTerms_8 = (MR_Word) parse_tree__prog_io_util__conv0_ArgTerms_8;
#line 281 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 279 "prog_io_util.m"
          }
#line 279 "prog_io_util.m"
      }
#line 282 "prog_io_util.m"
    else
#line 283 "prog_io_util.m"
      {
#line 283 "prog_io_util.m"
        {
#line 283 "prog_io_util.m"
          parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0(parse_tree__prog_io_util__TypeInfo_for__T_20, parse_tree__prog_io_util__PredAndArgsTerm_5, parse_tree__prog_io_util__SymName_7, parse_tree__prog_io_util__ArgTerms_8);
        }
#line 283 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 283 "prog_io_util.m"
          {
#line 284 "prog_io_util.m"
            *parse_tree__prog_io_util__PredOrFunc_6 = (MR_Integer) 0;
#line 284 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 283 "prog_io_util.m"
          }
#line 283 "prog_io_util.m"
      }
#line 282 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 282 "prog_io_util.m"
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
#line 265 "prog_io_util.m"
  {
#line 265 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PorFPredAndArityTerm_5)) == (MR_mktag((MR_Integer) 0)));
#line 265 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__PredOrFuncStr_9;
#line 265 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Args_10;
#line 265 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__Arg_12;
#line 265 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__ModuleName_13;
#line 265 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_14_14;
#line 265 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_15_15;
#line 265 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_16_16;
#line 266 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;

#line 266 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 266 "prog_io_util.m"
      {
#line 266 "prog_io_util.m"
        parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PorFPredAndArityTerm_5, (MR_Integer) 0)));
#line 266 "prog_io_util.m"
        parse_tree__prog_io_util__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PorFPredAndArityTerm_5, (MR_Integer) 1)));
#line 266 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PorFPredAndArityTerm_5, (MR_Integer) 2)));
#line 266 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_14_14)) == (MR_mktag((MR_Integer) 0)));
#line 266 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 266 "prog_io_util.m"
          {
#line 266 "prog_io_util.m"
            parse_tree__prog_io_util__PredOrFuncStr_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_14_14, (MR_Integer) 0)));
#line 268 "prog_io_util.m"
            if ((strcmp(parse_tree__prog_io_util__PredOrFuncStr_9, (MR_String) "func") == 0))
#line 268 "prog_io_util.m"
              {
#line 268 "prog_io_util.m"
                *parse_tree__prog_io_util__PredOrFunc_6 = (MR_Integer) 1;
#line 268 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 268 "prog_io_util.m"
              }
#line 268 "prog_io_util.m"
            else
#line 268 "prog_io_util.m"
            if ((strcmp(parse_tree__prog_io_util__PredOrFuncStr_9, (MR_String) "pred") == 0))
#line 267 "prog_io_util.m"
              {
#line 267 "prog_io_util.m"
                *parse_tree__prog_io_util__PredOrFunc_6 = (MR_Integer) 0;
#line 267 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 267 "prog_io_util.m"
              }
#line 268 "prog_io_util.m"
            else
#line 268 "prog_io_util.m"
              parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 265 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 265 "prog_io_util.m"
              {
#line 270 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Args_10)) == (MR_mktag((MR_Integer) 1)));
#line 270 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 270 "prog_io_util.m"
                  {
#line 270 "prog_io_util.m"
                    parse_tree__prog_io_util__Arg_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_10, (MR_Integer) 0)));
#line 270 "prog_io_util.m"
                    parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Args_10, (MR_Integer) 1)));
#line 270 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 265 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 265 "prog_io_util.m"
                      {
#line 271 "prog_io_util.m"
                        parse_tree__prog_io_util__V_16_16 = (MR_String) "";
#line 271 "prog_io_util.m"
                        parse_tree__prog_io_util__ModuleName_13 = (MR_Word) &parse_tree__prog_io_util_scalar_common_3[1];
#line 272 "prog_io_util.m"
                        {
#line 272 "prog_io_util.m"
                          return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_name_and_arity_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_17, parse_tree__prog_io_util__ModuleName_13, parse_tree__prog_io_util__Arg_12, parse_tree__prog_io_util__SymName_7, parse_tree__prog_io_util__Arity_8);
                        }
#line 265 "prog_io_util.m"
                      }
#line 270 "prog_io_util.m"
                  }
#line 265 "prog_io_util.m"
              }
#line 266 "prog_io_util.m"
          }
#line 266 "prog_io_util.m"
      }
#line 265 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 265 "prog_io_util.m"
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
#line 260 "prog_io_util.m"
  {
#line 260 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded;

#line 261 "prog_io_util.m"
    {
#line 261 "prog_io_util.m"
      return parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_name_and_arity_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_9, (MR_Word) &parse_tree__prog_io_util_scalar_common_3[1], parse_tree__prog_io_util__PredAndArityTerm_4, parse_tree__prog_io_util__SymName_5, parse_tree__prog_io_util__Arity_6);
    }
#line 260 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 260 "prog_io_util.m"
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
#line 253 "prog_io_util.m"
  {
#line 253 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__PredAndArityTerm_6)) == (MR_mktag((MR_Integer) 0)));
#line 253 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__PredNameTerm_9;
#line 253 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__ArityTerm_10;
#line 253 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_13_13;
#line 253 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_14_14;
#line 253 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_15_15;
#line 253 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_16_16;
#line 253 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_17_17;
#line 253 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_18_18;
#line 253 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_19_19;
#line 254 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_11_11;
#line 258 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_12_12;

#line 254 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 254 "prog_io_util.m"
      {
#line 254 "prog_io_util.m"
        parse_tree__prog_io_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArityTerm_6, (MR_Integer) 0)));
#line 254 "prog_io_util.m"
        parse_tree__prog_io_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArityTerm_6, (MR_Integer) 1)));
#line 254 "prog_io_util.m"
        parse_tree__prog_io_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__PredAndArityTerm_6, (MR_Integer) 2)));
#line 254 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 254 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 254 "prog_io_util.m"
          {
#line 254 "prog_io_util.m"
            parse_tree__prog_io_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_13_13, (MR_Integer) 0)));
#line 254 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_14_14, (MR_String) "/") == 0);
#line 253 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 253 "prog_io_util.m"
              {
#line 255 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 255 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 255 "prog_io_util.m"
                  {
#line 255 "prog_io_util.m"
                    parse_tree__prog_io_util__PredNameTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 0)));
#line 255 "prog_io_util.m"
                    parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_15_15, (MR_Integer) 1)));
#line 255 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 255 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 255 "prog_io_util.m"
                      {
#line 255 "prog_io_util.m"
                        parse_tree__prog_io_util__ArityTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
#line 255 "prog_io_util.m"
                        parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
#line 255 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 253 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 253 "prog_io_util.m"
                          {
#line 256 "prog_io_util.m"
                            {
#line 256 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = parse_tree__prog_io_sym_name__try_parse_implicitly_qualified_sym_name_and_no_args_3_p_0(parse_tree__prog_io_util__TypeInfo_for_T_20, parse_tree__prog_io_util__ModuleName_5, parse_tree__prog_io_util__PredNameTerm_9, parse_tree__prog_io_util__SymName_7);
                            }
#line 253 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 253 "prog_io_util.m"
                              {
#line 258 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__ArityTerm_10)) == (MR_mktag((MR_Integer) 0)));
#line 258 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 258 "prog_io_util.m"
                                  {
#line 258 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__ArityTerm_10, (MR_Integer) 0)));
#line 258 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__ArityTerm_10, (MR_Integer) 1)));
#line 258 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__ArityTerm_10, (MR_Integer) 2)));
#line 258 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 258 "prog_io_util.m"
                                    if (parse_tree__prog_io_util__succeeded)
#line 258 "prog_io_util.m"
                                      {
#line 258 "prog_io_util.m"
                                        *parse_tree__prog_io_util__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_18_18, (MR_Integer) 0)));
#line 258 "prog_io_util.m"
                                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 258 "prog_io_util.m"
                                      }
#line 258 "prog_io_util.m"
                                  }
#line 253 "prog_io_util.m"
                              }
#line 253 "prog_io_util.m"
                          }
#line 255 "prog_io_util.m"
                      }
#line 255 "prog_io_util.m"
                  }
#line 253 "prog_io_util.m"
              }
#line 254 "prog_io_util.m"
          }
#line 254 "prog_io_util.m"
      }
#line 253 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 253 "prog_io_util.m"
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
#line 1229 "prog_io_util.m"
  {
#line 1229 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1227 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_36_36;
#line 1227 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_37_37;
#line 1227 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_38_38;
#line 1227 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 1227 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1227 "prog_io_util.m"
      {
#line 1227 "prog_io_util.m"
        parse_tree__prog_io_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 1227 "prog_io_util.m"
        parse_tree__prog_io_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 1227 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 1227 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1227 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1227 "prog_io_util.m"
          {
#line 1227 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_36_36)) == (MR_mktag((MR_Integer) 0)));
#line 1227 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1227 "prog_io_util.m"
              {
#line 1227 "prog_io_util.m"
                parse_tree__prog_io_util__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_36_36, (MR_Integer) 0)));
#line 1227 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_37_37, (MR_String) "[]") == 0);
#line 1227 "prog_io_util.m"
              }
#line 1227 "prog_io_util.m"
          }
#line 1227 "prog_io_util.m"
      }
#line 1229 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1228 "prog_io_util.m"
      {
#line 1228 "prog_io_util.m"
        *parse_tree__prog_io_util__MaybeVars_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_4[0]);
#line 1228 "prog_io_util.m"
      }
#line 1229 "prog_io_util.m"
    else
#line 1319 "prog_io_util.m"
      {
#line 1319 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__HeadTerm_10;
#line 1319 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__Tail_11;
#line 1229 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_43_43;
#line 1229 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_44_44;
#line 1229 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_45_45;
#line 1229 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_46_46;
#line 1229 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_47_47;
#line 1229 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_12_12;

#line 1229 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1229 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1229 "prog_io_util.m"
          {
#line 1229 "prog_io_util.m"
            parse_tree__prog_io_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 1229 "prog_io_util.m"
            parse_tree__prog_io_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 1229 "prog_io_util.m"
            parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 1229 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_43_43)) == (MR_mktag((MR_Integer) 0)));
#line 1229 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1229 "prog_io_util.m"
              {
#line 1229 "prog_io_util.m"
                parse_tree__prog_io_util__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_43_43, (MR_Integer) 0)));
#line 1229 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_44_44, (MR_String) "[|]") == 0);
#line 1229 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1229 "prog_io_util.m"
                  {
#line 1229 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_45_45)) == (MR_mktag((MR_Integer) 1)));
#line 1229 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1229 "prog_io_util.m"
                      {
#line 1229 "prog_io_util.m"
                        parse_tree__prog_io_util__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, (MR_Integer) 0)));
#line 1229 "prog_io_util.m"
                        parse_tree__prog_io_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, (MR_Integer) 1)));
#line 1229 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 1229 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1229 "prog_io_util.m"
                          {
#line 1229 "prog_io_util.m"
                            parse_tree__prog_io_util__Tail_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_46_46, (MR_Integer) 0)));
#line 1229 "prog_io_util.m"
                            parse_tree__prog_io_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_46_46, (MR_Integer) 1)));
#line 1229 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1229 "prog_io_util.m"
                          }
#line 1229 "prog_io_util.m"
                      }
#line 1229 "prog_io_util.m"
                  }
#line 1229 "prog_io_util.m"
              }
#line 1229 "prog_io_util.m"
          }
#line 1319 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1314 "prog_io_util.m"
          {
#line 1314 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__VarKind_15;

#line 1234 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadTerm_10)) == (MR_mktag((MR_Integer) 0))))
#line 1234 "prog_io_util.m"
              {
#line 1234 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));
#line 1234 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 1234 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_116_116;
#line 1234 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_117_117;
#line 1234 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__V_118_118;
#line 1234 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_120_120;
#line 1235 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 2)));
#line 1235 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_119_119;

#line 1235 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_114_114)) == (MR_mktag((MR_Integer) 1)));
#line 1235 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1235 "prog_io_util.m"
                  {
#line 1235 "prog_io_util.m"
                    parse_tree__prog_io_util__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_114_114, (MR_Integer) 0)));
#line 1235 "prog_io_util.m"
                    parse_tree__prog_io_util__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_114_114, (MR_Integer) 1)));
#line 1235 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_116_116 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1234 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1234 "prog_io_util.m"
                      {
#line 1235 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_115_115)) == (MR_mktag((MR_Integer) 0)));
#line 1235 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1235 "prog_io_util.m"
                          {
#line 1235 "prog_io_util.m"
                            parse_tree__prog_io_util__V_118_118 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_115_115, (MR_Integer) 0)));
#line 1235 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_117_117)) == (MR_mktag((MR_Integer) 1)));
#line 1235 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1235 "prog_io_util.m"
                              {
#line 1235 "prog_io_util.m"
                                parse_tree__prog_io_util__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_117_117, (MR_Integer) 0)));
#line 1235 "prog_io_util.m"
                                parse_tree__prog_io_util__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_117_117, (MR_Integer) 1)));
#line 1234 "prog_io_util.m"
                                if ((strcmp(parse_tree__prog_io_util__V_118_118, (MR_String) "!") == 0))
#line 1236 "prog_io_util.m"
                                  {
#line 1236 "prog_io_util.m"
                                    {
#line 1236 "prog_io_util.m"
                                      parse_tree__prog_io_util__VarKind_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1236 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarKind_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_120_120));
#line 1236 "prog_io_util.m"
                                    }
#line 1236 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1236 "prog_io_util.m"
                                  }
#line 1234 "prog_io_util.m"
                                else
#line 1234 "prog_io_util.m"
                                if ((strcmp(parse_tree__prog_io_util__V_118_118, (MR_String) "!.") == 0))
#line 1239 "prog_io_util.m"
                                  {
#line 1239 "prog_io_util.m"
                                    {
#line 1239 "prog_io_util.m"
                                      parse_tree__prog_io_util__VarKind_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1239 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__VarKind_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_120_120));
#line 1239 "prog_io_util.m"
                                    }
#line 1239 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1239 "prog_io_util.m"
                                  }
#line 1234 "prog_io_util.m"
                                else
#line 1234 "prog_io_util.m"
                                if ((strcmp(parse_tree__prog_io_util__V_118_118, (MR_String) "!:") == 0))
#line 1242 "prog_io_util.m"
                                  {
#line 1242 "prog_io_util.m"
                                    {
#line 1242 "prog_io_util.m"
                                      parse_tree__prog_io_util__VarKind_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1242 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__VarKind_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V_120_120));
#line 1242 "prog_io_util.m"
                                    }
#line 1242 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1242 "prog_io_util.m"
                                  }
#line 1234 "prog_io_util.m"
                                else
#line 1234 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = MR_FALSE;
#line 1235 "prog_io_util.m"
                              }
#line 1235 "prog_io_util.m"
                          }
#line 1234 "prog_io_util.m"
                      }
#line 1235 "prog_io_util.m"
                  }
#line 1234 "prog_io_util.m"
              }
#line 1234 "prog_io_util.m"
            else
#line 1232 "prog_io_util.m"
              {
#line 1232 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 1232 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));

#line 1233 "prog_io_util.m"
                {
#line 1233 "prog_io_util.m"
                  parse_tree__prog_io_util__VarKind_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1233 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__VarKind_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V0_13));
#line 1233 "prog_io_util.m"
                }
#line 1232 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1232 "prog_io_util.m"
              }
#line 1314 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1246 "prog_io_util.m"
              {
#line 1246 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__MaybeVarsTail_23;

#line 1245 "prog_io_util.m"
                {
#line 1245 "prog_io_util.m"
                  parse_tree__prog_io_util__parse_vars_and_state_vars_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__Tail_11, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__MaybeVarsTail_23);
                }
#line 1310 "prog_io_util.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeVarsTail_23)) == (MR_mktag((MR_Integer) 0))))
#line 1312 "prog_io_util.m"
                  *parse_tree__prog_io_util__MaybeVars_8 = parse_tree__prog_io_util__MaybeVarsTail_23;
#line 1310 "prog_io_util.m"
                else
#line 1249 "prog_io_util.m"
                  {
#line 1249 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__TailVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeVarsTail_23, (MR_Integer) 0)));
#line 1249 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__TailStateVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeVarsTail_23, (MR_Integer) 1)));
#line 1249 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__TailDotVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeVarsTail_23, (MR_Integer) 2)));
#line 1249 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__TailColonVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeVarsTail_23, (MR_Integer) 3)));

#line 1261 "prog_io_util.m"
#line 1261 "prog_io_util.m"
                    switch (MR_tag((MR_Word) parse_tree__prog_io_util__VarKind_15)) {
#line 1261 "prog_io_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1261 "prog_io_util.m"
                      case (MR_Integer) 0:
#line 1251 "prog_io_util.m"
                        {
#line 1251 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__V_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__VarKind_15, (MR_Integer) 0)));
#line 1252 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__TypeInfo_94_94;

#line 16776 "parse_tree.prog_io_util.c"
                          {
#line 16778 "parse_tree.prog_io_util.c"
                            parse_tree__prog_io_util__TypeInfo_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 16780 "parse_tree.prog_io_util.c"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_94_94, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 16782 "parse_tree.prog_io_util.c"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_94_94, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 16784 "parse_tree.prog_io_util.c"
                          }
#line 1252 "prog_io_util.m"
                          {
#line 1252 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_94_94, parse_tree__prog_io_util__V_28, parse_tree__prog_io_util__TailVars_24);
                          }
#line 1256 "prog_io_util.m"
                          if (parse_tree__prog_io_util__succeeded)
#line 1254 "prog_io_util.m"
                            {
#line 1254 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__Spec_29;
#line 1254 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__V_69_69;

#line 1253 "prog_io_util.m"
                              {
#line 1253 "prog_io_util.m"
                                parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_29);
                              }
#line 1255 "prog_io_util.m"
                              {
#line 1255 "prog_io_util.m"
                                parse_tree__prog_io_util__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1255 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_29));
#line 1255 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1255 "prog_io_util.m"
                              }
#line 1255 "prog_io_util.m"
                              {
#line 1255 "prog_io_util.m"
                                MR_Word base;
#line 1255 "prog_io_util.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1255 "prog_io_util.m"
                                *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1255 "prog_io_util.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_69_69));
#line 1255 "prog_io_util.m"
                              }
#line 1254 "prog_io_util.m"
                            }
#line 1256 "prog_io_util.m"
                          else
#line 1257 "prog_io_util.m"
                            {
#line 1257 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__Vars_30;

#line 1257 "prog_io_util.m"
                              {
#line 1257 "prog_io_util.m"
                                parse_tree__prog_io_util__Vars_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1257 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_30, 0) = ((MR_Box) (parse_tree__prog_io_util__V_28));
#line 1257 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_30, 1) = ((MR_Box) (parse_tree__prog_io_util__TailVars_24));
#line 1257 "prog_io_util.m"
                              }
#line 1258 "prog_io_util.m"
                              {
#line 1258 "prog_io_util.m"
                                MR_Word base;
#line 1258 "prog_io_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1258 "prog_io_util.m"
                                *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1258 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Vars_30));
#line 1258 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_25));
#line 1258 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_util__TailDotVars_26));
#line 1258 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_io_util__TailColonVars_27));
#line 1258 "prog_io_util.m"
                              }
#line 1257 "prog_io_util.m"
                            }
#line 1251 "prog_io_util.m"
                        }
#line 1261 "prog_io_util.m"
                        break;
#line 1261 "prog_io_util.m"
                      case (MR_Integer) 1:
#line 1262 "prog_io_util.m"
                        {
#line 1262 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__SV_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarKind_15, (MR_Integer) 0)));

#line 1264 "prog_io_util.m"
                          {
#line 1264 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__TypeInfo_96_96;

#line 16882 "parse_tree.prog_io_util.c"
                            {
#line 16884 "parse_tree.prog_io_util.c"
                              parse_tree__prog_io_util__TypeInfo_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 16886 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_96_96, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 16888 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_96_96, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 16890 "parse_tree.prog_io_util.c"
                            }
#line 1264 "prog_io_util.m"
                            {
#line 1264 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_96_96, parse_tree__prog_io_util__SV_31, parse_tree__prog_io_util__TailStateVars_25);
                            }
#line 1264 "prog_io_util.m"
                          }
#line 1265 "prog_io_util.m"
                          if (!(parse_tree__prog_io_util__succeeded))
#line 1265 "prog_io_util.m"
                            {
#line 1265 "prog_io_util.m"
                              {
#line 1265 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__TypeInfo_98_98;

#line 16908 "parse_tree.prog_io_util.c"
                                {
#line 16910 "parse_tree.prog_io_util.c"
                                  parse_tree__prog_io_util__TypeInfo_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 16912 "parse_tree.prog_io_util.c"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_98_98, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 16914 "parse_tree.prog_io_util.c"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_98_98, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 16916 "parse_tree.prog_io_util.c"
                                }
#line 1265 "prog_io_util.m"
                                {
#line 1265 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_98_98, parse_tree__prog_io_util__SV_31, parse_tree__prog_io_util__TailDotVars_26);
                                }
#line 1265 "prog_io_util.m"
                              }
#line 1265 "prog_io_util.m"
                              if (!(parse_tree__prog_io_util__succeeded))
#line 1266 "prog_io_util.m"
                                {
#line 1266 "prog_io_util.m"
                                  MR_Word parse_tree__prog_io_util__TypeInfo_100_100;

#line 16932 "parse_tree.prog_io_util.c"
                                  {
#line 16934 "parse_tree.prog_io_util.c"
                                    parse_tree__prog_io_util__TypeInfo_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 16936 "parse_tree.prog_io_util.c"
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_100_100, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 16938 "parse_tree.prog_io_util.c"
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_100_100, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 16940 "parse_tree.prog_io_util.c"
                                  }
#line 1266 "prog_io_util.m"
                                  {
#line 1266 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_100_100, parse_tree__prog_io_util__SV_31, parse_tree__prog_io_util__TailColonVars_27);
                                  }
#line 1266 "prog_io_util.m"
                                }
#line 1265 "prog_io_util.m"
                            }
#line 1272 "prog_io_util.m"
                          if (parse_tree__prog_io_util__succeeded)
#line 1270 "prog_io_util.m"
                            {
#line 1270 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__V_67_67;
#line 1270 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__Spec_79;

#line 1269 "prog_io_util.m"
                              {
#line 1269 "prog_io_util.m"
                                parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_79);
                              }
#line 1271 "prog_io_util.m"
                              {
#line 1271 "prog_io_util.m"
                                parse_tree__prog_io_util__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1271 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_79));
#line 1271 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1271 "prog_io_util.m"
                              }
#line 1271 "prog_io_util.m"
                              {
#line 1271 "prog_io_util.m"
                                MR_Word base;
#line 1271 "prog_io_util.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1271 "prog_io_util.m"
                                *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1271 "prog_io_util.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_67_67));
#line 1271 "prog_io_util.m"
                              }
#line 1270 "prog_io_util.m"
                            }
#line 1272 "prog_io_util.m"
                          else
#line 1273 "prog_io_util.m"
                            {
#line 1273 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__StateVars_32;

#line 1273 "prog_io_util.m"
                              {
#line 1273 "prog_io_util.m"
                                parse_tree__prog_io_util__StateVars_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1273 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__StateVars_32, 0) = ((MR_Box) (parse_tree__prog_io_util__SV_31));
#line 1273 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__StateVars_32, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_25));
#line 1273 "prog_io_util.m"
                              }
#line 1274 "prog_io_util.m"
                              {
#line 1274 "prog_io_util.m"
                                MR_Word base;
#line 1274 "prog_io_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1274 "prog_io_util.m"
                                *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1274 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__TailVars_24));
#line 1274 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__StateVars_32));
#line 1274 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_util__TailDotVars_26));
#line 1274 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_io_util__TailColonVars_27));
#line 1274 "prog_io_util.m"
                              }
#line 1273 "prog_io_util.m"
                            }
#line 1262 "prog_io_util.m"
                        }
#line 1261 "prog_io_util.m"
                        break;
#line 1261 "prog_io_util.m"
                      case (MR_Integer) 2:
#line 1278 "prog_io_util.m"
                        {
#line 1278 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__SV_85 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_util__VarKind_15, (MR_Integer) 0)));

#line 1280 "prog_io_util.m"
                          {
#line 1280 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__TypeInfo_102_102;

#line 17042 "parse_tree.prog_io_util.c"
                            {
#line 17044 "parse_tree.prog_io_util.c"
                              parse_tree__prog_io_util__TypeInfo_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 17046 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_102_102, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 17048 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_102_102, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 17050 "parse_tree.prog_io_util.c"
                            }
#line 1280 "prog_io_util.m"
                            {
#line 1280 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_102_102, parse_tree__prog_io_util__SV_85, parse_tree__prog_io_util__TailStateVars_25);
                            }
#line 1280 "prog_io_util.m"
                          }
#line 1281 "prog_io_util.m"
                          if (!(parse_tree__prog_io_util__succeeded))
#line 1281 "prog_io_util.m"
                            {
#line 1281 "prog_io_util.m"
                              {
#line 1281 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__TypeInfo_104_104;

#line 17068 "parse_tree.prog_io_util.c"
                                {
#line 17070 "parse_tree.prog_io_util.c"
                                  parse_tree__prog_io_util__TypeInfo_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 17072 "parse_tree.prog_io_util.c"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_104_104, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 17074 "parse_tree.prog_io_util.c"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_104_104, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 17076 "parse_tree.prog_io_util.c"
                                }
#line 1281 "prog_io_util.m"
                                {
#line 1281 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_104_104, parse_tree__prog_io_util__SV_85, parse_tree__prog_io_util__TailDotVars_26);
                                }
#line 1281 "prog_io_util.m"
                              }
#line 1281 "prog_io_util.m"
                              if (!(parse_tree__prog_io_util__succeeded))
#line 1282 "prog_io_util.m"
                                {
#line 1282 "prog_io_util.m"
                                  MR_Word parse_tree__prog_io_util__TypeInfo_106_106;

#line 17092 "parse_tree.prog_io_util.c"
                                  {
#line 17094 "parse_tree.prog_io_util.c"
                                    parse_tree__prog_io_util__TypeInfo_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 17096 "parse_tree.prog_io_util.c"
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_106_106, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 17098 "parse_tree.prog_io_util.c"
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_106_106, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 17100 "parse_tree.prog_io_util.c"
                                  }
#line 1282 "prog_io_util.m"
                                  {
#line 1282 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_106_106, parse_tree__prog_io_util__SV_85, parse_tree__prog_io_util__TailColonVars_27);
                                  }
#line 1282 "prog_io_util.m"
                                }
#line 1281 "prog_io_util.m"
                            }
#line 1288 "prog_io_util.m"
                          if (parse_tree__prog_io_util__succeeded)
#line 1286 "prog_io_util.m"
                            {
#line 1286 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__V_65_65;
#line 1286 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__Spec_82;

#line 1285 "prog_io_util.m"
                              {
#line 1285 "prog_io_util.m"
                                parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_82);
                              }
#line 1287 "prog_io_util.m"
                              {
#line 1287 "prog_io_util.m"
                                parse_tree__prog_io_util__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1287 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_82));
#line 1287 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1287 "prog_io_util.m"
                              }
#line 1287 "prog_io_util.m"
                              {
#line 1287 "prog_io_util.m"
                                MR_Word base;
#line 1287 "prog_io_util.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1287 "prog_io_util.m"
                                *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1287 "prog_io_util.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_65_65));
#line 1287 "prog_io_util.m"
                              }
#line 1286 "prog_io_util.m"
                            }
#line 1288 "prog_io_util.m"
                          else
#line 1289 "prog_io_util.m"
                            {
#line 1289 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__DotVars_33;

#line 1289 "prog_io_util.m"
                              {
#line 1289 "prog_io_util.m"
                                parse_tree__prog_io_util__DotVars_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1289 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__DotVars_33, 0) = ((MR_Box) (parse_tree__prog_io_util__SV_85));
#line 1289 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__DotVars_33, 1) = ((MR_Box) (parse_tree__prog_io_util__TailDotVars_26));
#line 1289 "prog_io_util.m"
                              }
#line 1290 "prog_io_util.m"
                              {
#line 1290 "prog_io_util.m"
                                MR_Word base;
#line 1290 "prog_io_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1290 "prog_io_util.m"
                                *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1290 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__TailVars_24));
#line 1290 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_25));
#line 1290 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_util__DotVars_33));
#line 1290 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_io_util__TailColonVars_27));
#line 1290 "prog_io_util.m"
                              }
#line 1289 "prog_io_util.m"
                            }
#line 1278 "prog_io_util.m"
                        }
#line 1261 "prog_io_util.m"
                        break;
#line 1261 "prog_io_util.m"
                      case (MR_Integer) 3:
#line 1294 "prog_io_util.m"
                        {
#line 1294 "prog_io_util.m"
                          MR_Word parse_tree__prog_io_util__SV_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__VarKind_15, (MR_Integer) 0)));

#line 1296 "prog_io_util.m"
                          {
#line 1296 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__TypeInfo_108_108;

#line 17202 "parse_tree.prog_io_util.c"
                            {
#line 17204 "parse_tree.prog_io_util.c"
                              parse_tree__prog_io_util__TypeInfo_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 17206 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_108_108, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 17208 "parse_tree.prog_io_util.c"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_108_108, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 17210 "parse_tree.prog_io_util.c"
                            }
#line 1296 "prog_io_util.m"
                            {
#line 1296 "prog_io_util.m"
                              parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_108_108, parse_tree__prog_io_util__SV_89, parse_tree__prog_io_util__TailStateVars_25);
                            }
#line 1296 "prog_io_util.m"
                          }
#line 1297 "prog_io_util.m"
                          if (!(parse_tree__prog_io_util__succeeded))
#line 1297 "prog_io_util.m"
                            {
#line 1297 "prog_io_util.m"
                              {
#line 1297 "prog_io_util.m"
                                MR_Word parse_tree__prog_io_util__TypeInfo_110_110;

#line 17228 "parse_tree.prog_io_util.c"
                                {
#line 17230 "parse_tree.prog_io_util.c"
                                  parse_tree__prog_io_util__TypeInfo_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 17232 "parse_tree.prog_io_util.c"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_110_110, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 17234 "parse_tree.prog_io_util.c"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_110_110, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 17236 "parse_tree.prog_io_util.c"
                                }
#line 1297 "prog_io_util.m"
                                {
#line 1297 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_110_110, parse_tree__prog_io_util__SV_89, parse_tree__prog_io_util__TailDotVars_26);
                                }
#line 1297 "prog_io_util.m"
                              }
#line 1297 "prog_io_util.m"
                              if (!(parse_tree__prog_io_util__succeeded))
#line 1298 "prog_io_util.m"
                                {
#line 1298 "prog_io_util.m"
                                  MR_Word parse_tree__prog_io_util__TypeInfo_112_112;

#line 17252 "parse_tree.prog_io_util.c"
                                  {
#line 17254 "parse_tree.prog_io_util.c"
                                    parse_tree__prog_io_util__TypeInfo_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 17256 "parse_tree.prog_io_util.c"
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_112_112, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 17258 "parse_tree.prog_io_util.c"
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_112_112, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_92));
#line 17260 "parse_tree.prog_io_util.c"
                                  }
#line 1298 "prog_io_util.m"
                                  {
#line 1298 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__TypeInfo_112_112, parse_tree__prog_io_util__SV_89, parse_tree__prog_io_util__TailColonVars_27);
                                  }
#line 1298 "prog_io_util.m"
                                }
#line 1297 "prog_io_util.m"
                            }
#line 1304 "prog_io_util.m"
                          if (parse_tree__prog_io_util__succeeded)
#line 1302 "prog_io_util.m"
                            {
#line 1302 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__V_63_63;
#line 1302 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__Spec_86;

#line 1301 "prog_io_util.m"
                              {
#line 1301 "prog_io_util.m"
                                parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_86);
                              }
#line 1303 "prog_io_util.m"
                              {
#line 1303 "prog_io_util.m"
                                parse_tree__prog_io_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1303 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_86));
#line 1303 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_63_63));
#line 1303 "prog_io_util.m"
                              }
#line 1302 "prog_io_util.m"
                            }
#line 1304 "prog_io_util.m"
                          else
#line 1305 "prog_io_util.m"
                            {
#line 1305 "prog_io_util.m"
                              MR_Word parse_tree__prog_io_util__ColonVars_34;

#line 1305 "prog_io_util.m"
                              {
#line 1305 "prog_io_util.m"
                                parse_tree__prog_io_util__ColonVars_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1305 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ColonVars_34, 0) = ((MR_Box) (parse_tree__prog_io_util__SV_89));
#line 1305 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__ColonVars_34, 1) = ((MR_Box) (parse_tree__prog_io_util__TailColonVars_27));
#line 1305 "prog_io_util.m"
                              }
#line 1306 "prog_io_util.m"
                              {
#line 1306 "prog_io_util.m"
                                MR_Word base;
#line 1306 "prog_io_util.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1306 "prog_io_util.m"
                                *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1306 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__TailVars_24));
#line 1306 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_25));
#line 1306 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_util__TailDotVars_26));
#line 1306 "prog_io_util.m"
                                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__prog_io_util__ColonVars_34));
#line 1306 "prog_io_util.m"
                              }
#line 1305 "prog_io_util.m"
                            }
#line 1294 "prog_io_util.m"
                        }
#line 1261 "prog_io_util.m"
                        break;
#line 1261 "prog_io_util.m"
                    }
#line 1249 "prog_io_util.m"
                  }
#line 1246 "prog_io_util.m"
              }
#line 1314 "prog_io_util.m"
            else
#line 1316 "prog_io_util.m"
              {
#line 1316 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_72_72;
#line 1316 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Spec_90;

#line 1315 "prog_io_util.m"
                {
#line 1315 "prog_io_util.m"
                  parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "variable or state variable", parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_90);
                }
#line 1317 "prog_io_util.m"
                {
#line 1317 "prog_io_util.m"
                  parse_tree__prog_io_util__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1317 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_90));
#line 1317 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1317 "prog_io_util.m"
                }
#line 1317 "prog_io_util.m"
                {
#line 1317 "prog_io_util.m"
                  MR_Word base;
#line 1317 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1317 "prog_io_util.m"
                  *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1317 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_72_72));
#line 1317 "prog_io_util.m"
                }
#line 1316 "prog_io_util.m"
              }
#line 1314 "prog_io_util.m"
          }
#line 1319 "prog_io_util.m"
        else
#line 1321 "prog_io_util.m"
          {
#line 1321 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_75_75;
#line 1321 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Spec_91;

#line 1320 "prog_io_util.m"
            {
#line 1320 "prog_io_util.m"
              parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_92, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "list of variables and/or state variables", parse_tree__prog_io_util__Term_5, &parse_tree__prog_io_util__Spec_91);
            }
#line 1322 "prog_io_util.m"
            {
#line 1322 "prog_io_util.m"
              parse_tree__prog_io_util__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1322 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_91));
#line 1322 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1322 "prog_io_util.m"
            }
#line 1322 "prog_io_util.m"
            {
#line 1322 "prog_io_util.m"
              MR_Word base;
#line 1322 "prog_io_util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1322 "prog_io_util.m"
              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1322 "prog_io_util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_75_75));
#line 1322 "prog_io_util.m"
            }
#line 1321 "prog_io_util.m"
          }
#line 1319 "prog_io_util.m"
      }
#line 1229 "prog_io_util.m"
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
#line 1170 "prog_io_util.m"
  {
#line 1170 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1168 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_28_28;
#line 1168 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_29_29;
#line 1168 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_30_30;
#line 1168 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 1168 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1168 "prog_io_util.m"
      {
#line 1168 "prog_io_util.m"
        parse_tree__prog_io_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 1168 "prog_io_util.m"
        parse_tree__prog_io_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 1168 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 1168 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1168 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1168 "prog_io_util.m"
          {
#line 1168 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_28_28)) == (MR_mktag((MR_Integer) 0)));
#line 1168 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1168 "prog_io_util.m"
              {
#line 1168 "prog_io_util.m"
                parse_tree__prog_io_util__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_28_28, (MR_Integer) 0)));
#line 1168 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_29_29, (MR_String) "[]") == 0);
#line 1168 "prog_io_util.m"
              }
#line 1168 "prog_io_util.m"
          }
#line 1168 "prog_io_util.m"
      }
#line 1170 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1169 "prog_io_util.m"
      {
#line 1169 "prog_io_util.m"
        *parse_tree__prog_io_util__MaybeVars_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[14]);
#line 1169 "prog_io_util.m"
      }
#line 1170 "prog_io_util.m"
    else
#line 1214 "prog_io_util.m"
      {
#line 1214 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__HeadTerm_10;
#line 1214 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TailTerm_11;
#line 1170 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_33_33;
#line 1170 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_34_34;
#line 1170 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_35_35;
#line 1170 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_36_36;
#line 1170 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_37_37;
#line 1170 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_12_12;

#line 1170 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1170 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1170 "prog_io_util.m"
          {
#line 1170 "prog_io_util.m"
            parse_tree__prog_io_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 1170 "prog_io_util.m"
            parse_tree__prog_io_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 1170 "prog_io_util.m"
            parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 1170 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_33_33)) == (MR_mktag((MR_Integer) 0)));
#line 1170 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1170 "prog_io_util.m"
              {
#line 1170 "prog_io_util.m"
                parse_tree__prog_io_util__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_33_33, (MR_Integer) 0)));
#line 1170 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_34_34, (MR_String) "[|]") == 0);
#line 1170 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1170 "prog_io_util.m"
                  {
#line 1170 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 1170 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1170 "prog_io_util.m"
                      {
#line 1170 "prog_io_util.m"
                        parse_tree__prog_io_util__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_35_35, (MR_Integer) 0)));
#line 1170 "prog_io_util.m"
                        parse_tree__prog_io_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_35_35, (MR_Integer) 1)));
#line 1170 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_36_36)) == (MR_mktag((MR_Integer) 1)));
#line 1170 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1170 "prog_io_util.m"
                          {
#line 1170 "prog_io_util.m"
                            parse_tree__prog_io_util__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_36_36, (MR_Integer) 0)));
#line 1170 "prog_io_util.m"
                            parse_tree__prog_io_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_36_36, (MR_Integer) 1)));
#line 1170 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1170 "prog_io_util.m"
                          }
#line 1170 "prog_io_util.m"
                      }
#line 1170 "prog_io_util.m"
                  }
#line 1170 "prog_io_util.m"
              }
#line 1170 "prog_io_util.m"
          }
#line 1214 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1209 "prog_io_util.m"
          {
#line 1209 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__VarKind_15;

#line 1175 "prog_io_util.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadTerm_10)) == (MR_mktag((MR_Integer) 0))))
#line 1176 "prog_io_util.m"
              {
#line 1176 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__SV0_16;
#line 1176 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 1176 "prog_io_util.m"
                MR_String parse_tree__prog_io_util__V_39_39;
#line 1176 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));
#line 1176 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_41_41;
#line 1176 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_42_42;
#line 1176 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 2)));
#line 1176 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_17_17;

#line 1176 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_38_38)) == (MR_mktag((MR_Integer) 0)));
#line 1176 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1176 "prog_io_util.m"
                  {
#line 1176 "prog_io_util.m"
                    parse_tree__prog_io_util__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_38_38, (MR_Integer) 0)));
#line 1176 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_39_39, (MR_String) "!") == 0);
#line 1176 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1176 "prog_io_util.m"
                      {
#line 1176 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 1176 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1176 "prog_io_util.m"
                          {
#line 1176 "prog_io_util.m"
                            parse_tree__prog_io_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_40_40, (MR_Integer) 0)));
#line 1176 "prog_io_util.m"
                            parse_tree__prog_io_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_40_40, (MR_Integer) 1)));
#line 1176 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1176 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1176 "prog_io_util.m"
                              {
#line 1176 "prog_io_util.m"
                                parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_41_41)) == (MR_mktag((MR_Integer) 1)));
#line 1176 "prog_io_util.m"
                                if (parse_tree__prog_io_util__succeeded)
#line 1176 "prog_io_util.m"
                                  {
#line 1176 "prog_io_util.m"
                                    parse_tree__prog_io_util__SV0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_41_41, (MR_Integer) 0)));
#line 1176 "prog_io_util.m"
                                    parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_41_41, (MR_Integer) 1)));
#line 1177 "prog_io_util.m"
                                    {
#line 1177 "prog_io_util.m"
                                      parse_tree__prog_io_util__VarKind_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1177 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarKind_15, 0) = ((MR_Box) (parse_tree__prog_io_util__SV0_16));
#line 1177 "prog_io_util.m"
                                    }
#line 1177 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1176 "prog_io_util.m"
                                  }
#line 1176 "prog_io_util.m"
                              }
#line 1176 "prog_io_util.m"
                          }
#line 1176 "prog_io_util.m"
                      }
#line 1176 "prog_io_util.m"
                  }
#line 1176 "prog_io_util.m"
              }
#line 1175 "prog_io_util.m"
            else
#line 1173 "prog_io_util.m"
              {
#line 1173 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 1173 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));

#line 1174 "prog_io_util.m"
                {
#line 1174 "prog_io_util.m"
                  parse_tree__prog_io_util__VarKind_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1174 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__VarKind_15, 0) = ((MR_Box) (parse_tree__prog_io_util__V0_13));
#line 1174 "prog_io_util.m"
                }
#line 1173 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1173 "prog_io_util.m"
              }
#line 1209 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1181 "prog_io_util.m"
              {
#line 1181 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__MaybeVarsTail_19;

#line 1180 "prog_io_util.m"
                {
#line 1180 "prog_io_util.m"
                  parse_tree__prog_io_util__parse_quantifier_vars_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_58, parse_tree__prog_io_util__TailTerm_11, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__MaybeVarsTail_19);
                }
#line 1205 "prog_io_util.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeVarsTail_19)) == (MR_mktag((MR_Integer) 0))))
#line 1207 "prog_io_util.m"
                  *parse_tree__prog_io_util__MaybeVars_8 = parse_tree__prog_io_util__MaybeVarsTail_19;
#line 1205 "prog_io_util.m"
                else
#line 1183 "prog_io_util.m"
                  {
#line 1183 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__TailVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeVarsTail_19, (MR_Integer) 0)));
#line 1183 "prog_io_util.m"
                    MR_Word parse_tree__prog_io_util__TailStateVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeVarsTail_19, (MR_Integer) 1)));

#line 1194 "prog_io_util.m"
                    if (((MR_tag((MR_Word) parse_tree__prog_io_util__VarKind_15)) == (MR_mktag((MR_Integer) 0))))
#line 1185 "prog_io_util.m"
                      {
#line 1185 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__V_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__VarKind_15, (MR_Integer) 0)));
#line 1186 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TypeInfo_60_60;

#line 17733 "parse_tree.prog_io_util.c"
                        {
#line 17735 "parse_tree.prog_io_util.c"
                          parse_tree__prog_io_util__TypeInfo_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 17737 "parse_tree.prog_io_util.c"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_60_60, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 17739 "parse_tree.prog_io_util.c"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_60_60, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_58));
#line 17741 "parse_tree.prog_io_util.c"
                        }
#line 1186 "prog_io_util.m"
                        {
#line 1186 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_58, parse_tree__prog_io_util__TypeInfo_60_60, parse_tree__prog_io_util__V_22, parse_tree__prog_io_util__TailVars_20);
                        }
#line 1190 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1188 "prog_io_util.m"
                          {
#line 1188 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Spec_23;
#line 1188 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_45_45;

#line 1187 "prog_io_util.m"
                            {
#line 1187 "prog_io_util.m"
                              parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_58, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_23);
                            }
#line 1189 "prog_io_util.m"
                            {
#line 1189 "prog_io_util.m"
                              parse_tree__prog_io_util__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1189 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_23));
#line 1189 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1189 "prog_io_util.m"
                            }
#line 1189 "prog_io_util.m"
                            {
#line 1189 "prog_io_util.m"
                              MR_Word base;
#line 1189 "prog_io_util.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1189 "prog_io_util.m"
                              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1189 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_45_45));
#line 1189 "prog_io_util.m"
                            }
#line 1188 "prog_io_util.m"
                          }
#line 1190 "prog_io_util.m"
                        else
#line 1191 "prog_io_util.m"
                          {
#line 1191 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Vars_24;

#line 1191 "prog_io_util.m"
                            {
#line 1191 "prog_io_util.m"
                              parse_tree__prog_io_util__Vars_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1191 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_24, 0) = ((MR_Box) (parse_tree__prog_io_util__V_22));
#line 1191 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_24, 1) = ((MR_Box) (parse_tree__prog_io_util__TailVars_20));
#line 1191 "prog_io_util.m"
                            }
#line 1192 "prog_io_util.m"
                            {
#line 1192 "prog_io_util.m"
                              MR_Word base;
#line 1192 "prog_io_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "prog_io_util.m"
                              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1192 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Vars_24));
#line 1192 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_21));
#line 1192 "prog_io_util.m"
                            }
#line 1191 "prog_io_util.m"
                          }
#line 1185 "prog_io_util.m"
                      }
#line 1194 "prog_io_util.m"
                    else
#line 1195 "prog_io_util.m"
                      {
#line 1195 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__SV_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__VarKind_15, (MR_Integer) 0)));
#line 1196 "prog_io_util.m"
                        MR_Word parse_tree__prog_io_util__TypeInfo_62_62;

#line 17830 "parse_tree.prog_io_util.c"
                        {
#line 17832 "parse_tree.prog_io_util.c"
                          parse_tree__prog_io_util__TypeInfo_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 17834 "parse_tree.prog_io_util.c"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_62_62, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 17836 "parse_tree.prog_io_util.c"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_62_62, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_58));
#line 17838 "parse_tree.prog_io_util.c"
                        }
#line 1196 "prog_io_util.m"
                        {
#line 1196 "prog_io_util.m"
                          parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_58, parse_tree__prog_io_util__TypeInfo_62_62, parse_tree__prog_io_util__SV_25, parse_tree__prog_io_util__TailStateVars_21);
                        }
#line 1200 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1198 "prog_io_util.m"
                          {
#line 1198 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_43_43;
#line 1198 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Spec_53;
#line 1198 "prog_io_util.m"
                            MR_String parse_tree__prog_io_util__TermStr_67;
#line 1198 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__Pieces_68;
#line 1198 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_69_69;
#line 1198 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_71_71;
#line 1198 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_74_74;
#line 1198 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_75_75;
#line 1198 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_84_84;
#line 1198 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_85_85;
#line 1198 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_86_86;
#line 1198 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_87_87;
#line 1198 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__V_88_88;

#line 1339 "prog_io_util.m"
                            {
#line 1339 "prog_io_util.m"
                              parse_tree__prog_io_util__TermStr_67 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_util__TypeInfo_for_T_58, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10);
                            }
#line 1341 "prog_io_util.m"
                            {
#line 1341 "prog_io_util.m"
                              parse_tree__prog_io_util__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1341 "prog_io_util.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1341 "prog_io_util.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_util__V_75_75, 1) = ((MR_Box) (parse_tree__prog_io_util__TermStr_67));
#line 1341 "prog_io_util.m"
                            }
#line 1341 "prog_io_util.m"
                            {
#line 1341 "prog_io_util.m"
                              parse_tree__prog_io_util__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1341 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_74_74, 0) = ((MR_Box) (parse_tree__prog_io_util__V_75_75));
#line 1341 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_1[11])));
#line 1341 "prog_io_util.m"
                            }
#line 1341 "prog_io_util.m"
                            {
#line 1341 "prog_io_util.m"
                              parse_tree__prog_io_util__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1341 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_71_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_util_scalar_common_1[15])));
#line 1341 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_71_71, 1) = ((MR_Box) (parse_tree__prog_io_util__V_74_74));
#line 1341 "prog_io_util.m"
                            }
#line 1340 "prog_io_util.m"
                            {
#line 1340 "prog_io_util.m"
                              parse_tree__prog_io_util__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1340 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_69_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1340 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_69_69, 1) = ((MR_Box) (parse_tree__prog_io_util__V_71_71));
#line 1340 "prog_io_util.m"
                            }
#line 1340 "prog_io_util.m"
                            {
#line 1340 "prog_io_util.m"
                              parse_tree__prog_io_util__Pieces_68 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__V_69_69);
                            }
#line 1343 "prog_io_util.m"
                            {
#line 1343 "prog_io_util.m"
                              parse_tree__prog_io_util__V_86_86 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_util__TypeInfo_for_T_58, parse_tree__prog_io_util__HeadTerm_10);
                            }
#line 1343 "prog_io_util.m"
                            {
#line 1343 "prog_io_util.m"
                              parse_tree__prog_io_util__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1343 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_88_88, 0) = ((MR_Box) (parse_tree__prog_io_util__Pieces_68));
#line 1343 "prog_io_util.m"
                            }
#line 1343 "prog_io_util.m"
                            {
#line 1343 "prog_io_util.m"
                              parse_tree__prog_io_util__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1343 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_87_87, 0) = ((MR_Box) (parse_tree__prog_io_util__V_88_88));
#line 1343 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1343 "prog_io_util.m"
                            }
#line 1343 "prog_io_util.m"
                            {
#line 1343 "prog_io_util.m"
                              parse_tree__prog_io_util__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1343 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_85_85, 0) = ((MR_Box) (parse_tree__prog_io_util__V_86_86));
#line 1343 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_85_85, 1) = ((MR_Box) (parse_tree__prog_io_util__V_87_87));
#line 1343 "prog_io_util.m"
                            }
#line 1343 "prog_io_util.m"
                            {
#line 1343 "prog_io_util.m"
                              parse_tree__prog_io_util__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1343 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io_util__V_85_85));
#line 1343 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1343 "prog_io_util.m"
                            }
#line 1342 "prog_io_util.m"
                            {
#line 1342 "prog_io_util.m"
                              parse_tree__prog_io_util__Spec_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1342 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1342 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1342 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Spec_53, 2) = ((MR_Box) (parse_tree__prog_io_util__V_84_84));
#line 1342 "prog_io_util.m"
                            }
#line 1199 "prog_io_util.m"
                            {
#line 1199 "prog_io_util.m"
                              parse_tree__prog_io_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1199 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_53));
#line 1199 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1199 "prog_io_util.m"
                            }
#line 1199 "prog_io_util.m"
                            {
#line 1199 "prog_io_util.m"
                              MR_Word base;
#line 1199 "prog_io_util.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1199 "prog_io_util.m"
                              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1199 "prog_io_util.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_43_43));
#line 1199 "prog_io_util.m"
                            }
#line 1198 "prog_io_util.m"
                          }
#line 1200 "prog_io_util.m"
                        else
#line 1201 "prog_io_util.m"
                          {
#line 1201 "prog_io_util.m"
                            MR_Word parse_tree__prog_io_util__StateVars_26;

#line 1201 "prog_io_util.m"
                            {
#line 1201 "prog_io_util.m"
                              parse_tree__prog_io_util__StateVars_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1201 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__StateVars_26, 0) = ((MR_Box) (parse_tree__prog_io_util__SV_25));
#line 1201 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__StateVars_26, 1) = ((MR_Box) (parse_tree__prog_io_util__TailStateVars_21));
#line 1201 "prog_io_util.m"
                            }
#line 1202 "prog_io_util.m"
                            {
#line 1202 "prog_io_util.m"
                              MR_Word base;
#line 1202 "prog_io_util.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1202 "prog_io_util.m"
                              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1202 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__TailVars_20));
#line 1202 "prog_io_util.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__StateVars_26));
#line 1202 "prog_io_util.m"
                            }
#line 1201 "prog_io_util.m"
                          }
#line 1195 "prog_io_util.m"
                      }
#line 1183 "prog_io_util.m"
                  }
#line 1181 "prog_io_util.m"
              }
#line 1209 "prog_io_util.m"
            else
#line 1211 "prog_io_util.m"
              {
#line 1211 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_48_48;
#line 1211 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Spec_56;

#line 1210 "prog_io_util.m"
                {
#line 1210 "prog_io_util.m"
                  parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_58, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "variable or state variable", parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_56);
                }
#line 1212 "prog_io_util.m"
                {
#line 1212 "prog_io_util.m"
                  parse_tree__prog_io_util__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1212 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_56));
#line 1212 "prog_io_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1212 "prog_io_util.m"
                }
#line 1212 "prog_io_util.m"
                {
#line 1212 "prog_io_util.m"
                  MR_Word base;
#line 1212 "prog_io_util.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1212 "prog_io_util.m"
                  *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1212 "prog_io_util.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_48_48));
#line 1212 "prog_io_util.m"
                }
#line 1211 "prog_io_util.m"
              }
#line 1209 "prog_io_util.m"
          }
#line 1214 "prog_io_util.m"
        else
#line 1216 "prog_io_util.m"
          {
#line 1216 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_51_51;
#line 1216 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Spec_57;

#line 1215 "prog_io_util.m"
            {
#line 1215 "prog_io_util.m"
              parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_58, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "list of variables and/or state variables", parse_tree__prog_io_util__Term_5, &parse_tree__prog_io_util__Spec_57);
            }
#line 1217 "prog_io_util.m"
            {
#line 1217 "prog_io_util.m"
              parse_tree__prog_io_util__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1217 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_57));
#line 1217 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1217 "prog_io_util.m"
            }
#line 1217 "prog_io_util.m"
            {
#line 1217 "prog_io_util.m"
              MR_Word base;
#line 1217 "prog_io_util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1217 "prog_io_util.m"
              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1217 "prog_io_util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_51_51));
#line 1217 "prog_io_util.m"
            }
#line 1216 "prog_io_util.m"
          }
#line 1214 "prog_io_util.m"
      }
#line 1170 "prog_io_util.m"
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
#line 1133 "prog_io_util.m"
  {
#line 1133 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1131 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_23_23;
#line 1131 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_24_24;
#line 1131 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_25_25;
#line 1131 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_9_9;

#line 1131 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1131 "prog_io_util.m"
      {
#line 1131 "prog_io_util.m"
        parse_tree__prog_io_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 1131 "prog_io_util.m"
        parse_tree__prog_io_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 1131 "prog_io_util.m"
        parse_tree__prog_io_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 1131 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1131 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1131 "prog_io_util.m"
          {
#line 1131 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 1131 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1131 "prog_io_util.m"
              {
#line 1131 "prog_io_util.m"
                parse_tree__prog_io_util__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_23_23, (MR_Integer) 0)));
#line 1131 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_24_24, (MR_String) "[]") == 0);
#line 1131 "prog_io_util.m"
              }
#line 1131 "prog_io_util.m"
          }
#line 1131 "prog_io_util.m"
      }
#line 1133 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1132 "prog_io_util.m"
      {
#line 1132 "prog_io_util.m"
        *parse_tree__prog_io_util__MaybeVars_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_util_scalar_common_3[0]);
#line 1132 "prog_io_util.m"
      }
#line 1133 "prog_io_util.m"
    else
#line 1157 "prog_io_util.m"
      {
#line 1157 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__HeadTerm_10;
#line 1157 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__TailTerm_11;
#line 1133 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_27_27;
#line 1133 "prog_io_util.m"
        MR_String parse_tree__prog_io_util__V_28_28;
#line 1133 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_29_29;
#line 1133 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_30_30;
#line 1133 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_31_31;
#line 1133 "prog_io_util.m"
        MR_Word parse_tree__prog_io_util__V_12_12;

#line 1133 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1133 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1133 "prog_io_util.m"
          {
#line 1133 "prog_io_util.m"
            parse_tree__prog_io_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 0)));
#line 1133 "prog_io_util.m"
            parse_tree__prog_io_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 1)));
#line 1133 "prog_io_util.m"
            parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__Term_5, (MR_Integer) 2)));
#line 1133 "prog_io_util.m"
            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_27_27)) == (MR_mktag((MR_Integer) 0)));
#line 1133 "prog_io_util.m"
            if (parse_tree__prog_io_util__succeeded)
#line 1133 "prog_io_util.m"
              {
#line 1133 "prog_io_util.m"
                parse_tree__prog_io_util__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_27_27, (MR_Integer) 0)));
#line 1133 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_28_28, (MR_String) "[|]") == 0);
#line 1133 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1133 "prog_io_util.m"
                  {
#line 1133 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 1133 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1133 "prog_io_util.m"
                      {
#line 1133 "prog_io_util.m"
                        parse_tree__prog_io_util__HeadTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, (MR_Integer) 0)));
#line 1133 "prog_io_util.m"
                        parse_tree__prog_io_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_29_29, (MR_Integer) 1)));
#line 1133 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 1133 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1133 "prog_io_util.m"
                          {
#line 1133 "prog_io_util.m"
                            parse_tree__prog_io_util__TailTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_30_30, (MR_Integer) 0)));
#line 1133 "prog_io_util.m"
                            parse_tree__prog_io_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_30_30, (MR_Integer) 1)));
#line 1133 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1133 "prog_io_util.m"
                          }
#line 1133 "prog_io_util.m"
                      }
#line 1133 "prog_io_util.m"
                  }
#line 1133 "prog_io_util.m"
              }
#line 1133 "prog_io_util.m"
          }
#line 1157 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1151 "prog_io_util.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io_util__HeadTerm_10)) == (MR_mktag((MR_Integer) 0))))
#line 1152 "prog_io_util.m"
            {
#line 1152 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_33_33;
#line 1152 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__Spec_40;

#line 1153 "prog_io_util.m"
              {
#line 1153 "prog_io_util.m"
                parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_42, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "variable", parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_40);
              }
#line 1155 "prog_io_util.m"
              {
#line 1155 "prog_io_util.m"
                parse_tree__prog_io_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1155 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_40));
#line 1155 "prog_io_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1155 "prog_io_util.m"
              }
#line 1155 "prog_io_util.m"
              {
#line 1155 "prog_io_util.m"
                MR_Word base;
#line 1155 "prog_io_util.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1155 "prog_io_util.m"
                *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1155 "prog_io_util.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_33_33));
#line 1155 "prog_io_util.m"
              }
#line 1152 "prog_io_util.m"
            }
#line 1151 "prog_io_util.m"
          else
#line 1135 "prog_io_util.m"
            {
#line 1135 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__HeadVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 0)));
#line 1135 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__MaybeVarsTail_15;
#line 1135 "prog_io_util.m"
              MR_Word parse_tree__prog_io_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__HeadTerm_10, (MR_Integer) 1)));

#line 1136 "prog_io_util.m"
              {
#line 1136 "prog_io_util.m"
                parse_tree__prog_io_util__parse_vars_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_42, parse_tree__prog_io_util__TailTerm_11, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__ContextPieces_7, &parse_tree__prog_io_util__MaybeVarsTail_15);
              }
#line 1147 "prog_io_util.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io_util__MaybeVarsTail_15)) == (MR_mktag((MR_Integer) 0))))
#line 1149 "prog_io_util.m"
                *parse_tree__prog_io_util__MaybeVars_8 = parse_tree__prog_io_util__MaybeVarsTail_15;
#line 1147 "prog_io_util.m"
              else
#line 1138 "prog_io_util.m"
                {
#line 1138 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__TailVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__MaybeVarsTail_15, (MR_Integer) 0)));
#line 1139 "prog_io_util.m"
                  MR_Word parse_tree__prog_io_util__TypeInfo_44_44;

#line 18345 "parse_tree.prog_io_util.c"
                  {
#line 18347 "parse_tree.prog_io_util.c"
                    parse_tree__prog_io_util__TypeInfo_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 18349 "parse_tree.prog_io_util.c"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_44_44, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 18351 "parse_tree.prog_io_util.c"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__TypeInfo_44_44, 1) = ((MR_Box) (parse_tree__prog_io_util__TypeInfo_for_T_42));
#line 18353 "parse_tree.prog_io_util.c"
                  }
#line 1139 "prog_io_util.m"
                  {
#line 1139 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_42, parse_tree__prog_io_util__TypeInfo_44_44, parse_tree__prog_io_util__HeadVar_13, parse_tree__prog_io_util__TailVars_16);
                  }
#line 1143 "prog_io_util.m"
                  if (parse_tree__prog_io_util__succeeded)
#line 1141 "prog_io_util.m"
                    {
#line 1141 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__Spec_17;
#line 1141 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__V_35_35;

#line 1140 "prog_io_util.m"
                      {
#line 1140 "prog_io_util.m"
                        parse_tree__prog_io_util__generate_repeated_var_msg_4_p_0(parse_tree__prog_io_util__TypeInfo_for_T_42, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, parse_tree__prog_io_util__HeadTerm_10, &parse_tree__prog_io_util__Spec_17);
                      }
#line 1142 "prog_io_util.m"
                      {
#line 1142 "prog_io_util.m"
                        parse_tree__prog_io_util__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1142 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_17));
#line 1142 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1142 "prog_io_util.m"
                      }
#line 1142 "prog_io_util.m"
                      {
#line 1142 "prog_io_util.m"
                        MR_Word base;
#line 1142 "prog_io_util.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1142 "prog_io_util.m"
                        *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1142 "prog_io_util.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_35_35));
#line 1142 "prog_io_util.m"
                      }
#line 1141 "prog_io_util.m"
                    }
#line 1143 "prog_io_util.m"
                  else
#line 1144 "prog_io_util.m"
                    {
#line 1144 "prog_io_util.m"
                      MR_Word parse_tree__prog_io_util__Vars_18;

#line 1144 "prog_io_util.m"
                      {
#line 1144 "prog_io_util.m"
                        parse_tree__prog_io_util__Vars_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1144 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_18, 0) = ((MR_Box) (parse_tree__prog_io_util__HeadVar_13));
#line 1144 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Vars_18, 1) = ((MR_Box) (parse_tree__prog_io_util__TailVars_16));
#line 1144 "prog_io_util.m"
                      }
#line 1145 "prog_io_util.m"
                      {
#line 1145 "prog_io_util.m"
                        MR_Word base;
#line 1145 "prog_io_util.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1145 "prog_io_util.m"
                        *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1145 "prog_io_util.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Vars_18));
#line 1145 "prog_io_util.m"
                      }
#line 1144 "prog_io_util.m"
                    }
#line 1138 "prog_io_util.m"
                }
#line 1135 "prog_io_util.m"
            }
#line 1157 "prog_io_util.m"
        else
#line 1159 "prog_io_util.m"
          {
#line 1159 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__V_38_38;
#line 1159 "prog_io_util.m"
            MR_Word parse_tree__prog_io_util__Spec_41;

#line 1158 "prog_io_util.m"
            {
#line 1158 "prog_io_util.m"
              parse_tree__prog_io_util__generate_unexpected_term_message_5_p_0(parse_tree__prog_io_util__TypeInfo_for_T_42, parse_tree__prog_io_util__ContextPieces_7, parse_tree__prog_io_util__VarSet_6, (MR_String) "list of variables", parse_tree__prog_io_util__Term_5, &parse_tree__prog_io_util__Spec_41);
            }
#line 1160 "prog_io_util.m"
            {
#line 1160 "prog_io_util.m"
              parse_tree__prog_io_util__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1160 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io_util__Spec_41));
#line 1160 "prog_io_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1160 "prog_io_util.m"
            }
#line 1160 "prog_io_util.m"
            {
#line 1160 "prog_io_util.m"
              MR_Word base;
#line 1160 "prog_io_util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1160 "prog_io_util.m"
              *parse_tree__prog_io_util__MaybeVars_8 = base;
#line 1160 "prog_io_util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_util__V_38_38));
#line 1160 "prog_io_util.m"
            }
#line 1159 "prog_io_util.m"
          }
#line 1157 "prog_io_util.m"
      }
#line 1133 "prog_io_util.m"
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
#line 1124 "prog_io_util.m"
  {
#line 1124 "prog_io_util.m"
    MR_bool parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 1124 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_20_20;
#line 1124 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_21_21;
#line 1124 "prog_io_util.m"
    MR_String parse_tree__prog_io_util__V_22_22;
#line 1124 "prog_io_util.m"
    MR_Word parse_tree__prog_io_util__V_19_19;

#line 1124 "prog_io_util.m"
    if (parse_tree__prog_io_util__succeeded)
#line 1124 "prog_io_util.m"
      {
#line 1124 "prog_io_util.m"
        parse_tree__prog_io_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1124 "prog_io_util.m"
        parse_tree__prog_io_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1124 "prog_io_util.m"
        parse_tree__prog_io_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1124 "prog_io_util.m"
        parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_21_21)) == (MR_mktag((MR_Integer) 0)));
#line 1124 "prog_io_util.m"
        if (parse_tree__prog_io_util__succeeded)
#line 1124 "prog_io_util.m"
          {
#line 1124 "prog_io_util.m"
            parse_tree__prog_io_util__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_util__V_21_21, (MR_Integer) 0)));
#line 1124 "prog_io_util.m"
            if ((parse_tree__prog_io_util__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1124 "prog_io_util.m"
              {
#line 1124 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_22_22, (MR_String) "[]") == 0);
#line 1124 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1124 "prog_io_util.m"
                  {
#line 1124 "prog_io_util.m"
                    *parse_tree__prog_io_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1124 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1124 "prog_io_util.m"
                  }
#line 1124 "prog_io_util.m"
              }
#line 1124 "prog_io_util.m"
            else
#line 1126 "prog_io_util.m"
              {
#line 1126 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Head_7;
#line 1126 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Tail_8;
#line 1126 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Var_10;
#line 1126 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__Vars_11;
#line 1126 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_16_16;
#line 1126 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_17_17;
#line 1127 "prog_io_util.m"
                MR_Word parse_tree__prog_io_util__V_12_12;

#line 1125 "prog_io_util.m"
                parse_tree__prog_io_util__succeeded = (strcmp(parse_tree__prog_io_util__V_22_22, (MR_String) "[|]") == 0);
#line 1126 "prog_io_util.m"
                if (parse_tree__prog_io_util__succeeded)
#line 1126 "prog_io_util.m"
                  {
#line 1125 "prog_io_util.m"
                    parse_tree__prog_io_util__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, (MR_Integer) 0)));
#line 1125 "prog_io_util.m"
                    parse_tree__prog_io_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_20_20, (MR_Integer) 1)));
#line 1125 "prog_io_util.m"
                    parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 1125 "prog_io_util.m"
                    if (parse_tree__prog_io_util__succeeded)
#line 1125 "prog_io_util.m"
                      {
#line 1125 "prog_io_util.m"
                        parse_tree__prog_io_util__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 0)));
#line 1125 "prog_io_util.m"
                        parse_tree__prog_io_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__V_16_16, (MR_Integer) 1)));
#line 1125 "prog_io_util.m"
                        parse_tree__prog_io_util__succeeded = (parse_tree__prog_io_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1126 "prog_io_util.m"
                        if (parse_tree__prog_io_util__succeeded)
#line 1126 "prog_io_util.m"
                          {
#line 1127 "prog_io_util.m"
                            parse_tree__prog_io_util__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_util__Head_7)) == (MR_mktag((MR_Integer) 1)));
#line 1127 "prog_io_util.m"
                            if (parse_tree__prog_io_util__succeeded)
#line 1127 "prog_io_util.m"
                              {
#line 1127 "prog_io_util.m"
                                parse_tree__prog_io_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Head_7, (MR_Integer) 0)));
#line 1127 "prog_io_util.m"
                                parse_tree__prog_io_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_util__Head_7, (MR_Integer) 1)));
#line 1128 "prog_io_util.m"
                                {
#line 1128 "prog_io_util.m"
                                  parse_tree__prog_io_util__succeeded = parse_tree__prog_io_util__parse_list_of_vars_2_p_0(parse_tree__prog_io_util__TypeInfo_for_T_18, parse_tree__prog_io_util__Tail_8, &parse_tree__prog_io_util__Vars_11);
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
                                      *parse_tree__prog_io_util__HeadVar__2_2 = base;
#line 1126 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_util__Var_10));
#line 1126 "prog_io_util.m"
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_util__Vars_11));
#line 1126 "prog_io_util.m"
                                    }
#line 1126 "prog_io_util.m"
                                    parse_tree__prog_io_util__succeeded = MR_TRUE;
#line 1126 "prog_io_util.m"
                                  }
#line 1127 "prog_io_util.m"
                              }
#line 1126 "prog_io_util.m"
                          }
#line 1125 "prog_io_util.m"
                      }
#line 1126 "prog_io_util.m"
                  }
#line 1126 "prog_io_util.m"
              }
#line 1124 "prog_io_util.m"
          }
#line 1124 "prog_io_util.m"
      }
#line 1124 "prog_io_util.m"
    return parse_tree__prog_io_util__succeeded;
#line 1124 "prog_io_util.m"
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
	MR_register_type_ctor_info(&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_known_inst_kind_1);
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
