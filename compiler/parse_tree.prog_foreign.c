/*
** Automatically generated from `prog_foreign.m'
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


/* :- module parse_tree.prog_foreign. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_foreign__init
ENDINIT
*/

#include "parse_tree.prog_foreign.mih"


#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
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
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "solutions.mih"
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
#include "parse_tree.file_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 312 "prog_foreign.m"
struct parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0_s {
#line 312 "prog_foreign.m"
  MR_Box * parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__wrapper_arg_1;
#line 312 "prog_foreign.m"
  MR_Cont parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont;
#line 312 "prog_foreign.m"
  void * parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont_env_ptr;
#line 312 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__conv0_HeadVar__1_1;
#line 312 "prog_foreign.m"
};


#line 112 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_body_code_0_0[3];

#line 115 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_body_code_0_0[3];

#line 118 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_body_code_0_0;

#line 121 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_body_code_0_0[1];

#line 124 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_body_code_0[1];

#line 127 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_body_code_0[1];

#line 130 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_body_code_0[1];

#line 133 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__cord__ti_cord_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;

#line 136 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_decl_code_0_0[4];

#line 139 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_decl_code_0_0[4];

#line 142 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_decl_code_0_0;

#line 145 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_decl_code_0_0[1];

#line 148 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_decl_code_0[1];

#line 151 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_decl_code_0[1];

#line 154 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_decl_code_0[1];

#line 157 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__cord__ti_cord_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;

#line 160 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_export_decl_0_0[4];

#line 163 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_export_decl_0_0[4];

#line 166 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decl_0_0;

#line 169 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decl_0_0[1];

#line 172 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decl_0[1];

#line 175 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_export_decl_0[1];

#line 178 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_decl_0[1];

#line 181 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;

#line 184 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0;

#line 187 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_export_decls_0_0[2];

#line 190 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_export_decls_0_0[2];

#line 193 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decls_0_0;

#line 196 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decls_0_0[1];

#line 199 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decls_0[1];

#line 202 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_export_decls_0[1];

#line 205 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_decls_0[1];

#line 208 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_defn_0[1];

#line 211 "parse_tree.prog_foreign.c"
static const MR_NotagFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__notag_functor_desc_foreign_export_defn_0;

#line 214 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0;

#line 217 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_code_0_0_10001(
#line 220 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 222 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 225 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_code_0_0_10001(
#line 228 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 230 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 232 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 235 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_codes_0_0_10001(
#line 238 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 240 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 243 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_codes_0_0_10001(
#line 246 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 248 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 250 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 253 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_code_0_0_10001(
#line 256 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 258 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 261 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_code_0_0_10001(
#line 264 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 266 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 268 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 271 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_codes_0_0_10001(
#line 274 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 276 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 279 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_codes_0_0_10001(
#line 282 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 284 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 286 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 289 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decl_0_0_10001(
#line 292 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 294 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 297 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decl_0_0_10001(
#line 300 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 302 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 304 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 307 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decls_0_0_10001(
#line 310 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 312 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 315 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decls_0_0_10001(
#line 318 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 320 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 322 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 325 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_defn_0_0_10001(
#line 328 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 330 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 333 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_defn_0_0_10001(
#line 336 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 338 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 340 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 343 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_defns_0_0_10001(
#line 346 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 348 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 351 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_defns_0_0_10001(
#line 354 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 356 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 358 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 426 "prog_foreign.m"
static MR_String MR_CALL 
parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_f_0(
#line 426 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__String_3);

#line 317 "prog_foreign.m"
static void MR_CALL 
parse_tree__prog_foreign__valid_foreign_language_1_p_1(
#line 317 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 317 "prog_foreign.m"
  MR_Cont parse_tree__prog_foreign__cont,
#line 317 "prog_foreign.m"
  void * parse_tree__prog_foreign__cont_env_ptr);

#line 312 "prog_foreign.m"
static void MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0_1(
#line 312 "prog_foreign.m"
  void * parse_tree__prog_foreign__env_ptr_arg);

#line 312 "prog_foreign.m"
static void MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0_2(
#line 312 "prog_foreign.m"
  MR_Box parse_tree__prog_foreign__closure_arg,
#line 312 "prog_foreign.m"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 312 "prog_foreign.m"
  MR_Cont parse_tree__prog_foreign__cont,
#line 312 "prog_foreign.m"
  void * parse_tree__prog_foreign__cont_env_ptr);


static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_1[5][2];

static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_2[1][1];

static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_3[1][4];

static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_4[1][3];


#line 401 "prog_foreign.m"
/* sealed */ struct parse_tree__prog_foreign__vector_common_type_5_0_s {
#line 401 "prog_foreign.m"
  const MR_String parse_tree__prog_foreign__vector_common_type_5_0__vct_5_f_0;
#line 401 "prog_foreign.m"
};

static /* final */ const struct parse_tree__prog_foreign__vector_common_type_5_0_s parse_tree__prog_foreign_vector_common_5[16];

#line 319 "prog_foreign.m"
/* sealed */ struct parse_tree__prog_foreign__vector_common_type_6_0_s {
#line 319 "prog_foreign.m"
  const MR_Word parse_tree__prog_foreign__vector_common_type_6_0__vct_6_f_0;
#line 319 "prog_foreign.m"
};

static /* final */ const struct parse_tree__prog_foreign__vector_common_type_6_0_s parse_tree__prog_foreign_vector_common_6[4];



static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "mercury"))
  },
};

static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_3[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_4[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_foreign_scalar_common_3[0])),
    ((MR_Box) (parse_tree__prog_foreign__all_foreign_languages_0_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};


static /* final */ const struct parse_tree__prog_foreign__vector_common_type_5_0_s parse_tree__prog_foreign_vector_common_5[16] = {
  /* row 0 */   {     (MR_String) "f_cut" },
  /* row 1 */   {     (MR_String) "f_times" },
  /* row 2 */   {     (MR_String) "f_plus" },
  /* row 3 */   {     (MR_String) "f_comma" },
  /* row 4 */   {     (MR_String) "f_minus" },
  /* row 5 */   {     (MR_String) "f_slash" },
  /* row 6 */   {     (MR_String) "f_semicolon" },
  /* row 7 */   {     (MR_String) "f_less_than" },
  /* row 8 */   {     (MR_String) "f_equal" },
  /* row 9 */   {     (MR_String) "f_less_or_equal" },
  /* row 10 */   {     (MR_String) "f_greater_than" },
  /* row 11 */   {     (MR_String) "f_greater_or_equal" },
  /* row 12 */   {     (MR_String) "f_nil" },
  /* row 13 */   {     (MR_String) "f_cons" },
  /* row 14 */   {     (MR_String) "f_not_equal" },
  /* row 15 */   {     (MR_String) "f_tuple" },
};

static /* final */ const struct parse_tree__prog_foreign__vector_common_type_6_0_s parse_tree__prog_foreign_vector_common_6[4] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 2 },
  /* row 2 */   {     (MR_Integer) 1 },
  /* row 3 */   {     (MR_Integer) 3 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 514 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_body_code_0_0[3] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_literal_or_include_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 521 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_body_code_0_0[3] = {
  (MR_String) "fbody_lang",
  (MR_String) "fbody_code",
  (MR_String) "fbody_context"
};

#line 528 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_body_code_0_0 = {
  (MR_String) "foreign_body_code",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_body_code_0_0,
  parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_body_code_0_0,
  NULL,
  NULL
};

#line 543 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_body_code_0_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_body_code_0_0
};

#line 548 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_body_code_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_body_code_0_0
  }
};

#line 557 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_body_code_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_body_code_0_0
};

#line 562 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_body_code_0[1] = {
  (MR_Integer) 0
};

#line 567 "parse_tree.prog_foreign.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_foreign____Unify____foreign_body_code_0_0_10001)),
  ((MR_Box) (parse_tree__prog_foreign____Compare____foreign_body_code_0_0_10001)),
  (MR_String) "parse_tree.prog_foreign",
  (MR_String) "foreign_body_code",
  {     parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_body_code_0 },
  {     parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_body_code_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_body_code_0
};

#line 584 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__cord__ti_cord_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0
  }
};

#line 592 "parse_tree.prog_foreign.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_codes_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_foreign____Unify____foreign_body_codes_0_0_10001)),
  ((MR_Box) (parse_tree__prog_foreign____Compare____foreign_body_codes_0_0_10001)),
  (MR_String) "parse_tree.prog_foreign",
  (MR_String) "foreign_body_codes",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__prog_foreign__cord__ti_cord_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 609 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_decl_code_0_0[4] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_decl_is_local_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_literal_or_include_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 617 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_decl_code_0_0[4] = {
  (MR_String) "fdecl_lang",
  (MR_String) "fdecl_is_local",
  (MR_String) "fdecl_code",
  (MR_String) "fdecl_context"
};

#line 625 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_decl_code_0_0 = {
  (MR_String) "foreign_decl_code",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_decl_code_0_0,
  parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_decl_code_0_0,
  NULL,
  NULL
};

#line 640 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_decl_code_0_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_decl_code_0_0
};

#line 645 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_decl_code_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_decl_code_0_0
  }
};

#line 654 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_decl_code_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_decl_code_0_0
};

#line 659 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_decl_code_0[1] = {
  (MR_Integer) 0
};

#line 664 "parse_tree.prog_foreign.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_foreign____Unify____foreign_decl_code_0_0_10001)),
  ((MR_Box) (parse_tree__prog_foreign____Compare____foreign_decl_code_0_0_10001)),
  (MR_String) "parse_tree.prog_foreign",
  (MR_String) "foreign_decl_code",
  {     parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_decl_code_0 },
  {     parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_decl_code_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_decl_code_0
};

#line 681 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__cord__ti_cord_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0
  }
};

#line 689 "parse_tree.prog_foreign.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_codes_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_foreign____Unify____foreign_decl_codes_0_0_10001)),
  ((MR_Box) (parse_tree__prog_foreign____Compare____foreign_decl_codes_0_0_10001)),
  (MR_String) "parse_tree.prog_foreign",
  (MR_String) "foreign_decl_codes",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__prog_foreign__cord__ti_cord_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 706 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_export_decl_0_0[4] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 714 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_export_decl_0_0[4] = {
  (MR_String) "fexp_decl_lang",
  (MR_String) "fexp_decl_ret_type",
  (MR_String) "fexp_decl_func_name",
  (MR_String) "fexp_decl_arg_decls"
};

#line 722 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decl_0_0 = {
  (MR_String) "foreign_export_decl",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_export_decl_0_0,
  parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_export_decl_0_0,
  NULL,
  NULL
};

#line 737 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decl_0_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decl_0_0
};

#line 742 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decl_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decl_0_0
  }
};

#line 751 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_export_decl_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decl_0_0
};

#line 756 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_decl_0[1] = {
  (MR_Integer) 0
};

#line 761 "parse_tree.prog_foreign.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_foreign____Unify____foreign_export_decl_0_0_10001)),
  ((MR_Box) (parse_tree__prog_foreign____Compare____foreign_export_decl_0_0_10001)),
  (MR_String) "parse_tree.prog_foreign",
  (MR_String) "foreign_export_decl",
  {     parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_export_decl_0 },
  {     parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decl_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_decl_0
};

#line 778 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0
  }
};

#line 786 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0
  }
};

#line 794 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_export_decls_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0
};

#line 800 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_export_decls_0_0[2] = {
  (MR_String) "fexp_decls_codes",
  (MR_String) "fexp_decls_list"
};

#line 806 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decls_0_0 = {
  (MR_String) "foreign_export_decls",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_export_decls_0_0,
  parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_export_decls_0_0,
  NULL,
  NULL
};

#line 821 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decls_0_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decls_0_0
};

#line 826 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decls_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decls_0_0
  }
};

#line 835 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_export_decls_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decls_0_0
};

#line 840 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_decls_0[1] = {
  (MR_Integer) 0
};

#line 845 "parse_tree.prog_foreign.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_decls_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_foreign____Unify____foreign_export_decls_0_0_10001)),
  ((MR_Box) (parse_tree__prog_foreign____Compare____foreign_export_decls_0_0_10001)),
  (MR_String) "parse_tree.prog_foreign",
  (MR_String) "foreign_export_decls",
  {     parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_export_decls_0 },
  {     parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decls_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_decls_0
};

#line 862 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_defn_0[1] = {
  (MR_Integer) 0
};

#line 867 "parse_tree.prog_foreign.c"
static const MR_NotagFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__notag_functor_desc_foreign_export_defn_0 = {
  (MR_String) "foreign_export_defn",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 874 "parse_tree.prog_foreign.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (parse_tree__prog_foreign____Unify____foreign_export_defn_0_0_10001)),
  ((MR_Box) (parse_tree__prog_foreign____Compare____foreign_export_defn_0_0_10001)),
  (MR_String) "parse_tree.prog_foreign",
  (MR_String) "foreign_export_defn",
  {     &parse_tree__prog_foreign__parse_tree__prog_foreign__notag_functor_desc_foreign_export_defn_0 },
  {     &parse_tree__prog_foreign__parse_tree__prog_foreign__notag_functor_desc_foreign_export_defn_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_defn_0
};

#line 891 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0
  }
};

#line 899 "parse_tree.prog_foreign.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_defns_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_foreign____Unify____foreign_export_defns_0_0_10001)),
  ((MR_Box) (parse_tree__prog_foreign____Compare____foreign_export_defns_0_0_10001)),
  (MR_String) "parse_tree.prog_foreign",
  (MR_String) "foreign_export_defns",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 916 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_code_0_0_10001(
#line 919 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 921 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 923 "parse_tree.prog_foreign.c"
{
#line 925 "parse_tree.prog_foreign.c"
  {
#line 927 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 930 "parse_tree.prog_foreign.c"
    {
#line 932 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_body_code_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 935 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 937 "parse_tree.prog_foreign.c"
  }
#line 939 "parse_tree.prog_foreign.c"
}

#line 942 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_code_0_0_10001(
#line 945 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 947 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 949 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 951 "parse_tree.prog_foreign.c"
{
#line 953 "parse_tree.prog_foreign.c"
  {
#line 955 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 958 "parse_tree.prog_foreign.c"
    {
#line 960 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_body_code_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 963 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 965 "parse_tree.prog_foreign.c"
  }
#line 967 "parse_tree.prog_foreign.c"
}

#line 970 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_codes_0_0_10001(
#line 973 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 975 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 977 "parse_tree.prog_foreign.c"
{
#line 979 "parse_tree.prog_foreign.c"
  {
#line 981 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 984 "parse_tree.prog_foreign.c"
    {
#line 986 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_body_codes_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 989 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 991 "parse_tree.prog_foreign.c"
  }
#line 993 "parse_tree.prog_foreign.c"
}

#line 996 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_codes_0_0_10001(
#line 999 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1001 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1003 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1005 "parse_tree.prog_foreign.c"
{
#line 1007 "parse_tree.prog_foreign.c"
  {
#line 1009 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1012 "parse_tree.prog_foreign.c"
    {
#line 1014 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_body_codes_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1017 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1019 "parse_tree.prog_foreign.c"
  }
#line 1021 "parse_tree.prog_foreign.c"
}

#line 1024 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_code_0_0_10001(
#line 1027 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1029 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1031 "parse_tree.prog_foreign.c"
{
#line 1033 "parse_tree.prog_foreign.c"
  {
#line 1035 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1038 "parse_tree.prog_foreign.c"
    {
#line 1040 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_decl_code_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1043 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1045 "parse_tree.prog_foreign.c"
  }
#line 1047 "parse_tree.prog_foreign.c"
}

#line 1050 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_code_0_0_10001(
#line 1053 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1055 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1057 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1059 "parse_tree.prog_foreign.c"
{
#line 1061 "parse_tree.prog_foreign.c"
  {
#line 1063 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1066 "parse_tree.prog_foreign.c"
    {
#line 1068 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_decl_code_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1071 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1073 "parse_tree.prog_foreign.c"
  }
#line 1075 "parse_tree.prog_foreign.c"
}

#line 1078 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_codes_0_0_10001(
#line 1081 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1083 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1085 "parse_tree.prog_foreign.c"
{
#line 1087 "parse_tree.prog_foreign.c"
  {
#line 1089 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1092 "parse_tree.prog_foreign.c"
    {
#line 1094 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_decl_codes_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1097 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1099 "parse_tree.prog_foreign.c"
  }
#line 1101 "parse_tree.prog_foreign.c"
}

#line 1104 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_codes_0_0_10001(
#line 1107 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1109 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1111 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1113 "parse_tree.prog_foreign.c"
{
#line 1115 "parse_tree.prog_foreign.c"
  {
#line 1117 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1120 "parse_tree.prog_foreign.c"
    {
#line 1122 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_decl_codes_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1125 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1127 "parse_tree.prog_foreign.c"
  }
#line 1129 "parse_tree.prog_foreign.c"
}

#line 1132 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decl_0_0_10001(
#line 1135 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1137 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1139 "parse_tree.prog_foreign.c"
{
#line 1141 "parse_tree.prog_foreign.c"
  {
#line 1143 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1146 "parse_tree.prog_foreign.c"
    {
#line 1148 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_export_decl_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1151 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1153 "parse_tree.prog_foreign.c"
  }
#line 1155 "parse_tree.prog_foreign.c"
}

#line 1158 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decl_0_0_10001(
#line 1161 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1163 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1165 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1167 "parse_tree.prog_foreign.c"
{
#line 1169 "parse_tree.prog_foreign.c"
  {
#line 1171 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1174 "parse_tree.prog_foreign.c"
    {
#line 1176 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_export_decl_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1179 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1181 "parse_tree.prog_foreign.c"
  }
#line 1183 "parse_tree.prog_foreign.c"
}

#line 1186 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decls_0_0_10001(
#line 1189 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1191 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1193 "parse_tree.prog_foreign.c"
{
#line 1195 "parse_tree.prog_foreign.c"
  {
#line 1197 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1200 "parse_tree.prog_foreign.c"
    {
#line 1202 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_export_decls_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1205 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1207 "parse_tree.prog_foreign.c"
  }
#line 1209 "parse_tree.prog_foreign.c"
}

#line 1212 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decls_0_0_10001(
#line 1215 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1217 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1219 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1221 "parse_tree.prog_foreign.c"
{
#line 1223 "parse_tree.prog_foreign.c"
  {
#line 1225 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1228 "parse_tree.prog_foreign.c"
    {
#line 1230 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_export_decls_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1233 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1235 "parse_tree.prog_foreign.c"
  }
#line 1237 "parse_tree.prog_foreign.c"
}

#line 1240 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_defn_0_0_10001(
#line 1243 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1245 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1247 "parse_tree.prog_foreign.c"
{
#line 1249 "parse_tree.prog_foreign.c"
  {
#line 1251 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1254 "parse_tree.prog_foreign.c"
    {
#line 1256 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_export_defn_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1259 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1261 "parse_tree.prog_foreign.c"
  }
#line 1263 "parse_tree.prog_foreign.c"
}

#line 1266 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_defn_0_0_10001(
#line 1269 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1271 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1273 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1275 "parse_tree.prog_foreign.c"
{
#line 1277 "parse_tree.prog_foreign.c"
  {
#line 1279 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1282 "parse_tree.prog_foreign.c"
    {
#line 1284 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_export_defn_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1287 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1289 "parse_tree.prog_foreign.c"
  }
#line 1291 "parse_tree.prog_foreign.c"
}

#line 1294 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_defns_0_0_10001(
#line 1297 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1299 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1301 "parse_tree.prog_foreign.c"
{
#line 1303 "parse_tree.prog_foreign.c"
  {
#line 1305 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1308 "parse_tree.prog_foreign.c"
    {
#line 1310 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_export_defns_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1313 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1315 "parse_tree.prog_foreign.c"
  }
#line 1317 "parse_tree.prog_foreign.c"
}

#line 1320 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_defns_0_0_10001(
#line 1323 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1325 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1327 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1329 "parse_tree.prog_foreign.c"
{
#line 1331 "parse_tree.prog_foreign.c"
  {
#line 1333 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1336 "parse_tree.prog_foreign.c"
    {
#line 1338 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_export_defns_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1341 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1343 "parse_tree.prog_foreign.c"
  }
#line 1345 "parse_tree.prog_foreign.c"
}

#line 144 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_f_0(
#line 144 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__Target_7,
#line 144 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__Lang1_8,
#line 144 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__Lang2_9)
#line 144 "prog_foreign.m"
{
#line 285 "prog_foreign.m"
  {
#line 285 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 285 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Prefer_10;

#line 285 "prog_foreign.m"
#line 285 "prog_foreign.m"
    switch (parse_tree__prog_foreign__Target_7) {
#line 285 "prog_foreign.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 285 "prog_foreign.m"
      case (MR_Integer) 0:
#line 289 "prog_foreign.m"
        {
#line 287 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__Lang2_9 == (MR_Integer) 0);
#line 287 "prog_foreign.m"
          if (parse_tree__prog_foreign__succeeded)
#line 287 "prog_foreign.m"
            {
#line 287 "prog_foreign.m"
              parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__Lang1_8 == (MR_Integer) 0);
#line 287 "prog_foreign.m"
              parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 287 "prog_foreign.m"
            }
#line 289 "prog_foreign.m"
          if (parse_tree__prog_foreign__succeeded)
#line 288 "prog_foreign.m"
            parse_tree__prog_foreign__Prefer_10 = (MR_Integer) 1;
#line 289 "prog_foreign.m"
          else
#line 290 "prog_foreign.m"
            parse_tree__prog_foreign__Prefer_10 = (MR_Integer) 0;
#line 289 "prog_foreign.m"
        }
#line 285 "prog_foreign.m"
        break;
#line 285 "prog_foreign.m"
      case (MR_Integer) 1:
#line 294 "prog_foreign.m"
        parse_tree__prog_foreign__Prefer_10 = (MR_Integer) 0;
#line 285 "prog_foreign.m"
        break;
#line 285 "prog_foreign.m"
      case (MR_Integer) 3:
#line 306 "prog_foreign.m"
        parse_tree__prog_foreign__Prefer_10 = (MR_Integer) 0;
#line 285 "prog_foreign.m"
        break;
#line 285 "prog_foreign.m"
      case (MR_Integer) 2:
#line 300 "prog_foreign.m"
        parse_tree__prog_foreign__Prefer_10 = (MR_Integer) 0;
#line 285 "prog_foreign.m"
        break;
#line 285 "prog_foreign.m"
    }
#line 285 "prog_foreign.m"
    return parse_tree__prog_foreign__Prefer_10;
#line 285 "prog_foreign.m"
  }
#line 144 "prog_foreign.m"
}

#line 58 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_defns_0_0(
#line 58 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 58 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 58 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
#line 58 "prog_foreign.m"
{
#line 58 "prog_foreign.m"
  {
#line 58 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 58 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar1_4 = parse_tree__prog_foreign__HeadVar__2_2;
#line 58 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar2_5 = parse_tree__prog_foreign__HeadVar__3_3;

#line 58 "prog_foreign.m"
    {
#line 58 "prog_foreign.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[4], parse_tree__prog_foreign__HeadVar__1_1, ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar2_5)));
    }
#line 58 "prog_foreign.m"
  }
#line 58 "prog_foreign.m"
}

#line 58 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_defns_0_0(
#line 58 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
#line 58 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
#line 58 "prog_foreign.m"
{
#line 58 "prog_foreign.m"
  {
#line 58 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 58 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar1_3 = parse_tree__prog_foreign__HeadVar__1_1;
#line 58 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar2_4 = parse_tree__prog_foreign__HeadVar__2_2;

#line 58 "prog_foreign.m"
    {
#line 58 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[4], ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar2_4)));
    }
#line 58 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 58 "prog_foreign.m"
  }
#line 58 "prog_foreign.m"
}

#line 60 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_defn_0_0(
#line 60 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 60 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 60 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
#line 60 "prog_foreign.m"
{
#line 60 "prog_foreign.m"
  {
#line 60 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 60 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_6 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;
#line 60 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_7 = (MR_Integer) parse_tree__prog_foreign__HeadVar__3_3;

#line 60 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_6 == parse_tree__prog_foreign__CastY_7);
#line 60 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 1510 "parse_tree.prog_foreign.c"
      *parse_tree__prog_foreign__HeadVar__1_1 = (MR_Integer) 0;
#line 60 "prog_foreign.m"
    else
#line 60 "prog_foreign.m"
      {
#line 60 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_4_4 = (MR_String) parse_tree__prog_foreign__HeadVar__2_2;
#line 60 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_5_5 = (MR_String) parse_tree__prog_foreign__HeadVar__3_3;

#line 60 "prog_foreign.m"
        {
#line 60 "prog_foreign.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__prog_foreign__HeadVar__1_1, parse_tree__prog_foreign__V_4_4, parse_tree__prog_foreign__V_5_5);
        }
#line 60 "prog_foreign.m"
      }
#line 60 "prog_foreign.m"
  }
#line 60 "prog_foreign.m"
}

#line 60 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_defn_0_0(
#line 60 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
#line 60 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
#line 60 "prog_foreign.m"
{
#line 60 "prog_foreign.m"
  {
#line 60 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 60 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_5 = (MR_Integer) parse_tree__prog_foreign__HeadVar__1_1;
#line 60 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_6 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;

#line 60 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_5 == parse_tree__prog_foreign__CastY_6);
#line 60 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 60 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 60 "prog_foreign.m"
    else
#line 60 "prog_foreign.m"
      {
#line 60 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_3_3 = (MR_String) parse_tree__prog_foreign__HeadVar__1_1;
#line 60 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_4_4 = (MR_String) parse_tree__prog_foreign__HeadVar__2_2;

#line 1566 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (strcmp(parse_tree__prog_foreign__V_3_3, parse_tree__prog_foreign__V_4_4) == 0);
#line 60 "prog_foreign.m"
      }
#line 60 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 60 "prog_foreign.m"
  }
#line 60 "prog_foreign.m"
}

#line 67 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decls_0_0(
#line 67 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 67 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 67 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
#line 67 "prog_foreign.m"
{
#line 67 "prog_foreign.m"
  {
#line 67 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 67 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_9 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;
#line 67 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_10 = (MR_Integer) parse_tree__prog_foreign__HeadVar__3_3;

#line 67 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_9 == parse_tree__prog_foreign__CastY_10);
#line 67 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 1601 "parse_tree.prog_foreign.c"
      *parse_tree__prog_foreign__HeadVar__1_1 = (MR_Integer) 0;
#line 67 "prog_foreign.m"
    else
#line 67 "prog_foreign.m"
      {
#line 67 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 67 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 67 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 0)));
#line 67 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 1)));
#line 67 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_8_8;

#line 67 "prog_foreign.m"
        {
#line 67 "prog_foreign.m"
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[2], &parse_tree__prog_foreign__V_8_8, ((MR_Box) (parse_tree__prog_foreign__V_4_4)), ((MR_Box) (parse_tree__prog_foreign__V_6_6)));
        }
#line 1623 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_8_8 == (MR_Integer) 0);
#line 67 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 67 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 67 "prog_foreign.m"
          *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_8_8;
#line 67 "prog_foreign.m"
        else
#line 67 "prog_foreign.m"
          {
#line 67 "prog_foreign.m"
            {
#line 67 "prog_foreign.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[3], parse_tree__prog_foreign__HeadVar__1_1, ((MR_Box) (parse_tree__prog_foreign__V_5_5)), ((MR_Box) (parse_tree__prog_foreign__V_7_7)));
            }
#line 67 "prog_foreign.m"
          }
#line 67 "prog_foreign.m"
      }
#line 67 "prog_foreign.m"
  }
#line 67 "prog_foreign.m"
}

#line 67 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decls_0_0(
#line 67 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
#line 67 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
#line 67 "prog_foreign.m"
{
#line 67 "prog_foreign.m"
  {
#line 67 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 67 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_7 = (MR_Integer) parse_tree__prog_foreign__HeadVar__1_1;
#line 67 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_8 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;

#line 67 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_7 == parse_tree__prog_foreign__CastY_8);
#line 67 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 67 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 67 "prog_foreign.m"
    else
#line 67 "prog_foreign.m"
      {
#line 67 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__TypeInfo_10_10;
#line 67 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 67 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 1)));
#line 67 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 67 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));

#line 1688 "parse_tree.prog_foreign.c"
        {
#line 1690 "parse_tree.prog_foreign.c"
          parse_tree__prog_foreign__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[2], ((MR_Box) (parse_tree__prog_foreign__V_3_3)), ((MR_Box) (parse_tree__prog_foreign__V_5_5)));
        }
#line 67 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 67 "prog_foreign.m"
          {
#line 1697 "parse_tree.prog_foreign.c"
            parse_tree__prog_foreign__TypeInfo_10_10 = (MR_Word) &parse_tree__prog_foreign_scalar_common_1[3];
#line 1699 "parse_tree.prog_foreign.c"
            {
#line 1701 "parse_tree.prog_foreign.c"
              parse_tree__prog_foreign__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_foreign__TypeInfo_10_10, ((MR_Box) (parse_tree__prog_foreign__V_4_4)), ((MR_Box) (parse_tree__prog_foreign__V_6_6)));
            }
#line 67 "prog_foreign.m"
          }
#line 67 "prog_foreign.m"
      }
#line 67 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 67 "prog_foreign.m"
  }
#line 67 "prog_foreign.m"
}

#line 73 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decl_0_0(
#line 73 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 73 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 73 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
#line 73 "prog_foreign.m"
{
#line 73 "prog_foreign.m"
  {
#line 73 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 73 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_15 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;
#line 73 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_16 = (MR_Integer) parse_tree__prog_foreign__HeadVar__3_3;

#line 73 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_15 == parse_tree__prog_foreign__CastY_16);
#line 73 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 1739 "parse_tree.prog_foreign.c"
      *parse_tree__prog_foreign__HeadVar__1_1 = (MR_Integer) 0;
#line 73 "prog_foreign.m"
    else
#line 73 "prog_foreign.m"
      {
#line 73 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 73 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));
#line 73 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 3)));
#line 73 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 0)));
#line 73 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 1)));
#line 73 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 2)));
#line 73 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 3)));
#line 73 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_12_12;
#line 73 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__V_21_21 = (MR_Integer) parse_tree__prog_foreign__V_4_4;
#line 73 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__V_22_22 = (MR_Integer) parse_tree__prog_foreign__V_8_8;

#line 73 "prog_foreign.m"
        {
#line 73 "prog_foreign.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_foreign__V_12_12, parse_tree__prog_foreign__V_21_21, parse_tree__prog_foreign__V_22_22);
        }
#line 1773 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_12_12 == (MR_Integer) 0);
#line 73 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 73 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 73 "prog_foreign.m"
          *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_12_12;
#line 73 "prog_foreign.m"
        else
#line 73 "prog_foreign.m"
          {
#line 73 "prog_foreign.m"
            MR_Word parse_tree__prog_foreign__V_13_13;

#line 73 "prog_foreign.m"
            {
#line 73 "prog_foreign.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__prog_foreign__V_13_13, parse_tree__prog_foreign__V_5_5, parse_tree__prog_foreign__V_9_9);
            }
#line 1793 "parse_tree.prog_foreign.c"
            parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_13_13 == (MR_Integer) 0);
#line 73 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 73 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 73 "prog_foreign.m"
              *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_13_13;
#line 73 "prog_foreign.m"
            else
#line 73 "prog_foreign.m"
              {
#line 73 "prog_foreign.m"
                MR_Word parse_tree__prog_foreign__V_14_14;

#line 73 "prog_foreign.m"
                {
#line 73 "prog_foreign.m"
                  mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__prog_foreign__V_14_14, parse_tree__prog_foreign__V_6_6, parse_tree__prog_foreign__V_10_10);
                }
#line 1813 "parse_tree.prog_foreign.c"
                parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_14_14 == (MR_Integer) 0);
#line 73 "prog_foreign.m"
                parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 73 "prog_foreign.m"
                if (parse_tree__prog_foreign__succeeded)
#line 73 "prog_foreign.m"
                  *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_14_14;
#line 73 "prog_foreign.m"
                else
#line 73 "prog_foreign.m"
                  {
#line 73 "prog_foreign.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__prog_foreign__HeadVar__1_1, parse_tree__prog_foreign__V_7_7, parse_tree__prog_foreign__V_11_11);
                  }
#line 73 "prog_foreign.m"
              }
#line 73 "prog_foreign.m"
          }
#line 73 "prog_foreign.m"
      }
#line 73 "prog_foreign.m"
  }
#line 73 "prog_foreign.m"
}

#line 73 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decl_0_0(
#line 73 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
#line 73 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
#line 73 "prog_foreign.m"
{
#line 73 "prog_foreign.m"
  {
#line 73 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 73 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_11 = (MR_Integer) parse_tree__prog_foreign__HeadVar__1_1;
#line 73 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_12 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;

#line 73 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_11 == parse_tree__prog_foreign__CastY_12);
#line 73 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 73 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 73 "prog_foreign.m"
    else
#line 73 "prog_foreign.m"
      {
#line 73 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 73 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 2)));
#line 73 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 3)));
#line 73 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 73 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));
#line 73 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 3)));

#line 1884 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_3_3 == parse_tree__prog_foreign__V_7_7);
#line 73 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 73 "prog_foreign.m"
          {
#line 1890 "parse_tree.prog_foreign.c"
            parse_tree__prog_foreign__succeeded = (strcmp(parse_tree__prog_foreign__V_4_4, parse_tree__prog_foreign__V_8_8) == 0);
#line 73 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 73 "prog_foreign.m"
              {
#line 1896 "parse_tree.prog_foreign.c"
                parse_tree__prog_foreign__succeeded = (strcmp(parse_tree__prog_foreign__V_5_5, parse_tree__prog_foreign__V_9_9) == 0);
#line 73 "prog_foreign.m"
                if (parse_tree__prog_foreign__succeeded)
#line 1900 "parse_tree.prog_foreign.c"
                  parse_tree__prog_foreign__succeeded = (strcmp(parse_tree__prog_foreign__V_6_6, parse_tree__prog_foreign__V_10_10) == 0);
#line 73 "prog_foreign.m"
              }
#line 73 "prog_foreign.m"
          }
#line 73 "prog_foreign.m"
      }
#line 73 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 73 "prog_foreign.m"
  }
#line 73 "prog_foreign.m"
}

#line 40 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_codes_0_0(
#line 40 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 40 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 40 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
#line 40 "prog_foreign.m"
{
#line 40 "prog_foreign.m"
  {
#line 40 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 40 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar1_4 = parse_tree__prog_foreign__HeadVar__2_2;
#line 40 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar2_5 = parse_tree__prog_foreign__HeadVar__3_3;

#line 40 "prog_foreign.m"
    {
#line 40 "prog_foreign.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[1], parse_tree__prog_foreign__HeadVar__1_1, ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar2_5)));
    }
#line 40 "prog_foreign.m"
  }
#line 40 "prog_foreign.m"
}

#line 40 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_codes_0_0(
#line 40 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
#line 40 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
#line 40 "prog_foreign.m"
{
#line 40 "prog_foreign.m"
  {
#line 40 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 40 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar1_3 = parse_tree__prog_foreign__HeadVar__1_1;
#line 40 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar2_4 = parse_tree__prog_foreign__HeadVar__2_2;

#line 40 "prog_foreign.m"
    {
#line 40 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[1], ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar2_4)));
    }
#line 40 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 40 "prog_foreign.m"
  }
#line 40 "prog_foreign.m"
}

#line 43 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_code_0_0(
#line 43 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 43 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 43 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
#line 43 "prog_foreign.m"
{
#line 43 "prog_foreign.m"
  {
#line 43 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 43 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_15 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;
#line 43 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_16 = (MR_Integer) parse_tree__prog_foreign__HeadVar__3_3;

#line 43 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_15 == parse_tree__prog_foreign__CastY_16);
#line 43 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 1999 "parse_tree.prog_foreign.c"
      *parse_tree__prog_foreign__HeadVar__1_1 = (MR_Integer) 0;
#line 43 "prog_foreign.m"
    else
#line 43 "prog_foreign.m"
      {
#line 43 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 43 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 43 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));
#line 43 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 3)));
#line 43 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 0)));
#line 43 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 1)));
#line 43 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 2)));
#line 43 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 3)));
#line 43 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_12_12;
#line 43 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__V_21_21 = (MR_Integer) parse_tree__prog_foreign__V_4_4;
#line 43 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__V_22_22 = (MR_Integer) parse_tree__prog_foreign__V_8_8;

#line 43 "prog_foreign.m"
        {
#line 43 "prog_foreign.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_foreign__V_12_12, parse_tree__prog_foreign__V_21_21, parse_tree__prog_foreign__V_22_22);
        }
#line 2033 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_12_12 == (MR_Integer) 0);
#line 43 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 43 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 43 "prog_foreign.m"
          *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_12_12;
#line 43 "prog_foreign.m"
        else
#line 43 "prog_foreign.m"
          {
#line 43 "prog_foreign.m"
            MR_Word parse_tree__prog_foreign__V_13_13;
#line 43 "prog_foreign.m"
            MR_Integer parse_tree__prog_foreign__V_23_23 = (MR_Integer) parse_tree__prog_foreign__V_5_5;
#line 43 "prog_foreign.m"
            MR_Integer parse_tree__prog_foreign__V_24_24 = (MR_Integer) parse_tree__prog_foreign__V_9_9;

#line 43 "prog_foreign.m"
            {
#line 43 "prog_foreign.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_foreign__V_13_13, parse_tree__prog_foreign__V_23_23, parse_tree__prog_foreign__V_24_24);
            }
#line 2057 "parse_tree.prog_foreign.c"
            parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_13_13 == (MR_Integer) 0);
#line 43 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 43 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 43 "prog_foreign.m"
              *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_13_13;
#line 43 "prog_foreign.m"
            else
#line 43 "prog_foreign.m"
              {
#line 43 "prog_foreign.m"
                MR_Word parse_tree__prog_foreign__V_14_14;

#line 43 "prog_foreign.m"
                {
#line 43 "prog_foreign.m"
                  parse_tree__prog_data____Compare____foreign_literal_or_include_0_0(&parse_tree__prog_foreign__V_14_14, parse_tree__prog_foreign__V_6_6, parse_tree__prog_foreign__V_10_10);
                }
#line 2077 "parse_tree.prog_foreign.c"
                parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_14_14 == (MR_Integer) 0);
#line 43 "prog_foreign.m"
                parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 43 "prog_foreign.m"
                if (parse_tree__prog_foreign__succeeded)
#line 43 "prog_foreign.m"
                  *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_14_14;
#line 43 "prog_foreign.m"
                else
#line 43 "prog_foreign.m"
                  {
#line 43 "prog_foreign.m"
                    mercury__term____Compare____context_0_0(parse_tree__prog_foreign__HeadVar__1_1, parse_tree__prog_foreign__V_7_7, parse_tree__prog_foreign__V_11_11);
                  }
#line 43 "prog_foreign.m"
              }
#line 43 "prog_foreign.m"
          }
#line 43 "prog_foreign.m"
      }
#line 43 "prog_foreign.m"
  }
#line 43 "prog_foreign.m"
}

#line 43 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_code_0_0(
#line 43 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
#line 43 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
#line 43 "prog_foreign.m"
{
#line 43 "prog_foreign.m"
  {
#line 43 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 43 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_11 = (MR_Integer) parse_tree__prog_foreign__HeadVar__1_1;
#line 43 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_12 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;

#line 43 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_11 == parse_tree__prog_foreign__CastY_12);
#line 43 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 43 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 43 "prog_foreign.m"
    else
#line 43 "prog_foreign.m"
      {
#line 43 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 43 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 1)));
#line 43 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 2)));
#line 43 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 3)));
#line 43 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 43 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 43 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));
#line 43 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 3)));

#line 2148 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_3_3 == parse_tree__prog_foreign__V_7_7);
#line 43 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 43 "prog_foreign.m"
          {
#line 2154 "parse_tree.prog_foreign.c"
            parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_4_4 == parse_tree__prog_foreign__V_8_8);
#line 43 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 43 "prog_foreign.m"
              {
#line 2160 "parse_tree.prog_foreign.c"
                {
#line 2162 "parse_tree.prog_foreign.c"
                  parse_tree__prog_foreign__succeeded = parse_tree__prog_data____Unify____foreign_literal_or_include_0_0(parse_tree__prog_foreign__V_5_5, parse_tree__prog_foreign__V_9_9);
                }
#line 43 "prog_foreign.m"
                if (parse_tree__prog_foreign__succeeded)
#line 2167 "parse_tree.prog_foreign.c"
                  {
#line 2169 "parse_tree.prog_foreign.c"
                    parse_tree__prog_foreign__succeeded = mercury__term____Unify____context_0_0(parse_tree__prog_foreign__V_6_6, parse_tree__prog_foreign__V_10_10);
                  }
#line 43 "prog_foreign.m"
              }
#line 43 "prog_foreign.m"
          }
#line 43 "prog_foreign.m"
      }
#line 43 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 43 "prog_foreign.m"
  }
#line 43 "prog_foreign.m"
}

#line 41 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_codes_0_0(
#line 41 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 41 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 41 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
#line 41 "prog_foreign.m"
{
#line 41 "prog_foreign.m"
  {
#line 41 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 41 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar1_4 = parse_tree__prog_foreign__HeadVar__2_2;
#line 41 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar2_5 = parse_tree__prog_foreign__HeadVar__3_3;

#line 41 "prog_foreign.m"
    {
#line 41 "prog_foreign.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[0], parse_tree__prog_foreign__HeadVar__1_1, ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar2_5)));
    }
#line 41 "prog_foreign.m"
  }
#line 41 "prog_foreign.m"
}

#line 41 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_codes_0_0(
#line 41 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
#line 41 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
#line 41 "prog_foreign.m"
{
#line 41 "prog_foreign.m"
  {
#line 41 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 41 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar1_3 = parse_tree__prog_foreign__HeadVar__1_1;
#line 41 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar2_4 = parse_tree__prog_foreign__HeadVar__2_2;

#line 41 "prog_foreign.m"
    {
#line 41 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[0], ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar2_4)));
    }
#line 41 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 41 "prog_foreign.m"
  }
#line 41 "prog_foreign.m"
}

#line 51 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_code_0_0(
#line 51 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 51 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 51 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
#line 51 "prog_foreign.m"
{
#line 51 "prog_foreign.m"
  {
#line 51 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 51 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_12 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;
#line 51 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_13 = (MR_Integer) parse_tree__prog_foreign__HeadVar__3_3;

#line 51 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_12 == parse_tree__prog_foreign__CastY_13);
#line 51 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 2269 "parse_tree.prog_foreign.c"
      *parse_tree__prog_foreign__HeadVar__1_1 = (MR_Integer) 0;
#line 51 "prog_foreign.m"
    else
#line 51 "prog_foreign.m"
      {
#line 51 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 51 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 51 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));
#line 51 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 0)));
#line 51 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 1)));
#line 51 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 2)));
#line 51 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_10_10;
#line 51 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__V_17_17 = (MR_Integer) parse_tree__prog_foreign__V_4_4;
#line 51 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__V_18_18 = (MR_Integer) parse_tree__prog_foreign__V_7_7;

#line 51 "prog_foreign.m"
        {
#line 51 "prog_foreign.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_foreign__V_10_10, parse_tree__prog_foreign__V_17_17, parse_tree__prog_foreign__V_18_18);
        }
#line 2299 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_10_10 == (MR_Integer) 0);
#line 51 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 51 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 51 "prog_foreign.m"
          *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_10_10;
#line 51 "prog_foreign.m"
        else
#line 51 "prog_foreign.m"
          {
#line 51 "prog_foreign.m"
            MR_Word parse_tree__prog_foreign__V_11_11;

#line 51 "prog_foreign.m"
            {
#line 51 "prog_foreign.m"
              parse_tree__prog_data____Compare____foreign_literal_or_include_0_0(&parse_tree__prog_foreign__V_11_11, parse_tree__prog_foreign__V_5_5, parse_tree__prog_foreign__V_8_8);
            }
#line 2319 "parse_tree.prog_foreign.c"
            parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_11_11 == (MR_Integer) 0);
#line 51 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 51 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 51 "prog_foreign.m"
              *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_11_11;
#line 51 "prog_foreign.m"
            else
#line 51 "prog_foreign.m"
              {
#line 51 "prog_foreign.m"
                mercury__term____Compare____context_0_0(parse_tree__prog_foreign__HeadVar__1_1, parse_tree__prog_foreign__V_6_6, parse_tree__prog_foreign__V_9_9);
              }
#line 51 "prog_foreign.m"
          }
#line 51 "prog_foreign.m"
      }
#line 51 "prog_foreign.m"
  }
#line 51 "prog_foreign.m"
}

#line 51 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_code_0_0(
#line 51 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
#line 51 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
#line 51 "prog_foreign.m"
{
#line 51 "prog_foreign.m"
  {
#line 51 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 51 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_9 = (MR_Integer) parse_tree__prog_foreign__HeadVar__1_1;
#line 51 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_10 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;

#line 51 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_9 == parse_tree__prog_foreign__CastY_10);
#line 51 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 51 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 51 "prog_foreign.m"
    else
#line 51 "prog_foreign.m"
      {
#line 51 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 51 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 1)));
#line 51 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 2)));
#line 51 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 51 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 51 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));

#line 2384 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_3_3 == parse_tree__prog_foreign__V_6_6);
#line 51 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 51 "prog_foreign.m"
          {
#line 2390 "parse_tree.prog_foreign.c"
            {
#line 2392 "parse_tree.prog_foreign.c"
              parse_tree__prog_foreign__succeeded = parse_tree__prog_data____Unify____foreign_literal_or_include_0_0(parse_tree__prog_foreign__V_4_4, parse_tree__prog_foreign__V_7_7);
            }
#line 51 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 2397 "parse_tree.prog_foreign.c"
              {
#line 2399 "parse_tree.prog_foreign.c"
                parse_tree__prog_foreign__succeeded = mercury__term____Unify____context_0_0(parse_tree__prog_foreign__V_5_5, parse_tree__prog_foreign__V_8_8);
              }
#line 51 "prog_foreign.m"
          }
#line 51 "prog_foreign.m"
      }
#line 51 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 51 "prog_foreign.m"
  }
#line 51 "prog_foreign.m"
}

#line 426 "prog_foreign.m"
static MR_String MR_CALL 
parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_f_0(
#line 426 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__String_3)
#line 426 "prog_foreign.m"
{
#line 437 "prog_foreign.m"
  {
#line 437 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 437 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Name_4;
#line 437 "prog_foreign.m"
    MR_Char parse_tree__prog_foreign__Char_5;
#line 437 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Rest_6;

#line 429 "prog_foreign.m"
    {
#line 429 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = mercury__string__first_char_3_p_3(parse_tree__prog_foreign__String_3, &parse_tree__prog_foreign__Char_5, &parse_tree__prog_foreign__Rest_6);
    }
#line 437 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 432 "prog_foreign.m"
      {
#line 432 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__Code_7;
#line 432 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__CodeString_8;
#line 432 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__ThisCharString_9;
#line 432 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__Name0_10;

#line 432 "prog_foreign.m"
        {
#line 432 "prog_foreign.m"
          mercury__char__to_int_2_p_0(parse_tree__prog_foreign__Char_5, &parse_tree__prog_foreign__Code_7);
        }
#line 433 "prog_foreign.m"
        {
#line 433 "prog_foreign.m"
          mercury__string__int_to_string_2_p_0(parse_tree__prog_foreign__Code_7, &parse_tree__prog_foreign__CodeString_8);
        }
#line 434 "prog_foreign.m"
        {
#line 434 "prog_foreign.m"
          mercury__string__append_3_p_2((MR_String) "_", parse_tree__prog_foreign__CodeString_8, &parse_tree__prog_foreign__ThisCharString_9);
        }
#line 435 "prog_foreign.m"
        {
#line 435 "prog_foreign.m"
          parse_tree__prog_foreign__Name0_10 = parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_f_0(parse_tree__prog_foreign__Rest_6);
        }
#line 436 "prog_foreign.m"
        {
#line 436 "prog_foreign.m"
          mercury__string__append_3_p_2(parse_tree__prog_foreign__ThisCharString_9, parse_tree__prog_foreign__Name0_10, &parse_tree__prog_foreign__Name_4);
        }
#line 432 "prog_foreign.m"
      }
#line 437 "prog_foreign.m"
    else
#line 439 "prog_foreign.m"
      parse_tree__prog_foreign__Name_4 = parse_tree__prog_foreign__String_3;
#line 437 "prog_foreign.m"
    return parse_tree__prog_foreign__Name_4;
#line 437 "prog_foreign.m"
  }
#line 426 "prog_foreign.m"
}

#line 317 "prog_foreign.m"
static void MR_CALL 
parse_tree__prog_foreign__valid_foreign_language_1_p_1(
#line 317 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 317 "prog_foreign.m"
  MR_Cont parse_tree__prog_foreign__cont,
#line 317 "prog_foreign.m"
  void * parse_tree__prog_foreign__cont_env_ptr)
#line 317 "prog_foreign.m"
{
#line 319 "prog_foreign.m"
  {
#line 319 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 319 "prog_foreign.m"
    {
#line 319 "prog_foreign.m"
      MR_Integer parse_tree__prog_foreign__slot_0 = (MR_Integer) 0;

#line 319 "prog_foreign.m"
      do
#line 319 "prog_foreign.m"
        {
#line 319 "prog_foreign.m"
          *parse_tree__prog_foreign__HeadVar__1_1 = ((&parse_tree__prog_foreign_vector_common_6[0 + parse_tree__prog_foreign__slot_0]))->parse_tree__prog_foreign__vector_common_type_6_0__vct_6_f_0;
#line 319 "prog_foreign.m"
          {
#line 319 "prog_foreign.m"
            parse_tree__prog_foreign__cont(parse_tree__prog_foreign__cont_env_ptr);
          }
#line 319 "prog_foreign.m"
          parse_tree__prog_foreign__slot_0 = (parse_tree__prog_foreign__slot_0 + (MR_Integer) 1);
#line 319 "prog_foreign.m"
        }
#line 319 "prog_foreign.m"
      while ((parse_tree__prog_foreign__slot_0 < (MR_Integer) 4));
#line 319 "prog_foreign.m"
    }
#line 319 "prog_foreign.m"
  }
#line 317 "prog_foreign.m"
}

#line 181 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__convert_to_valid_c_identifier_1_f_0(
#line 181 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__String_3)
#line 181 "prog_foreign.m"
{
#line 386 "prog_foreign.m"
  {
#line 386 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 386 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Name_4;
#line 386 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Name0_5;

#line 401 "prog_foreign.m"
    {
#line 401 "prog_foreign.m"
      MR_Integer parse_tree__prog_foreign__case_num_0 = (MR_Integer) -1;

#line 401 "prog_foreign.m"
#line 401 "prog_foreign.m"
      switch (MR_nth_code_unit(parse_tree__prog_foreign__String_3, 0)) {
#line 401 "prog_foreign.m"
        case (MR_Integer) 33:
#line 401 "prog_foreign.m"
          if (MR_offset_streq(1, parse_tree__prog_foreign__String_3, (MR_String) "!"))
#line 401 "prog_foreign.m"
            parse_tree__prog_foreign__case_num_0 = (MR_Integer) 0;
#line 401 "prog_foreign.m"
          break;
#line 401 "prog_foreign.m"
        case (MR_Integer) 42:
#line 401 "prog_foreign.m"
          if (MR_offset_streq(1, parse_tree__prog_foreign__String_3, (MR_String) "*"))
#line 401 "prog_foreign.m"
            parse_tree__prog_foreign__case_num_0 = (MR_Integer) 1;
#line 401 "prog_foreign.m"
          break;
#line 401 "prog_foreign.m"
        case (MR_Integer) 43:
#line 401 "prog_foreign.m"
          if (MR_offset_streq(1, parse_tree__prog_foreign__String_3, (MR_String) "+"))
#line 401 "prog_foreign.m"
            parse_tree__prog_foreign__case_num_0 = (MR_Integer) 2;
#line 401 "prog_foreign.m"
          break;
#line 401 "prog_foreign.m"
        case (MR_Integer) 44:
#line 401 "prog_foreign.m"
          if (MR_offset_streq(1, parse_tree__prog_foreign__String_3, (MR_String) ","))
#line 401 "prog_foreign.m"
            parse_tree__prog_foreign__case_num_0 = (MR_Integer) 3;
#line 401 "prog_foreign.m"
          break;
#line 401 "prog_foreign.m"
        case (MR_Integer) 45:
#line 401 "prog_foreign.m"
          if (MR_offset_streq(1, parse_tree__prog_foreign__String_3, (MR_String) "-"))
#line 401 "prog_foreign.m"
            parse_tree__prog_foreign__case_num_0 = (MR_Integer) 4;
#line 401 "prog_foreign.m"
          break;
#line 401 "prog_foreign.m"
        case (MR_Integer) 47:
#line 401 "prog_foreign.m"
          if (MR_offset_streq(1, parse_tree__prog_foreign__String_3, (MR_String) "/"))
#line 401 "prog_foreign.m"
            parse_tree__prog_foreign__case_num_0 = (MR_Integer) 5;
#line 401 "prog_foreign.m"
          break;
#line 401 "prog_foreign.m"
        case (MR_Integer) 59:
#line 401 "prog_foreign.m"
          if (MR_offset_streq(1, parse_tree__prog_foreign__String_3, (MR_String) ";"))
#line 401 "prog_foreign.m"
            parse_tree__prog_foreign__case_num_0 = (MR_Integer) 6;
#line 401 "prog_foreign.m"
          break;
#line 401 "prog_foreign.m"
        case (MR_Integer) 60:
#line 401 "prog_foreign.m"
          if (MR_offset_streq(1, parse_tree__prog_foreign__String_3, (MR_String) "<"))
#line 401 "prog_foreign.m"
            parse_tree__prog_foreign__case_num_0 = (MR_Integer) 7;
#line 401 "prog_foreign.m"
          break;
#line 401 "prog_foreign.m"
        case (MR_Integer) 61:
#line 401 "prog_foreign.m"
#line 401 "prog_foreign.m"
          switch (MR_nth_code_unit(parse_tree__prog_foreign__String_3, 1)) {
#line 401 "prog_foreign.m"
            case (MR_Integer) 0:
#line 401 "prog_foreign.m"
              parse_tree__prog_foreign__case_num_0 = (MR_Integer) 8;
#line 401 "prog_foreign.m"
              break;
#line 401 "prog_foreign.m"
            case (MR_Integer) 60:
#line 401 "prog_foreign.m"
              if (MR_offset_streq(2, parse_tree__prog_foreign__String_3, (MR_String) "=<"))
#line 401 "prog_foreign.m"
                parse_tree__prog_foreign__case_num_0 = (MR_Integer) 9;
#line 401 "prog_foreign.m"
              break;
#line 401 "prog_foreign.m"
          }
#line 401 "prog_foreign.m"
          break;
#line 401 "prog_foreign.m"
        case (MR_Integer) 62:
#line 401 "prog_foreign.m"
#line 401 "prog_foreign.m"
          switch (MR_nth_code_unit(parse_tree__prog_foreign__String_3, 1)) {
#line 401 "prog_foreign.m"
            case (MR_Integer) 0:
#line 401 "prog_foreign.m"
              parse_tree__prog_foreign__case_num_0 = (MR_Integer) 10;
#line 401 "prog_foreign.m"
              break;
#line 401 "prog_foreign.m"
            case (MR_Integer) 61:
#line 401 "prog_foreign.m"
              if (MR_offset_streq(2, parse_tree__prog_foreign__String_3, (MR_String) ">="))
#line 401 "prog_foreign.m"
                parse_tree__prog_foreign__case_num_0 = (MR_Integer) 11;
#line 401 "prog_foreign.m"
              break;
#line 401 "prog_foreign.m"
          }
#line 401 "prog_foreign.m"
          break;
#line 401 "prog_foreign.m"
        case (MR_Integer) 91:
#line 401 "prog_foreign.m"
#line 401 "prog_foreign.m"
          switch (MR_nth_code_unit(parse_tree__prog_foreign__String_3, 1)) {
#line 401 "prog_foreign.m"
            case (MR_Integer) 93:
#line 401 "prog_foreign.m"
              if (MR_offset_streq(2, parse_tree__prog_foreign__String_3, (MR_String) "[]"))
#line 401 "prog_foreign.m"
                parse_tree__prog_foreign__case_num_0 = (MR_Integer) 12;
#line 401 "prog_foreign.m"
              break;
#line 401 "prog_foreign.m"
            case (MR_Integer) 124:
#line 401 "prog_foreign.m"
              if (MR_offset_streq(2, parse_tree__prog_foreign__String_3, (MR_String) "[|]"))
#line 401 "prog_foreign.m"
                parse_tree__prog_foreign__case_num_0 = (MR_Integer) 13;
#line 401 "prog_foreign.m"
              break;
#line 401 "prog_foreign.m"
          }
#line 401 "prog_foreign.m"
          break;
#line 401 "prog_foreign.m"
        case (MR_Integer) 92:
#line 401 "prog_foreign.m"
          if (MR_offset_streq(1, parse_tree__prog_foreign__String_3, (MR_String) "\\="))
#line 401 "prog_foreign.m"
            parse_tree__prog_foreign__case_num_0 = (MR_Integer) 14;
#line 401 "prog_foreign.m"
          break;
#line 401 "prog_foreign.m"
        case (MR_Integer) 123:
#line 401 "prog_foreign.m"
          if (MR_offset_streq(1, parse_tree__prog_foreign__String_3, (MR_String) "{}"))
#line 401 "prog_foreign.m"
            parse_tree__prog_foreign__case_num_0 = (MR_Integer) 15;
#line 401 "prog_foreign.m"
          break;
#line 401 "prog_foreign.m"
      }
#line 401 "prog_foreign.m"
      if ((parse_tree__prog_foreign__case_num_0 < (MR_Integer) 0))
#line 401 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = MR_FALSE;
#line 401 "prog_foreign.m"
      else
#line 401 "prog_foreign.m"
        {
#line 401 "prog_foreign.m"
          /* we found a match; look up the results */
#line 401 "prog_foreign.m"
          parse_tree__prog_foreign__Name0_5 = ((&parse_tree__prog_foreign_vector_common_5[0 + parse_tree__prog_foreign__case_num_0]))->parse_tree__prog_foreign__vector_common_type_5_0__vct_5_f_0;
#line 401 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 401 "prog_foreign.m"
        }
#line 401 "prog_foreign.m"
    }
#line 386 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 385 "prog_foreign.m"
      parse_tree__prog_foreign__Name_4 = parse_tree__prog_foreign__Name0_5;
#line 386 "prog_foreign.m"
    else
#line 387 "prog_foreign.m"
      {
#line 387 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_7_7;

#line 387 "prog_foreign.m"
        {
#line 387 "prog_foreign.m"
          parse_tree__prog_foreign__V_7_7 = parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_f_0(parse_tree__prog_foreign__String_3);
        }
#line 387 "prog_foreign.m"
        {
#line 387 "prog_foreign.m"
          parse_tree__prog_foreign__Name_4 = mercury__string__f_43_43_2_f_0((MR_String) "f", parse_tree__prog_foreign__V_7_7);
        }
#line 387 "prog_foreign.m"
      }
#line 386 "prog_foreign.m"
    return parse_tree__prog_foreign__Name_4;
#line 386 "prog_foreign.m"
  }
#line 181 "prog_foreign.m"
}

#line 179 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__qualify_name_2_f_0(
#line 179 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__Module0_4,
#line 179 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__Name0_5)
#line 179 "prog_foreign.m"
{
#line 380 "prog_foreign.m"
  {
#line 380 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 380 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Name_6;
#line 380 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_7_7;
#line 380 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_8_8;
#line 380 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_10_10;

#line 381 "prog_foreign.m"
    {
#line 381 "prog_foreign.m"
      parse_tree__prog_foreign__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "prog_foreign.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_10_10, 0) = ((MR_Box) (parse_tree__prog_foreign__Name0_5));
#line 381 "prog_foreign.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 381 "prog_foreign.m"
    }
#line 381 "prog_foreign.m"
    {
#line 381 "prog_foreign.m"
      parse_tree__prog_foreign__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "prog_foreign.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_8_8, 0) = ((MR_Box) ((MR_String) "__"));
#line 381 "prog_foreign.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_8_8, 1) = ((MR_Box) (parse_tree__prog_foreign__V_10_10));
#line 381 "prog_foreign.m"
    }
#line 381 "prog_foreign.m"
    {
#line 381 "prog_foreign.m"
      parse_tree__prog_foreign__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "prog_foreign.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_7_7, 0) = ((MR_Box) (parse_tree__prog_foreign__Module0_4));
#line 381 "prog_foreign.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_7_7, 1) = ((MR_Box) (parse_tree__prog_foreign__V_8_8));
#line 381 "prog_foreign.m"
    }
#line 381 "prog_foreign.m"
    {
#line 381 "prog_foreign.m"
      mercury__string__append_list_2_p_0(parse_tree__prog_foreign__V_7_7, &parse_tree__prog_foreign__Name_6);
    }
#line 380 "prog_foreign.m"
    return parse_tree__prog_foreign__Name_6;
#line 380 "prog_foreign.m"
  }
#line 179 "prog_foreign.m"
}

#line 175 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(
#line 175 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__Name_3)
#line 175 "prog_foreign.m"
{
#line 376 "prog_foreign.m"
  {
#line 376 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 376 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__HeadVar__2_2;
#line 356 "prog_foreign.m"
    MR_Char parse_tree__prog_foreign__FirstChar_8;
#line 356 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__V_10_10;

#line 356 "prog_foreign.m"
    {
#line 356 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(parse_tree__prog_foreign__Name_3);
    }
#line 356 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 356 "prog_foreign.m"
      {
#line 363 "prog_foreign.m"
        parse_tree__prog_foreign__V_10_10 = (MR_Integer) 0;
#line 363 "prog_foreign.m"
        {
#line 363 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = mercury__string__index_3_p_0(parse_tree__prog_foreign__Name_3, parse_tree__prog_foreign__V_10_10, &parse_tree__prog_foreign__FirstChar_8);
        }
#line 356 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 356 "prog_foreign.m"
          {
#line 364 "prog_foreign.m"
            {
#line 364 "prog_foreign.m"
              parse_tree__prog_foreign__succeeded = mercury__char__is_digit_1_p_0(parse_tree__prog_foreign__FirstChar_8);
            }
#line 364 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 356 "prog_foreign.m"
          }
#line 356 "prog_foreign.m"
      }
#line 376 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 373 "prog_foreign.m"
      {
#line 373 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__Suffix_9;

#line 371 "prog_foreign.m"
        {
#line 371 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = mercury__string__append_3_p_1((MR_String) "f_", &parse_tree__prog_foreign__Suffix_9, parse_tree__prog_foreign__Name_3);
        }
#line 373 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 372 "prog_foreign.m"
          {
#line 372 "prog_foreign.m"
            {
#line 372 "prog_foreign.m"
              parse_tree__prog_foreign__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "f__", parse_tree__prog_foreign__Suffix_9);
            }
#line 372 "prog_foreign.m"
          }
#line 373 "prog_foreign.m"
        else
#line 374 "prog_foreign.m"
          parse_tree__prog_foreign__HeadVar__2_2 = parse_tree__prog_foreign__Name_3;
#line 373 "prog_foreign.m"
      }
#line 376 "prog_foreign.m"
    else
#line 377 "prog_foreign.m"
      {
#line 377 "prog_foreign.m"
        parse_tree__prog_foreign__HeadVar__2_2 = parse_tree__prog_foreign__convert_to_valid_c_identifier_1_f_0(parse_tree__prog_foreign__Name_3);
      }
#line 376 "prog_foreign.m"
    return parse_tree__prog_foreign__HeadVar__2_2;
#line 376 "prog_foreign.m"
  }
#line 175 "prog_foreign.m"
}

#line 170 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__name_mangle_1_f_0(
#line 170 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__Name_3)
#line 170 "prog_foreign.m"
{
#line 376 "prog_foreign.m"
  {
#line 376 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 376 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__HeadVar__2_2;

#line 356 "prog_foreign.m"
    {
#line 356 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(parse_tree__prog_foreign__Name_3);
    }
#line 376 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 373 "prog_foreign.m"
      {
#line 373 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__Suffix_9;

#line 371 "prog_foreign.m"
        {
#line 371 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = mercury__string__append_3_p_1((MR_String) "f_", &parse_tree__prog_foreign__Suffix_9, parse_tree__prog_foreign__Name_3);
        }
#line 373 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 372 "prog_foreign.m"
          {
#line 372 "prog_foreign.m"
            {
#line 372 "prog_foreign.m"
              parse_tree__prog_foreign__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "f__", parse_tree__prog_foreign__Suffix_9);
            }
#line 372 "prog_foreign.m"
          }
#line 373 "prog_foreign.m"
        else
#line 374 "prog_foreign.m"
          parse_tree__prog_foreign__HeadVar__2_2 = parse_tree__prog_foreign__Name_3;
#line 373 "prog_foreign.m"
      }
#line 376 "prog_foreign.m"
    else
#line 377 "prog_foreign.m"
      {
#line 377 "prog_foreign.m"
        parse_tree__prog_foreign__HeadVar__2_2 = parse_tree__prog_foreign__convert_to_valid_c_identifier_1_f_0(parse_tree__prog_foreign__Name_3);
      }
#line 376 "prog_foreign.m"
    return parse_tree__prog_foreign__HeadVar__2_2;
#line 376 "prog_foreign.m"
  }
#line 170 "prog_foreign.m"
}

#line 165 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__sym_name_mangle_1_f_0(
#line 165 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1)
#line 165 "prog_foreign.m"
{
#line 337 "prog_foreign.m"
  {
#line 337 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 337 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__HeadVar__2_2;

#line 337 "prog_foreign.m"
    if (((MR_tag((MR_Word) parse_tree__prog_foreign__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 339 "prog_foreign.m"
      {
#line 339 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__ModuleName_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 339 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__PlainName_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 1)));
#line 339 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__MangledModuleName_7;
#line 339 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__MangledPlainName_8;
#line 339 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_12_12;
#line 339 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_13_13;
#line 339 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_15_15;

#line 340 "prog_foreign.m"
        {
#line 340 "prog_foreign.m"
          parse_tree__prog_foreign__MangledModuleName_7 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(parse_tree__prog_foreign__ModuleName_4);
        }
#line 341 "prog_foreign.m"
        {
#line 341 "prog_foreign.m"
          parse_tree__prog_foreign__MangledPlainName_8 = parse_tree__prog_foreign__name_mangle_1_f_0(parse_tree__prog_foreign__PlainName_5);
        }
#line 381 "prog_foreign.m"
        {
#line 381 "prog_foreign.m"
          parse_tree__prog_foreign__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_15_15, 0) = ((MR_Box) (parse_tree__prog_foreign__MangledPlainName_8));
#line 381 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 381 "prog_foreign.m"
        }
#line 381 "prog_foreign.m"
        {
#line 381 "prog_foreign.m"
          parse_tree__prog_foreign__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_13_13, 0) = ((MR_Box) ((MR_String) "__"));
#line 381 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_13_13, 1) = ((MR_Box) (parse_tree__prog_foreign__V_15_15));
#line 381 "prog_foreign.m"
        }
#line 381 "prog_foreign.m"
        {
#line 381 "prog_foreign.m"
          parse_tree__prog_foreign__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_12_12, 0) = ((MR_Box) (parse_tree__prog_foreign__MangledModuleName_7));
#line 381 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_12_12, 1) = ((MR_Box) (parse_tree__prog_foreign__V_13_13));
#line 381 "prog_foreign.m"
        }
#line 381 "prog_foreign.m"
        {
#line 381 "prog_foreign.m"
          mercury__string__append_list_2_p_0(parse_tree__prog_foreign__V_12_12, &parse_tree__prog_foreign__HeadVar__2_2);
        }
#line 339 "prog_foreign.m"
      }
#line 337 "prog_foreign.m"
    else
#line 337 "prog_foreign.m"
      {
#line 337 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__Name_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)));

#line 338 "prog_foreign.m"
        {
#line 338 "prog_foreign.m"
          parse_tree__prog_foreign__HeadVar__2_2 = parse_tree__prog_foreign__name_mangle_1_f_0(parse_tree__prog_foreign__Name_3);
        }
#line 337 "prog_foreign.m"
      }
#line 337 "prog_foreign.m"
    return parse_tree__prog_foreign__HeadVar__2_2;
#line 337 "prog_foreign.m"
  }
#line 165 "prog_foreign.m"
}

#line 160 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__make_init_name_1_f_0(
#line 160 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__ModuleName_3)
#line 160 "prog_foreign.m"
{
#line 333 "prog_foreign.m"
  {
#line 333 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 333 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__InitName_4;
#line 333 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__MangledModuleName_5;
#line 333 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_7_7;

#line 334 "prog_foreign.m"
    {
#line 334 "prog_foreign.m"
      parse_tree__prog_foreign__MangledModuleName_5 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(parse_tree__prog_foreign__ModuleName_3);
    }
#line 335 "prog_foreign.m"
    {
#line 335 "prog_foreign.m"
      parse_tree__prog_foreign__V_7_7 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__MangledModuleName_5, (MR_String) "__");
    }
#line 335 "prog_foreign.m"
    {
#line 335 "prog_foreign.m"
      parse_tree__prog_foreign__InitName_4 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", parse_tree__prog_foreign__V_7_7);
    }
#line 333 "prog_foreign.m"
    return parse_tree__prog_foreign__InitName_4;
#line 333 "prog_foreign.m"
  }
#line 160 "prog_foreign.m"
}

#line 151 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__foreign_type_language_1_f_0(
#line 151 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1)
#line 151 "prog_foreign.m"
{
#line 326 "prog_foreign.m"
  {
#line 326 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 326 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__HeadVar__2_2;

#line 326 "prog_foreign.m"
#line 326 "prog_foreign.m"
    switch (MR_tag((MR_Word) parse_tree__prog_foreign__HeadVar__1_1)) {
#line 326 "prog_foreign.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 326 "prog_foreign.m"
      case (MR_Integer) 0:
#line 326 "prog_foreign.m"
        parse_tree__prog_foreign__HeadVar__2_2 = (MR_Integer) 0;
#line 326 "prog_foreign.m"
        break;
#line 326 "prog_foreign.m"
      case (MR_Integer) 1:
#line 327 "prog_foreign.m"
        parse_tree__prog_foreign__HeadVar__2_2 = (MR_Integer) 2;
#line 326 "prog_foreign.m"
        break;
#line 326 "prog_foreign.m"
      case (MR_Integer) 2:
#line 328 "prog_foreign.m"
        parse_tree__prog_foreign__HeadVar__2_2 = (MR_Integer) 1;
#line 326 "prog_foreign.m"
        break;
#line 326 "prog_foreign.m"
      case (MR_Integer) 3:
#line 329 "prog_foreign.m"
        parse_tree__prog_foreign__HeadVar__2_2 = (MR_Integer) 3;
#line 326 "prog_foreign.m"
        break;
#line 326 "prog_foreign.m"
    }
#line 326 "prog_foreign.m"
    return parse_tree__prog_foreign__HeadVar__2_2;
#line 326 "prog_foreign.m"
  }
#line 151 "prog_foreign.m"
}

#line 312 "prog_foreign.m"
static void MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0_1(
#line 312 "prog_foreign.m"
  void * parse_tree__prog_foreign__env_ptr_arg)
#line 312 "prog_foreign.m"
{
#line 312 "prog_foreign.m"
  {
#line 312 "prog_foreign.m"
    struct parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0_s * parse_tree__prog_foreign__env_ptr = (struct parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0_s *) parse_tree__prog_foreign__env_ptr_arg;

#line 312 "prog_foreign.m"
    *((parse_tree__prog_foreign__env_ptr)->parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((parse_tree__prog_foreign__env_ptr)->parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__conv0_HeadVar__1_1));
#line 312 "prog_foreign.m"
    {
#line 312 "prog_foreign.m"
      ((parse_tree__prog_foreign__env_ptr)->parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont)((parse_tree__prog_foreign__env_ptr)->parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont_env_ptr);
    }
#line 312 "prog_foreign.m"
  }
#line 312 "prog_foreign.m"
}

#line 312 "prog_foreign.m"
static void MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0_2(
#line 312 "prog_foreign.m"
  MR_Box parse_tree__prog_foreign__closure_arg,
#line 312 "prog_foreign.m"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 312 "prog_foreign.m"
  MR_Cont parse_tree__prog_foreign__cont,
#line 312 "prog_foreign.m"
  void * parse_tree__prog_foreign__cont_env_ptr)
#line 312 "prog_foreign.m"
{
#line 312 "prog_foreign.m"
  {
#line 312 "prog_foreign.m"
    struct parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0_s parse_tree__prog_foreign__env;

#line 312 "prog_foreign.m"
    (parse_tree__prog_foreign__env).parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__wrapper_arg_1 = parse_tree__prog_foreign__wrapper_arg_1;
#line 312 "prog_foreign.m"
    (parse_tree__prog_foreign__env).parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont = parse_tree__prog_foreign__cont;
#line 312 "prog_foreign.m"
    (parse_tree__prog_foreign__env).parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont_env_ptr = parse_tree__prog_foreign__cont_env_ptr;
#line 312 "prog_foreign.m"
    {
#line 312 "prog_foreign.m"
      MR_Box parse_tree__prog_foreign__closure = parse_tree__prog_foreign__closure_arg;

#line 312 "prog_foreign.m"
      {
#line 312 "prog_foreign.m"
        parse_tree__prog_foreign__valid_foreign_language_1_p_1(&(parse_tree__prog_foreign__env).parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__conv0_HeadVar__1_1, parse_tree__prog_foreign__all_foreign_languages_0_f_0_1, &parse_tree__prog_foreign__env);
      }
#line 312 "prog_foreign.m"
    }
#line 312 "prog_foreign.m"
  }
#line 312 "prog_foreign.m"
}

#line 149 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0(void)
#line 149 "prog_foreign.m"
{
#line 311 "prog_foreign.m"
  {
#line 311 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 311 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Langs_2;

#line 313 "prog_foreign.m"
    {
#line 313 "prog_foreign.m"
      mercury__solutions__solutions_2_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, (MR_Word) &parse_tree__prog_foreign_scalar_common_4[0], &parse_tree__prog_foreign__Langs_2);
    }
#line 311 "prog_foreign.m"
    return parse_tree__prog_foreign__Langs_2;
#line 311 "prog_foreign.m"
  }
#line 149 "prog_foreign.m"
}

#line 144 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__prefer_foreign_language_4_f_0(
#line 144 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign___Globals_6,
#line 144 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__Target_7,
#line 144 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__Lang1_8,
#line 144 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__Lang2_9)
#line 144 "prog_foreign.m"
{
#line 285 "prog_foreign.m"
  {
#line 285 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 285 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Prefer_10;

#line 285 "prog_foreign.m"
    {
#line 285 "prog_foreign.m"
      parse_tree__prog_foreign__Prefer_10 = parse_tree__prog_foreign__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_f_0(parse_tree__prog_foreign__Target_7, parse_tree__prog_foreign__Lang1_8, parse_tree__prog_foreign__Lang2_9);
    }
#line 285 "prog_foreign.m"
    return parse_tree__prog_foreign__Prefer_10;
#line 285 "prog_foreign.m"
  }
#line 144 "prog_foreign.m"
}

#line 136 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__foreign_language_file_extension_1_f_1(
#line 136 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1)
#line 136 "prog_foreign.m"
{
#line 274 "prog_foreign.m"
  {
#line 274 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 274 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__HeadVar__2_2;

#line 274 "prog_foreign.m"
#line 274 "prog_foreign.m"
    switch (parse_tree__prog_foreign__HeadVar__1_1) {
#line 274 "prog_foreign.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 274 "prog_foreign.m"
      case (MR_Integer) 0:
#line 274 "prog_foreign.m"
        parse_tree__prog_foreign__HeadVar__2_2 = (MR_String) ".c";
#line 274 "prog_foreign.m"
        break;
#line 274 "prog_foreign.m"
      case (MR_Integer) 1:
#line 275 "prog_foreign.m"
        parse_tree__prog_foreign__HeadVar__2_2 = (MR_String) ".cs";
#line 274 "prog_foreign.m"
        break;
#line 274 "prog_foreign.m"
    }
#line 274 "prog_foreign.m"
    return parse_tree__prog_foreign__HeadVar__2_2;
#line 274 "prog_foreign.m"
  }
#line 136 "prog_foreign.m"
}

#line 135 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign__foreign_language_file_extension_1_f_0(
#line 135 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
#line 135 "prog_foreign.m"
  MR_String * parse_tree__prog_foreign__HeadVar__2_2)
#line 135 "prog_foreign.m"
{
#line 274 "prog_foreign.m"
  {
#line 274 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 274 "prog_foreign.m"
#line 274 "prog_foreign.m"
    switch (parse_tree__prog_foreign__HeadVar__1_1) {
#line 274 "prog_foreign.m"
      default:
#line 274 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = MR_FALSE;
#line 274 "prog_foreign.m"
        break;
#line 274 "prog_foreign.m"
      case (MR_Integer) 0:
#line 274 "prog_foreign.m"
        {
#line 274 "prog_foreign.m"
          *parse_tree__prog_foreign__HeadVar__2_2 = (MR_String) ".c";
#line 274 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 274 "prog_foreign.m"
        }
#line 274 "prog_foreign.m"
        break;
#line 274 "prog_foreign.m"
      case (MR_Integer) 1:
#line 275 "prog_foreign.m"
        {
#line 275 "prog_foreign.m"
          *parse_tree__prog_foreign__HeadVar__2_2 = (MR_String) ".cs";
#line 275 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 275 "prog_foreign.m"
        }
#line 274 "prog_foreign.m"
        break;
#line 274 "prog_foreign.m"
      case (MR_Integer) 2:
#line 276 "prog_foreign.m"
        {
#line 276 "prog_foreign.m"
          *parse_tree__prog_foreign__HeadVar__2_2 = (MR_String) ".java";
#line 276 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 276 "prog_foreign.m"
        }
#line 274 "prog_foreign.m"
        break;
#line 274 "prog_foreign.m"
    }
#line 274 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 274 "prog_foreign.m"
  }
#line 135 "prog_foreign.m"
}

#line 128 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__foreign_language_module_name_2_f_1(
#line 128 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__ModuleName_4,
#line 128 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__Lang_5)
#line 128 "prog_foreign.m"
{
#line 259 "prog_foreign.m"
  {
#line 259 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 259 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__FullyQualifiedModuleName_6;
#line 259 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Ending_8;
#line 259 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_12_12;
#line 259 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_13_13;

#line 263 "prog_foreign.m"
    {
#line 263 "prog_foreign.m"
      parse_tree__prog_foreign__V_13_13 = libs__globals__simple_foreign_language_string_1_f_0(parse_tree__prog_foreign__Lang_5);
    }
#line 263 "prog_foreign.m"
    {
#line 263 "prog_foreign.m"
      parse_tree__prog_foreign__V_12_12 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__V_13_13, (MR_String) "_code");
    }
#line 263 "prog_foreign.m"
    {
#line 263 "prog_foreign.m"
      parse_tree__prog_foreign__Ending_8 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_foreign__V_12_12);
    }
#line 267 "prog_foreign.m"
    if (((MR_tag((MR_Word) parse_tree__prog_foreign__ModuleName_4)) == (MR_mktag((MR_Integer) 1))))
#line 268 "prog_foreign.m"
      {
#line 268 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 0)));
#line 268 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_15_15;
#line 268 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 1)));

#line 269 "prog_foreign.m"
        {
#line 269 "prog_foreign.m"
          parse_tree__prog_foreign__V_15_15 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__Name_17, parse_tree__prog_foreign__Ending_8);
        }
#line 269 "prog_foreign.m"
        {
#line 269 "prog_foreign.m"
          parse_tree__prog_foreign__FullyQualifiedModuleName_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__FullyQualifiedModuleName_6, 0) = ((MR_Box) (parse_tree__prog_foreign__Module_10));
#line 269 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__FullyQualifiedModuleName_6, 1) = ((MR_Box) (parse_tree__prog_foreign__V_15_15));
#line 269 "prog_foreign.m"
        }
#line 268 "prog_foreign.m"
      }
#line 267 "prog_foreign.m"
    else
#line 265 "prog_foreign.m"
      {
#line 265 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 0)));
#line 265 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_16_16;

#line 266 "prog_foreign.m"
        {
#line 266 "prog_foreign.m"
          parse_tree__prog_foreign__V_16_16 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__Name_9, parse_tree__prog_foreign__Ending_8);
        }
#line 266 "prog_foreign.m"
        {
#line 266 "prog_foreign.m"
          parse_tree__prog_foreign__FullyQualifiedModuleName_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 266 "prog_foreign.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__FullyQualifiedModuleName_6, 0) = ((MR_Box) (parse_tree__prog_foreign__V_16_16));
#line 266 "prog_foreign.m"
        }
#line 265 "prog_foreign.m"
      }
#line 259 "prog_foreign.m"
    return parse_tree__prog_foreign__FullyQualifiedModuleName_6;
#line 259 "prog_foreign.m"
  }
#line 128 "prog_foreign.m"
}

#line 127 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign__foreign_language_module_name_2_f_0(
#line 127 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__ModuleName_4,
#line 127 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__Lang_5,
#line 127 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__FullyQualifiedModuleName_6)
#line 127 "prog_foreign.m"
{
#line 259 "prog_foreign.m"
  {
#line 259 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 259 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Ending_8;
#line 259 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_11_11;
#line 259 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_12_12;
#line 259 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_13_13;
#line 259 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_14_14;

#line 274 "prog_foreign.m"
#line 274 "prog_foreign.m"
    switch (parse_tree__prog_foreign__Lang_5) {
#line 274 "prog_foreign.m"
      default:
#line 274 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = MR_FALSE;
#line 274 "prog_foreign.m"
        break;
#line 274 "prog_foreign.m"
      case (MR_Integer) 0:
#line 274 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 274 "prog_foreign.m"
        break;
#line 274 "prog_foreign.m"
      case (MR_Integer) 1:
#line 275 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 274 "prog_foreign.m"
        break;
#line 274 "prog_foreign.m"
      case (MR_Integer) 2:
#line 276 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 274 "prog_foreign.m"
        break;
#line 274 "prog_foreign.m"
    }
#line 259 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 259 "prog_foreign.m"
      {
#line 263 "prog_foreign.m"
        parse_tree__prog_foreign__V_11_11 = (MR_String) "__";
#line 263 "prog_foreign.m"
        {
#line 263 "prog_foreign.m"
          parse_tree__prog_foreign__V_13_13 = libs__globals__simple_foreign_language_string_1_f_0(parse_tree__prog_foreign__Lang_5);
        }
#line 263 "prog_foreign.m"
        parse_tree__prog_foreign__V_14_14 = (MR_String) "_code";
#line 263 "prog_foreign.m"
        {
#line 263 "prog_foreign.m"
          parse_tree__prog_foreign__V_12_12 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__V_13_13, parse_tree__prog_foreign__V_14_14);
        }
#line 263 "prog_foreign.m"
        {
#line 263 "prog_foreign.m"
          parse_tree__prog_foreign__Ending_8 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__V_11_11, parse_tree__prog_foreign__V_12_12);
        }
#line 267 "prog_foreign.m"
        if (((MR_tag((MR_Word) parse_tree__prog_foreign__ModuleName_4)) == (MR_mktag((MR_Integer) 1))))
#line 268 "prog_foreign.m"
          {
#line 268 "prog_foreign.m"
            MR_Word parse_tree__prog_foreign__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 0)));
#line 268 "prog_foreign.m"
            MR_String parse_tree__prog_foreign__V_15_15;
#line 268 "prog_foreign.m"
            MR_String parse_tree__prog_foreign__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 1)));

#line 269 "prog_foreign.m"
            {
#line 269 "prog_foreign.m"
              parse_tree__prog_foreign__V_15_15 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__Name_17, parse_tree__prog_foreign__Ending_8);
            }
#line 269 "prog_foreign.m"
            {
#line 269 "prog_foreign.m"
              MR_Word base;
#line 269 "prog_foreign.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "prog_foreign.m"
              *parse_tree__prog_foreign__FullyQualifiedModuleName_6 = base;
#line 269 "prog_foreign.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_foreign__Module_10));
#line 269 "prog_foreign.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_foreign__V_15_15));
#line 269 "prog_foreign.m"
            }
#line 268 "prog_foreign.m"
          }
#line 267 "prog_foreign.m"
        else
#line 265 "prog_foreign.m"
          {
#line 265 "prog_foreign.m"
            MR_String parse_tree__prog_foreign__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 0)));
#line 265 "prog_foreign.m"
            MR_String parse_tree__prog_foreign__V_16_16;

#line 266 "prog_foreign.m"
            {
#line 266 "prog_foreign.m"
              parse_tree__prog_foreign__V_16_16 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__Name_9, parse_tree__prog_foreign__Ending_8);
            }
#line 266 "prog_foreign.m"
            {
#line 266 "prog_foreign.m"
              MR_Word base;
#line 266 "prog_foreign.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 266 "prog_foreign.m"
              *parse_tree__prog_foreign__FullyQualifiedModuleName_6 = base;
#line 266 "prog_foreign.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_foreign__V_16_16));
#line 266 "prog_foreign.m"
            }
#line 265 "prog_foreign.m"
          }
#line 267 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 259 "prog_foreign.m"
      }
#line 259 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 259 "prog_foreign.m"
  }
#line 127 "prog_foreign.m"
}

#line 111 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__foreign_import_module_name_from_module_2_f_0(
#line 111 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__ModuleForeignImported_4,
#line 111 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__CurrentModule_5)
#line 111 "prog_foreign.m"
{
#line 219 "prog_foreign.m"
  {
#line 219 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 219 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__ImportedForeignCodeModuleName_6;
#line 219 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Lang_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ModuleForeignImported_4, (MR_Integer) 0)));
#line 219 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__ForeignImportModule_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ModuleForeignImported_4, (MR_Integer) 1)));

#line 3662 "parse_tree.prog_foreign.c"
#line 3663 "parse_tree.prog_foreign.c"
    switch (parse_tree__prog_foreign__Lang_12) {
#line 3665 "parse_tree.prog_foreign.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 3667 "parse_tree.prog_foreign.c"
      case (MR_Integer) 0:
#line 225 "prog_foreign.m"
        parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = parse_tree__prog_foreign__ForeignImportModule_13;
#line 3671 "parse_tree.prog_foreign.c"
        break;
#line 3673 "parse_tree.prog_foreign.c"
      case (MR_Integer) 1:
#line 3675 "parse_tree.prog_foreign.c"
        {
#line 3677 "parse_tree.prog_foreign.c"
          MR_Word parse_tree__prog_foreign__ImportedForeignCodeModuleName1_26;

#line 215 "prog_foreign.m"
          {
#line 215 "prog_foreign.m"
            parse_tree__prog_foreign__ImportedForeignCodeModuleName1_26 = parse_tree__prog_foreign__foreign_language_module_name_2_f_1(parse_tree__prog_foreign__ForeignImportModule_13, parse_tree__prog_foreign__Lang_12);
          }
#line 249 "prog_foreign.m"
          {
#line 249 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__ImportedForeignCodeModuleName1_26);
          }
#line 249 "prog_foreign.m"
          if (parse_tree__prog_foreign__succeeded)
#line 249 "prog_foreign.m"
            {
#line 250 "prog_foreign.m"
              {
#line 250 "prog_foreign.m"
                parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__CurrentModule_5);
              }
#line 250 "prog_foreign.m"
              parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 249 "prog_foreign.m"
            }
#line 253 "prog_foreign.m"
          if (parse_tree__prog_foreign__succeeded)
#line 252 "prog_foreign.m"
            {
#line 252 "prog_foreign.m"
              parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = (MR_Word) &parse_tree__prog_foreign_scalar_common_2[0];
#line 252 "prog_foreign.m"
            }
#line 253 "prog_foreign.m"
          else
#line 254 "prog_foreign.m"
            parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = parse_tree__prog_foreign__ImportedForeignCodeModuleName1_26;
#line 3715 "parse_tree.prog_foreign.c"
        }
#line 3717 "parse_tree.prog_foreign.c"
        break;
#line 3719 "parse_tree.prog_foreign.c"
      case (MR_Integer) 3:
#line 253 "prog_foreign.m"
        {
#line 249 "prog_foreign.m"
          {
#line 249 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__ForeignImportModule_13);
          }
#line 249 "prog_foreign.m"
          if (parse_tree__prog_foreign__succeeded)
#line 249 "prog_foreign.m"
            {
#line 250 "prog_foreign.m"
              {
#line 250 "prog_foreign.m"
                parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__CurrentModule_5);
              }
#line 250 "prog_foreign.m"
              parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 249 "prog_foreign.m"
            }
#line 253 "prog_foreign.m"
          if (parse_tree__prog_foreign__succeeded)
#line 252 "prog_foreign.m"
            {
#line 252 "prog_foreign.m"
              parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = (MR_Word) &parse_tree__prog_foreign_scalar_common_2[0];
#line 252 "prog_foreign.m"
            }
#line 253 "prog_foreign.m"
          else
#line 254 "prog_foreign.m"
            parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = parse_tree__prog_foreign__ForeignImportModule_13;
#line 253 "prog_foreign.m"
        }
#line 3755 "parse_tree.prog_foreign.c"
        break;
#line 3757 "parse_tree.prog_foreign.c"
      case (MR_Integer) 2:
#line 253 "prog_foreign.m"
        {
#line 249 "prog_foreign.m"
          {
#line 249 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__ForeignImportModule_13);
          }
#line 249 "prog_foreign.m"
          if (parse_tree__prog_foreign__succeeded)
#line 249 "prog_foreign.m"
            {
#line 250 "prog_foreign.m"
              {
#line 250 "prog_foreign.m"
                parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__CurrentModule_5);
              }
#line 250 "prog_foreign.m"
              parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 249 "prog_foreign.m"
            }
#line 253 "prog_foreign.m"
          if (parse_tree__prog_foreign__succeeded)
#line 252 "prog_foreign.m"
            {
#line 252 "prog_foreign.m"
              parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = (MR_Word) &parse_tree__prog_foreign_scalar_common_2[0];
#line 252 "prog_foreign.m"
            }
#line 253 "prog_foreign.m"
          else
#line 254 "prog_foreign.m"
            parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = parse_tree__prog_foreign__ForeignImportModule_13;
#line 253 "prog_foreign.m"
        }
#line 3793 "parse_tree.prog_foreign.c"
        break;
#line 3795 "parse_tree.prog_foreign.c"
    }
#line 219 "prog_foreign.m"
    return parse_tree__prog_foreign__ImportedForeignCodeModuleName_6;
#line 219 "prog_foreign.m"
  }
#line 111 "prog_foreign.m"
}

#line 104 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__foreign_import_module_name_1_f_0(
#line 104 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__ImportModule_3)
#line 104 "prog_foreign.m"
{
#line 202 "prog_foreign.m"
  {
#line 202 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 202 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__ModuleName_4;
#line 202 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Lang_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ImportModule_3, (MR_Integer) 0)));
#line 202 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__ForeignImportModule_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ImportModule_3, (MR_Integer) 1)));

#line 207 "prog_foreign.m"
#line 207 "prog_foreign.m"
    switch (parse_tree__prog_foreign__Lang_5) {
#line 207 "prog_foreign.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 207 "prog_foreign.m"
      case (MR_Integer) 0:
#line 206 "prog_foreign.m"
        parse_tree__prog_foreign__ModuleName_4 = parse_tree__prog_foreign__ForeignImportModule_6;
#line 207 "prog_foreign.m"
        break;
#line 207 "prog_foreign.m"
      case (MR_Integer) 1:
#line 215 "prog_foreign.m"
        {
#line 215 "prog_foreign.m"
          parse_tree__prog_foreign__ModuleName_4 = parse_tree__prog_foreign__foreign_language_module_name_2_f_1(parse_tree__prog_foreign__ForeignImportModule_6, parse_tree__prog_foreign__Lang_5);
        }
#line 207 "prog_foreign.m"
        break;
#line 207 "prog_foreign.m"
      case (MR_Integer) 3:
#line 212 "prog_foreign.m"
        parse_tree__prog_foreign__ModuleName_4 = parse_tree__prog_foreign__ForeignImportModule_6;
#line 207 "prog_foreign.m"
        break;
#line 207 "prog_foreign.m"
      case (MR_Integer) 2:
#line 209 "prog_foreign.m"
        parse_tree__prog_foreign__ModuleName_4 = parse_tree__prog_foreign__ForeignImportModule_6;
#line 207 "prog_foreign.m"
        break;
#line 207 "prog_foreign.m"
    }
#line 202 "prog_foreign.m"
    return parse_tree__prog_foreign__ModuleName_4;
#line 202 "prog_foreign.m"
  }
#line 104 "prog_foreign.m"
}

#line 92 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign__foreign_body_code_is_for_lang_2_p_0(
#line 92 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__Lang_3,
#line 92 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__BodyCode_4)
#line 92 "prog_foreign.m"
{
#line 200 "prog_foreign.m"
  {
#line 200 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 200 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__BodyCode_4, (MR_Integer) 0)));
#line 200 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__BodyCode_4, (MR_Integer) 1)));
#line 200 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__BodyCode_4, (MR_Integer) 2)));

#line 200 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__Lang_3 == parse_tree__prog_foreign__V_7_7);
#line 200 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 200 "prog_foreign.m"
  }
#line 92 "prog_foreign.m"
}

#line 90 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign__foreign_decl_code_is_for_lang_2_p_0(
#line 90 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__Lang_3,
#line 90 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__DeclCode_4)
#line 90 "prog_foreign.m"
{
#line 197 "prog_foreign.m"
  {
#line 197 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 197 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__DeclCode_4, (MR_Integer) 0)));
#line 197 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__DeclCode_4, (MR_Integer) 1)));
#line 197 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__DeclCode_4, (MR_Integer) 2)));
#line 197 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__DeclCode_4, (MR_Integer) 3)));

#line 197 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__Lang_3 == parse_tree__prog_foreign__V_8_8);
#line 197 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 197 "prog_foreign.m"
  }
#line 90 "prog_foreign.m"
}

void mercury__parse_tree__prog_foreign__init(void)
{
}

void mercury__parse_tree__prog_foreign__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0);
	MR_register_type_ctor_info(&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_codes_0);
	MR_register_type_ctor_info(&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0);
	MR_register_type_ctor_info(&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_codes_0);
	MR_register_type_ctor_info(&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0);
	MR_register_type_ctor_info(&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_decls_0);
	MR_register_type_ctor_info(&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0);
	MR_register_type_ctor_info(&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_defns_0);
}

void mercury__parse_tree__prog_foreign__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_foreign. */
