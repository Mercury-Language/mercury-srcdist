/*
** Automatically generated from `prog_foreign.m'
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


/* :- module parse_tree.prog_foreign. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_foreign__init
ENDINIT
*/

#include "parse_tree.prog_foreign.mih"


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
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 313 "prog_foreign.m"
struct parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0_s {
#line 313 "prog_foreign.m"
  MR_Box * parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__wrapper_arg_1;
#line 313 "prog_foreign.m"
  MR_Cont parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont;
#line 313 "prog_foreign.m"
  void * parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont_env_ptr;
#line 313 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__conv0_HeadVar__1_1;
#line 313 "prog_foreign.m"
};


#line 111 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_body_code_0_0[3];

#line 114 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_body_code_0_0[3];

#line 117 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_body_code_0_0;

#line 120 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_body_code_0_0[1];

#line 123 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_body_code_0[1];

#line 126 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_body_code_0[1];

#line 129 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_body_code_0[1];

#line 132 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__cord__ti_cord_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;

#line 135 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_decl_code_0_0[4];

#line 138 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_decl_code_0_0[4];

#line 141 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_decl_code_0_0;

#line 144 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_decl_code_0_0[1];

#line 147 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_decl_code_0[1];

#line 150 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_decl_code_0[1];

#line 153 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_decl_code_0[1];

#line 156 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__cord__ti_cord_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;

#line 159 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_export_decl_0_0[4];

#line 162 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_export_decl_0_0[4];

#line 165 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decl_0_0;

#line 168 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decl_0_0[1];

#line 171 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decl_0[1];

#line 174 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_export_decl_0[1];

#line 177 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_decl_0[1];

#line 180 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;

#line 183 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0;

#line 186 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_export_decls_0_0[2];

#line 189 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_export_decls_0_0[2];

#line 192 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decls_0_0;

#line 195 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decls_0_0[1];

#line 198 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decls_0[1];

#line 201 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_export_decls_0[1];

#line 204 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_decls_0[1];

#line 207 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_defn_0[1];

#line 210 "parse_tree.prog_foreign.c"
static const MR_NotagFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__notag_functor_desc_foreign_export_defn_0;

#line 213 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0;

#line 216 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_code_0_0_10001(
#line 219 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 221 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 224 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_code_0_0_10001(
#line 227 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 229 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 231 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 234 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_codes_0_0_10001(
#line 237 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 239 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 242 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_codes_0_0_10001(
#line 245 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 247 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 249 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 252 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_code_0_0_10001(
#line 255 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 257 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 260 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_code_0_0_10001(
#line 263 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 265 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 267 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 270 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_codes_0_0_10001(
#line 273 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 275 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 278 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_codes_0_0_10001(
#line 281 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 283 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 285 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 288 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decl_0_0_10001(
#line 291 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 293 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 296 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decl_0_0_10001(
#line 299 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 301 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 303 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 306 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decls_0_0_10001(
#line 309 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 311 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 314 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decls_0_0_10001(
#line 317 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 319 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 321 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 324 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_defn_0_0_10001(
#line 327 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 329 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 332 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_defn_0_0_10001(
#line 335 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 337 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 339 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 342 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_defns_0_0_10001(
#line 345 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 347 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

#line 350 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_defns_0_0_10001(
#line 353 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 355 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 357 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

#line 427 "prog_foreign.m"
static MR_String MR_CALL 
parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_f_0(
#line 427 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__String_3);

#line 318 "prog_foreign.m"
static void MR_CALL 
parse_tree__prog_foreign__valid_foreign_language_1_p_1(
#line 318 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 318 "prog_foreign.m"
  MR_Cont parse_tree__prog_foreign__cont,
#line 318 "prog_foreign.m"
  void * parse_tree__prog_foreign__cont_env_ptr);

#line 313 "prog_foreign.m"
static void MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0_1(
#line 313 "prog_foreign.m"
  void * parse_tree__prog_foreign__env_ptr_arg);

#line 313 "prog_foreign.m"
static void MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0_2(
#line 313 "prog_foreign.m"
  MR_Box parse_tree__prog_foreign__closure_arg,
#line 313 "prog_foreign.m"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 313 "prog_foreign.m"
  MR_Cont parse_tree__prog_foreign__cont,
#line 313 "prog_foreign.m"
  void * parse_tree__prog_foreign__cont_env_ptr);


static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_1[5][2];

static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_2[1][1];

static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_3[1][4];

static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_4[1][3];


#line 402 "prog_foreign.m"
/* sealed */ struct parse_tree__prog_foreign__vector_common_type_5_0_s {
#line 402 "prog_foreign.m"
  const MR_String parse_tree__prog_foreign__vector_common_type_5_0__vct_5_f_0;
#line 402 "prog_foreign.m"
};

static /* final */ const struct parse_tree__prog_foreign__vector_common_type_5_0_s parse_tree__prog_foreign_vector_common_5[16];

#line 320 "prog_foreign.m"
/* sealed */ struct parse_tree__prog_foreign__vector_common_type_6_0_s {
#line 320 "prog_foreign.m"
  const MR_Word parse_tree__prog_foreign__vector_common_type_6_0__vct_6_f_0;
#line 320 "prog_foreign.m"
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



#line 513 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_body_code_0_0[3] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_literal_or_include_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 520 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_body_code_0_0[3] = {
  (MR_String) "fbody_lang",
  (MR_String) "fbody_code",
  (MR_String) "fbody_context"
};

#line 527 "parse_tree.prog_foreign.c"
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

#line 542 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_body_code_0_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_body_code_0_0
};

#line 547 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_body_code_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_body_code_0_0
  }
};

#line 556 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_body_code_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_body_code_0_0
};

#line 561 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_body_code_0[1] = {
  (MR_Integer) 0
};

#line 566 "parse_tree.prog_foreign.c"
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

#line 583 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__cord__ti_cord_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0
  }
};

#line 591 "parse_tree.prog_foreign.c"
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

#line 608 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_decl_code_0_0[4] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_decl_is_local_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_literal_or_include_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 616 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_decl_code_0_0[4] = {
  (MR_String) "fdecl_lang",
  (MR_String) "fdecl_is_local",
  (MR_String) "fdecl_code",
  (MR_String) "fdecl_context"
};

#line 624 "parse_tree.prog_foreign.c"
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

#line 639 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_decl_code_0_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_decl_code_0_0
};

#line 644 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_decl_code_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_decl_code_0_0
  }
};

#line 653 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_decl_code_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_decl_code_0_0
};

#line 658 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_decl_code_0[1] = {
  (MR_Integer) 0
};

#line 663 "parse_tree.prog_foreign.c"
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

#line 680 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__cord__ti_cord_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0
  }
};

#line 688 "parse_tree.prog_foreign.c"
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

#line 705 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_export_decl_0_0[4] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 713 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_export_decl_0_0[4] = {
  (MR_String) "fexp_decl_lang",
  (MR_String) "fexp_decl_ret_type",
  (MR_String) "fexp_decl_func_name",
  (MR_String) "fexp_decl_arg_decls"
};

#line 721 "parse_tree.prog_foreign.c"
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

#line 736 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decl_0_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decl_0_0
};

#line 741 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decl_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decl_0_0
  }
};

#line 750 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_export_decl_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decl_0_0
};

#line 755 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_decl_0[1] = {
  (MR_Integer) 0
};

#line 760 "parse_tree.prog_foreign.c"
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

#line 777 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0
  }
};

#line 785 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0
  }
};

#line 793 "parse_tree.prog_foreign.c"
static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_export_decls_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0
};

#line 799 "parse_tree.prog_foreign.c"
static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_export_decls_0_0[2] = {
  (MR_String) "fexp_decls_codes",
  (MR_String) "fexp_decls_list"
};

#line 805 "parse_tree.prog_foreign.c"
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

#line 820 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decls_0_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decls_0_0
};

#line 825 "parse_tree.prog_foreign.c"
static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decls_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decls_0_0
  }
};

#line 834 "parse_tree.prog_foreign.c"
static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_export_decls_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decls_0_0
};

#line 839 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_decls_0[1] = {
  (MR_Integer) 0
};

#line 844 "parse_tree.prog_foreign.c"
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

#line 861 "parse_tree.prog_foreign.c"
static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_defn_0[1] = {
  (MR_Integer) 0
};

#line 866 "parse_tree.prog_foreign.c"
static const MR_NotagFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__notag_functor_desc_foreign_export_defn_0 = {
  (MR_String) "foreign_export_defn",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 873 "parse_tree.prog_foreign.c"
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

#line 890 "parse_tree.prog_foreign.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0
  }
};

#line 898 "parse_tree.prog_foreign.c"
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

#line 915 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_code_0_0_10001(
#line 918 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 920 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 922 "parse_tree.prog_foreign.c"
{
#line 924 "parse_tree.prog_foreign.c"
  {
#line 926 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 929 "parse_tree.prog_foreign.c"
    {
#line 931 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_body_code_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 934 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 936 "parse_tree.prog_foreign.c"
  }
#line 938 "parse_tree.prog_foreign.c"
}

#line 941 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_code_0_0_10001(
#line 944 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 946 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 948 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 950 "parse_tree.prog_foreign.c"
{
#line 952 "parse_tree.prog_foreign.c"
  {
#line 954 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 957 "parse_tree.prog_foreign.c"
    {
#line 959 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_body_code_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 962 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 964 "parse_tree.prog_foreign.c"
  }
#line 966 "parse_tree.prog_foreign.c"
}

#line 969 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_codes_0_0_10001(
#line 972 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 974 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 976 "parse_tree.prog_foreign.c"
{
#line 978 "parse_tree.prog_foreign.c"
  {
#line 980 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 983 "parse_tree.prog_foreign.c"
    {
#line 985 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_body_codes_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 988 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 990 "parse_tree.prog_foreign.c"
  }
#line 992 "parse_tree.prog_foreign.c"
}

#line 995 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_codes_0_0_10001(
#line 998 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1000 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1002 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1004 "parse_tree.prog_foreign.c"
{
#line 1006 "parse_tree.prog_foreign.c"
  {
#line 1008 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1011 "parse_tree.prog_foreign.c"
    {
#line 1013 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_body_codes_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1016 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1018 "parse_tree.prog_foreign.c"
  }
#line 1020 "parse_tree.prog_foreign.c"
}

#line 1023 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_code_0_0_10001(
#line 1026 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1028 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1030 "parse_tree.prog_foreign.c"
{
#line 1032 "parse_tree.prog_foreign.c"
  {
#line 1034 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1037 "parse_tree.prog_foreign.c"
    {
#line 1039 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_decl_code_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1042 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1044 "parse_tree.prog_foreign.c"
  }
#line 1046 "parse_tree.prog_foreign.c"
}

#line 1049 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_code_0_0_10001(
#line 1052 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1054 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1056 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1058 "parse_tree.prog_foreign.c"
{
#line 1060 "parse_tree.prog_foreign.c"
  {
#line 1062 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1065 "parse_tree.prog_foreign.c"
    {
#line 1067 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_decl_code_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1070 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1072 "parse_tree.prog_foreign.c"
  }
#line 1074 "parse_tree.prog_foreign.c"
}

#line 1077 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_codes_0_0_10001(
#line 1080 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1082 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1084 "parse_tree.prog_foreign.c"
{
#line 1086 "parse_tree.prog_foreign.c"
  {
#line 1088 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1091 "parse_tree.prog_foreign.c"
    {
#line 1093 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_decl_codes_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1096 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1098 "parse_tree.prog_foreign.c"
  }
#line 1100 "parse_tree.prog_foreign.c"
}

#line 1103 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_codes_0_0_10001(
#line 1106 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1108 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1110 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1112 "parse_tree.prog_foreign.c"
{
#line 1114 "parse_tree.prog_foreign.c"
  {
#line 1116 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1119 "parse_tree.prog_foreign.c"
    {
#line 1121 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_decl_codes_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1124 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1126 "parse_tree.prog_foreign.c"
  }
#line 1128 "parse_tree.prog_foreign.c"
}

#line 1131 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decl_0_0_10001(
#line 1134 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1136 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1138 "parse_tree.prog_foreign.c"
{
#line 1140 "parse_tree.prog_foreign.c"
  {
#line 1142 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1145 "parse_tree.prog_foreign.c"
    {
#line 1147 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_export_decl_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1150 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1152 "parse_tree.prog_foreign.c"
  }
#line 1154 "parse_tree.prog_foreign.c"
}

#line 1157 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decl_0_0_10001(
#line 1160 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1162 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1164 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1166 "parse_tree.prog_foreign.c"
{
#line 1168 "parse_tree.prog_foreign.c"
  {
#line 1170 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1173 "parse_tree.prog_foreign.c"
    {
#line 1175 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_export_decl_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1178 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1180 "parse_tree.prog_foreign.c"
  }
#line 1182 "parse_tree.prog_foreign.c"
}

#line 1185 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decls_0_0_10001(
#line 1188 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1190 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1192 "parse_tree.prog_foreign.c"
{
#line 1194 "parse_tree.prog_foreign.c"
  {
#line 1196 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1199 "parse_tree.prog_foreign.c"
    {
#line 1201 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_export_decls_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1204 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1206 "parse_tree.prog_foreign.c"
  }
#line 1208 "parse_tree.prog_foreign.c"
}

#line 1211 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decls_0_0_10001(
#line 1214 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1216 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1218 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1220 "parse_tree.prog_foreign.c"
{
#line 1222 "parse_tree.prog_foreign.c"
  {
#line 1224 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1227 "parse_tree.prog_foreign.c"
    {
#line 1229 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_export_decls_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1232 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1234 "parse_tree.prog_foreign.c"
  }
#line 1236 "parse_tree.prog_foreign.c"
}

#line 1239 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_defn_0_0_10001(
#line 1242 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1244 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1246 "parse_tree.prog_foreign.c"
{
#line 1248 "parse_tree.prog_foreign.c"
  {
#line 1250 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1253 "parse_tree.prog_foreign.c"
    {
#line 1255 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_export_defn_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1258 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1260 "parse_tree.prog_foreign.c"
  }
#line 1262 "parse_tree.prog_foreign.c"
}

#line 1265 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_defn_0_0_10001(
#line 1268 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1270 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1272 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1274 "parse_tree.prog_foreign.c"
{
#line 1276 "parse_tree.prog_foreign.c"
  {
#line 1278 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1281 "parse_tree.prog_foreign.c"
    {
#line 1283 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_export_defn_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1286 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1288 "parse_tree.prog_foreign.c"
  }
#line 1290 "parse_tree.prog_foreign.c"
}

#line 1293 "parse_tree.prog_foreign.c"
static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_defns_0_0_10001(
#line 1296 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
#line 1298 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
#line 1300 "parse_tree.prog_foreign.c"
{
#line 1302 "parse_tree.prog_foreign.c"
  {
#line 1304 "parse_tree.prog_foreign.c"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 1307 "parse_tree.prog_foreign.c"
    {
#line 1309 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_export_defns_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
#line 1312 "parse_tree.prog_foreign.c"
    return parse_tree__prog_foreign__succeeded;
#line 1314 "parse_tree.prog_foreign.c"
  }
#line 1316 "parse_tree.prog_foreign.c"
}

#line 1319 "parse_tree.prog_foreign.c"
static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_defns_0_0_10001(
#line 1322 "parse_tree.prog_foreign.c"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 1324 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
#line 1326 "parse_tree.prog_foreign.c"
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
#line 1328 "parse_tree.prog_foreign.c"
{
#line 1330 "parse_tree.prog_foreign.c"
  {
#line 1332 "parse_tree.prog_foreign.c"
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

#line 1335 "parse_tree.prog_foreign.c"
    {
#line 1337 "parse_tree.prog_foreign.c"
      parse_tree__prog_foreign____Compare____foreign_export_defns_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
#line 1340 "parse_tree.prog_foreign.c"
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
#line 1342 "parse_tree.prog_foreign.c"
  }
#line 1344 "parse_tree.prog_foreign.c"
}

#line 145 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_f_0(
#line 145 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__Target_7,
#line 145 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__Lang1_8,
#line 145 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__Lang2_9)
#line 145 "prog_foreign.m"
{
#line 286 "prog_foreign.m"
  {
#line 286 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 286 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Prefer_10;

#line 286 "prog_foreign.m"
#line 286 "prog_foreign.m"
    switch (parse_tree__prog_foreign__Target_7) {
#line 286 "prog_foreign.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 286 "prog_foreign.m"
      case (MR_Integer) 0:
#line 288 "prog_foreign.m"
        {
#line 288 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__Lang2_9 == (MR_Integer) 0);
#line 288 "prog_foreign.m"
          if (parse_tree__prog_foreign__succeeded)
#line 288 "prog_foreign.m"
            {
#line 288 "prog_foreign.m"
              parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__Lang1_8 == (MR_Integer) 0);
#line 288 "prog_foreign.m"
              parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 288 "prog_foreign.m"
            }
#line 288 "prog_foreign.m"
          if (parse_tree__prog_foreign__succeeded)
#line 289 "prog_foreign.m"
            parse_tree__prog_foreign__Prefer_10 = (MR_Integer) 1;
#line 288 "prog_foreign.m"
          else
#line 291 "prog_foreign.m"
            parse_tree__prog_foreign__Prefer_10 = (MR_Integer) 0;
#line 288 "prog_foreign.m"
        }
#line 286 "prog_foreign.m"
        break;
#line 286 "prog_foreign.m"
      case (MR_Integer) 1:
#line 295 "prog_foreign.m"
        parse_tree__prog_foreign__Prefer_10 = (MR_Integer) 0;
#line 286 "prog_foreign.m"
        break;
#line 286 "prog_foreign.m"
      case (MR_Integer) 3:
#line 307 "prog_foreign.m"
        parse_tree__prog_foreign__Prefer_10 = (MR_Integer) 0;
#line 286 "prog_foreign.m"
        break;
#line 286 "prog_foreign.m"
      case (MR_Integer) 2:
#line 301 "prog_foreign.m"
        parse_tree__prog_foreign__Prefer_10 = (MR_Integer) 0;
#line 286 "prog_foreign.m"
        break;
#line 286 "prog_foreign.m"
    }
#line 286 "prog_foreign.m"
    return parse_tree__prog_foreign__Prefer_10;
#line 286 "prog_foreign.m"
  }
#line 145 "prog_foreign.m"
}

#line 59 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_defns_0_0(
#line 59 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 59 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 59 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
#line 59 "prog_foreign.m"
{
#line 59 "prog_foreign.m"
  {
#line 59 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 59 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar1_4 = parse_tree__prog_foreign__HeadVar__2_2;
#line 59 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar2_5 = parse_tree__prog_foreign__HeadVar__3_3;

#line 59 "prog_foreign.m"
    {
#line 59 "prog_foreign.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[4], parse_tree__prog_foreign__HeadVar__1_1, ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar2_5)));
    }
#line 59 "prog_foreign.m"
  }
#line 59 "prog_foreign.m"
}

#line 59 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_defns_0_0(
#line 59 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
#line 59 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
#line 59 "prog_foreign.m"
{
#line 59 "prog_foreign.m"
  {
#line 59 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 59 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar1_3 = parse_tree__prog_foreign__HeadVar__1_1;
#line 59 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar2_4 = parse_tree__prog_foreign__HeadVar__2_2;

#line 59 "prog_foreign.m"
    {
#line 59 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[4], ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar2_4)));
    }
#line 59 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 59 "prog_foreign.m"
  }
#line 59 "prog_foreign.m"
}

#line 61 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_defn_0_0(
#line 61 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 61 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 61 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
#line 61 "prog_foreign.m"
{
#line 61 "prog_foreign.m"
  {
#line 61 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 61 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_6 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;
#line 61 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_7 = (MR_Integer) parse_tree__prog_foreign__HeadVar__3_3;

#line 61 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_6 == parse_tree__prog_foreign__CastY_7);
#line 61 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 1509 "parse_tree.prog_foreign.c"
      *parse_tree__prog_foreign__HeadVar__1_1 = (MR_Integer) 0;
#line 61 "prog_foreign.m"
    else
#line 61 "prog_foreign.m"
      {
#line 61 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_4_4 = (MR_String) parse_tree__prog_foreign__HeadVar__2_2;
#line 61 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_5_5 = (MR_String) parse_tree__prog_foreign__HeadVar__3_3;

#line 61 "prog_foreign.m"
        {
#line 61 "prog_foreign.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__prog_foreign__HeadVar__1_1, parse_tree__prog_foreign__V_4_4, parse_tree__prog_foreign__V_5_5);
        }
#line 61 "prog_foreign.m"
      }
#line 61 "prog_foreign.m"
  }
#line 61 "prog_foreign.m"
}

#line 61 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_defn_0_0(
#line 61 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
#line 61 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
#line 61 "prog_foreign.m"
{
#line 61 "prog_foreign.m"
  {
#line 61 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 61 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_5 = (MR_Integer) parse_tree__prog_foreign__HeadVar__1_1;
#line 61 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_6 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;

#line 61 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_5 == parse_tree__prog_foreign__CastY_6);
#line 61 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 61 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 61 "prog_foreign.m"
    else
#line 61 "prog_foreign.m"
      {
#line 61 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_3_3 = (MR_String) parse_tree__prog_foreign__HeadVar__1_1;
#line 61 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_4_4 = (MR_String) parse_tree__prog_foreign__HeadVar__2_2;

#line 1565 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (strcmp(parse_tree__prog_foreign__V_3_3, parse_tree__prog_foreign__V_4_4) == 0);
#line 61 "prog_foreign.m"
      }
#line 61 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 61 "prog_foreign.m"
  }
#line 61 "prog_foreign.m"
}

#line 68 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decls_0_0(
#line 68 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 68 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 68 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
#line 68 "prog_foreign.m"
{
#line 68 "prog_foreign.m"
  {
#line 68 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 68 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_9 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;
#line 68 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_10 = (MR_Integer) parse_tree__prog_foreign__HeadVar__3_3;

#line 68 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_9 == parse_tree__prog_foreign__CastY_10);
#line 68 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 1600 "parse_tree.prog_foreign.c"
      *parse_tree__prog_foreign__HeadVar__1_1 = (MR_Integer) 0;
#line 68 "prog_foreign.m"
    else
#line 68 "prog_foreign.m"
      {
#line 68 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 68 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 68 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 0)));
#line 68 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 1)));
#line 68 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_8_8;

#line 68 "prog_foreign.m"
        {
#line 68 "prog_foreign.m"
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[2], &parse_tree__prog_foreign__V_8_8, ((MR_Box) (parse_tree__prog_foreign__V_4_4)), ((MR_Box) (parse_tree__prog_foreign__V_6_6)));
        }
#line 1622 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_8_8 == (MR_Integer) 0);
#line 68 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 68 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 68 "prog_foreign.m"
          *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_8_8;
#line 68 "prog_foreign.m"
        else
#line 68 "prog_foreign.m"
          {
#line 68 "prog_foreign.m"
            {
#line 68 "prog_foreign.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[3], parse_tree__prog_foreign__HeadVar__1_1, ((MR_Box) (parse_tree__prog_foreign__V_5_5)), ((MR_Box) (parse_tree__prog_foreign__V_7_7)));
            }
#line 68 "prog_foreign.m"
          }
#line 68 "prog_foreign.m"
      }
#line 68 "prog_foreign.m"
  }
#line 68 "prog_foreign.m"
}

#line 68 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decls_0_0(
#line 68 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
#line 68 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
#line 68 "prog_foreign.m"
{
#line 68 "prog_foreign.m"
  {
#line 68 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 68 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_7 = (MR_Integer) parse_tree__prog_foreign__HeadVar__1_1;
#line 68 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_8 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;

#line 68 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_7 == parse_tree__prog_foreign__CastY_8);
#line 68 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 68 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 68 "prog_foreign.m"
    else
#line 68 "prog_foreign.m"
      {
#line 68 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__TypeInfo_10_10;
#line 68 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 68 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 1)));
#line 68 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 68 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));

#line 1687 "parse_tree.prog_foreign.c"
        {
#line 1689 "parse_tree.prog_foreign.c"
          parse_tree__prog_foreign__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[2], ((MR_Box) (parse_tree__prog_foreign__V_3_3)), ((MR_Box) (parse_tree__prog_foreign__V_5_5)));
        }
#line 68 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 68 "prog_foreign.m"
          {
#line 1696 "parse_tree.prog_foreign.c"
            parse_tree__prog_foreign__TypeInfo_10_10 = (MR_Word) &parse_tree__prog_foreign_scalar_common_1[3];
#line 1698 "parse_tree.prog_foreign.c"
            {
#line 1700 "parse_tree.prog_foreign.c"
              parse_tree__prog_foreign__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_foreign__TypeInfo_10_10, ((MR_Box) (parse_tree__prog_foreign__V_4_4)), ((MR_Box) (parse_tree__prog_foreign__V_6_6)));
            }
#line 68 "prog_foreign.m"
          }
#line 68 "prog_foreign.m"
      }
#line 68 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 68 "prog_foreign.m"
  }
#line 68 "prog_foreign.m"
}

#line 74 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decl_0_0(
#line 74 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 74 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 74 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
#line 74 "prog_foreign.m"
{
#line 74 "prog_foreign.m"
  {
#line 74 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 74 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_15 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;
#line 74 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_16 = (MR_Integer) parse_tree__prog_foreign__HeadVar__3_3;

#line 74 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_15 == parse_tree__prog_foreign__CastY_16);
#line 74 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 1738 "parse_tree.prog_foreign.c"
      *parse_tree__prog_foreign__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "prog_foreign.m"
    else
#line 74 "prog_foreign.m"
      {
#line 74 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 74 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 74 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));
#line 74 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 3)));
#line 74 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 0)));
#line 74 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 1)));
#line 74 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 2)));
#line 74 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 3)));
#line 74 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_12_12;
#line 74 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__V_21_21 = (MR_Integer) parse_tree__prog_foreign__V_4_4;
#line 74 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__V_22_22 = (MR_Integer) parse_tree__prog_foreign__V_8_8;

#line 74 "prog_foreign.m"
        {
#line 74 "prog_foreign.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_foreign__V_12_12, parse_tree__prog_foreign__V_21_21, parse_tree__prog_foreign__V_22_22);
        }
#line 1772 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_12_12 == (MR_Integer) 0);
#line 74 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 74 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 74 "prog_foreign.m"
          *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_12_12;
#line 74 "prog_foreign.m"
        else
#line 74 "prog_foreign.m"
          {
#line 74 "prog_foreign.m"
            MR_Word parse_tree__prog_foreign__V_13_13;

#line 74 "prog_foreign.m"
            {
#line 74 "prog_foreign.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__prog_foreign__V_13_13, parse_tree__prog_foreign__V_5_5, parse_tree__prog_foreign__V_9_9);
            }
#line 1792 "parse_tree.prog_foreign.c"
            parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_13_13 == (MR_Integer) 0);
#line 74 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 74 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 74 "prog_foreign.m"
              *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_13_13;
#line 74 "prog_foreign.m"
            else
#line 74 "prog_foreign.m"
              {
#line 74 "prog_foreign.m"
                MR_Word parse_tree__prog_foreign__V_14_14;

#line 74 "prog_foreign.m"
                {
#line 74 "prog_foreign.m"
                  mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__prog_foreign__V_14_14, parse_tree__prog_foreign__V_6_6, parse_tree__prog_foreign__V_10_10);
                }
#line 1812 "parse_tree.prog_foreign.c"
                parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_14_14 == (MR_Integer) 0);
#line 74 "prog_foreign.m"
                parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 74 "prog_foreign.m"
                if (parse_tree__prog_foreign__succeeded)
#line 74 "prog_foreign.m"
                  *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_14_14;
#line 74 "prog_foreign.m"
                else
#line 74 "prog_foreign.m"
                  {
#line 74 "prog_foreign.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__prog_foreign__HeadVar__1_1, parse_tree__prog_foreign__V_7_7, parse_tree__prog_foreign__V_11_11);
                  }
#line 74 "prog_foreign.m"
              }
#line 74 "prog_foreign.m"
          }
#line 74 "prog_foreign.m"
      }
#line 74 "prog_foreign.m"
  }
#line 74 "prog_foreign.m"
}

#line 74 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decl_0_0(
#line 74 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
#line 74 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
#line 74 "prog_foreign.m"
{
#line 74 "prog_foreign.m"
  {
#line 74 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 74 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_11 = (MR_Integer) parse_tree__prog_foreign__HeadVar__1_1;
#line 74 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_12 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;

#line 74 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_11 == parse_tree__prog_foreign__CastY_12);
#line 74 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 74 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 74 "prog_foreign.m"
    else
#line 74 "prog_foreign.m"
      {
#line 74 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 74 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 1)));
#line 74 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 2)));
#line 74 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 3)));
#line 74 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 74 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 74 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));
#line 74 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 3)));

#line 1883 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_3_3 == parse_tree__prog_foreign__V_7_7);
#line 74 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 74 "prog_foreign.m"
          {
#line 1889 "parse_tree.prog_foreign.c"
            parse_tree__prog_foreign__succeeded = (strcmp(parse_tree__prog_foreign__V_4_4, parse_tree__prog_foreign__V_8_8) == 0);
#line 74 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 74 "prog_foreign.m"
              {
#line 1895 "parse_tree.prog_foreign.c"
                parse_tree__prog_foreign__succeeded = (strcmp(parse_tree__prog_foreign__V_5_5, parse_tree__prog_foreign__V_9_9) == 0);
#line 74 "prog_foreign.m"
                if (parse_tree__prog_foreign__succeeded)
#line 1899 "parse_tree.prog_foreign.c"
                  parse_tree__prog_foreign__succeeded = (strcmp(parse_tree__prog_foreign__V_6_6, parse_tree__prog_foreign__V_10_10) == 0);
#line 74 "prog_foreign.m"
              }
#line 74 "prog_foreign.m"
          }
#line 74 "prog_foreign.m"
      }
#line 74 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 74 "prog_foreign.m"
  }
#line 74 "prog_foreign.m"
}

#line 41 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_codes_0_0(
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
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[1], parse_tree__prog_foreign__HeadVar__1_1, ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar2_5)));
    }
#line 41 "prog_foreign.m"
  }
#line 41 "prog_foreign.m"
}

#line 41 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_codes_0_0(
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
      parse_tree__prog_foreign__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[1], ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar2_4)));
    }
#line 41 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 41 "prog_foreign.m"
  }
#line 41 "prog_foreign.m"
}

#line 44 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_code_0_0(
#line 44 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 44 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 44 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
#line 44 "prog_foreign.m"
{
#line 44 "prog_foreign.m"
  {
#line 44 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 44 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_15 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;
#line 44 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_16 = (MR_Integer) parse_tree__prog_foreign__HeadVar__3_3;

#line 44 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_15 == parse_tree__prog_foreign__CastY_16);
#line 44 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 1998 "parse_tree.prog_foreign.c"
      *parse_tree__prog_foreign__HeadVar__1_1 = (MR_Integer) 0;
#line 44 "prog_foreign.m"
    else
#line 44 "prog_foreign.m"
      {
#line 44 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 44 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 44 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));
#line 44 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 3)));
#line 44 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 0)));
#line 44 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 1)));
#line 44 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 2)));
#line 44 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 3)));
#line 44 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_12_12;
#line 44 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__V_21_21 = (MR_Integer) parse_tree__prog_foreign__V_4_4;
#line 44 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__V_22_22 = (MR_Integer) parse_tree__prog_foreign__V_8_8;

#line 44 "prog_foreign.m"
        {
#line 44 "prog_foreign.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_foreign__V_12_12, parse_tree__prog_foreign__V_21_21, parse_tree__prog_foreign__V_22_22);
        }
#line 2032 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_12_12 == (MR_Integer) 0);
#line 44 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 44 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 44 "prog_foreign.m"
          *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_12_12;
#line 44 "prog_foreign.m"
        else
#line 44 "prog_foreign.m"
          {
#line 44 "prog_foreign.m"
            MR_Word parse_tree__prog_foreign__V_13_13;
#line 44 "prog_foreign.m"
            MR_Integer parse_tree__prog_foreign__V_23_23 = (MR_Integer) parse_tree__prog_foreign__V_5_5;
#line 44 "prog_foreign.m"
            MR_Integer parse_tree__prog_foreign__V_24_24 = (MR_Integer) parse_tree__prog_foreign__V_9_9;

#line 44 "prog_foreign.m"
            {
#line 44 "prog_foreign.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_foreign__V_13_13, parse_tree__prog_foreign__V_23_23, parse_tree__prog_foreign__V_24_24);
            }
#line 2056 "parse_tree.prog_foreign.c"
            parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_13_13 == (MR_Integer) 0);
#line 44 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 44 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 44 "prog_foreign.m"
              *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_13_13;
#line 44 "prog_foreign.m"
            else
#line 44 "prog_foreign.m"
              {
#line 44 "prog_foreign.m"
                MR_Word parse_tree__prog_foreign__V_14_14;

#line 44 "prog_foreign.m"
                {
#line 44 "prog_foreign.m"
                  parse_tree__prog_data____Compare____foreign_literal_or_include_0_0(&parse_tree__prog_foreign__V_14_14, parse_tree__prog_foreign__V_6_6, parse_tree__prog_foreign__V_10_10);
                }
#line 2076 "parse_tree.prog_foreign.c"
                parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_14_14 == (MR_Integer) 0);
#line 44 "prog_foreign.m"
                parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 44 "prog_foreign.m"
                if (parse_tree__prog_foreign__succeeded)
#line 44 "prog_foreign.m"
                  *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_14_14;
#line 44 "prog_foreign.m"
                else
#line 44 "prog_foreign.m"
                  {
#line 44 "prog_foreign.m"
                    mercury__term____Compare____context_0_0(parse_tree__prog_foreign__HeadVar__1_1, parse_tree__prog_foreign__V_7_7, parse_tree__prog_foreign__V_11_11);
                  }
#line 44 "prog_foreign.m"
              }
#line 44 "prog_foreign.m"
          }
#line 44 "prog_foreign.m"
      }
#line 44 "prog_foreign.m"
  }
#line 44 "prog_foreign.m"
}

#line 44 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_code_0_0(
#line 44 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
#line 44 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
#line 44 "prog_foreign.m"
{
#line 44 "prog_foreign.m"
  {
#line 44 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 44 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_11 = (MR_Integer) parse_tree__prog_foreign__HeadVar__1_1;
#line 44 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_12 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;

#line 44 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_11 == parse_tree__prog_foreign__CastY_12);
#line 44 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 44 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 44 "prog_foreign.m"
    else
#line 44 "prog_foreign.m"
      {
#line 44 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 44 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 1)));
#line 44 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 2)));
#line 44 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 3)));
#line 44 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 44 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 44 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));
#line 44 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 3)));

#line 2147 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_3_3 == parse_tree__prog_foreign__V_7_7);
#line 44 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 44 "prog_foreign.m"
          {
#line 2153 "parse_tree.prog_foreign.c"
            parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_4_4 == parse_tree__prog_foreign__V_8_8);
#line 44 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 44 "prog_foreign.m"
              {
#line 2159 "parse_tree.prog_foreign.c"
                {
#line 2161 "parse_tree.prog_foreign.c"
                  parse_tree__prog_foreign__succeeded = parse_tree__prog_data____Unify____foreign_literal_or_include_0_0(parse_tree__prog_foreign__V_5_5, parse_tree__prog_foreign__V_9_9);
                }
#line 44 "prog_foreign.m"
                if (parse_tree__prog_foreign__succeeded)
#line 2166 "parse_tree.prog_foreign.c"
                  {
#line 2168 "parse_tree.prog_foreign.c"
                    parse_tree__prog_foreign__succeeded = mercury__term____Unify____context_0_0(parse_tree__prog_foreign__V_6_6, parse_tree__prog_foreign__V_10_10);
                  }
#line 44 "prog_foreign.m"
              }
#line 44 "prog_foreign.m"
          }
#line 44 "prog_foreign.m"
      }
#line 44 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 44 "prog_foreign.m"
  }
#line 44 "prog_foreign.m"
}

#line 42 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_codes_0_0(
#line 42 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 42 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 42 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
#line 42 "prog_foreign.m"
{
#line 42 "prog_foreign.m"
  {
#line 42 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 42 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar1_4 = parse_tree__prog_foreign__HeadVar__2_2;
#line 42 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar2_5 = parse_tree__prog_foreign__HeadVar__3_3;

#line 42 "prog_foreign.m"
    {
#line 42 "prog_foreign.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[0], parse_tree__prog_foreign__HeadVar__1_1, ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar2_5)));
    }
#line 42 "prog_foreign.m"
  }
#line 42 "prog_foreign.m"
}

#line 42 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_codes_0_0(
#line 42 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
#line 42 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
#line 42 "prog_foreign.m"
{
#line 42 "prog_foreign.m"
  {
#line 42 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 42 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar1_3 = parse_tree__prog_foreign__HeadVar__1_1;
#line 42 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Cast_HeadVar2_4 = parse_tree__prog_foreign__HeadVar__2_2;

#line 42 "prog_foreign.m"
    {
#line 42 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[0], ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar2_4)));
    }
#line 42 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 42 "prog_foreign.m"
  }
#line 42 "prog_foreign.m"
}

#line 52 "prog_foreign.m"
void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_code_0_0(
#line 52 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 52 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
#line 52 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
#line 52 "prog_foreign.m"
{
#line 52 "prog_foreign.m"
  {
#line 52 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 52 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_12 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;
#line 52 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_13 = (MR_Integer) parse_tree__prog_foreign__HeadVar__3_3;

#line 52 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_12 == parse_tree__prog_foreign__CastY_13);
#line 52 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 2268 "parse_tree.prog_foreign.c"
      *parse_tree__prog_foreign__HeadVar__1_1 = (MR_Integer) 0;
#line 52 "prog_foreign.m"
    else
#line 52 "prog_foreign.m"
      {
#line 52 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 52 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 52 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));
#line 52 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 0)));
#line 52 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 1)));
#line 52 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 2)));
#line 52 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_10_10;
#line 52 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__V_17_17 = (MR_Integer) parse_tree__prog_foreign__V_4_4;
#line 52 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__V_18_18 = (MR_Integer) parse_tree__prog_foreign__V_7_7;

#line 52 "prog_foreign.m"
        {
#line 52 "prog_foreign.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_foreign__V_10_10, parse_tree__prog_foreign__V_17_17, parse_tree__prog_foreign__V_18_18);
        }
#line 2298 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_10_10 == (MR_Integer) 0);
#line 52 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 52 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 52 "prog_foreign.m"
          *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_10_10;
#line 52 "prog_foreign.m"
        else
#line 52 "prog_foreign.m"
          {
#line 52 "prog_foreign.m"
            MR_Word parse_tree__prog_foreign__V_11_11;

#line 52 "prog_foreign.m"
            {
#line 52 "prog_foreign.m"
              parse_tree__prog_data____Compare____foreign_literal_or_include_0_0(&parse_tree__prog_foreign__V_11_11, parse_tree__prog_foreign__V_5_5, parse_tree__prog_foreign__V_8_8);
            }
#line 2318 "parse_tree.prog_foreign.c"
            parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_11_11 == (MR_Integer) 0);
#line 52 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 52 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 52 "prog_foreign.m"
              *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__V_11_11;
#line 52 "prog_foreign.m"
            else
#line 52 "prog_foreign.m"
              {
#line 52 "prog_foreign.m"
                mercury__term____Compare____context_0_0(parse_tree__prog_foreign__HeadVar__1_1, parse_tree__prog_foreign__V_6_6, parse_tree__prog_foreign__V_9_9);
              }
#line 52 "prog_foreign.m"
          }
#line 52 "prog_foreign.m"
      }
#line 52 "prog_foreign.m"
  }
#line 52 "prog_foreign.m"
}

#line 52 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_code_0_0(
#line 52 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
#line 52 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
#line 52 "prog_foreign.m"
{
#line 52 "prog_foreign.m"
  {
#line 52 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 52 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastX_9 = (MR_Integer) parse_tree__prog_foreign__HeadVar__1_1;
#line 52 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__CastY_10 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;

#line 52 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_9 == parse_tree__prog_foreign__CastY_10);
#line 52 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 52 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 52 "prog_foreign.m"
    else
#line 52 "prog_foreign.m"
      {
#line 52 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 52 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 1)));
#line 52 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 2)));
#line 52 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
#line 52 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
#line 52 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));

#line 2383 "parse_tree.prog_foreign.c"
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__V_3_3 == parse_tree__prog_foreign__V_6_6);
#line 52 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 52 "prog_foreign.m"
          {
#line 2389 "parse_tree.prog_foreign.c"
            {
#line 2391 "parse_tree.prog_foreign.c"
              parse_tree__prog_foreign__succeeded = parse_tree__prog_data____Unify____foreign_literal_or_include_0_0(parse_tree__prog_foreign__V_4_4, parse_tree__prog_foreign__V_7_7);
            }
#line 52 "prog_foreign.m"
            if (parse_tree__prog_foreign__succeeded)
#line 2396 "parse_tree.prog_foreign.c"
              {
#line 2398 "parse_tree.prog_foreign.c"
                parse_tree__prog_foreign__succeeded = mercury__term____Unify____context_0_0(parse_tree__prog_foreign__V_5_5, parse_tree__prog_foreign__V_8_8);
              }
#line 52 "prog_foreign.m"
          }
#line 52 "prog_foreign.m"
      }
#line 52 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 52 "prog_foreign.m"
  }
#line 52 "prog_foreign.m"
}

#line 427 "prog_foreign.m"
static MR_String MR_CALL 
parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_f_0(
#line 427 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__String_3)
#line 427 "prog_foreign.m"
{
#line 430 "prog_foreign.m"
  {
#line 430 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 430 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Name_4;
#line 430 "prog_foreign.m"
    MR_Char parse_tree__prog_foreign__Char_5;
#line 430 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Rest_6;

#line 430 "prog_foreign.m"
    {
#line 430 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = mercury__string__first_char_3_p_3(parse_tree__prog_foreign__String_3, &parse_tree__prog_foreign__Char_5, &parse_tree__prog_foreign__Rest_6);
    }
#line 430 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 433 "prog_foreign.m"
      {
#line 433 "prog_foreign.m"
        MR_Integer parse_tree__prog_foreign__Code_7;
#line 433 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__CodeString_8;
#line 433 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__ThisCharString_9;
#line 433 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__Name0_10;

#line 433 "prog_foreign.m"
        {
#line 433 "prog_foreign.m"
          mercury__char__to_int_2_p_0(parse_tree__prog_foreign__Char_5, &parse_tree__prog_foreign__Code_7);
        }
#line 434 "prog_foreign.m"
        {
#line 434 "prog_foreign.m"
          mercury__string__int_to_string_2_p_0(parse_tree__prog_foreign__Code_7, &parse_tree__prog_foreign__CodeString_8);
        }
#line 435 "prog_foreign.m"
        {
#line 435 "prog_foreign.m"
          mercury__string__append_3_p_2((MR_String) "_", parse_tree__prog_foreign__CodeString_8, &parse_tree__prog_foreign__ThisCharString_9);
        }
#line 436 "prog_foreign.m"
        {
#line 436 "prog_foreign.m"
          parse_tree__prog_foreign__Name0_10 = parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_f_0(parse_tree__prog_foreign__Rest_6);
        }
#line 437 "prog_foreign.m"
        {
#line 437 "prog_foreign.m"
          mercury__string__append_3_p_2(parse_tree__prog_foreign__ThisCharString_9, parse_tree__prog_foreign__Name0_10, &parse_tree__prog_foreign__Name_4);
        }
#line 433 "prog_foreign.m"
      }
#line 430 "prog_foreign.m"
    else
#line 440 "prog_foreign.m"
      parse_tree__prog_foreign__Name_4 = parse_tree__prog_foreign__String_3;
#line 430 "prog_foreign.m"
    return parse_tree__prog_foreign__Name_4;
#line 430 "prog_foreign.m"
  }
#line 427 "prog_foreign.m"
}

#line 318 "prog_foreign.m"
static void MR_CALL 
parse_tree__prog_foreign__valid_foreign_language_1_p_1(
#line 318 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
#line 318 "prog_foreign.m"
  MR_Cont parse_tree__prog_foreign__cont,
#line 318 "prog_foreign.m"
  void * parse_tree__prog_foreign__cont_env_ptr)
#line 318 "prog_foreign.m"
{
#line 320 "prog_foreign.m"
  {
#line 320 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 320 "prog_foreign.m"
    {
#line 320 "prog_foreign.m"
      MR_Integer parse_tree__prog_foreign__slot_0 = (MR_Integer) 0;

#line 320 "prog_foreign.m"
      do
#line 320 "prog_foreign.m"
        {
#line 320 "prog_foreign.m"
          *parse_tree__prog_foreign__HeadVar__1_1 = ((&parse_tree__prog_foreign_vector_common_6[0 + parse_tree__prog_foreign__slot_0]))->parse_tree__prog_foreign__vector_common_type_6_0__vct_6_f_0;
#line 320 "prog_foreign.m"
          {
#line 320 "prog_foreign.m"
            parse_tree__prog_foreign__cont(parse_tree__prog_foreign__cont_env_ptr);
          }
#line 320 "prog_foreign.m"
          parse_tree__prog_foreign__slot_0 = (parse_tree__prog_foreign__slot_0 + (MR_Integer) 1);
#line 320 "prog_foreign.m"
        }
#line 320 "prog_foreign.m"
      while ((parse_tree__prog_foreign__slot_0 < (MR_Integer) 4));
#line 320 "prog_foreign.m"
    }
#line 320 "prog_foreign.m"
  }
#line 318 "prog_foreign.m"
}

#line 182 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__convert_to_valid_c_identifier_1_f_0(
#line 182 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__String_3)
#line 182 "prog_foreign.m"
{
#line 385 "prog_foreign.m"
  {
#line 385 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 385 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Name_4;
#line 385 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Name0_5;

#line 402 "prog_foreign.m"
    {
#line 402 "prog_foreign.m"
      MR_Integer parse_tree__prog_foreign__case_num_0 = (MR_Integer) -1;

#line 402 "prog_foreign.m"
#line 402 "prog_foreign.m"
      switch (MR_nth_code_unit(parse_tree__prog_foreign__String_3, 0)) {
#line 402 "prog_foreign.m"
        case (MR_Integer) 33:
#line 402 "prog_foreign.m"
          if (MR_offset_streq(1, parse_tree__prog_foreign__String_3, (MR_String) "!"))
#line 402 "prog_foreign.m"
            parse_tree__prog_foreign__case_num_0 = (MR_Integer) 0;
#line 402 "prog_foreign.m"
          break;
#line 402 "prog_foreign.m"
        case (MR_Integer) 42:
#line 402 "prog_foreign.m"
          if (MR_offset_streq(1, parse_tree__prog_foreign__String_3, (MR_String) "*"))
#line 402 "prog_foreign.m"
            parse_tree__prog_foreign__case_num_0 = (MR_Integer) 1;
#line 402 "prog_foreign.m"
          break;
#line 402 "prog_foreign.m"
        case (MR_Integer) 43:
#line 402 "prog_foreign.m"
          if (MR_offset_streq(1, parse_tree__prog_foreign__String_3, (MR_String) "+"))
#line 402 "prog_foreign.m"
            parse_tree__prog_foreign__case_num_0 = (MR_Integer) 2;
#line 402 "prog_foreign.m"
          break;
#line 402 "prog_foreign.m"
        case (MR_Integer) 44:
#line 402 "prog_foreign.m"
          if (MR_offset_streq(1, parse_tree__prog_foreign__String_3, (MR_String) ","))
#line 402 "prog_foreign.m"
            parse_tree__prog_foreign__case_num_0 = (MR_Integer) 3;
#line 402 "prog_foreign.m"
          break;
#line 402 "prog_foreign.m"
        case (MR_Integer) 45:
#line 402 "prog_foreign.m"
          if (MR_offset_streq(1, parse_tree__prog_foreign__String_3, (MR_String) "-"))
#line 402 "prog_foreign.m"
            parse_tree__prog_foreign__case_num_0 = (MR_Integer) 4;
#line 402 "prog_foreign.m"
          break;
#line 402 "prog_foreign.m"
        case (MR_Integer) 47:
#line 402 "prog_foreign.m"
          if (MR_offset_streq(1, parse_tree__prog_foreign__String_3, (MR_String) "/"))
#line 402 "prog_foreign.m"
            parse_tree__prog_foreign__case_num_0 = (MR_Integer) 5;
#line 402 "prog_foreign.m"
          break;
#line 402 "prog_foreign.m"
        case (MR_Integer) 59:
#line 402 "prog_foreign.m"
          if (MR_offset_streq(1, parse_tree__prog_foreign__String_3, (MR_String) ";"))
#line 402 "prog_foreign.m"
            parse_tree__prog_foreign__case_num_0 = (MR_Integer) 6;
#line 402 "prog_foreign.m"
          break;
#line 402 "prog_foreign.m"
        case (MR_Integer) 60:
#line 402 "prog_foreign.m"
          if (MR_offset_streq(1, parse_tree__prog_foreign__String_3, (MR_String) "<"))
#line 402 "prog_foreign.m"
            parse_tree__prog_foreign__case_num_0 = (MR_Integer) 7;
#line 402 "prog_foreign.m"
          break;
#line 402 "prog_foreign.m"
        case (MR_Integer) 61:
#line 402 "prog_foreign.m"
#line 402 "prog_foreign.m"
          switch (MR_nth_code_unit(parse_tree__prog_foreign__String_3, 1)) {
#line 402 "prog_foreign.m"
            case (MR_Integer) 0:
#line 402 "prog_foreign.m"
              parse_tree__prog_foreign__case_num_0 = (MR_Integer) 8;
#line 402 "prog_foreign.m"
              break;
#line 402 "prog_foreign.m"
            case (MR_Integer) 60:
#line 402 "prog_foreign.m"
              if (MR_offset_streq(2, parse_tree__prog_foreign__String_3, (MR_String) "=<"))
#line 402 "prog_foreign.m"
                parse_tree__prog_foreign__case_num_0 = (MR_Integer) 9;
#line 402 "prog_foreign.m"
              break;
#line 402 "prog_foreign.m"
          }
#line 402 "prog_foreign.m"
          break;
#line 402 "prog_foreign.m"
        case (MR_Integer) 62:
#line 402 "prog_foreign.m"
#line 402 "prog_foreign.m"
          switch (MR_nth_code_unit(parse_tree__prog_foreign__String_3, 1)) {
#line 402 "prog_foreign.m"
            case (MR_Integer) 0:
#line 402 "prog_foreign.m"
              parse_tree__prog_foreign__case_num_0 = (MR_Integer) 10;
#line 402 "prog_foreign.m"
              break;
#line 402 "prog_foreign.m"
            case (MR_Integer) 61:
#line 402 "prog_foreign.m"
              if (MR_offset_streq(2, parse_tree__prog_foreign__String_3, (MR_String) ">="))
#line 402 "prog_foreign.m"
                parse_tree__prog_foreign__case_num_0 = (MR_Integer) 11;
#line 402 "prog_foreign.m"
              break;
#line 402 "prog_foreign.m"
          }
#line 402 "prog_foreign.m"
          break;
#line 402 "prog_foreign.m"
        case (MR_Integer) 91:
#line 402 "prog_foreign.m"
#line 402 "prog_foreign.m"
          switch (MR_nth_code_unit(parse_tree__prog_foreign__String_3, 1)) {
#line 402 "prog_foreign.m"
            case (MR_Integer) 93:
#line 402 "prog_foreign.m"
              if (MR_offset_streq(2, parse_tree__prog_foreign__String_3, (MR_String) "[]"))
#line 402 "prog_foreign.m"
                parse_tree__prog_foreign__case_num_0 = (MR_Integer) 12;
#line 402 "prog_foreign.m"
              break;
#line 402 "prog_foreign.m"
            case (MR_Integer) 124:
#line 402 "prog_foreign.m"
              if (MR_offset_streq(2, parse_tree__prog_foreign__String_3, (MR_String) "[|]"))
#line 402 "prog_foreign.m"
                parse_tree__prog_foreign__case_num_0 = (MR_Integer) 13;
#line 402 "prog_foreign.m"
              break;
#line 402 "prog_foreign.m"
          }
#line 402 "prog_foreign.m"
          break;
#line 402 "prog_foreign.m"
        case (MR_Integer) 92:
#line 402 "prog_foreign.m"
          if (MR_offset_streq(1, parse_tree__prog_foreign__String_3, (MR_String) "\\="))
#line 402 "prog_foreign.m"
            parse_tree__prog_foreign__case_num_0 = (MR_Integer) 14;
#line 402 "prog_foreign.m"
          break;
#line 402 "prog_foreign.m"
        case (MR_Integer) 123:
#line 402 "prog_foreign.m"
          if (MR_offset_streq(1, parse_tree__prog_foreign__String_3, (MR_String) "{}"))
#line 402 "prog_foreign.m"
            parse_tree__prog_foreign__case_num_0 = (MR_Integer) 15;
#line 402 "prog_foreign.m"
          break;
#line 402 "prog_foreign.m"
      }
#line 402 "prog_foreign.m"
      if ((parse_tree__prog_foreign__case_num_0 < (MR_Integer) 0))
#line 402 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = MR_FALSE;
#line 402 "prog_foreign.m"
      else
#line 402 "prog_foreign.m"
        {
#line 402 "prog_foreign.m"
          /* we found a match; look up the results */
#line 402 "prog_foreign.m"
          parse_tree__prog_foreign__Name0_5 = ((&parse_tree__prog_foreign_vector_common_5[0 + parse_tree__prog_foreign__case_num_0]))->parse_tree__prog_foreign__vector_common_type_5_0__vct_5_f_0;
#line 402 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 402 "prog_foreign.m"
        }
#line 402 "prog_foreign.m"
    }
#line 385 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 386 "prog_foreign.m"
      parse_tree__prog_foreign__Name_4 = parse_tree__prog_foreign__Name0_5;
#line 385 "prog_foreign.m"
    else
#line 388 "prog_foreign.m"
      {
#line 388 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_7_7;

#line 388 "prog_foreign.m"
        {
#line 388 "prog_foreign.m"
          parse_tree__prog_foreign__V_7_7 = parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_f_0(parse_tree__prog_foreign__String_3);
        }
#line 388 "prog_foreign.m"
        {
#line 388 "prog_foreign.m"
          parse_tree__prog_foreign__Name_4 = mercury__string__f_43_43_2_f_0((MR_String) "f", parse_tree__prog_foreign__V_7_7);
        }
#line 388 "prog_foreign.m"
      }
#line 385 "prog_foreign.m"
    return parse_tree__prog_foreign__Name_4;
#line 385 "prog_foreign.m"
  }
#line 182 "prog_foreign.m"
}

#line 180 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__qualify_name_2_f_0(
#line 180 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__Module0_4,
#line 180 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__Name0_5)
#line 180 "prog_foreign.m"
{
#line 381 "prog_foreign.m"
  {
#line 381 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 381 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Name_6;
#line 381 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_7_7;
#line 381 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_8_8;
#line 381 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_10_10;

#line 382 "prog_foreign.m"
    {
#line 382 "prog_foreign.m"
      parse_tree__prog_foreign__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "prog_foreign.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_10_10, 0) = ((MR_Box) (parse_tree__prog_foreign__Name0_5));
#line 382 "prog_foreign.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 382 "prog_foreign.m"
    }
#line 382 "prog_foreign.m"
    {
#line 382 "prog_foreign.m"
      parse_tree__prog_foreign__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "prog_foreign.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_8_8, 0) = ((MR_Box) ((MR_String) "__"));
#line 382 "prog_foreign.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_8_8, 1) = ((MR_Box) (parse_tree__prog_foreign__V_10_10));
#line 382 "prog_foreign.m"
    }
#line 382 "prog_foreign.m"
    {
#line 382 "prog_foreign.m"
      parse_tree__prog_foreign__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "prog_foreign.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_7_7, 0) = ((MR_Box) (parse_tree__prog_foreign__Module0_4));
#line 382 "prog_foreign.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_7_7, 1) = ((MR_Box) (parse_tree__prog_foreign__V_8_8));
#line 382 "prog_foreign.m"
    }
#line 382 "prog_foreign.m"
    {
#line 382 "prog_foreign.m"
      mercury__string__append_list_2_p_0(parse_tree__prog_foreign__V_7_7, &parse_tree__prog_foreign__Name_6);
    }
#line 381 "prog_foreign.m"
    return parse_tree__prog_foreign__Name_6;
#line 381 "prog_foreign.m"
  }
#line 180 "prog_foreign.m"
}

#line 176 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(
#line 176 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__Name_3)
#line 176 "prog_foreign.m"
{
#line 356 "prog_foreign.m"
  {
#line 356 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 356 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__HeadVar__2_2;
#line 357 "prog_foreign.m"
    MR_Char parse_tree__prog_foreign__FirstChar_8;
#line 357 "prog_foreign.m"
    MR_Integer parse_tree__prog_foreign__V_10_10;

#line 357 "prog_foreign.m"
    {
#line 357 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(parse_tree__prog_foreign__Name_3);
    }
#line 357 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 357 "prog_foreign.m"
      {
#line 364 "prog_foreign.m"
        parse_tree__prog_foreign__V_10_10 = (MR_Integer) 0;
#line 364 "prog_foreign.m"
        {
#line 364 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = mercury__string__index_3_p_0(parse_tree__prog_foreign__Name_3, parse_tree__prog_foreign__V_10_10, &parse_tree__prog_foreign__FirstChar_8);
        }
#line 357 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 357 "prog_foreign.m"
          {
#line 365 "prog_foreign.m"
            {
#line 365 "prog_foreign.m"
              parse_tree__prog_foreign__succeeded = mercury__char__is_digit_1_p_0(parse_tree__prog_foreign__FirstChar_8);
            }
#line 365 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 357 "prog_foreign.m"
          }
#line 357 "prog_foreign.m"
      }
#line 356 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 372 "prog_foreign.m"
      {
#line 372 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__Suffix_9;

#line 372 "prog_foreign.m"
        {
#line 372 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = mercury__string__append_3_p_1((MR_String) "f_", &parse_tree__prog_foreign__Suffix_9, parse_tree__prog_foreign__Name_3);
        }
#line 372 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 373 "prog_foreign.m"
          {
#line 373 "prog_foreign.m"
            {
#line 373 "prog_foreign.m"
              parse_tree__prog_foreign__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "f__", parse_tree__prog_foreign__Suffix_9);
            }
#line 373 "prog_foreign.m"
          }
#line 372 "prog_foreign.m"
        else
#line 375 "prog_foreign.m"
          parse_tree__prog_foreign__HeadVar__2_2 = parse_tree__prog_foreign__Name_3;
#line 372 "prog_foreign.m"
      }
#line 356 "prog_foreign.m"
    else
#line 378 "prog_foreign.m"
      {
#line 378 "prog_foreign.m"
        parse_tree__prog_foreign__HeadVar__2_2 = parse_tree__prog_foreign__convert_to_valid_c_identifier_1_f_0(parse_tree__prog_foreign__Name_3);
      }
#line 356 "prog_foreign.m"
    return parse_tree__prog_foreign__HeadVar__2_2;
#line 356 "prog_foreign.m"
  }
#line 176 "prog_foreign.m"
}

#line 171 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__name_mangle_1_f_0(
#line 171 "prog_foreign.m"
  MR_String parse_tree__prog_foreign__Name_3)
#line 171 "prog_foreign.m"
{
#line 356 "prog_foreign.m"
  {
#line 356 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 356 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__HeadVar__2_2;

#line 357 "prog_foreign.m"
    {
#line 357 "prog_foreign.m"
      parse_tree__prog_foreign__succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(parse_tree__prog_foreign__Name_3);
    }
#line 356 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 372 "prog_foreign.m"
      {
#line 372 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__Suffix_9;

#line 372 "prog_foreign.m"
        {
#line 372 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = mercury__string__append_3_p_1((MR_String) "f_", &parse_tree__prog_foreign__Suffix_9, parse_tree__prog_foreign__Name_3);
        }
#line 372 "prog_foreign.m"
        if (parse_tree__prog_foreign__succeeded)
#line 373 "prog_foreign.m"
          {
#line 373 "prog_foreign.m"
            {
#line 373 "prog_foreign.m"
              parse_tree__prog_foreign__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "f__", parse_tree__prog_foreign__Suffix_9);
            }
#line 373 "prog_foreign.m"
          }
#line 372 "prog_foreign.m"
        else
#line 375 "prog_foreign.m"
          parse_tree__prog_foreign__HeadVar__2_2 = parse_tree__prog_foreign__Name_3;
#line 372 "prog_foreign.m"
      }
#line 356 "prog_foreign.m"
    else
#line 378 "prog_foreign.m"
      {
#line 378 "prog_foreign.m"
        parse_tree__prog_foreign__HeadVar__2_2 = parse_tree__prog_foreign__convert_to_valid_c_identifier_1_f_0(parse_tree__prog_foreign__Name_3);
      }
#line 356 "prog_foreign.m"
    return parse_tree__prog_foreign__HeadVar__2_2;
#line 356 "prog_foreign.m"
  }
#line 171 "prog_foreign.m"
}

#line 166 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__sym_name_mangle_1_f_0(
#line 166 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1)
#line 166 "prog_foreign.m"
{
#line 338 "prog_foreign.m"
  {
#line 338 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 338 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__HeadVar__2_2;

#line 338 "prog_foreign.m"
    if (((MR_tag((MR_Word) parse_tree__prog_foreign__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 340 "prog_foreign.m"
      {
#line 340 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__ModuleName_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)));
#line 340 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__PlainName_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 1)));
#line 340 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__MangledModuleName_7;
#line 340 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__MangledPlainName_8;
#line 340 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_12_12;
#line 340 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_13_13;
#line 340 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__V_15_15;

#line 341 "prog_foreign.m"
        {
#line 341 "prog_foreign.m"
          parse_tree__prog_foreign__MangledModuleName_7 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(parse_tree__prog_foreign__ModuleName_4);
        }
#line 342 "prog_foreign.m"
        {
#line 342 "prog_foreign.m"
          parse_tree__prog_foreign__MangledPlainName_8 = parse_tree__prog_foreign__name_mangle_1_f_0(parse_tree__prog_foreign__PlainName_5);
        }
#line 382 "prog_foreign.m"
        {
#line 382 "prog_foreign.m"
          parse_tree__prog_foreign__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_15_15, 0) = ((MR_Box) (parse_tree__prog_foreign__MangledPlainName_8));
#line 382 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 382 "prog_foreign.m"
        }
#line 382 "prog_foreign.m"
        {
#line 382 "prog_foreign.m"
          parse_tree__prog_foreign__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_13_13, 0) = ((MR_Box) ((MR_String) "__"));
#line 382 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_13_13, 1) = ((MR_Box) (parse_tree__prog_foreign__V_15_15));
#line 382 "prog_foreign.m"
        }
#line 382 "prog_foreign.m"
        {
#line 382 "prog_foreign.m"
          parse_tree__prog_foreign__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_12_12, 0) = ((MR_Box) (parse_tree__prog_foreign__MangledModuleName_7));
#line 382 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__V_12_12, 1) = ((MR_Box) (parse_tree__prog_foreign__V_13_13));
#line 382 "prog_foreign.m"
        }
#line 382 "prog_foreign.m"
        {
#line 382 "prog_foreign.m"
          mercury__string__append_list_2_p_0(parse_tree__prog_foreign__V_12_12, &parse_tree__prog_foreign__HeadVar__2_2);
        }
#line 340 "prog_foreign.m"
      }
#line 338 "prog_foreign.m"
    else
#line 338 "prog_foreign.m"
      {
#line 338 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__Name_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)));

#line 339 "prog_foreign.m"
        {
#line 339 "prog_foreign.m"
          parse_tree__prog_foreign__HeadVar__2_2 = parse_tree__prog_foreign__name_mangle_1_f_0(parse_tree__prog_foreign__Name_3);
        }
#line 338 "prog_foreign.m"
      }
#line 338 "prog_foreign.m"
    return parse_tree__prog_foreign__HeadVar__2_2;
#line 338 "prog_foreign.m"
  }
#line 166 "prog_foreign.m"
}

#line 161 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__make_init_name_1_f_0(
#line 161 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__ModuleName_3)
#line 161 "prog_foreign.m"
{
#line 334 "prog_foreign.m"
  {
#line 334 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 334 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__InitName_4;
#line 334 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__MangledModuleName_5;
#line 334 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_7_7;

#line 335 "prog_foreign.m"
    {
#line 335 "prog_foreign.m"
      parse_tree__prog_foreign__MangledModuleName_5 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(parse_tree__prog_foreign__ModuleName_3);
    }
#line 336 "prog_foreign.m"
    {
#line 336 "prog_foreign.m"
      parse_tree__prog_foreign__V_7_7 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__MangledModuleName_5, (MR_String) "__");
    }
#line 336 "prog_foreign.m"
    {
#line 336 "prog_foreign.m"
      parse_tree__prog_foreign__InitName_4 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", parse_tree__prog_foreign__V_7_7);
    }
#line 334 "prog_foreign.m"
    return parse_tree__prog_foreign__InitName_4;
#line 334 "prog_foreign.m"
  }
#line 161 "prog_foreign.m"
}

#line 152 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__foreign_type_language_1_f_0(
#line 152 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1)
#line 152 "prog_foreign.m"
{
#line 327 "prog_foreign.m"
  {
#line 327 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 327 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__HeadVar__2_2;

#line 327 "prog_foreign.m"
#line 327 "prog_foreign.m"
    switch (MR_tag((MR_Word) parse_tree__prog_foreign__HeadVar__1_1)) {
#line 327 "prog_foreign.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 327 "prog_foreign.m"
      case (MR_Integer) 0:
#line 327 "prog_foreign.m"
        parse_tree__prog_foreign__HeadVar__2_2 = (MR_Integer) 0;
#line 327 "prog_foreign.m"
        break;
#line 327 "prog_foreign.m"
      case (MR_Integer) 1:
#line 328 "prog_foreign.m"
        parse_tree__prog_foreign__HeadVar__2_2 = (MR_Integer) 2;
#line 327 "prog_foreign.m"
        break;
#line 327 "prog_foreign.m"
      case (MR_Integer) 2:
#line 329 "prog_foreign.m"
        parse_tree__prog_foreign__HeadVar__2_2 = (MR_Integer) 1;
#line 327 "prog_foreign.m"
        break;
#line 327 "prog_foreign.m"
      case (MR_Integer) 3:
#line 330 "prog_foreign.m"
        parse_tree__prog_foreign__HeadVar__2_2 = (MR_Integer) 3;
#line 327 "prog_foreign.m"
        break;
#line 327 "prog_foreign.m"
    }
#line 327 "prog_foreign.m"
    return parse_tree__prog_foreign__HeadVar__2_2;
#line 327 "prog_foreign.m"
  }
#line 152 "prog_foreign.m"
}

#line 313 "prog_foreign.m"
static void MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0_1(
#line 313 "prog_foreign.m"
  void * parse_tree__prog_foreign__env_ptr_arg)
#line 313 "prog_foreign.m"
{
#line 313 "prog_foreign.m"
  {
#line 313 "prog_foreign.m"
    struct parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0_s * parse_tree__prog_foreign__env_ptr = (struct parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0_s *) parse_tree__prog_foreign__env_ptr_arg;

#line 313 "prog_foreign.m"
    *((parse_tree__prog_foreign__env_ptr)->parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((parse_tree__prog_foreign__env_ptr)->parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__conv0_HeadVar__1_1));
#line 313 "prog_foreign.m"
    {
#line 313 "prog_foreign.m"
      ((parse_tree__prog_foreign__env_ptr)->parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont)((parse_tree__prog_foreign__env_ptr)->parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont_env_ptr);
    }
#line 313 "prog_foreign.m"
  }
#line 313 "prog_foreign.m"
}

#line 313 "prog_foreign.m"
static void MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0_2(
#line 313 "prog_foreign.m"
  MR_Box parse_tree__prog_foreign__closure_arg,
#line 313 "prog_foreign.m"
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
#line 313 "prog_foreign.m"
  MR_Cont parse_tree__prog_foreign__cont,
#line 313 "prog_foreign.m"
  void * parse_tree__prog_foreign__cont_env_ptr)
#line 313 "prog_foreign.m"
{
#line 313 "prog_foreign.m"
  {
#line 313 "prog_foreign.m"
    struct parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0_s parse_tree__prog_foreign__env;

#line 313 "prog_foreign.m"
    (parse_tree__prog_foreign__env).parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__wrapper_arg_1 = parse_tree__prog_foreign__wrapper_arg_1;
#line 313 "prog_foreign.m"
    (parse_tree__prog_foreign__env).parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont = parse_tree__prog_foreign__cont;
#line 313 "prog_foreign.m"
    (parse_tree__prog_foreign__env).parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont_env_ptr = parse_tree__prog_foreign__cont_env_ptr;
#line 313 "prog_foreign.m"
    {
#line 313 "prog_foreign.m"
      MR_Box parse_tree__prog_foreign__closure = parse_tree__prog_foreign__closure_arg;

#line 313 "prog_foreign.m"
      {
#line 313 "prog_foreign.m"
        parse_tree__prog_foreign__valid_foreign_language_1_p_1(&(parse_tree__prog_foreign__env).parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__conv0_HeadVar__1_1, parse_tree__prog_foreign__all_foreign_languages_0_f_0_1, &parse_tree__prog_foreign__env);
      }
#line 313 "prog_foreign.m"
    }
#line 313 "prog_foreign.m"
  }
#line 313 "prog_foreign.m"
}

#line 150 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0(void)
#line 150 "prog_foreign.m"
{
#line 312 "prog_foreign.m"
  {
#line 312 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 312 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Langs_2;

#line 314 "prog_foreign.m"
    {
#line 314 "prog_foreign.m"
      mercury__solutions__solutions_2_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, (MR_Word) &parse_tree__prog_foreign_scalar_common_4[0], &parse_tree__prog_foreign__Langs_2);
    }
#line 312 "prog_foreign.m"
    return parse_tree__prog_foreign__Langs_2;
#line 312 "prog_foreign.m"
  }
#line 150 "prog_foreign.m"
}

#line 145 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__prefer_foreign_language_4_f_0(
#line 145 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign___Globals_6,
#line 145 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__Target_7,
#line 145 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__Lang1_8,
#line 145 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__Lang2_9)
#line 145 "prog_foreign.m"
{
#line 286 "prog_foreign.m"
  {
#line 286 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 286 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Prefer_10;

#line 286 "prog_foreign.m"
    {
#line 286 "prog_foreign.m"
      parse_tree__prog_foreign__Prefer_10 = parse_tree__prog_foreign__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_f_0(parse_tree__prog_foreign__Target_7, parse_tree__prog_foreign__Lang1_8, parse_tree__prog_foreign__Lang2_9);
    }
#line 286 "prog_foreign.m"
    return parse_tree__prog_foreign__Prefer_10;
#line 286 "prog_foreign.m"
  }
#line 145 "prog_foreign.m"
}

#line 137 "prog_foreign.m"
MR_String MR_CALL 
parse_tree__prog_foreign__foreign_language_file_extension_1_f_1(
#line 137 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1)
#line 137 "prog_foreign.m"
{
#line 275 "prog_foreign.m"
  {
#line 275 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 275 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__HeadVar__2_2;

#line 275 "prog_foreign.m"
#line 275 "prog_foreign.m"
    switch (parse_tree__prog_foreign__HeadVar__1_1) {
#line 275 "prog_foreign.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 275 "prog_foreign.m"
      case (MR_Integer) 0:
#line 275 "prog_foreign.m"
        parse_tree__prog_foreign__HeadVar__2_2 = (MR_String) ".c";
#line 275 "prog_foreign.m"
        break;
#line 275 "prog_foreign.m"
      case (MR_Integer) 1:
#line 276 "prog_foreign.m"
        parse_tree__prog_foreign__HeadVar__2_2 = (MR_String) ".cs";
#line 275 "prog_foreign.m"
        break;
#line 275 "prog_foreign.m"
    }
#line 275 "prog_foreign.m"
    return parse_tree__prog_foreign__HeadVar__2_2;
#line 275 "prog_foreign.m"
  }
#line 137 "prog_foreign.m"
}

#line 136 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign__foreign_language_file_extension_1_f_0(
#line 136 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
#line 136 "prog_foreign.m"
  MR_String * parse_tree__prog_foreign__HeadVar__2_2)
#line 136 "prog_foreign.m"
{
#line 275 "prog_foreign.m"
  {
#line 275 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;

#line 275 "prog_foreign.m"
#line 275 "prog_foreign.m"
    switch (parse_tree__prog_foreign__HeadVar__1_1) {
#line 275 "prog_foreign.m"
      default:
#line 275 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = MR_FALSE;
#line 275 "prog_foreign.m"
        break;
#line 275 "prog_foreign.m"
      case (MR_Integer) 0:
#line 275 "prog_foreign.m"
        {
#line 275 "prog_foreign.m"
          *parse_tree__prog_foreign__HeadVar__2_2 = (MR_String) ".c";
#line 275 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 275 "prog_foreign.m"
        }
#line 275 "prog_foreign.m"
        break;
#line 275 "prog_foreign.m"
      case (MR_Integer) 1:
#line 276 "prog_foreign.m"
        {
#line 276 "prog_foreign.m"
          *parse_tree__prog_foreign__HeadVar__2_2 = (MR_String) ".cs";
#line 276 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 276 "prog_foreign.m"
        }
#line 275 "prog_foreign.m"
        break;
#line 275 "prog_foreign.m"
      case (MR_Integer) 2:
#line 277 "prog_foreign.m"
        {
#line 277 "prog_foreign.m"
          *parse_tree__prog_foreign__HeadVar__2_2 = (MR_String) ".java";
#line 277 "prog_foreign.m"
          parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 277 "prog_foreign.m"
        }
#line 275 "prog_foreign.m"
        break;
#line 275 "prog_foreign.m"
    }
#line 275 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 275 "prog_foreign.m"
  }
#line 136 "prog_foreign.m"
}

#line 129 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__foreign_language_module_name_2_f_1(
#line 129 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__ModuleName_4,
#line 129 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__Lang_5)
#line 129 "prog_foreign.m"
{
#line 260 "prog_foreign.m"
  {
#line 260 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 260 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__FullyQualifiedModuleName_6;
#line 260 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Ending_8;
#line 260 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_12_12;
#line 260 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_13_13;

#line 264 "prog_foreign.m"
    {
#line 264 "prog_foreign.m"
      parse_tree__prog_foreign__V_13_13 = libs__globals__simple_foreign_language_string_1_f_0(parse_tree__prog_foreign__Lang_5);
    }
#line 264 "prog_foreign.m"
    {
#line 264 "prog_foreign.m"
      parse_tree__prog_foreign__V_12_12 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__V_13_13, (MR_String) "_code");
    }
#line 264 "prog_foreign.m"
    {
#line 264 "prog_foreign.m"
      parse_tree__prog_foreign__Ending_8 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_foreign__V_12_12);
    }
#line 268 "prog_foreign.m"
    if (((MR_tag((MR_Word) parse_tree__prog_foreign__ModuleName_4)) == (MR_mktag((MR_Integer) 1))))
#line 269 "prog_foreign.m"
      {
#line 269 "prog_foreign.m"
        MR_Word parse_tree__prog_foreign__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 0)));
#line 269 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_15_15;
#line 269 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 1)));

#line 270 "prog_foreign.m"
        {
#line 270 "prog_foreign.m"
          parse_tree__prog_foreign__V_15_15 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__Name_17, parse_tree__prog_foreign__Ending_8);
        }
#line 270 "prog_foreign.m"
        {
#line 270 "prog_foreign.m"
          parse_tree__prog_foreign__FullyQualifiedModuleName_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__FullyQualifiedModuleName_6, 0) = ((MR_Box) (parse_tree__prog_foreign__Module_10));
#line 270 "prog_foreign.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__FullyQualifiedModuleName_6, 1) = ((MR_Box) (parse_tree__prog_foreign__V_15_15));
#line 270 "prog_foreign.m"
        }
#line 269 "prog_foreign.m"
      }
#line 268 "prog_foreign.m"
    else
#line 266 "prog_foreign.m"
      {
#line 266 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 0)));
#line 266 "prog_foreign.m"
        MR_String parse_tree__prog_foreign__V_16_16;

#line 267 "prog_foreign.m"
        {
#line 267 "prog_foreign.m"
          parse_tree__prog_foreign__V_16_16 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__Name_9, parse_tree__prog_foreign__Ending_8);
        }
#line 267 "prog_foreign.m"
        {
#line 267 "prog_foreign.m"
          parse_tree__prog_foreign__FullyQualifiedModuleName_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 267 "prog_foreign.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__FullyQualifiedModuleName_6, 0) = ((MR_Box) (parse_tree__prog_foreign__V_16_16));
#line 267 "prog_foreign.m"
        }
#line 266 "prog_foreign.m"
      }
#line 260 "prog_foreign.m"
    return parse_tree__prog_foreign__FullyQualifiedModuleName_6;
#line 260 "prog_foreign.m"
  }
#line 129 "prog_foreign.m"
}

#line 128 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign__foreign_language_module_name_2_f_0(
#line 128 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__ModuleName_4,
#line 128 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__Lang_5,
#line 128 "prog_foreign.m"
  MR_Word * parse_tree__prog_foreign__FullyQualifiedModuleName_6)
#line 128 "prog_foreign.m"
{
#line 260 "prog_foreign.m"
  {
#line 260 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 260 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__Ending_8;
#line 260 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_11_11;
#line 260 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_12_12;
#line 260 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_13_13;
#line 260 "prog_foreign.m"
    MR_String parse_tree__prog_foreign__V_14_14;

#line 275 "prog_foreign.m"
#line 275 "prog_foreign.m"
    switch (parse_tree__prog_foreign__Lang_5) {
#line 275 "prog_foreign.m"
      default:
#line 275 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = MR_FALSE;
#line 275 "prog_foreign.m"
        break;
#line 275 "prog_foreign.m"
      case (MR_Integer) 0:
#line 275 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 275 "prog_foreign.m"
        break;
#line 275 "prog_foreign.m"
      case (MR_Integer) 1:
#line 276 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 275 "prog_foreign.m"
        break;
#line 275 "prog_foreign.m"
      case (MR_Integer) 2:
#line 277 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 275 "prog_foreign.m"
        break;
#line 275 "prog_foreign.m"
    }
#line 260 "prog_foreign.m"
    if (parse_tree__prog_foreign__succeeded)
#line 260 "prog_foreign.m"
      {
#line 264 "prog_foreign.m"
        parse_tree__prog_foreign__V_11_11 = (MR_String) "__";
#line 264 "prog_foreign.m"
        {
#line 264 "prog_foreign.m"
          parse_tree__prog_foreign__V_13_13 = libs__globals__simple_foreign_language_string_1_f_0(parse_tree__prog_foreign__Lang_5);
        }
#line 264 "prog_foreign.m"
        parse_tree__prog_foreign__V_14_14 = (MR_String) "_code";
#line 264 "prog_foreign.m"
        {
#line 264 "prog_foreign.m"
          parse_tree__prog_foreign__V_12_12 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__V_13_13, parse_tree__prog_foreign__V_14_14);
        }
#line 264 "prog_foreign.m"
        {
#line 264 "prog_foreign.m"
          parse_tree__prog_foreign__Ending_8 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__V_11_11, parse_tree__prog_foreign__V_12_12);
        }
#line 268 "prog_foreign.m"
        if (((MR_tag((MR_Word) parse_tree__prog_foreign__ModuleName_4)) == (MR_mktag((MR_Integer) 1))))
#line 269 "prog_foreign.m"
          {
#line 269 "prog_foreign.m"
            MR_Word parse_tree__prog_foreign__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 0)));
#line 269 "prog_foreign.m"
            MR_String parse_tree__prog_foreign__V_15_15;
#line 269 "prog_foreign.m"
            MR_String parse_tree__prog_foreign__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 1)));

#line 270 "prog_foreign.m"
            {
#line 270 "prog_foreign.m"
              parse_tree__prog_foreign__V_15_15 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__Name_17, parse_tree__prog_foreign__Ending_8);
            }
#line 270 "prog_foreign.m"
            {
#line 270 "prog_foreign.m"
              MR_Word base;
#line 270 "prog_foreign.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "prog_foreign.m"
              *parse_tree__prog_foreign__FullyQualifiedModuleName_6 = base;
#line 270 "prog_foreign.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_foreign__Module_10));
#line 270 "prog_foreign.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_foreign__V_15_15));
#line 270 "prog_foreign.m"
            }
#line 269 "prog_foreign.m"
          }
#line 268 "prog_foreign.m"
        else
#line 266 "prog_foreign.m"
          {
#line 266 "prog_foreign.m"
            MR_String parse_tree__prog_foreign__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 0)));
#line 266 "prog_foreign.m"
            MR_String parse_tree__prog_foreign__V_16_16;

#line 267 "prog_foreign.m"
            {
#line 267 "prog_foreign.m"
              parse_tree__prog_foreign__V_16_16 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__Name_9, parse_tree__prog_foreign__Ending_8);
            }
#line 267 "prog_foreign.m"
            {
#line 267 "prog_foreign.m"
              MR_Word base;
#line 267 "prog_foreign.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 267 "prog_foreign.m"
              *parse_tree__prog_foreign__FullyQualifiedModuleName_6 = base;
#line 267 "prog_foreign.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_foreign__V_16_16));
#line 267 "prog_foreign.m"
            }
#line 266 "prog_foreign.m"
          }
#line 268 "prog_foreign.m"
        parse_tree__prog_foreign__succeeded = MR_TRUE;
#line 260 "prog_foreign.m"
      }
#line 260 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 260 "prog_foreign.m"
  }
#line 128 "prog_foreign.m"
}

#line 112 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__foreign_import_module_name_from_module_2_f_0(
#line 112 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__ModuleForeignImported_4,
#line 112 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__CurrentModule_5)
#line 112 "prog_foreign.m"
{
#line 220 "prog_foreign.m"
  {
#line 220 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 220 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__ImportedForeignCodeModuleName_6;
#line 220 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Lang_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ModuleForeignImported_4, (MR_Integer) 0)));
#line 220 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__ForeignImportModule_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ModuleForeignImported_4, (MR_Integer) 1)));

#line 3661 "parse_tree.prog_foreign.c"
#line 3662 "parse_tree.prog_foreign.c"
    switch (parse_tree__prog_foreign__Lang_12) {
#line 3664 "parse_tree.prog_foreign.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 3666 "parse_tree.prog_foreign.c"
      case (MR_Integer) 0:
#line 226 "prog_foreign.m"
        parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = parse_tree__prog_foreign__ForeignImportModule_13;
#line 3670 "parse_tree.prog_foreign.c"
        break;
#line 3672 "parse_tree.prog_foreign.c"
      case (MR_Integer) 1:
#line 3674 "parse_tree.prog_foreign.c"
        {
#line 3676 "parse_tree.prog_foreign.c"
          MR_Word parse_tree__prog_foreign__ImportedForeignCodeModuleName1_26;

#line 216 "prog_foreign.m"
          {
#line 216 "prog_foreign.m"
            parse_tree__prog_foreign__ImportedForeignCodeModuleName1_26 = parse_tree__prog_foreign__foreign_language_module_name_2_f_1(parse_tree__prog_foreign__ForeignImportModule_13, parse_tree__prog_foreign__Lang_12);
          }
#line 250 "prog_foreign.m"
          {
#line 250 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__ImportedForeignCodeModuleName1_26);
          }
#line 250 "prog_foreign.m"
          if (parse_tree__prog_foreign__succeeded)
#line 250 "prog_foreign.m"
            {
#line 251 "prog_foreign.m"
              {
#line 251 "prog_foreign.m"
                parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__CurrentModule_5);
              }
#line 251 "prog_foreign.m"
              parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 250 "prog_foreign.m"
            }
#line 249 "prog_foreign.m"
          if (parse_tree__prog_foreign__succeeded)
#line 253 "prog_foreign.m"
            {
#line 253 "prog_foreign.m"
              parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = (MR_Word) &parse_tree__prog_foreign_scalar_common_2[0];
#line 253 "prog_foreign.m"
            }
#line 249 "prog_foreign.m"
          else
#line 255 "prog_foreign.m"
            parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = parse_tree__prog_foreign__ImportedForeignCodeModuleName1_26;
#line 3714 "parse_tree.prog_foreign.c"
        }
#line 3716 "parse_tree.prog_foreign.c"
        break;
#line 3718 "parse_tree.prog_foreign.c"
      case (MR_Integer) 3:
#line 249 "prog_foreign.m"
        {
#line 250 "prog_foreign.m"
          {
#line 250 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__ForeignImportModule_13);
          }
#line 250 "prog_foreign.m"
          if (parse_tree__prog_foreign__succeeded)
#line 250 "prog_foreign.m"
            {
#line 251 "prog_foreign.m"
              {
#line 251 "prog_foreign.m"
                parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__CurrentModule_5);
              }
#line 251 "prog_foreign.m"
              parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 250 "prog_foreign.m"
            }
#line 249 "prog_foreign.m"
          if (parse_tree__prog_foreign__succeeded)
#line 253 "prog_foreign.m"
            {
#line 253 "prog_foreign.m"
              parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = (MR_Word) &parse_tree__prog_foreign_scalar_common_2[0];
#line 253 "prog_foreign.m"
            }
#line 249 "prog_foreign.m"
          else
#line 255 "prog_foreign.m"
            parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = parse_tree__prog_foreign__ForeignImportModule_13;
#line 249 "prog_foreign.m"
        }
#line 3754 "parse_tree.prog_foreign.c"
        break;
#line 3756 "parse_tree.prog_foreign.c"
      case (MR_Integer) 2:
#line 249 "prog_foreign.m"
        {
#line 250 "prog_foreign.m"
          {
#line 250 "prog_foreign.m"
            parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__ForeignImportModule_13);
          }
#line 250 "prog_foreign.m"
          if (parse_tree__prog_foreign__succeeded)
#line 250 "prog_foreign.m"
            {
#line 251 "prog_foreign.m"
              {
#line 251 "prog_foreign.m"
                parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__CurrentModule_5);
              }
#line 251 "prog_foreign.m"
              parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
#line 250 "prog_foreign.m"
            }
#line 249 "prog_foreign.m"
          if (parse_tree__prog_foreign__succeeded)
#line 253 "prog_foreign.m"
            {
#line 253 "prog_foreign.m"
              parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = (MR_Word) &parse_tree__prog_foreign_scalar_common_2[0];
#line 253 "prog_foreign.m"
            }
#line 249 "prog_foreign.m"
          else
#line 255 "prog_foreign.m"
            parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = parse_tree__prog_foreign__ForeignImportModule_13;
#line 249 "prog_foreign.m"
        }
#line 3792 "parse_tree.prog_foreign.c"
        break;
#line 3794 "parse_tree.prog_foreign.c"
    }
#line 220 "prog_foreign.m"
    return parse_tree__prog_foreign__ImportedForeignCodeModuleName_6;
#line 220 "prog_foreign.m"
  }
#line 112 "prog_foreign.m"
}

#line 105 "prog_foreign.m"
MR_Word MR_CALL 
parse_tree__prog_foreign__foreign_import_module_name_1_f_0(
#line 105 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__ImportModule_3)
#line 105 "prog_foreign.m"
{
#line 203 "prog_foreign.m"
  {
#line 203 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 203 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__ModuleName_4;
#line 203 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__Lang_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ImportModule_3, (MR_Integer) 0)));
#line 203 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__ForeignImportModule_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ImportModule_3, (MR_Integer) 1)));

#line 208 "prog_foreign.m"
#line 208 "prog_foreign.m"
    switch (parse_tree__prog_foreign__Lang_5) {
#line 208 "prog_foreign.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 208 "prog_foreign.m"
      case (MR_Integer) 0:
#line 207 "prog_foreign.m"
        parse_tree__prog_foreign__ModuleName_4 = parse_tree__prog_foreign__ForeignImportModule_6;
#line 208 "prog_foreign.m"
        break;
#line 208 "prog_foreign.m"
      case (MR_Integer) 1:
#line 216 "prog_foreign.m"
        {
#line 216 "prog_foreign.m"
          parse_tree__prog_foreign__ModuleName_4 = parse_tree__prog_foreign__foreign_language_module_name_2_f_1(parse_tree__prog_foreign__ForeignImportModule_6, parse_tree__prog_foreign__Lang_5);
        }
#line 208 "prog_foreign.m"
        break;
#line 208 "prog_foreign.m"
      case (MR_Integer) 3:
#line 213 "prog_foreign.m"
        parse_tree__prog_foreign__ModuleName_4 = parse_tree__prog_foreign__ForeignImportModule_6;
#line 208 "prog_foreign.m"
        break;
#line 208 "prog_foreign.m"
      case (MR_Integer) 2:
#line 210 "prog_foreign.m"
        parse_tree__prog_foreign__ModuleName_4 = parse_tree__prog_foreign__ForeignImportModule_6;
#line 208 "prog_foreign.m"
        break;
#line 208 "prog_foreign.m"
    }
#line 203 "prog_foreign.m"
    return parse_tree__prog_foreign__ModuleName_4;
#line 203 "prog_foreign.m"
  }
#line 105 "prog_foreign.m"
}

#line 93 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign__foreign_body_code_is_for_lang_2_p_0(
#line 93 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__Lang_3,
#line 93 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__BodyCode_4)
#line 93 "prog_foreign.m"
{
#line 201 "prog_foreign.m"
  {
#line 201 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 201 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__BodyCode_4, (MR_Integer) 0)));
#line 201 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__BodyCode_4, (MR_Integer) 1)));
#line 201 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__BodyCode_4, (MR_Integer) 2)));

#line 201 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__Lang_3 == parse_tree__prog_foreign__V_7_7);
#line 201 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 201 "prog_foreign.m"
  }
#line 93 "prog_foreign.m"
}

#line 91 "prog_foreign.m"
MR_bool MR_CALL 
parse_tree__prog_foreign__foreign_decl_code_is_for_lang_2_p_0(
#line 91 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__Lang_3,
#line 91 "prog_foreign.m"
  MR_Word parse_tree__prog_foreign__DeclCode_4)
#line 91 "prog_foreign.m"
{
#line 198 "prog_foreign.m"
  {
#line 198 "prog_foreign.m"
    MR_bool parse_tree__prog_foreign__succeeded;
#line 198 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__DeclCode_4, (MR_Integer) 0)));
#line 198 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__DeclCode_4, (MR_Integer) 1)));
#line 198 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__DeclCode_4, (MR_Integer) 2)));
#line 198 "prog_foreign.m"
    MR_Word parse_tree__prog_foreign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__DeclCode_4, (MR_Integer) 3)));

#line 198 "prog_foreign.m"
    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__Lang_3 == parse_tree__prog_foreign__V_8_8);
#line 198 "prog_foreign.m"
    return parse_tree__prog_foreign__succeeded;
#line 198 "prog_foreign.m"
  }
#line 91 "prog_foreign.m"
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
