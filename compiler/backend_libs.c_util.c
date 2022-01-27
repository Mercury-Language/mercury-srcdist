/*
** Automatically generated from `c_util.m'
** by the Mercury compiler,
** version rotd-2017-02-22
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


/* :- module backend_libs.c_util. */
/* :- implementation. */

/*
INIT mercury__backend_libs__c_util__init
ENDINIT
*/

#include "backend_libs.c_util.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
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
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__c_util__list__pti_list_1__plain_builtin__type_ctor_info_character_0;

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_0;

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_1;

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_2;

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_3;

static const MR_PseudoTypeInfo backend_libs__c_util__backend_libs__c_util__field_types_binop_category_0_4[1];

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_4;

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_5;

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_6;

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_7;

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_8;

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_9;

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_10;

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_11;

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_12;

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_13;

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_14;

static const MR_DuFunctorDescPtr backend_libs__c_util__backend_libs__c_util__du_stag_ordered_binop_category_0_0[14];

static const MR_DuFunctorDescPtr backend_libs__c_util__backend_libs__c_util__du_stag_ordered_binop_category_0_1[1];

static const MR_DuPtagLayout backend_libs__c_util__backend_libs__c_util__du_ptag_ordered_binop_category_0[2];

static const MR_DuFunctorDescPtr backend_libs__c_util__backend_libs__c_util__du_name_ordered_binop_category_0[15];

static const MR_Integer backend_libs__c_util__backend_libs__c_util__functor_number_map_binop_category_0[15];

static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_0;

static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_1;

static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_2;

static const MR_EnumFunctorDescPtr backend_libs__c_util__backend_libs__c_util__enum_value_ordered_literal_language_0[3];

static const MR_EnumFunctorDescPtr backend_libs__c_util__backend_libs__c_util__enum_name_ordered_literal_language_0[3];

static const MR_Integer backend_libs__c_util__backend_libs__c_util__functor_number_map_literal_language_0[3];

static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_maybe_set_line_numbers_0_0;

static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_maybe_set_line_numbers_0_1;

static const MR_EnumFunctorDescPtr backend_libs__c_util__backend_libs__c_util__enum_value_ordered_maybe_set_line_numbers_0[2];

static const MR_EnumFunctorDescPtr backend_libs__c_util__backend_libs__c_util__enum_name_ordered_maybe_set_line_numbers_0[2];

static const MR_Integer backend_libs__c_util__backend_libs__c_util__functor_number_map_maybe_set_line_numbers_0[2];

static const MR_FA_TypeInfo_Struct1 backend_libs__c_util__list__ti_list_1builtin__type_ctor_info_string_0;

static MR_bool MR_CALL 
backend_libs__c_util____Unify____binop_category_0_0_10001(
  MR_Box backend_libs__c_util__wrapper_arg_1,
  MR_Box backend_libs__c_util__wrapper_arg_2);

static void MR_CALL 
backend_libs__c_util____Compare____binop_category_0_0_10001(
  MR_Box * backend_libs__c_util__wrapper_arg_1,
  MR_Box backend_libs__c_util__wrapper_arg_2,
  MR_Box backend_libs__c_util__wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__c_util____Unify____literal_language_0_0_10001(
  MR_Box backend_libs__c_util__wrapper_arg_1,
  MR_Box backend_libs__c_util__wrapper_arg_2);

static void MR_CALL 
backend_libs__c_util____Compare____literal_language_0_0_10001(
  MR_Box * backend_libs__c_util__wrapper_arg_1,
  MR_Box backend_libs__c_util__wrapper_arg_2,
  MR_Box backend_libs__c_util__wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__c_util____Unify____maybe_set_line_numbers_0_0_10001(
  MR_Box backend_libs__c_util__wrapper_arg_1,
  MR_Box backend_libs__c_util__wrapper_arg_2);

static void MR_CALL 
backend_libs__c_util____Compare____maybe_set_line_numbers_0_0_10001(
  MR_Box * backend_libs__c_util__wrapper_arg_1,
  MR_Box backend_libs__c_util__wrapper_arg_2,
  MR_Box backend_libs__c_util__wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__c_util____Unify____multi_string_0_0_10001(
  MR_Box backend_libs__c_util__wrapper_arg_1,
  MR_Box backend_libs__c_util__wrapper_arg_2);

static void MR_CALL 
backend_libs__c_util____Compare____multi_string_0_0_10001(
  MR_Box * backend_libs__c_util__wrapper_arg_1,
  MR_Box backend_libs__c_util__wrapper_arg_2,
  MR_Box backend_libs__c_util__wrapper_arg_3);

static void MR_CALL 
backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0_1(
  MR_Box backend_libs__c_util__closure_arg,
  MR_Box backend_libs__c_util__wrapper_arg_1,
  MR_Box * backend_libs__c_util__wrapper_arg_2);

static MR_String MR_CALL 
backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0(
  MR_Char backend_libs__c_util__Char_5);

static void MR_CALL 
backend_libs__c_util__octal_escape_any_int_2_p_0(
  MR_Integer backend_libs__c_util__Int_3,
  MR_Word * backend_libs__c_util__EscapeCodeChars_4);

static void MR_CALL 
backend_libs__c_util__quote_one_char_c_3_p_0_1(
  MR_Box backend_libs__c_util__closure_arg,
  MR_Box backend_libs__c_util__wrapper_arg_1,
  MR_Box * backend_libs__c_util__wrapper_arg_2);

static void MR_CALL 
backend_libs__c_util__quote_one_char_c_3_p_0(
  MR_Char backend_libs__c_util__Char_4,
  MR_Word backend_libs__c_util__RevChars0_5,
  MR_Word * backend_libs__c_util__RevChars_6);

static void MR_CALL 
backend_libs__c_util__output_quoted_char_lang_5_p_3_1(
  MR_Box backend_libs__c_util__closure_arg,
  MR_Box backend_libs__c_util__wrapper_arg_1,
  MR_Box * backend_libs__c_util__wrapper_arg_2);

static void MR_CALL 
backend_libs__c_util__output_quoted_char_lang_5_p_3(
  MR_Word backend_libs__c_util__Stream_6,
  MR_Word backend_libs__c_util__Lang_7,
  MR_Char backend_libs__c_util__Char_8);

static void MR_CALL 
backend_libs__c_util__do_output_quoted_string_lang_6_p_0(
  MR_Word backend_libs__c_util__Stream_7,
  MR_Word backend_libs__c_util__Lang_8,
  MR_String backend_libs__c_util__Str_9,
  MR_Integer backend_libs__c_util__Cur_10);

static void MR_CALL 
backend_libs__c_util__can_print_directly_4_p_0(
  MR_String backend_libs__c_util__Str_1,
  MR_Word * backend_libs__c_util__CanPrintDirectly_2);

static void MR_CALL 
backend_libs__c_util__quote_string_1_f_0_1(
  MR_Box backend_libs__c_util__closure_arg,
  MR_Box backend_libs__c_util__wrapper_arg_1,
  MR_Box backend_libs__c_util__wrapper_arg_2,
  MR_Box * backend_libs__c_util__wrapper_arg_3);


static /* final */ const MR_Box backend_libs__c_util_scalar_common_1[14][2];

static /* final */ const MR_Box backend_libs__c_util_scalar_common_2[1][6];

static /* final */ const MR_Box backend_libs__c_util_scalar_common_3[4][3];

static /* final */ const MR_Box backend_libs__c_util_scalar_common_4[2][1];

static /* final */ const MR_Box backend_libs__c_util_scalar_common_6[1][5];


/* sealed */ struct backend_libs__c_util__vector_common_type_5_0_s {
  const MR_String backend_libs__c_util__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct backend_libs__c_util__vector_common_type_5_0_s backend_libs__c_util_vector_common_5[15];



static /* final */ const MR_Box backend_libs__c_util_scalar_common_1[14][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "*/\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[2])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "** END_OF_C_GRADE_INFO\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "**\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[5])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 92)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 48)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 48)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 55)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 49)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[8])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 51)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 63)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[7])))
  },
};

static /* final */ const MR_Box backend_libs__c_util_scalar_common_2[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&backend_libs__c_util__list__pti_list_1__plain_builtin__type_ctor_info_character_0)),
    ((MR_Box) (&backend_libs__c_util__list__pti_list_1__plain_builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box backend_libs__c_util_scalar_common_3[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&backend_libs__c_util_scalar_common_2[0])),
    ((MR_Box) (backend_libs__c_util__quote_string_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&backend_libs__c_util_scalar_common_6[0])),
    ((MR_Box) (backend_libs__c_util__output_quoted_char_lang_5_p_3_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&backend_libs__c_util_scalar_common_6[0])),
    ((MR_Box) (backend_libs__c_util__quote_one_char_c_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&backend_libs__c_util_scalar_common_6[0])),
    ((MR_Box) (backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__c_util_scalar_common_4[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box backend_libs__c_util_scalar_common_6[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__c_util__list__pti_list_1__plain_builtin__type_ctor_info_character_0))
  },
};


static /* final */ const struct backend_libs__c_util__vector_common_type_5_0_s backend_libs__c_util_vector_common_5[15] = {
  /* row 0 */   {     (MR_String) "MR_mktag" },
  /* row 1 */   {     (MR_String) "MR_tag" },
  /* row 2 */   {     (MR_String) "MR_unmktag" },
  /* row 3 */   {     (MR_String) "MR_strip_tag" },
  /* row 4 */   {     (MR_String) "MR_mkbody" },
  /* row 5 */   {     (MR_String) "MR_unmkbody" },
  /* row 6 */   {     (MR_String) "~" },
  /* row 7 */   {     (MR_String) "!" },
  /* row 8 */   {     (MR_String) "~" },
  /* row 9 */   {     (MR_String) "MR_hash_string" },
  /* row 10 */   {     (MR_String) "MR_hash_string2" },
  /* row 11 */   {     (MR_String) "MR_hash_string3" },
  /* row 12 */   {     (MR_String) "MR_hash_string4" },
  /* row 13 */   {     (MR_String) "MR_hash_string5" },
  /* row 14 */   {     (MR_String) "MR_hash_string6" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "backend_libs.c_util.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__c_util__list__pti_list_1__plain_builtin__type_ctor_info_character_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
  }
};

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_0 = {
  (MR_String) "array_index_binop",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_1 = {
  (MR_String) "string_index_binop",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_2 = {
  (MR_String) "pointer_compare_binop",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_3 = {
  (MR_String) "compound_compare_binop",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo backend_libs__c_util__backend_libs__c_util__field_types_binop_category_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_4 = {
  (MR_String) "offset_string_compare_binop",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 4,
  backend_libs__c_util__backend_libs__c_util__field_types_binop_category_0_4,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_5 = {
  (MR_String) "general_string_compare_binop",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_6 = {
  (MR_String) "string_compare_binop",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 6,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_7 = {
  (MR_String) "unsigned_compare_binop",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 7,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_8 = {
  (MR_String) "uint_compare_binop",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 7,
  (MR_Integer) 8,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_9 = {
  (MR_String) "uint_binary_infix_binop",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 9,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_10 = {
  (MR_String) "float_compare_binop",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 9,
  (MR_Integer) 10,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_11 = {
  (MR_String) "float_arith_binop",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 10,
  (MR_Integer) 11,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_12 = {
  (MR_String) "int_or_bool_binary_infix_binop",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 11,
  (MR_Integer) 12,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_13 = {
  (MR_String) "int_macro_binop",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 12,
  (MR_Integer) 13,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_14 = {
  (MR_String) "float_macro_binop",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 13,
  (MR_Integer) 14,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr backend_libs__c_util__backend_libs__c_util__du_stag_ordered_binop_category_0_0[14] = {
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_0,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_1,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_2,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_3,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_5,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_6,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_7,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_8,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_9,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_10,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_11,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_12,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_13,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_14
};

static const MR_DuFunctorDescPtr backend_libs__c_util__backend_libs__c_util__du_stag_ordered_binop_category_0_1[1] = {
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_4
};

static const MR_DuPtagLayout backend_libs__c_util__backend_libs__c_util__du_ptag_ordered_binop_category_0[2] = {
  {
    (MR_Integer) 14,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    backend_libs__c_util__backend_libs__c_util__du_stag_ordered_binop_category_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__c_util__backend_libs__c_util__du_stag_ordered_binop_category_0_1
  }
};

static const MR_DuFunctorDescPtr backend_libs__c_util__backend_libs__c_util__du_name_ordered_binop_category_0[15] = {
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_0,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_3,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_11,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_10,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_14,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_5,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_13,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_12,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_4,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_2,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_6,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_1,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_9,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_8,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_7
};

static const MR_Integer backend_libs__c_util__backend_libs__c_util__functor_number_map_binop_category_0[15] = {
  (MR_Integer) 0,
  (MR_Integer) 11,
  (MR_Integer) 9,
  (MR_Integer) 1,
  (MR_Integer) 8,
  (MR_Integer) 5,
  (MR_Integer) 10,
  (MR_Integer) 14,
  (MR_Integer) 13,
  (MR_Integer) 12,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 7,
  (MR_Integer) 6,
  (MR_Integer) 4
};

const MR_TypeCtorInfo_Struct backend_libs__c_util__backend_libs__c_util__type_ctor_info_binop_category_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__c_util____Unify____binop_category_0_0_10001)),
  ((MR_Box) (backend_libs__c_util____Compare____binop_category_0_0_10001)),
  (MR_String) "backend_libs.c_util",
  (MR_String) "binop_category",
  {     backend_libs__c_util__backend_libs__c_util__du_name_ordered_binop_category_0 },
  {     backend_libs__c_util__backend_libs__c_util__du_ptag_ordered_binop_category_0 },
  (MR_Integer) 15,
  (MR_Integer) 4,
  backend_libs__c_util__backend_libs__c_util__functor_number_map_binop_category_0
};

static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_0 = {
  (MR_String) "literal_c",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_1 = {
  (MR_String) "literal_java",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_2 = {
  (MR_String) "literal_csharp",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr backend_libs__c_util__backend_libs__c_util__enum_value_ordered_literal_language_0[3] = {
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_0,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_1,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_2
};

static const MR_EnumFunctorDescPtr backend_libs__c_util__backend_libs__c_util__enum_name_ordered_literal_language_0[3] = {
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_0,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_2,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_1
};

static const MR_Integer backend_libs__c_util__backend_libs__c_util__functor_number_map_literal_language_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct backend_libs__c_util__backend_libs__c_util__type_ctor_info_literal_language_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__c_util____Unify____literal_language_0_0_10001)),
  ((MR_Box) (backend_libs__c_util____Compare____literal_language_0_0_10001)),
  (MR_String) "backend_libs.c_util",
  (MR_String) "literal_language",
  {     backend_libs__c_util__backend_libs__c_util__enum_name_ordered_literal_language_0 },
  {     backend_libs__c_util__backend_libs__c_util__enum_value_ordered_literal_language_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  backend_libs__c_util__backend_libs__c_util__functor_number_map_literal_language_0
};

static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_maybe_set_line_numbers_0_0 = {
  (MR_String) "dont_set_line_numbers",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_maybe_set_line_numbers_0_1 = {
  (MR_String) "set_line_numbers",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr backend_libs__c_util__backend_libs__c_util__enum_value_ordered_maybe_set_line_numbers_0[2] = {
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_maybe_set_line_numbers_0_0,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_maybe_set_line_numbers_0_1
};

static const MR_EnumFunctorDescPtr backend_libs__c_util__backend_libs__c_util__enum_name_ordered_maybe_set_line_numbers_0[2] = {
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_maybe_set_line_numbers_0_0,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_maybe_set_line_numbers_0_1
};

static const MR_Integer backend_libs__c_util__backend_libs__c_util__functor_number_map_maybe_set_line_numbers_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct backend_libs__c_util__backend_libs__c_util__type_ctor_info_maybe_set_line_numbers_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__c_util____Unify____maybe_set_line_numbers_0_0_10001)),
  ((MR_Box) (backend_libs__c_util____Compare____maybe_set_line_numbers_0_0_10001)),
  (MR_String) "backend_libs.c_util",
  (MR_String) "maybe_set_line_numbers",
  {     backend_libs__c_util__backend_libs__c_util__enum_name_ordered_maybe_set_line_numbers_0 },
  {     backend_libs__c_util__backend_libs__c_util__enum_value_ordered_maybe_set_line_numbers_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__c_util__backend_libs__c_util__functor_number_map_maybe_set_line_numbers_0
};

static const MR_FA_TypeInfo_Struct1 backend_libs__c_util__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

const MR_TypeCtorInfo_Struct backend_libs__c_util__backend_libs__c_util__type_ctor_info_multi_string_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__c_util____Unify____multi_string_0_0_10001)),
  ((MR_Box) (backend_libs__c_util____Compare____multi_string_0_0_10001)),
  (MR_String) "backend_libs.c_util",
  (MR_String) "multi_string",
  {     NULL },
  {     (MR_PseudoTypeInfo) &backend_libs__c_util__list__ti_list_1builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
backend_libs__c_util____Unify____binop_category_0_0_10001(
  MR_Box backend_libs__c_util__wrapper_arg_1,
  MR_Box backend_libs__c_util__wrapper_arg_2)
{
  {
    MR_bool backend_libs__c_util__succeeded;

    {
      backend_libs__c_util__succeeded = backend_libs__c_util____Unify____binop_category_0_0(((MR_Word) backend_libs__c_util__wrapper_arg_1), ((MR_Word) backend_libs__c_util__wrapper_arg_2));
    }
    return backend_libs__c_util__succeeded;
  }
}

static void MR_CALL 
backend_libs__c_util____Compare____binop_category_0_0_10001(
  MR_Box * backend_libs__c_util__wrapper_arg_1,
  MR_Box backend_libs__c_util__wrapper_arg_2,
  MR_Box backend_libs__c_util__wrapper_arg_3)
{
  {
    MR_Word backend_libs__c_util__conv0_HeadVar__1_1;

    {
      backend_libs__c_util____Compare____binop_category_0_0(&backend_libs__c_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__c_util__wrapper_arg_2), ((MR_Word) backend_libs__c_util__wrapper_arg_3));
    }
    *backend_libs__c_util__wrapper_arg_1 = ((MR_Box) (backend_libs__c_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__c_util____Unify____literal_language_0_0_10001(
  MR_Box backend_libs__c_util__wrapper_arg_1,
  MR_Box backend_libs__c_util__wrapper_arg_2)
{
  {
    MR_bool backend_libs__c_util__succeeded;

    {
      backend_libs__c_util__succeeded = backend_libs__c_util____Unify____literal_language_0_0(((MR_Word) backend_libs__c_util__wrapper_arg_1), ((MR_Word) backend_libs__c_util__wrapper_arg_2));
    }
    return backend_libs__c_util__succeeded;
  }
}

static void MR_CALL 
backend_libs__c_util____Compare____literal_language_0_0_10001(
  MR_Box * backend_libs__c_util__wrapper_arg_1,
  MR_Box backend_libs__c_util__wrapper_arg_2,
  MR_Box backend_libs__c_util__wrapper_arg_3)
{
  {
    MR_Word backend_libs__c_util__conv0_HeadVar__1_1;

    {
      backend_libs__c_util____Compare____literal_language_0_0(&backend_libs__c_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__c_util__wrapper_arg_2), ((MR_Word) backend_libs__c_util__wrapper_arg_3));
    }
    *backend_libs__c_util__wrapper_arg_1 = ((MR_Box) (backend_libs__c_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__c_util____Unify____maybe_set_line_numbers_0_0_10001(
  MR_Box backend_libs__c_util__wrapper_arg_1,
  MR_Box backend_libs__c_util__wrapper_arg_2)
{
  {
    MR_bool backend_libs__c_util__succeeded;

    {
      backend_libs__c_util__succeeded = backend_libs__c_util____Unify____maybe_set_line_numbers_0_0(((MR_Word) backend_libs__c_util__wrapper_arg_1), ((MR_Word) backend_libs__c_util__wrapper_arg_2));
    }
    return backend_libs__c_util__succeeded;
  }
}

static void MR_CALL 
backend_libs__c_util____Compare____maybe_set_line_numbers_0_0_10001(
  MR_Box * backend_libs__c_util__wrapper_arg_1,
  MR_Box backend_libs__c_util__wrapper_arg_2,
  MR_Box backend_libs__c_util__wrapper_arg_3)
{
  {
    MR_Word backend_libs__c_util__conv0_HeadVar__1_1;

    {
      backend_libs__c_util____Compare____maybe_set_line_numbers_0_0(&backend_libs__c_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__c_util__wrapper_arg_2), ((MR_Word) backend_libs__c_util__wrapper_arg_3));
    }
    *backend_libs__c_util__wrapper_arg_1 = ((MR_Box) (backend_libs__c_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__c_util____Unify____multi_string_0_0_10001(
  MR_Box backend_libs__c_util__wrapper_arg_1,
  MR_Box backend_libs__c_util__wrapper_arg_2)
{
  {
    MR_bool backend_libs__c_util__succeeded;

    {
      backend_libs__c_util__succeeded = backend_libs__c_util____Unify____multi_string_0_0(((MR_Word) backend_libs__c_util__wrapper_arg_1), ((MR_Word) backend_libs__c_util__wrapper_arg_2));
    }
    return backend_libs__c_util__succeeded;
  }
}

static void MR_CALL 
backend_libs__c_util____Compare____multi_string_0_0_10001(
  MR_Box * backend_libs__c_util__wrapper_arg_1,
  MR_Box backend_libs__c_util__wrapper_arg_2,
  MR_Box backend_libs__c_util__wrapper_arg_3)
{
  {
    MR_Word backend_libs__c_util__conv0_HeadVar__1_1;

    {
      backend_libs__c_util____Compare____multi_string_0_0(&backend_libs__c_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__c_util__wrapper_arg_2), ((MR_Word) backend_libs__c_util__wrapper_arg_3));
    }
    *backend_libs__c_util__wrapper_arg_1 = ((MR_Box) (backend_libs__c_util__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0_1(
  MR_Box backend_libs__c_util__closure_arg,
  MR_Box backend_libs__c_util__wrapper_arg_1,
  MR_Box * backend_libs__c_util__wrapper_arg_2)
{
  {
    MR_Box backend_libs__c_util__closure = backend_libs__c_util__closure_arg;
    MR_Word backend_libs__c_util__conv0_EscapeCodeChars_4;

    {
      backend_libs__c_util__octal_escape_any_int_2_p_0(((MR_Integer) backend_libs__c_util__wrapper_arg_1), &backend_libs__c_util__conv0_EscapeCodeChars_4);
    }
    *backend_libs__c_util__wrapper_arg_2 = ((MR_Box) (backend_libs__c_util__conv0_EscapeCodeChars_4));
  }
}

static MR_String MR_CALL 
backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0(
  MR_Char backend_libs__c_util__Char_5)
{
  {
    MR_bool backend_libs__c_util__succeeded;
    MR_String backend_libs__c_util__QuotedCharStr_6;
    MR_Word backend_libs__c_util__RevQuotedCharStr_7;
    MR_Word backend_libs__c_util__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Char backend_libs__c_util__EscapeChar_14;

    switch (backend_libs__c_util__Char_5) {
      default:
        backend_libs__c_util__succeeded = MR_FALSE;
        break;
      case (MR_Char) 7:
        {
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 97;
          backend_libs__c_util__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 8:
        {
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 98;
          backend_libs__c_util__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 9:
        {
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 116;
          backend_libs__c_util__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 10:
        {
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 110;
          backend_libs__c_util__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 11:
        {
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 118;
          backend_libs__c_util__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 12:
        {
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 102;
          backend_libs__c_util__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 13:
        {
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 114;
          backend_libs__c_util__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 34:
        {
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 34;
          backend_libs__c_util__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 39:
        {
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 39;
          backend_libs__c_util__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 92:
        {
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 92;
          backend_libs__c_util__succeeded = MR_TRUE;
        }
        break;
    }
    if (backend_libs__c_util__succeeded)
      {
        {
          backend_libs__c_util__RevQuotedCharStr_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_7, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__EscapeChar_14));
          MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[7])));
        }
      }
    else
      {
        backend_libs__c_util__succeeded = (backend_libs__c_util__Char_5 == (MR_Char) 63);
        if (backend_libs__c_util__succeeded)
          {
            backend_libs__c_util__RevQuotedCharStr_7 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[13]);
          }
        else
          {
            {
              backend_libs__c_util__succeeded = mercury__char__is_alnum_1_p_0(backend_libs__c_util__Char_5);
            }
            if (!(backend_libs__c_util__succeeded))
              {
                {
                  backend_libs__c_util__succeeded = mercury__string__contains_char_2_p_0((MR_String) " !\"#%&\'()*+,-./:;<=>\?[\\]^_{|}~", backend_libs__c_util__Char_5);
                }
              }
            if (backend_libs__c_util__succeeded)
              {
                backend_libs__c_util__RevQuotedCharStr_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_7, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__Char_5));
                MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_7, 1) = ((MR_Box) (backend_libs__c_util__V_8_8));
              }
            else
              {
                {
                  backend_libs__c_util__succeeded = mercury__char__to_int_2_p_1(backend_libs__c_util__Char_5, (MR_Integer) 0);
                }
                if (backend_libs__c_util__succeeded)
                  {
                    backend_libs__c_util__RevQuotedCharStr_7 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[8]);
                  }
                else
                  {
                    MR_Integer backend_libs__c_util__Int_15;

                    {
                      backend_libs__c_util__Int_15 = mercury__char__to_int_1_f_0(backend_libs__c_util__Char_5);
                    }
                    backend_libs__c_util__succeeded = (backend_libs__c_util__Int_15 >= (MR_Integer) 128);
                    if (backend_libs__c_util__succeeded)
                      {
                        MR_Word backend_libs__c_util__CodeUnits_16;

                        {
                          backend_libs__c_util__succeeded = mercury__char__to_utf8_2_p_0(backend_libs__c_util__Char_5, &backend_libs__c_util__CodeUnits_16);
                        }
                        if (backend_libs__c_util__succeeded)
                          {
                            MR_Word backend_libs__c_util__TypeCtorInfo_35_39;
                            MR_Word backend_libs__c_util__EscapeCharss_17;
                            MR_Word backend_libs__c_util__EscapeChars_18;

                            {
                              mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__c_util_scalar_common_1[0], (MR_Word) &backend_libs__c_util_scalar_common_3[3], backend_libs__c_util__CodeUnits_16, &backend_libs__c_util__EscapeCharss_17);
                            }
                            backend_libs__c_util__TypeCtorInfo_35_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
                            {
                              mercury__list__condense_2_p_0(backend_libs__c_util__TypeCtorInfo_35_39, backend_libs__c_util__EscapeCharss_17, &backend_libs__c_util__EscapeChars_18);
                            }
                            {
                              mercury__list__reverse_prepend_3_p_0(backend_libs__c_util__TypeCtorInfo_35_39, backend_libs__c_util__EscapeChars_18, backend_libs__c_util__V_8_8, &backend_libs__c_util__RevQuotedCharStr_7);
                            }
                          }
                        else
                          {
                            {
                              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.c_util", (MR_String) "predicate \140backend_libs.c_util.quote_one_char\'/4", (MR_String) "invalid Unicode code point");
                            }
                          }
                      }
                    else
                      {
                        MR_Word backend_libs__c_util__EscapeChars_33;
                        MR_Integer backend_libs__c_util__Int_45;

                        {
                          mercury__char__to_int_2_p_0(backend_libs__c_util__Char_5, &backend_libs__c_util__Int_45);
                        }
                        {
                          backend_libs__c_util__octal_escape_any_int_2_p_0(backend_libs__c_util__Int_45, &backend_libs__c_util__EscapeChars_33);
                        }
                        {
                          mercury__list__reverse_prepend_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, backend_libs__c_util__EscapeChars_33, backend_libs__c_util__V_8_8, &backend_libs__c_util__RevQuotedCharStr_7);
                        }
                      }
                  }
              }
          }
      }
    {
      mercury__string__from_rev_char_list_2_p_0(backend_libs__c_util__RevQuotedCharStr_7, &backend_libs__c_util__QuotedCharStr_6);
    }
    return backend_libs__c_util__QuotedCharStr_6;
  }
}

void MR_CALL 
backend_libs__c_util____Compare____multi_string_0_0(
  MR_Word * backend_libs__c_util__HeadVar__1_1,
  MR_Word backend_libs__c_util__HeadVar__2_2,
  MR_Word backend_libs__c_util__HeadVar__3_3)
{
  {
    MR_bool backend_libs__c_util__succeeded;
    MR_Word backend_libs__c_util__Cast_HeadVar1_4 = backend_libs__c_util__HeadVar__2_2;
    MR_Word backend_libs__c_util__Cast_HeadVar2_5 = backend_libs__c_util__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__c_util_scalar_common_1[1], backend_libs__c_util__HeadVar__1_1, ((MR_Box) (backend_libs__c_util__Cast_HeadVar1_4)), ((MR_Box) (backend_libs__c_util__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
backend_libs__c_util____Unify____multi_string_0_0(
  MR_Word backend_libs__c_util__HeadVar__1_1,
  MR_Word backend_libs__c_util__HeadVar__2_2)
{
  {
    MR_bool backend_libs__c_util__succeeded;
    MR_Word backend_libs__c_util__Cast_HeadVar1_3 = backend_libs__c_util__HeadVar__1_1;
    MR_Word backend_libs__c_util__Cast_HeadVar2_4 = backend_libs__c_util__HeadVar__2_2;

    {
      backend_libs__c_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__c_util_scalar_common_1[1], ((MR_Box) (backend_libs__c_util__Cast_HeadVar1_3)), ((MR_Box) (backend_libs__c_util__Cast_HeadVar2_4)));
    }
    return backend_libs__c_util__succeeded;
  }
}

void MR_CALL 
backend_libs__c_util____Compare____maybe_set_line_numbers_0_0(
  MR_Word * backend_libs__c_util__HeadVar__1_1,
  MR_Word backend_libs__c_util__HeadVar__2_2,
  MR_Word backend_libs__c_util__HeadVar__3_3)
{
  {
    MR_bool backend_libs__c_util__succeeded;
    MR_Integer backend_libs__c_util__Cast_HeadVar1_4 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;
    MR_Integer backend_libs__c_util__Cast_HeadVar2_5 = (MR_Integer) backend_libs__c_util__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__Cast_HeadVar1_4, backend_libs__c_util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
backend_libs__c_util____Unify____maybe_set_line_numbers_0_0(
  MR_Word backend_libs__c_util__HeadVar__2_1,
  MR_Word backend_libs__c_util__HeadVar__2_2)
{
  {
    MR_bool backend_libs__c_util__succeeded = (backend_libs__c_util__HeadVar__2_1 == backend_libs__c_util__HeadVar__2_2);

    return backend_libs__c_util__succeeded;
  }
}

void MR_CALL 
backend_libs__c_util____Compare____literal_language_0_0(
  MR_Word * backend_libs__c_util__HeadVar__1_1,
  MR_Word backend_libs__c_util__HeadVar__2_2,
  MR_Word backend_libs__c_util__HeadVar__3_3)
{
  {
    MR_bool backend_libs__c_util__succeeded;
    MR_Integer backend_libs__c_util__Cast_HeadVar1_4 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;
    MR_Integer backend_libs__c_util__Cast_HeadVar2_5 = (MR_Integer) backend_libs__c_util__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__Cast_HeadVar1_4, backend_libs__c_util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
backend_libs__c_util____Unify____literal_language_0_0(
  MR_Word backend_libs__c_util__HeadVar__2_1,
  MR_Word backend_libs__c_util__HeadVar__2_2)
{
  {
    MR_bool backend_libs__c_util__succeeded = (backend_libs__c_util__HeadVar__2_1 == backend_libs__c_util__HeadVar__2_2);

    return backend_libs__c_util__succeeded;
  }
}

void MR_CALL 
backend_libs__c_util____Compare____binop_category_0_0(
  MR_Word * backend_libs__c_util__HeadVar__1_1,
  MR_Word backend_libs__c_util__HeadVar__2_2,
  MR_Word backend_libs__c_util__HeadVar__3_3)
{
  {
    MR_bool backend_libs__c_util__succeeded;
    MR_Integer backend_libs__c_util__CastX_9 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;
    MR_Integer backend_libs__c_util__CastY_10 = (MR_Integer) backend_libs__c_util__HeadVar__3_3;

    backend_libs__c_util__succeeded = (backend_libs__c_util__CastX_9 == backend_libs__c_util__CastY_10);
    if (backend_libs__c_util__succeeded)
      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer backend_libs__c_util__V_4_4;
        MR_Integer backend_libs__c_util__V_5_5;

        {
          backend_libs__c_util____Index____binop_category_0_0(backend_libs__c_util__HeadVar__2_2, &backend_libs__c_util__V_4_4);
        }
        {
          backend_libs__c_util____Index____binop_category_0_0(backend_libs__c_util__HeadVar__3_3, &backend_libs__c_util__V_5_5);
        }
        backend_libs__c_util__succeeded = (backend_libs__c_util__V_4_4 < backend_libs__c_util__V_5_5);
        if (backend_libs__c_util__succeeded)
          *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            backend_libs__c_util__succeeded = (backend_libs__c_util__V_4_4 > backend_libs__c_util__V_5_5);
            if (backend_libs__c_util__succeeded)
              *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
            else
              {
                MR_Word backend_libs__c_util__V_6_6;

                switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__2_2)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(backend_libs__c_util__HeadVar__2_2)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          backend_libs__c_util__V_6_6 = (MR_Integer) 0;
                          backend_libs__c_util__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          backend_libs__c_util__V_6_6 = (MR_Integer) 0;
                          backend_libs__c_util__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          backend_libs__c_util__V_6_6 = (MR_Integer) 0;
                          backend_libs__c_util__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          backend_libs__c_util__V_6_6 = (MR_Integer) 0;
                          backend_libs__c_util__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          backend_libs__c_util__V_6_6 = (MR_Integer) 0;
                          backend_libs__c_util__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          backend_libs__c_util__V_6_6 = (MR_Integer) 0;
                          backend_libs__c_util__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          backend_libs__c_util__V_6_6 = (MR_Integer) 0;
                          backend_libs__c_util__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          backend_libs__c_util__V_6_6 = (MR_Integer) 0;
                          backend_libs__c_util__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          backend_libs__c_util__V_6_6 = (MR_Integer) 0;
                          backend_libs__c_util__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 9:
                        {
                          backend_libs__c_util__V_6_6 = (MR_Integer) 0;
                          backend_libs__c_util__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 10:
                        {
                          backend_libs__c_util__V_6_6 = (MR_Integer) 0;
                          backend_libs__c_util__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 11:
                        {
                          backend_libs__c_util__V_6_6 = (MR_Integer) 0;
                          backend_libs__c_util__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 12:
                        {
                          backend_libs__c_util__V_6_6 = (MR_Integer) 0;
                          backend_libs__c_util__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 13:
                        {
                          backend_libs__c_util__V_6_6 = (MR_Integer) 0;
                          backend_libs__c_util__succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Integer backend_libs__c_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__c_util__HeadVar__2_2, (MR_Integer) 0)));
                      MR_Integer backend_libs__c_util__V_8_8;

                      backend_libs__c_util__succeeded = ((MR_tag((MR_Word) backend_libs__c_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
                      if (backend_libs__c_util__succeeded)
                        {
                          backend_libs__c_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__c_util__HeadVar__3_3, (MR_Integer) 0)));
                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__c_util__V_6_6, backend_libs__c_util__V_7_7, backend_libs__c_util__V_8_8);
                          }
                          backend_libs__c_util__succeeded = MR_TRUE;
                        }
                    }
                    break;
                }
                if (backend_libs__c_util__succeeded)
                  *backend_libs__c_util__HeadVar__1_1 = backend_libs__c_util__V_6_6;
                else
                  {
                    mercury__private_builtin__compare_error_0_p_0();
                    return;
                  }
              }
          }
      }
  }
}

void MR_CALL 
backend_libs__c_util____Index____binop_category_0_0(
  MR_Word backend_libs__c_util__HeadVar__1_1,
  MR_Integer * backend_libs__c_util__HeadVar__2_2)
{
  {
    MR_bool backend_libs__c_util__succeeded;

    switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(backend_libs__c_util__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 2;
            break;
          case (MR_Integer) 3:
            *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 3;
            break;
          case (MR_Integer) 4:
            *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 5;
            break;
          case (MR_Integer) 5:
            *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 6;
            break;
          case (MR_Integer) 6:
            *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 7;
            break;
          case (MR_Integer) 7:
            *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 8;
            break;
          case (MR_Integer) 8:
            *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 9;
            break;
          case (MR_Integer) 9:
            *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 10;
            break;
          case (MR_Integer) 10:
            *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 11;
            break;
          case (MR_Integer) 11:
            *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 12;
            break;
          case (MR_Integer) 12:
            *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 13;
            break;
          case (MR_Integer) 13:
            *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 14;
            break;
        }
        break;
      case (MR_Integer) 1:
        *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 4;
        break;
    }
  }
}

MR_bool MR_CALL 
backend_libs__c_util____Unify____binop_category_0_0(
  MR_Word backend_libs__c_util__HeadVar__1_1,
  MR_Word backend_libs__c_util__HeadVar__2_2)
{
  {
    MR_bool backend_libs__c_util__succeeded;
    MR_Integer backend_libs__c_util__CastX_33 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
    MR_Integer backend_libs__c_util__CastY_34 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

    backend_libs__c_util__succeeded = (backend_libs__c_util__CastX_33 == backend_libs__c_util__CastY_34);
    if (backend_libs__c_util__succeeded)
      backend_libs__c_util__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(backend_libs__c_util__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer backend_libs__c_util__CastX_3 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
                MR_Integer backend_libs__c_util__CastY_4 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_4 == backend_libs__c_util__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer backend_libs__c_util__CastX_5 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
                MR_Integer backend_libs__c_util__CastY_6 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_6 == backend_libs__c_util__CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer backend_libs__c_util__CastX_7 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
                MR_Integer backend_libs__c_util__CastY_8 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_8 == backend_libs__c_util__CastX_7);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer backend_libs__c_util__CastX_9 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
                MR_Integer backend_libs__c_util__CastY_10 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_10 == backend_libs__c_util__CastX_9);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer backend_libs__c_util__CastX_13 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
                MR_Integer backend_libs__c_util__CastY_14 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_14 == backend_libs__c_util__CastX_13);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Integer backend_libs__c_util__CastX_15 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
                MR_Integer backend_libs__c_util__CastY_16 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_16 == backend_libs__c_util__CastX_15);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Integer backend_libs__c_util__CastX_17 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
                MR_Integer backend_libs__c_util__CastY_18 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_18 == backend_libs__c_util__CastX_17);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Integer backend_libs__c_util__CastX_19 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
                MR_Integer backend_libs__c_util__CastY_20 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_20 == backend_libs__c_util__CastX_19);
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Integer backend_libs__c_util__CastX_21 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
                MR_Integer backend_libs__c_util__CastY_22 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_22 == backend_libs__c_util__CastX_21);
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Integer backend_libs__c_util__CastX_23 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
                MR_Integer backend_libs__c_util__CastY_24 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_24 == backend_libs__c_util__CastX_23);
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Integer backend_libs__c_util__CastX_25 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
                MR_Integer backend_libs__c_util__CastY_26 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_26 == backend_libs__c_util__CastX_25);
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Integer backend_libs__c_util__CastX_27 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
                MR_Integer backend_libs__c_util__CastY_28 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_28 == backend_libs__c_util__CastX_27);
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Integer backend_libs__c_util__CastX_29 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
                MR_Integer backend_libs__c_util__CastY_30 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_30 == backend_libs__c_util__CastX_29);
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Integer backend_libs__c_util__CastX_31 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
                MR_Integer backend_libs__c_util__CastY_32 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_32 == backend_libs__c_util__CastX_31);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer backend_libs__c_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__c_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer backend_libs__c_util__V_12_12;

            backend_libs__c_util__succeeded = ((MR_tag((MR_Word) backend_libs__c_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (backend_libs__c_util__succeeded)
              {
                backend_libs__c_util__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__c_util__HeadVar__2_2, (MR_Integer) 0)));
                backend_libs__c_util__succeeded = (backend_libs__c_util__V_11_11 == backend_libs__c_util__V_12_12);
              }
          }
          break;
      }
    return backend_libs__c_util__succeeded;
  }
}

static void MR_CALL 
backend_libs__c_util__octal_escape_any_int_2_p_0(
  MR_Integer backend_libs__c_util__Int_3,
  MR_Word * backend_libs__c_util__EscapeCodeChars_4)
{
  {
    MR_bool backend_libs__c_util__succeeded;
    MR_String backend_libs__c_util__OctalString0_5;
    MR_String backend_libs__c_util__OctalString_6;
    MR_Word backend_libs__c_util__V_11_11;

    {
      mercury__string__int_to_base_string_3_p_0(backend_libs__c_util__Int_3, (MR_Integer) 8, &backend_libs__c_util__OctalString0_5);
    }
    {
      mercury__string__pad_left_4_p_0(backend_libs__c_util__OctalString0_5, (MR_Char) 48, (MR_Integer) 3, &backend_libs__c_util__OctalString_6);
    }
    {
      backend_libs__c_util__V_11_11 = mercury__string__to_char_list_1_f_0(backend_libs__c_util__OctalString_6);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *backend_libs__c_util__EscapeCodeChars_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__c_util__V_11_11));
    }
  }
}

static void MR_CALL 
backend_libs__c_util__quote_one_char_c_3_p_0_1(
  MR_Box backend_libs__c_util__closure_arg,
  MR_Box backend_libs__c_util__wrapper_arg_1,
  MR_Box * backend_libs__c_util__wrapper_arg_2)
{
  {
    MR_Box backend_libs__c_util__closure = backend_libs__c_util__closure_arg;
    MR_Word backend_libs__c_util__conv0_EscapeCodeChars_4;

    {
      backend_libs__c_util__octal_escape_any_int_2_p_0(((MR_Integer) backend_libs__c_util__wrapper_arg_1), &backend_libs__c_util__conv0_EscapeCodeChars_4);
    }
    *backend_libs__c_util__wrapper_arg_2 = ((MR_Box) (backend_libs__c_util__conv0_EscapeCodeChars_4));
  }
}

static void MR_CALL 
backend_libs__c_util__quote_one_char_c_3_p_0(
  MR_Char backend_libs__c_util__Char_4,
  MR_Word backend_libs__c_util__RevChars0_5,
  MR_Word * backend_libs__c_util__RevChars_6)
{
  {
    MR_bool backend_libs__c_util__succeeded;
    MR_Char backend_libs__c_util__EscapeChar_7;

    switch (backend_libs__c_util__Char_4) {
      default:
        backend_libs__c_util__succeeded = MR_FALSE;
        break;
      case (MR_Char) 7:
        {
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 97;
          backend_libs__c_util__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 8:
        {
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 98;
          backend_libs__c_util__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 9:
        {
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 116;
          backend_libs__c_util__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 10:
        {
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 110;
          backend_libs__c_util__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 11:
        {
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 118;
          backend_libs__c_util__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 12:
        {
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 102;
          backend_libs__c_util__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 13:
        {
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 114;
          backend_libs__c_util__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 34:
        {
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 34;
          backend_libs__c_util__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 39:
        {
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 39;
          backend_libs__c_util__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 92:
        {
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 92;
          backend_libs__c_util__succeeded = MR_TRUE;
        }
        break;
    }
    if (backend_libs__c_util__succeeded)
      {
        MR_Word backend_libs__c_util__V_12_12;

        {
          backend_libs__c_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), backend_libs__c_util__V_12_12, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
          MR_hl_field(MR_mktag(1), backend_libs__c_util__V_12_12, 1) = ((MR_Box) (backend_libs__c_util__RevChars0_5));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *backend_libs__c_util__RevChars_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__EscapeChar_7));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__c_util__V_12_12));
        }
      }
    else
      {
        backend_libs__c_util__succeeded = (backend_libs__c_util__Char_4 == (MR_Char) 63);
        if (backend_libs__c_util__succeeded)
          {
            MR_Word backend_libs__c_util__V_15_15;

            {
              backend_libs__c_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), backend_libs__c_util__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
              MR_hl_field(MR_mktag(1), backend_libs__c_util__V_15_15, 1) = ((MR_Box) (backend_libs__c_util__RevChars0_5));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *backend_libs__c_util__RevChars_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) ((MR_Char) 63));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__c_util__V_15_15));
            }
          }
        else
          {
            {
              backend_libs__c_util__succeeded = mercury__char__is_alnum_1_p_0(backend_libs__c_util__Char_4);
            }
            if (!(backend_libs__c_util__succeeded))
              {
                {
                  backend_libs__c_util__succeeded = mercury__string__contains_char_2_p_0((MR_String) " !\"#%&\'()*+,-./:;<=>\?[\\]^_{|}~", backend_libs__c_util__Char_4);
                }
              }
            if (backend_libs__c_util__succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *backend_libs__c_util__RevChars_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__Char_4));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__c_util__RevChars0_5));
              }
            else
              {
                {
                  backend_libs__c_util__succeeded = mercury__char__to_int_2_p_1(backend_libs__c_util__Char_4, (MR_Integer) 0);
                }
                if (backend_libs__c_util__succeeded)
                  {
                    MR_Word backend_libs__c_util__V_19_19;

                    {
                      backend_libs__c_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
                      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_19_19, 1) = ((MR_Box) (backend_libs__c_util__RevChars0_5));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *backend_libs__c_util__RevChars_6 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) ((MR_Char) 48));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__c_util__V_19_19));
                    }
                  }
                else
                  {
                    MR_Integer backend_libs__c_util__Int_8;

                    {
                      backend_libs__c_util__Int_8 = mercury__char__to_int_1_f_0(backend_libs__c_util__Char_4);
                    }
                    backend_libs__c_util__succeeded = (backend_libs__c_util__Int_8 >= (MR_Integer) 128);
                    if (backend_libs__c_util__succeeded)
                      {
                        MR_Word backend_libs__c_util__CodeUnits_9;

                        {
                          backend_libs__c_util__succeeded = mercury__char__to_utf8_2_p_0(backend_libs__c_util__Char_4, &backend_libs__c_util__CodeUnits_9);
                        }
                        if (backend_libs__c_util__succeeded)
                          {
                            MR_Word backend_libs__c_util__TypeCtorInfo_31_31;
                            MR_Word backend_libs__c_util__EscapeCharss_10;
                            MR_Word backend_libs__c_util__EscapeChars_11;

                            {
                              mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__c_util_scalar_common_1[0], (MR_Word) &backend_libs__c_util_scalar_common_3[2], backend_libs__c_util__CodeUnits_9, &backend_libs__c_util__EscapeCharss_10);
                            }
                            backend_libs__c_util__TypeCtorInfo_31_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
                            {
                              mercury__list__condense_2_p_0(backend_libs__c_util__TypeCtorInfo_31_31, backend_libs__c_util__EscapeCharss_10, &backend_libs__c_util__EscapeChars_11);
                            }
                            {
                              mercury__list__reverse_prepend_3_p_0(backend_libs__c_util__TypeCtorInfo_31_31, backend_libs__c_util__EscapeChars_11, backend_libs__c_util__RevChars0_5, backend_libs__c_util__RevChars_6);
                            }
                          }
                        else
                          {
                            {
                              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.c_util", (MR_String) "predicate \140backend_libs.c_util.quote_one_char_c\'/3", (MR_String) "invalid Unicode code point");
                              return;
                            }
                          }
                      }
                    else
                      {
                        MR_Word backend_libs__c_util__EscapeChars_26;
                        MR_Integer backend_libs__c_util__Int_37;

                        {
                          mercury__char__to_int_2_p_0(backend_libs__c_util__Char_4, &backend_libs__c_util__Int_37);
                        }
                        {
                          backend_libs__c_util__octal_escape_any_int_2_p_0(backend_libs__c_util__Int_37, &backend_libs__c_util__EscapeChars_26);
                        }
                        {
                          mercury__list__reverse_prepend_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, backend_libs__c_util__EscapeChars_26, backend_libs__c_util__RevChars0_5, backend_libs__c_util__RevChars_6);
                        }
                      }
                  }
              }
          }
      }
  }
}

static void MR_CALL 
backend_libs__c_util__output_quoted_char_lang_5_p_3_1(
  MR_Box backend_libs__c_util__closure_arg,
  MR_Box backend_libs__c_util__wrapper_arg_1,
  MR_Box * backend_libs__c_util__wrapper_arg_2)
{
  {
    MR_Box backend_libs__c_util__closure = backend_libs__c_util__closure_arg;
    MR_Word backend_libs__c_util__conv0_EscapeCodeChars_4;

    {
      backend_libs__c_util__octal_escape_any_int_2_p_0(((MR_Integer) backend_libs__c_util__wrapper_arg_1), &backend_libs__c_util__conv0_EscapeCodeChars_4);
    }
    *backend_libs__c_util__wrapper_arg_2 = ((MR_Box) (backend_libs__c_util__conv0_EscapeCodeChars_4));
  }
}

static void MR_CALL 
backend_libs__c_util__output_quoted_char_lang_5_p_3(
  MR_Word backend_libs__c_util__Stream_6,
  MR_Word backend_libs__c_util__Lang_7,
  MR_Char backend_libs__c_util__Char_8)
{
  {
    MR_bool backend_libs__c_util__succeeded = (backend_libs__c_util__Lang_7 == (MR_Integer) 1);
    MR_String backend_libs__c_util__EscapedCharStr_10;
    MR_Word backend_libs__c_util__RevQuotedCharStr_17;
    MR_Word backend_libs__c_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word backend_libs__c_util__RevEscapeChars_23;

    if (backend_libs__c_util__succeeded)
      switch (backend_libs__c_util__Char_8) {
        default:
          backend_libs__c_util__succeeded = MR_FALSE;
          break;
        case (MR_Char) 7:
          {
            backend_libs__c_util__RevEscapeChars_23 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[10]);
            backend_libs__c_util__succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 11:
          {
            backend_libs__c_util__RevEscapeChars_23 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[12]);
            backend_libs__c_util__succeeded = MR_TRUE;
          }
          break;
      }
    if (backend_libs__c_util__succeeded)
      {
        {
          mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, backend_libs__c_util__RevEscapeChars_23, backend_libs__c_util__V_18_18, &backend_libs__c_util__RevQuotedCharStr_17);
        }
      }
    else
      {
        MR_Char backend_libs__c_util__EscapeChar_24;

        switch (backend_libs__c_util__Char_8) {
          default:
            backend_libs__c_util__succeeded = MR_FALSE;
            break;
          case (MR_Char) 7:
            {
              backend_libs__c_util__EscapeChar_24 = (MR_Char) 97;
              backend_libs__c_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Char) 8:
            {
              backend_libs__c_util__EscapeChar_24 = (MR_Char) 98;
              backend_libs__c_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Char) 9:
            {
              backend_libs__c_util__EscapeChar_24 = (MR_Char) 116;
              backend_libs__c_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Char) 10:
            {
              backend_libs__c_util__EscapeChar_24 = (MR_Char) 110;
              backend_libs__c_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Char) 11:
            {
              backend_libs__c_util__EscapeChar_24 = (MR_Char) 118;
              backend_libs__c_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Char) 12:
            {
              backend_libs__c_util__EscapeChar_24 = (MR_Char) 102;
              backend_libs__c_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Char) 13:
            {
              backend_libs__c_util__EscapeChar_24 = (MR_Char) 114;
              backend_libs__c_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Char) 34:
            {
              backend_libs__c_util__EscapeChar_24 = (MR_Char) 34;
              backend_libs__c_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Char) 39:
            {
              backend_libs__c_util__EscapeChar_24 = (MR_Char) 39;
              backend_libs__c_util__succeeded = MR_TRUE;
            }
            break;
          case (MR_Char) 92:
            {
              backend_libs__c_util__EscapeChar_24 = (MR_Char) 92;
              backend_libs__c_util__succeeded = MR_TRUE;
            }
            break;
        }
        if (backend_libs__c_util__succeeded)
          {
            {
              backend_libs__c_util__RevQuotedCharStr_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_17, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__EscapeChar_24));
              MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[7])));
            }
          }
        else
          {
            backend_libs__c_util__succeeded = (backend_libs__c_util__Lang_7 == (MR_Integer) 0);
            if (backend_libs__c_util__succeeded)
              backend_libs__c_util__succeeded = (backend_libs__c_util__Char_8 == (MR_Char) 63);
            if (backend_libs__c_util__succeeded)
              {
                backend_libs__c_util__RevQuotedCharStr_17 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[13]);
              }
            else
              {
                {
                  backend_libs__c_util__succeeded = mercury__char__is_alnum_1_p_0(backend_libs__c_util__Char_8);
                }
                if (!(backend_libs__c_util__succeeded))
                  {
                    {
                      backend_libs__c_util__succeeded = mercury__string__contains_char_2_p_0((MR_String) " !\"#%&\'()*+,-./:;<=>\?[\\]^_{|}~", backend_libs__c_util__Char_8);
                    }
                  }
                if (backend_libs__c_util__succeeded)
                  {
                    backend_libs__c_util__RevQuotedCharStr_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_17, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__Char_8));
                    MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_17, 1) = ((MR_Box) (backend_libs__c_util__V_18_18));
                  }
                else
                  {
                    {
                      backend_libs__c_util__succeeded = mercury__char__to_int_2_p_1(backend_libs__c_util__Char_8, (MR_Integer) 0);
                    }
                    if (backend_libs__c_util__succeeded)
                      {
                        backend_libs__c_util__RevQuotedCharStr_17 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[8]);
                      }
                    else
                      {
                        MR_Integer backend_libs__c_util__Int_25;

                        {
                          backend_libs__c_util__Int_25 = mercury__char__to_int_1_f_0(backend_libs__c_util__Char_8);
                        }
                        backend_libs__c_util__succeeded = (backend_libs__c_util__Int_25 >= (MR_Integer) 128);
                        if (backend_libs__c_util__succeeded)
                          switch (backend_libs__c_util__Lang_7) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              {
                                MR_Word backend_libs__c_util__CodeUnits_26;

                                {
                                  backend_libs__c_util__succeeded = mercury__char__to_utf8_2_p_0(backend_libs__c_util__Char_8, &backend_libs__c_util__CodeUnits_26);
                                }
                                if (backend_libs__c_util__succeeded)
                                  {
                                    MR_Word backend_libs__c_util__TypeCtorInfo_35_49;
                                    MR_Word backend_libs__c_util__EscapeCharss_27;
                                    MR_Word backend_libs__c_util__EscapeChars_28;

                                    {
                                      mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__c_util_scalar_common_1[0], (MR_Word) &backend_libs__c_util_scalar_common_3[1], backend_libs__c_util__CodeUnits_26, &backend_libs__c_util__EscapeCharss_27);
                                    }
                                    backend_libs__c_util__TypeCtorInfo_35_49 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
                                    {
                                      mercury__list__condense_2_p_0(backend_libs__c_util__TypeCtorInfo_35_49, backend_libs__c_util__EscapeCharss_27, &backend_libs__c_util__EscapeChars_28);
                                    }
                                    {
                                      mercury__list__reverse_prepend_3_p_0(backend_libs__c_util__TypeCtorInfo_35_49, backend_libs__c_util__EscapeChars_28, backend_libs__c_util__V_18_18, &backend_libs__c_util__RevQuotedCharStr_17);
                                    }
                                  }
                                else
                                  {
                                    {
                                      mercury__require__unexpected_3_p_0((MR_String) "backend_libs.c_util", (MR_String) "predicate \140backend_libs.c_util.quote_one_char\'/4", (MR_String) "invalid Unicode code point");
                                      return;
                                    }
                                  }
                              }
                              break;
                            case (MR_Integer) 2:
                              {
                                backend_libs__c_util__RevQuotedCharStr_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_17, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__Char_8));
                                MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_17, 1) = ((MR_Box) (backend_libs__c_util__V_18_18));
                              }
                              break;
                            case (MR_Integer) 1:
                              {
                                backend_libs__c_util__RevQuotedCharStr_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_17, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__Char_8));
                                MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_17, 1) = ((MR_Box) (backend_libs__c_util__V_18_18));
                              }
                              break;
                          }
                        else
                          {
                            MR_Word backend_libs__c_util__EscapeChars_43;

                            switch (backend_libs__c_util__Lang_7) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  MR_Integer backend_libs__c_util__Int_71;

                                  {
                                    mercury__char__to_int_2_p_0(backend_libs__c_util__Char_8, &backend_libs__c_util__Int_71);
                                  }
                                  {
                                    backend_libs__c_util__octal_escape_any_int_2_p_0(backend_libs__c_util__Int_71, &backend_libs__c_util__EscapeChars_43);
                                  }
                                }
                                break;
                              case (MR_Integer) 2:
                                {
                                  MR_Integer backend_libs__c_util__Int_74;
                                  MR_String backend_libs__c_util__HexString_75;
                                  MR_String backend_libs__c_util__V_80_80;

                                  {
                                    mercury__char__to_int_2_p_0(backend_libs__c_util__Char_8, &backend_libs__c_util__Int_74);
                                  }
                                  {
                                    mercury__string__format__format_unsigned_int_component_width_noprec_5_p_0((MR_Word) &backend_libs__c_util_scalar_common_4[1], (MR_Integer) 4, (MR_Integer) 2, backend_libs__c_util__Int_74, &backend_libs__c_util__V_80_80);
                                  }
                                  {
                                    backend_libs__c_util__HexString_75 = mercury__string__f_43_43_2_f_0((MR_String) "\\u", backend_libs__c_util__V_80_80);
                                  }
                                  {
                                    mercury__string__to_char_list_2_p_0(backend_libs__c_util__HexString_75, &backend_libs__c_util__EscapeChars_43);
                                  }
                                }
                                break;
                              case (MR_Integer) 1:
                                {
                                  MR_Integer backend_libs__c_util__Int_92;

                                  {
                                    mercury__char__to_int_2_p_0(backend_libs__c_util__Char_8, &backend_libs__c_util__Int_92);
                                  }
                                  {
                                    backend_libs__c_util__octal_escape_any_int_2_p_0(backend_libs__c_util__Int_92, &backend_libs__c_util__EscapeChars_43);
                                  }
                                }
                                break;
                            }
                            {
                              mercury__list__reverse_prepend_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, backend_libs__c_util__EscapeChars_43, backend_libs__c_util__V_18_18, &backend_libs__c_util__RevQuotedCharStr_17);
                            }
                          }
                      }
                  }
              }
          }
      }
    {
      mercury__string__from_rev_char_list_2_p_0(backend_libs__c_util__RevQuotedCharStr_17, &backend_libs__c_util__EscapedCharStr_10);
    }
    {
      mercury__io__write_string_4_p_0(backend_libs__c_util__Stream_6, backend_libs__c_util__EscapedCharStr_10);
    }
  }
}

static void MR_CALL 
backend_libs__c_util__do_output_quoted_string_lang_6_p_0(
  MR_Word backend_libs__c_util__Stream_7,
  MR_Word backend_libs__c_util__Lang_8,
  MR_String backend_libs__c_util__Str_9,
  MR_Integer backend_libs__c_util__Cur_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool backend_libs__c_util__succeeded;
        MR_Integer backend_libs__c_util__Next_12;
        MR_Char backend_libs__c_util__Char_13;

        {
          backend_libs__c_util__succeeded = mercury__string__unsafe_index_next_4_p_0(backend_libs__c_util__Str_9, backend_libs__c_util__Cur_10, &backend_libs__c_util__Next_12, &backend_libs__c_util__Char_13);
        }
        if (backend_libs__c_util__succeeded)
          {
            {
              backend_libs__c_util__output_quoted_char_lang_5_p_3(backend_libs__c_util__Stream_7, backend_libs__c_util__Lang_8, backend_libs__c_util__Char_13);
            }
            /* direct tailcall eliminated */
            {
              MR_Integer backend_libs__c_util__Cur__tmp_copy_10 = backend_libs__c_util__Next_12;

              backend_libs__c_util__Cur_10 = backend_libs__c_util__Cur__tmp_copy_10;
            }
            continue;
          }
        else
          {
          }
      }
      break;
    }
}

static void MR_CALL 
backend_libs__c_util__can_print_directly_4_p_0(
  MR_String backend_libs__c_util__Str_1,
  MR_Word * backend_libs__c_util__CanPrintDirectly_2)
{
  {
    MR_bool backend_libs__c_util__succeeded;

{
#define MR_PROC_LABEL backend_libs__c_util__can_print_directly_4_p_0

	MR_String Str;
	MR_Word CanPrintDirectly;

	Str =  backend_libs__c_util__Str_1 ;
		{
{
    static  MR_String   last_string;
    static  MR_bool     last_can_print_directly;
    MR_bool             can_print_directly;
    const char          *s;
    int                 len;

    /* We cache the result of the last decision. */
    if (Str == last_string) {
        CanPrintDirectly = last_can_print_directly;
    } else {
        can_print_directly = MR_TRUE;

        for (s = Str; *s != '\0'; s++) {
            if (! (isalnum((int)*s) || *s == '_' || *s == '/' || *s == '.')) {
                can_print_directly = MR_FALSE;
                break;
            }
        }

        len = s - Str;
        if (len >= 512) {
            can_print_directly = MR_FALSE;
        }

        CanPrintDirectly = can_print_directly;

        last_string = Str;
        last_can_print_directly = CanPrintDirectly;
    }
}

		;}
#undef MR_PROC_LABEL
	 *backend_libs__c_util__CanPrintDirectly_2  = CanPrintDirectly;
}
  }
}

MR_bool MR_CALL 
backend_libs__c_util__is_valid_c_identifier_1_p_0(
  MR_String backend_libs__c_util__S_2)
{
  {
    MR_bool backend_libs__c_util__succeeded;
    MR_Char backend_libs__c_util__Start_3;

    {
      backend_libs__c_util__succeeded = mercury__string__index_3_p_0(backend_libs__c_util__S_2, (MR_Integer) 0, &backend_libs__c_util__Start_3);
    }
    if (backend_libs__c_util__succeeded)
      {
        {
          backend_libs__c_util__succeeded = mercury__char__is_alpha_or_underscore_1_p_0(backend_libs__c_util__Start_3);
        }
        if (backend_libs__c_util__succeeded)
          {
            backend_libs__c_util__succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(backend_libs__c_util__S_2);
          }
      }
    return backend_libs__c_util__succeeded;
  }
}

void MR_CALL 
backend_libs__c_util__output_pragma_pack_pop_2_p_0(void)
{
  {
    MR_bool backend_libs__c_util__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_MSVC\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "#pragma pack(pop)\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "#endif\n");
    }
  }
}

void MR_CALL 
backend_libs__c_util__output_pragma_pack_push_2_p_0(void)
{
  {
    MR_bool backend_libs__c_util__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "\n#ifdef MR_MSVC\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "#pragma pack(push, MR_BYTES_PER_WORD)\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "#endif\n");
    }
  }
}

void MR_CALL 
backend_libs__c_util__output_c_file_intro_and_grade_6_p_0(
  MR_Word backend_libs__c_util__Globals_7,
  MR_String backend_libs__c_util__SourceFileName_8,
  MR_String backend_libs__c_util__Version_9,
  MR_String backend_libs__c_util__Fullarch_10)
{
  {
    MR_bool backend_libs__c_util__succeeded;
    MR_Integer backend_libs__c_util__NumTagBits_12;
    MR_String backend_libs__c_util__NumTagBitsStr_13;
    MR_Word backend_libs__c_util__UnboxedFloat_14;
    MR_String backend_libs__c_util__UnboxedFloatStr_15;
    MR_Word backend_libs__c_util__PregeneratedDist_16;
    MR_String backend_libs__c_util__PregeneratedDistStr_17;
    MR_Word backend_libs__c_util__HighLevelCode_18;
    MR_String backend_libs__c_util__HighLevelCodeStr_19;
    MR_Word backend_libs__c_util__V_26_26;
    MR_Word backend_libs__c_util__V_29_29;
    MR_Word backend_libs__c_util__V_31_31;
    MR_Word backend_libs__c_util__V_32_32;
    MR_Word backend_libs__c_util__V_34_34;
    MR_Word backend_libs__c_util__V_36_36;
    MR_Word backend_libs__c_util__V_38_38;
    MR_Word backend_libs__c_util__V_39_39;
    MR_Word backend_libs__c_util__V_41_41;
    MR_Word backend_libs__c_util__V_43_43;
    MR_Word backend_libs__c_util__V_44_44;
    MR_Word backend_libs__c_util__V_46_46;
    MR_Word backend_libs__c_util__V_48_48;
    MR_Word backend_libs__c_util__V_50_50;
    MR_Word backend_libs__c_util__V_52_52;
    MR_Word backend_libs__c_util__V_54_54;
    MR_Word backend_libs__c_util__V_56_56;
    MR_Word backend_libs__c_util__V_58_58;
    MR_Word backend_libs__c_util__V_59_59;
    MR_Word backend_libs__c_util__V_61_61;
    MR_Word backend_libs__c_util__V_63_63;
    MR_Word backend_libs__c_util__V_64_64;
    MR_Word backend_libs__c_util__V_66_66;
    MR_Word backend_libs__c_util__V_68_68;
    MR_Word backend_libs__c_util__V_69_69;
    MR_Word backend_libs__c_util__V_71_71;
    MR_Word backend_libs__c_util__V_73_73;

    {
      libs__globals__lookup_int_option_3_p_0(backend_libs__c_util__Globals_7, (MR_Integer) 244, &backend_libs__c_util__NumTagBits_12);
    }
    {
      mercury__string__int_to_string_2_p_0(backend_libs__c_util__NumTagBits_12, &backend_libs__c_util__NumTagBitsStr_13);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__c_util__Globals_7, (MR_Integer) 250, &backend_libs__c_util__UnboxedFloat_14);
    }
    switch (backend_libs__c_util__UnboxedFloat_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__c_util__UnboxedFloatStr_15 = (MR_String) "no";
        break;
      case (MR_Integer) 1:
        backend_libs__c_util__UnboxedFloatStr_15 = (MR_String) "yes";
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__c_util__Globals_7, (MR_Integer) 230, &backend_libs__c_util__PregeneratedDist_16);
    }
    switch (backend_libs__c_util__PregeneratedDist_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__c_util__PregeneratedDistStr_17 = (MR_String) "no";
        break;
      case (MR_Integer) 1:
        backend_libs__c_util__PregeneratedDistStr_17 = (MR_String) "yes";
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__c_util__Globals_7, (MR_Integer) 260, &backend_libs__c_util__HighLevelCode_18);
    }
    switch (backend_libs__c_util__HighLevelCode_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__c_util__HighLevelCodeStr_19 = (MR_String) "no";
        break;
      case (MR_Integer) 1:
        backend_libs__c_util__HighLevelCodeStr_19 = (MR_String) "yes";
        break;
    }
    {
      backend_libs__c_util__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_73_73, 0) = ((MR_Box) (backend_libs__c_util__HighLevelCodeStr_19));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[6])));
    }
    {
      backend_libs__c_util__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_71_71, 0) = ((MR_Box) ((MR_String) "** HIGHLEVEL_CODE="));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_71_71, 1) = ((MR_Box) (backend_libs__c_util__V_73_73));
    }
    {
      backend_libs__c_util__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_69_69, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_69_69, 1) = ((MR_Box) (backend_libs__c_util__V_71_71));
    }
    {
      backend_libs__c_util__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_68_68, 0) = ((MR_Box) (backend_libs__c_util__PregeneratedDistStr_17));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_68_68, 1) = ((MR_Box) (backend_libs__c_util__V_69_69));
    }
    {
      backend_libs__c_util__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_66_66, 0) = ((MR_Box) ((MR_String) "** PREGENERATED_DIST="));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_66_66, 1) = ((MR_Box) (backend_libs__c_util__V_68_68));
    }
    {
      backend_libs__c_util__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_64_64, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_64_64, 1) = ((MR_Box) (backend_libs__c_util__V_66_66));
    }
    {
      backend_libs__c_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_63_63, 0) = ((MR_Box) (backend_libs__c_util__UnboxedFloatStr_15));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_63_63, 1) = ((MR_Box) (backend_libs__c_util__V_64_64));
    }
    {
      backend_libs__c_util__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_61_61, 0) = ((MR_Box) ((MR_String) "** UNBOXED_FLOAT="));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_61_61, 1) = ((MR_Box) (backend_libs__c_util__V_63_63));
    }
    {
      backend_libs__c_util__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_59_59, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_59_59, 1) = ((MR_Box) (backend_libs__c_util__V_61_61));
    }
    {
      backend_libs__c_util__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_58_58, 0) = ((MR_Box) (backend_libs__c_util__NumTagBitsStr_13));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_58_58, 1) = ((MR_Box) (backend_libs__c_util__V_59_59));
    }
    {
      backend_libs__c_util__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_56_56, 0) = ((MR_Box) ((MR_String) "** TAG_BITS="));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_56_56, 1) = ((MR_Box) (backend_libs__c_util__V_58_58));
    }
    {
      backend_libs__c_util__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_54_54, 0) = ((MR_Box) ((MR_String) "**\n"));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_54_54, 1) = ((MR_Box) (backend_libs__c_util__V_56_56));
    }
    {
      backend_libs__c_util__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_52_52, 0) = ((MR_Box) ((MR_String) "** the generation of this C file were\n"));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_52_52, 1) = ((MR_Box) (backend_libs__c_util__V_54_54));
    }
    {
      backend_libs__c_util__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_50_50, 0) = ((MR_Box) ((MR_String) "** The autoconfigured grade settings governing\n"));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_50_50, 1) = ((MR_Box) (backend_libs__c_util__V_52_52));
    }
    {
      backend_libs__c_util__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_48_48, 0) = ((MR_Box) ((MR_String) "**\n"));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_48_48, 1) = ((MR_Box) (backend_libs__c_util__V_50_50));
    }
    {
      backend_libs__c_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_46_46, 0) = ((MR_Box) ((MR_String) "** Do not edit.\n"));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_46_46, 1) = ((MR_Box) (backend_libs__c_util__V_48_48));
    }
    {
      backend_libs__c_util__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_44_44, 0) = ((MR_Box) ((MR_String) ".\n"));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_44_44, 1) = ((MR_Box) (backend_libs__c_util__V_46_46));
    }
    {
      backend_libs__c_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_43_43, 0) = ((MR_Box) (backend_libs__c_util__Fullarch_10));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_43_43, 1) = ((MR_Box) (backend_libs__c_util__V_44_44));
    }
    {
      backend_libs__c_util__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_41_41, 0) = ((MR_Box) ((MR_String) "** configured for "));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_41_41, 1) = ((MR_Box) (backend_libs__c_util__V_43_43));
    }
    {
      backend_libs__c_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_39_39, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_39_39, 1) = ((MR_Box) (backend_libs__c_util__V_41_41));
    }
    {
      backend_libs__c_util__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_38_38, 0) = ((MR_Box) (backend_libs__c_util__Version_9));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_38_38, 1) = ((MR_Box) (backend_libs__c_util__V_39_39));
    }
    {
      backend_libs__c_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_36_36, 0) = ((MR_Box) ((MR_String) "** version "));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_36_36, 1) = ((MR_Box) (backend_libs__c_util__V_38_38));
    }
    {
      backend_libs__c_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_34_34, 0) = ((MR_Box) ((MR_String) "** by the Mercury compiler,\n"));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_34_34, 1) = ((MR_Box) (backend_libs__c_util__V_36_36));
    }
    {
      backend_libs__c_util__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_32_32, 0) = ((MR_Box) ((MR_String) "\'\n"));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_32_32, 1) = ((MR_Box) (backend_libs__c_util__V_34_34));
    }
    {
      backend_libs__c_util__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_31_31, 0) = ((MR_Box) (backend_libs__c_util__SourceFileName_8));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_31_31, 1) = ((MR_Box) (backend_libs__c_util__V_32_32));
    }
    {
      backend_libs__c_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_29_29, 0) = ((MR_Box) ((MR_String) "** Automatically generated from \140"));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_29_29, 1) = ((MR_Box) (backend_libs__c_util__V_31_31));
    }
    {
      backend_libs__c_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_26_26, 0) = ((MR_Box) ((MR_String) "/*\n"));
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_26_26, 1) = ((MR_Box) (backend_libs__c_util__V_29_29));
    }
    {
      mercury__io__write_strings_3_p_0(backend_libs__c_util__V_26_26);
    }
  }
}

void MR_CALL 
backend_libs__c_util__binop_category_string_3_p_0(
  MR_Word backend_libs__c_util__HeadVar__1_1,
  MR_Word * backend_libs__c_util__HeadVar__2_2,
  MR_String * backend_libs__c_util__HeadVar__3_3)
{
  {
    MR_bool backend_libs__c_util__succeeded;

    switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(backend_libs__c_util__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "+";
            }
            break;
          case (MR_Integer) 1:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "-";
            }
            break;
          case (MR_Integer) 2:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "*";
            }
            break;
          case (MR_Integer) 3:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "/";
            }
            break;
          case (MR_Integer) 4:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "%";
            }
            break;
          case (MR_Integer) 5:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<<";
            }
            break;
          case (MR_Integer) 6:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">>";
            }
            break;
          case (MR_Integer) 7:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "&";
            }
            break;
          case (MR_Integer) 8:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "|";
            }
            break;
          case (MR_Integer) 9:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "^";
            }
            break;
          case (MR_Integer) 10:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "&&";
            }
            break;
          case (MR_Integer) 11:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "||";
            }
            break;
          case (MR_Integer) 12:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "==";
            }
            break;
          case (MR_Integer) 13:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "!=";
            }
            break;
          case (MR_Integer) 14:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "MR_body";
            }
            break;
          case (MR_Integer) 15:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "STRING_UNSAFE_INDEX_CODE_UNIT";
            }
            break;
          case (MR_Integer) 16:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "==";
            }
            break;
          case (MR_Integer) 17:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "!=";
            }
            break;
          case (MR_Integer) 18:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<";
            }
            break;
          case (MR_Integer) 19:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">";
            }
            break;
          case (MR_Integer) 20:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<=";
            }
            break;
          case (MR_Integer) 21:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">=";
            }
            break;
          case (MR_Integer) 22:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "MR_strcmp";
            }
            break;
          case (MR_Integer) 23:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<";
            }
            break;
          case (MR_Integer) 24:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">";
            }
            break;
          case (MR_Integer) 25:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<=";
            }
            break;
          case (MR_Integer) 26:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">=";
            }
            break;
          case (MR_Integer) 27:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<=";
            }
            break;
          case (MR_Integer) 28:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "==";
            }
            break;
          case (MR_Integer) 29:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "!=";
            }
            break;
          case (MR_Integer) 30:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<";
            }
            break;
          case (MR_Integer) 31:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">";
            }
            break;
          case (MR_Integer) 32:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<=";
            }
            break;
          case (MR_Integer) 33:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">=";
            }
            break;
          case (MR_Integer) 34:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "+";
            }
            break;
          case (MR_Integer) 35:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "-";
            }
            break;
          case (MR_Integer) 36:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "*";
            }
            break;
          case (MR_Integer) 37:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "/";
            }
            break;
          case (MR_Integer) 38:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "%";
            }
            break;
          case (MR_Integer) 39:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "&";
            }
            break;
          case (MR_Integer) 40:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "|";
            }
            break;
          case (MR_Integer) 41:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "^";
            }
            break;
          case (MR_Integer) 42:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "+";
            }
            break;
          case (MR_Integer) 43:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "-";
            }
            break;
          case (MR_Integer) 44:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "*";
            }
            break;
          case (MR_Integer) 45:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "/";
            }
            break;
          case (MR_Integer) 46:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "==";
            }
            break;
          case (MR_Integer) 47:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "!=";
            }
            break;
          case (MR_Integer) 48:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<";
            }
            break;
          case (MR_Integer) 49:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">";
            }
            break;
          case (MR_Integer) 50:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<=";
            }
            break;
          case (MR_Integer) 51:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">=";
            }
            break;
          case (MR_Integer) 52:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "MR_float_word_bits";
            }
            break;
          case (MR_Integer) 53:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "MR_float_from_dword";
            }
            break;
          case (MR_Integer) 54:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "==";
            }
            break;
          case (MR_Integer) 55:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "COMPOUND_EQ";
            }
            break;
          case (MR_Integer) 56:
            {
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "COMPOUND_LT";
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *backend_libs__c_util__HeadVar__3_3 = (MR_String) "ARRAY_INDEX";
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer backend_libs__c_util__N_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__c_util__HeadVar__1_1, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *backend_libs__c_util__HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__c_util__N_5));
          }
          *backend_libs__c_util__HeadVar__3_3 = (MR_String) "MR_offset_streq";
        }
        break;
    }
  }
}

void MR_CALL 
backend_libs__c_util__unary_prefix_op_2_p_0(
  MR_Word backend_libs__c_util__HeadVar__1_1,
  MR_String * backend_libs__c_util__HeadVar__2_2)
{
  {
    MR_bool backend_libs__c_util__succeeded;

    *backend_libs__c_util__HeadVar__2_2 = ((&backend_libs__c_util_vector_common_5[0 + backend_libs__c_util__HeadVar__1_1]))->backend_libs__c_util__vector_common_type_5_0__vct_5_f_0;
  }
}

void MR_CALL 
backend_libs__c_util__output_float_literal_cur_stream_3_p_0(
  MR_Float backend_libs__c_util__N_4)
{
  {
    MR_bool backend_libs__c_util__succeeded;
    MR_Word backend_libs__c_util__Stream_6;
    MR_String backend_libs__c_util__V_16_16;

    {
      mercury__io__output_stream_3_p_0(&backend_libs__c_util__Stream_6);
    }
    {
      backend_libs__c_util__V_16_16 = backend_libs__c_util__make_float_literal_1_f_0(backend_libs__c_util__N_4);
    }
    {
      mercury__io__write_string_4_p_0(backend_libs__c_util__Stream_6, backend_libs__c_util__V_16_16);
    }
  }
}

void MR_CALL 
backend_libs__c_util__output_float_literal_4_p_0(
  MR_Word backend_libs__c_util__Stream_5,
  MR_Float backend_libs__c_util__Float_6)
{
  {
    MR_bool backend_libs__c_util__succeeded;
    MR_String backend_libs__c_util__V_10_10;

    {
      backend_libs__c_util__V_10_10 = backend_libs__c_util__make_float_literal_1_f_0(backend_libs__c_util__Float_6);
    }
    {
      mercury__io__write_string_4_p_0(backend_libs__c_util__Stream_5, backend_libs__c_util__V_10_10);
    }
  }
}

MR_String MR_CALL 
backend_libs__c_util__make_float_literal_1_f_0(
  MR_Float backend_libs__c_util__Float_3)
{
  {
    MR_bool backend_libs__c_util__succeeded;
    MR_String backend_libs__c_util__HeadVar__2_2;

    {
      mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) &backend_libs__c_util_scalar_common_4[0], (MR_Integer) 17, (MR_Integer) 4, backend_libs__c_util__Float_3, &backend_libs__c_util__HeadVar__2_2);
    }
    return backend_libs__c_util__HeadVar__2_2;
  }
}

void MR_CALL 
backend_libs__c_util__output_uint_expr_cur_stream_3_p_0(
  MR_Unsigned backend_libs__c_util__N_4)
{
  {
    MR_bool backend_libs__c_util__succeeded;
    MR_Word backend_libs__c_util__Stream_6;

    {
      mercury__io__output_stream_3_p_0(&backend_libs__c_util__Stream_6);
    }
    {
      mercury__io__write_uint_4_p_0(backend_libs__c_util__Stream_6, backend_libs__c_util__N_4);
    }
    {
      mercury__io__write_string_4_p_0(backend_libs__c_util__Stream_6, (MR_String) "U");
    }
  }
}

void MR_CALL 
backend_libs__c_util__output_uint_expr_4_p_0(
  MR_Word backend_libs__c_util__Stream_5,
  MR_Unsigned backend_libs__c_util__N_6)
{
  {
    MR_bool backend_libs__c_util__succeeded;

    {
      mercury__io__write_uint_4_p_0(backend_libs__c_util__Stream_5, backend_libs__c_util__N_6);
    }
    {
      mercury__io__write_string_4_p_0(backend_libs__c_util__Stream_5, (MR_String) "U");
    }
  }
}

void MR_CALL 
backend_libs__c_util__output_int_expr_cur_stream_3_p_0(
  MR_Integer backend_libs__c_util__N_4)
{
  {
    MR_bool backend_libs__c_util__succeeded;
    MR_Word backend_libs__c_util__Stream_6;

    {
      mercury__io__output_stream_3_p_0(&backend_libs__c_util__Stream_6);
    }
    {
      backend_libs__c_util__output_int_expr_4_p_0(backend_libs__c_util__Stream_6, backend_libs__c_util__N_4);
    }
  }
}

void MR_CALL 
backend_libs__c_util__output_int_expr_4_p_0(
  MR_Word backend_libs__c_util__Stream_5,
  MR_Integer backend_libs__c_util__N_6)
{
  {
    MR_bool backend_libs__c_util__succeeded = (backend_libs__c_util__N_6 >= (MR_Integer) -2147483647);

    if (backend_libs__c_util__succeeded)
      {
        {
          mercury__io__write_string_4_p_0(backend_libs__c_util__Stream_5, (MR_String) "(MR_Integer) ");
        }
        {
          mercury__io__write_int_4_p_0(backend_libs__c_util__Stream_5, backend_libs__c_util__N_6);
        }
      }
    else
      {
        MR_String backend_libs__c_util__V_14_14;
        MR_Word backend_libs__c_util__V_15_15;

        {
          backend_libs__c_util__V_15_15 = mercury__integer__integer_1_f_0(backend_libs__c_util__N_6);
        }
        {
          backend_libs__c_util__V_14_14 = mercury__integer__to_string_1_f_0(backend_libs__c_util__V_15_15);
        }
        backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__V_14_14, (MR_String) "-2147483648") == 0);
        if (backend_libs__c_util__succeeded)
          {
            {
              mercury__io__write_string_4_p_0(backend_libs__c_util__Stream_5, (MR_String) "(-(MR_Integer) 2147483647 - 1)");
            }
          }
        else
          {
            MR_String backend_libs__c_util__V_18_18;
            MR_Word backend_libs__c_util__V_19_19;

            {
              backend_libs__c_util__V_19_19 = mercury__integer__integer_1_f_0(backend_libs__c_util__N_6);
            }
            {
              backend_libs__c_util__V_18_18 = mercury__integer__to_string_1_f_0(backend_libs__c_util__V_19_19);
            }
            backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__V_18_18, (MR_String) "-9223372036854775808") == 0);
            if (backend_libs__c_util__succeeded)
              {
                {
                  mercury__io__write_string_4_p_0(backend_libs__c_util__Stream_5, (MR_String) "(-(MR_Integer) 9223372036854775807 - 1)");
                }
              }
            else
              {
                MR_Integer backend_libs__c_util__V_36_36;

                {
                  mercury__int__min_int_1_p_0(&backend_libs__c_util__V_36_36);
                }
                backend_libs__c_util__succeeded = (backend_libs__c_util__N_6 == backend_libs__c_util__V_36_36);
                if (backend_libs__c_util__succeeded)
                  {
                    MR_Integer backend_libs__c_util__V_24_24;
                    MR_Integer backend_libs__c_util__V_26_26;

                    {
                      mercury__io__write_string_4_p_0(backend_libs__c_util__Stream_5, (MR_String) "(-(MR_Integer) ");
                    }
                    backend_libs__c_util__V_26_26 = (backend_libs__c_util__N_6 + (MR_Integer) 1);
                    backend_libs__c_util__V_24_24 = ((MR_Integer) 0 - backend_libs__c_util__V_26_26);
                    {
                      mercury__io__write_int_4_p_0(backend_libs__c_util__Stream_5, backend_libs__c_util__V_24_24);
                    }
                    {
                      mercury__io__write_string_4_p_0(backend_libs__c_util__Stream_5, (MR_String) "- 1)");
                    }
                  }
                else
                  {
                    MR_Integer backend_libs__c_util__V_32_32;

                    {
                      mercury__io__write_string_4_p_0(backend_libs__c_util__Stream_5, (MR_String) "(-(MR_Integer) ");
                    }
                    backend_libs__c_util__V_32_32 = ((MR_Integer) 0 - backend_libs__c_util__N_6);
                    {
                      mercury__io__write_int_4_p_0(backend_libs__c_util__Stream_5, backend_libs__c_util__V_32_32);
                    }
                    {
                      mercury__io__write_string_4_p_0(backend_libs__c_util__Stream_5, (MR_String) ")");
                    }
                  }
              }
          }
      }
  }
}

MR_String MR_CALL 
backend_libs__c_util__quote_char_1_f_0(
  MR_Char backend_libs__c_util__Char_3)
{
  {
    MR_bool backend_libs__c_util__succeeded;
    MR_String backend_libs__c_util__HeadVar__2_2;

    {
      backend_libs__c_util__HeadVar__2_2 = backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0(backend_libs__c_util__Char_3);
    }
    return backend_libs__c_util__HeadVar__2_2;
  }
}

static void MR_CALL 
backend_libs__c_util__quote_string_1_f_0_1(
  MR_Box backend_libs__c_util__closure_arg,
  MR_Box backend_libs__c_util__wrapper_arg_1,
  MR_Box backend_libs__c_util__wrapper_arg_2,
  MR_Box * backend_libs__c_util__wrapper_arg_3)
{
  {
    MR_Box backend_libs__c_util__closure = backend_libs__c_util__closure_arg;
    MR_Word backend_libs__c_util__conv0_RevChars_6;

    {
      backend_libs__c_util__quote_one_char_c_3_p_0(((MR_Char) (MR_Word) backend_libs__c_util__wrapper_arg_1), ((MR_Word) backend_libs__c_util__wrapper_arg_2), &backend_libs__c_util__conv0_RevChars_6);
    }
    *backend_libs__c_util__wrapper_arg_3 = ((MR_Box) (backend_libs__c_util__conv0_RevChars_6));
  }
}

MR_String MR_CALL 
backend_libs__c_util__quote_string_1_f_0(
  MR_String backend_libs__c_util__String_3)
{
  {
    MR_bool backend_libs__c_util__succeeded;
    MR_String backend_libs__c_util__QuotedString_4;
    MR_Word backend_libs__c_util__RevQuotedChars_5;
    MR_Box backend_libs__c_util__conv1_RevQuotedChars_5;

    {
      mercury__string__foldl_4_p_1((MR_Word) &backend_libs__c_util_scalar_common_1[0], (MR_Word) &backend_libs__c_util_scalar_common_3[0], backend_libs__c_util__String_3, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &backend_libs__c_util__conv1_RevQuotedChars_5);
    }
    backend_libs__c_util__RevQuotedChars_5 = ((MR_Word) backend_libs__c_util__conv1_RevQuotedChars_5);
    {
      mercury__string__from_rev_char_list_2_p_0(backend_libs__c_util__RevQuotedChars_5, &backend_libs__c_util__QuotedString_4);
    }
    return backend_libs__c_util__QuotedString_4;
  }
}

void MR_CALL 
backend_libs__c_util__output_quoted_char_cur_stream_3_p_0(
  MR_Char backend_libs__c_util__Char_4)
{
  {
    MR_bool backend_libs__c_util__succeeded;
    MR_Word backend_libs__c_util__Stream_6;
    MR_String backend_libs__c_util__EscapedCharStr_24;

    {
      mercury__io__output_stream_3_p_0(&backend_libs__c_util__Stream_6);
    }
    {
      backend_libs__c_util__EscapedCharStr_24 = backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0(backend_libs__c_util__Char_4);
    }
    {
      mercury__io__write_string_4_p_0(backend_libs__c_util__Stream_6, backend_libs__c_util__EscapedCharStr_24);
    }
  }
}

void MR_CALL 
backend_libs__c_util__output_quoted_char_4_p_0(
  MR_Word backend_libs__c_util__Stream_5,
  MR_Char backend_libs__c_util__Char_6)
{
  {
    MR_bool backend_libs__c_util__succeeded;
    MR_String backend_libs__c_util__EscapedCharStr_18;

    {
      backend_libs__c_util__EscapedCharStr_18 = backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0(backend_libs__c_util__Char_6);
    }
    {
      mercury__io__write_string_4_p_0(backend_libs__c_util__Stream_5, backend_libs__c_util__EscapedCharStr_18);
    }
  }
}

void MR_CALL 
backend_libs__c_util__output_quoted_multi_string_lang_cur_stream_4_p_0(
  MR_Word backend_libs__c_util__Lang_5,
  MR_Word backend_libs__c_util__S_6)
{
  {
    MR_bool backend_libs__c_util__succeeded;
    MR_Word backend_libs__c_util__Stream_8;

    {
      mercury__io__output_stream_3_p_0(&backend_libs__c_util__Stream_8);
    }
    {
      backend_libs__c_util__output_quoted_multi_string_lang_5_p_0(backend_libs__c_util__Stream_8, backend_libs__c_util__Lang_5, backend_libs__c_util__S_6);
    }
  }
}

void MR_CALL 
backend_libs__c_util__output_quoted_multi_string_lang_5_p_0(
  MR_Word backend_libs__c_util__HeadVar__1_1,
  MR_Word backend_libs__c_util__HeadVar__2_2,
  MR_Word backend_libs__c_util__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool backend_libs__c_util__succeeded;

        if ((backend_libs__c_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_String backend_libs__c_util__Str_13 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__c_util__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word backend_libs__c_util__Strs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__c_util__HeadVar__3_3, (MR_Integer) 1)));
            MR_Char backend_libs__c_util__V_19_19;

            switch (backend_libs__c_util__HeadVar__2_2) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String backend_libs__c_util__Left_29;
                  MR_String backend_libs__c_util__Right_30;

                  {
                    mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Str_13, (MR_Integer) 160, &backend_libs__c_util__Left_29, &backend_libs__c_util__Right_30);
                  }
                  {
                    backend_libs__c_util__do_output_quoted_string_lang_6_p_0(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__HeadVar__2_2, backend_libs__c_util__Left_29, (MR_Integer) 0);
                  }
                  backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_30, (MR_String) "") == 0);
                  if (backend_libs__c_util__succeeded)
                    {
                    }
                  else
                    {
                      MR_String backend_libs__c_util__Left_45;
                      MR_String backend_libs__c_util__Right_46;

                      {
                        mercury__io__write_string_3_p_0((MR_String) "\" \"");
                      }
                      {
                        mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Right_30, (MR_Integer) 160, &backend_libs__c_util__Left_45, &backend_libs__c_util__Right_46);
                      }
                      {
                        backend_libs__c_util__do_output_quoted_string_lang_6_p_0(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__HeadVar__2_2, backend_libs__c_util__Left_45, (MR_Integer) 0);
                      }
                      backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_46, (MR_String) "") == 0);
                      if (backend_libs__c_util__succeeded)
                        {
                        }
                      else
                        {
                          MR_String backend_libs__c_util__Left_61;
                          MR_String backend_libs__c_util__Right_62;

                          {
                            mercury__io__write_string_3_p_0((MR_String) "\" \"");
                          }
                          {
                            mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Right_46, (MR_Integer) 160, &backend_libs__c_util__Left_61, &backend_libs__c_util__Right_62);
                          }
                          {
                            backend_libs__c_util__do_output_quoted_string_lang_6_p_0(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__HeadVar__2_2, backend_libs__c_util__Left_61, (MR_Integer) 0);
                          }
                          backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_62, (MR_String) "") == 0);
                          if (backend_libs__c_util__succeeded)
                            {
                            }
                          else
                            {
                              {
                                mercury__io__write_string_3_p_0((MR_String) "\" \"");
                              }
                              {
                                backend_libs__c_util__output_quoted_string_lang_5_p_0(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__HeadVar__2_2, backend_libs__c_util__Right_62);
                              }
                            }
                        }
                    }
                }
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 1:
                {
                  {
                    backend_libs__c_util__do_output_quoted_string_lang_6_p_0(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__HeadVar__2_2, backend_libs__c_util__Str_13, (MR_Integer) 0);
                  }
                }
                break;
            }
            {
              backend_libs__c_util__V_19_19 = mercury__char__det_from_int_1_f_0((MR_Integer) 0);
            }
            {
              backend_libs__c_util__output_quoted_char_lang_5_p_3(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__HeadVar__2_2, backend_libs__c_util__V_19_19);
            }
            /* direct tailcall eliminated */
            {
              MR_Word backend_libs__c_util__HeadVar__3__tmp_copy_3 = backend_libs__c_util__Strs_14;

              backend_libs__c_util__HeadVar__3_3 = backend_libs__c_util__HeadVar__3__tmp_copy_3;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
backend_libs__c_util__output_quoted_multi_string_cur_stream_3_p_0(
  MR_Word backend_libs__c_util__Str_4)
{
  {
    MR_bool backend_libs__c_util__succeeded;
    MR_Word backend_libs__c_util__Stream_6;

    {
      mercury__io__output_stream_3_p_0(&backend_libs__c_util__Stream_6);
    }
    {
      backend_libs__c_util__output_quoted_multi_string_lang_5_p_0(backend_libs__c_util__Stream_6, (MR_Integer) 0, backend_libs__c_util__Str_4);
    }
  }
}

void MR_CALL 
backend_libs__c_util__output_quoted_multi_string_4_p_0(
  MR_Word backend_libs__c_util__Stream_5,
  MR_Word backend_libs__c_util__Strs_6)
{
  {
    MR_bool backend_libs__c_util__succeeded;

    {
      backend_libs__c_util__output_quoted_multi_string_lang_5_p_0(backend_libs__c_util__Stream_5, (MR_Integer) 0, backend_libs__c_util__Strs_6);
    }
  }
}

void MR_CALL 
backend_libs__c_util__output_quoted_string_lang_cur_stream_4_p_3(
  MR_Word backend_libs__c_util__Lang_5,
  MR_String backend_libs__c_util__S_6)
{
  {
    MR_bool backend_libs__c_util__succeeded;
    MR_Word backend_libs__c_util__Stream_8;

    {
      mercury__io__output_stream_3_p_0(&backend_libs__c_util__Stream_8);
    }
    switch (backend_libs__c_util__Lang_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String backend_libs__c_util__Left_19;
          MR_String backend_libs__c_util__Right_20;

          {
            mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__S_6, (MR_Integer) 160, &backend_libs__c_util__Left_19, &backend_libs__c_util__Right_20);
          }
          {
            backend_libs__c_util__do_output_quoted_string_lang_6_p_0(backend_libs__c_util__Stream_8, backend_libs__c_util__Lang_5, backend_libs__c_util__Left_19, (MR_Integer) 0);
          }
          backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_20, (MR_String) "") == 0);
          if (backend_libs__c_util__succeeded)
            {
            }
          else
            {
              MR_String backend_libs__c_util__Left_35;
              MR_String backend_libs__c_util__Right_36;

              {
                mercury__io__write_string_3_p_0((MR_String) "\" \"");
              }
              {
                mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Right_20, (MR_Integer) 160, &backend_libs__c_util__Left_35, &backend_libs__c_util__Right_36);
              }
              {
                backend_libs__c_util__do_output_quoted_string_lang_6_p_0(backend_libs__c_util__Stream_8, backend_libs__c_util__Lang_5, backend_libs__c_util__Left_35, (MR_Integer) 0);
              }
              backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_36, (MR_String) "") == 0);
              if (backend_libs__c_util__succeeded)
                {
                }
              else
                {
                  MR_String backend_libs__c_util__Left_51;
                  MR_String backend_libs__c_util__Right_52;

                  {
                    mercury__io__write_string_3_p_0((MR_String) "\" \"");
                  }
                  {
                    mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Right_36, (MR_Integer) 160, &backend_libs__c_util__Left_51, &backend_libs__c_util__Right_52);
                  }
                  {
                    backend_libs__c_util__do_output_quoted_string_lang_6_p_0(backend_libs__c_util__Stream_8, backend_libs__c_util__Lang_5, backend_libs__c_util__Left_51, (MR_Integer) 0);
                  }
                  backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_52, (MR_String) "") == 0);
                  if (backend_libs__c_util__succeeded)
                    {
                    }
                  else
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "\" \"");
                      }
                      {
                        backend_libs__c_util__output_quoted_string_lang_5_p_0(backend_libs__c_util__Stream_8, backend_libs__c_util__Lang_5, backend_libs__c_util__Right_52);
                      }
                    }
                }
            }
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          {
            backend_libs__c_util__do_output_quoted_string_lang_6_p_0(backend_libs__c_util__Stream_8, backend_libs__c_util__Lang_5, backend_libs__c_util__S_6, (MR_Integer) 0);
          }
        }
        break;
    }
  }
}

void MR_CALL 
backend_libs__c_util__output_quoted_string_lang_cur_stream_4_p_2(
  MR_Word backend_libs__c_util__Lang_5,
  MR_String backend_libs__c_util__S_6)
{
  {
    MR_bool backend_libs__c_util__succeeded;
    MR_Word backend_libs__c_util__Stream_8;

    {
      mercury__io__output_stream_3_p_0(&backend_libs__c_util__Stream_8);
    }
    {
      backend_libs__c_util__do_output_quoted_string_lang_6_p_0(backend_libs__c_util__Stream_8, backend_libs__c_util__Lang_5, backend_libs__c_util__S_6, (MR_Integer) 0);
    }
  }
}

void MR_CALL 
backend_libs__c_util__output_quoted_string_lang_cur_stream_4_p_1(
  MR_Word backend_libs__c_util__Lang_5,
  MR_String backend_libs__c_util__S_6)
{
  {
    MR_bool backend_libs__c_util__succeeded;
    MR_Word backend_libs__c_util__Stream_8;

    {
      mercury__io__output_stream_3_p_0(&backend_libs__c_util__Stream_8);
    }
    {
      backend_libs__c_util__do_output_quoted_string_lang_6_p_0(backend_libs__c_util__Stream_8, backend_libs__c_util__Lang_5, backend_libs__c_util__S_6, (MR_Integer) 0);
    }
  }
}

void MR_CALL 
backend_libs__c_util__output_quoted_string_lang_cur_stream_4_p_0(
  MR_Word backend_libs__c_util__Lang_5,
  MR_String backend_libs__c_util__S_6)
{
  {
    MR_bool backend_libs__c_util__succeeded;
    MR_Word backend_libs__c_util__Stream_8;
    MR_String backend_libs__c_util__Left_19;
    MR_String backend_libs__c_util__Right_20;

    {
      mercury__io__output_stream_3_p_0(&backend_libs__c_util__Stream_8);
    }
    {
      mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__S_6, (MR_Integer) 160, &backend_libs__c_util__Left_19, &backend_libs__c_util__Right_20);
    }
    {
      backend_libs__c_util__do_output_quoted_string_lang_6_p_0(backend_libs__c_util__Stream_8, backend_libs__c_util__Lang_5, backend_libs__c_util__Left_19, (MR_Integer) 0);
    }
    backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_20, (MR_String) "") == 0);
    if (backend_libs__c_util__succeeded)
      {
      }
    else
      {
        MR_String backend_libs__c_util__Left_35;
        MR_String backend_libs__c_util__Right_36;

        {
          mercury__io__write_string_3_p_0((MR_String) "\" \"");
        }
        {
          mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Right_20, (MR_Integer) 160, &backend_libs__c_util__Left_35, &backend_libs__c_util__Right_36);
        }
        {
          backend_libs__c_util__do_output_quoted_string_lang_6_p_0(backend_libs__c_util__Stream_8, backend_libs__c_util__Lang_5, backend_libs__c_util__Left_35, (MR_Integer) 0);
        }
        backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_36, (MR_String) "") == 0);
        if (backend_libs__c_util__succeeded)
          {
          }
        else
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "\" \"");
            }
            {
              backend_libs__c_util__output_quoted_string_lang_5_p_0(backend_libs__c_util__Stream_8, backend_libs__c_util__Lang_5, backend_libs__c_util__Right_36);
            }
          }
      }
  }
}

void MR_CALL 
backend_libs__c_util__output_quoted_string_lang_5_p_3(
  MR_Word backend_libs__c_util__Stream_6,
  MR_Word backend_libs__c_util__Lang_7,
  MR_String backend_libs__c_util__Str_8)
{
  {
    MR_bool backend_libs__c_util__succeeded;

    switch (backend_libs__c_util__Lang_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String backend_libs__c_util__Left_10;
          MR_String backend_libs__c_util__Right_11;

          {
            mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Str_8, (MR_Integer) 160, &backend_libs__c_util__Left_10, &backend_libs__c_util__Right_11);
          }
          {
            backend_libs__c_util__do_output_quoted_string_lang_6_p_0(backend_libs__c_util__Stream_6, backend_libs__c_util__Lang_7, backend_libs__c_util__Left_10, (MR_Integer) 0);
          }
          backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_11, (MR_String) "") == 0);
          if (backend_libs__c_util__succeeded)
            {
            }
          else
            {
              MR_String backend_libs__c_util__Left_28;
              MR_String backend_libs__c_util__Right_29;

              {
                mercury__io__write_string_3_p_0((MR_String) "\" \"");
              }
              {
                mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Right_11, (MR_Integer) 160, &backend_libs__c_util__Left_28, &backend_libs__c_util__Right_29);
              }
              {
                backend_libs__c_util__do_output_quoted_string_lang_6_p_0(backend_libs__c_util__Stream_6, backend_libs__c_util__Lang_7, backend_libs__c_util__Left_28, (MR_Integer) 0);
              }
              backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_29, (MR_String) "") == 0);
              if (backend_libs__c_util__succeeded)
                {
                }
              else
                {
                  MR_String backend_libs__c_util__Left_44;
                  MR_String backend_libs__c_util__Right_45;

                  {
                    mercury__io__write_string_3_p_0((MR_String) "\" \"");
                  }
                  {
                    mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Right_29, (MR_Integer) 160, &backend_libs__c_util__Left_44, &backend_libs__c_util__Right_45);
                  }
                  {
                    backend_libs__c_util__do_output_quoted_string_lang_6_p_0(backend_libs__c_util__Stream_6, backend_libs__c_util__Lang_7, backend_libs__c_util__Left_44, (MR_Integer) 0);
                  }
                  backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_45, (MR_String) "") == 0);
                  if (backend_libs__c_util__succeeded)
                    {
                    }
                  else
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "\" \"");
                      }
                      {
                        backend_libs__c_util__output_quoted_string_lang_5_p_0(backend_libs__c_util__Stream_6, backend_libs__c_util__Lang_7, backend_libs__c_util__Right_45);
                      }
                    }
                }
            }
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          {
            backend_libs__c_util__do_output_quoted_string_lang_6_p_0(backend_libs__c_util__Stream_6, backend_libs__c_util__Lang_7, backend_libs__c_util__Str_8, (MR_Integer) 0);
          }
        }
        break;
    }
  }
}

void MR_CALL 
backend_libs__c_util__output_quoted_string_lang_5_p_2(
  MR_Word backend_libs__c_util__Stream_6,
  MR_Word backend_libs__c_util__Lang_7,
  MR_String backend_libs__c_util__Str_8)
{
  {
    MR_bool backend_libs__c_util__succeeded;

    {
      backend_libs__c_util__do_output_quoted_string_lang_6_p_0(backend_libs__c_util__Stream_6, backend_libs__c_util__Lang_7, backend_libs__c_util__Str_8, (MR_Integer) 0);
    }
  }
}

void MR_CALL 
backend_libs__c_util__output_quoted_string_lang_5_p_1(
  MR_Word backend_libs__c_util__Stream_6,
  MR_Word backend_libs__c_util__Lang_7,
  MR_String backend_libs__c_util__Str_8)
{
  {
    MR_bool backend_libs__c_util__succeeded;

    {
      backend_libs__c_util__do_output_quoted_string_lang_6_p_0(backend_libs__c_util__Stream_6, backend_libs__c_util__Lang_7, backend_libs__c_util__Str_8, (MR_Integer) 0);
    }
  }
}

void MR_CALL 
backend_libs__c_util__output_quoted_string_lang_5_p_0(
  MR_Word backend_libs__c_util__Stream_6,
  MR_Word backend_libs__c_util__Lang_7,
  MR_String backend_libs__c_util__Str_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool backend_libs__c_util__succeeded;
        MR_String backend_libs__c_util__Left_10;
        MR_String backend_libs__c_util__Right_11;

        {
          mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Str_8, (MR_Integer) 160, &backend_libs__c_util__Left_10, &backend_libs__c_util__Right_11);
        }
        {
          backend_libs__c_util__do_output_quoted_string_lang_6_p_0(backend_libs__c_util__Stream_6, backend_libs__c_util__Lang_7, backend_libs__c_util__Left_10, (MR_Integer) 0);
        }
        backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_11, (MR_String) "") == 0);
        if (backend_libs__c_util__succeeded)
          {
          }
        else
          {
            MR_String backend_libs__c_util__Left_28;
            MR_String backend_libs__c_util__Right_29;

            {
              mercury__io__write_string_3_p_0((MR_String) "\" \"");
            }
            {
              mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Right_11, (MR_Integer) 160, &backend_libs__c_util__Left_28, &backend_libs__c_util__Right_29);
            }
            {
              backend_libs__c_util__do_output_quoted_string_lang_6_p_0(backend_libs__c_util__Stream_6, backend_libs__c_util__Lang_7, backend_libs__c_util__Left_28, (MR_Integer) 0);
            }
            backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_29, (MR_String) "") == 0);
            if (backend_libs__c_util__succeeded)
              {
              }
            else
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "\" \"");
                }
                /* direct tailcall eliminated */
                {
                  MR_String backend_libs__c_util__Str__tmp_copy_8 = backend_libs__c_util__Right_29;

                  backend_libs__c_util__Str_8 = backend_libs__c_util__Str__tmp_copy_8;
                }
                continue;
              }
          }
      }
      break;
    }
}

void MR_CALL 
backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(
  MR_String backend_libs__c_util__Str_4)
{
  {
    MR_bool backend_libs__c_util__succeeded;
    MR_Word backend_libs__c_util__Stream_6;

    {
      mercury__io__output_stream_3_p_0(&backend_libs__c_util__Stream_6);
    }
    {
      backend_libs__c_util__output_quoted_string_4_p_0(backend_libs__c_util__Stream_6, backend_libs__c_util__Str_4);
    }
  }
}

void MR_CALL 
backend_libs__c_util__output_quoted_string_4_p_0(
  MR_Word backend_libs__c_util__Stream_5,
  MR_String backend_libs__c_util__Str_6)
{
  {
    MR_bool backend_libs__c_util__succeeded;
    MR_String backend_libs__c_util__Left_18;
    MR_String backend_libs__c_util__Right_19;

    {
      mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Str_6, (MR_Integer) 160, &backend_libs__c_util__Left_18, &backend_libs__c_util__Right_19);
    }
    {
      backend_libs__c_util__do_output_quoted_string_lang_6_p_0(backend_libs__c_util__Stream_5, (MR_Integer) 0, backend_libs__c_util__Left_18, (MR_Integer) 0);
    }
    backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_19, (MR_String) "") == 0);
    if (backend_libs__c_util__succeeded)
      {
      }
    else
      {
        MR_String backend_libs__c_util__Left_34;
        MR_String backend_libs__c_util__Right_35;

        {
          mercury__io__write_string_3_p_0((MR_String) "\" \"");
        }
        {
          mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Right_19, (MR_Integer) 160, &backend_libs__c_util__Left_34, &backend_libs__c_util__Right_35);
        }
        {
          backend_libs__c_util__do_output_quoted_string_lang_6_p_0(backend_libs__c_util__Stream_5, (MR_Integer) 0, backend_libs__c_util__Left_34, (MR_Integer) 0);
        }
        backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_35, (MR_String) "") == 0);
        if (backend_libs__c_util__succeeded)
          {
          }
        else
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "\" \"");
            }
            {
              backend_libs__c_util__output_quoted_string_lang_5_p_0(backend_libs__c_util__Stream_5, (MR_Integer) 0, backend_libs__c_util__Right_35);
            }
          }
      }
  }
}

void MR_CALL 
backend_libs__c_util__always_reset_line_num_cur_stream_3_p_0(
  MR_Word backend_libs__c_util__MaybeFileName_4)
{
  {
    MR_bool backend_libs__c_util__succeeded;
    MR_Word backend_libs__c_util__Stream_6;

    {
      mercury__io__output_stream_3_p_0(&backend_libs__c_util__Stream_6);
    }
    {
      backend_libs__c_util__always_reset_line_num_4_p_0(backend_libs__c_util__Stream_6, backend_libs__c_util__MaybeFileName_4);
    }
  }
}

void MR_CALL 
backend_libs__c_util__always_reset_line_num_4_p_0(
  MR_Word backend_libs__c_util__Stream_5,
  MR_Word backend_libs__c_util__MaybeFileName_6)
{
  {
    MR_bool backend_libs__c_util__succeeded;
    MR_Integer backend_libs__c_util__Line_8;
    MR_String backend_libs__c_util__FileName_9;

    {
      mercury__io__get_output_line_number_3_p_0(&backend_libs__c_util__Line_8);
    }
    if ((backend_libs__c_util__MaybeFileName_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__io__output_stream_name_4_p_0(backend_libs__c_util__Stream_5, &backend_libs__c_util__FileName_9);
      }
    else
      backend_libs__c_util__FileName_9 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__c_util__MaybeFileName_6, (MR_Integer) 0)));
    backend_libs__c_util__succeeded = (backend_libs__c_util__Line_8 > (MR_Integer) 0);
    if (backend_libs__c_util__succeeded)
      {
        backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__FileName_9, (MR_String) "") == 0);
        backend_libs__c_util__succeeded = !(backend_libs__c_util__succeeded);
      }
    if (backend_libs__c_util__succeeded)
      {
        MR_Word backend_libs__c_util__CanPrint_10;
        MR_Integer backend_libs__c_util__V_18_18;

        {
          mercury__io__write_string_4_p_0(backend_libs__c_util__Stream_5, (MR_String) "#line ");
        }
        backend_libs__c_util__V_18_18 = (backend_libs__c_util__Line_8 + (MR_Integer) 1);
        {
          mercury__io__write_int_4_p_0(backend_libs__c_util__Stream_5, backend_libs__c_util__V_18_18);
        }
        {
          mercury__io__write_string_4_p_0(backend_libs__c_util__Stream_5, (MR_String) " \"");
        }
{
#define MR_PROC_LABEL backend_libs__c_util__always_reset_line_num_4_p_0

	MR_String Str;
	MR_Word CanPrintDirectly;

	Str =  backend_libs__c_util__FileName_9 ;
		{
{
    static  MR_String   last_string;
    static  MR_bool     last_can_print_directly;
    MR_bool             can_print_directly;
    const char          *s;
    int                 len;

    /* We cache the result of the last decision. */
    if (Str == last_string) {
        CanPrintDirectly = last_can_print_directly;
    } else {
        can_print_directly = MR_TRUE;

        for (s = Str; *s != '\0'; s++) {
            if (! (isalnum((int)*s) || *s == '_' || *s == '/' || *s == '.')) {
                can_print_directly = MR_FALSE;
                break;
            }
        }

        len = s - Str;
        if (len >= 512) {
            can_print_directly = MR_FALSE;
        }

        CanPrintDirectly = can_print_directly;

        last_string = Str;
        last_can_print_directly = CanPrintDirectly;
    }
}

		;}
#undef MR_PROC_LABEL
	 backend_libs__c_util__CanPrint_10  = CanPrintDirectly;
}
        switch (backend_libs__c_util__CanPrint_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              backend_libs__c_util__output_quoted_string_4_p_0(backend_libs__c_util__Stream_5, backend_libs__c_util__FileName_9);
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_4_p_0(backend_libs__c_util__Stream_5, backend_libs__c_util__FileName_9);
            }
            break;
        }
        {
          mercury__io__write_string_4_p_0(backend_libs__c_util__Stream_5, (MR_String) "\"\n");
        }
      }
    else
      {
      }
  }
}

void MR_CALL 
backend_libs__c_util__maybe_reset_line_num_cur_stream_4_p_0(
  MR_Word backend_libs__c_util__MaybeSetLineNumbers_5,
  MR_Word backend_libs__c_util__MaybeFileName_6)
{
  {
    MR_bool backend_libs__c_util__succeeded;
    MR_Word backend_libs__c_util__Stream_8;

    {
      mercury__io__output_stream_3_p_0(&backend_libs__c_util__Stream_8);
    }
    switch (backend_libs__c_util__MaybeSetLineNumbers_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          backend_libs__c_util__always_reset_line_num_4_p_0(backend_libs__c_util__Stream_8, backend_libs__c_util__MaybeFileName_6);
        }
        break;
    }
  }
}

void MR_CALL 
backend_libs__c_util__maybe_reset_line_num_5_p_0(
  MR_Word backend_libs__c_util__Stream_6,
  MR_Word backend_libs__c_util__MaybeSetLineNumbers_7,
  MR_Word backend_libs__c_util__MaybeFileName_8)
{
  {
    MR_bool backend_libs__c_util__succeeded;

    switch (backend_libs__c_util__MaybeSetLineNumbers_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          backend_libs__c_util__always_reset_line_num_4_p_0(backend_libs__c_util__Stream_6, backend_libs__c_util__MaybeFileName_8);
        }
        break;
    }
  }
}

void MR_CALL 
backend_libs__c_util__always_set_line_num_cur_stream_4_p_0(
  MR_String backend_libs__c_util__File_5,
  MR_Integer backend_libs__c_util__Line_6)
{
  {
    MR_bool backend_libs__c_util__succeeded;
    MR_Word backend_libs__c_util__Stream_8;

    {
      mercury__io__output_stream_3_p_0(&backend_libs__c_util__Stream_8);
    }
    {
      backend_libs__c_util__always_set_line_num_5_p_0(backend_libs__c_util__Stream_8, backend_libs__c_util__File_5, backend_libs__c_util__Line_6);
    }
  }
}

void MR_CALL 
backend_libs__c_util__always_set_line_num_5_p_0(
  MR_Word backend_libs__c_util__Stream_6,
  MR_String backend_libs__c_util__File_7,
  MR_Integer backend_libs__c_util__Line_8)
{
  {
    MR_bool backend_libs__c_util__succeeded = (backend_libs__c_util__Line_8 > (MR_Integer) 0);

    if (backend_libs__c_util__succeeded)
      {
        backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__File_7, (MR_String) "") == 0);
        backend_libs__c_util__succeeded = !(backend_libs__c_util__succeeded);
      }
    if (backend_libs__c_util__succeeded)
      {
        MR_Word backend_libs__c_util__CanPrint_10;

        {
          mercury__io__write_string_4_p_0(backend_libs__c_util__Stream_6, (MR_String) "#line ");
        }
        {
          mercury__io__write_int_4_p_0(backend_libs__c_util__Stream_6, backend_libs__c_util__Line_8);
        }
        {
          mercury__io__write_string_4_p_0(backend_libs__c_util__Stream_6, (MR_String) " \"");
        }
{
#define MR_PROC_LABEL backend_libs__c_util__always_set_line_num_5_p_0

	MR_String Str;
	MR_Word CanPrintDirectly;

	Str =  backend_libs__c_util__File_7 ;
		{
{
    static  MR_String   last_string;
    static  MR_bool     last_can_print_directly;
    MR_bool             can_print_directly;
    const char          *s;
    int                 len;

    /* We cache the result of the last decision. */
    if (Str == last_string) {
        CanPrintDirectly = last_can_print_directly;
    } else {
        can_print_directly = MR_TRUE;

        for (s = Str; *s != '\0'; s++) {
            if (! (isalnum((int)*s) || *s == '_' || *s == '/' || *s == '.')) {
                can_print_directly = MR_FALSE;
                break;
            }
        }

        len = s - Str;
        if (len >= 512) {
            can_print_directly = MR_FALSE;
        }

        CanPrintDirectly = can_print_directly;

        last_string = Str;
        last_can_print_directly = CanPrintDirectly;
    }
}

		;}
#undef MR_PROC_LABEL
	 backend_libs__c_util__CanPrint_10  = CanPrintDirectly;
}
        switch (backend_libs__c_util__CanPrint_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              backend_libs__c_util__output_quoted_string_4_p_0(backend_libs__c_util__Stream_6, backend_libs__c_util__File_7);
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_4_p_0(backend_libs__c_util__Stream_6, backend_libs__c_util__File_7);
            }
            break;
        }
        {
          mercury__io__write_string_4_p_0(backend_libs__c_util__Stream_6, (MR_String) "\"\n");
        }
      }
    else
      {
        {
          backend_libs__c_util__always_reset_line_num_4_p_0(backend_libs__c_util__Stream_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
      }
  }
}

void MR_CALL 
backend_libs__c_util__maybe_set_line_num_cur_stream_5_p_0(
  MR_Word backend_libs__c_util__MaybeSetLineNumbers_6,
  MR_String backend_libs__c_util__File_7,
  MR_Integer backend_libs__c_util__Line_8)
{
  {
    MR_bool backend_libs__c_util__succeeded;
    MR_Word backend_libs__c_util__Stream_10;

    {
      mercury__io__output_stream_3_p_0(&backend_libs__c_util__Stream_10);
    }
    switch (backend_libs__c_util__MaybeSetLineNumbers_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          backend_libs__c_util__always_set_line_num_5_p_0(backend_libs__c_util__Stream_10, backend_libs__c_util__File_7, backend_libs__c_util__Line_8);
        }
        break;
    }
  }
}

void MR_CALL 
backend_libs__c_util__maybe_set_line_num_6_p_0(
  MR_Word backend_libs__c_util__Stream_7,
  MR_Word backend_libs__c_util__MaybeSetLineNumbers_8,
  MR_String backend_libs__c_util__File_9,
  MR_Integer backend_libs__c_util__Line_10)
{
  {
    MR_bool backend_libs__c_util__succeeded;

    switch (backend_libs__c_util__MaybeSetLineNumbers_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          backend_libs__c_util__always_set_line_num_5_p_0(backend_libs__c_util__Stream_7, backend_libs__c_util__File_9, backend_libs__c_util__Line_10);
        }
        break;
    }
  }
}

MR_Word MR_CALL 
backend_libs__c_util__lookup_line_numbers_2_f_0(
  MR_Word backend_libs__c_util__Globals_4,
  MR_Word backend_libs__c_util__Option_5)
{
  {
    MR_bool backend_libs__c_util__succeeded;
    MR_Word backend_libs__c_util__MaybeSetLineNumbers_6;
    MR_Word backend_libs__c_util__OptionValue_7;

    {
      libs__globals__lookup_bool_option_3_p_0(backend_libs__c_util__Globals_4, backend_libs__c_util__Option_5, &backend_libs__c_util__OptionValue_7);
    }
    switch (backend_libs__c_util__OptionValue_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__c_util__MaybeSetLineNumbers_6 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        backend_libs__c_util__MaybeSetLineNumbers_6 = (MR_Integer) 1;
        break;
    }
    return backend_libs__c_util__MaybeSetLineNumbers_6;
  }
}

void mercury__backend_libs__c_util__init(void)
{
}

void mercury__backend_libs__c_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&backend_libs__c_util__backend_libs__c_util__type_ctor_info_binop_category_0);
	MR_register_type_ctor_info(&backend_libs__c_util__backend_libs__c_util__type_ctor_info_literal_language_0);
	MR_register_type_ctor_info(&backend_libs__c_util__backend_libs__c_util__type_ctor_info_maybe_set_line_numbers_0);
	MR_register_type_ctor_info(&backend_libs__c_util__backend_libs__c_util__type_ctor_info_multi_string_0);
}

void mercury__backend_libs__c_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__backend_libs__c_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module backend_libs.c_util. */
