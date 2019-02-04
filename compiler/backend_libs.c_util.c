/*
** Automatically generated from `c_util.m'
** by the Mercury compiler,
** version rotd=2018-01-08
** configured for x86_64-pc-linux-gnu.
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


// :- module backend_libs.c_util.
// :- implementation.

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
#include "check_hlds.proc_requests.mih"
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

static const MR_DuFunctorDescPtr backend_libs__c_util__backend_libs__c_util__du_stag_ordered_binop_category_0_0[12];

static const MR_DuFunctorDescPtr backend_libs__c_util__backend_libs__c_util__du_stag_ordered_binop_category_0_1[1];

static const MR_DuPtagLayout backend_libs__c_util__backend_libs__c_util__du_ptag_ordered_binop_category_0[2];

static const MR_DuFunctorDescPtr backend_libs__c_util__backend_libs__c_util__du_name_ordered_binop_category_0[13];

static const MR_Integer backend_libs__c_util__backend_libs__c_util__functor_number_map_binop_category_0[13];

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

static void MR_CALL 
backend_libs__c_util__quote_one_char_c_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
backend_libs__c_util__quote_one_char_c_3_p_0(
  MR_Char Char_4,
  MR_Word RevChars0_5,
  MR_Word * RevChars_6);

static void MR_CALL 
backend_libs__c_util__can_print_directly_4_p_0(
  MR_String Str_1,
  MR_Word * CanPrintDirectly_2);

static void MR_CALL 
backend_libs__c_util__quote_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_String MR_CALL 
backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0(
  MR_Char Char_5);

static void MR_CALL 
backend_libs__c_util__do_output_quoted_string_lang_6_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_String Str_9,
  MR_Integer Cur_10);

static void MR_CALL 
backend_libs__c_util__output_quoted_char_lang_5_p_3_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
backend_libs__c_util__output_quoted_char_lang_5_p_3(
  MR_Word Stream_6,
  MR_Word Lang_7,
  MR_Char Char_8);

static void MR_CALL 
backend_libs__c_util__octal_escape_any_int_2_p_0(
  MR_Integer Int_3,
  MR_Word * EscapeCodeChars_4);

static MR_bool MR_CALL 
backend_libs__c_util____Unify____binop_category_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__c_util____Compare____binop_category_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__c_util____Unify____literal_language_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__c_util____Compare____literal_language_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__c_util____Unify____maybe_set_line_numbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__c_util____Compare____maybe_set_line_numbers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
backend_libs__c_util____Unify____multi_string_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
backend_libs__c_util____Compare____multi_string_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box backend_libs__c_util_scalar_common_1[14][2];

static /* final */ const MR_Box backend_libs__c_util_scalar_common_2[1][5];

static /* final */ const MR_Box backend_libs__c_util_scalar_common_3[4][3];

static /* final */ const MR_Box backend_libs__c_util_scalar_common_4[2][1];

static /* final */ const MR_Box backend_libs__c_util_scalar_common_5[1][6];




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

static /* final */ const MR_Box backend_libs__c_util_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__c_util__list__pti_list_1__plain_builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box backend_libs__c_util_scalar_common_3[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&backend_libs__c_util_scalar_common_2[0])),
    ((MR_Box) (backend_libs__c_util__output_quoted_char_lang_5_p_3_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&backend_libs__c_util_scalar_common_2[0])),
    ((MR_Box) (backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&backend_libs__c_util_scalar_common_5[0])),
    ((MR_Box) (backend_libs__c_util__quote_string_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&backend_libs__c_util_scalar_common_2[0])),
    ((MR_Box) (backend_libs__c_util__quote_one_char_c_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__c_util_scalar_common_4[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box backend_libs__c_util_scalar_common_5[1][6] = {
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
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_1 = {
  (MR_String) "string_index_binop",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_2 = {
  (MR_String) "pointer_compare_binop",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_3 = {
  (MR_String) "compound_compare_binop",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo backend_libs__c_util__backend_libs__c_util__field_types_binop_category_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_4 = {
  (MR_String) "offset_string_compare_binop",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 4,
  backend_libs__c_util__backend_libs__c_util__field_types_binop_category_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_5 = {
  (MR_String) "general_string_compare_binop",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_6 = {
  (MR_String) "string_compare_binop",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 6,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_7 = {
  (MR_String) "unsigned_compare_binop",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 7,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_8 = {
  (MR_String) "float_compare_binop",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 7,
  (MR_Integer) 8,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_9 = {
  (MR_String) "float_arith_binop",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 9,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_10 = {
  (MR_String) "int_or_bool_binary_infix_binop",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 9,
  (MR_Integer) 10,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_11 = {
  (MR_String) "int_macro_binop",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 10,
  (MR_Integer) 11,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_12 = {
  (MR_String) "float_macro_binop",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 11,
  (MR_Integer) 12,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr backend_libs__c_util__backend_libs__c_util__du_stag_ordered_binop_category_0_0[12] = {
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
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_12
};

static const MR_DuFunctorDescPtr backend_libs__c_util__backend_libs__c_util__du_stag_ordered_binop_category_0_1[1] = {
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_4
};

static const MR_DuPtagLayout backend_libs__c_util__backend_libs__c_util__du_ptag_ordered_binop_category_0[2] = {
  {
    (MR_Integer) 12,
    MR_SECTAG_LOCAL,
    backend_libs__c_util__backend_libs__c_util__du_stag_ordered_binop_category_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    backend_libs__c_util__backend_libs__c_util__du_stag_ordered_binop_category_0_1
  }
};

static const MR_DuFunctorDescPtr backend_libs__c_util__backend_libs__c_util__du_name_ordered_binop_category_0[13] = {
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_0,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_3,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_9,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_8,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_12,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_5,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_11,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_10,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_4,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_2,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_6,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_1,
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_7
};

static const MR_Integer backend_libs__c_util__backend_libs__c_util__functor_number_map_binop_category_0[13] = {
  (MR_Integer) 0,
  (MR_Integer) 11,
  (MR_Integer) 9,
  (MR_Integer) 1,
  (MR_Integer) 8,
  (MR_Integer) 5,
  (MR_Integer) 10,
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
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__c_util____Unify____binop_category_0_0_10001)),
  ((MR_Box) (backend_libs__c_util____Compare____binop_category_0_0_10001)),
  (MR_String) "backend_libs.c_util",
  (MR_String) "binop_category",
  {     backend_libs__c_util__backend_libs__c_util__du_name_ordered_binop_category_0 },
  {     backend_libs__c_util__backend_libs__c_util__du_ptag_ordered_binop_category_0 },
  (MR_Integer) 13,
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
  MR_TYPECTOR_REP_ENUM,
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
  MR_TYPECTOR_REP_ENUM,
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
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

void MR_CALL 
backend_libs__c_util____Compare____multi_string_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__c_util_scalar_common_1[1], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
backend_libs__c_util____Unify____multi_string_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__c_util_scalar_common_1[1], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
backend_libs__c_util____Compare____maybe_set_line_numbers_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
backend_libs__c_util____Unify____maybe_set_line_numbers_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
backend_libs__c_util____Compare____literal_language_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
backend_libs__c_util____Unify____literal_language_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
backend_libs__c_util____Compare____binop_category_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_30 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_31 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_30 == CastY_31);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 9:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 10:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 11:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 9:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 10:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 11:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 9:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 10:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 11:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 3:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 9:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 10:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 11:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 4:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 9:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 10:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 11:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 5:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 9:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 10:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 11:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 6:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 9:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 10:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 11:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 7:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 9:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 10:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 11:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 8:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 9:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 10:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 11:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 9:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 9:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 10:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 11:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 10:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 9:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 10:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 11:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 11:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 9:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 10:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 11:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 8:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 9:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 10:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 11:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ArgY1_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

                  mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_33, ArgY1_13);
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
backend_libs__c_util____Unify____binop_category_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_29 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_30 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_29 == CastY_30);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_4 == CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_6 == CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_8 == CastX_7);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_10 == CastX_9);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer CastX_13 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_14 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_14 == CastX_13);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Integer CastX_15 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_16 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_16 == CastX_15);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Integer CastX_17 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_18 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_18 == CastX_17);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Integer CastX_19 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_20 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_20 == CastX_19);
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Integer CastX_21 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_22 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_22 == CastX_21);
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Integer CastX_23 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_24 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_24 == CastX_23);
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Integer CastX_25 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_26 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_26 == CastX_25);
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Integer CastX_27 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_28 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_28 == CastX_27);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer ArgX1_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer ArgY1_12;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = (ArgX1_11 == ArgY1_12);
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__c_util__quote_one_char_c_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_EscapeCodeChars_4;

    backend_libs__c_util__octal_escape_any_int_2_p_0(((MR_Integer) wrapper_arg_1), &conv0_EscapeCodeChars_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_EscapeCodeChars_4));
  }
}

static void MR_CALL 
backend_libs__c_util__quote_one_char_c_3_p_0(
  MR_Char Char_4,
  MR_Word RevChars0_5,
  MR_Word * RevChars_6)
{
  {
    MR_bool succeeded;
    MR_Char EscapeChar_7;

    switch (Char_4) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Char) 7:
        {
          EscapeChar_7 = (MR_Char) 97;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 8:
        {
          EscapeChar_7 = (MR_Char) 98;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 9:
        {
          EscapeChar_7 = (MR_Char) 116;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 10:
        {
          EscapeChar_7 = (MR_Char) 110;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 11:
        {
          EscapeChar_7 = (MR_Char) 118;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 12:
        {
          EscapeChar_7 = (MR_Char) 102;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 13:
        {
          EscapeChar_7 = (MR_Char) 114;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 34:
        {
          EscapeChar_7 = (MR_Char) 34;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 39:
        {
          EscapeChar_7 = (MR_Char) 39;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 92:
        {
          EscapeChar_7 = (MR_Char) 92;
          succeeded = MR_TRUE;
        }
        break;
    }
    if (succeeded)
    {
      MR_Word Var_12;

      {
        Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
        MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (RevChars0_5));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *RevChars_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (EscapeChar_7));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_12));
      }
    }
    else
    {
      succeeded = (Char_4 == (MR_Char) 63);
      if (succeeded)
      {
        MR_Word Var_15;

        {
          Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
          MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (RevChars0_5));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *RevChars_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) ((MR_Char) 63));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_15));
        }
      }
      else
      {
        succeeded = mercury__char__is_alnum_1_p_0(Char_4);
        if (!(succeeded))
        {
          succeeded = mercury__string__contains_char_2_p_0((MR_String) " !\"#%&\'()*+,-./:;<=>\?[\\]^_{|}~", Char_4);
        }
        if (succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *RevChars_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (Char_4));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RevChars0_5));
          }
        else
        {
          succeeded = mercury__char__to_int_2_p_1(Char_4, (MR_Integer) 0);
          if (succeeded)
          {
            MR_Word Var_19;

            {
              Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
              MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (RevChars0_5));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *RevChars_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) ((MR_Char) 48));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_19));
            }
          }
          else
          {
            MR_Integer Int_8;

            Int_8 = mercury__char__to_int_1_f_0(Char_4);
            succeeded = (Int_8 >= (MR_Integer) 128);
            if (succeeded)
            {
              MR_Word CodeUnits_9;

              succeeded = mercury__char__to_utf8_2_p_0(Char_4, &CodeUnits_9);
              if (succeeded)
              {
                MR_Word TypeCtorInfo_31_31;
                MR_Word EscapeCharss_10;
                MR_Word EscapeChars_11;

                mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__c_util_scalar_common_1[0], (MR_Word) &backend_libs__c_util_scalar_common_3[3], CodeUnits_9, &EscapeCharss_10);
                TypeCtorInfo_31_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
                mercury__list__condense_2_p_0(TypeCtorInfo_31_31, EscapeCharss_10, &EscapeChars_11);
                mercury__list__reverse_prepend_3_p_0(TypeCtorInfo_31_31, EscapeChars_11, RevChars0_5, RevChars_6);
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
              MR_Word EscapeChars_26;
              MR_Integer Int_37;

              mercury__char__to_int_2_p_0(Char_4, &Int_37);
              backend_libs__c_util__octal_escape_any_int_2_p_0(Int_37, &EscapeChars_26);
              mercury__list__reverse_prepend_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, EscapeChars_26, RevChars0_5, RevChars_6);
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
backend_libs__c_util__can_print_directly_4_p_0(
  MR_String Str_1,
  MR_Word * CanPrintDirectly_2)
{
  {
{
#define MR_PROC_LABEL backend_libs__c_util__can_print_directly_4_p_0

	MR_String Str;
	MR_Word CanPrintDirectly;

	Str =  Str_1 ;
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
	 *CanPrintDirectly_2  = CanPrintDirectly;
}
  }
}

MR_bool MR_CALL 
backend_libs__c_util__is_valid_c_identifier_1_p_0(
  MR_String S_2)
{
  {
    MR_bool succeeded;
    MR_Char Start_3;

    succeeded = mercury__string__index_3_p_0(S_2, (MR_Integer) 0, &Start_3);
    if (succeeded)
    {
      succeeded = mercury__char__is_alpha_or_underscore_1_p_0(Start_3);
      if (succeeded)
        succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(S_2);
    }
    return succeeded;
  }
}

void MR_CALL 
backend_libs__c_util__output_pragma_pack_pop_2_p_0(void)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_MSVC\n");
    mercury__io__write_string_3_p_0((MR_String) "#pragma pack(pop)\n");
    mercury__io__write_string_3_p_0((MR_String) "#endif\n");
  }
}

void MR_CALL 
backend_libs__c_util__output_pragma_pack_push_2_p_0(void)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "\n#ifdef MR_MSVC\n");
    mercury__io__write_string_3_p_0((MR_String) "#pragma pack(push, MR_BYTES_PER_WORD)\n");
    mercury__io__write_string_3_p_0((MR_String) "#endif\n");
  }
}

void MR_CALL 
backend_libs__c_util__output_c_file_intro_and_grade_6_p_0(
  MR_Word Globals_7,
  MR_String SourceFileName_8,
  MR_String Version_9,
  MR_String Fullarch_10)
{
  {
    MR_Integer NumTagBits_12;
    MR_String NumTagBitsStr_13;
    MR_Word UnboxedFloat_14;
    MR_String UnboxedFloatStr_15;
    MR_Word PregeneratedDist_16;
    MR_String PregeneratedDistStr_17;
    MR_Word HighLevelCode_18;
    MR_String HighLevelCodeStr_19;
    MR_Word Var_26;
    MR_Word Var_29;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Word Var_36;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_46;
    MR_Word Var_48;
    MR_Word Var_50;
    MR_Word Var_52;
    MR_Word Var_54;
    MR_Word Var_56;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_61;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_66;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_71;
    MR_Word Var_73;

    libs__globals__lookup_int_option_3_p_0(Globals_7, (MR_Integer) 250, &NumTagBits_12);
    mercury__string__int_to_string_2_p_0(NumTagBits_12, &NumTagBitsStr_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 256, &UnboxedFloat_14);
    switch (UnboxedFloat_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        UnboxedFloatStr_15 = (MR_String) "no";
        break;
      case (MR_Integer) 1:
        UnboxedFloatStr_15 = (MR_String) "yes";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 236, &PregeneratedDist_16);
    switch (PregeneratedDist_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        PregeneratedDistStr_17 = (MR_String) "no";
        break;
      case (MR_Integer) 1:
        PregeneratedDistStr_17 = (MR_String) "yes";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 266, &HighLevelCode_18);
    switch (HighLevelCode_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HighLevelCodeStr_19 = (MR_String) "no";
        break;
      case (MR_Integer) 1:
        HighLevelCodeStr_19 = (MR_String) "yes";
        break;
    }
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (HighLevelCodeStr_19));
      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[6])));
    }
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) ((MR_String) "** HIGHLEVEL_CODE="));
      MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_73));
    }
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_71));
    }
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (PregeneratedDistStr_17));
      MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_69));
    }
    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) ((MR_String) "** PREGENERATED_DIST="));
      MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_68));
    }
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_66));
    }
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (UnboxedFloatStr_15));
      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_64));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) ((MR_String) "** UNBOXED_FLOAT="));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_63));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (NumTagBitsStr_13));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_59));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) ((MR_String) "** TAG_BITS="));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) ((MR_String) "**\n"));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) ((MR_String) "** the generation of this C file were\n"));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_54));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) ((MR_String) "** The autoconfigured grade settings governing\n"));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_52));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) ((MR_String) "**\n"));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_50));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) ((MR_String) "** Do not edit.\n"));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) ((MR_String) ".\n"));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Fullarch_10));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_44));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) ((MR_String) "** configured for "));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Version_9));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) ((MR_String) "** version "));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) ((MR_String) "** by the Mercury compiler,\n"));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_36));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) ((MR_String) "\'\n"));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (SourceFileName_8));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) ((MR_String) "** Automatically generated from \140"));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) ((MR_String) "/*\n"));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
    }
    mercury__io__write_strings_3_p_0(Var_26);
  }
}

void MR_CALL 
backend_libs__c_util__binop_category_string_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_String * HeadVar__3_3)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
            *HeadVar__3_3 = (MR_String) "&&";
          }
          break;
        case (MR_Integer) 1:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
            *HeadVar__3_3 = (MR_String) "||";
          }
          break;
        case (MR_Integer) 2:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
            *HeadVar__3_3 = (MR_String) "MR_body";
          }
          break;
        case (MR_Integer) 3:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            *HeadVar__3_3 = (MR_String) "STRING_UNSAFE_INDEX_CODE_UNIT";
          }
          break;
        case (MR_Integer) 4:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
            *HeadVar__3_3 = (MR_String) "==";
          }
          break;
        case (MR_Integer) 5:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
            *HeadVar__3_3 = (MR_String) "!=";
          }
          break;
        case (MR_Integer) 6:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
            *HeadVar__3_3 = (MR_String) "<";
          }
          break;
        case (MR_Integer) 7:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
            *HeadVar__3_3 = (MR_String) ">";
          }
          break;
        case (MR_Integer) 8:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
            *HeadVar__3_3 = (MR_String) "<=";
          }
          break;
        case (MR_Integer) 9:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
            *HeadVar__3_3 = (MR_String) ">=";
          }
          break;
        case (MR_Integer) 10:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
            *HeadVar__3_3 = (MR_String) "MR_strcmp";
          }
          break;
        case (MR_Integer) 11:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
            *HeadVar__3_3 = (MR_String) "<=";
          }
          break;
        case (MR_Integer) 12:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
            *HeadVar__3_3 = (MR_String) "+";
          }
          break;
        case (MR_Integer) 13:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
            *HeadVar__3_3 = (MR_String) "-";
          }
          break;
        case (MR_Integer) 14:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
            *HeadVar__3_3 = (MR_String) "*";
          }
          break;
        case (MR_Integer) 15:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
            *HeadVar__3_3 = (MR_String) "/";
          }
          break;
        case (MR_Integer) 16:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
            *HeadVar__3_3 = (MR_String) "==";
          }
          break;
        case (MR_Integer) 17:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
            *HeadVar__3_3 = (MR_String) "!=";
          }
          break;
        case (MR_Integer) 18:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
            *HeadVar__3_3 = (MR_String) "<";
          }
          break;
        case (MR_Integer) 19:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
            *HeadVar__3_3 = (MR_String) ">";
          }
          break;
        case (MR_Integer) 20:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
            *HeadVar__3_3 = (MR_String) "<=";
          }
          break;
        case (MR_Integer) 21:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
            *HeadVar__3_3 = (MR_String) ">=";
          }
          break;
        case (MR_Integer) 22:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
            *HeadVar__3_3 = (MR_String) "MR_float_word_bits";
          }
          break;
        case (MR_Integer) 23:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
            *HeadVar__3_3 = (MR_String) "MR_float_from_dword";
          }
          break;
        case (MR_Integer) 24:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
            *HeadVar__3_3 = (MR_String) "==";
          }
          break;
        case (MR_Integer) 25:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
            *HeadVar__3_3 = (MR_String) "COMPOUND_EQ";
          }
          break;
        case (MR_Integer) 26:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
            *HeadVar__3_3 = (MR_String) "COMPOUND_LT";
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
        *HeadVar__3_3 = (MR_String) "+";
      }
      break;
    case (MR_Integer) 2:
      {
        *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
        *HeadVar__3_3 = (MR_String) "-";
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
            *HeadVar__3_3 = (MR_String) "*";
          }
          break;
        case (MR_Integer) 1:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
            *HeadVar__3_3 = (MR_String) "/";
          }
          break;
        case (MR_Integer) 2:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
            *HeadVar__3_3 = (MR_String) "%";
          }
          break;
        case (MR_Integer) 3:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
            *HeadVar__3_3 = (MR_String) "<<";
          }
          break;
        case (MR_Integer) 4:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
            *HeadVar__3_3 = (MR_String) ">>";
          }
          break;
        case (MR_Integer) 5:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
            *HeadVar__3_3 = (MR_String) "&";
          }
          break;
        case (MR_Integer) 6:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
            *HeadVar__3_3 = (MR_String) "|";
          }
          break;
        case (MR_Integer) 7:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
            *HeadVar__3_3 = (MR_String) "^";
          }
          break;
        case (MR_Integer) 8:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
            *HeadVar__3_3 = (MR_String) "==";
          }
          break;
        case (MR_Integer) 9:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
            *HeadVar__3_3 = (MR_String) "!=";
          }
          break;
        case (MR_Integer) 10:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *HeadVar__3_3 = (MR_String) "ARRAY_INDEX";
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Integer N_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (N_21));
            }
            *HeadVar__3_3 = (MR_String) "MR_offset_streq";
          }
          break;
        case (MR_Integer) 12:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
            *HeadVar__3_3 = (MR_String) "<";
          }
          break;
        case (MR_Integer) 13:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
            *HeadVar__3_3 = (MR_String) ">";
          }
          break;
        case (MR_Integer) 14:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
            *HeadVar__3_3 = (MR_String) "<=";
          }
          break;
        case (MR_Integer) 15:
          {
            *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
            *HeadVar__3_3 = (MR_String) ">=";
          }
          break;
      }
      break;
  }
}

void MR_CALL 
backend_libs__c_util__unary_prefix_op_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_String) "MR_mktag";
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_String) "MR_tag";
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_String) "MR_unmktag";
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_String) "MR_strip_tag";
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_String) "MR_mkbody";
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_String) "MR_unmkbody";
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_String) "!";
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_String) "MR_hash_string";
          break;
        case (MR_Integer) 8:
          *HeadVar__2_2 = (MR_String) "MR_hash_string2";
          break;
        case (MR_Integer) 9:
          *HeadVar__2_2 = (MR_String) "MR_hash_string3";
          break;
        case (MR_Integer) 10:
          *HeadVar__2_2 = (MR_String) "MR_hash_string4";
          break;
        case (MR_Integer) 11:
          *HeadVar__2_2 = (MR_String) "MR_hash_string5";
          break;
        case (MR_Integer) 12:
          *HeadVar__2_2 = (MR_String) "MR_hash_string6";
          break;
      }
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_String) "~";
      break;
  }
}

void MR_CALL 
backend_libs__c_util__output_float_literal_cur_stream_3_p_0(
  MR_Float N_4)
{
  {
    MR_Word Stream_6;
    MR_String Var_16;

    mercury__io__output_stream_3_p_0(&Stream_6);
    Var_16 = backend_libs__c_util__make_float_literal_1_f_0(N_4);
    mercury__io__write_string_4_p_0(Stream_6, Var_16);
  }
}

void MR_CALL 
backend_libs__c_util__output_float_literal_4_p_0(
  MR_Word Stream_5,
  MR_Float Float_6)
{
  {
    MR_String Var_10;

    Var_10 = backend_libs__c_util__make_float_literal_1_f_0(Float_6);
    mercury__io__write_string_4_p_0(Stream_5, Var_10);
  }
}

MR_String MR_CALL 
backend_libs__c_util__make_float_literal_1_f_0(
  MR_Float Float_3)
{
  {
    MR_String HeadVar__2_2;

    mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) &backend_libs__c_util_scalar_common_4[1], (MR_Integer) 17, (MR_Integer) 4, Float_3, &HeadVar__2_2);
    return HeadVar__2_2;
  }
}

void MR_CALL 
backend_libs__c_util__output_uint32_expr_cur_stream_3_p_0(
  uint32_t N_4)
{
  {
    MR_Word Stream_6;

    mercury__io__output_stream_3_p_0(&Stream_6);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "UINT32_C(");
    mercury__io__write_uint32_4_p_0(Stream_6, N_4);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
  }
}

void MR_CALL 
backend_libs__c_util__output_uint32_expr_4_p_0(
  MR_Word Stream_5,
  uint32_t N_6)
{
  {
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "UINT32_C(");
    mercury__io__write_uint32_4_p_0(Stream_5, N_6);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ")");
  }
}

void MR_CALL 
backend_libs__c_util__output_int32_expr_cur_stream_3_p_0(
  int32_t N_4)
{
  {
    MR_Word Stream_6;

    mercury__io__output_stream_3_p_0(&Stream_6);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "INT32_C(");
    mercury__io__write_int32_4_p_0(Stream_6, N_4);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
  }
}

void MR_CALL 
backend_libs__c_util__output_int32_expr_4_p_0(
  MR_Word Stream_5,
  int32_t N_6)
{
  {
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "INT32_C(");
    mercury__io__write_int32_4_p_0(Stream_5, N_6);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ")");
  }
}

void MR_CALL 
backend_libs__c_util__output_uint16_expr_cur_stream_3_p_0(
  uint16_t N_4)
{
  {
    MR_Word Stream_6;

    mercury__io__output_stream_3_p_0(&Stream_6);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "UINT16_C(");
    mercury__io__write_uint16_4_p_0(Stream_6, N_4);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
  }
}

void MR_CALL 
backend_libs__c_util__output_uint16_expr_4_p_0(
  MR_Word Stream_5,
  uint16_t N_6)
{
  {
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "UINT16_C(");
    mercury__io__write_uint16_4_p_0(Stream_5, N_6);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ")");
  }
}

void MR_CALL 
backend_libs__c_util__output_int16_expr_cur_stream_3_p_0(
  int16_t N_4)
{
  {
    MR_Word Stream_6;

    mercury__io__output_stream_3_p_0(&Stream_6);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "INT16_C(");
    mercury__io__write_int16_4_p_0(Stream_6, N_4);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
  }
}

void MR_CALL 
backend_libs__c_util__output_int16_expr_4_p_0(
  MR_Word Stream_5,
  int16_t N_6)
{
  {
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "INT16_C(");
    mercury__io__write_int16_4_p_0(Stream_5, N_6);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ")");
  }
}

void MR_CALL 
backend_libs__c_util__output_uint8_expr_cur_stream_3_p_0(
  uint8_t N_4)
{
  {
    MR_Word Stream_6;

    mercury__io__output_stream_3_p_0(&Stream_6);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "UINT8_C(");
    mercury__io__write_uint8_4_p_0(Stream_6, N_4);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
  }
}

void MR_CALL 
backend_libs__c_util__output_uint8_expr_4_p_0(
  MR_Word Stream_5,
  uint8_t N_6)
{
  {
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "UINT8_C(");
    mercury__io__write_uint8_4_p_0(Stream_5, N_6);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ")");
  }
}

void MR_CALL 
backend_libs__c_util__output_int8_expr_cur_stream_3_p_0(
  int8_t N_4)
{
  {
    MR_Word Stream_6;

    mercury__io__output_stream_3_p_0(&Stream_6);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "INT8_C(");
    mercury__io__write_int8_4_p_0(Stream_6, N_4);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
  }
}

void MR_CALL 
backend_libs__c_util__output_int8_expr_4_p_0(
  MR_Word Stream_5,
  int8_t N_6)
{
  {
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "INT8_C(");
    mercury__io__write_int8_4_p_0(Stream_5, N_6);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ")");
  }
}

void MR_CALL 
backend_libs__c_util__output_uint_expr_cur_stream_3_p_0(
  MR_Unsigned N_4)
{
  {
    MR_Word Stream_6;

    mercury__io__output_stream_3_p_0(&Stream_6);
    mercury__io__write_uint_4_p_0(Stream_6, N_4);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "U");
  }
}

void MR_CALL 
backend_libs__c_util__output_uint_expr_4_p_0(
  MR_Word Stream_5,
  MR_Unsigned N_6)
{
  {
    mercury__io__write_uint_4_p_0(Stream_5, N_6);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "U");
  }
}

void MR_CALL 
backend_libs__c_util__output_int_expr_cur_stream_3_p_0(
  MR_Integer N_4)
{
  {
    MR_Word Stream_6;

    mercury__io__output_stream_3_p_0(&Stream_6);
    backend_libs__c_util__output_int_expr_4_p_0(Stream_6, N_4);
  }
}

void MR_CALL 
backend_libs__c_util__output_int_expr_4_p_0(
  MR_Word Stream_5,
  MR_Integer N_6)
{
  {
    MR_bool succeeded = (N_6 >= (MR_Integer) -2147483647);

    if (succeeded)
    {
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) "(MR_Integer) ");
      mercury__io__write_int_4_p_0(Stream_5, N_6);
    }
    else
    {
      MR_String Var_14;
      MR_Word Var_15;

      Var_15 = mercury__integer__integer_1_f_0(N_6);
      Var_14 = mercury__integer__to_string_1_f_0(Var_15);
      succeeded = (strcmp(Var_14, (MR_String) "-2147483648") == 0);
      if (succeeded)
      {
        mercury__io__write_string_4_p_0(Stream_5, (MR_String) "(-(MR_Integer) 2147483647 - 1)");
      }
      else
      {
        MR_String Var_18;
        MR_Word Var_19;

        Var_19 = mercury__integer__integer_1_f_0(N_6);
        Var_18 = mercury__integer__to_string_1_f_0(Var_19);
        succeeded = (strcmp(Var_18, (MR_String) "-9223372036854775808") == 0);
        if (succeeded)
        {
          mercury__io__write_string_4_p_0(Stream_5, (MR_String) "(-(MR_Integer) 9223372036854775807 - 1)");
        }
        else
        {
          MR_Integer Var_36;

          mercury__int__min_int_1_p_0(&Var_36);
          succeeded = (N_6 == Var_36);
          if (succeeded)
          {
            MR_Integer Var_24;
            MR_Integer Var_26;

            mercury__io__write_string_4_p_0(Stream_5, (MR_String) "(-(MR_Integer) ");
            Var_26 = (N_6 + (MR_Integer) 1);
            Var_24 = ((MR_Integer) 0 - Var_26);
            mercury__io__write_int_4_p_0(Stream_5, Var_24);
            mercury__io__write_string_4_p_0(Stream_5, (MR_String) "- 1)");
          }
          else
          {
            MR_Integer Var_32;

            mercury__io__write_string_4_p_0(Stream_5, (MR_String) "(-(MR_Integer) ");
            Var_32 = ((MR_Integer) 0 - N_6);
            mercury__io__write_int_4_p_0(Stream_5, Var_32);
            mercury__io__write_string_4_p_0(Stream_5, (MR_String) ")");
          }
        }
      }
    }
  }
}

MR_String MR_CALL 
backend_libs__c_util__quote_char_1_f_0(
  MR_Char Char_3)
{
  {
    MR_String HeadVar__2_2;

    HeadVar__2_2 = backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0(Char_3);
    return HeadVar__2_2;
  }
}

static void MR_CALL 
backend_libs__c_util__quote_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_RevChars_6;

    backend_libs__c_util__quote_one_char_c_3_p_0(((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_RevChars_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_RevChars_6));
  }
}

MR_String MR_CALL 
backend_libs__c_util__quote_string_1_f_0(
  MR_String String_3)
{
  {
    MR_String QuotedString_4;
    MR_Word RevQuotedChars_5;
    MR_Box conv1_RevQuotedChars_5;

    mercury__string__foldl_4_p_1((MR_Word) &backend_libs__c_util_scalar_common_1[0], (MR_Word) &backend_libs__c_util_scalar_common_3[2], String_3, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv1_RevQuotedChars_5);
    RevQuotedChars_5 = ((MR_Word) conv1_RevQuotedChars_5);
    mercury__string__from_rev_char_list_2_p_0(RevQuotedChars_5, &QuotedString_4);
    return QuotedString_4;
  }
}

void MR_CALL 
backend_libs__c_util__output_quoted_char_cur_stream_3_p_0(
  MR_Char Char_4)
{
  {
    MR_Word Stream_6;
    MR_String EscapedCharStr_24;

    mercury__io__output_stream_3_p_0(&Stream_6);
    EscapedCharStr_24 = backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0(Char_4);
    mercury__io__write_string_4_p_0(Stream_6, EscapedCharStr_24);
  }
}

void MR_CALL 
backend_libs__c_util__output_quoted_char_4_p_0(
  MR_Word Stream_5,
  MR_Char Char_6)
{
  {
    MR_String EscapedCharStr_18;

    EscapedCharStr_18 = backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0(Char_6);
    mercury__io__write_string_4_p_0(Stream_5, EscapedCharStr_18);
  }
}

static void MR_CALL 
backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_EscapeCodeChars_4;

    backend_libs__c_util__octal_escape_any_int_2_p_0(((MR_Integer) wrapper_arg_1), &conv0_EscapeCodeChars_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_EscapeCodeChars_4));
  }
}

static MR_String MR_CALL 
backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0(
  MR_Char Char_5)
{
  {
    MR_bool succeeded;
    MR_String QuotedCharStr_6;
    MR_Word RevQuotedCharStr_7;
    MR_Word Var_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Char EscapeChar_14;

    switch (Char_5) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Char) 7:
        {
          EscapeChar_14 = (MR_Char) 97;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 8:
        {
          EscapeChar_14 = (MR_Char) 98;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 9:
        {
          EscapeChar_14 = (MR_Char) 116;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 10:
        {
          EscapeChar_14 = (MR_Char) 110;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 11:
        {
          EscapeChar_14 = (MR_Char) 118;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 12:
        {
          EscapeChar_14 = (MR_Char) 102;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 13:
        {
          EscapeChar_14 = (MR_Char) 114;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 34:
        {
          EscapeChar_14 = (MR_Char) 34;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 39:
        {
          EscapeChar_14 = (MR_Char) 39;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 92:
        {
          EscapeChar_14 = (MR_Char) 92;
          succeeded = MR_TRUE;
        }
        break;
    }
    if (succeeded)
    {
      {
        RevQuotedCharStr_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RevQuotedCharStr_7, 0) = ((MR_Box) (MR_Word) (EscapeChar_14));
        MR_hl_field(MR_mktag(1), RevQuotedCharStr_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[7])));
      }
    }
    else
    {
      succeeded = (Char_5 == (MR_Char) 63);
      if (succeeded)
      {
        RevQuotedCharStr_7 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[13]);
      }
      else
      {
        succeeded = mercury__char__is_alnum_1_p_0(Char_5);
        if (!(succeeded))
        {
          succeeded = mercury__string__contains_char_2_p_0((MR_String) " !\"#%&\'()*+,-./:;<=>\?[\\]^_{|}~", Char_5);
        }
        if (succeeded)
          {
            RevQuotedCharStr_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), RevQuotedCharStr_7, 0) = ((MR_Box) (MR_Word) (Char_5));
            MR_hl_field(MR_mktag(1), RevQuotedCharStr_7, 1) = ((MR_Box) (Var_8));
          }
        else
        {
          succeeded = mercury__char__to_int_2_p_1(Char_5, (MR_Integer) 0);
          if (succeeded)
          {
            RevQuotedCharStr_7 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[8]);
          }
          else
          {
            MR_Integer Int_15;

            Int_15 = mercury__char__to_int_1_f_0(Char_5);
            succeeded = (Int_15 >= (MR_Integer) 128);
            if (succeeded)
            {
              MR_Word CodeUnits_16;

              succeeded = mercury__char__to_utf8_2_p_0(Char_5, &CodeUnits_16);
              if (succeeded)
              {
                MR_Word TypeCtorInfo_35_39;
                MR_Word EscapeCharss_17;
                MR_Word EscapeChars_18;

                mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__c_util_scalar_common_1[0], (MR_Word) &backend_libs__c_util_scalar_common_3[1], CodeUnits_16, &EscapeCharss_17);
                TypeCtorInfo_35_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
                mercury__list__condense_2_p_0(TypeCtorInfo_35_39, EscapeCharss_17, &EscapeChars_18);
                mercury__list__reverse_prepend_3_p_0(TypeCtorInfo_35_39, EscapeChars_18, Var_8, &RevQuotedCharStr_7);
              }
              else
              {
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.c_util", (MR_String) "predicate \140backend_libs.c_util.quote_one_char\'/4", (MR_String) "invalid Unicode code point");
              }
            }
            else
            {
              MR_Word EscapeChars_33;
              MR_Integer Int_45;

              mercury__char__to_int_2_p_0(Char_5, &Int_45);
              backend_libs__c_util__octal_escape_any_int_2_p_0(Int_45, &EscapeChars_33);
              mercury__list__reverse_prepend_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, EscapeChars_33, Var_8, &RevQuotedCharStr_7);
            }
          }
        }
      }
    }
    mercury__string__from_rev_char_list_2_p_0(RevQuotedCharStr_7, &QuotedCharStr_6);
    return QuotedCharStr_6;
  }
}

void MR_CALL 
backend_libs__c_util__output_quoted_multi_string_lang_cur_stream_4_p_0(
  MR_Word Lang_5,
  MR_Word S_6)
{
  {
    MR_Word Stream_8;

    mercury__io__output_stream_3_p_0(&Stream_8);
    backend_libs__c_util__output_quoted_multi_string_lang_5_p_0(Stream_8, Lang_5, S_6);
  }
}

void MR_CALL 
backend_libs__c_util__output_quoted_multi_string_cur_stream_3_p_0(
  MR_Word Str_4)
{
  {
    MR_Word Stream_6;

    mercury__io__output_stream_3_p_0(&Stream_6);
    backend_libs__c_util__output_quoted_multi_string_lang_5_p_0(Stream_6, (MR_Integer) 0, Str_4);
  }
}

void MR_CALL 
backend_libs__c_util__output_quoted_multi_string_4_p_0(
  MR_Word Stream_5,
  MR_Word Strs_6)
{
  {
    backend_libs__c_util__output_quoted_multi_string_lang_5_p_0(Stream_5, (MR_Integer) 0, Strs_6);
  }
}

void MR_CALL 
backend_libs__c_util__output_quoted_multi_string_lang_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if (!((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_String Str_13 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Strs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Char Var_19;
      MR_Word next_value_of_HeadVar__3_3;

      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Left_29;
            MR_String Right_30;

            mercury__string__split_by_codepoint_4_p_0(Str_13, (MR_Integer) 160, &Left_29, &Right_30);
            backend_libs__c_util__do_output_quoted_string_lang_6_p_0(HeadVar__1_1, HeadVar__2_2, Left_29, (MR_Integer) 0);
            succeeded = (strcmp(Right_30, (MR_String) "") == 0);
            if (!(succeeded))
            {
              MR_String Left_45;
              MR_String Right_46;

              mercury__io__write_string_3_p_0((MR_String) "\" \"");
              mercury__string__split_by_codepoint_4_p_0(Right_30, (MR_Integer) 160, &Left_45, &Right_46);
              backend_libs__c_util__do_output_quoted_string_lang_6_p_0(HeadVar__1_1, HeadVar__2_2, Left_45, (MR_Integer) 0);
              succeeded = (strcmp(Right_46, (MR_String) "") == 0);
              if (!(succeeded))
              {
                MR_String Left_61;
                MR_String Right_62;

                mercury__io__write_string_3_p_0((MR_String) "\" \"");
                mercury__string__split_by_codepoint_4_p_0(Right_46, (MR_Integer) 160, &Left_61, &Right_62);
                backend_libs__c_util__do_output_quoted_string_lang_6_p_0(HeadVar__1_1, HeadVar__2_2, Left_61, (MR_Integer) 0);
                succeeded = (strcmp(Right_62, (MR_String) "") == 0);
                if (!(succeeded))
                {
                  mercury__io__write_string_3_p_0((MR_String) "\" \"");
                  backend_libs__c_util__output_quoted_string_lang_5_p_0(HeadVar__1_1, HeadVar__2_2, Right_62);
                }
              }
            }
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          {
            backend_libs__c_util__do_output_quoted_string_lang_6_p_0(HeadVar__1_1, HeadVar__2_2, Str_13, (MR_Integer) 0);
          }
          break;
      }
      Var_19 = mercury__char__det_from_int_1_f_0((MR_Integer) 0);
      backend_libs__c_util__output_quoted_char_lang_5_p_3(HeadVar__1_1, HeadVar__2_2, Var_19);
      // direct tailcall eliminated
      next_value_of_HeadVar__3_3 = Strs_14;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
backend_libs__c_util__output_quoted_string_lang_cur_stream_4_p_3(
  MR_Word Lang_5,
  MR_String S_6)
{
  {
    MR_bool succeeded;
    MR_Word Stream_8;

    mercury__io__output_stream_3_p_0(&Stream_8);
    switch (Lang_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Left_19;
          MR_String Right_20;

          mercury__string__split_by_codepoint_4_p_0(S_6, (MR_Integer) 160, &Left_19, &Right_20);
          backend_libs__c_util__do_output_quoted_string_lang_6_p_0(Stream_8, Lang_5, Left_19, (MR_Integer) 0);
          succeeded = (strcmp(Right_20, (MR_String) "") == 0);
          if (!(succeeded))
          {
            MR_String Left_35;
            MR_String Right_36;

            mercury__io__write_string_3_p_0((MR_String) "\" \"");
            mercury__string__split_by_codepoint_4_p_0(Right_20, (MR_Integer) 160, &Left_35, &Right_36);
            backend_libs__c_util__do_output_quoted_string_lang_6_p_0(Stream_8, Lang_5, Left_35, (MR_Integer) 0);
            succeeded = (strcmp(Right_36, (MR_String) "") == 0);
            if (!(succeeded))
            {
              MR_String Left_51;
              MR_String Right_52;

              mercury__io__write_string_3_p_0((MR_String) "\" \"");
              mercury__string__split_by_codepoint_4_p_0(Right_36, (MR_Integer) 160, &Left_51, &Right_52);
              backend_libs__c_util__do_output_quoted_string_lang_6_p_0(Stream_8, Lang_5, Left_51, (MR_Integer) 0);
              succeeded = (strcmp(Right_52, (MR_String) "") == 0);
              if (!(succeeded))
              {
                mercury__io__write_string_3_p_0((MR_String) "\" \"");
                backend_libs__c_util__output_quoted_string_lang_5_p_0(Stream_8, Lang_5, Right_52);
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          backend_libs__c_util__do_output_quoted_string_lang_6_p_0(Stream_8, Lang_5, S_6, (MR_Integer) 0);
        }
        break;
    }
  }
}

void MR_CALL 
backend_libs__c_util__output_quoted_string_lang_cur_stream_4_p_2(
  MR_Word Lang_5,
  MR_String S_6)
{
  {
    MR_Word Stream_8;

    mercury__io__output_stream_3_p_0(&Stream_8);
    backend_libs__c_util__do_output_quoted_string_lang_6_p_0(Stream_8, Lang_5, S_6, (MR_Integer) 0);
  }
}

void MR_CALL 
backend_libs__c_util__output_quoted_string_lang_cur_stream_4_p_1(
  MR_Word Lang_5,
  MR_String S_6)
{
  {
    MR_Word Stream_8;

    mercury__io__output_stream_3_p_0(&Stream_8);
    backend_libs__c_util__do_output_quoted_string_lang_6_p_0(Stream_8, Lang_5, S_6, (MR_Integer) 0);
  }
}

void MR_CALL 
backend_libs__c_util__output_quoted_string_lang_cur_stream_4_p_0(
  MR_Word Lang_5,
  MR_String S_6)
{
  {
    MR_bool succeeded;
    MR_Word Stream_8;
    MR_String Left_19;
    MR_String Right_20;

    mercury__io__output_stream_3_p_0(&Stream_8);
    mercury__string__split_by_codepoint_4_p_0(S_6, (MR_Integer) 160, &Left_19, &Right_20);
    backend_libs__c_util__do_output_quoted_string_lang_6_p_0(Stream_8, Lang_5, Left_19, (MR_Integer) 0);
    succeeded = (strcmp(Right_20, (MR_String) "") == 0);
    if (!(succeeded))
    {
      MR_String Left_35;
      MR_String Right_36;

      mercury__io__write_string_3_p_0((MR_String) "\" \"");
      mercury__string__split_by_codepoint_4_p_0(Right_20, (MR_Integer) 160, &Left_35, &Right_36);
      backend_libs__c_util__do_output_quoted_string_lang_6_p_0(Stream_8, Lang_5, Left_35, (MR_Integer) 0);
      succeeded = (strcmp(Right_36, (MR_String) "") == 0);
      if (!(succeeded))
      {
        mercury__io__write_string_3_p_0((MR_String) "\" \"");
        backend_libs__c_util__output_quoted_string_lang_5_p_0(Stream_8, Lang_5, Right_36);
      }
    }
  }
}

void MR_CALL 
backend_libs__c_util__output_quoted_string_lang_5_p_3(
  MR_Word Stream_6,
  MR_Word Lang_7,
  MR_String Str_8)
{
  {
    MR_bool succeeded;

    switch (Lang_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Left_10;
          MR_String Right_11;

          mercury__string__split_by_codepoint_4_p_0(Str_8, (MR_Integer) 160, &Left_10, &Right_11);
          backend_libs__c_util__do_output_quoted_string_lang_6_p_0(Stream_6, Lang_7, Left_10, (MR_Integer) 0);
          succeeded = (strcmp(Right_11, (MR_String) "") == 0);
          if (!(succeeded))
          {
            MR_String Left_28;
            MR_String Right_29;

            mercury__io__write_string_3_p_0((MR_String) "\" \"");
            mercury__string__split_by_codepoint_4_p_0(Right_11, (MR_Integer) 160, &Left_28, &Right_29);
            backend_libs__c_util__do_output_quoted_string_lang_6_p_0(Stream_6, Lang_7, Left_28, (MR_Integer) 0);
            succeeded = (strcmp(Right_29, (MR_String) "") == 0);
            if (!(succeeded))
            {
              MR_String Left_44;
              MR_String Right_45;

              mercury__io__write_string_3_p_0((MR_String) "\" \"");
              mercury__string__split_by_codepoint_4_p_0(Right_29, (MR_Integer) 160, &Left_44, &Right_45);
              backend_libs__c_util__do_output_quoted_string_lang_6_p_0(Stream_6, Lang_7, Left_44, (MR_Integer) 0);
              succeeded = (strcmp(Right_45, (MR_String) "") == 0);
              if (!(succeeded))
              {
                mercury__io__write_string_3_p_0((MR_String) "\" \"");
                backend_libs__c_util__output_quoted_string_lang_5_p_0(Stream_6, Lang_7, Right_45);
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          backend_libs__c_util__do_output_quoted_string_lang_6_p_0(Stream_6, Lang_7, Str_8, (MR_Integer) 0);
        }
        break;
    }
  }
}

void MR_CALL 
backend_libs__c_util__output_quoted_string_lang_5_p_2(
  MR_Word Stream_6,
  MR_Word Lang_7,
  MR_String Str_8)
{
  {
    backend_libs__c_util__do_output_quoted_string_lang_6_p_0(Stream_6, Lang_7, Str_8, (MR_Integer) 0);
  }
}

void MR_CALL 
backend_libs__c_util__output_quoted_string_lang_5_p_1(
  MR_Word Stream_6,
  MR_Word Lang_7,
  MR_String Str_8)
{
  {
    backend_libs__c_util__do_output_quoted_string_lang_6_p_0(Stream_6, Lang_7, Str_8, (MR_Integer) 0);
  }
}

void MR_CALL 
backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(
  MR_String Str_4)
{
  {
    MR_Word Stream_6;

    mercury__io__output_stream_3_p_0(&Stream_6);
    backend_libs__c_util__output_quoted_string_4_p_0(Stream_6, Str_4);
  }
}

void MR_CALL 
backend_libs__c_util__always_reset_line_num_cur_stream_3_p_0(
  MR_Word MaybeFileName_4)
{
  {
    MR_Word Stream_6;

    mercury__io__output_stream_3_p_0(&Stream_6);
    backend_libs__c_util__always_reset_line_num_4_p_0(Stream_6, MaybeFileName_4);
  }
}

void MR_CALL 
backend_libs__c_util__maybe_reset_line_num_cur_stream_4_p_0(
  MR_Word MaybeSetLineNumbers_5,
  MR_Word MaybeFileName_6)
{
  {
    MR_Word Stream_8;

    mercury__io__output_stream_3_p_0(&Stream_8);
    switch (MaybeSetLineNumbers_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        backend_libs__c_util__always_reset_line_num_4_p_0(Stream_8, MaybeFileName_6);
        break;
    }
  }
}

void MR_CALL 
backend_libs__c_util__maybe_reset_line_num_5_p_0(
  MR_Word Stream_6,
  MR_Word MaybeSetLineNumbers_7,
  MR_Word MaybeFileName_8)
{
  switch (MaybeSetLineNumbers_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      backend_libs__c_util__always_reset_line_num_4_p_0(Stream_6, MaybeFileName_8);
      break;
  }
}

void MR_CALL 
backend_libs__c_util__always_set_line_num_cur_stream_4_p_0(
  MR_String File_5,
  MR_Integer Line_6)
{
  {
    MR_Word Stream_8;

    mercury__io__output_stream_3_p_0(&Stream_8);
    backend_libs__c_util__always_set_line_num_5_p_0(Stream_8, File_5, Line_6);
  }
}

void MR_CALL 
backend_libs__c_util__maybe_set_line_num_cur_stream_5_p_0(
  MR_Word MaybeSetLineNumbers_6,
  MR_String File_7,
  MR_Integer Line_8)
{
  {
    MR_Word Stream_10;

    mercury__io__output_stream_3_p_0(&Stream_10);
    switch (MaybeSetLineNumbers_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        backend_libs__c_util__always_set_line_num_5_p_0(Stream_10, File_7, Line_8);
        break;
    }
  }
}

void MR_CALL 
backend_libs__c_util__maybe_set_line_num_6_p_0(
  MR_Word Stream_7,
  MR_Word MaybeSetLineNumbers_8,
  MR_String File_9,
  MR_Integer Line_10)
{
  switch (MaybeSetLineNumbers_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      backend_libs__c_util__always_set_line_num_5_p_0(Stream_7, File_9, Line_10);
      break;
  }
}

void MR_CALL 
backend_libs__c_util__always_set_line_num_5_p_0(
  MR_Word Stream_6,
  MR_String File_7,
  MR_Integer Line_8)
{
  {
    MR_bool succeeded = (Line_8 > (MR_Integer) 0);

    if (succeeded)
    {
      succeeded = (strcmp(File_7, (MR_String) "") == 0);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word CanPrint_10;

      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "#line ");
      mercury__io__write_int_4_p_0(Stream_6, Line_8);
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) " \"");
{
#define MR_PROC_LABEL backend_libs__c_util__always_set_line_num_5_p_0

	MR_String Str;
	MR_Word CanPrintDirectly;

	Str =  File_7 ;
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
	 CanPrint_10  = CanPrintDirectly;
}
      switch (CanPrint_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          backend_libs__c_util__output_quoted_string_4_p_0(Stream_6, File_7);
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_4_p_0(Stream_6, File_7);
          break;
      }
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\"\n");
    }
    else
    {
      backend_libs__c_util__always_reset_line_num_4_p_0(Stream_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
  }
}

void MR_CALL 
backend_libs__c_util__always_reset_line_num_4_p_0(
  MR_Word Stream_5,
  MR_Word MaybeFileName_6)
{
  {
    MR_bool succeeded;
    MR_Integer Line_8;
    MR_String FileName_9;

    mercury__io__get_output_line_number_3_p_0(&Line_8);
    if ((MaybeFileName_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__io__output_stream_name_4_p_0(Stream_5, &FileName_9);
    else
      FileName_9 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeFileName_6, (MR_Integer) 0)));
    succeeded = (Line_8 > (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (strcmp(FileName_9, (MR_String) "") == 0);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word CanPrint_10;
      MR_Integer Var_18;

      mercury__io__write_string_4_p_0(Stream_5, (MR_String) "#line ");
      Var_18 = (Line_8 + (MR_Integer) 1);
      mercury__io__write_int_4_p_0(Stream_5, Var_18);
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) " \"");
{
#define MR_PROC_LABEL backend_libs__c_util__always_reset_line_num_4_p_0

	MR_String Str;
	MR_Word CanPrintDirectly;

	Str =  FileName_9 ;
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
	 CanPrint_10  = CanPrintDirectly;
}
      switch (CanPrint_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          backend_libs__c_util__output_quoted_string_4_p_0(Stream_5, FileName_9);
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_4_p_0(Stream_5, FileName_9);
          break;
      }
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\"\n");
    }
    else
    {
    }
  }
}

void MR_CALL 
backend_libs__c_util__output_quoted_string_4_p_0(
  MR_Word Stream_5,
  MR_String Str_6)
{
  {
    MR_bool succeeded;
    MR_String Left_18;
    MR_String Right_19;

    mercury__string__split_by_codepoint_4_p_0(Str_6, (MR_Integer) 160, &Left_18, &Right_19);
    backend_libs__c_util__do_output_quoted_string_lang_6_p_0(Stream_5, (MR_Integer) 0, Left_18, (MR_Integer) 0);
    succeeded = (strcmp(Right_19, (MR_String) "") == 0);
    if (!(succeeded))
    {
      MR_String Left_34;
      MR_String Right_35;

      mercury__io__write_string_3_p_0((MR_String) "\" \"");
      mercury__string__split_by_codepoint_4_p_0(Right_19, (MR_Integer) 160, &Left_34, &Right_35);
      backend_libs__c_util__do_output_quoted_string_lang_6_p_0(Stream_5, (MR_Integer) 0, Left_34, (MR_Integer) 0);
      succeeded = (strcmp(Right_35, (MR_String) "") == 0);
      if (!(succeeded))
      {
        mercury__io__write_string_3_p_0((MR_String) "\" \"");
        backend_libs__c_util__output_quoted_string_lang_5_p_0(Stream_5, (MR_Integer) 0, Right_35);
      }
    }
  }
}

void MR_CALL 
backend_libs__c_util__output_quoted_string_lang_5_p_0(
  MR_Word Stream_6,
  MR_Word Lang_7,
  MR_String Str_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_String Left_10;
    MR_String Right_11;

    // setup for model_det tailcalls optimized into a loop
    mercury__string__split_by_codepoint_4_p_0(Str_8, (MR_Integer) 160, &Left_10, &Right_11);
    backend_libs__c_util__do_output_quoted_string_lang_6_p_0(Stream_6, Lang_7, Left_10, (MR_Integer) 0);
    succeeded = (strcmp(Right_11, (MR_String) "") == 0);
    if (!(succeeded))
    {
      MR_String Left_28;
      MR_String Right_29;

      mercury__io__write_string_3_p_0((MR_String) "\" \"");
      mercury__string__split_by_codepoint_4_p_0(Right_11, (MR_Integer) 160, &Left_28, &Right_29);
      backend_libs__c_util__do_output_quoted_string_lang_6_p_0(Stream_6, Lang_7, Left_28, (MR_Integer) 0);
      succeeded = (strcmp(Right_29, (MR_String) "") == 0);
      if (!(succeeded))
      {
        MR_String next_value_of_Str_8;

        mercury__io__write_string_3_p_0((MR_String) "\" \"");
        // direct tailcall eliminated
        next_value_of_Str_8 = Right_29;
        Str_8 = next_value_of_Str_8;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
backend_libs__c_util__do_output_quoted_string_lang_6_p_0(
  MR_Word Stream_7,
  MR_Word Lang_8,
  MR_String Str_9,
  MR_Integer Cur_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Next_12;
    MR_Char Char_13;

    // setup for model_det tailcalls optimized into a loop
    succeeded = mercury__string__unsafe_index_next_4_p_0(Str_9, Cur_10, &Next_12, &Char_13);
    if (succeeded)
    {
      MR_Integer next_value_of_Cur_10;

      backend_libs__c_util__output_quoted_char_lang_5_p_3(Stream_7, Lang_8, Char_13);
      // direct tailcall eliminated
      next_value_of_Cur_10 = Next_12;
      Cur_10 = next_value_of_Cur_10;
      continue;
    }
    else
    {
    }
    break;
  }
}

static void MR_CALL 
backend_libs__c_util__output_quoted_char_lang_5_p_3_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_EscapeCodeChars_4;

    backend_libs__c_util__octal_escape_any_int_2_p_0(((MR_Integer) wrapper_arg_1), &conv0_EscapeCodeChars_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_EscapeCodeChars_4));
  }
}

static void MR_CALL 
backend_libs__c_util__output_quoted_char_lang_5_p_3(
  MR_Word Stream_6,
  MR_Word Lang_7,
  MR_Char Char_8)
{
  {
    MR_bool succeeded = (Lang_7 == (MR_Integer) 1);
    MR_String EscapedCharStr_10;
    MR_Word RevQuotedCharStr_17;
    MR_Word Var_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word RevEscapeChars_23;

    if (succeeded)
      switch (Char_8) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Char) 7:
          {
            RevEscapeChars_23 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[10]);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 11:
          {
            RevEscapeChars_23 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[12]);
            succeeded = MR_TRUE;
          }
          break;
      }
    if (succeeded)
    {
      mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, RevEscapeChars_23, Var_18, &RevQuotedCharStr_17);
    }
    else
    {
      MR_Char EscapeChar_24;

      switch (Char_8) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Char) 7:
          {
            EscapeChar_24 = (MR_Char) 97;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 8:
          {
            EscapeChar_24 = (MR_Char) 98;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 9:
          {
            EscapeChar_24 = (MR_Char) 116;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 10:
          {
            EscapeChar_24 = (MR_Char) 110;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 11:
          {
            EscapeChar_24 = (MR_Char) 118;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 12:
          {
            EscapeChar_24 = (MR_Char) 102;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 13:
          {
            EscapeChar_24 = (MR_Char) 114;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 34:
          {
            EscapeChar_24 = (MR_Char) 34;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 39:
          {
            EscapeChar_24 = (MR_Char) 39;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Char) 92:
          {
            EscapeChar_24 = (MR_Char) 92;
            succeeded = MR_TRUE;
          }
          break;
      }
      if (succeeded)
      {
        {
          RevQuotedCharStr_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), RevQuotedCharStr_17, 0) = ((MR_Box) (MR_Word) (EscapeChar_24));
          MR_hl_field(MR_mktag(1), RevQuotedCharStr_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[7])));
        }
      }
      else
      {
        succeeded = (Lang_7 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (Char_8 == (MR_Char) 63);
        if (succeeded)
        {
          RevQuotedCharStr_17 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[13]);
        }
        else
        {
          succeeded = mercury__char__is_alnum_1_p_0(Char_8);
          if (!(succeeded))
          {
            succeeded = mercury__string__contains_char_2_p_0((MR_String) " !\"#%&\'()*+,-./:;<=>\?[\\]^_{|}~", Char_8);
          }
          if (succeeded)
            {
              RevQuotedCharStr_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), RevQuotedCharStr_17, 0) = ((MR_Box) (MR_Word) (Char_8));
              MR_hl_field(MR_mktag(1), RevQuotedCharStr_17, 1) = ((MR_Box) (Var_18));
            }
          else
          {
            succeeded = mercury__char__to_int_2_p_1(Char_8, (MR_Integer) 0);
            if (succeeded)
            {
              RevQuotedCharStr_17 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[8]);
            }
            else
            {
              MR_Integer Int_25;

              Int_25 = mercury__char__to_int_1_f_0(Char_8);
              succeeded = (Int_25 >= (MR_Integer) 128);
              if (succeeded)
                switch (Lang_7) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word CodeUnits_26;

                      succeeded = mercury__char__to_utf8_2_p_0(Char_8, &CodeUnits_26);
                      if (succeeded)
                      {
                        MR_Word TypeCtorInfo_35_49;
                        MR_Word EscapeCharss_27;
                        MR_Word EscapeChars_28;

                        mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__c_util_scalar_common_1[0], (MR_Word) &backend_libs__c_util_scalar_common_3[0], CodeUnits_26, &EscapeCharss_27);
                        TypeCtorInfo_35_49 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
                        mercury__list__condense_2_p_0(TypeCtorInfo_35_49, EscapeCharss_27, &EscapeChars_28);
                        mercury__list__reverse_prepend_3_p_0(TypeCtorInfo_35_49, EscapeChars_28, Var_18, &RevQuotedCharStr_17);
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
                      RevQuotedCharStr_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), RevQuotedCharStr_17, 0) = ((MR_Box) (MR_Word) (Char_8));
                      MR_hl_field(MR_mktag(1), RevQuotedCharStr_17, 1) = ((MR_Box) (Var_18));
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      RevQuotedCharStr_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), RevQuotedCharStr_17, 0) = ((MR_Box) (MR_Word) (Char_8));
                      MR_hl_field(MR_mktag(1), RevQuotedCharStr_17, 1) = ((MR_Box) (Var_18));
                    }
                    break;
                }
              else
              {
                MR_Word EscapeChars_43;

                switch (Lang_7) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Integer Int_71;

                      mercury__char__to_int_2_p_0(Char_8, &Int_71);
                      backend_libs__c_util__octal_escape_any_int_2_p_0(Int_71, &EscapeChars_43);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Integer Int_74;
                      MR_String HexString_75;
                      MR_String Var_80;

                      mercury__char__to_int_2_p_0(Char_8, &Int_74);
                      mercury__string__format__format_unsigned_int_component_width_noprec_5_p_0((MR_Word) &backend_libs__c_util_scalar_common_4[0], (MR_Integer) 4, (MR_Integer) 2, Int_74, &Var_80);
                      HexString_75 = mercury__string__f_43_43_2_f_0((MR_String) "\\u", Var_80);
                      mercury__string__to_char_list_2_p_0(HexString_75, &EscapeChars_43);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Integer Int_92;

                      mercury__char__to_int_2_p_0(Char_8, &Int_92);
                      backend_libs__c_util__octal_escape_any_int_2_p_0(Int_92, &EscapeChars_43);
                    }
                    break;
                }
                mercury__list__reverse_prepend_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, EscapeChars_43, Var_18, &RevQuotedCharStr_17);
              }
            }
          }
        }
      }
    }
    mercury__string__from_rev_char_list_2_p_0(RevQuotedCharStr_17, &EscapedCharStr_10);
    mercury__io__write_string_4_p_0(Stream_6, EscapedCharStr_10);
  }
}

static void MR_CALL 
backend_libs__c_util__octal_escape_any_int_2_p_0(
  MR_Integer Int_3,
  MR_Word * EscapeCodeChars_4)
{
  {
    MR_String OctalString0_5;
    MR_String OctalString_6;
    MR_Word Var_11;

    mercury__string__int_to_base_string_3_p_0(Int_3, (MR_Integer) 8, &OctalString0_5);
    mercury__string__pad_left_4_p_0(OctalString0_5, (MR_Char) 48, (MR_Integer) 3, &OctalString_6);
    Var_11 = mercury__string__to_char_list_1_f_0(OctalString_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *EscapeCodeChars_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_11));
    }
  }
}

MR_Word MR_CALL 
backend_libs__c_util__lookup_line_numbers_2_f_0(
  MR_Word Globals_4,
  MR_Word Option_5)
{
  {
    MR_Word MaybeSetLineNumbers_6;
    MR_Word OptionValue_7;

    libs__globals__lookup_bool_option_3_p_0(Globals_4, Option_5, &OptionValue_7);
    switch (OptionValue_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeSetLineNumbers_6 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        MaybeSetLineNumbers_6 = (MR_Integer) 1;
        break;
    }
    return MaybeSetLineNumbers_6;
  }
}

static MR_bool MR_CALL 
backend_libs__c_util____Unify____binop_category_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__c_util____Unify____binop_category_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__c_util____Compare____binop_category_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__c_util____Compare____binop_category_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__c_util____Unify____literal_language_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__c_util____Unify____literal_language_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__c_util____Compare____literal_language_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__c_util____Compare____literal_language_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__c_util____Unify____maybe_set_line_numbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__c_util____Unify____maybe_set_line_numbers_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__c_util____Compare____maybe_set_line_numbers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__c_util____Compare____maybe_set_line_numbers_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
backend_libs__c_util____Unify____multi_string_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = backend_libs__c_util____Unify____multi_string_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
backend_libs__c_util____Compare____multi_string_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    backend_libs__c_util____Compare____multi_string_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module backend_libs.c_util.
