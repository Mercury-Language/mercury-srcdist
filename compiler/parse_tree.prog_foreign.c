/*
** Automatically generated from `prog_foreign.m'
** by the Mercury compiler,
** version rotd-2026-01-01
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module parse_tree.prog_foreign.
// :- implementation.

/*
INIT mercury__parse_tree__prog_foreign__init
ENDINIT
*/

#include "parse_tree.prog_foreign.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"



struct parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0_s {
  MR_Box * parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__wrapper_arg_1;
  MR_Cont parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont;
  void * parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont_env_ptr;
  MR_Word parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__conv0_HeadVar__1_1;
};


static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_body_code_0_0[3];

static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_body_code_0_0[3];

static const MR_DuArgLocn parse_tree__prog_foreign__parse_tree__prog_foreign__field_locns_foreign_body_code_0_0[3];

static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_body_code_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_body_code_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_body_code_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_body_code_0[1];

static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_body_code_0[1];

static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_decl_code_0_0[4];

static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_decl_code_0_0[4];

static const MR_DuArgLocn parse_tree__prog_foreign__parse_tree__prog_foreign__field_locns_foreign_decl_code_0_0[4];

static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_decl_code_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_decl_code_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_decl_code_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_decl_code_0[1];

static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_decl_code_0[1];

static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_export_decl_0_0[4];

static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_export_decl_0_0[4];

static const MR_DuArgLocn parse_tree__prog_foreign__parse_tree__prog_foreign__field_locns_foreign_export_decl_0_0[4];

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

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_foreign__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_sym_name_arity_0builtin__type_ctor_info_string_0;

static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_pred_target_names_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_sym_name_arity_0builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_foreign__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_sym_name_arity_0builtin__type_ctor_info_string_0;

static const MR_NotagFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__notag_functor_desc_pred_target_names_0;

static void MR_CALL 
parse_tree__prog_foreign__valid_foreign_language_1_p_1(
  MR_Word * HeadVar__1_1,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_String MR_CALL 
parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_f_0(
  MR_String String_3);

static void MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_code_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_code_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_code_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_code_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decl_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decl_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decls_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decls_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____pred_target_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_foreign____Compare____pred_target_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____pred_target_names_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_foreign____Compare____pred_target_names_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_1[3][3];

static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_2[6][2];

static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_3[2][1];

static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_4[1][4];


struct parse_tree__prog_foreign__vector_common_type_5_0_s {
  const MR_String parse_tree__prog_foreign__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct parse_tree__prog_foreign__vector_common_type_5_0_s parse_tree__prog_foreign_vector_common_5[16];

struct parse_tree__prog_foreign__vector_common_type_6_0_s {
  const MR_Word parse_tree__prog_foreign__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct parse_tree__prog_foreign__vector_common_type_6_0_s parse_tree__prog_foreign_vector_common_6[3];



static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_1[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_foreign_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__prog_foreign_scalar_common_4[0])),
    ((MR_Box) (parse_tree__prog_foreign__all_foreign_languages_0_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_2[6][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_foreign_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 5U)
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_3[2][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "mercury")) },
};

static /* final */ const MR_Box parse_tree__prog_foreign_scalar_common_4[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
};


static /* final */ const struct parse_tree__prog_foreign__vector_common_type_5_0_s parse_tree__prog_foreign_vector_common_5[16] = {
  /* row   0 */   { (MR_String) "f_cut" },
  /* row   1 */   { (MR_String) "f_times" },
  /* row   2 */   { (MR_String) "f_plus" },
  /* row   3 */   { (MR_String) "f_comma" },
  /* row   4 */   { (MR_String) "f_minus" },
  /* row   5 */   { (MR_String) "f_slash" },
  /* row   6 */   { (MR_String) "f_semicolon" },
  /* row   7 */   { (MR_String) "f_less_than" },
  /* row   8 */   { (MR_String) "f_equal" },
  /* row   9 */   { (MR_String) "f_less_or_equal" },
  /* row  10 */   { (MR_String) "f_greater_than" },
  /* row  11 */   { (MR_String) "f_greater_or_equal" },
  /* row  12 */   { (MR_String) "f_nil" },
  /* row  13 */   { (MR_String) "f_cons" },
  /* row  14 */   { (MR_String) "f_not_equal" },
  /* row  15 */   { (MR_String) "f_tuple" },
};

static /* final */ const struct parse_tree__prog_foreign__vector_common_type_6_0_s parse_tree__prog_foreign_vector_common_6[3] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 2 },
  /* row   2 */   { (MR_Integer) 1 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_body_code_0_0[3] = {
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_literal_or_include_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_body_code_0_0[3] = {
  (MR_String) "fbody_lang",
  (MR_String) "fbody_code",
  (MR_String) "fbody_context"
};

static const MR_DuArgLocn parse_tree__prog_foreign__parse_tree__prog_foreign__field_locns_foreign_body_code_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_body_code_0_0 = {
  (MR_String) "foreign_body_code",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_body_code_0_0,
  parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_body_code_0_0,
  parse_tree__prog_foreign__parse_tree__prog_foreign__field_locns_foreign_body_code_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_body_code_0_0[1] = { &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_body_code_0_0 };

static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_body_code_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_body_code_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_body_code_0[1] = { &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_body_code_0_0 };

static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_body_code_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_foreign____Unify____foreign_body_code_0_0_10001)),
  ((MR_Box) (parse_tree__prog_foreign____Compare____foreign_body_code_0_0_10001)),
  (MR_String) "parse_tree.prog_foreign",
  (MR_String) "foreign_body_code",
  { parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_body_code_0 },
  { parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_body_code_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_body_code_0,

};

static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_decl_code_0_0[4] = {
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_decl_is_local_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_literal_or_include_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_decl_code_0_0[4] = {
  (MR_String) "fdecl_lang",
  (MR_String) "fdecl_is_local",
  (MR_String) "fdecl_code",
  (MR_String) "fdecl_context"
};

static const MR_DuArgLocn parse_tree__prog_foreign__parse_tree__prog_foreign__field_locns_foreign_decl_code_0_0[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_decl_code_0_0 = {
  (MR_String) "foreign_decl_code",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_decl_code_0_0,
  parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_decl_code_0_0,
  parse_tree__prog_foreign__parse_tree__prog_foreign__field_locns_foreign_decl_code_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_decl_code_0_0[1] = { &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_decl_code_0_0 };

static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_decl_code_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_decl_code_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_decl_code_0[1] = { &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_decl_code_0_0 };

static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_decl_code_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_foreign____Unify____foreign_decl_code_0_0_10001)),
  ((MR_Box) (parse_tree__prog_foreign____Compare____foreign_decl_code_0_0_10001)),
  (MR_String) "parse_tree.prog_foreign",
  (MR_String) "foreign_decl_code",
  { parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_decl_code_0 },
  { parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_decl_code_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_decl_code_0,

};

static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_export_decl_0_0[4] = {
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_export_decl_0_0[4] = {
  (MR_String) "fexp_decl_lang",
  (MR_String) "fexp_decl_ret_type",
  (MR_String) "fexp_decl_func_name",
  (MR_String) "fexp_decl_arg_decls"
};

static const MR_DuArgLocn parse_tree__prog_foreign__parse_tree__prog_foreign__field_locns_foreign_export_decl_0_0[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decl_0_0 = {
  (MR_String) "foreign_export_decl",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_export_decl_0_0,
  parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_export_decl_0_0,
  parse_tree__prog_foreign__parse_tree__prog_foreign__field_locns_foreign_export_decl_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decl_0_0[1] = { &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decl_0_0 };

static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decl_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decl_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_export_decl_0[1] = { &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decl_0_0 };

static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_decl_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_foreign____Unify____foreign_export_decl_0_0_10001)),
  ((MR_Box) (parse_tree__prog_foreign____Compare____foreign_export_decl_0_0_10001)),
  (MR_String) "parse_tree.prog_foreign",
  (MR_String) "foreign_export_decl",
  { parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_export_decl_0 },
  { parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decl_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_decl_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0) }
};

static const MR_PseudoTypeInfo parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_export_decls_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_foreign__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0)
};

static const MR_ConstString parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_export_decls_0_0[2] = {
  (MR_String) "fexp_decls_codes",
  (MR_String) "fexp_decls_list"
};

static const MR_DuFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decls_0_0 = {
  (MR_String) "foreign_export_decls",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_foreign__parse_tree__prog_foreign__field_types_foreign_export_decls_0_0,
  parse_tree__prog_foreign__parse_tree__prog_foreign__field_names_foreign_export_decls_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decls_0_0[1] = { &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decls_0_0 };

static const MR_DuPtagLayout parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decls_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_foreign__parse_tree__prog_foreign__du_stag_ordered_foreign_export_decls_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_export_decls_0[1] = { &parse_tree__prog_foreign__parse_tree__prog_foreign__du_functor_desc_foreign_export_decls_0_0 };

static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_decls_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_decls_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_foreign____Unify____foreign_export_decls_0_0_10001)),
  ((MR_Box) (parse_tree__prog_foreign____Compare____foreign_export_decls_0_0_10001)),
  (MR_String) "parse_tree.prog_foreign",
  (MR_String) "foreign_export_decls",
  { parse_tree__prog_foreign__parse_tree__prog_foreign__du_name_ordered_foreign_export_decls_0 },
  { parse_tree__prog_foreign__parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decls_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_decls_0,

};

static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_defn_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__notag_functor_desc_foreign_export_defn_0 = {
  (MR_String) "foreign_export_defn",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (parse_tree__prog_foreign____Unify____foreign_export_defn_0_0_10001)),
  ((MR_Box) (parse_tree__prog_foreign____Compare____foreign_export_defn_0_0_10001)),
  (MR_String) "parse_tree.prog_foreign",
  (MR_String) "foreign_export_defn",
  { &parse_tree__prog_foreign__parse_tree__prog_foreign__notag_functor_desc_foreign_export_defn_0 },
  { &parse_tree__prog_foreign__parse_tree__prog_foreign__notag_functor_desc_foreign_export_defn_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_foreign_export_defn_0,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_foreign__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_sym_name_arity_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_pred_target_name_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_foreign____Unify____pred_target_name_0_0_10001)),
  ((MR_Box) (parse_tree__prog_foreign____Compare____pred_target_name_0_0_10001)),
  (MR_String) "parse_tree.prog_foreign",
  (MR_String) "pred_target_name",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__prog_foreign__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_sym_name_arity_0builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_Integer parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_pred_target_names_0[1] = { (MR_Integer) 0 };

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_foreign__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_sym_name_arity_0builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_foreign__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_sym_name_arity_0builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__prog_foreign__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_sym_name_arity_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&parse_tree__prog_foreign__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_sym_name_arity_0builtin__type_ctor_info_string_0)
  }
};

static const MR_NotagFunctorDesc parse_tree__prog_foreign__parse_tree__prog_foreign__notag_functor_desc_pred_target_names_0 = {
  (MR_String) "pred_target_names",
  (MR_PseudoTypeInfo) (&parse_tree__prog_foreign__tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_sym_name_arity_0builtin__type_ctor_info_string_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_pred_target_names_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (parse_tree__prog_foreign____Unify____pred_target_names_0_0_10001)),
  ((MR_Box) (parse_tree__prog_foreign____Compare____pred_target_names_0_0_10001)),
  (MR_String) "parse_tree.prog_foreign",
  (MR_String) "pred_target_names",
  { &parse_tree__prog_foreign__parse_tree__prog_foreign__notag_functor_desc_pred_target_names_0 },
  { &parse_tree__prog_foreign__parse_tree__prog_foreign__notag_functor_desc_pred_target_names_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__prog_foreign__parse_tree__prog_foreign__functor_number_map_pred_target_names_0,

};

void MR_CALL 
parse_tree__prog_foreign____Compare____pred_target_names_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_foreign_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____pred_target_names_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_foreign_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
  }
  return succeeded;
}

void MR_CALL 
parse_tree__prog_foreign____Compare____pred_target_name_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_foreign_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____pred_target_name_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_foreign_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_defn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = (MR_String) (HeadVar__2_2);
    MR_String ArgY1_5 = (MR_String) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_defn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_String ArgX1_3 = (MR_String) (HeadVar__1_1);
    MR_String ArgY1_4 = (MR_String) (HeadVar__2_2);

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
  }
  return succeeded;
}

void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decls_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_foreign_scalar_common_2[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_foreign_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decls_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__prog_foreign_scalar_common_2[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&parse_tree__prog_foreign_scalar_common_2[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decl_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 3);
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_String ArgX3_10 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_String ArgY3_11 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_String ArgX4_13 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_String ArgY4_14 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;
    MR_Integer Var_21 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_22 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_21 < Var_22);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_21 > Var_22);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decl_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_String ArgX3_7 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_String ArgY3_8 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_String ArgX4_9 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_String ArgY4_10 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
      if (succeeded)
      {
        succeeded = (strcmp(ArgX3_7, ArgY3_8) == 0);
        if (succeeded)
          succeeded = (strcmp(ArgX4_9, ArgY4_10) == 0);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_code_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 1)) & (MR_Integer) 3);
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;
    MR_Integer Var_21 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_22 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_21 < Var_22);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_21 > Var_22);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_23 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_24 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_23 < Var_24);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_23 > Var_24);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        parse_tree__prog_data_foreign____Compare____foreign_literal_or_include_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_code_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 1)) & (MR_Integer) 3);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 3);
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = parse_tree__prog_data_foreign____Unify____foreign_literal_or_include_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
          succeeded = mercury__term_context____Unify____term_context_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_code_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 3);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;
    MR_Integer Var_17 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_18 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_17 < Var_18);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_17 > Var_18);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      parse_tree__prog_data_foreign____Compare____foreign_literal_or_include_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_code_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = parse_tree__prog_data_foreign____Unify____foreign_literal_or_include_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
        succeeded = mercury__term_context____Unify____term_context_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_foreign__valid_foreign_language_1_p_1(
  MR_Word * HeadVar__1_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Integer slot_0 = (MR_Integer) 0;

  do
  {
    *HeadVar__1_1 = ((&parse_tree__prog_foreign_vector_common_6[0 + slot_0]))->parse_tree__prog_foreign__vector_common_type_6_0__vct_6_f_0;
    cont(cont_env_ptr);
    slot_0 = (MR_Integer) ((MR_Unsigned) slot_0 + (MR_Unsigned) 1);
  }
  while ((slot_0 < (MR_Integer) 3));
}

void MR_CALL 
parse_tree__prog_foreign__new_user_init_or_final_pred_target_name_8_p_0(
  MR_Word ModuleName0_9,
  MR_String InitOrFinal_10,
  MR_Word SeqNum_11,
  MR_Word SymName_12,
  MR_Word UserArity_13,
  MR_String * TargetName_14,
  MR_Word STATE_VARIABLE_PredTargetNames_0_26,
  MR_Word * STATE_VARIABLE_PredTargetNames_27)
{
  MR_bool succeeded;
  MR_Integer SeqNumInt_16;
  MR_Integer UserArityInt_17;
  MR_Word PredTargetNameMap0_18;
  MR_Word ModuleName_19;
  MR_String ModuleNameStr_20;
  MR_Word PredTargetNameMap_25;
  MR_Word SeqNumPredTargetNames0_21;
  MR_Box conv0_SeqNumPredTargetNames0_21;

  if ((SeqNum_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_foreign.new_user_init_or_final_pred_target_name\'/8", (MR_String) "item_no_seq_num");
      return;
    }
  else
    SeqNumInt_16 = ((MR_Integer) ((MR_hl_field(1, SeqNum_11, 0))));
  UserArityInt_17 = (MR_Integer) (UserArity_13);
  PredTargetNameMap0_18 = (MR_Word) (STATE_VARIABLE_PredTargetNames_0_26);
  succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(ModuleName0_9);
  if (succeeded)
    ModuleName_19 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "mercury", ModuleName0_9);
  else
    ModuleName_19 = ModuleName0_9;
  ModuleNameStr_20 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_19);
  succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&parse_tree__prog_foreign_scalar_common_2[0]), PredTargetNameMap0_18, SeqNumInt_16, &conv0_SeqNumPredTargetNames0_21);
  if (succeeded)
  {
    SeqNumPredTargetNames0_21 = ((MR_Word) (conv0_SeqNumPredTargetNames0_21));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Integer Suffix_22;
    MR_Word PredTargetName_23;
    MR_Word SeqNumPredTargetNames_24;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_String Var_67;
    MR_String Var_75;
    MR_String Var_76;
    MR_String Var_83;
    MR_String Var_85;
    MR_String Var_86;
    MR_String Var_88;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_foreign_scalar_common_1[0]), SeqNumPredTargetNames0_21, &Suffix_22);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__prog_foreign_scalar_common_3[0]), Suffix_22, &Var_67);
    Var_75 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_67);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__prog_foreign_scalar_common_3[0]), SeqNumInt_16, &Var_76);
    Var_83 = mercury__string__f_43_43_2_f_0(Var_76, Var_75);
    Var_85 = mercury__string__f_43_43_2_f_0((MR_String) "_pred_", Var_83);
    Var_86 = mercury__string__f_43_43_2_f_0(InitOrFinal_10, Var_85);
    Var_88 = mercury__string__f_43_43_2_f_0((MR_String) "__user_", Var_86);
    *TargetName_14 = mercury__string__f_43_43_2_f_0(ModuleNameStr_20, Var_88);
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_41, 0) = ((MR_Box) (SymName_12));
      MR_hl_field(0, Var_41, 1) = ((MR_Box) (UserArityInt_17));
    }
    {
      PredTargetName_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PredTargetName_23, 0) = ((MR_Box) (Var_41));
      MR_hl_field(0, PredTargetName_23, 1) = ((MR_Box) (*TargetName_14));
    }
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) (PredTargetName_23));
      MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    SeqNumPredTargetNames_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_foreign_scalar_common_1[0]), SeqNumPredTargetNames0_21, Var_42);
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__prog_foreign_scalar_common_2[0]), SeqNumInt_16, ((MR_Box) (SeqNumPredTargetNames_24)), PredTargetNameMap0_18, &PredTargetNameMap_25);
  }
  else
  {
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word PredTargetName_59;
    MR_String Var_89;
    MR_String Var_97;
    MR_String Var_98;
    MR_String Var_105;
    MR_String Var_107;
    MR_String Var_108;
    MR_String Var_110;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__prog_foreign_scalar_common_3[0]), (MR_Integer) 0, &Var_89);
    Var_97 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_89);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__prog_foreign_scalar_common_3[0]), SeqNumInt_16, &Var_98);
    Var_105 = mercury__string__f_43_43_2_f_0(Var_98, Var_97);
    Var_107 = mercury__string__f_43_43_2_f_0((MR_String) "_pred_", Var_105);
    Var_108 = mercury__string__f_43_43_2_f_0(InitOrFinal_10, Var_107);
    Var_110 = mercury__string__f_43_43_2_f_0((MR_String) "__user_", Var_108);
    *TargetName_14 = mercury__string__f_43_43_2_f_0(ModuleNameStr_20, Var_110);
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_55, 0) = ((MR_Box) (SymName_12));
      MR_hl_field(0, Var_55, 1) = ((MR_Box) (UserArityInt_17));
    }
    {
      PredTargetName_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PredTargetName_59, 0) = ((MR_Box) (Var_55));
      MR_hl_field(0, PredTargetName_59, 1) = ((MR_Box) (*TargetName_14));
    }
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (PredTargetName_59));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&parse_tree__prog_foreign_scalar_common_2[0]), SeqNumInt_16, ((MR_Box) (Var_56)), PredTargetNameMap0_18, &PredTargetNameMap_25);
  }
  *STATE_VARIABLE_PredTargetNames_27 = (MR_Word) (PredTargetNameMap_25);
}

MR_String MR_CALL 
parse_tree__prog_foreign__qualify_name_2_f_0(
  MR_String Module0_4,
  MR_String Name0_5)
{
  MR_String Name_6;
  MR_Word Var_7;
  MR_Word Var_8;
  MR_Word Var_10;

  {
    Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_10, 0) = ((MR_Box) (Name0_5));
    MR_hl_field(1, Var_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_8, 0) = ((MR_Box) ((MR_String) "__"));
    MR_hl_field(1, Var_8, 1) = ((MR_Box) (Var_10));
  }
  {
    Var_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_7, 0) = ((MR_Box) (Module0_4));
    MR_hl_field(1, Var_7, 1) = ((MR_Box) (Var_8));
  }
  mercury__string__append_list_2_p_0(Var_7, &Name_6);
  return Name_6;
}

MR_String MR_CALL 
parse_tree__prog_foreign__name_mangle_no_leading_digit_1_f_0(
  MR_String Name_3)
{
  MR_bool succeeded;
  MR_String HeadVar__2_2;
  MR_Char FirstChar_5;
  MR_Integer Var_7;

  succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(Name_3);
  if (succeeded)
  {
    Var_7 = (MR_Integer) 0;
    succeeded = mercury__string__index_3_p_0(Name_3, Var_7, &FirstChar_5);
    if (succeeded)
    {
      succeeded = mercury__char__is_digit_1_p_0(FirstChar_5);
      succeeded = !(succeeded);
    }
  }
  if (succeeded)
  {
    MR_String Suffix_6;

    succeeded = mercury__string__append_3_p_1((MR_String) "f_", &Suffix_6, Name_3);
    if (succeeded)
      HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "f__", Suffix_6);
    else
      HeadVar__2_2 = Name_3;
  }
  else
    HeadVar__2_2 = parse_tree__prog_foreign__convert_to_valid_c_identifier_1_f_0(Name_3);
  return HeadVar__2_2;
}

MR_String MR_CALL 
parse_tree__prog_foreign__make_init_name_1_f_0(
  MR_Word ModuleName_3)
{
  MR_String InitName_4;
  MR_String MangledModuleName_5;
  MR_String Var_7;

  MangledModuleName_5 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_3);
  Var_7 = mercury__string__f_43_43_2_f_0(MangledModuleName_5, (MR_String) "__");
  InitName_4 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", Var_7);
  return InitName_4;
}

MR_String MR_CALL 
parse_tree__prog_foreign__sym_name_mangle_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_String PlainName_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_String MangledModuleName_7;
    MR_String MangledPlainName_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_12;

    MangledModuleName_7 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_4);
    MangledPlainName_8 = parse_tree__prog_foreign__name_mangle_1_f_0(PlainName_5);
    {
      Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_12, 0) = ((MR_Box) (MangledPlainName_8));
      MR_hl_field(1, Var_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_10, 0) = ((MR_Box) ((MR_String) "__"));
      MR_hl_field(1, Var_10, 1) = ((MR_Box) (Var_12));
    }
    {
      Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_9, 0) = ((MR_Box) (MangledModuleName_7));
      MR_hl_field(1, Var_9, 1) = ((MR_Box) (Var_10));
    }
    mercury__string__append_list_2_p_0(Var_9, &HeadVar__2_2);
  }
  else
  {
    MR_String Name_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));

    HeadVar__2_2 = parse_tree__prog_foreign__name_mangle_1_f_0(Name_3);
  }
  return HeadVar__2_2;
}

MR_String MR_CALL 
parse_tree__prog_foreign__name_mangle_1_f_0(
  MR_String Name_3)
{
  MR_bool succeeded;
  MR_String HeadVar__2_2;

  succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(Name_3);
  if (succeeded)
  {
    MR_String Suffix_6;

    succeeded = mercury__string__append_3_p_1((MR_String) "f_", &Suffix_6, Name_3);
    if (succeeded)
      HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "f__", Suffix_6);
    else
      HeadVar__2_2 = Name_3;
  }
  else
    HeadVar__2_2 = parse_tree__prog_foreign__convert_to_valid_c_identifier_1_f_0(Name_3);
  return HeadVar__2_2;
}

MR_String MR_CALL 
parse_tree__prog_foreign__convert_to_valid_c_identifier_1_f_0(
  MR_String String_3)
{
  MR_bool succeeded;
  MR_String Name_4;
  MR_String Name0_5;

  {
    MR_Integer case_num_0 = (MR_Integer) -1;

    switch (MR_nth_code_unit(String_3, 0)) {
      case (MR_Integer) 33:
        if (MR_offset_streq(1, String_3, (MR_String) "!"))
          case_num_0 = (MR_Integer) 0;
        break;
      case (MR_Integer) 42:
        if (MR_offset_streq(1, String_3, (MR_String) "*"))
          case_num_0 = (MR_Integer) 1;
        break;
      case (MR_Integer) 43:
        if (MR_offset_streq(1, String_3, (MR_String) "+"))
          case_num_0 = (MR_Integer) 2;
        break;
      case (MR_Integer) 44:
        if (MR_offset_streq(1, String_3, (MR_String) ","))
          case_num_0 = (MR_Integer) 3;
        break;
      case (MR_Integer) 45:
        if (MR_offset_streq(1, String_3, (MR_String) "-"))
          case_num_0 = (MR_Integer) 4;
        break;
      case (MR_Integer) 47:
        if (MR_offset_streq(1, String_3, (MR_String) "/"))
          case_num_0 = (MR_Integer) 5;
        break;
      case (MR_Integer) 59:
        if (MR_offset_streq(1, String_3, (MR_String) ";"))
          case_num_0 = (MR_Integer) 6;
        break;
      case (MR_Integer) 60:
        if (MR_offset_streq(1, String_3, (MR_String) "<"))
          case_num_0 = (MR_Integer) 7;
        break;
      case (MR_Integer) 61:
        switch (MR_nth_code_unit(String_3, 1)) {
          case (MR_Integer) 0:
            case_num_0 = (MR_Integer) 8;
            break;
          case (MR_Integer) 60:
            if (MR_offset_streq(2, String_3, (MR_String) "=<"))
              case_num_0 = (MR_Integer) 9;
            break;
        }
        break;
      case (MR_Integer) 62:
        switch (MR_nth_code_unit(String_3, 1)) {
          case (MR_Integer) 0:
            case_num_0 = (MR_Integer) 10;
            break;
          case (MR_Integer) 61:
            if (MR_offset_streq(2, String_3, (MR_String) ">="))
              case_num_0 = (MR_Integer) 11;
            break;
        }
        break;
      case (MR_Integer) 91:
        switch (MR_nth_code_unit(String_3, 1)) {
          case (MR_Integer) 93:
            if (MR_offset_streq(2, String_3, (MR_String) "[]"))
              case_num_0 = (MR_Integer) 12;
            break;
          case (MR_Integer) 124:
            if (MR_offset_streq(2, String_3, (MR_String) "[|]"))
              case_num_0 = (MR_Integer) 13;
            break;
        }
        break;
      case (MR_Integer) 92:
        if (MR_offset_streq(1, String_3, (MR_String) "\\="))
          case_num_0 = (MR_Integer) 14;
        break;
      case (MR_Integer) 123:
        if (MR_offset_streq(1, String_3, (MR_String) "{}"))
          case_num_0 = (MR_Integer) 15;
        break;
    }
    if ((case_num_0 < (MR_Integer) 0))
      succeeded = MR_FALSE;
    else
    {
      // we found a match; look up the results
      ;
      Name0_5 = ((&parse_tree__prog_foreign_vector_common_5[0 + case_num_0]))->parse_tree__prog_foreign__vector_common_type_5_0__vct_5_f_0;
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
    Name_4 = Name0_5;
  else
  {
    MR_String Var_7;

    Var_7 = parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_f_0(String_3);
    Name_4 = mercury__string__f_43_43_2_f_0((MR_String) "f", Var_7);
  }
  return Name_4;
}

static MR_String MR_CALL 
parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_f_0(
  MR_String String_3)
{
  MR_bool succeeded;
  MR_String Name_4;
  MR_Char Char_5;
  MR_String Rest_6;

  succeeded = mercury__string__first_char_3_p_3(String_3, &Char_5, &Rest_6);
  if (succeeded)
  {
    MR_Integer Code_7;
    MR_String CodeString_8;
    MR_String ThisCharString_9;
    MR_String Name0_10;

    mercury__char__to_int_2_p_0(Char_5, &Code_7);
    mercury__string__int_to_string_2_p_0(Code_7, &CodeString_8);
    mercury__string__append_3_p_2((MR_String) "_", CodeString_8, &ThisCharString_9);
    Name0_10 = parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_f_0(Rest_6);
    mercury__string__append_3_p_2(ThisCharString_9, Name0_10, &Name_4);
  }
  else
    Name_4 = String_3;
  return Name_4;
}

MR_Word MR_CALL 
parse_tree__prog_foreign__foreign_type_language_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_Integer) 2;
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_Integer) 1;
      break;
  }
  return HeadVar__2_2;
}

static void MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0_1(
  void * env_ptr_arg)
{
  struct parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0_s * env_ptr = (struct parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0_s *) (env_ptr_arg);

  *((env_ptr)->parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__conv0_HeadVar__1_1));
  ((env_ptr)->parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont)((env_ptr)->parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont_env_ptr);
}

static void MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0_s env;

  (env).parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont = cont;
  (env).parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    parse_tree__prog_foreign__valid_foreign_language_1_p_1(&(env).parse_tree__prog_foreign__all_foreign_languages_1_f_0_2_env_0__conv0_HeadVar__1_1, parse_tree__prog_foreign__all_foreign_languages_0_f_0_1, &env);
  }
}

MR_Word MR_CALL 
parse_tree__prog_foreign__all_foreign_languages_0_f_0(void)
{
  MR_Word Langs_2;

  mercury__solutions__solutions_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__prog_foreign_scalar_common_1[2]), &Langs_2);
  return Langs_2;
}

MR_Word MR_CALL 
parse_tree__prog_foreign__prefer_foreign_language_4_f_0(
  MR_Word _Globals_6,
  MR_Word Target_7,
  MR_Word Lang1_8,
  MR_Word Lang2_9)
{
  MR_Word Prefer_10;

  Prefer_10 = parse_tree__prog_foreign__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_f_0(Target_7, Lang1_8, Lang2_9);
  return Prefer_10;
}

MR_Word MR_CALL 
parse_tree__prog_foreign__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_f_0(
  MR_Word Target_7,
  MR_Word Lang1_8,
  MR_Word Lang2_9)
{
  MR_bool succeeded;
  MR_Word Prefer_10;

  switch (Target_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        succeeded = (Lang2_9 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (Lang1_8 != (MR_Integer) 0);
        if (succeeded)
          Prefer_10 = (MR_Integer) 1;
        else
          Prefer_10 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 1:
      Prefer_10 = (MR_Integer) 0;
      break;
    case (MR_Integer) 2:
      Prefer_10 = (MR_Integer) 0;
      break;
  }
  return Prefer_10;
}

void MR_CALL 
parse_tree__prog_foreign__foreign_language_file_extension_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__2_2 = (MR_Word) (MR_mkword(3, &parse_tree__prog_foreign_scalar_common_2[3]));
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Word) (MR_mkword(3, &parse_tree__prog_foreign_scalar_common_2[4]));
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Word) (MR_mkword(3, &parse_tree__prog_foreign_scalar_common_2[5]));
      break;
  }
}

MR_Word MR_CALL 
parse_tree__prog_foreign__fim_spec_module_name_from_module_2_f_0(
  MR_Word ModuleFIMSpec_4,
  MR_Word CurrentModule_5)
{
  MR_bool succeeded;
  MR_Word ImportedForeignCodeModuleName_6;
  MR_Word Lang_10 = ((MR_Unsigned) ((MR_hl_field(0, ModuleFIMSpec_4, 0))) & (MR_Integer) 3);
  MR_Word ForeignImportModule_11 = ((MR_Word) ((MR_hl_field(0, ModuleFIMSpec_4, 1))));

  switch (Lang_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ImportedForeignCodeModuleName_6 = ForeignImportModule_11;
      break;
    case (MR_Integer) 1:
      {
        MR_Word ImportedForeignCodeModuleName1_14;

        parse_tree__prog_foreign__foreign_language_module_name_3_p_0(ForeignImportModule_11, Lang_10, &ImportedForeignCodeModuleName1_14);
        succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(ImportedForeignCodeModuleName1_14);
        if (succeeded)
        {
          succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(CurrentModule_5);
          succeeded = !(succeeded);
        }
        if (succeeded)
          ImportedForeignCodeModuleName_6 = (MR_Word) (&parse_tree__prog_foreign_scalar_common_3[1]);
        else
          ImportedForeignCodeModuleName_6 = ImportedForeignCodeModuleName1_14;
      }
      break;
    case (MR_Integer) 2:
      {
        succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(ForeignImportModule_11);
        if (succeeded)
        {
          succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(CurrentModule_5);
          succeeded = !(succeeded);
        }
        if (succeeded)
          ImportedForeignCodeModuleName_6 = (MR_Word) (&parse_tree__prog_foreign_scalar_common_3[1]);
        else
          ImportedForeignCodeModuleName_6 = ForeignImportModule_11;
      }
      break;
  }
  return ImportedForeignCodeModuleName_6;
}

MR_Word MR_CALL 
parse_tree__prog_foreign__fim_spec_module_name_1_f_0(
  MR_Word FIMSpec_3)
{
  MR_Word ModuleName_4;
  MR_Word Lang_5 = ((MR_Unsigned) ((MR_hl_field(0, FIMSpec_3, 0))) & (MR_Integer) 3);
  MR_Word ForeignImportModule_6 = ((MR_Word) ((MR_hl_field(0, FIMSpec_3, 1))));

  switch (Lang_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ModuleName_4 = ForeignImportModule_6;
      break;
    case (MR_Integer) 1:
      parse_tree__prog_foreign__foreign_language_module_name_3_p_0(ForeignImportModule_6, Lang_5, &ModuleName_4);
      break;
    case (MR_Integer) 2:
      ModuleName_4 = ForeignImportModule_6;
      break;
  }
  return ModuleName_4;
}

void MR_CALL 
parse_tree__prog_foreign__foreign_language_module_name_3_p_0(
  MR_Word ModuleName_4,
  MR_Word Lang_5,
  MR_Word * FullyQualifiedModuleName_6)
{
  MR_String Ending_8;
  MR_String Var_12;
  MR_String Var_13;

  Var_13 = libs__globals__simple_foreign_language_string_1_f_0(Lang_5);
  Var_12 = mercury__string__f_43_43_2_f_0(Var_13, (MR_String) "_code");
  Ending_8 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_12);
  if (((MR_tag((MR_Word) ModuleName_4)) == (MR_Integer) 1))
  {
    MR_Word Module_10 = ((MR_Word) ((MR_hl_field(1, ModuleName_4, 0))));
    MR_String Var_16;
    MR_String Name_17 = ((MR_String) ((MR_hl_field(1, ModuleName_4, 1))));

    Var_16 = mercury__string__f_43_43_2_f_0(Name_17, Ending_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *FullyQualifiedModuleName_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Module_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (Var_16));
    }
  }
  else
  {
    MR_String Name_9 = ((MR_String) ((MR_hl_field(0, ModuleName_4, 0))));
    MR_String Var_15;

    Var_15 = mercury__string__f_43_43_2_f_0(Name_9, Ending_8);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *FullyQualifiedModuleName_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_15));
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_foreign__foreign_body_code_is_for_lang_2_p_0(
  MR_Word Lang_3,
  MR_Word BodyCode_4)
{
  MR_bool succeeded;
  MR_Word Var_7 = ((MR_Unsigned) ((MR_hl_field(0, BodyCode_4, 0))) & (MR_Integer) 3);

  succeeded = (Lang_3 == Var_7);
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__prog_foreign__foreign_decl_code_is_for_lang_2_p_0(
  MR_Word Lang_3,
  MR_Word DeclCode_4)
{
  MR_bool succeeded;
  MR_Word Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, DeclCode_4, 0))) >> 1)) & (MR_Integer) 3);

  succeeded = (Lang_3 == Var_8);
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_body_code_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_foreign____Unify____foreign_body_code_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_body_code_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_foreign____Compare____foreign_body_code_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_decl_code_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_foreign____Unify____foreign_decl_code_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_decl_code_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_foreign____Compare____foreign_decl_code_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decl_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_foreign____Unify____foreign_export_decl_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decl_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_foreign____Compare____foreign_export_decl_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_decls_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_foreign____Unify____foreign_export_decls_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_decls_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_foreign____Compare____foreign_export_decls_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____foreign_export_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_foreign____Unify____foreign_export_defn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_foreign____Compare____foreign_export_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_foreign____Compare____foreign_export_defn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____pred_target_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_foreign____Unify____pred_target_name_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_foreign____Compare____pred_target_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_foreign____Compare____pred_target_name_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_foreign____Unify____pred_target_names_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_foreign____Unify____pred_target_names_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_foreign____Compare____pred_target_names_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_foreign____Compare____pred_target_names_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
  MR_register_type_ctor_info(&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0);
  MR_register_type_ctor_info(&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0);
  MR_register_type_ctor_info(&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_decls_0);
  MR_register_type_ctor_info(&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0);
  MR_register_type_ctor_info(&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_pred_target_name_0);
  MR_register_type_ctor_info(&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_pred_target_names_0);
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

// :- end_module parse_tree.prog_foreign.
