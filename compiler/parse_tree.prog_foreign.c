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


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
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
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0_s {
  MR_Box * parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__wrapper_arg_1;
  MR_Cont parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont;
  void * parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont_env_ptr;
  MR_Word parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__conv0_HeadVar__1_1;
};


static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_body_code_0_0[3];

static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_body_code_0_0[3];

static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_body_code_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_body_code_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_body_code_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_body_code_0[1];

static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_body_code_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__cord__ti_cord_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;

static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_decl_code_0_0[4];

static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_decl_code_0_0[4];

static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_decl_code_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_decl_code_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_decl_code_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_decl_code_0[1];

static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_decl_code_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__cord__ti_cord_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;

static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_export_decl_0_0[4];

static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_export_decl_0_0[4];

static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decl_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decl_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decl_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_export_decl_0[1];

static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_decl_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0;

static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_export_decls_0_0[2];

static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_export_decls_0_0[2];

static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decls_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decls_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decls_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_export_decls_0[1];

static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_decls_0[1];

static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_defn_0[1];

static const MR_NotagFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__notag_functor_desc_foreign_export_defn_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0;

static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_code_0_0_10001(
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_code_0_0_10001(
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_codes_0_0_10001(
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_codes_0_0_10001(
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_code_0_0_10001(
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_code_0_0_10001(
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_codes_0_0_10001(
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_codes_0_0_10001(
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decl_0_0_10001(
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decl_0_0_10001(
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decls_0_0_10001(
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decls_0_0_10001(
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_defn_0_0_10001(
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_defn_0_0_10001(
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_defns_0_0_10001(
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
  MR_Box parse_tree__prog_foreign__wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_defns_0_0_10001(
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
  MR_Box parse_tree__prog_foreign__wrapper_arg_3);

static MR_String MR_CALL 
parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_f_0(
  MR_String parse_tree__prog_foreign__String_3);

static void MR_CALL 
parse_tree__prog_foreign__valid_foreign_language_1_p_1(
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
  MR_Cont parse_tree__prog_foreign__cont,
  void * parse_tree__prog_foreign__cont_env_ptr);

static void MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0_1(
  void * parse_tree__prog_foreign__env_ptr_arg);

static void MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0_2(
  MR_Box parse_tree__prog_foreign__closure_arg,
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
  MR_Cont parse_tree__prog_foreign__cont,
  void * parse_tree__prog_foreign__cont_env_ptr);


static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_1[5][2];

static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_2[1][1];

static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_3[1][4];

static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_4[1][3];


/* sealed */ struct parse_tree__prog_foreign__vector_common_type_5_0_s {
  const MR_String parse_tree__prog_foreign__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct parse_tree__prog_foreign__vector_common_type_5_0_s parse_tree__prog_foreign_vector_common_5[16];

/* sealed */ struct parse_tree__prog_foreign__vector_common_type_6_0_s {
  const MR_Word parse_tree__prog_foreign__vector_common_type_6_0__vct_6_f_0;
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



static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_body_code_0_0[3] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_literal_or_include_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_body_code_0_0[3] = {
  (MR_String) "fbody_lang",
  (MR_String) "fbody_code",
  (MR_String) "fbody_context"
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_body_code_0_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_body_code_0_0
};

static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_body_code_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_body_code_0_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_body_code_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_body_code_0_0
};

static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_body_code_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__cord__ti_cord_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0
  }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_codes_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_decl_code_0_0[4] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_decl_is_local_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_literal_or_include_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_decl_code_0_0[4] = {
  (MR_String) "fdecl_lang",
  (MR_String) "fdecl_is_local",
  (MR_String) "fdecl_code",
  (MR_String) "fdecl_context"
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_decl_code_0_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_decl_code_0_0
};

static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_decl_code_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_decl_code_0_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_decl_code_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_decl_code_0_0
};

static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_decl_code_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__cord__ti_cord_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0
  }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_codes_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_export_decl_0_0[4] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_foreign_language_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_export_decl_0_0[4] = {
  (MR_String) "fexp_decl_lang",
  (MR_String) "fexp_decl_ret_type",
  (MR_String) "fexp_decl_func_name",
  (MR_String) "fexp_decl_arg_decls"
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decl_0_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decl_0_0
};

static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decl_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decl_0_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_export_decl_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decl_0_0
};

static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_decl_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0
  }
};

static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_export_decls_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0
};

static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_export_decls_0_0[2] = {
  (MR_String) "fexp_decls_codes",
  (MR_String) "fexp_decls_list"
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decls_0_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decls_0_0
};

static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decls_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decls_0_0
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_export_decls_0[1] = {
  &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decls_0_0
};

static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_decls_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_decls_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_defn_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__notag_functor_desc_foreign_export_defn_0 = {
  (MR_String) "foreign_export_defn",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0
  }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_defns_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_code_0_0_10001(
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;

    {
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_body_code_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
    return parse_tree__prog_foreign__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_code_0_0_10001(
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

    {
      parse_tree__prog_foreign____Compare____foreign_body_code_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_codes_0_0_10001(
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;

    {
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_body_codes_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
    return parse_tree__prog_foreign__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_codes_0_0_10001(
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

    {
      parse_tree__prog_foreign____Compare____foreign_body_codes_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_code_0_0_10001(
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;

    {
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_decl_code_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
    return parse_tree__prog_foreign__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_code_0_0_10001(
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

    {
      parse_tree__prog_foreign____Compare____foreign_decl_code_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_codes_0_0_10001(
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;

    {
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_decl_codes_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
    return parse_tree__prog_foreign__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_codes_0_0_10001(
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

    {
      parse_tree__prog_foreign____Compare____foreign_decl_codes_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decl_0_0_10001(
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;

    {
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_export_decl_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
    return parse_tree__prog_foreign__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decl_0_0_10001(
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

    {
      parse_tree__prog_foreign____Compare____foreign_export_decl_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decls_0_0_10001(
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;

    {
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_export_decls_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
    return parse_tree__prog_foreign__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decls_0_0_10001(
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

    {
      parse_tree__prog_foreign____Compare____foreign_export_decls_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_defn_0_0_10001(
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;

    {
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_export_defn_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
    return parse_tree__prog_foreign__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_defn_0_0_10001(
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

    {
      parse_tree__prog_foreign____Compare____foreign_export_defn_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_defns_0_0_10001(
  MR_Box parse_tree__prog_foreign__wrapper_arg_1,
  MR_Box parse_tree__prog_foreign__wrapper_arg_2)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;

    {
      parse_tree__prog_foreign__succeeded = parse_tree__prog_foreign____Unify____foreign_export_defns_0_0(((MR_Word) parse_tree__prog_foreign__wrapper_arg_1), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2));
    }
    return parse_tree__prog_foreign__succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_defns_0_0_10001(
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
  MR_Box parse_tree__prog_foreign__wrapper_arg_2,
  MR_Box parse_tree__prog_foreign__wrapper_arg_3)
{
  {
    MR_Word parse_tree__prog_foreign__conv0_HeadVar__1_1;

    {
      parse_tree__prog_foreign____Compare____foreign_export_defns_0_0(&parse_tree__prog_foreign__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_foreign__wrapper_arg_2), ((MR_Word) parse_tree__prog_foreign__wrapper_arg_3));
    }
    *parse_tree__prog_foreign__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_foreign__conv0_HeadVar__1_1));
  }
}

MR_Word MR_CALL 
parse_tree__prog_foreign__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_f_0(
  MR_Word parse_tree__prog_foreign__Target_7,
  MR_Word parse_tree__prog_foreign__Lang1_8,
  MR_Word parse_tree__prog_foreign__Lang2_9)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;
    MR_Word parse_tree__prog_foreign__Prefer_10;

    switch (parse_tree__prog_foreign__Target_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__Lang2_9 == (MR_Integer) 0);
          if (parse_tree__prog_foreign__succeeded)
            {
              parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__Lang1_8 == (MR_Integer) 0);
              parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
            }
          if (parse_tree__prog_foreign__succeeded)
            parse_tree__prog_foreign__Prefer_10 = (MR_Integer) 1;
          else
            parse_tree__prog_foreign__Prefer_10 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 1:
        parse_tree__prog_foreign__Prefer_10 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        parse_tree__prog_foreign__Prefer_10 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        parse_tree__prog_foreign__Prefer_10 = (MR_Integer) 0;
        break;
    }
    return parse_tree__prog_foreign__Prefer_10;
  }
}

void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_defns_0_0(
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;
    MR_Word parse_tree__prog_foreign__Cast_HeadVar1_4 = parse_tree__prog_foreign__HeadVar__2_2;
    MR_Word parse_tree__prog_foreign__Cast_HeadVar2_5 = parse_tree__prog_foreign__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[4], parse_tree__prog_foreign__HeadVar__1_1, ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_defns_0_0(
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;
    MR_Word parse_tree__prog_foreign__Cast_HeadVar1_3 = parse_tree__prog_foreign__HeadVar__1_1;
    MR_Word parse_tree__prog_foreign__Cast_HeadVar2_4 = parse_tree__prog_foreign__HeadVar__2_2;

    {
      parse_tree__prog_foreign__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[4], ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar2_4)));
    }
    return parse_tree__prog_foreign__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_defn_0_0(
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;
    MR_Integer parse_tree__prog_foreign__CastX_6 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;
    MR_Integer parse_tree__prog_foreign__CastY_7 = (MR_Integer) parse_tree__prog_foreign__HeadVar__3_3;

    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_6 == parse_tree__prog_foreign__CastY_7);
    if (parse_tree__prog_foreign__succeeded)
      *parse_tree__prog_foreign__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String parse_tree__prog_foreign__Var_4 = (MR_String) parse_tree__prog_foreign__HeadVar__2_2;
        MR_String parse_tree__prog_foreign__Var_5 = (MR_String) parse_tree__prog_foreign__HeadVar__3_3;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__prog_foreign__HeadVar__1_1, parse_tree__prog_foreign__Var_4, parse_tree__prog_foreign__Var_5);
        }
      }
  }
}

MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_defn_0_0(
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;
    MR_Integer parse_tree__prog_foreign__CastX_5 = (MR_Integer) parse_tree__prog_foreign__HeadVar__1_1;
    MR_Integer parse_tree__prog_foreign__CastY_6 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;

    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_5 == parse_tree__prog_foreign__CastY_6);
    if (parse_tree__prog_foreign__succeeded)
      parse_tree__prog_foreign__succeeded = MR_TRUE;
    else
      {
        MR_String parse_tree__prog_foreign__Var_3 = (MR_String) parse_tree__prog_foreign__HeadVar__1_1;
        MR_String parse_tree__prog_foreign__Var_4 = (MR_String) parse_tree__prog_foreign__HeadVar__2_2;

        parse_tree__prog_foreign__succeeded = (strcmp(parse_tree__prog_foreign__Var_3, parse_tree__prog_foreign__Var_4) == 0);
      }
    return parse_tree__prog_foreign__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decls_0_0(
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;
    MR_Integer parse_tree__prog_foreign__CastX_9 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;
    MR_Integer parse_tree__prog_foreign__CastY_10 = (MR_Integer) parse_tree__prog_foreign__HeadVar__3_3;

    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_9 == parse_tree__prog_foreign__CastY_10);
    if (parse_tree__prog_foreign__succeeded)
      *parse_tree__prog_foreign__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word parse_tree__prog_foreign__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_foreign__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__prog_foreign__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__prog_foreign__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__prog_foreign__Var_8;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[2], &parse_tree__prog_foreign__Var_8, ((MR_Box) (parse_tree__prog_foreign__Var_4)), ((MR_Box) (parse_tree__prog_foreign__Var_6)));
        }
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__Var_8 == (MR_Integer) 0);
        parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
        if (parse_tree__prog_foreign__succeeded)
          *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__Var_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[3], parse_tree__prog_foreign__HeadVar__1_1, ((MR_Box) (parse_tree__prog_foreign__Var_5)), ((MR_Box) (parse_tree__prog_foreign__Var_7)));
            }
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decls_0_0(
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;
    MR_Integer parse_tree__prog_foreign__CastX_7 = (MR_Integer) parse_tree__prog_foreign__HeadVar__1_1;
    MR_Integer parse_tree__prog_foreign__CastY_8 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;

    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_7 == parse_tree__prog_foreign__CastY_8);
    if (parse_tree__prog_foreign__succeeded)
      parse_tree__prog_foreign__succeeded = MR_TRUE;
    else
      {
        MR_Word parse_tree__prog_foreign__TypeInfo_10_10;
        MR_Word parse_tree__prog_foreign__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__prog_foreign__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__prog_foreign__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_foreign__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));

        {
          parse_tree__prog_foreign__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[2], ((MR_Box) (parse_tree__prog_foreign__Var_3)), ((MR_Box) (parse_tree__prog_foreign__Var_5)));
        }
        if (parse_tree__prog_foreign__succeeded)
          {
            parse_tree__prog_foreign__TypeInfo_10_10 = (MR_Word) &parse_tree__prog_foreign_scalar_common_1[3];
            {
              parse_tree__prog_foreign__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_foreign__TypeInfo_10_10, ((MR_Box) (parse_tree__prog_foreign__Var_4)), ((MR_Box) (parse_tree__prog_foreign__Var_6)));
            }
          }
      }
    return parse_tree__prog_foreign__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decl_0_0(
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;
    MR_Integer parse_tree__prog_foreign__CastX_15 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;
    MR_Integer parse_tree__prog_foreign__CastY_16 = (MR_Integer) parse_tree__prog_foreign__HeadVar__3_3;

    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_15 == parse_tree__prog_foreign__CastY_16);
    if (parse_tree__prog_foreign__succeeded)
      *parse_tree__prog_foreign__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word parse_tree__prog_foreign__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
        MR_String parse_tree__prog_foreign__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
        MR_String parse_tree__prog_foreign__Var_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));
        MR_String parse_tree__prog_foreign__Var_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word parse_tree__prog_foreign__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 0)));
        MR_String parse_tree__prog_foreign__Var_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 1)));
        MR_String parse_tree__prog_foreign__Var_10 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 2)));
        MR_String parse_tree__prog_foreign__Var_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word parse_tree__prog_foreign__Var_12;
        MR_Integer parse_tree__prog_foreign__Var_21 = (MR_Integer) parse_tree__prog_foreign__Var_4;
        MR_Integer parse_tree__prog_foreign__Var_22 = (MR_Integer) parse_tree__prog_foreign__Var_8;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_foreign__Var_12, parse_tree__prog_foreign__Var_21, parse_tree__prog_foreign__Var_22);
        }
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__Var_12 == (MR_Integer) 0);
        parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
        if (parse_tree__prog_foreign__succeeded)
          *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__Var_12;
        else
          {
            MR_Word parse_tree__prog_foreign__Var_13;

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__prog_foreign__Var_13, parse_tree__prog_foreign__Var_5, parse_tree__prog_foreign__Var_9);
            }
            parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__Var_13 == (MR_Integer) 0);
            parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
            if (parse_tree__prog_foreign__succeeded)
              *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__Var_13;
            else
              {
                MR_Word parse_tree__prog_foreign__Var_14;

                {
                  mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__prog_foreign__Var_14, parse_tree__prog_foreign__Var_6, parse_tree__prog_foreign__Var_10);
                }
                parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__Var_14 == (MR_Integer) 0);
                parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
                if (parse_tree__prog_foreign__succeeded)
                  *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__Var_14;
                else
                  {
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__prog_foreign__HeadVar__1_1, parse_tree__prog_foreign__Var_7, parse_tree__prog_foreign__Var_11);
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decl_0_0(
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;
    MR_Integer parse_tree__prog_foreign__CastX_11 = (MR_Integer) parse_tree__prog_foreign__HeadVar__1_1;
    MR_Integer parse_tree__prog_foreign__CastY_12 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;

    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_11 == parse_tree__prog_foreign__CastY_12);
    if (parse_tree__prog_foreign__succeeded)
      parse_tree__prog_foreign__succeeded = MR_TRUE;
    else
      {
        MR_Word parse_tree__prog_foreign__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)));
        MR_String parse_tree__prog_foreign__Var_4 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 1)));
        MR_String parse_tree__prog_foreign__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 2)));
        MR_String parse_tree__prog_foreign__Var_6 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word parse_tree__prog_foreign__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
        MR_String parse_tree__prog_foreign__Var_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
        MR_String parse_tree__prog_foreign__Var_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));
        MR_String parse_tree__prog_foreign__Var_10 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 3)));

        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__Var_3 == parse_tree__prog_foreign__Var_7);
        if (parse_tree__prog_foreign__succeeded)
          {
            parse_tree__prog_foreign__succeeded = (strcmp(parse_tree__prog_foreign__Var_4, parse_tree__prog_foreign__Var_8) == 0);
            if (parse_tree__prog_foreign__succeeded)
              {
                parse_tree__prog_foreign__succeeded = (strcmp(parse_tree__prog_foreign__Var_5, parse_tree__prog_foreign__Var_9) == 0);
                if (parse_tree__prog_foreign__succeeded)
                  parse_tree__prog_foreign__succeeded = (strcmp(parse_tree__prog_foreign__Var_6, parse_tree__prog_foreign__Var_10) == 0);
              }
          }
      }
    return parse_tree__prog_foreign__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_codes_0_0(
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;
    MR_Word parse_tree__prog_foreign__Cast_HeadVar1_4 = parse_tree__prog_foreign__HeadVar__2_2;
    MR_Word parse_tree__prog_foreign__Cast_HeadVar2_5 = parse_tree__prog_foreign__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[1], parse_tree__prog_foreign__HeadVar__1_1, ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_codes_0_0(
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;
    MR_Word parse_tree__prog_foreign__Cast_HeadVar1_3 = parse_tree__prog_foreign__HeadVar__1_1;
    MR_Word parse_tree__prog_foreign__Cast_HeadVar2_4 = parse_tree__prog_foreign__HeadVar__2_2;

    {
      parse_tree__prog_foreign__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[1], ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar2_4)));
    }
    return parse_tree__prog_foreign__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_code_0_0(
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;
    MR_Integer parse_tree__prog_foreign__CastX_15 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;
    MR_Integer parse_tree__prog_foreign__CastY_16 = (MR_Integer) parse_tree__prog_foreign__HeadVar__3_3;

    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_15 == parse_tree__prog_foreign__CastY_16);
    if (parse_tree__prog_foreign__succeeded)
      *parse_tree__prog_foreign__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word parse_tree__prog_foreign__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_foreign__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__prog_foreign__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word parse_tree__prog_foreign__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word parse_tree__prog_foreign__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__prog_foreign__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__prog_foreign__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word parse_tree__prog_foreign__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word parse_tree__prog_foreign__Var_12;
        MR_Integer parse_tree__prog_foreign__Var_21 = (MR_Integer) parse_tree__prog_foreign__Var_4;
        MR_Integer parse_tree__prog_foreign__Var_22 = (MR_Integer) parse_tree__prog_foreign__Var_8;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_foreign__Var_12, parse_tree__prog_foreign__Var_21, parse_tree__prog_foreign__Var_22);
        }
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__Var_12 == (MR_Integer) 0);
        parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
        if (parse_tree__prog_foreign__succeeded)
          *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__Var_12;
        else
          {
            MR_Word parse_tree__prog_foreign__Var_13;
            MR_Integer parse_tree__prog_foreign__Var_23 = (MR_Integer) parse_tree__prog_foreign__Var_5;
            MR_Integer parse_tree__prog_foreign__Var_24 = (MR_Integer) parse_tree__prog_foreign__Var_9;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_foreign__Var_13, parse_tree__prog_foreign__Var_23, parse_tree__prog_foreign__Var_24);
            }
            parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__Var_13 == (MR_Integer) 0);
            parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
            if (parse_tree__prog_foreign__succeeded)
              *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__Var_13;
            else
              {
                MR_Word parse_tree__prog_foreign__Var_14;

                {
                  parse_tree__prog_data_foreign____Compare____foreign_literal_or_include_0_0(&parse_tree__prog_foreign__Var_14, parse_tree__prog_foreign__Var_6, parse_tree__prog_foreign__Var_10);
                }
                parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__Var_14 == (MR_Integer) 0);
                parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
                if (parse_tree__prog_foreign__succeeded)
                  *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__Var_14;
                else
                  {
                    mercury__term____Compare____context_0_0(parse_tree__prog_foreign__HeadVar__1_1, parse_tree__prog_foreign__Var_7, parse_tree__prog_foreign__Var_11);
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_code_0_0(
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;
    MR_Integer parse_tree__prog_foreign__CastX_11 = (MR_Integer) parse_tree__prog_foreign__HeadVar__1_1;
    MR_Integer parse_tree__prog_foreign__CastY_12 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;

    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_11 == parse_tree__prog_foreign__CastY_12);
    if (parse_tree__prog_foreign__succeeded)
      parse_tree__prog_foreign__succeeded = MR_TRUE;
    else
      {
        MR_Word parse_tree__prog_foreign__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__prog_foreign__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__prog_foreign__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word parse_tree__prog_foreign__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word parse_tree__prog_foreign__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_foreign__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__prog_foreign__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word parse_tree__prog_foreign__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 3)));

        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__Var_3 == parse_tree__prog_foreign__Var_7);
        if (parse_tree__prog_foreign__succeeded)
          {
            parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__Var_4 == parse_tree__prog_foreign__Var_8);
            if (parse_tree__prog_foreign__succeeded)
              {
                {
                  parse_tree__prog_foreign__succeeded = parse_tree__prog_data_foreign____Unify____foreign_literal_or_include_0_0(parse_tree__prog_foreign__Var_5, parse_tree__prog_foreign__Var_9);
                }
                if (parse_tree__prog_foreign__succeeded)
                  {
                    parse_tree__prog_foreign__succeeded = mercury__term____Unify____context_0_0(parse_tree__prog_foreign__Var_6, parse_tree__prog_foreign__Var_10);
                  }
              }
          }
      }
    return parse_tree__prog_foreign__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_codes_0_0(
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;
    MR_Word parse_tree__prog_foreign__Cast_HeadVar1_4 = parse_tree__prog_foreign__HeadVar__2_2;
    MR_Word parse_tree__prog_foreign__Cast_HeadVar2_5 = parse_tree__prog_foreign__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[0], parse_tree__prog_foreign__HeadVar__1_1, ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_codes_0_0(
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;
    MR_Word parse_tree__prog_foreign__Cast_HeadVar1_3 = parse_tree__prog_foreign__HeadVar__1_1;
    MR_Word parse_tree__prog_foreign__Cast_HeadVar2_4 = parse_tree__prog_foreign__HeadVar__2_2;

    {
      parse_tree__prog_foreign__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_foreign_scalar_common_1[0], ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_foreign__Cast_HeadVar2_4)));
    }
    return parse_tree__prog_foreign__succeeded;
  }
}

void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_code_0_0(
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
  MR_Word parse_tree__prog_foreign__HeadVar__2_2,
  MR_Word parse_tree__prog_foreign__HeadVar__3_3)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;
    MR_Integer parse_tree__prog_foreign__CastX_12 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;
    MR_Integer parse_tree__prog_foreign__CastY_13 = (MR_Integer) parse_tree__prog_foreign__HeadVar__3_3;

    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_12 == parse_tree__prog_foreign__CastY_13);
    if (parse_tree__prog_foreign__succeeded)
      *parse_tree__prog_foreign__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word parse_tree__prog_foreign__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_foreign__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__prog_foreign__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word parse_tree__prog_foreign__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__prog_foreign__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__prog_foreign__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word parse_tree__prog_foreign__Var_10;
        MR_Integer parse_tree__prog_foreign__Var_17 = (MR_Integer) parse_tree__prog_foreign__Var_4;
        MR_Integer parse_tree__prog_foreign__Var_18 = (MR_Integer) parse_tree__prog_foreign__Var_7;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_foreign__Var_10, parse_tree__prog_foreign__Var_17, parse_tree__prog_foreign__Var_18);
        }
        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__Var_10 == (MR_Integer) 0);
        parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
        if (parse_tree__prog_foreign__succeeded)
          *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__Var_10;
        else
          {
            MR_Word parse_tree__prog_foreign__Var_11;

            {
              parse_tree__prog_data_foreign____Compare____foreign_literal_or_include_0_0(&parse_tree__prog_foreign__Var_11, parse_tree__prog_foreign__Var_5, parse_tree__prog_foreign__Var_8);
            }
            parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__Var_11 == (MR_Integer) 0);
            parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
            if (parse_tree__prog_foreign__succeeded)
              *parse_tree__prog_foreign__HeadVar__1_1 = parse_tree__prog_foreign__Var_11;
            else
              {
                mercury__term____Compare____context_0_0(parse_tree__prog_foreign__HeadVar__1_1, parse_tree__prog_foreign__Var_6, parse_tree__prog_foreign__Var_9);
              }
          }
      }
  }
}

MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_code_0_0(
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
  MR_Word parse_tree__prog_foreign__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;
    MR_Integer parse_tree__prog_foreign__CastX_9 = (MR_Integer) parse_tree__prog_foreign__HeadVar__1_1;
    MR_Integer parse_tree__prog_foreign__CastY_10 = (MR_Integer) parse_tree__prog_foreign__HeadVar__2_2;

    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__CastX_9 == parse_tree__prog_foreign__CastY_10);
    if (parse_tree__prog_foreign__succeeded)
      parse_tree__prog_foreign__succeeded = MR_TRUE;
    else
      {
        MR_Word parse_tree__prog_foreign__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__prog_foreign__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__prog_foreign__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word parse_tree__prog_foreign__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__prog_foreign__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__prog_foreign__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__2_2, (MR_Integer) 2)));

        parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__Var_3 == parse_tree__prog_foreign__Var_6);
        if (parse_tree__prog_foreign__succeeded)
          {
            {
              parse_tree__prog_foreign__succeeded = parse_tree__prog_data_foreign____Unify____foreign_literal_or_include_0_0(parse_tree__prog_foreign__Var_4, parse_tree__prog_foreign__Var_7);
            }
            if (parse_tree__prog_foreign__succeeded)
              {
                parse_tree__prog_foreign__succeeded = mercury__term____Unify____context_0_0(parse_tree__prog_foreign__Var_5, parse_tree__prog_foreign__Var_8);
              }
          }
      }
    return parse_tree__prog_foreign__succeeded;
  }
}

static MR_String MR_CALL 
parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_f_0(
  MR_String parse_tree__prog_foreign__String_3)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;
    MR_String parse_tree__prog_foreign__Name_4;
    MR_Char parse_tree__prog_foreign__Char_5;
    MR_String parse_tree__prog_foreign__Rest_6;

    {
      parse_tree__prog_foreign__succeeded = mercury__string__first_char_3_p_3(parse_tree__prog_foreign__String_3, &parse_tree__prog_foreign__Char_5, &parse_tree__prog_foreign__Rest_6);
    }
    if (parse_tree__prog_foreign__succeeded)
      {
        MR_Integer parse_tree__prog_foreign__Code_7;
        MR_String parse_tree__prog_foreign__CodeString_8;
        MR_String parse_tree__prog_foreign__ThisCharString_9;
        MR_String parse_tree__prog_foreign__Name0_10;

        {
          mercury__char__to_int_2_p_0(parse_tree__prog_foreign__Char_5, &parse_tree__prog_foreign__Code_7);
        }
        {
          mercury__string__int_to_string_2_p_0(parse_tree__prog_foreign__Code_7, &parse_tree__prog_foreign__CodeString_8);
        }
        {
          mercury__string__append_3_p_2((MR_String) "_", parse_tree__prog_foreign__CodeString_8, &parse_tree__prog_foreign__ThisCharString_9);
        }
        {
          parse_tree__prog_foreign__Name0_10 = parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_f_0(parse_tree__prog_foreign__Rest_6);
        }
        {
          mercury__string__append_3_p_2(parse_tree__prog_foreign__ThisCharString_9, parse_tree__prog_foreign__Name0_10, &parse_tree__prog_foreign__Name_4);
        }
      }
    else
      parse_tree__prog_foreign__Name_4 = parse_tree__prog_foreign__String_3;
    return parse_tree__prog_foreign__Name_4;
  }
}

static void MR_CALL 
parse_tree__prog_foreign__valid_foreign_language_1_p_1(
  MR_Word * parse_tree__prog_foreign__HeadVar__1_1,
  MR_Cont parse_tree__prog_foreign__cont,
  void * parse_tree__prog_foreign__cont_env_ptr)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;

    {
      MR_Integer parse_tree__prog_foreign__slot_0 = (MR_Integer) 0;

      do
        {
          *parse_tree__prog_foreign__HeadVar__1_1 = ((&parse_tree__prog_foreign_vector_common_6[0 + parse_tree__prog_foreign__slot_0]))->parse_tree__prog_foreign__vector_common_type_6_0__vct_6_f_0;
          {
            parse_tree__prog_foreign__cont(parse_tree__prog_foreign__cont_env_ptr);
          }
          parse_tree__prog_foreign__slot_0 = (parse_tree__prog_foreign__slot_0 + (MR_Integer) 1);
        }
      while ((parse_tree__prog_foreign__slot_0 < (MR_Integer) 4));
    }
  }
}

MR_String MR_CALL 
parse_tree__prog_foreign__convert_to_valid_c_identifier_1_f_0(
  MR_String parse_tree__prog_foreign__String_3)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;
    MR_String parse_tree__prog_foreign__Name_4;
    MR_String parse_tree__prog_foreign__Name0_5;

    {
      MR_Integer parse_tree__prog_foreign__case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(parse_tree__prog_foreign__String_3, 0)) {
        case (MR_Integer) 33:
          if (MR_offset_streq(1, parse_tree__prog_foreign__String_3, (MR_String) "!"))
            parse_tree__prog_foreign__case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 42:
          if (MR_offset_streq(1, parse_tree__prog_foreign__String_3, (MR_String) "*"))
            parse_tree__prog_foreign__case_num_0 = (MR_Integer) 1;
          break;
        case (MR_Integer) 43:
          if (MR_offset_streq(1, parse_tree__prog_foreign__String_3, (MR_String) "+"))
            parse_tree__prog_foreign__case_num_0 = (MR_Integer) 2;
          break;
        case (MR_Integer) 44:
          if (MR_offset_streq(1, parse_tree__prog_foreign__String_3, (MR_String) ","))
            parse_tree__prog_foreign__case_num_0 = (MR_Integer) 3;
          break;
        case (MR_Integer) 45:
          if (MR_offset_streq(1, parse_tree__prog_foreign__String_3, (MR_String) "-"))
            parse_tree__prog_foreign__case_num_0 = (MR_Integer) 4;
          break;
        case (MR_Integer) 47:
          if (MR_offset_streq(1, parse_tree__prog_foreign__String_3, (MR_String) "/"))
            parse_tree__prog_foreign__case_num_0 = (MR_Integer) 5;
          break;
        case (MR_Integer) 59:
          if (MR_offset_streq(1, parse_tree__prog_foreign__String_3, (MR_String) ";"))
            parse_tree__prog_foreign__case_num_0 = (MR_Integer) 6;
          break;
        case (MR_Integer) 60:
          if (MR_offset_streq(1, parse_tree__prog_foreign__String_3, (MR_String) "<"))
            parse_tree__prog_foreign__case_num_0 = (MR_Integer) 7;
          break;
        case (MR_Integer) 61:
          switch (MR_nth_code_unit(parse_tree__prog_foreign__String_3, 1)) {
            case (MR_Integer) 0:
              parse_tree__prog_foreign__case_num_0 = (MR_Integer) 8;
              break;
            case (MR_Integer) 60:
              if (MR_offset_streq(2, parse_tree__prog_foreign__String_3, (MR_String) "=<"))
                parse_tree__prog_foreign__case_num_0 = (MR_Integer) 9;
              break;
          }
          break;
        case (MR_Integer) 62:
          switch (MR_nth_code_unit(parse_tree__prog_foreign__String_3, 1)) {
            case (MR_Integer) 0:
              parse_tree__prog_foreign__case_num_0 = (MR_Integer) 10;
              break;
            case (MR_Integer) 61:
              if (MR_offset_streq(2, parse_tree__prog_foreign__String_3, (MR_String) ">="))
                parse_tree__prog_foreign__case_num_0 = (MR_Integer) 11;
              break;
          }
          break;
        case (MR_Integer) 91:
          switch (MR_nth_code_unit(parse_tree__prog_foreign__String_3, 1)) {
            case (MR_Integer) 93:
              if (MR_offset_streq(2, parse_tree__prog_foreign__String_3, (MR_String) "[]"))
                parse_tree__prog_foreign__case_num_0 = (MR_Integer) 12;
              break;
            case (MR_Integer) 124:
              if (MR_offset_streq(2, parse_tree__prog_foreign__String_3, (MR_String) "[|]"))
                parse_tree__prog_foreign__case_num_0 = (MR_Integer) 13;
              break;
          }
          break;
        case (MR_Integer) 92:
          if (MR_offset_streq(1, parse_tree__prog_foreign__String_3, (MR_String) "\\="))
            parse_tree__prog_foreign__case_num_0 = (MR_Integer) 14;
          break;
        case (MR_Integer) 123:
          if (MR_offset_streq(1, parse_tree__prog_foreign__String_3, (MR_String) "{}"))
            parse_tree__prog_foreign__case_num_0 = (MR_Integer) 15;
          break;
      }
      if ((parse_tree__prog_foreign__case_num_0 < (MR_Integer) 0))
        parse_tree__prog_foreign__succeeded = MR_FALSE;
      else
        {
          /* we found a match; look up the results */
          parse_tree__prog_foreign__Name0_5 = ((&parse_tree__prog_foreign_vector_common_5[0 + parse_tree__prog_foreign__case_num_0]))->parse_tree__prog_foreign__vector_common_type_5_0__vct_5_f_0;
          parse_tree__prog_foreign__succeeded = MR_TRUE;
        }
    }
    if (parse_tree__prog_foreign__succeeded)
      parse_tree__prog_foreign__Name_4 = parse_tree__prog_foreign__Name0_5;
    else
      {
        MR_String parse_tree__prog_foreign__Var_7;

        {
          parse_tree__prog_foreign__Var_7 = parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_f_0(parse_tree__prog_foreign__String_3);
        }
        {
          parse_tree__prog_foreign__Name_4 = mercury__string__f_43_43_2_f_0((MR_String) "f", parse_tree__prog_foreign__Var_7);
        }
      }
    return parse_tree__prog_foreign__Name_4;
  }
}

MR_String MR_CALL 
parse_tree__prog_foreign__qualify_name_2_f_0(
  MR_String parse_tree__prog_foreign__Module0_4,
  MR_String parse_tree__prog_foreign__Name0_5)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;
    MR_String parse_tree__prog_foreign__Name_6;
    MR_Word parse_tree__prog_foreign__Var_7;
    MR_Word parse_tree__prog_foreign__Var_8;
    MR_Word parse_tree__prog_foreign__Var_10;

    {
      parse_tree__prog_foreign__Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__Var_10, 0) = ((MR_Box) (parse_tree__prog_foreign__Name0_5));
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__Var_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__prog_foreign__Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__Var_8, 0) = ((MR_Box) ((MR_String) "__"));
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__Var_8, 1) = ((MR_Box) (parse_tree__prog_foreign__Var_10));
    }
    {
      parse_tree__prog_foreign__Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__Var_7, 0) = ((MR_Box) (parse_tree__prog_foreign__Module0_4));
      MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__Var_7, 1) = ((MR_Box) (parse_tree__prog_foreign__Var_8));
    }
    {
      mercury__string__append_list_2_p_0(parse_tree__prog_foreign__Var_7, &parse_tree__prog_foreign__Name_6);
    }
    return parse_tree__prog_foreign__Name_6;
  }
}

MR_String MR_CALL 
parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(
  MR_String parse_tree__prog_foreign__Name_3)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;
    MR_String parse_tree__prog_foreign__HeadVar__2_2;
    MR_Char parse_tree__prog_foreign__FirstChar_8;
    MR_Integer parse_tree__prog_foreign__Var_10;

    {
      parse_tree__prog_foreign__succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(parse_tree__prog_foreign__Name_3);
    }
    if (parse_tree__prog_foreign__succeeded)
      {
        parse_tree__prog_foreign__Var_10 = (MR_Integer) 0;
        {
          parse_tree__prog_foreign__succeeded = mercury__string__index_3_p_0(parse_tree__prog_foreign__Name_3, parse_tree__prog_foreign__Var_10, &parse_tree__prog_foreign__FirstChar_8);
        }
        if (parse_tree__prog_foreign__succeeded)
          {
            {
              parse_tree__prog_foreign__succeeded = mercury__char__is_digit_1_p_0(parse_tree__prog_foreign__FirstChar_8);
            }
            parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
          }
      }
    if (parse_tree__prog_foreign__succeeded)
      {
        MR_String parse_tree__prog_foreign__Suffix_9;

        {
          parse_tree__prog_foreign__succeeded = mercury__string__append_3_p_1((MR_String) "f_", &parse_tree__prog_foreign__Suffix_9, parse_tree__prog_foreign__Name_3);
        }
        if (parse_tree__prog_foreign__succeeded)
          {
            {
              parse_tree__prog_foreign__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "f__", parse_tree__prog_foreign__Suffix_9);
            }
          }
        else
          parse_tree__prog_foreign__HeadVar__2_2 = parse_tree__prog_foreign__Name_3;
      }
    else
      {
        parse_tree__prog_foreign__HeadVar__2_2 = parse_tree__prog_foreign__convert_to_valid_c_identifier_1_f_0(parse_tree__prog_foreign__Name_3);
      }
    return parse_tree__prog_foreign__HeadVar__2_2;
  }
}

MR_String MR_CALL 
parse_tree__prog_foreign__name_mangle_1_f_0(
  MR_String parse_tree__prog_foreign__Name_3)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;
    MR_String parse_tree__prog_foreign__HeadVar__2_2;

    {
      parse_tree__prog_foreign__succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(parse_tree__prog_foreign__Name_3);
    }
    if (parse_tree__prog_foreign__succeeded)
      {
        MR_String parse_tree__prog_foreign__Suffix_9;

        {
          parse_tree__prog_foreign__succeeded = mercury__string__append_3_p_1((MR_String) "f_", &parse_tree__prog_foreign__Suffix_9, parse_tree__prog_foreign__Name_3);
        }
        if (parse_tree__prog_foreign__succeeded)
          {
            {
              parse_tree__prog_foreign__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "f__", parse_tree__prog_foreign__Suffix_9);
            }
          }
        else
          parse_tree__prog_foreign__HeadVar__2_2 = parse_tree__prog_foreign__Name_3;
      }
    else
      {
        parse_tree__prog_foreign__HeadVar__2_2 = parse_tree__prog_foreign__convert_to_valid_c_identifier_1_f_0(parse_tree__prog_foreign__Name_3);
      }
    return parse_tree__prog_foreign__HeadVar__2_2;
  }
}

MR_String MR_CALL 
parse_tree__prog_foreign__sym_name_mangle_1_f_0(
  MR_Word parse_tree__prog_foreign__HeadVar__1_1)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;
    MR_String parse_tree__prog_foreign__HeadVar__2_2;

    if (((MR_tag((MR_Word) parse_tree__prog_foreign__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__prog_foreign__ModuleName_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)));
        MR_String parse_tree__prog_foreign__PlainName_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 1)));
        MR_String parse_tree__prog_foreign__MangledModuleName_7;
        MR_String parse_tree__prog_foreign__MangledPlainName_8;
        MR_Word parse_tree__prog_foreign__Var_12;
        MR_Word parse_tree__prog_foreign__Var_13;
        MR_Word parse_tree__prog_foreign__Var_15;

        {
          parse_tree__prog_foreign__MangledModuleName_7 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(parse_tree__prog_foreign__ModuleName_4);
        }
        {
          parse_tree__prog_foreign__MangledPlainName_8 = parse_tree__prog_foreign__name_mangle_1_f_0(parse_tree__prog_foreign__PlainName_5);
        }
        {
          parse_tree__prog_foreign__Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__Var_15, 0) = ((MR_Box) (parse_tree__prog_foreign__MangledPlainName_8));
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__Var_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__prog_foreign__Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__Var_13, 0) = ((MR_Box) ((MR_String) "__"));
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__Var_13, 1) = ((MR_Box) (parse_tree__prog_foreign__Var_15));
        }
        {
          parse_tree__prog_foreign__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__Var_12, 0) = ((MR_Box) (parse_tree__prog_foreign__MangledModuleName_7));
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__Var_12, 1) = ((MR_Box) (parse_tree__prog_foreign__Var_13));
        }
        {
          mercury__string__append_list_2_p_0(parse_tree__prog_foreign__Var_12, &parse_tree__prog_foreign__HeadVar__2_2);
        }
      }
    else
      {
        MR_String parse_tree__prog_foreign__Name_3 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__HeadVar__1_1, (MR_Integer) 0)));

        {
          parse_tree__prog_foreign__HeadVar__2_2 = parse_tree__prog_foreign__name_mangle_1_f_0(parse_tree__prog_foreign__Name_3);
        }
      }
    return parse_tree__prog_foreign__HeadVar__2_2;
  }
}

MR_String MR_CALL 
parse_tree__prog_foreign__make_init_name_1_f_0(
  MR_Word parse_tree__prog_foreign__ModuleName_3)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;
    MR_String parse_tree__prog_foreign__InitName_4;
    MR_String parse_tree__prog_foreign__MangledModuleName_5;
    MR_String parse_tree__prog_foreign__Var_7;

    {
      parse_tree__prog_foreign__MangledModuleName_5 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(parse_tree__prog_foreign__ModuleName_3);
    }
    {
      parse_tree__prog_foreign__Var_7 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__MangledModuleName_5, (MR_String) "__");
    }
    {
      parse_tree__prog_foreign__InitName_4 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", parse_tree__prog_foreign__Var_7);
    }
    return parse_tree__prog_foreign__InitName_4;
  }
}

MR_Word MR_CALL 
parse_tree__prog_foreign__foreign_type_language_1_f_0(
  MR_Word parse_tree__prog_foreign__HeadVar__1_1)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;
    MR_Word parse_tree__prog_foreign__HeadVar__2_2;

    switch (MR_tag((MR_Word) parse_tree__prog_foreign__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__prog_foreign__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        parse_tree__prog_foreign__HeadVar__2_2 = (MR_Integer) 2;
        break;
      case (MR_Integer) 2:
        parse_tree__prog_foreign__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        parse_tree__prog_foreign__HeadVar__2_2 = (MR_Integer) 3;
        break;
    }
    return parse_tree__prog_foreign__HeadVar__2_2;
  }
}

static void MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0_1(
  void * parse_tree__prog_foreign__env_ptr_arg)
{
  {
    struct parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0_s * parse_tree__prog_foreign__env_ptr = (struct parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0_s *) parse_tree__prog_foreign__env_ptr_arg;

    *((parse_tree__prog_foreign__env_ptr)->parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((parse_tree__prog_foreign__env_ptr)->parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__conv0_HeadVar__1_1));
    {
      ((parse_tree__prog_foreign__env_ptr)->parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont)((parse_tree__prog_foreign__env_ptr)->parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0_2(
  MR_Box parse_tree__prog_foreign__closure_arg,
  MR_Box * parse_tree__prog_foreign__wrapper_arg_1,
  MR_Cont parse_tree__prog_foreign__cont,
  void * parse_tree__prog_foreign__cont_env_ptr)
{
  {
    struct parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0_s parse_tree__prog_foreign__env;

    (parse_tree__prog_foreign__env).parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__wrapper_arg_1 = parse_tree__prog_foreign__wrapper_arg_1;
    (parse_tree__prog_foreign__env).parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont = parse_tree__prog_foreign__cont;
    (parse_tree__prog_foreign__env).parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont_env_ptr = parse_tree__prog_foreign__cont_env_ptr;
    {
      MR_Box parse_tree__prog_foreign__closure = parse_tree__prog_foreign__closure_arg;

      {
        parse_tree__prog_foreign__valid_foreign_language_1_p_1(&(parse_tree__prog_foreign__env).parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__conv0_HeadVar__1_1, parse_tree__prog_foreign__all_foreign_languages_0_f_0_1, &parse_tree__prog_foreign__env);
      }
    }
  }
}

MR_Word MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0(void)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;
    MR_Word parse_tree__prog_foreign__Langs_2;

    {
      mercury__solutions__solutions_2_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, (MR_Word) &parse_tree__prog_foreign_scalar_common_4[0], &parse_tree__prog_foreign__Langs_2);
    }
    return parse_tree__prog_foreign__Langs_2;
  }
}

MR_Word MR_CALL 
parse_tree__prog_foreign__prefer_foreign_language_4_f_0(
  MR_Word parse_tree__prog_foreign___Globals_6,
  MR_Word parse_tree__prog_foreign__Target_7,
  MR_Word parse_tree__prog_foreign__Lang1_8,
  MR_Word parse_tree__prog_foreign__Lang2_9)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;
    MR_Word parse_tree__prog_foreign__Prefer_10;

    {
      parse_tree__prog_foreign__Prefer_10 = parse_tree__prog_foreign__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_f_0(parse_tree__prog_foreign__Target_7, parse_tree__prog_foreign__Lang1_8, parse_tree__prog_foreign__Lang2_9);
    }
    return parse_tree__prog_foreign__Prefer_10;
  }
}

MR_String MR_CALL 
parse_tree__prog_foreign__foreign_language_file_extension_1_f_1(
  MR_Word parse_tree__prog_foreign__HeadVar__1_1)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;
    MR_String parse_tree__prog_foreign__HeadVar__2_2;

    switch (parse_tree__prog_foreign__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__prog_foreign__HeadVar__2_2 = (MR_String) ".c";
        break;
      case (MR_Integer) 1:
        parse_tree__prog_foreign__HeadVar__2_2 = (MR_String) ".cs";
        break;
    }
    return parse_tree__prog_foreign__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
parse_tree__prog_foreign__foreign_language_file_extension_1_f_0(
  MR_Word parse_tree__prog_foreign__HeadVar__1_1,
  MR_String * parse_tree__prog_foreign__HeadVar__2_2)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;

    switch (parse_tree__prog_foreign__HeadVar__1_1) {
      default:
        parse_tree__prog_foreign__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          *parse_tree__prog_foreign__HeadVar__2_2 = (MR_String) ".c";
          parse_tree__prog_foreign__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          *parse_tree__prog_foreign__HeadVar__2_2 = (MR_String) ".cs";
          parse_tree__prog_foreign__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          *parse_tree__prog_foreign__HeadVar__2_2 = (MR_String) ".java";
          parse_tree__prog_foreign__succeeded = MR_TRUE;
        }
        break;
    }
    return parse_tree__prog_foreign__succeeded;
  }
}

MR_Word MR_CALL 
parse_tree__prog_foreign__foreign_language_module_name_2_f_1(
  MR_Word parse_tree__prog_foreign__ModuleName_4,
  MR_Word parse_tree__prog_foreign__Lang_5)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;
    MR_Word parse_tree__prog_foreign__FullyQualifiedModuleName_6;
    MR_String parse_tree__prog_foreign__Ending_8;
    MR_String parse_tree__prog_foreign__Var_12;
    MR_String parse_tree__prog_foreign__Var_13;

    {
      parse_tree__prog_foreign__Var_13 = libs__globals__simple_foreign_language_string_1_f_0(parse_tree__prog_foreign__Lang_5);
    }
    {
      parse_tree__prog_foreign__Var_12 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__Var_13, (MR_String) "_code");
    }
    {
      parse_tree__prog_foreign__Ending_8 = mercury__string__f_43_43_2_f_0((MR_String) "__", parse_tree__prog_foreign__Var_12);
    }
    if (((MR_tag((MR_Word) parse_tree__prog_foreign__ModuleName_4)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__prog_foreign__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 0)));
        MR_String parse_tree__prog_foreign__Var_15;
        MR_String parse_tree__prog_foreign__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 1)));

        {
          parse_tree__prog_foreign__Var_15 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__Name_17, parse_tree__prog_foreign__Ending_8);
        }
        {
          parse_tree__prog_foreign__FullyQualifiedModuleName_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__FullyQualifiedModuleName_6, 0) = ((MR_Box) (parse_tree__prog_foreign__Module_10));
          MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__FullyQualifiedModuleName_6, 1) = ((MR_Box) (parse_tree__prog_foreign__Var_15));
        }
      }
    else
      {
        MR_String parse_tree__prog_foreign__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 0)));
        MR_String parse_tree__prog_foreign__Var_16;

        {
          parse_tree__prog_foreign__Var_16 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__Name_9, parse_tree__prog_foreign__Ending_8);
        }
        {
          parse_tree__prog_foreign__FullyQualifiedModuleName_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__FullyQualifiedModuleName_6, 0) = ((MR_Box) (parse_tree__prog_foreign__Var_16));
        }
      }
    return parse_tree__prog_foreign__FullyQualifiedModuleName_6;
  }
}

MR_bool MR_CALL 
parse_tree__prog_foreign__foreign_language_module_name_2_f_0(
  MR_Word parse_tree__prog_foreign__ModuleName_4,
  MR_Word parse_tree__prog_foreign__Lang_5,
  MR_Word * parse_tree__prog_foreign__FullyQualifiedModuleName_6)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;
    MR_String parse_tree__prog_foreign__Ending_8;
    MR_String parse_tree__prog_foreign__Var_11;
    MR_String parse_tree__prog_foreign__Var_12;
    MR_String parse_tree__prog_foreign__Var_13;
    MR_String parse_tree__prog_foreign__Var_14;

    switch (parse_tree__prog_foreign__Lang_5) {
      default:
        parse_tree__prog_foreign__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        parse_tree__prog_foreign__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 1:
        parse_tree__prog_foreign__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 2:
        parse_tree__prog_foreign__succeeded = MR_TRUE;
        break;
    }
    if (parse_tree__prog_foreign__succeeded)
      {
        parse_tree__prog_foreign__Var_11 = (MR_String) "__";
        {
          parse_tree__prog_foreign__Var_13 = libs__globals__simple_foreign_language_string_1_f_0(parse_tree__prog_foreign__Lang_5);
        }
        parse_tree__prog_foreign__Var_14 = (MR_String) "_code";
        {
          parse_tree__prog_foreign__Var_12 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__Var_13, parse_tree__prog_foreign__Var_14);
        }
        {
          parse_tree__prog_foreign__Ending_8 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__Var_11, parse_tree__prog_foreign__Var_12);
        }
        if (((MR_tag((MR_Word) parse_tree__prog_foreign__ModuleName_4)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word parse_tree__prog_foreign__Module_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 0)));
            MR_String parse_tree__prog_foreign__Var_15;
            MR_String parse_tree__prog_foreign__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 1)));

            {
              parse_tree__prog_foreign__Var_15 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__Name_17, parse_tree__prog_foreign__Ending_8);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__prog_foreign__FullyQualifiedModuleName_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_foreign__Module_10));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_foreign__Var_15));
            }
          }
        else
          {
            MR_String parse_tree__prog_foreign__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ModuleName_4, (MR_Integer) 0)));
            MR_String parse_tree__prog_foreign__Var_16;

            {
              parse_tree__prog_foreign__Var_16 = mercury__string__f_43_43_2_f_0(parse_tree__prog_foreign__Name_9, parse_tree__prog_foreign__Ending_8);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__prog_foreign__FullyQualifiedModuleName_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_foreign__Var_16));
            }
          }
        parse_tree__prog_foreign__succeeded = MR_TRUE;
      }
    return parse_tree__prog_foreign__succeeded;
  }
}

MR_Word MR_CALL 
parse_tree__prog_foreign__foreign_import_module_name_from_module_2_f_0(
  MR_Word parse_tree__prog_foreign__ModuleForeignImported_4,
  MR_Word parse_tree__prog_foreign__CurrentModule_5)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;
    MR_Word parse_tree__prog_foreign__ImportedForeignCodeModuleName_6;
    MR_Word parse_tree__prog_foreign__Lang_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ModuleForeignImported_4, (MR_Integer) 0)));
    MR_Word parse_tree__prog_foreign__ForeignImportModule_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ModuleForeignImported_4, (MR_Integer) 1)));

    switch (parse_tree__prog_foreign__Lang_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = parse_tree__prog_foreign__ForeignImportModule_13;
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__prog_foreign__ImportedForeignCodeModuleName1_26;

          {
            parse_tree__prog_foreign__ImportedForeignCodeModuleName1_26 = parse_tree__prog_foreign__foreign_language_module_name_2_f_1(parse_tree__prog_foreign__ForeignImportModule_13, parse_tree__prog_foreign__Lang_12);
          }
          {
            parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__ImportedForeignCodeModuleName1_26);
          }
          if (parse_tree__prog_foreign__succeeded)
            {
              {
                parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__CurrentModule_5);
              }
              parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
            }
          if (parse_tree__prog_foreign__succeeded)
            {
              parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = (MR_Word) &parse_tree__prog_foreign_scalar_common_2[0];
            }
          else
            parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = parse_tree__prog_foreign__ImportedForeignCodeModuleName1_26;
        }
        break;
      case (MR_Integer) 3:
        {
          {
            parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__ForeignImportModule_13);
          }
          if (parse_tree__prog_foreign__succeeded)
            {
              {
                parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__CurrentModule_5);
              }
              parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
            }
          if (parse_tree__prog_foreign__succeeded)
            {
              parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = (MR_Word) &parse_tree__prog_foreign_scalar_common_2[0];
            }
          else
            parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = parse_tree__prog_foreign__ForeignImportModule_13;
        }
        break;
      case (MR_Integer) 2:
        {
          {
            parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__ForeignImportModule_13);
          }
          if (parse_tree__prog_foreign__succeeded)
            {
              {
                parse_tree__prog_foreign__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__prog_foreign__CurrentModule_5);
              }
              parse_tree__prog_foreign__succeeded = !(parse_tree__prog_foreign__succeeded);
            }
          if (parse_tree__prog_foreign__succeeded)
            {
              parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = (MR_Word) &parse_tree__prog_foreign_scalar_common_2[0];
            }
          else
            parse_tree__prog_foreign__ImportedForeignCodeModuleName_6 = parse_tree__prog_foreign__ForeignImportModule_13;
        }
        break;
    }
    return parse_tree__prog_foreign__ImportedForeignCodeModuleName_6;
  }
}

MR_Word MR_CALL 
parse_tree__prog_foreign__foreign_import_module_name_1_f_0(
  MR_Word parse_tree__prog_foreign__ImportModule_3)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;
    MR_Word parse_tree__prog_foreign__ModuleName_4;
    MR_Word parse_tree__prog_foreign__Lang_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ImportModule_3, (MR_Integer) 0)));
    MR_Word parse_tree__prog_foreign__ForeignImportModule_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__ImportModule_3, (MR_Integer) 1)));

    switch (parse_tree__prog_foreign__Lang_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__prog_foreign__ModuleName_4 = parse_tree__prog_foreign__ForeignImportModule_6;
        break;
      case (MR_Integer) 1:
        {
          parse_tree__prog_foreign__ModuleName_4 = parse_tree__prog_foreign__foreign_language_module_name_2_f_1(parse_tree__prog_foreign__ForeignImportModule_6, parse_tree__prog_foreign__Lang_5);
        }
        break;
      case (MR_Integer) 3:
        parse_tree__prog_foreign__ModuleName_4 = parse_tree__prog_foreign__ForeignImportModule_6;
        break;
      case (MR_Integer) 2:
        parse_tree__prog_foreign__ModuleName_4 = parse_tree__prog_foreign__ForeignImportModule_6;
        break;
    }
    return parse_tree__prog_foreign__ModuleName_4;
  }
}

MR_bool MR_CALL 
parse_tree__prog_foreign__foreign_body_code_is_for_lang_2_p_0(
  MR_Word parse_tree__prog_foreign__Lang_3,
  MR_Word parse_tree__prog_foreign__BodyCode_4)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;
    MR_Word parse_tree__prog_foreign__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__BodyCode_4, (MR_Integer) 0)));
    MR_Word parse_tree__prog_foreign__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__BodyCode_4, (MR_Integer) 1)));
    MR_Word parse_tree__prog_foreign__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__BodyCode_4, (MR_Integer) 2)));

    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__Lang_3 == parse_tree__prog_foreign__Var_7);
    return parse_tree__prog_foreign__succeeded;
  }
}

MR_bool MR_CALL 
parse_tree__prog_foreign__foreign_decl_code_is_for_lang_2_p_0(
  MR_Word parse_tree__prog_foreign__Lang_3,
  MR_Word parse_tree__prog_foreign__DeclCode_4)
{
  {
    MR_bool parse_tree__prog_foreign__succeeded;
    MR_Word parse_tree__prog_foreign__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__DeclCode_4, (MR_Integer) 0)));
    MR_Word parse_tree__prog_foreign__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__DeclCode_4, (MR_Integer) 1)));
    MR_Word parse_tree__prog_foreign__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__DeclCode_4, (MR_Integer) 2)));
    MR_Word parse_tree__prog_foreign__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_foreign__DeclCode_4, (MR_Integer) 3)));

    parse_tree__prog_foreign__succeeded = (parse_tree__prog_foreign__Lang_3 == parse_tree__prog_foreign__Var_8);
    return parse_tree__prog_foreign__succeeded;
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__prog_foreign__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module parse_tree.prog_foreign. */
