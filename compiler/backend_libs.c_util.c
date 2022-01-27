/*
** Automatically generated from `c_util.m'
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


/* :- module backend_libs.c_util. */
/* :- implementation. */

/*
INIT mercury__backend_libs__c_util__init
ENDINIT
*/

#include "backend_libs.c_util.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
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
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 143 "backend_libs.c_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__c_util__list__pti_list_1__plain_builtin__type_ctor_info_character_0;

#line 146 "backend_libs.c_util.c"
static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_0;

#line 149 "backend_libs.c_util.c"
static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_1;

#line 152 "backend_libs.c_util.c"
static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_2;

#line 155 "backend_libs.c_util.c"
static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_3;

#line 158 "backend_libs.c_util.c"
static const MR_PseudoTypeInfo backend_libs__c_util__backend_libs__c_util__field_types_binop_category_0_4[1];

#line 161 "backend_libs.c_util.c"
static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_4;

#line 164 "backend_libs.c_util.c"
static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_5;

#line 167 "backend_libs.c_util.c"
static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_6;

#line 170 "backend_libs.c_util.c"
static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_7;

#line 173 "backend_libs.c_util.c"
static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_8;

#line 176 "backend_libs.c_util.c"
static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_9;

#line 179 "backend_libs.c_util.c"
static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_10;

#line 182 "backend_libs.c_util.c"
static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_11;

#line 185 "backend_libs.c_util.c"
static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_12;

#line 188 "backend_libs.c_util.c"
static const MR_DuFunctorDescPtr backend_libs__c_util__backend_libs__c_util__du_stag_ordered_binop_category_0_0[12];

#line 191 "backend_libs.c_util.c"
static const MR_DuFunctorDescPtr backend_libs__c_util__backend_libs__c_util__du_stag_ordered_binop_category_0_1[1];

#line 194 "backend_libs.c_util.c"
static const MR_DuPtagLayout backend_libs__c_util__backend_libs__c_util__du_ptag_ordered_binop_category_0[2];

#line 197 "backend_libs.c_util.c"
static const MR_DuFunctorDescPtr backend_libs__c_util__backend_libs__c_util__du_name_ordered_binop_category_0[13];

#line 200 "backend_libs.c_util.c"
static const MR_Integer backend_libs__c_util__backend_libs__c_util__functor_number_map_binop_category_0[13];

#line 203 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_0;

#line 206 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_1;

#line 209 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_2;

#line 212 "backend_libs.c_util.c"
static const MR_EnumFunctorDescPtr backend_libs__c_util__backend_libs__c_util__enum_value_ordered_literal_language_0[3];

#line 215 "backend_libs.c_util.c"
static const MR_EnumFunctorDescPtr backend_libs__c_util__backend_libs__c_util__enum_name_ordered_literal_language_0[3];

#line 218 "backend_libs.c_util.c"
static const MR_Integer backend_libs__c_util__backend_libs__c_util__functor_number_map_literal_language_0[3];

#line 221 "backend_libs.c_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__c_util__list__ti_list_1builtin__type_ctor_info_string_0;

#line 224 "backend_libs.c_util.c"
static MR_bool MR_CALL 
backend_libs__c_util____Unify____binop_category_0_0_10001(
#line 227 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 229 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2);

#line 232 "backend_libs.c_util.c"
static void MR_CALL 
backend_libs__c_util____Compare____binop_category_0_0_10001(
#line 235 "backend_libs.c_util.c"
  MR_Box * backend_libs__c_util__wrapper_arg_1,
#line 237 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2,
#line 239 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_3);

#line 242 "backend_libs.c_util.c"
static MR_bool MR_CALL 
backend_libs__c_util____Unify____literal_language_0_0_10001(
#line 245 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 247 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2);

#line 250 "backend_libs.c_util.c"
static void MR_CALL 
backend_libs__c_util____Compare____literal_language_0_0_10001(
#line 253 "backend_libs.c_util.c"
  MR_Box * backend_libs__c_util__wrapper_arg_1,
#line 255 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2,
#line 257 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_3);

#line 260 "backend_libs.c_util.c"
static MR_bool MR_CALL 
backend_libs__c_util____Unify____multi_string_0_0_10001(
#line 263 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 265 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2);

#line 268 "backend_libs.c_util.c"
static void MR_CALL 
backend_libs__c_util____Compare____multi_string_0_0_10001(
#line 271 "backend_libs.c_util.c"
  MR_Box * backend_libs__c_util__wrapper_arg_1,
#line 273 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2,
#line 275 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_3);

#line 542 "c_util.m"
static void MR_CALL 
backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_p_0(
#line 542 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__1_1,
#line 542 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__2_2,
#line 542 "c_util.m"
  MR_Word * backend_libs__c_util__L_3);

#line 440 "c_util.m"
static void MR_CALL 
backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0_1(
#line 440 "c_util.m"
  MR_Box backend_libs__c_util__closure_arg,
#line 440 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 440 "c_util.m"
  MR_Box * backend_libs__c_util__wrapper_arg_2);

#line 389 "c_util.m"
static MR_String MR_CALL 
backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0(
#line 389 "c_util.m"
  MR_Char backend_libs__c_util__Char_5);

#line 558 "c_util.m"
static void MR_CALL 
backend_libs__c_util__octal_escape_any_int_2_p_0(
#line 558 "c_util.m"
  MR_Integer backend_libs__c_util__Int_3,
#line 558 "c_util.m"
  MR_Word * backend_libs__c_util__EscapeCodeChars_4);

#line 493 "c_util.m"
static void MR_CALL 
backend_libs__c_util__quote_one_char_c_3_p_0_1(
#line 493 "c_util.m"
  MR_Box backend_libs__c_util__closure_arg,
#line 493 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 493 "c_util.m"
  MR_Box * backend_libs__c_util__wrapper_arg_2);

#line 467 "c_util.m"
static void MR_CALL 
backend_libs__c_util__quote_one_char_c_3_p_0(
#line 467 "c_util.m"
  MR_Char backend_libs__c_util__Char_4,
#line 467 "c_util.m"
  MR_Word backend_libs__c_util__RevChars0_5,
#line 467 "c_util.m"
  MR_Word * backend_libs__c_util__RevChars_6);

#line 440 "c_util.m"
static void MR_CALL 
backend_libs__c_util__output_quoted_char_lang_4_p_3_1(
#line 440 "c_util.m"
  MR_Box backend_libs__c_util__closure_arg,
#line 440 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 440 "c_util.m"
  MR_Box * backend_libs__c_util__wrapper_arg_2);

#line 380 "c_util.m"
static void MR_CALL 
backend_libs__c_util__output_quoted_char_lang_4_p_3(
#line 380 "c_util.m"
  MR_Word backend_libs__c_util__Lang_5,
#line 380 "c_util.m"
  MR_Char backend_libs__c_util__Char_6);

#line 362 "c_util.m"
static void MR_CALL 
backend_libs__c_util__do_output_quoted_string_5_p_0(
#line 362 "c_util.m"
  MR_Word backend_libs__c_util__Lang_6,
#line 362 "c_util.m"
  MR_String backend_libs__c_util__S_7,
#line 362 "c_util.m"
  MR_Integer backend_libs__c_util__Cur_8);

#line 282 "c_util.m"
static void MR_CALL 
backend_libs__c_util__can_print_directly_4_p_0(
#line 282 "c_util.m"
  MR_String backend_libs__c_util__Str_1,
#line 282 "c_util.m"
  MR_Word * backend_libs__c_util__CanPrintDirectly_2);

#line 399 "c_util.m"
static void MR_CALL 
backend_libs__c_util__quote_string_1_f_0_1(
#line 399 "c_util.m"
  MR_Box backend_libs__c_util__closure_arg,
#line 399 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 399 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_2,
#line 399 "c_util.m"
  MR_Box * backend_libs__c_util__wrapper_arg_3);


static /* final */ const MR_Box backend_libs__c_util_scalar_common_1[14][2];

static /* final */ const MR_Box backend_libs__c_util_scalar_common_2[1][6];

static /* final */ const MR_Box backend_libs__c_util_scalar_common_3[4][3];

static /* final */ const MR_Box backend_libs__c_util_scalar_common_4[2][1];

static /* final */ const MR_Box backend_libs__c_util_scalar_common_6[1][5];


#line 594 "c_util.m"
/* sealed */ struct backend_libs__c_util__vector_common_type_5_0_s {
#line 594 "c_util.m"
  const MR_String backend_libs__c_util__vector_common_type_5_0__vct_5_f_0;
#line 594 "c_util.m"
};

static /* final */ const struct backend_libs__c_util__vector_common_type_5_0_s backend_libs__c_util_vector_common_5[14];



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
    ((MR_Box) (backend_libs__c_util__output_quoted_char_lang_4_p_3_1)),
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


static /* final */ const struct backend_libs__c_util__vector_common_type_5_0_s backend_libs__c_util_vector_common_5[14] = {
  /* row 0 */   {     (MR_String) "MR_mktag" },
  /* row 1 */   {     (MR_String) "MR_tag" },
  /* row 2 */   {     (MR_String) "MR_unmktag" },
  /* row 3 */   {     (MR_String) "MR_strip_tag" },
  /* row 4 */   {     (MR_String) "MR_mkbody" },
  /* row 5 */   {     (MR_String) "MR_unmkbody" },
  /* row 6 */   {     (MR_String) "~" },
  /* row 7 */   {     (MR_String) "!" },
  /* row 8 */   {     (MR_String) "MR_hash_string" },
  /* row 9 */   {     (MR_String) "MR_hash_string2" },
  /* row 10 */   {     (MR_String) "MR_hash_string3" },
  /* row 11 */   {     (MR_String) "MR_hash_string4" },
  /* row 12 */   {     (MR_String) "MR_hash_string5" },
  /* row 13 */   {     (MR_String) "MR_hash_string6" },
};


#include "backend_libs.c_util.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 564 "backend_libs.c_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__c_util__list__pti_list_1__plain_builtin__type_ctor_info_character_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
  }
};

#line 572 "backend_libs.c_util.c"
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
  NULL
};

#line 587 "backend_libs.c_util.c"
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
  NULL
};

#line 602 "backend_libs.c_util.c"
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
  NULL
};

#line 617 "backend_libs.c_util.c"
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
  NULL
};

#line 632 "backend_libs.c_util.c"
static const MR_PseudoTypeInfo backend_libs__c_util__backend_libs__c_util__field_types_binop_category_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 637 "backend_libs.c_util.c"
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
  NULL
};

#line 652 "backend_libs.c_util.c"
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
  NULL
};

#line 667 "backend_libs.c_util.c"
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
  NULL
};

#line 682 "backend_libs.c_util.c"
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
  NULL
};

#line 697 "backend_libs.c_util.c"
static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_8 = {
  (MR_String) "float_compare_binop",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 7,
  (MR_Integer) 8,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 712 "backend_libs.c_util.c"
static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_9 = {
  (MR_String) "float_arith_binop",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 9,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 727 "backend_libs.c_util.c"
static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_10 = {
  (MR_String) "int_or_bool_binary_infix_binop",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 9,
  (MR_Integer) 10,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 742 "backend_libs.c_util.c"
static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_11 = {
  (MR_String) "int_macro_binop",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 10,
  (MR_Integer) 11,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 757 "backend_libs.c_util.c"
static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_12 = {
  (MR_String) "float_macro_binop",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 11,
  (MR_Integer) 12,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 772 "backend_libs.c_util.c"
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

#line 788 "backend_libs.c_util.c"
static const MR_DuFunctorDescPtr backend_libs__c_util__backend_libs__c_util__du_stag_ordered_binop_category_0_1[1] = {
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_4
};

#line 793 "backend_libs.c_util.c"
static const MR_DuPtagLayout backend_libs__c_util__backend_libs__c_util__du_ptag_ordered_binop_category_0[2] = {
  {
    (MR_Integer) 12,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    backend_libs__c_util__backend_libs__c_util__du_stag_ordered_binop_category_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__c_util__backend_libs__c_util__du_stag_ordered_binop_category_0_1
  }
};

#line 807 "backend_libs.c_util.c"
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

#line 824 "backend_libs.c_util.c"
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

#line 841 "backend_libs.c_util.c"
const MR_TypeCtorInfo_Struct backend_libs__c_util__backend_libs__c_util__type_ctor_info_binop_category_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 858 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_0 = {
  (MR_String) "literal_c",
  (MR_Integer) 0
};

#line 864 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_1 = {
  (MR_String) "literal_java",
  (MR_Integer) 1
};

#line 870 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_2 = {
  (MR_String) "literal_csharp",
  (MR_Integer) 2
};

#line 876 "backend_libs.c_util.c"
static const MR_EnumFunctorDescPtr backend_libs__c_util__backend_libs__c_util__enum_value_ordered_literal_language_0[3] = {
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_0,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_1,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_2
};

#line 883 "backend_libs.c_util.c"
static const MR_EnumFunctorDescPtr backend_libs__c_util__backend_libs__c_util__enum_name_ordered_literal_language_0[3] = {
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_0,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_2,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_1
};

#line 890 "backend_libs.c_util.c"
static const MR_Integer backend_libs__c_util__backend_libs__c_util__functor_number_map_literal_language_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 897 "backend_libs.c_util.c"
const MR_TypeCtorInfo_Struct backend_libs__c_util__backend_libs__c_util__type_ctor_info_literal_language_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 914 "backend_libs.c_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__c_util__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 922 "backend_libs.c_util.c"
const MR_TypeCtorInfo_Struct backend_libs__c_util__backend_libs__c_util__type_ctor_info_multi_string_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 939 "backend_libs.c_util.c"
static MR_bool MR_CALL 
backend_libs__c_util____Unify____binop_category_0_0_10001(
#line 942 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 944 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2)
#line 946 "backend_libs.c_util.c"
{
#line 948 "backend_libs.c_util.c"
  {
#line 950 "backend_libs.c_util.c"
    MR_bool backend_libs__c_util__succeeded;

#line 953 "backend_libs.c_util.c"
    {
#line 955 "backend_libs.c_util.c"
      backend_libs__c_util__succeeded = backend_libs__c_util____Unify____binop_category_0_0(((MR_Word) backend_libs__c_util__wrapper_arg_1), ((MR_Word) backend_libs__c_util__wrapper_arg_2));
    }
#line 958 "backend_libs.c_util.c"
    return backend_libs__c_util__succeeded;
#line 960 "backend_libs.c_util.c"
  }
#line 962 "backend_libs.c_util.c"
}

#line 965 "backend_libs.c_util.c"
static void MR_CALL 
backend_libs__c_util____Compare____binop_category_0_0_10001(
#line 968 "backend_libs.c_util.c"
  MR_Box * backend_libs__c_util__wrapper_arg_1,
#line 970 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2,
#line 972 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_3)
#line 974 "backend_libs.c_util.c"
{
#line 976 "backend_libs.c_util.c"
  {
#line 978 "backend_libs.c_util.c"
    MR_Word backend_libs__c_util__conv0_HeadVar__1_1;

#line 981 "backend_libs.c_util.c"
    {
#line 983 "backend_libs.c_util.c"
      backend_libs__c_util____Compare____binop_category_0_0(&backend_libs__c_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__c_util__wrapper_arg_2), ((MR_Word) backend_libs__c_util__wrapper_arg_3));
    }
#line 986 "backend_libs.c_util.c"
    *backend_libs__c_util__wrapper_arg_1 = ((MR_Box) (backend_libs__c_util__conv0_HeadVar__1_1));
#line 988 "backend_libs.c_util.c"
  }
#line 990 "backend_libs.c_util.c"
}

#line 993 "backend_libs.c_util.c"
static MR_bool MR_CALL 
backend_libs__c_util____Unify____literal_language_0_0_10001(
#line 996 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 998 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2)
#line 1000 "backend_libs.c_util.c"
{
#line 1002 "backend_libs.c_util.c"
  {
#line 1004 "backend_libs.c_util.c"
    MR_bool backend_libs__c_util__succeeded;

#line 1007 "backend_libs.c_util.c"
    {
#line 1009 "backend_libs.c_util.c"
      backend_libs__c_util__succeeded = backend_libs__c_util____Unify____literal_language_0_0(((MR_Word) backend_libs__c_util__wrapper_arg_1), ((MR_Word) backend_libs__c_util__wrapper_arg_2));
    }
#line 1012 "backend_libs.c_util.c"
    return backend_libs__c_util__succeeded;
#line 1014 "backend_libs.c_util.c"
  }
#line 1016 "backend_libs.c_util.c"
}

#line 1019 "backend_libs.c_util.c"
static void MR_CALL 
backend_libs__c_util____Compare____literal_language_0_0_10001(
#line 1022 "backend_libs.c_util.c"
  MR_Box * backend_libs__c_util__wrapper_arg_1,
#line 1024 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2,
#line 1026 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_3)
#line 1028 "backend_libs.c_util.c"
{
#line 1030 "backend_libs.c_util.c"
  {
#line 1032 "backend_libs.c_util.c"
    MR_Word backend_libs__c_util__conv0_HeadVar__1_1;

#line 1035 "backend_libs.c_util.c"
    {
#line 1037 "backend_libs.c_util.c"
      backend_libs__c_util____Compare____literal_language_0_0(&backend_libs__c_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__c_util__wrapper_arg_2), ((MR_Word) backend_libs__c_util__wrapper_arg_3));
    }
#line 1040 "backend_libs.c_util.c"
    *backend_libs__c_util__wrapper_arg_1 = ((MR_Box) (backend_libs__c_util__conv0_HeadVar__1_1));
#line 1042 "backend_libs.c_util.c"
  }
#line 1044 "backend_libs.c_util.c"
}

#line 1047 "backend_libs.c_util.c"
static MR_bool MR_CALL 
backend_libs__c_util____Unify____multi_string_0_0_10001(
#line 1050 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 1052 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2)
#line 1054 "backend_libs.c_util.c"
{
#line 1056 "backend_libs.c_util.c"
  {
#line 1058 "backend_libs.c_util.c"
    MR_bool backend_libs__c_util__succeeded;

#line 1061 "backend_libs.c_util.c"
    {
#line 1063 "backend_libs.c_util.c"
      backend_libs__c_util__succeeded = backend_libs__c_util____Unify____multi_string_0_0(((MR_Word) backend_libs__c_util__wrapper_arg_1), ((MR_Word) backend_libs__c_util__wrapper_arg_2));
    }
#line 1066 "backend_libs.c_util.c"
    return backend_libs__c_util__succeeded;
#line 1068 "backend_libs.c_util.c"
  }
#line 1070 "backend_libs.c_util.c"
}

#line 1073 "backend_libs.c_util.c"
static void MR_CALL 
backend_libs__c_util____Compare____multi_string_0_0_10001(
#line 1076 "backend_libs.c_util.c"
  MR_Box * backend_libs__c_util__wrapper_arg_1,
#line 1078 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2,
#line 1080 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_3)
#line 1082 "backend_libs.c_util.c"
{
#line 1084 "backend_libs.c_util.c"
  {
#line 1086 "backend_libs.c_util.c"
    MR_Word backend_libs__c_util__conv0_HeadVar__1_1;

#line 1089 "backend_libs.c_util.c"
    {
#line 1091 "backend_libs.c_util.c"
      backend_libs__c_util____Compare____multi_string_0_0(&backend_libs__c_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__c_util__wrapper_arg_2), ((MR_Word) backend_libs__c_util__wrapper_arg_3));
    }
#line 1094 "backend_libs.c_util.c"
    *backend_libs__c_util__wrapper_arg_1 = ((MR_Box) (backend_libs__c_util__conv0_HeadVar__1_1));
#line 1096 "backend_libs.c_util.c"
  }
#line 1098 "backend_libs.c_util.c"
}

#line 542 "c_util.m"
static void MR_CALL 
backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_p_0(
#line 542 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__1_1,
#line 542 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__2_2,
#line 542 "c_util.m"
  MR_Word * backend_libs__c_util__L_3)
#line 542 "c_util.m"
{
#line 544 "c_util.m"
  while (MR_TRUE)
#line 544 "c_util.m"
    {
#line 544 "c_util.m"
      /* tailcall optimized into a loop */
#line 544 "c_util.m"
      {
#line 544 "c_util.m"
        MR_bool backend_libs__c_util__succeeded;

#line 544 "c_util.m"
        if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 544 "c_util.m"
          *backend_libs__c_util__L_3 = backend_libs__c_util__HeadVar__2_2;
#line 544 "c_util.m"
        else
#line 545 "c_util.m"
          {
#line 545 "c_util.m"
            MR_Box backend_libs__c_util__X_5 = (MR_hl_field(MR_mktag(1), backend_libs__c_util__HeadVar__1_1, (MR_Integer) 0));
#line 545 "c_util.m"
            MR_Word backend_libs__c_util__Xs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__c_util__HeadVar__1_1, (MR_Integer) 1)));
#line 545 "c_util.m"
            MR_Word backend_libs__c_util__V_9_9;

#line 546 "c_util.m"
            {
#line 546 "c_util.m"
              backend_libs__c_util__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 546 "c_util.m"
              MR_hl_field(MR_mktag(1), backend_libs__c_util__V_9_9, 0) = backend_libs__c_util__X_5;
#line 546 "c_util.m"
              MR_hl_field(MR_mktag(1), backend_libs__c_util__V_9_9, 1) = ((MR_Box) (backend_libs__c_util__HeadVar__2_2));
#line 546 "c_util.m"
            }
#line 546 "c_util.m"
            /* direct tailcall eliminated */
#line 546 "c_util.m"
            {
#line 546 "c_util.m"
              MR_Word backend_libs__c_util__HeadVar__1__tmp_copy_1 = backend_libs__c_util__Xs_6;
#line 546 "c_util.m"
              MR_Word backend_libs__c_util__HeadVar__2__tmp_copy_2 = backend_libs__c_util__V_9_9;

#line 546 "c_util.m"
              backend_libs__c_util__HeadVar__2_2 = backend_libs__c_util__HeadVar__2__tmp_copy_2;
#line 546 "c_util.m"
              backend_libs__c_util__HeadVar__1_1 = backend_libs__c_util__HeadVar__1__tmp_copy_1;
#line 546 "c_util.m"
            }
#line 546 "c_util.m"
            continue;
#line 545 "c_util.m"
          }
#line 544 "c_util.m"
      }
#line 544 "c_util.m"
      break;
#line 544 "c_util.m"
    }
#line 542 "c_util.m"
}

#line 440 "c_util.m"
static void MR_CALL 
backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0_1(
#line 440 "c_util.m"
  MR_Box backend_libs__c_util__closure_arg,
#line 440 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 440 "c_util.m"
  MR_Box * backend_libs__c_util__wrapper_arg_2)
#line 440 "c_util.m"
{
#line 440 "c_util.m"
  {
#line 440 "c_util.m"
    MR_Box backend_libs__c_util__closure = backend_libs__c_util__closure_arg;
#line 440 "c_util.m"
    MR_Word backend_libs__c_util__conv0_EscapeCodeChars_4;

#line 440 "c_util.m"
    {
#line 440 "c_util.m"
      backend_libs__c_util__octal_escape_any_int_2_p_0(((MR_Integer) backend_libs__c_util__wrapper_arg_1), &backend_libs__c_util__conv0_EscapeCodeChars_4);
    }
#line 440 "c_util.m"
    *backend_libs__c_util__wrapper_arg_2 = ((MR_Box) (backend_libs__c_util__conv0_EscapeCodeChars_4));
#line 440 "c_util.m"
  }
#line 440 "c_util.m"
}

#line 389 "c_util.m"
static MR_String MR_CALL 
backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0(
#line 389 "c_util.m"
  MR_Char backend_libs__c_util__Char_5)
#line 389 "c_util.m"
{
#line 394 "c_util.m"
  {
#line 394 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 394 "c_util.m"
    MR_String backend_libs__c_util__QuotedCharStr_6;
#line 394 "c_util.m"
    MR_Word backend_libs__c_util__RevQuotedCharStr_7;
#line 394 "c_util.m"
    MR_Word backend_libs__c_util__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 419 "c_util.m"
    MR_Char backend_libs__c_util__EscapeChar_14;

#line 511 "c_util.m"
#line 511 "c_util.m"
    switch (backend_libs__c_util__Char_5) {
#line 511 "c_util.m"
      default:
#line 511 "c_util.m"
        backend_libs__c_util__succeeded = MR_FALSE;
#line 511 "c_util.m"
        break;
#line 511 "c_util.m"
      case (MR_Char) 7:
#line 517 "c_util.m"
        {
#line 517 "c_util.m"
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 97;
#line 517 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 517 "c_util.m"
        }
#line 511 "c_util.m"
        break;
#line 511 "c_util.m"
      case (MR_Char) 8:
#line 516 "c_util.m"
        {
#line 516 "c_util.m"
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 98;
#line 516 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 516 "c_util.m"
        }
#line 511 "c_util.m"
        break;
#line 511 "c_util.m"
      case (MR_Char) 9:
#line 515 "c_util.m"
        {
#line 515 "c_util.m"
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 116;
#line 515 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 515 "c_util.m"
        }
#line 511 "c_util.m"
        break;
#line 511 "c_util.m"
      case (MR_Char) 10:
#line 514 "c_util.m"
        {
#line 514 "c_util.m"
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 110;
#line 514 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 514 "c_util.m"
        }
#line 511 "c_util.m"
        break;
#line 511 "c_util.m"
      case (MR_Char) 11:
#line 518 "c_util.m"
        {
#line 518 "c_util.m"
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 118;
#line 518 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 518 "c_util.m"
        }
#line 511 "c_util.m"
        break;
#line 511 "c_util.m"
      case (MR_Char) 12:
#line 520 "c_util.m"
        {
#line 520 "c_util.m"
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 102;
#line 520 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 520 "c_util.m"
        }
#line 511 "c_util.m"
        break;
#line 511 "c_util.m"
      case (MR_Char) 13:
#line 519 "c_util.m"
        {
#line 519 "c_util.m"
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 114;
#line 519 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 519 "c_util.m"
        }
#line 511 "c_util.m"
        break;
#line 511 "c_util.m"
      case (MR_Char) 34:
#line 511 "c_util.m"
        {
#line 511 "c_util.m"
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 34;
#line 511 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 511 "c_util.m"
        }
#line 511 "c_util.m"
        break;
#line 511 "c_util.m"
      case (MR_Char) 39:
#line 512 "c_util.m"
        {
#line 512 "c_util.m"
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 39;
#line 512 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 512 "c_util.m"
        }
#line 511 "c_util.m"
        break;
#line 511 "c_util.m"
      case (MR_Char) 92:
#line 513 "c_util.m"
        {
#line 513 "c_util.m"
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 92;
#line 513 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 513 "c_util.m"
        }
#line 511 "c_util.m"
        break;
#line 511 "c_util.m"
    }
#line 419 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 418 "c_util.m"
      {
#line 418 "c_util.m"
        {
#line 418 "c_util.m"
          backend_libs__c_util__RevQuotedCharStr_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "c_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_7, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__EscapeChar_14));
#line 418 "c_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[7])));
#line 418 "c_util.m"
        }
#line 418 "c_util.m"
      }
#line 419 "c_util.m"
    else
#line 425 "c_util.m"
      {
#line 421 "c_util.m"
        backend_libs__c_util__succeeded = (backend_libs__c_util__Char_5 == (MR_Char) 63);
#line 425 "c_util.m"
        if (backend_libs__c_util__succeeded)
#line 424 "c_util.m"
          {
#line 424 "c_util.m"
            backend_libs__c_util__RevQuotedCharStr_7 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[13]);
#line 424 "c_util.m"
          }
#line 425 "c_util.m"
        else
#line 429 "c_util.m"
          {
#line 528 "c_util.m"
            {
#line 528 "c_util.m"
              backend_libs__c_util__succeeded = mercury__char__is_alnum_1_p_0(backend_libs__c_util__Char_5);
            }
#line 528 "c_util.m"
            if (!(backend_libs__c_util__succeeded))
#line 529 "c_util.m"
              {
#line 529 "c_util.m"
                {
#line 529 "c_util.m"
                  backend_libs__c_util__succeeded = mercury__string__contains_char_2_p_0((MR_String) " !\"#%&\'()*+,-./:;<=>\?[\\]^_{|}~", backend_libs__c_util__Char_5);
                }
#line 529 "c_util.m"
              }
#line 429 "c_util.m"
            if (backend_libs__c_util__succeeded)
#line 428 "c_util.m"
              {
#line 428 "c_util.m"
                backend_libs__c_util__RevQuotedCharStr_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "c_util.m"
                MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_7, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__Char_5));
#line 428 "c_util.m"
                MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_7, 1) = ((MR_Box) (backend_libs__c_util__V_8_8));
#line 428 "c_util.m"
              }
#line 429 "c_util.m"
            else
#line 433 "c_util.m"
              {
#line 430 "c_util.m"
                {
#line 430 "c_util.m"
                  backend_libs__c_util__succeeded = mercury__char__to_int_2_p_1(backend_libs__c_util__Char_5, (MR_Integer) 0);
                }
#line 433 "c_util.m"
                if (backend_libs__c_util__succeeded)
#line 432 "c_util.m"
                  {
#line 432 "c_util.m"
                    backend_libs__c_util__RevQuotedCharStr_7 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[8]);
#line 432 "c_util.m"
                  }
#line 433 "c_util.m"
                else
#line 453 "c_util.m"
                  {
#line 434 "c_util.m"
                    MR_Integer backend_libs__c_util__Int_15;

#line 434 "c_util.m"
                    {
#line 434 "c_util.m"
                      backend_libs__c_util__Int_15 = mercury__char__to_int_1_f_0(backend_libs__c_util__Char_5);
                    }
#line 435 "c_util.m"
                    backend_libs__c_util__succeeded = (backend_libs__c_util__Int_15 >= (MR_Integer) 128);
#line 453 "c_util.m"
                    if (backend_libs__c_util__succeeded)
#line 446 "c_util.m"
                      {
#line 446 "c_util.m"
                        MR_Word backend_libs__c_util__CodeUnits_16;

#line 439 "c_util.m"
                        {
#line 439 "c_util.m"
                          backend_libs__c_util__succeeded = mercury__char__to_utf8_2_p_0(backend_libs__c_util__Char_5, &backend_libs__c_util__CodeUnits_16);
                        }
#line 446 "c_util.m"
                        if (backend_libs__c_util__succeeded)
#line 440 "c_util.m"
                          {
#line 440 "c_util.m"
                            MR_Word backend_libs__c_util__EscapeCharss_17;
#line 440 "c_util.m"
                            MR_Word backend_libs__c_util__EscapeChars_18;

#line 440 "c_util.m"
                            {
#line 440 "c_util.m"
                              mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__c_util_scalar_common_1[0], (MR_Word) &backend_libs__c_util_scalar_common_3[3], backend_libs__c_util__CodeUnits_16, &backend_libs__c_util__EscapeCharss_17);
                            }
#line 441 "c_util.m"
                            {
#line 441 "c_util.m"
                              mercury__list__condense_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, backend_libs__c_util__EscapeCharss_17, &backend_libs__c_util__EscapeChars_18);
                            }
#line 442 "c_util.m"
                            {
#line 442 "c_util.m"
                              backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_p_0(backend_libs__c_util__EscapeChars_18, backend_libs__c_util__V_8_8, &backend_libs__c_util__RevQuotedCharStr_7);
                            }
#line 440 "c_util.m"
                          }
#line 446 "c_util.m"
                        else
#line 444 "c_util.m"
                          {
#line 444 "c_util.m"
                            {
#line 444 "c_util.m"
                              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.c_util", (MR_String) "predicate \140backend_libs.c_util.quote_one_char\'/4", (MR_String) "invalid Unicode code point");
                            }
#line 444 "c_util.m"
                          }
#line 446 "c_util.m"
                      }
#line 453 "c_util.m"
                    else
#line 463 "c_util.m"
                      {
#line 463 "c_util.m"
                        MR_Word backend_libs__c_util__EscapeChars_33;
#line 463 "c_util.m"
                        MR_Integer backend_libs__c_util__Int_45;

#line 555 "c_util.m"
                        {
#line 555 "c_util.m"
                          mercury__char__to_int_2_p_0(backend_libs__c_util__Char_5, &backend_libs__c_util__Int_45);
                        }
#line 556 "c_util.m"
                        {
#line 556 "c_util.m"
                          backend_libs__c_util__octal_escape_any_int_2_p_0(backend_libs__c_util__Int_45, &backend_libs__c_util__EscapeChars_33);
                        }
#line 464 "c_util.m"
                        {
#line 464 "c_util.m"
                          backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_p_0(backend_libs__c_util__EscapeChars_33, backend_libs__c_util__V_8_8, &backend_libs__c_util__RevQuotedCharStr_7);
                        }
#line 463 "c_util.m"
                      }
#line 453 "c_util.m"
                  }
#line 433 "c_util.m"
              }
#line 429 "c_util.m"
          }
#line 425 "c_util.m"
      }
#line 396 "c_util.m"
    {
#line 396 "c_util.m"
      mercury__string__from_rev_char_list_2_p_0(backend_libs__c_util__RevQuotedCharStr_7, &backend_libs__c_util__QuotedCharStr_6);
    }
#line 394 "c_util.m"
    return backend_libs__c_util__QuotedCharStr_6;
#line 394 "c_util.m"
  }
#line 389 "c_util.m"
}

#line 93 "c_util.m"
void MR_CALL 
backend_libs__c_util____Compare____multi_string_0_0(
#line 93 "c_util.m"
  MR_Word * backend_libs__c_util__HeadVar__1_1,
#line 93 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__2_2,
#line 93 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__3_3)
#line 93 "c_util.m"
{
#line 93 "c_util.m"
  {
#line 93 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 93 "c_util.m"
    MR_Word backend_libs__c_util__Cast_HeadVar1_4 = backend_libs__c_util__HeadVar__2_2;
#line 93 "c_util.m"
    MR_Word backend_libs__c_util__Cast_HeadVar2_5 = backend_libs__c_util__HeadVar__3_3;

#line 93 "c_util.m"
    {
#line 93 "c_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__c_util_scalar_common_1[1], backend_libs__c_util__HeadVar__1_1, ((MR_Box) (backend_libs__c_util__Cast_HeadVar1_4)), ((MR_Box) (backend_libs__c_util__Cast_HeadVar2_5)));
#line 93 "c_util.m"
      return;
    }
#line 93 "c_util.m"
  }
#line 93 "c_util.m"
}

#line 93 "c_util.m"
MR_bool MR_CALL 
backend_libs__c_util____Unify____multi_string_0_0(
#line 93 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__1_1,
#line 93 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__2_2)
#line 93 "c_util.m"
{
#line 93 "c_util.m"
  {
#line 93 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 93 "c_util.m"
    MR_Word backend_libs__c_util__Cast_HeadVar1_3 = backend_libs__c_util__HeadVar__1_1;
#line 93 "c_util.m"
    MR_Word backend_libs__c_util__Cast_HeadVar2_4 = backend_libs__c_util__HeadVar__2_2;

#line 93 "c_util.m"
    {
#line 93 "c_util.m"
      return backend_libs__c_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__c_util_scalar_common_1[1], ((MR_Box) (backend_libs__c_util__Cast_HeadVar1_3)), ((MR_Box) (backend_libs__c_util__Cast_HeadVar2_4)));
    }
#line 93 "c_util.m"
    return backend_libs__c_util__succeeded;
#line 93 "c_util.m"
  }
#line 93 "c_util.m"
}

#line 69 "c_util.m"
void MR_CALL 
backend_libs__c_util____Compare____literal_language_0_0(
#line 69 "c_util.m"
  MR_Word * backend_libs__c_util__HeadVar__1_1,
#line 69 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__2_2,
#line 69 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__3_3)
#line 69 "c_util.m"
{
#line 69 "c_util.m"
  {
#line 69 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 69 "c_util.m"
    MR_Integer backend_libs__c_util__Cast_HeadVar1_4 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;
#line 69 "c_util.m"
    MR_Integer backend_libs__c_util__Cast_HeadVar2_5 = (MR_Integer) backend_libs__c_util__HeadVar__3_3;

#line 69 "c_util.m"
    {
#line 69 "c_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__Cast_HeadVar1_4, backend_libs__c_util__Cast_HeadVar2_5);
#line 69 "c_util.m"
      return;
    }
#line 69 "c_util.m"
  }
#line 69 "c_util.m"
}

#line 69 "c_util.m"
MR_bool MR_CALL 
backend_libs__c_util____Unify____literal_language_0_0(
#line 69 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__2_1,
#line 69 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__2_2)
#line 69 "c_util.m"
{
#line 1650 "backend_libs.c_util.c"
  {
#line 1652 "backend_libs.c_util.c"
    MR_bool backend_libs__c_util__succeeded = (backend_libs__c_util__HeadVar__2_1 == backend_libs__c_util__HeadVar__2_2);

#line 1655 "backend_libs.c_util.c"
    return backend_libs__c_util__succeeded;
#line 1657 "backend_libs.c_util.c"
  }
#line 69 "c_util.m"
}

#line 147 "c_util.m"
void MR_CALL 
backend_libs__c_util____Compare____binop_category_0_0(
#line 147 "c_util.m"
  MR_Word * backend_libs__c_util__HeadVar__1_1,
#line 147 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__2_2,
#line 147 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__3_3)
#line 147 "c_util.m"
{
#line 147 "c_util.m"
  {
#line 147 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 147 "c_util.m"
    MR_Integer backend_libs__c_util__CastX_30 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;
#line 147 "c_util.m"
    MR_Integer backend_libs__c_util__CastY_31 = (MR_Integer) backend_libs__c_util__HeadVar__3_3;

#line 147 "c_util.m"
    backend_libs__c_util__succeeded = (backend_libs__c_util__CastX_30 == backend_libs__c_util__CastY_31);
#line 147 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 1686 "backend_libs.c_util.c"
      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 0;
#line 147 "c_util.m"
    else
#line 147 "c_util.m"
#line 147 "c_util.m"
      switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__2_2)) {
#line 147 "c_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 147 "c_util.m"
        case (MR_Integer) 0:
#line 147 "c_util.m"
#line 147 "c_util.m"
          switch (MR_unmkbody(backend_libs__c_util__HeadVar__2_2)) {
#line 147 "c_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 147 "c_util.m"
            case (MR_Integer) 0:
#line 147 "c_util.m"
#line 147 "c_util.m"
              switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__3_3)) {
#line 147 "c_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 147 "c_util.m"
                case (MR_Integer) 0:
#line 147 "c_util.m"
#line 147 "c_util.m"
                  switch (MR_unmkbody(backend_libs__c_util__HeadVar__3_3)) {
#line 147 "c_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 147 "c_util.m"
                    case (MR_Integer) 0:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 0;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 1:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 2:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 3:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 4:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 5:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 6:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 7:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 8:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 9:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 10:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 11:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                  }
#line 147 "c_util.m"
                  break;
#line 147 "c_util.m"
                case (MR_Integer) 1:
#line 1794 "backend_libs.c_util.c"
                  *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                  break;
#line 147 "c_util.m"
              }
#line 147 "c_util.m"
              break;
#line 147 "c_util.m"
            case (MR_Integer) 1:
#line 147 "c_util.m"
#line 147 "c_util.m"
              switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__3_3)) {
#line 147 "c_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 147 "c_util.m"
                case (MR_Integer) 0:
#line 147 "c_util.m"
#line 147 "c_util.m"
                  switch (MR_unmkbody(backend_libs__c_util__HeadVar__3_3)) {
#line 147 "c_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 147 "c_util.m"
                    case (MR_Integer) 0:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 1:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 0;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 2:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 3:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 4:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 5:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 6:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 7:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 8:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 9:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 10:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 11:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                  }
#line 147 "c_util.m"
                  break;
#line 147 "c_util.m"
                case (MR_Integer) 1:
#line 1894 "backend_libs.c_util.c"
                  *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                  break;
#line 147 "c_util.m"
              }
#line 147 "c_util.m"
              break;
#line 147 "c_util.m"
            case (MR_Integer) 2:
#line 147 "c_util.m"
#line 147 "c_util.m"
              switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__3_3)) {
#line 147 "c_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 147 "c_util.m"
                case (MR_Integer) 0:
#line 147 "c_util.m"
#line 147 "c_util.m"
                  switch (MR_unmkbody(backend_libs__c_util__HeadVar__3_3)) {
#line 147 "c_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 147 "c_util.m"
                    case (MR_Integer) 0:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 1:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 2:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 0;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 3:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 4:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 5:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 6:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 7:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 8:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 9:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 10:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 11:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                  }
#line 147 "c_util.m"
                  break;
#line 147 "c_util.m"
                case (MR_Integer) 1:
#line 1994 "backend_libs.c_util.c"
                  *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                  break;
#line 147 "c_util.m"
              }
#line 147 "c_util.m"
              break;
#line 147 "c_util.m"
            case (MR_Integer) 3:
#line 147 "c_util.m"
#line 147 "c_util.m"
              switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__3_3)) {
#line 147 "c_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 147 "c_util.m"
                case (MR_Integer) 0:
#line 147 "c_util.m"
#line 147 "c_util.m"
                  switch (MR_unmkbody(backend_libs__c_util__HeadVar__3_3)) {
#line 147 "c_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 147 "c_util.m"
                    case (MR_Integer) 0:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 1:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 2:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 3:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 0;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 4:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 5:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 6:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 7:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 8:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 9:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 10:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 11:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                  }
#line 147 "c_util.m"
                  break;
#line 147 "c_util.m"
                case (MR_Integer) 1:
#line 2094 "backend_libs.c_util.c"
                  *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                  break;
#line 147 "c_util.m"
              }
#line 147 "c_util.m"
              break;
#line 147 "c_util.m"
            case (MR_Integer) 4:
#line 147 "c_util.m"
#line 147 "c_util.m"
              switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__3_3)) {
#line 147 "c_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 147 "c_util.m"
                case (MR_Integer) 0:
#line 147 "c_util.m"
#line 147 "c_util.m"
                  switch (MR_unmkbody(backend_libs__c_util__HeadVar__3_3)) {
#line 147 "c_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 147 "c_util.m"
                    case (MR_Integer) 0:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 1:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 2:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 3:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 4:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 0;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 5:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 6:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 7:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 8:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 9:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 10:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 11:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                  }
#line 147 "c_util.m"
                  break;
#line 147 "c_util.m"
                case (MR_Integer) 1:
#line 2194 "backend_libs.c_util.c"
                  *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                  break;
#line 147 "c_util.m"
              }
#line 147 "c_util.m"
              break;
#line 147 "c_util.m"
            case (MR_Integer) 5:
#line 147 "c_util.m"
#line 147 "c_util.m"
              switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__3_3)) {
#line 147 "c_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 147 "c_util.m"
                case (MR_Integer) 0:
#line 147 "c_util.m"
#line 147 "c_util.m"
                  switch (MR_unmkbody(backend_libs__c_util__HeadVar__3_3)) {
#line 147 "c_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 147 "c_util.m"
                    case (MR_Integer) 0:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 1:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 2:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 3:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 4:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 5:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 0;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 6:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 7:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 8:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 9:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 10:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 11:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                  }
#line 147 "c_util.m"
                  break;
#line 147 "c_util.m"
                case (MR_Integer) 1:
#line 2294 "backend_libs.c_util.c"
                  *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                  break;
#line 147 "c_util.m"
              }
#line 147 "c_util.m"
              break;
#line 147 "c_util.m"
            case (MR_Integer) 6:
#line 147 "c_util.m"
#line 147 "c_util.m"
              switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__3_3)) {
#line 147 "c_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 147 "c_util.m"
                case (MR_Integer) 0:
#line 147 "c_util.m"
#line 147 "c_util.m"
                  switch (MR_unmkbody(backend_libs__c_util__HeadVar__3_3)) {
#line 147 "c_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 147 "c_util.m"
                    case (MR_Integer) 0:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 1:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 2:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 3:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 4:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 5:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 6:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 0;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 7:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 8:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 9:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 10:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 11:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                  }
#line 147 "c_util.m"
                  break;
#line 147 "c_util.m"
                case (MR_Integer) 1:
#line 2394 "backend_libs.c_util.c"
                  *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                  break;
#line 147 "c_util.m"
              }
#line 147 "c_util.m"
              break;
#line 147 "c_util.m"
            case (MR_Integer) 7:
#line 147 "c_util.m"
#line 147 "c_util.m"
              switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__3_3)) {
#line 147 "c_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 147 "c_util.m"
                case (MR_Integer) 0:
#line 147 "c_util.m"
#line 147 "c_util.m"
                  switch (MR_unmkbody(backend_libs__c_util__HeadVar__3_3)) {
#line 147 "c_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 147 "c_util.m"
                    case (MR_Integer) 0:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 1:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 2:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 3:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 4:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 5:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 6:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 7:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 0;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 8:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 9:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 10:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 11:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                  }
#line 147 "c_util.m"
                  break;
#line 147 "c_util.m"
                case (MR_Integer) 1:
#line 2494 "backend_libs.c_util.c"
                  *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                  break;
#line 147 "c_util.m"
              }
#line 147 "c_util.m"
              break;
#line 147 "c_util.m"
            case (MR_Integer) 8:
#line 147 "c_util.m"
#line 147 "c_util.m"
              switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__3_3)) {
#line 147 "c_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 147 "c_util.m"
                case (MR_Integer) 0:
#line 147 "c_util.m"
#line 147 "c_util.m"
                  switch (MR_unmkbody(backend_libs__c_util__HeadVar__3_3)) {
#line 147 "c_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 147 "c_util.m"
                    case (MR_Integer) 0:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 1:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 2:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 3:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 4:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 5:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 6:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 7:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 8:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 0;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 9:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 10:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 11:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                  }
#line 147 "c_util.m"
                  break;
#line 147 "c_util.m"
                case (MR_Integer) 1:
#line 2594 "backend_libs.c_util.c"
                  *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                  break;
#line 147 "c_util.m"
              }
#line 147 "c_util.m"
              break;
#line 147 "c_util.m"
            case (MR_Integer) 9:
#line 147 "c_util.m"
#line 147 "c_util.m"
              switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__3_3)) {
#line 147 "c_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 147 "c_util.m"
                case (MR_Integer) 0:
#line 147 "c_util.m"
#line 147 "c_util.m"
                  switch (MR_unmkbody(backend_libs__c_util__HeadVar__3_3)) {
#line 147 "c_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 147 "c_util.m"
                    case (MR_Integer) 0:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 1:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 2:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 3:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 4:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 5:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 6:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 7:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 8:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 9:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 0;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 10:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 11:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                  }
#line 147 "c_util.m"
                  break;
#line 147 "c_util.m"
                case (MR_Integer) 1:
#line 2694 "backend_libs.c_util.c"
                  *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                  break;
#line 147 "c_util.m"
              }
#line 147 "c_util.m"
              break;
#line 147 "c_util.m"
            case (MR_Integer) 10:
#line 147 "c_util.m"
#line 147 "c_util.m"
              switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__3_3)) {
#line 147 "c_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 147 "c_util.m"
                case (MR_Integer) 0:
#line 147 "c_util.m"
#line 147 "c_util.m"
                  switch (MR_unmkbody(backend_libs__c_util__HeadVar__3_3)) {
#line 147 "c_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 147 "c_util.m"
                    case (MR_Integer) 0:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 1:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 2:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 3:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 4:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 5:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 6:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 7:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 8:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 9:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 10:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 0;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 11:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                  }
#line 147 "c_util.m"
                  break;
#line 147 "c_util.m"
                case (MR_Integer) 1:
#line 2794 "backend_libs.c_util.c"
                  *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                  break;
#line 147 "c_util.m"
              }
#line 147 "c_util.m"
              break;
#line 147 "c_util.m"
            case (MR_Integer) 11:
#line 147 "c_util.m"
#line 147 "c_util.m"
              switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__3_3)) {
#line 147 "c_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 147 "c_util.m"
                case (MR_Integer) 0:
#line 147 "c_util.m"
#line 147 "c_util.m"
                  switch (MR_unmkbody(backend_libs__c_util__HeadVar__3_3)) {
#line 147 "c_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 147 "c_util.m"
                    case (MR_Integer) 0:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 1:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 2:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 3:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 4:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 5:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 6:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 7:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 8:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 9:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 10:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                    case (MR_Integer) 11:
#line 147 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 0;
#line 147 "c_util.m"
                      break;
#line 147 "c_util.m"
                  }
#line 147 "c_util.m"
                  break;
#line 147 "c_util.m"
                case (MR_Integer) 1:
#line 2894 "backend_libs.c_util.c"
                  *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                  break;
#line 147 "c_util.m"
              }
#line 147 "c_util.m"
              break;
#line 147 "c_util.m"
          }
#line 147 "c_util.m"
          break;
#line 147 "c_util.m"
        case (MR_Integer) 1:
#line 147 "c_util.m"
          {
#line 147 "c_util.m"
            MR_Integer backend_libs__c_util__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__c_util__HeadVar__2_2, (MR_Integer) 0)));

#line 147 "c_util.m"
#line 147 "c_util.m"
            switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__3_3)) {
#line 147 "c_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 147 "c_util.m"
              case (MR_Integer) 0:
#line 147 "c_util.m"
#line 147 "c_util.m"
                switch (MR_unmkbody(backend_libs__c_util__HeadVar__3_3)) {
#line 147 "c_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 147 "c_util.m"
                  case (MR_Integer) 0:
#line 2927 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                    break;
#line 147 "c_util.m"
                  case (MR_Integer) 1:
#line 2933 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                    break;
#line 147 "c_util.m"
                  case (MR_Integer) 2:
#line 2939 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                    break;
#line 147 "c_util.m"
                  case (MR_Integer) 3:
#line 2945 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                    break;
#line 147 "c_util.m"
                  case (MR_Integer) 4:
#line 2951 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                    break;
#line 147 "c_util.m"
                  case (MR_Integer) 5:
#line 2957 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                    break;
#line 147 "c_util.m"
                  case (MR_Integer) 6:
#line 2963 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                    break;
#line 147 "c_util.m"
                  case (MR_Integer) 7:
#line 2969 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                    break;
#line 147 "c_util.m"
                  case (MR_Integer) 8:
#line 2975 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                    break;
#line 147 "c_util.m"
                  case (MR_Integer) 9:
#line 2981 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                    break;
#line 147 "c_util.m"
                  case (MR_Integer) 10:
#line 2987 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                    break;
#line 147 "c_util.m"
                  case (MR_Integer) 11:
#line 2993 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                    break;
#line 147 "c_util.m"
                }
#line 147 "c_util.m"
                break;
#line 147 "c_util.m"
              case (MR_Integer) 1:
#line 147 "c_util.m"
                {
#line 147 "c_util.m"
                  MR_Integer backend_libs__c_util__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__c_util__HeadVar__3_3, (MR_Integer) 0)));

#line 147 "c_util.m"
                  {
#line 147 "c_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__V_33_33, backend_libs__c_util__V_13_13);
#line 147 "c_util.m"
                    return;
                  }
#line 147 "c_util.m"
                }
#line 147 "c_util.m"
                break;
#line 147 "c_util.m"
            }
#line 147 "c_util.m"
          }
#line 147 "c_util.m"
          break;
#line 147 "c_util.m"
      }
#line 147 "c_util.m"
  }
#line 147 "c_util.m"
}

#line 147 "c_util.m"
MR_bool MR_CALL 
backend_libs__c_util____Unify____binop_category_0_0(
#line 147 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__1_1,
#line 147 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__2_2)
#line 147 "c_util.m"
{
#line 147 "c_util.m"
  {
#line 147 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 147 "c_util.m"
    MR_Integer backend_libs__c_util__CastX_29 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
#line 147 "c_util.m"
    MR_Integer backend_libs__c_util__CastY_30 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

#line 147 "c_util.m"
    backend_libs__c_util__succeeded = (backend_libs__c_util__CastX_29 == backend_libs__c_util__CastY_30);
#line 147 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 147 "c_util.m"
      backend_libs__c_util__succeeded = MR_TRUE;
#line 147 "c_util.m"
    else
#line 147 "c_util.m"
#line 147 "c_util.m"
      switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__1_1)) {
#line 147 "c_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 147 "c_util.m"
        case (MR_Integer) 0:
#line 147 "c_util.m"
#line 147 "c_util.m"
          switch (MR_unmkbody(backend_libs__c_util__HeadVar__1_1)) {
#line 147 "c_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 147 "c_util.m"
            case (MR_Integer) 0:
#line 147 "c_util.m"
              {
#line 147 "c_util.m"
                MR_Integer backend_libs__c_util__CastX_3 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
#line 147 "c_util.m"
                MR_Integer backend_libs__c_util__CastY_4 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

#line 147 "c_util.m"
                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_4 == backend_libs__c_util__CastX_3);
#line 147 "c_util.m"
              }
#line 147 "c_util.m"
              break;
#line 147 "c_util.m"
            case (MR_Integer) 1:
#line 147 "c_util.m"
              {
#line 147 "c_util.m"
                MR_Integer backend_libs__c_util__CastX_5 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
#line 147 "c_util.m"
                MR_Integer backend_libs__c_util__CastY_6 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

#line 147 "c_util.m"
                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_6 == backend_libs__c_util__CastX_5);
#line 147 "c_util.m"
              }
#line 147 "c_util.m"
              break;
#line 147 "c_util.m"
            case (MR_Integer) 2:
#line 147 "c_util.m"
              {
#line 147 "c_util.m"
                MR_Integer backend_libs__c_util__CastX_7 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
#line 147 "c_util.m"
                MR_Integer backend_libs__c_util__CastY_8 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

#line 147 "c_util.m"
                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_8 == backend_libs__c_util__CastX_7);
#line 147 "c_util.m"
              }
#line 147 "c_util.m"
              break;
#line 147 "c_util.m"
            case (MR_Integer) 3:
#line 147 "c_util.m"
              {
#line 147 "c_util.m"
                MR_Integer backend_libs__c_util__CastX_9 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
#line 147 "c_util.m"
                MR_Integer backend_libs__c_util__CastY_10 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

#line 147 "c_util.m"
                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_10 == backend_libs__c_util__CastX_9);
#line 147 "c_util.m"
              }
#line 147 "c_util.m"
              break;
#line 147 "c_util.m"
            case (MR_Integer) 4:
#line 147 "c_util.m"
              {
#line 147 "c_util.m"
                MR_Integer backend_libs__c_util__CastX_13 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
#line 147 "c_util.m"
                MR_Integer backend_libs__c_util__CastY_14 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

#line 147 "c_util.m"
                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_14 == backend_libs__c_util__CastX_13);
#line 147 "c_util.m"
              }
#line 147 "c_util.m"
              break;
#line 147 "c_util.m"
            case (MR_Integer) 5:
#line 147 "c_util.m"
              {
#line 147 "c_util.m"
                MR_Integer backend_libs__c_util__CastX_15 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
#line 147 "c_util.m"
                MR_Integer backend_libs__c_util__CastY_16 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

#line 147 "c_util.m"
                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_16 == backend_libs__c_util__CastX_15);
#line 147 "c_util.m"
              }
#line 147 "c_util.m"
              break;
#line 147 "c_util.m"
            case (MR_Integer) 6:
#line 147 "c_util.m"
              {
#line 147 "c_util.m"
                MR_Integer backend_libs__c_util__CastX_17 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
#line 147 "c_util.m"
                MR_Integer backend_libs__c_util__CastY_18 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

#line 147 "c_util.m"
                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_18 == backend_libs__c_util__CastX_17);
#line 147 "c_util.m"
              }
#line 147 "c_util.m"
              break;
#line 147 "c_util.m"
            case (MR_Integer) 7:
#line 147 "c_util.m"
              {
#line 147 "c_util.m"
                MR_Integer backend_libs__c_util__CastX_19 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
#line 147 "c_util.m"
                MR_Integer backend_libs__c_util__CastY_20 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

#line 147 "c_util.m"
                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_20 == backend_libs__c_util__CastX_19);
#line 147 "c_util.m"
              }
#line 147 "c_util.m"
              break;
#line 147 "c_util.m"
            case (MR_Integer) 8:
#line 147 "c_util.m"
              {
#line 147 "c_util.m"
                MR_Integer backend_libs__c_util__CastX_21 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
#line 147 "c_util.m"
                MR_Integer backend_libs__c_util__CastY_22 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

#line 147 "c_util.m"
                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_22 == backend_libs__c_util__CastX_21);
#line 147 "c_util.m"
              }
#line 147 "c_util.m"
              break;
#line 147 "c_util.m"
            case (MR_Integer) 9:
#line 147 "c_util.m"
              {
#line 147 "c_util.m"
                MR_Integer backend_libs__c_util__CastX_23 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
#line 147 "c_util.m"
                MR_Integer backend_libs__c_util__CastY_24 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

#line 147 "c_util.m"
                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_24 == backend_libs__c_util__CastX_23);
#line 147 "c_util.m"
              }
#line 147 "c_util.m"
              break;
#line 147 "c_util.m"
            case (MR_Integer) 10:
#line 147 "c_util.m"
              {
#line 147 "c_util.m"
                MR_Integer backend_libs__c_util__CastX_25 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
#line 147 "c_util.m"
                MR_Integer backend_libs__c_util__CastY_26 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

#line 147 "c_util.m"
                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_26 == backend_libs__c_util__CastX_25);
#line 147 "c_util.m"
              }
#line 147 "c_util.m"
              break;
#line 147 "c_util.m"
            case (MR_Integer) 11:
#line 147 "c_util.m"
              {
#line 147 "c_util.m"
                MR_Integer backend_libs__c_util__CastX_27 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
#line 147 "c_util.m"
                MR_Integer backend_libs__c_util__CastY_28 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

#line 147 "c_util.m"
                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_28 == backend_libs__c_util__CastX_27);
#line 147 "c_util.m"
              }
#line 147 "c_util.m"
              break;
#line 147 "c_util.m"
          }
#line 147 "c_util.m"
          break;
#line 147 "c_util.m"
        case (MR_Integer) 1:
#line 147 "c_util.m"
          {
#line 147 "c_util.m"
            MR_Integer backend_libs__c_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__c_util__HeadVar__1_1, (MR_Integer) 0)));
#line 147 "c_util.m"
            MR_Integer backend_libs__c_util__V_12_12;

#line 147 "c_util.m"
            backend_libs__c_util__succeeded = ((MR_tag((MR_Word) backend_libs__c_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 147 "c_util.m"
            if (backend_libs__c_util__succeeded)
#line 147 "c_util.m"
              {
#line 147 "c_util.m"
                backend_libs__c_util__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__c_util__HeadVar__2_2, (MR_Integer) 0)));
#line 3271 "backend_libs.c_util.c"
                backend_libs__c_util__succeeded = (backend_libs__c_util__V_11_11 == backend_libs__c_util__V_12_12);
#line 147 "c_util.m"
              }
#line 147 "c_util.m"
          }
#line 147 "c_util.m"
          break;
#line 147 "c_util.m"
      }
#line 147 "c_util.m"
    return backend_libs__c_util__succeeded;
#line 147 "c_util.m"
  }
#line 147 "c_util.m"
}

#line 558 "c_util.m"
static void MR_CALL 
backend_libs__c_util__octal_escape_any_int_2_p_0(
#line 558 "c_util.m"
  MR_Integer backend_libs__c_util__Int_3,
#line 558 "c_util.m"
  MR_Word * backend_libs__c_util__EscapeCodeChars_4)
#line 558 "c_util.m"
{
#line 560 "c_util.m"
  {
#line 560 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 560 "c_util.m"
    MR_String backend_libs__c_util__OctalString0_5;
#line 560 "c_util.m"
    MR_String backend_libs__c_util__OctalString_6;
#line 560 "c_util.m"
    MR_Word backend_libs__c_util__V_11_11;

#line 561 "c_util.m"
    {
#line 561 "c_util.m"
      mercury__string__int_to_base_string_3_p_0(backend_libs__c_util__Int_3, (MR_Integer) 8, &backend_libs__c_util__OctalString0_5);
    }
#line 562 "c_util.m"
    {
#line 562 "c_util.m"
      mercury__string__pad_left_4_p_0(backend_libs__c_util__OctalString0_5, (MR_Char) 48, (MR_Integer) 3, &backend_libs__c_util__OctalString_6);
    }
#line 563 "c_util.m"
    {
#line 563 "c_util.m"
      backend_libs__c_util__V_11_11 = mercury__string__to_char_list_1_f_0(backend_libs__c_util__OctalString_6);
    }
#line 563 "c_util.m"
    {
#line 563 "c_util.m"
      MR_Word base;
#line 563 "c_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 563 "c_util.m"
      *backend_libs__c_util__EscapeCodeChars_4 = base;
#line 563 "c_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
#line 563 "c_util.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__c_util__V_11_11));
#line 563 "c_util.m"
    }
#line 560 "c_util.m"
  }
#line 558 "c_util.m"
}

#line 493 "c_util.m"
static void MR_CALL 
backend_libs__c_util__quote_one_char_c_3_p_0_1(
#line 493 "c_util.m"
  MR_Box backend_libs__c_util__closure_arg,
#line 493 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 493 "c_util.m"
  MR_Box * backend_libs__c_util__wrapper_arg_2)
#line 493 "c_util.m"
{
#line 493 "c_util.m"
  {
#line 493 "c_util.m"
    MR_Box backend_libs__c_util__closure = backend_libs__c_util__closure_arg;
#line 493 "c_util.m"
    MR_Word backend_libs__c_util__conv0_EscapeCodeChars_4;

#line 493 "c_util.m"
    {
#line 493 "c_util.m"
      backend_libs__c_util__octal_escape_any_int_2_p_0(((MR_Integer) backend_libs__c_util__wrapper_arg_1), &backend_libs__c_util__conv0_EscapeCodeChars_4);
    }
#line 493 "c_util.m"
    *backend_libs__c_util__wrapper_arg_2 = ((MR_Box) (backend_libs__c_util__conv0_EscapeCodeChars_4));
#line 493 "c_util.m"
  }
#line 493 "c_util.m"
}

#line 467 "c_util.m"
static void MR_CALL 
backend_libs__c_util__quote_one_char_c_3_p_0(
#line 467 "c_util.m"
  MR_Char backend_libs__c_util__Char_4,
#line 467 "c_util.m"
  MR_Word backend_libs__c_util__RevChars0_5,
#line 467 "c_util.m"
  MR_Word * backend_libs__c_util__RevChars_6)
#line 467 "c_util.m"
{
#line 475 "c_util.m"
  {
#line 475 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 475 "c_util.m"
    MR_Char backend_libs__c_util__EscapeChar_7;

#line 511 "c_util.m"
#line 511 "c_util.m"
    switch (backend_libs__c_util__Char_4) {
#line 511 "c_util.m"
      default:
#line 511 "c_util.m"
        backend_libs__c_util__succeeded = MR_FALSE;
#line 511 "c_util.m"
        break;
#line 511 "c_util.m"
      case (MR_Char) 7:
#line 517 "c_util.m"
        {
#line 517 "c_util.m"
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 97;
#line 517 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 517 "c_util.m"
        }
#line 511 "c_util.m"
        break;
#line 511 "c_util.m"
      case (MR_Char) 8:
#line 516 "c_util.m"
        {
#line 516 "c_util.m"
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 98;
#line 516 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 516 "c_util.m"
        }
#line 511 "c_util.m"
        break;
#line 511 "c_util.m"
      case (MR_Char) 9:
#line 515 "c_util.m"
        {
#line 515 "c_util.m"
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 116;
#line 515 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 515 "c_util.m"
        }
#line 511 "c_util.m"
        break;
#line 511 "c_util.m"
      case (MR_Char) 10:
#line 514 "c_util.m"
        {
#line 514 "c_util.m"
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 110;
#line 514 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 514 "c_util.m"
        }
#line 511 "c_util.m"
        break;
#line 511 "c_util.m"
      case (MR_Char) 11:
#line 518 "c_util.m"
        {
#line 518 "c_util.m"
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 118;
#line 518 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 518 "c_util.m"
        }
#line 511 "c_util.m"
        break;
#line 511 "c_util.m"
      case (MR_Char) 12:
#line 520 "c_util.m"
        {
#line 520 "c_util.m"
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 102;
#line 520 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 520 "c_util.m"
        }
#line 511 "c_util.m"
        break;
#line 511 "c_util.m"
      case (MR_Char) 13:
#line 519 "c_util.m"
        {
#line 519 "c_util.m"
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 114;
#line 519 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 519 "c_util.m"
        }
#line 511 "c_util.m"
        break;
#line 511 "c_util.m"
      case (MR_Char) 34:
#line 511 "c_util.m"
        {
#line 511 "c_util.m"
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 34;
#line 511 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 511 "c_util.m"
        }
#line 511 "c_util.m"
        break;
#line 511 "c_util.m"
      case (MR_Char) 39:
#line 512 "c_util.m"
        {
#line 512 "c_util.m"
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 39;
#line 512 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 512 "c_util.m"
        }
#line 511 "c_util.m"
        break;
#line 511 "c_util.m"
      case (MR_Char) 92:
#line 513 "c_util.m"
        {
#line 513 "c_util.m"
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 92;
#line 513 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 513 "c_util.m"
        }
#line 511 "c_util.m"
        break;
#line 511 "c_util.m"
    }
#line 475 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 474 "c_util.m"
      {
#line 474 "c_util.m"
        MR_Word backend_libs__c_util__V_12_12;

#line 474 "c_util.m"
        {
#line 474 "c_util.m"
          backend_libs__c_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 474 "c_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__c_util__V_12_12, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
#line 474 "c_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__c_util__V_12_12, 1) = ((MR_Box) (backend_libs__c_util__RevChars0_5));
#line 474 "c_util.m"
        }
#line 474 "c_util.m"
        {
#line 474 "c_util.m"
          MR_Word base;
#line 474 "c_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 474 "c_util.m"
          *backend_libs__c_util__RevChars_6 = base;
#line 474 "c_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__EscapeChar_7));
#line 474 "c_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__c_util__V_12_12));
#line 474 "c_util.m"
        }
#line 474 "c_util.m"
      }
#line 475 "c_util.m"
    else
#line 480 "c_util.m"
      {
#line 476 "c_util.m"
        backend_libs__c_util__succeeded = (backend_libs__c_util__Char_4 == (MR_Char) 63);
#line 480 "c_util.m"
        if (backend_libs__c_util__succeeded)
#line 479 "c_util.m"
          {
#line 479 "c_util.m"
            MR_Word backend_libs__c_util__V_15_15;

#line 479 "c_util.m"
            {
#line 479 "c_util.m"
              backend_libs__c_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 479 "c_util.m"
              MR_hl_field(MR_mktag(1), backend_libs__c_util__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
#line 479 "c_util.m"
              MR_hl_field(MR_mktag(1), backend_libs__c_util__V_15_15, 1) = ((MR_Box) (backend_libs__c_util__RevChars0_5));
#line 479 "c_util.m"
            }
#line 479 "c_util.m"
            {
#line 479 "c_util.m"
              MR_Word base;
#line 479 "c_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 479 "c_util.m"
              *backend_libs__c_util__RevChars_6 = base;
#line 479 "c_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) ((MR_Char) 63));
#line 479 "c_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__c_util__V_15_15));
#line 479 "c_util.m"
            }
#line 479 "c_util.m"
          }
#line 480 "c_util.m"
        else
#line 484 "c_util.m"
          {
#line 528 "c_util.m"
            {
#line 528 "c_util.m"
              backend_libs__c_util__succeeded = mercury__char__is_alnum_1_p_0(backend_libs__c_util__Char_4);
            }
#line 528 "c_util.m"
            if (!(backend_libs__c_util__succeeded))
#line 529 "c_util.m"
              {
#line 529 "c_util.m"
                {
#line 529 "c_util.m"
                  backend_libs__c_util__succeeded = mercury__string__contains_char_2_p_0((MR_String) " !\"#%&\'()*+,-./:;<=>\?[\\]^_{|}~", backend_libs__c_util__Char_4);
                }
#line 529 "c_util.m"
              }
#line 484 "c_util.m"
            if (backend_libs__c_util__succeeded)
#line 483 "c_util.m"
              {
#line 483 "c_util.m"
                MR_Word base;
#line 483 "c_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "c_util.m"
                *backend_libs__c_util__RevChars_6 = base;
#line 483 "c_util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__Char_4));
#line 483 "c_util.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__c_util__RevChars0_5));
#line 483 "c_util.m"
              }
#line 484 "c_util.m"
            else
#line 488 "c_util.m"
              {
#line 485 "c_util.m"
                {
#line 485 "c_util.m"
                  backend_libs__c_util__succeeded = mercury__char__to_int_2_p_1(backend_libs__c_util__Char_4, (MR_Integer) 0);
                }
#line 488 "c_util.m"
                if (backend_libs__c_util__succeeded)
#line 487 "c_util.m"
                  {
#line 487 "c_util.m"
                    MR_Word backend_libs__c_util__V_19_19;

#line 487 "c_util.m"
                    {
#line 487 "c_util.m"
                      backend_libs__c_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 487 "c_util.m"
                      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
#line 487 "c_util.m"
                      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_19_19, 1) = ((MR_Box) (backend_libs__c_util__RevChars0_5));
#line 487 "c_util.m"
                    }
#line 487 "c_util.m"
                    {
#line 487 "c_util.m"
                      MR_Word base;
#line 487 "c_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 487 "c_util.m"
                      *backend_libs__c_util__RevChars_6 = base;
#line 487 "c_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) ((MR_Char) 48));
#line 487 "c_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__c_util__V_19_19));
#line 487 "c_util.m"
                    }
#line 487 "c_util.m"
                  }
#line 488 "c_util.m"
                else
#line 499 "c_util.m"
                  {
#line 489 "c_util.m"
                    MR_Integer backend_libs__c_util__Int_8;

#line 489 "c_util.m"
                    {
#line 489 "c_util.m"
                      backend_libs__c_util__Int_8 = mercury__char__to_int_1_f_0(backend_libs__c_util__Char_4);
                    }
#line 490 "c_util.m"
                    backend_libs__c_util__succeeded = (backend_libs__c_util__Int_8 >= (MR_Integer) 128);
#line 499 "c_util.m"
                    if (backend_libs__c_util__succeeded)
#line 496 "c_util.m"
                      {
#line 496 "c_util.m"
                        MR_Word backend_libs__c_util__CodeUnits_9;

#line 492 "c_util.m"
                        {
#line 492 "c_util.m"
                          backend_libs__c_util__succeeded = mercury__char__to_utf8_2_p_0(backend_libs__c_util__Char_4, &backend_libs__c_util__CodeUnits_9);
                        }
#line 496 "c_util.m"
                        if (backend_libs__c_util__succeeded)
#line 493 "c_util.m"
                          {
#line 493 "c_util.m"
                            MR_Word backend_libs__c_util__EscapeCharss_10;
#line 493 "c_util.m"
                            MR_Word backend_libs__c_util__EscapeChars_11;

#line 493 "c_util.m"
                            {
#line 493 "c_util.m"
                              mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__c_util_scalar_common_1[0], (MR_Word) &backend_libs__c_util_scalar_common_3[2], backend_libs__c_util__CodeUnits_9, &backend_libs__c_util__EscapeCharss_10);
                            }
#line 494 "c_util.m"
                            {
#line 494 "c_util.m"
                              mercury__list__condense_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, backend_libs__c_util__EscapeCharss_10, &backend_libs__c_util__EscapeChars_11);
                            }
#line 495 "c_util.m"
                            {
#line 495 "c_util.m"
                              backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_p_0(backend_libs__c_util__EscapeChars_11, backend_libs__c_util__RevChars0_5, backend_libs__c_util__RevChars_6);
#line 495 "c_util.m"
                              return;
                            }
#line 493 "c_util.m"
                          }
#line 496 "c_util.m"
                        else
#line 497 "c_util.m"
                          {
#line 497 "c_util.m"
                            {
#line 497 "c_util.m"
                              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.c_util", (MR_String) "predicate \140backend_libs.c_util.quote_one_char_c\'/3", (MR_String) "invalid Unicode code point");
#line 497 "c_util.m"
                              return;
                            }
#line 497 "c_util.m"
                          }
#line 496 "c_util.m"
                      }
#line 499 "c_util.m"
                    else
#line 500 "c_util.m"
                      {
#line 500 "c_util.m"
                        MR_Word backend_libs__c_util__EscapeChars_26;
#line 500 "c_util.m"
                        MR_Integer backend_libs__c_util__Int_37;

#line 555 "c_util.m"
                        {
#line 555 "c_util.m"
                          mercury__char__to_int_2_p_0(backend_libs__c_util__Char_4, &backend_libs__c_util__Int_37);
                        }
#line 556 "c_util.m"
                        {
#line 556 "c_util.m"
                          backend_libs__c_util__octal_escape_any_int_2_p_0(backend_libs__c_util__Int_37, &backend_libs__c_util__EscapeChars_26);
                        }
#line 501 "c_util.m"
                        {
#line 501 "c_util.m"
                          backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_p_0(backend_libs__c_util__EscapeChars_26, backend_libs__c_util__RevChars0_5, backend_libs__c_util__RevChars_6);
#line 501 "c_util.m"
                          return;
                        }
#line 500 "c_util.m"
                      }
#line 499 "c_util.m"
                  }
#line 488 "c_util.m"
              }
#line 484 "c_util.m"
          }
#line 480 "c_util.m"
      }
#line 475 "c_util.m"
  }
#line 467 "c_util.m"
}

#line 440 "c_util.m"
static void MR_CALL 
backend_libs__c_util__output_quoted_char_lang_4_p_3_1(
#line 440 "c_util.m"
  MR_Box backend_libs__c_util__closure_arg,
#line 440 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 440 "c_util.m"
  MR_Box * backend_libs__c_util__wrapper_arg_2)
#line 440 "c_util.m"
{
#line 440 "c_util.m"
  {
#line 440 "c_util.m"
    MR_Box backend_libs__c_util__closure = backend_libs__c_util__closure_arg;
#line 440 "c_util.m"
    MR_Word backend_libs__c_util__conv0_EscapeCodeChars_4;

#line 440 "c_util.m"
    {
#line 440 "c_util.m"
      backend_libs__c_util__octal_escape_any_int_2_p_0(((MR_Integer) backend_libs__c_util__wrapper_arg_1), &backend_libs__c_util__conv0_EscapeCodeChars_4);
    }
#line 440 "c_util.m"
    *backend_libs__c_util__wrapper_arg_2 = ((MR_Box) (backend_libs__c_util__conv0_EscapeCodeChars_4));
#line 440 "c_util.m"
  }
#line 440 "c_util.m"
}

#line 380 "c_util.m"
static void MR_CALL 
backend_libs__c_util__output_quoted_char_lang_4_p_3(
#line 380 "c_util.m"
  MR_Word backend_libs__c_util__Lang_5,
#line 380 "c_util.m"
  MR_Char backend_libs__c_util__Char_6)
#line 380 "c_util.m"
{
#line 382 "c_util.m"
  {
#line 382 "c_util.m"
    MR_bool backend_libs__c_util__succeeded = (backend_libs__c_util__Lang_5 == (MR_Integer) 1);
#line 382 "c_util.m"
    MR_String backend_libs__c_util__EscapedCharStr_8;
#line 382 "c_util.m"
    MR_Word backend_libs__c_util__RevQuotedCharStr_15;
#line 382 "c_util.m"
    MR_Word backend_libs__c_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 415 "c_util.m"
    MR_Word backend_libs__c_util__RevEscapeChars_21;

#line 411 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 506 "c_util.m"
#line 506 "c_util.m"
      switch (backend_libs__c_util__Char_6) {
#line 506 "c_util.m"
        default:
#line 506 "c_util.m"
          backend_libs__c_util__succeeded = MR_FALSE;
#line 506 "c_util.m"
          break;
#line 506 "c_util.m"
        case (MR_Char) 7:
#line 506 "c_util.m"
          {
#line 506 "c_util.m"
            backend_libs__c_util__RevEscapeChars_21 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[10]);
#line 506 "c_util.m"
            backend_libs__c_util__succeeded = MR_TRUE;
#line 506 "c_util.m"
          }
#line 506 "c_util.m"
          break;
#line 506 "c_util.m"
        case (MR_Char) 11:
#line 507 "c_util.m"
          {
#line 507 "c_util.m"
            backend_libs__c_util__RevEscapeChars_21 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[12]);
#line 507 "c_util.m"
            backend_libs__c_util__succeeded = MR_TRUE;
#line 507 "c_util.m"
          }
#line 506 "c_util.m"
          break;
#line 506 "c_util.m"
      }
#line 415 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 414 "c_util.m"
      {
#line 414 "c_util.m"
        {
#line 414 "c_util.m"
          mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, backend_libs__c_util__RevEscapeChars_21, backend_libs__c_util__V_16_16, &backend_libs__c_util__RevQuotedCharStr_15);
        }
#line 414 "c_util.m"
      }
#line 415 "c_util.m"
    else
#line 419 "c_util.m"
      {
#line 419 "c_util.m"
        MR_Char backend_libs__c_util__EscapeChar_22;

#line 511 "c_util.m"
#line 511 "c_util.m"
        switch (backend_libs__c_util__Char_6) {
#line 511 "c_util.m"
          default:
#line 511 "c_util.m"
            backend_libs__c_util__succeeded = MR_FALSE;
#line 511 "c_util.m"
            break;
#line 511 "c_util.m"
          case (MR_Char) 7:
#line 517 "c_util.m"
            {
#line 517 "c_util.m"
              backend_libs__c_util__EscapeChar_22 = (MR_Char) 97;
#line 517 "c_util.m"
              backend_libs__c_util__succeeded = MR_TRUE;
#line 517 "c_util.m"
            }
#line 511 "c_util.m"
            break;
#line 511 "c_util.m"
          case (MR_Char) 8:
#line 516 "c_util.m"
            {
#line 516 "c_util.m"
              backend_libs__c_util__EscapeChar_22 = (MR_Char) 98;
#line 516 "c_util.m"
              backend_libs__c_util__succeeded = MR_TRUE;
#line 516 "c_util.m"
            }
#line 511 "c_util.m"
            break;
#line 511 "c_util.m"
          case (MR_Char) 9:
#line 515 "c_util.m"
            {
#line 515 "c_util.m"
              backend_libs__c_util__EscapeChar_22 = (MR_Char) 116;
#line 515 "c_util.m"
              backend_libs__c_util__succeeded = MR_TRUE;
#line 515 "c_util.m"
            }
#line 511 "c_util.m"
            break;
#line 511 "c_util.m"
          case (MR_Char) 10:
#line 514 "c_util.m"
            {
#line 514 "c_util.m"
              backend_libs__c_util__EscapeChar_22 = (MR_Char) 110;
#line 514 "c_util.m"
              backend_libs__c_util__succeeded = MR_TRUE;
#line 514 "c_util.m"
            }
#line 511 "c_util.m"
            break;
#line 511 "c_util.m"
          case (MR_Char) 11:
#line 518 "c_util.m"
            {
#line 518 "c_util.m"
              backend_libs__c_util__EscapeChar_22 = (MR_Char) 118;
#line 518 "c_util.m"
              backend_libs__c_util__succeeded = MR_TRUE;
#line 518 "c_util.m"
            }
#line 511 "c_util.m"
            break;
#line 511 "c_util.m"
          case (MR_Char) 12:
#line 520 "c_util.m"
            {
#line 520 "c_util.m"
              backend_libs__c_util__EscapeChar_22 = (MR_Char) 102;
#line 520 "c_util.m"
              backend_libs__c_util__succeeded = MR_TRUE;
#line 520 "c_util.m"
            }
#line 511 "c_util.m"
            break;
#line 511 "c_util.m"
          case (MR_Char) 13:
#line 519 "c_util.m"
            {
#line 519 "c_util.m"
              backend_libs__c_util__EscapeChar_22 = (MR_Char) 114;
#line 519 "c_util.m"
              backend_libs__c_util__succeeded = MR_TRUE;
#line 519 "c_util.m"
            }
#line 511 "c_util.m"
            break;
#line 511 "c_util.m"
          case (MR_Char) 34:
#line 511 "c_util.m"
            {
#line 511 "c_util.m"
              backend_libs__c_util__EscapeChar_22 = (MR_Char) 34;
#line 511 "c_util.m"
              backend_libs__c_util__succeeded = MR_TRUE;
#line 511 "c_util.m"
            }
#line 511 "c_util.m"
            break;
#line 511 "c_util.m"
          case (MR_Char) 39:
#line 512 "c_util.m"
            {
#line 512 "c_util.m"
              backend_libs__c_util__EscapeChar_22 = (MR_Char) 39;
#line 512 "c_util.m"
              backend_libs__c_util__succeeded = MR_TRUE;
#line 512 "c_util.m"
            }
#line 511 "c_util.m"
            break;
#line 511 "c_util.m"
          case (MR_Char) 92:
#line 513 "c_util.m"
            {
#line 513 "c_util.m"
              backend_libs__c_util__EscapeChar_22 = (MR_Char) 92;
#line 513 "c_util.m"
              backend_libs__c_util__succeeded = MR_TRUE;
#line 513 "c_util.m"
            }
#line 511 "c_util.m"
            break;
#line 511 "c_util.m"
        }
#line 419 "c_util.m"
        if (backend_libs__c_util__succeeded)
#line 418 "c_util.m"
          {
#line 418 "c_util.m"
            {
#line 418 "c_util.m"
              backend_libs__c_util__RevQuotedCharStr_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "c_util.m"
              MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_15, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__EscapeChar_22));
#line 418 "c_util.m"
              MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[7])));
#line 418 "c_util.m"
            }
#line 418 "c_util.m"
          }
#line 419 "c_util.m"
        else
#line 425 "c_util.m"
          {
#line 420 "c_util.m"
            backend_libs__c_util__succeeded = (backend_libs__c_util__Lang_5 == (MR_Integer) 0);
#line 420 "c_util.m"
            if (backend_libs__c_util__succeeded)
#line 421 "c_util.m"
              backend_libs__c_util__succeeded = (backend_libs__c_util__Char_6 == (MR_Char) 63);
#line 425 "c_util.m"
            if (backend_libs__c_util__succeeded)
#line 424 "c_util.m"
              {
#line 424 "c_util.m"
                backend_libs__c_util__RevQuotedCharStr_15 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[13]);
#line 424 "c_util.m"
              }
#line 425 "c_util.m"
            else
#line 429 "c_util.m"
              {
#line 528 "c_util.m"
                {
#line 528 "c_util.m"
                  backend_libs__c_util__succeeded = mercury__char__is_alnum_1_p_0(backend_libs__c_util__Char_6);
                }
#line 528 "c_util.m"
                if (!(backend_libs__c_util__succeeded))
#line 529 "c_util.m"
                  {
#line 529 "c_util.m"
                    {
#line 529 "c_util.m"
                      backend_libs__c_util__succeeded = mercury__string__contains_char_2_p_0((MR_String) " !\"#%&\'()*+,-./:;<=>\?[\\]^_{|}~", backend_libs__c_util__Char_6);
                    }
#line 529 "c_util.m"
                  }
#line 429 "c_util.m"
                if (backend_libs__c_util__succeeded)
#line 428 "c_util.m"
                  {
#line 428 "c_util.m"
                    backend_libs__c_util__RevQuotedCharStr_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "c_util.m"
                    MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_15, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__Char_6));
#line 428 "c_util.m"
                    MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_15, 1) = ((MR_Box) (backend_libs__c_util__V_16_16));
#line 428 "c_util.m"
                  }
#line 429 "c_util.m"
                else
#line 433 "c_util.m"
                  {
#line 430 "c_util.m"
                    {
#line 430 "c_util.m"
                      backend_libs__c_util__succeeded = mercury__char__to_int_2_p_1(backend_libs__c_util__Char_6, (MR_Integer) 0);
                    }
#line 433 "c_util.m"
                    if (backend_libs__c_util__succeeded)
#line 432 "c_util.m"
                      {
#line 432 "c_util.m"
                        backend_libs__c_util__RevQuotedCharStr_15 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[8]);
#line 432 "c_util.m"
                      }
#line 433 "c_util.m"
                    else
#line 453 "c_util.m"
                      {
#line 434 "c_util.m"
                        MR_Integer backend_libs__c_util__Int_23;

#line 434 "c_util.m"
                        {
#line 434 "c_util.m"
                          backend_libs__c_util__Int_23 = mercury__char__to_int_1_f_0(backend_libs__c_util__Char_6);
                        }
#line 435 "c_util.m"
                        backend_libs__c_util__succeeded = (backend_libs__c_util__Int_23 >= (MR_Integer) 128);
#line 453 "c_util.m"
                        if (backend_libs__c_util__succeeded)
#line 446 "c_util.m"
#line 446 "c_util.m"
                          switch (backend_libs__c_util__Lang_5) {
#line 446 "c_util.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 446 "c_util.m"
                            case (MR_Integer) 0:
#line 443 "c_util.m"
                              {
#line 443 "c_util.m"
                                MR_Word backend_libs__c_util__CodeUnits_24;

#line 439 "c_util.m"
                                {
#line 439 "c_util.m"
                                  backend_libs__c_util__succeeded = mercury__char__to_utf8_2_p_0(backend_libs__c_util__Char_6, &backend_libs__c_util__CodeUnits_24);
                                }
#line 443 "c_util.m"
                                if (backend_libs__c_util__succeeded)
#line 440 "c_util.m"
                                  {
#line 440 "c_util.m"
                                    MR_Word backend_libs__c_util__EscapeCharss_25;
#line 440 "c_util.m"
                                    MR_Word backend_libs__c_util__EscapeChars_26;

#line 440 "c_util.m"
                                    {
#line 440 "c_util.m"
                                      mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__c_util_scalar_common_1[0], (MR_Word) &backend_libs__c_util_scalar_common_3[1], backend_libs__c_util__CodeUnits_24, &backend_libs__c_util__EscapeCharss_25);
                                    }
#line 441 "c_util.m"
                                    {
#line 441 "c_util.m"
                                      mercury__list__condense_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, backend_libs__c_util__EscapeCharss_25, &backend_libs__c_util__EscapeChars_26);
                                    }
#line 442 "c_util.m"
                                    {
#line 442 "c_util.m"
                                      backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_p_0(backend_libs__c_util__EscapeChars_26, backend_libs__c_util__V_16_16, &backend_libs__c_util__RevQuotedCharStr_15);
                                    }
#line 440 "c_util.m"
                                  }
#line 443 "c_util.m"
                                else
#line 444 "c_util.m"
                                  {
#line 444 "c_util.m"
                                    {
#line 444 "c_util.m"
                                      mercury__require__unexpected_3_p_0((MR_String) "backend_libs.c_util", (MR_String) "predicate \140backend_libs.c_util.quote_one_char\'/4", (MR_String) "invalid Unicode code point");
#line 444 "c_util.m"
                                      return;
                                    }
#line 444 "c_util.m"
                                  }
#line 443 "c_util.m"
                              }
#line 446 "c_util.m"
                              break;
#line 446 "c_util.m"
                            case (MR_Integer) 2:
#line 451 "c_util.m"
                              {
#line 451 "c_util.m"
                                backend_libs__c_util__RevQuotedCharStr_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 451 "c_util.m"
                                MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_15, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__Char_6));
#line 451 "c_util.m"
                                MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_15, 1) = ((MR_Box) (backend_libs__c_util__V_16_16));
#line 451 "c_util.m"
                              }
#line 446 "c_util.m"
                              break;
#line 446 "c_util.m"
                            case (MR_Integer) 1:
#line 448 "c_util.m"
                              {
#line 448 "c_util.m"
                                backend_libs__c_util__RevQuotedCharStr_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "c_util.m"
                                MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_15, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__Char_6));
#line 448 "c_util.m"
                                MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_15, 1) = ((MR_Box) (backend_libs__c_util__V_16_16));
#line 448 "c_util.m"
                              }
#line 446 "c_util.m"
                              break;
#line 446 "c_util.m"
                          }
#line 453 "c_util.m"
                        else
#line 463 "c_util.m"
                          {
#line 463 "c_util.m"
                            MR_Word backend_libs__c_util__EscapeChars_41;

#line 457 "c_util.m"
#line 457 "c_util.m"
                            switch (backend_libs__c_util__Lang_5) {
#line 457 "c_util.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 457 "c_util.m"
                              case (MR_Integer) 0:
#line 554 "c_util.m"
                                {
#line 554 "c_util.m"
                                  MR_Integer backend_libs__c_util__Int_69;

#line 555 "c_util.m"
                                  {
#line 555 "c_util.m"
                                    mercury__char__to_int_2_p_0(backend_libs__c_util__Char_6, &backend_libs__c_util__Int_69);
                                  }
#line 556 "c_util.m"
                                  {
#line 556 "c_util.m"
                                    backend_libs__c_util__octal_escape_any_int_2_p_0(backend_libs__c_util__Int_69, &backend_libs__c_util__EscapeChars_41);
                                  }
#line 554 "c_util.m"
                                }
#line 457 "c_util.m"
                                break;
#line 457 "c_util.m"
                              case (MR_Integer) 2:
#line 567 "c_util.m"
                                {
#line 567 "c_util.m"
                                  MR_Integer backend_libs__c_util__Int_72;
#line 567 "c_util.m"
                                  MR_String backend_libs__c_util__HexString_73;
#line 567 "c_util.m"
                                  MR_String backend_libs__c_util__V_78_78;

#line 568 "c_util.m"
                                  {
#line 568 "c_util.m"
                                    mercury__char__to_int_2_p_0(backend_libs__c_util__Char_6, &backend_libs__c_util__Int_72);
                                  }
#line 569 "c_util.m"
                                  {
#line 569 "c_util.m"
                                    mercury__string__format__format_unsigned_int_component_width_noprec_5_p_0((MR_Word) &backend_libs__c_util_scalar_common_4[1], (MR_Integer) 4, (MR_Integer) 2, backend_libs__c_util__Int_72, &backend_libs__c_util__V_78_78);
                                  }
#line 569 "c_util.m"
                                  {
#line 569 "c_util.m"
                                    backend_libs__c_util__HexString_73 = mercury__string__f_43_43_2_f_0((MR_String) "\\u", backend_libs__c_util__V_78_78);
                                  }
#line 570 "c_util.m"
                                  {
#line 570 "c_util.m"
                                    mercury__string__to_char_list_2_p_0(backend_libs__c_util__HexString_73, &backend_libs__c_util__EscapeChars_41);
                                  }
#line 567 "c_util.m"
                                }
#line 457 "c_util.m"
                                break;
#line 457 "c_util.m"
                              case (MR_Integer) 1:
#line 554 "c_util.m"
                                {
#line 554 "c_util.m"
                                  MR_Integer backend_libs__c_util__Int_90;

#line 555 "c_util.m"
                                  {
#line 555 "c_util.m"
                                    mercury__char__to_int_2_p_0(backend_libs__c_util__Char_6, &backend_libs__c_util__Int_90);
                                  }
#line 556 "c_util.m"
                                  {
#line 556 "c_util.m"
                                    backend_libs__c_util__octal_escape_any_int_2_p_0(backend_libs__c_util__Int_90, &backend_libs__c_util__EscapeChars_41);
                                  }
#line 554 "c_util.m"
                                }
#line 457 "c_util.m"
                                break;
#line 457 "c_util.m"
                            }
#line 464 "c_util.m"
                            {
#line 464 "c_util.m"
                              backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_p_0(backend_libs__c_util__EscapeChars_41, backend_libs__c_util__V_16_16, &backend_libs__c_util__RevQuotedCharStr_15);
                            }
#line 463 "c_util.m"
                          }
#line 453 "c_util.m"
                      }
#line 433 "c_util.m"
                  }
#line 429 "c_util.m"
              }
#line 425 "c_util.m"
          }
#line 419 "c_util.m"
      }
#line 396 "c_util.m"
    {
#line 396 "c_util.m"
      mercury__string__from_rev_char_list_2_p_0(backend_libs__c_util__RevQuotedCharStr_15, &backend_libs__c_util__EscapedCharStr_8);
    }
#line 384 "c_util.m"
    {
#line 384 "c_util.m"
      mercury__io__write_string_3_p_0(backend_libs__c_util__EscapedCharStr_8);
#line 384 "c_util.m"
      return;
    }
#line 382 "c_util.m"
  }
#line 380 "c_util.m"
}

#line 362 "c_util.m"
static void MR_CALL 
backend_libs__c_util__do_output_quoted_string_5_p_0(
#line 362 "c_util.m"
  MR_Word backend_libs__c_util__Lang_6,
#line 362 "c_util.m"
  MR_String backend_libs__c_util__S_7,
#line 362 "c_util.m"
  MR_Integer backend_libs__c_util__Cur_8)
#line 362 "c_util.m"
{
#line 369 "c_util.m"
  while (MR_TRUE)
#line 369 "c_util.m"
    {
#line 369 "c_util.m"
      /* tailcall optimized into a loop */
#line 369 "c_util.m"
      {
#line 369 "c_util.m"
        MR_bool backend_libs__c_util__succeeded;
#line 369 "c_util.m"
        MR_Integer backend_libs__c_util__Next_10;
#line 369 "c_util.m"
        MR_Char backend_libs__c_util__Char_11;

#line 366 "c_util.m"
        {
#line 366 "c_util.m"
          backend_libs__c_util__succeeded = mercury__string__unsafe_index_next_4_p_0(backend_libs__c_util__S_7, backend_libs__c_util__Cur_8, &backend_libs__c_util__Next_10, &backend_libs__c_util__Char_11);
        }
#line 369 "c_util.m"
        if (backend_libs__c_util__succeeded)
#line 367 "c_util.m"
          {
#line 367 "c_util.m"
            {
#line 367 "c_util.m"
              backend_libs__c_util__output_quoted_char_lang_4_p_3(backend_libs__c_util__Lang_6, backend_libs__c_util__Char_11);
            }
#line 368 "c_util.m"
            /* direct tailcall eliminated */
#line 368 "c_util.m"
            {
#line 368 "c_util.m"
              MR_Integer backend_libs__c_util__Cur__tmp_copy_8 = backend_libs__c_util__Next_10;

#line 368 "c_util.m"
              backend_libs__c_util__Cur_8 = backend_libs__c_util__Cur__tmp_copy_8;
#line 368 "c_util.m"
            }
#line 368 "c_util.m"
            continue;
#line 367 "c_util.m"
          }
#line 369 "c_util.m"
        else
#line 369 "c_util.m"
          {
#line 369 "c_util.m"
          }
#line 369 "c_util.m"
      }
#line 369 "c_util.m"
      break;
#line 369 "c_util.m"
    }
#line 362 "c_util.m"
}

#line 282 "c_util.m"
static void MR_CALL 
backend_libs__c_util__can_print_directly_4_p_0(
#line 282 "c_util.m"
  MR_String backend_libs__c_util__Str_1,
#line 282 "c_util.m"
  MR_Word * backend_libs__c_util__CanPrintDirectly_2)
#line 282 "c_util.m"
{
#line 286 "c_util.m"
  {
#line 286 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 289 "c_util.m"
{
#define MR_PROC_LABEL backend_libs__c_util__can_print_directly_4_p_0

	MR_String Str;
	MR_Word CanPrintDirectly;

	Str =  backend_libs__c_util__Str_1 ;
		{
#line 289 "c_util.m"
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
#line 4458 "backend_libs.c_util.c"

		;}
#undef MR_PROC_LABEL
	 *backend_libs__c_util__CanPrintDirectly_2  = CanPrintDirectly;
#line 289 "c_util.m"
}
#line 286 "c_util.m"
  }
#line 282 "c_util.m"
}

#line 193 "c_util.m"
MR_bool MR_CALL 
backend_libs__c_util__is_valid_c_identifier_1_p_0(
#line 193 "c_util.m"
  MR_String backend_libs__c_util__S_2)
#line 193 "c_util.m"
{
#line 732 "c_util.m"
  {
#line 732 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 732 "c_util.m"
    MR_Char backend_libs__c_util__Start_3;

#line 733 "c_util.m"
    {
#line 733 "c_util.m"
      backend_libs__c_util__succeeded = mercury__string__index_3_p_0(backend_libs__c_util__S_2, (MR_Integer) 0, &backend_libs__c_util__Start_3);
    }
#line 732 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 732 "c_util.m"
      {
#line 734 "c_util.m"
        {
#line 734 "c_util.m"
          backend_libs__c_util__succeeded = mercury__char__is_alpha_or_underscore_1_p_0(backend_libs__c_util__Start_3);
        }
#line 732 "c_util.m"
        if (backend_libs__c_util__succeeded)
#line 735 "c_util.m"
          {
#line 735 "c_util.m"
            return backend_libs__c_util__succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(backend_libs__c_util__S_2);
          }
#line 732 "c_util.m"
      }
#line 732 "c_util.m"
    return backend_libs__c_util__succeeded;
#line 732 "c_util.m"
  }
#line 193 "c_util.m"
}

#line 185 "c_util.m"
void MR_CALL 
backend_libs__c_util__output_pragma_pack_pop_2_p_0(void)
#line 185 "c_util.m"
{
#line 725 "c_util.m"
  {
#line 725 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 726 "c_util.m"
    {
#line 726 "c_util.m"
      mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_MSVC\n");
    }
#line 727 "c_util.m"
    {
#line 727 "c_util.m"
      mercury__io__write_string_3_p_0((MR_String) "#pragma pack(pop)\n");
    }
#line 728 "c_util.m"
    {
#line 728 "c_util.m"
      mercury__io__write_string_3_p_0((MR_String) "#endif\n");
#line 728 "c_util.m"
      return;
    }
#line 725 "c_util.m"
  }
#line 185 "c_util.m"
}

#line 183 "c_util.m"
void MR_CALL 
backend_libs__c_util__output_pragma_pack_push_2_p_0(void)
#line 183 "c_util.m"
{
#line 720 "c_util.m"
  {
#line 720 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 721 "c_util.m"
    {
#line 721 "c_util.m"
      mercury__io__write_string_3_p_0((MR_String) "\n#ifdef MR_MSVC\n");
    }
#line 722 "c_util.m"
    {
#line 722 "c_util.m"
      mercury__io__write_string_3_p_0((MR_String) "#pragma pack(push, MR_BYTES_PER_WORD)\n");
    }
#line 723 "c_util.m"
    {
#line 723 "c_util.m"
      mercury__io__write_string_3_p_0((MR_String) "#endif\n");
#line 723 "c_util.m"
      return;
    }
#line 720 "c_util.m"
  }
#line 183 "c_util.m"
}

#line 175 "c_util.m"
void MR_CALL 
backend_libs__c_util__output_c_file_intro_and_grade_6_p_0(
#line 175 "c_util.m"
  MR_Word backend_libs__c_util__Globals_7,
#line 175 "c_util.m"
  MR_String backend_libs__c_util__SourceFileName_8,
#line 175 "c_util.m"
  MR_String backend_libs__c_util__Version_9,
#line 175 "c_util.m"
  MR_String backend_libs__c_util__Fullarch_10)
#line 175 "c_util.m"
{
#line 676 "c_util.m"
  {
#line 676 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 676 "c_util.m"
    MR_Integer backend_libs__c_util__NumTagBits_12;
#line 676 "c_util.m"
    MR_String backend_libs__c_util__NumTagBitsStr_13;
#line 676 "c_util.m"
    MR_Word backend_libs__c_util__UnboxedFloat_14;
#line 676 "c_util.m"
    MR_String backend_libs__c_util__UnboxedFloatStr_15;
#line 676 "c_util.m"
    MR_Word backend_libs__c_util__PregeneratedDist_16;
#line 676 "c_util.m"
    MR_String backend_libs__c_util__PregeneratedDistStr_17;
#line 676 "c_util.m"
    MR_Word backend_libs__c_util__HighLevelCode_18;
#line 676 "c_util.m"
    MR_String backend_libs__c_util__HighLevelCodeStr_19;
#line 676 "c_util.m"
    MR_Word backend_libs__c_util__V_26_26;
#line 676 "c_util.m"
    MR_Word backend_libs__c_util__V_29_29;
#line 676 "c_util.m"
    MR_Word backend_libs__c_util__V_31_31;
#line 676 "c_util.m"
    MR_Word backend_libs__c_util__V_32_32;
#line 676 "c_util.m"
    MR_Word backend_libs__c_util__V_34_34;
#line 676 "c_util.m"
    MR_Word backend_libs__c_util__V_36_36;
#line 676 "c_util.m"
    MR_Word backend_libs__c_util__V_38_38;
#line 676 "c_util.m"
    MR_Word backend_libs__c_util__V_39_39;
#line 676 "c_util.m"
    MR_Word backend_libs__c_util__V_41_41;
#line 676 "c_util.m"
    MR_Word backend_libs__c_util__V_43_43;
#line 676 "c_util.m"
    MR_Word backend_libs__c_util__V_44_44;
#line 676 "c_util.m"
    MR_Word backend_libs__c_util__V_46_46;
#line 676 "c_util.m"
    MR_Word backend_libs__c_util__V_48_48;
#line 676 "c_util.m"
    MR_Word backend_libs__c_util__V_50_50;
#line 676 "c_util.m"
    MR_Word backend_libs__c_util__V_52_52;
#line 676 "c_util.m"
    MR_Word backend_libs__c_util__V_54_54;
#line 676 "c_util.m"
    MR_Word backend_libs__c_util__V_56_56;
#line 676 "c_util.m"
    MR_Word backend_libs__c_util__V_58_58;
#line 676 "c_util.m"
    MR_Word backend_libs__c_util__V_59_59;
#line 676 "c_util.m"
    MR_Word backend_libs__c_util__V_61_61;
#line 676 "c_util.m"
    MR_Word backend_libs__c_util__V_63_63;
#line 676 "c_util.m"
    MR_Word backend_libs__c_util__V_64_64;
#line 676 "c_util.m"
    MR_Word backend_libs__c_util__V_66_66;
#line 676 "c_util.m"
    MR_Word backend_libs__c_util__V_68_68;
#line 676 "c_util.m"
    MR_Word backend_libs__c_util__V_69_69;
#line 676 "c_util.m"
    MR_Word backend_libs__c_util__V_71_71;
#line 676 "c_util.m"
    MR_Word backend_libs__c_util__V_73_73;

#line 677 "c_util.m"
    {
#line 677 "c_util.m"
      libs__globals__lookup_int_option_3_p_0(backend_libs__c_util__Globals_7, (MR_Integer) 238, &backend_libs__c_util__NumTagBits_12);
    }
#line 678 "c_util.m"
    {
#line 678 "c_util.m"
      mercury__string__int_to_string_2_p_0(backend_libs__c_util__NumTagBits_12, &backend_libs__c_util__NumTagBitsStr_13);
    }
#line 679 "c_util.m"
    {
#line 679 "c_util.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__c_util__Globals_7, (MR_Integer) 244, &backend_libs__c_util__UnboxedFloat_14);
    }
#line 709 "c_util.m"
#line 709 "c_util.m"
    switch (backend_libs__c_util__UnboxedFloat_14) {
#line 709 "c_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 709 "c_util.m"
      case (MR_Integer) 0:
#line 709 "c_util.m"
        backend_libs__c_util__UnboxedFloatStr_15 = (MR_String) "no";
#line 709 "c_util.m"
        break;
#line 709 "c_util.m"
      case (MR_Integer) 1:
#line 710 "c_util.m"
        backend_libs__c_util__UnboxedFloatStr_15 = (MR_String) "yes";
#line 709 "c_util.m"
        break;
#line 709 "c_util.m"
    }
#line 681 "c_util.m"
    {
#line 681 "c_util.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__c_util__Globals_7, (MR_Integer) 224, &backend_libs__c_util__PregeneratedDist_16);
    }
#line 709 "c_util.m"
#line 709 "c_util.m"
    switch (backend_libs__c_util__PregeneratedDist_16) {
#line 709 "c_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 709 "c_util.m"
      case (MR_Integer) 0:
#line 709 "c_util.m"
        backend_libs__c_util__PregeneratedDistStr_17 = (MR_String) "no";
#line 709 "c_util.m"
        break;
#line 709 "c_util.m"
      case (MR_Integer) 1:
#line 710 "c_util.m"
        backend_libs__c_util__PregeneratedDistStr_17 = (MR_String) "yes";
#line 709 "c_util.m"
        break;
#line 709 "c_util.m"
    }
#line 683 "c_util.m"
    {
#line 683 "c_util.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__c_util__Globals_7, (MR_Integer) 255, &backend_libs__c_util__HighLevelCode_18);
    }
#line 709 "c_util.m"
#line 709 "c_util.m"
    switch (backend_libs__c_util__HighLevelCode_18) {
#line 709 "c_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 709 "c_util.m"
      case (MR_Integer) 0:
#line 709 "c_util.m"
        backend_libs__c_util__HighLevelCodeStr_19 = (MR_String) "no";
#line 709 "c_util.m"
        break;
#line 709 "c_util.m"
      case (MR_Integer) 1:
#line 710 "c_util.m"
        backend_libs__c_util__HighLevelCodeStr_19 = (MR_String) "yes";
#line 709 "c_util.m"
        break;
#line 709 "c_util.m"
    }
#line 700 "c_util.m"
    {
#line 700 "c_util.m"
      backend_libs__c_util__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_73_73, 0) = ((MR_Box) (backend_libs__c_util__HighLevelCodeStr_19));
#line 700 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[6])));
#line 700 "c_util.m"
    }
#line 700 "c_util.m"
    {
#line 700 "c_util.m"
      backend_libs__c_util__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_71_71, 0) = ((MR_Box) ((MR_String) "** HIGHLEVEL_CODE="));
#line 700 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_71_71, 1) = ((MR_Box) (backend_libs__c_util__V_73_73));
#line 700 "c_util.m"
    }
#line 699 "c_util.m"
    {
#line 699 "c_util.m"
      backend_libs__c_util__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_69_69, 0) = ((MR_Box) ((MR_String) "\n"));
#line 699 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_69_69, 1) = ((MR_Box) (backend_libs__c_util__V_71_71));
#line 699 "c_util.m"
    }
#line 699 "c_util.m"
    {
#line 699 "c_util.m"
      backend_libs__c_util__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_68_68, 0) = ((MR_Box) (backend_libs__c_util__PregeneratedDistStr_17));
#line 699 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_68_68, 1) = ((MR_Box) (backend_libs__c_util__V_69_69));
#line 699 "c_util.m"
    }
#line 699 "c_util.m"
    {
#line 699 "c_util.m"
      backend_libs__c_util__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_66_66, 0) = ((MR_Box) ((MR_String) "** PREGENERATED_DIST="));
#line 699 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_66_66, 1) = ((MR_Box) (backend_libs__c_util__V_68_68));
#line 699 "c_util.m"
    }
#line 698 "c_util.m"
    {
#line 698 "c_util.m"
      backend_libs__c_util__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 698 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_64_64, 0) = ((MR_Box) ((MR_String) "\n"));
#line 698 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_64_64, 1) = ((MR_Box) (backend_libs__c_util__V_66_66));
#line 698 "c_util.m"
    }
#line 698 "c_util.m"
    {
#line 698 "c_util.m"
      backend_libs__c_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 698 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_63_63, 0) = ((MR_Box) (backend_libs__c_util__UnboxedFloatStr_15));
#line 698 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_63_63, 1) = ((MR_Box) (backend_libs__c_util__V_64_64));
#line 698 "c_util.m"
    }
#line 698 "c_util.m"
    {
#line 698 "c_util.m"
      backend_libs__c_util__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 698 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_61_61, 0) = ((MR_Box) ((MR_String) "** UNBOXED_FLOAT="));
#line 698 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_61_61, 1) = ((MR_Box) (backend_libs__c_util__V_63_63));
#line 698 "c_util.m"
    }
#line 697 "c_util.m"
    {
#line 697 "c_util.m"
      backend_libs__c_util__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_59_59, 0) = ((MR_Box) ((MR_String) "\n"));
#line 697 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_59_59, 1) = ((MR_Box) (backend_libs__c_util__V_61_61));
#line 697 "c_util.m"
    }
#line 697 "c_util.m"
    {
#line 697 "c_util.m"
      backend_libs__c_util__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_58_58, 0) = ((MR_Box) (backend_libs__c_util__NumTagBitsStr_13));
#line 697 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_58_58, 1) = ((MR_Box) (backend_libs__c_util__V_59_59));
#line 697 "c_util.m"
    }
#line 697 "c_util.m"
    {
#line 697 "c_util.m"
      backend_libs__c_util__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_56_56, 0) = ((MR_Box) ((MR_String) "** TAG_BITS="));
#line 697 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_56_56, 1) = ((MR_Box) (backend_libs__c_util__V_58_58));
#line 697 "c_util.m"
    }
#line 696 "c_util.m"
    {
#line 696 "c_util.m"
      backend_libs__c_util__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_54_54, 0) = ((MR_Box) ((MR_String) "**\n"));
#line 696 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_54_54, 1) = ((MR_Box) (backend_libs__c_util__V_56_56));
#line 696 "c_util.m"
    }
#line 695 "c_util.m"
    {
#line 695 "c_util.m"
      backend_libs__c_util__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 695 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_52_52, 0) = ((MR_Box) ((MR_String) "** the generation of this C file were\n"));
#line 695 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_52_52, 1) = ((MR_Box) (backend_libs__c_util__V_54_54));
#line 695 "c_util.m"
    }
#line 694 "c_util.m"
    {
#line 694 "c_util.m"
      backend_libs__c_util__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 694 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_50_50, 0) = ((MR_Box) ((MR_String) "** The autoconfigured grade settings governing\n"));
#line 694 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_50_50, 1) = ((MR_Box) (backend_libs__c_util__V_52_52));
#line 694 "c_util.m"
    }
#line 693 "c_util.m"
    {
#line 693 "c_util.m"
      backend_libs__c_util__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 693 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_48_48, 0) = ((MR_Box) ((MR_String) "**\n"));
#line 693 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_48_48, 1) = ((MR_Box) (backend_libs__c_util__V_50_50));
#line 693 "c_util.m"
    }
#line 692 "c_util.m"
    {
#line 692 "c_util.m"
      backend_libs__c_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 692 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_46_46, 0) = ((MR_Box) ((MR_String) "** Do not edit.\n"));
#line 692 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_46_46, 1) = ((MR_Box) (backend_libs__c_util__V_48_48));
#line 692 "c_util.m"
    }
#line 691 "c_util.m"
    {
#line 691 "c_util.m"
      backend_libs__c_util__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 691 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_44_44, 0) = ((MR_Box) ((MR_String) ".\n"));
#line 691 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_44_44, 1) = ((MR_Box) (backend_libs__c_util__V_46_46));
#line 691 "c_util.m"
    }
#line 691 "c_util.m"
    {
#line 691 "c_util.m"
      backend_libs__c_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 691 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_43_43, 0) = ((MR_Box) (backend_libs__c_util__Fullarch_10));
#line 691 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_43_43, 1) = ((MR_Box) (backend_libs__c_util__V_44_44));
#line 691 "c_util.m"
    }
#line 691 "c_util.m"
    {
#line 691 "c_util.m"
      backend_libs__c_util__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 691 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_41_41, 0) = ((MR_Box) ((MR_String) "** configured for "));
#line 691 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_41_41, 1) = ((MR_Box) (backend_libs__c_util__V_43_43));
#line 691 "c_util.m"
    }
#line 690 "c_util.m"
    {
#line 690 "c_util.m"
      backend_libs__c_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 690 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_39_39, 0) = ((MR_Box) ((MR_String) "\n"));
#line 690 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_39_39, 1) = ((MR_Box) (backend_libs__c_util__V_41_41));
#line 690 "c_util.m"
    }
#line 690 "c_util.m"
    {
#line 690 "c_util.m"
      backend_libs__c_util__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 690 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_38_38, 0) = ((MR_Box) (backend_libs__c_util__Version_9));
#line 690 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_38_38, 1) = ((MR_Box) (backend_libs__c_util__V_39_39));
#line 690 "c_util.m"
    }
#line 690 "c_util.m"
    {
#line 690 "c_util.m"
      backend_libs__c_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 690 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_36_36, 0) = ((MR_Box) ((MR_String) "** version "));
#line 690 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_36_36, 1) = ((MR_Box) (backend_libs__c_util__V_38_38));
#line 690 "c_util.m"
    }
#line 689 "c_util.m"
    {
#line 689 "c_util.m"
      backend_libs__c_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_34_34, 0) = ((MR_Box) ((MR_String) "** by the Mercury compiler,\n"));
#line 689 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_34_34, 1) = ((MR_Box) (backend_libs__c_util__V_36_36));
#line 689 "c_util.m"
    }
#line 688 "c_util.m"
    {
#line 688 "c_util.m"
      backend_libs__c_util__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_32_32, 0) = ((MR_Box) ((MR_String) "\'\n"));
#line 688 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_32_32, 1) = ((MR_Box) (backend_libs__c_util__V_34_34));
#line 688 "c_util.m"
    }
#line 688 "c_util.m"
    {
#line 688 "c_util.m"
      backend_libs__c_util__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_31_31, 0) = ((MR_Box) (backend_libs__c_util__SourceFileName_8));
#line 688 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_31_31, 1) = ((MR_Box) (backend_libs__c_util__V_32_32));
#line 688 "c_util.m"
    }
#line 688 "c_util.m"
    {
#line 688 "c_util.m"
      backend_libs__c_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_29_29, 0) = ((MR_Box) ((MR_String) "** Automatically generated from \140"));
#line 688 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_29_29, 1) = ((MR_Box) (backend_libs__c_util__V_31_31));
#line 688 "c_util.m"
    }
#line 687 "c_util.m"
    {
#line 687 "c_util.m"
      backend_libs__c_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 687 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_26_26, 0) = ((MR_Box) ((MR_String) "/*\n"));
#line 687 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_26_26, 1) = ((MR_Box) (backend_libs__c_util__V_29_29));
#line 687 "c_util.m"
    }
#line 686 "c_util.m"
    {
#line 686 "c_util.m"
      mercury__io__write_strings_3_p_0(backend_libs__c_util__V_26_26);
#line 686 "c_util.m"
      return;
    }
#line 676 "c_util.m"
  }
#line 175 "c_util.m"
}

#line 162 "c_util.m"
void MR_CALL 
backend_libs__c_util__binop_category_string_3_p_0(
#line 162 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__1_1,
#line 162 "c_util.m"
  MR_Word * backend_libs__c_util__HeadVar__2_2,
#line 162 "c_util.m"
  MR_String * backend_libs__c_util__HeadVar__3_3)
#line 162 "c_util.m"
{
#line 612 "c_util.m"
  {
#line 612 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 612 "c_util.m"
#line 612 "c_util.m"
    switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__1_1)) {
#line 612 "c_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 612 "c_util.m"
      case (MR_Integer) 0:
#line 612 "c_util.m"
#line 612 "c_util.m"
        switch (MR_unmkbody(backend_libs__c_util__HeadVar__1_1)) {
#line 612 "c_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 612 "c_util.m"
          case (MR_Integer) 0:
#line 642 "c_util.m"
            {
#line 642 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 642 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "+";
#line 642 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 1:
#line 643 "c_util.m"
            {
#line 643 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 643 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "-";
#line 643 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 2:
#line 644 "c_util.m"
            {
#line 644 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 644 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "*";
#line 644 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 3:
#line 645 "c_util.m"
            {
#line 645 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 645 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "/";
#line 645 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 4:
#line 653 "c_util.m"
            {
#line 653 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 653 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "%";
#line 653 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 5:
#line 646 "c_util.m"
            {
#line 646 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 647 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<<";
#line 646 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 6:
#line 648 "c_util.m"
            {
#line 648 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 649 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">>";
#line 648 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 7:
#line 650 "c_util.m"
            {
#line 650 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 650 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "&";
#line 650 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 8:
#line 651 "c_util.m"
            {
#line 651 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 651 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "|";
#line 651 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 9:
#line 652 "c_util.m"
            {
#line 652 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 652 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "^";
#line 652 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 10:
#line 656 "c_util.m"
            {
#line 656 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 656 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "&&";
#line 656 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 11:
#line 657 "c_util.m"
            {
#line 657 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 657 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "||";
#line 657 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 12:
#line 654 "c_util.m"
            {
#line 654 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 654 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "==";
#line 654 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 13:
#line 655 "c_util.m"
            {
#line 655 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 655 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "!=";
#line 655 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 14:
#line 666 "c_util.m"
            {
#line 666 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
#line 666 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "MR_body";
#line 666 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 15:
#line 613 "c_util.m"
            {
#line 613 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 614 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "STRING_UNSAFE_INDEX_CODE_UNIT";
#line 613 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 16:
#line 621 "c_util.m"
            {
#line 621 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 621 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "==";
#line 621 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 17:
#line 622 "c_util.m"
            {
#line 622 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 622 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "!=";
#line 622 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 18:
#line 625 "c_util.m"
            {
#line 625 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 625 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<";
#line 625 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 19:
#line 626 "c_util.m"
            {
#line 626 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 626 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">";
#line 626 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 20:
#line 623 "c_util.m"
            {
#line 623 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 623 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<=";
#line 623 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 21:
#line 624 "c_util.m"
            {
#line 624 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 624 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">=";
#line 624 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 22:
#line 663 "c_util.m"
            {
#line 663 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
#line 663 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "MR_strcmp";
#line 663 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 23:
#line 658 "c_util.m"
            {
#line 658 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 658 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<";
#line 658 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 24:
#line 659 "c_util.m"
            {
#line 659 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 659 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">";
#line 659 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 25:
#line 660 "c_util.m"
            {
#line 660 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 660 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<=";
#line 660 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 26:
#line 661 "c_util.m"
            {
#line 661 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 661 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">=";
#line 661 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 27:
#line 628 "c_util.m"
            {
#line 628 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 628 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<=";
#line 628 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 28:
#line 630 "c_util.m"
            {
#line 630 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 630 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "+";
#line 630 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 29:
#line 631 "c_util.m"
            {
#line 631 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 631 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "-";
#line 631 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 30:
#line 632 "c_util.m"
            {
#line 632 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 632 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "*";
#line 632 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 31:
#line 633 "c_util.m"
            {
#line 633 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 633 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "/";
#line 633 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 32:
#line 635 "c_util.m"
            {
#line 635 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 635 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "==";
#line 635 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 33:
#line 636 "c_util.m"
            {
#line 636 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 636 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "!=";
#line 636 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 34:
#line 639 "c_util.m"
            {
#line 639 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 639 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<";
#line 639 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 35:
#line 640 "c_util.m"
            {
#line 640 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 640 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">";
#line 640 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 36:
#line 637 "c_util.m"
            {
#line 637 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 637 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<=";
#line 637 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 37:
#line 638 "c_util.m"
            {
#line 638 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 638 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">=";
#line 638 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 38:
#line 668 "c_util.m"
            {
#line 668 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 669 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "MR_float_word_bits";
#line 668 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 39:
#line 670 "c_util.m"
            {
#line 670 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 671 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "MR_float_from_dword";
#line 670 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 40:
#line 616 "c_util.m"
            {
#line 616 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 616 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "==";
#line 616 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 41:
#line 619 "c_util.m"
            {
#line 619 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 619 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "COMPOUND_EQ";
#line 619 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
          case (MR_Integer) 42:
#line 618 "c_util.m"
            {
#line 618 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 618 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "COMPOUND_LT";
#line 618 "c_util.m"
            }
#line 612 "c_util.m"
            break;
#line 612 "c_util.m"
        }
#line 612 "c_util.m"
        break;
#line 612 "c_util.m"
      case (MR_Integer) 1:
#line 612 "c_util.m"
        {
#line 612 "c_util.m"
          *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 612 "c_util.m"
          *backend_libs__c_util__HeadVar__3_3 = (MR_String) "ARRAY_INDEX";
#line 612 "c_util.m"
        }
#line 612 "c_util.m"
        break;
#line 612 "c_util.m"
      case (MR_Integer) 2:
#line 664 "c_util.m"
        {
#line 664 "c_util.m"
          MR_Integer backend_libs__c_util__N_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__c_util__HeadVar__1_1, (MR_Integer) 0)));

#line 664 "c_util.m"
          {
#line 664 "c_util.m"
            MR_Word base;
#line 664 "c_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 664 "c_util.m"
            *backend_libs__c_util__HeadVar__2_2 = base;
#line 664 "c_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__c_util__N_5));
#line 664 "c_util.m"
          }
#line 665 "c_util.m"
          *backend_libs__c_util__HeadVar__3_3 = (MR_String) "MR_offset_streq";
#line 664 "c_util.m"
        }
#line 612 "c_util.m"
        break;
#line 612 "c_util.m"
    }
#line 612 "c_util.m"
  }
#line 162 "c_util.m"
}

#line 145 "c_util.m"
void MR_CALL 
backend_libs__c_util__unary_prefix_op_2_p_0(
#line 145 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__1_1,
#line 145 "c_util.m"
  MR_String * backend_libs__c_util__HeadVar__2_2)
#line 145 "c_util.m"
{
#line 594 "c_util.m"
  {
#line 594 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 594 "c_util.m"
    *backend_libs__c_util__HeadVar__2_2 = ((&backend_libs__c_util_vector_common_5[0 + backend_libs__c_util__HeadVar__1_1]))->backend_libs__c_util__vector_common_type_5_0__vct_5_f_0;
#line 594 "c_util.m"
  }
#line 145 "c_util.m"
}

#line 132 "c_util.m"
void MR_CALL 
backend_libs__c_util__output_float_literal_3_p_0(
#line 132 "c_util.m"
  MR_Float backend_libs__c_util__Float_4)
#line 132 "c_util.m"
{
#line 586 "c_util.m"
  {
#line 586 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 586 "c_util.m"
    MR_String backend_libs__c_util__V_8_8;

#line 587 "c_util.m"
    {
#line 587 "c_util.m"
      backend_libs__c_util__V_8_8 = backend_libs__c_util__make_float_literal_1_f_0(backend_libs__c_util__Float_4);
    }
#line 587 "c_util.m"
    {
#line 587 "c_util.m"
      mercury__io__write_string_3_p_0(backend_libs__c_util__V_8_8);
#line 587 "c_util.m"
      return;
    }
#line 586 "c_util.m"
  }
#line 132 "c_util.m"
}

#line 127 "c_util.m"
MR_String MR_CALL 
backend_libs__c_util__make_float_literal_1_f_0(
#line 127 "c_util.m"
  MR_Float backend_libs__c_util__Float_3)
#line 127 "c_util.m"
{
#line 578 "c_util.m"
  {
#line 578 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 578 "c_util.m"
    MR_String backend_libs__c_util__HeadVar__2_2;

#line 578 "c_util.m"
    {
#line 578 "c_util.m"
      mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) &backend_libs__c_util_scalar_common_4[0], (MR_Integer) 17, (MR_Integer) 4, backend_libs__c_util__Float_3, &backend_libs__c_util__HeadVar__2_2);
    }
#line 578 "c_util.m"
    return backend_libs__c_util__HeadVar__2_2;
#line 578 "c_util.m"
  }
#line 127 "c_util.m"
}

#line 117 "c_util.m"
MR_String MR_CALL 
backend_libs__c_util__quote_char_1_f_0(
#line 117 "c_util.m"
  MR_Char backend_libs__c_util__Char_3)
#line 117 "c_util.m"
{
#line 386 "c_util.m"
  {
#line 386 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 386 "c_util.m"
    MR_String backend_libs__c_util__HeadVar__2_2;

#line 386 "c_util.m"
    {
#line 386 "c_util.m"
      return backend_libs__c_util__HeadVar__2_2 = backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0(backend_libs__c_util__Char_3);
    }
#line 386 "c_util.m"
    return backend_libs__c_util__HeadVar__2_2;
#line 386 "c_util.m"
  }
#line 117 "c_util.m"
}

#line 399 "c_util.m"
static void MR_CALL 
backend_libs__c_util__quote_string_1_f_0_1(
#line 399 "c_util.m"
  MR_Box backend_libs__c_util__closure_arg,
#line 399 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 399 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_2,
#line 399 "c_util.m"
  MR_Box * backend_libs__c_util__wrapper_arg_3)
#line 399 "c_util.m"
{
#line 399 "c_util.m"
  {
#line 399 "c_util.m"
    MR_Box backend_libs__c_util__closure = backend_libs__c_util__closure_arg;
#line 399 "c_util.m"
    MR_Word backend_libs__c_util__conv0_RevChars_6;

#line 399 "c_util.m"
    {
#line 399 "c_util.m"
      backend_libs__c_util__quote_one_char_c_3_p_0(((MR_Char) (MR_Word) backend_libs__c_util__wrapper_arg_1), ((MR_Word) backend_libs__c_util__wrapper_arg_2), &backend_libs__c_util__conv0_RevChars_6);
    }
#line 399 "c_util.m"
    *backend_libs__c_util__wrapper_arg_3 = ((MR_Box) (backend_libs__c_util__conv0_RevChars_6));
#line 399 "c_util.m"
  }
#line 399 "c_util.m"
}

#line 111 "c_util.m"
MR_String MR_CALL 
backend_libs__c_util__quote_string_1_f_0(
#line 111 "c_util.m"
  MR_String backend_libs__c_util__String_3)
#line 111 "c_util.m"
{
#line 398 "c_util.m"
  {
#line 398 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 398 "c_util.m"
    MR_String backend_libs__c_util__QuotedString_4;
#line 398 "c_util.m"
    MR_Word backend_libs__c_util__RevQuotedChars_5;
#line 399 "c_util.m"
    MR_Box backend_libs__c_util__conv1_RevQuotedChars_5;

#line 399 "c_util.m"
    {
#line 399 "c_util.m"
      mercury__string__foldl_4_p_1((MR_Word) &backend_libs__c_util_scalar_common_1[0], (MR_Word) &backend_libs__c_util_scalar_common_3[0], backend_libs__c_util__String_3, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &backend_libs__c_util__conv1_RevQuotedChars_5);
    }
#line 399 "c_util.m"
    backend_libs__c_util__RevQuotedChars_5 = ((MR_Word) backend_libs__c_util__conv1_RevQuotedChars_5);
#line 400 "c_util.m"
    {
#line 400 "c_util.m"
      mercury__string__from_rev_char_list_2_p_0(backend_libs__c_util__RevQuotedChars_5, &backend_libs__c_util__QuotedString_4);
    }
#line 398 "c_util.m"
    return backend_libs__c_util__QuotedString_4;
#line 398 "c_util.m"
  }
#line 111 "c_util.m"
}

#line 105 "c_util.m"
void MR_CALL 
backend_libs__c_util__output_quoted_char_3_p_0(
#line 105 "c_util.m"
  MR_Char backend_libs__c_util__Char_4)
#line 105 "c_util.m"
{
#line 373 "c_util.m"
  {
#line 373 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 373 "c_util.m"
    MR_String backend_libs__c_util__EscapedCharStr_15;

#line 383 "c_util.m"
    {
#line 383 "c_util.m"
      backend_libs__c_util__EscapedCharStr_15 = backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0(backend_libs__c_util__Char_4);
    }
#line 384 "c_util.m"
    {
#line 384 "c_util.m"
      mercury__io__write_string_3_p_0(backend_libs__c_util__EscapedCharStr_15);
#line 384 "c_util.m"
      return;
    }
#line 373 "c_util.m"
  }
#line 105 "c_util.m"
}

#line 98 "c_util.m"
void MR_CALL 
backend_libs__c_util__output_quoted_multi_string_lang_4_p_0(
#line 98 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__1_1,
#line 98 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__2_2)
#line 98 "c_util.m"
{
#line 356 "c_util.m"
  while (MR_TRUE)
#line 356 "c_util.m"
    {
#line 356 "c_util.m"
      /* tailcall optimized into a loop */
#line 356 "c_util.m"
      {
#line 356 "c_util.m"
        MR_bool backend_libs__c_util__succeeded;

#line 356 "c_util.m"
        if ((backend_libs__c_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 356 "c_util.m"
          {
#line 356 "c_util.m"
          }
#line 356 "c_util.m"
        else
#line 357 "c_util.m"
          {
#line 357 "c_util.m"
            MR_String backend_libs__c_util__S_10 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__c_util__HeadVar__2_2, (MR_Integer) 0)));
#line 357 "c_util.m"
            MR_Word backend_libs__c_util__Ss_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__c_util__HeadVar__2_2, (MR_Integer) 1)));
#line 357 "c_util.m"
            MR_Char backend_libs__c_util__V_16_16;

#line 333 "c_util.m"
#line 333 "c_util.m"
            switch (backend_libs__c_util__HeadVar__1_1) {
#line 333 "c_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 333 "c_util.m"
              case (MR_Integer) 0:
#line 333 "c_util.m"
                {
#line 333 "c_util.m"
                  MR_String backend_libs__c_util__Left_25;
#line 333 "c_util.m"
                  MR_String backend_libs__c_util__Right_26;

#line 338 "c_util.m"
                  {
#line 338 "c_util.m"
                    mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__S_10, (MR_Integer) 160, &backend_libs__c_util__Left_25, &backend_libs__c_util__Right_26);
                  }
#line 339 "c_util.m"
                  {
#line 339 "c_util.m"
                    backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__Left_25, (MR_Integer) 0);
                  }
#line 340 "c_util.m"
                  backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_26, (MR_String) "") == 0);
#line 342 "c_util.m"
                  if (backend_libs__c_util__succeeded)
#line 342 "c_util.m"
                    {
#line 342 "c_util.m"
                    }
#line 342 "c_util.m"
                  else
#line 343 "c_util.m"
                    {
#line 343 "c_util.m"
                      MR_String backend_libs__c_util__Left_40;
#line 343 "c_util.m"
                      MR_String backend_libs__c_util__Right_41;

#line 343 "c_util.m"
                      {
#line 343 "c_util.m"
                        mercury__io__write_string_3_p_0((MR_String) "\" \"");
                      }
#line 338 "c_util.m"
                      {
#line 338 "c_util.m"
                        mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Right_26, (MR_Integer) 160, &backend_libs__c_util__Left_40, &backend_libs__c_util__Right_41);
                      }
#line 339 "c_util.m"
                      {
#line 339 "c_util.m"
                        backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__Left_40, (MR_Integer) 0);
                      }
#line 340 "c_util.m"
                      backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_41, (MR_String) "") == 0);
#line 342 "c_util.m"
                      if (backend_libs__c_util__succeeded)
#line 342 "c_util.m"
                        {
#line 342 "c_util.m"
                        }
#line 342 "c_util.m"
                      else
#line 343 "c_util.m"
                        {
#line 343 "c_util.m"
                          MR_String backend_libs__c_util__Left_55;
#line 343 "c_util.m"
                          MR_String backend_libs__c_util__Right_56;

#line 343 "c_util.m"
                          {
#line 343 "c_util.m"
                            mercury__io__write_string_3_p_0((MR_String) "\" \"");
                          }
#line 338 "c_util.m"
                          {
#line 338 "c_util.m"
                            mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Right_41, (MR_Integer) 160, &backend_libs__c_util__Left_55, &backend_libs__c_util__Right_56);
                          }
#line 339 "c_util.m"
                          {
#line 339 "c_util.m"
                            backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__Left_55, (MR_Integer) 0);
                          }
#line 340 "c_util.m"
                          backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_56, (MR_String) "") == 0);
#line 342 "c_util.m"
                          if (backend_libs__c_util__succeeded)
#line 342 "c_util.m"
                            {
#line 342 "c_util.m"
                            }
#line 342 "c_util.m"
                          else
#line 343 "c_util.m"
                            {
#line 343 "c_util.m"
                              {
#line 343 "c_util.m"
                                mercury__io__write_string_3_p_0((MR_String) "\" \"");
                              }
#line 344 "c_util.m"
                              {
#line 344 "c_util.m"
                                backend_libs__c_util__output_quoted_string_lang_4_p_0(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__Right_56);
                              }
#line 343 "c_util.m"
                            }
#line 343 "c_util.m"
                        }
#line 343 "c_util.m"
                    }
#line 333 "c_util.m"
                }
#line 333 "c_util.m"
                break;
#line 333 "c_util.m"
              case (MR_Integer) 2:
#line 333 "c_util.m"
              case (MR_Integer) 1:
#line 349 "c_util.m"
                {
#line 350 "c_util.m"
                  {
#line 350 "c_util.m"
                    backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__S_10, (MR_Integer) 0);
                  }
#line 349 "c_util.m"
                }
#line 333 "c_util.m"
                break;
#line 333 "c_util.m"
            }
#line 359 "c_util.m"
            {
#line 359 "c_util.m"
              backend_libs__c_util__V_16_16 = mercury__char__det_from_int_1_f_0((MR_Integer) 0);
            }
#line 359 "c_util.m"
            {
#line 359 "c_util.m"
              backend_libs__c_util__output_quoted_char_lang_4_p_3(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__V_16_16);
            }
#line 360 "c_util.m"
            /* direct tailcall eliminated */
#line 360 "c_util.m"
            {
#line 360 "c_util.m"
              MR_Word backend_libs__c_util__HeadVar__2__tmp_copy_2 = backend_libs__c_util__Ss_11;

#line 360 "c_util.m"
              backend_libs__c_util__HeadVar__2_2 = backend_libs__c_util__HeadVar__2__tmp_copy_2;
#line 360 "c_util.m"
            }
#line 360 "c_util.m"
            continue;
#line 357 "c_util.m"
          }
#line 356 "c_util.m"
      }
#line 356 "c_util.m"
      break;
#line 356 "c_util.m"
    }
#line 98 "c_util.m"
}

#line 94 "c_util.m"
void MR_CALL 
backend_libs__c_util__output_quoted_multi_string_3_p_0(
#line 94 "c_util.m"
  MR_Word backend_libs__c_util__Ss_4)
#line 94 "c_util.m"
{
#line 353 "c_util.m"
  {
#line 353 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 354 "c_util.m"
    {
#line 354 "c_util.m"
      backend_libs__c_util__output_quoted_multi_string_lang_4_p_0((MR_Integer) 0, backend_libs__c_util__Ss_4);
#line 354 "c_util.m"
      return;
    }
#line 353 "c_util.m"
  }
#line 94 "c_util.m"
}

#line 87 "c_util.m"
void MR_CALL 
backend_libs__c_util__output_quoted_string_lang_4_p_3(
#line 87 "c_util.m"
  MR_Word backend_libs__c_util__Lang_5,
#line 87 "c_util.m"
  MR_String backend_libs__c_util__S_6)
#line 87 "c_util.m"
{
#line 333 "c_util.m"
  {
#line 333 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 333 "c_util.m"
#line 333 "c_util.m"
    switch (backend_libs__c_util__Lang_5) {
#line 333 "c_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 333 "c_util.m"
      case (MR_Integer) 0:
#line 333 "c_util.m"
        {
#line 333 "c_util.m"
          MR_String backend_libs__c_util__Left_8;
#line 333 "c_util.m"
          MR_String backend_libs__c_util__Right_9;

#line 338 "c_util.m"
          {
#line 338 "c_util.m"
            mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__S_6, (MR_Integer) 160, &backend_libs__c_util__Left_8, &backend_libs__c_util__Right_9);
          }
#line 339 "c_util.m"
          {
#line 339 "c_util.m"
            backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__Left_8, (MR_Integer) 0);
          }
#line 340 "c_util.m"
          backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_9, (MR_String) "") == 0);
#line 342 "c_util.m"
          if (backend_libs__c_util__succeeded)
#line 342 "c_util.m"
            {
#line 342 "c_util.m"
            }
#line 342 "c_util.m"
          else
#line 343 "c_util.m"
            {
#line 343 "c_util.m"
              MR_String backend_libs__c_util__Left_25;
#line 343 "c_util.m"
              MR_String backend_libs__c_util__Right_26;

#line 343 "c_util.m"
              {
#line 343 "c_util.m"
                mercury__io__write_string_3_p_0((MR_String) "\" \"");
              }
#line 338 "c_util.m"
              {
#line 338 "c_util.m"
                mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Right_9, (MR_Integer) 160, &backend_libs__c_util__Left_25, &backend_libs__c_util__Right_26);
              }
#line 339 "c_util.m"
              {
#line 339 "c_util.m"
                backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__Left_25, (MR_Integer) 0);
              }
#line 340 "c_util.m"
              backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_26, (MR_String) "") == 0);
#line 342 "c_util.m"
              if (backend_libs__c_util__succeeded)
#line 342 "c_util.m"
                {
#line 342 "c_util.m"
                }
#line 342 "c_util.m"
              else
#line 343 "c_util.m"
                {
#line 343 "c_util.m"
                  MR_String backend_libs__c_util__Left_40;
#line 343 "c_util.m"
                  MR_String backend_libs__c_util__Right_41;

#line 343 "c_util.m"
                  {
#line 343 "c_util.m"
                    mercury__io__write_string_3_p_0((MR_String) "\" \"");
                  }
#line 338 "c_util.m"
                  {
#line 338 "c_util.m"
                    mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Right_26, (MR_Integer) 160, &backend_libs__c_util__Left_40, &backend_libs__c_util__Right_41);
                  }
#line 339 "c_util.m"
                  {
#line 339 "c_util.m"
                    backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__Left_40, (MR_Integer) 0);
                  }
#line 340 "c_util.m"
                  backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_41, (MR_String) "") == 0);
#line 342 "c_util.m"
                  if (backend_libs__c_util__succeeded)
#line 342 "c_util.m"
                    {
#line 342 "c_util.m"
                    }
#line 342 "c_util.m"
                  else
#line 343 "c_util.m"
                    {
#line 343 "c_util.m"
                      {
#line 343 "c_util.m"
                        mercury__io__write_string_3_p_0((MR_String) "\" \"");
                      }
#line 344 "c_util.m"
                      {
#line 344 "c_util.m"
                        backend_libs__c_util__output_quoted_string_lang_4_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__Right_41);
#line 344 "c_util.m"
                        return;
                      }
#line 343 "c_util.m"
                    }
#line 343 "c_util.m"
                }
#line 343 "c_util.m"
            }
#line 333 "c_util.m"
        }
#line 333 "c_util.m"
        break;
#line 333 "c_util.m"
      case (MR_Integer) 2:
#line 333 "c_util.m"
      case (MR_Integer) 1:
#line 349 "c_util.m"
        {
#line 350 "c_util.m"
          {
#line 350 "c_util.m"
            backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__S_6, (MR_Integer) 0);
#line 350 "c_util.m"
            return;
          }
#line 349 "c_util.m"
        }
#line 333 "c_util.m"
        break;
#line 333 "c_util.m"
    }
#line 333 "c_util.m"
  }
#line 87 "c_util.m"
}

#line 85 "c_util.m"
void MR_CALL 
backend_libs__c_util__output_quoted_string_lang_4_p_2(
#line 85 "c_util.m"
  MR_Word backend_libs__c_util__Lang_5,
#line 85 "c_util.m"
  MR_String backend_libs__c_util__S_6)
#line 85 "c_util.m"
{
#line 333 "c_util.m"
  {
#line 333 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 350 "c_util.m"
    {
#line 350 "c_util.m"
      backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__S_6, (MR_Integer) 0);
#line 350 "c_util.m"
      return;
    }
#line 333 "c_util.m"
  }
#line 85 "c_util.m"
}

#line 84 "c_util.m"
void MR_CALL 
backend_libs__c_util__output_quoted_string_lang_4_p_1(
#line 84 "c_util.m"
  MR_Word backend_libs__c_util__Lang_5,
#line 84 "c_util.m"
  MR_String backend_libs__c_util__S_6)
#line 84 "c_util.m"
{
#line 333 "c_util.m"
  {
#line 333 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 350 "c_util.m"
    {
#line 350 "c_util.m"
      backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__S_6, (MR_Integer) 0);
#line 350 "c_util.m"
      return;
    }
#line 333 "c_util.m"
  }
#line 84 "c_util.m"
}

#line 83 "c_util.m"
void MR_CALL 
backend_libs__c_util__output_quoted_string_lang_4_p_0(
#line 83 "c_util.m"
  MR_Word backend_libs__c_util__Lang_5,
#line 83 "c_util.m"
  MR_String backend_libs__c_util__S_6)
#line 83 "c_util.m"
{
#line 333 "c_util.m"
  while (MR_TRUE)
#line 333 "c_util.m"
    {
#line 333 "c_util.m"
      /* tailcall optimized into a loop */
#line 333 "c_util.m"
      {
#line 333 "c_util.m"
        MR_bool backend_libs__c_util__succeeded;
#line 333 "c_util.m"
        MR_String backend_libs__c_util__Left_8;
#line 333 "c_util.m"
        MR_String backend_libs__c_util__Right_9;

#line 338 "c_util.m"
        {
#line 338 "c_util.m"
          mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__S_6, (MR_Integer) 160, &backend_libs__c_util__Left_8, &backend_libs__c_util__Right_9);
        }
#line 339 "c_util.m"
        {
#line 339 "c_util.m"
          backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__Left_8, (MR_Integer) 0);
        }
#line 340 "c_util.m"
        backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_9, (MR_String) "") == 0);
#line 342 "c_util.m"
        if (backend_libs__c_util__succeeded)
#line 342 "c_util.m"
          {
#line 342 "c_util.m"
          }
#line 342 "c_util.m"
        else
#line 343 "c_util.m"
          {
#line 343 "c_util.m"
            MR_String backend_libs__c_util__Left_25;
#line 343 "c_util.m"
            MR_String backend_libs__c_util__Right_26;

#line 343 "c_util.m"
            {
#line 343 "c_util.m"
              mercury__io__write_string_3_p_0((MR_String) "\" \"");
            }
#line 338 "c_util.m"
            {
#line 338 "c_util.m"
              mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Right_9, (MR_Integer) 160, &backend_libs__c_util__Left_25, &backend_libs__c_util__Right_26);
            }
#line 339 "c_util.m"
            {
#line 339 "c_util.m"
              backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__Left_25, (MR_Integer) 0);
            }
#line 340 "c_util.m"
            backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_26, (MR_String) "") == 0);
#line 342 "c_util.m"
            if (backend_libs__c_util__succeeded)
#line 342 "c_util.m"
              {
#line 342 "c_util.m"
              }
#line 342 "c_util.m"
            else
#line 343 "c_util.m"
              {
#line 343 "c_util.m"
                {
#line 343 "c_util.m"
                  mercury__io__write_string_3_p_0((MR_String) "\" \"");
                }
#line 344 "c_util.m"
                /* direct tailcall eliminated */
#line 344 "c_util.m"
                {
#line 344 "c_util.m"
                  MR_String backend_libs__c_util__S__tmp_copy_6 = backend_libs__c_util__Right_26;

#line 344 "c_util.m"
                  backend_libs__c_util__S_6 = backend_libs__c_util__S__tmp_copy_6;
#line 344 "c_util.m"
                }
#line 344 "c_util.m"
                continue;
#line 343 "c_util.m"
              }
#line 343 "c_util.m"
          }
#line 333 "c_util.m"
      }
#line 333 "c_util.m"
      break;
#line 333 "c_util.m"
    }
#line 83 "c_util.m"
}

#line 78 "c_util.m"
void MR_CALL 
backend_libs__c_util__output_quoted_string_3_p_0(
#line 78 "c_util.m"
  MR_String backend_libs__c_util__S_4)
#line 78 "c_util.m"
{
#line 326 "c_util.m"
  {
#line 326 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 326 "c_util.m"
    MR_String backend_libs__c_util__Left_15;
#line 326 "c_util.m"
    MR_String backend_libs__c_util__Right_16;

#line 338 "c_util.m"
    {
#line 338 "c_util.m"
      mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__S_4, (MR_Integer) 160, &backend_libs__c_util__Left_15, &backend_libs__c_util__Right_16);
    }
#line 339 "c_util.m"
    {
#line 339 "c_util.m"
      backend_libs__c_util__do_output_quoted_string_5_p_0((MR_Integer) 0, backend_libs__c_util__Left_15, (MR_Integer) 0);
    }
#line 340 "c_util.m"
    backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_16, (MR_String) "") == 0);
#line 342 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 342 "c_util.m"
      {
#line 342 "c_util.m"
      }
#line 342 "c_util.m"
    else
#line 343 "c_util.m"
      {
#line 343 "c_util.m"
        MR_String backend_libs__c_util__Left_30;
#line 343 "c_util.m"
        MR_String backend_libs__c_util__Right_31;

#line 343 "c_util.m"
        {
#line 343 "c_util.m"
          mercury__io__write_string_3_p_0((MR_String) "\" \"");
        }
#line 338 "c_util.m"
        {
#line 338 "c_util.m"
          mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Right_16, (MR_Integer) 160, &backend_libs__c_util__Left_30, &backend_libs__c_util__Right_31);
        }
#line 339 "c_util.m"
        {
#line 339 "c_util.m"
          backend_libs__c_util__do_output_quoted_string_5_p_0((MR_Integer) 0, backend_libs__c_util__Left_30, (MR_Integer) 0);
        }
#line 340 "c_util.m"
        backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_31, (MR_String) "") == 0);
#line 342 "c_util.m"
        if (backend_libs__c_util__succeeded)
#line 342 "c_util.m"
          {
#line 342 "c_util.m"
          }
#line 342 "c_util.m"
        else
#line 343 "c_util.m"
          {
#line 343 "c_util.m"
            {
#line 343 "c_util.m"
              mercury__io__write_string_3_p_0((MR_String) "\" \"");
            }
#line 344 "c_util.m"
            {
#line 344 "c_util.m"
              backend_libs__c_util__output_quoted_string_lang_4_p_0((MR_Integer) 0, backend_libs__c_util__Right_31);
#line 344 "c_util.m"
              return;
            }
#line 343 "c_util.m"
          }
#line 343 "c_util.m"
      }
#line 326 "c_util.m"
  }
#line 78 "c_util.m"
}

#line 60 "c_util.m"
void MR_CALL 
backend_libs__c_util__always_reset_line_num_2_p_0(void)
#line 60 "c_util.m"
{
#line 253 "c_util.m"
  {
#line 253 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 253 "c_util.m"
    MR_Integer backend_libs__c_util__Line_4;
#line 253 "c_util.m"
    MR_String backend_libs__c_util__File_5;

#line 256 "c_util.m"
    {
#line 256 "c_util.m"
      mercury__io__get_output_line_number_3_p_0(&backend_libs__c_util__Line_4);
    }
#line 257 "c_util.m"
    {
#line 257 "c_util.m"
      mercury__io__output_stream_name_3_p_0(&backend_libs__c_util__File_5);
    }
#line 259 "c_util.m"
    backend_libs__c_util__succeeded = (backend_libs__c_util__Line_4 > (MR_Integer) 0);
#line 259 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 259 "c_util.m"
      {
#line 260 "c_util.m"
        backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__File_5, (MR_String) "") == 0);
#line 260 "c_util.m"
        backend_libs__c_util__succeeded = !(backend_libs__c_util__succeeded);
#line 259 "c_util.m"
      }
#line 274 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 262 "c_util.m"
      {
#line 262 "c_util.m"
        MR_Word backend_libs__c_util__CanPrint_6;
#line 262 "c_util.m"
        MR_Integer backend_libs__c_util__V_14_14;

#line 262 "c_util.m"
        {
#line 262 "c_util.m"
          mercury__io__write_string_3_p_0((MR_String) "#line ");
        }
#line 263 "c_util.m"
        backend_libs__c_util__V_14_14 = (backend_libs__c_util__Line_4 + (MR_Integer) 1);
#line 263 "c_util.m"
        {
#line 263 "c_util.m"
          mercury__io__write_int_3_p_0(backend_libs__c_util__V_14_14);
        }
#line 264 "c_util.m"
        {
#line 264 "c_util.m"
          mercury__io__write_string_3_p_0((MR_String) " \"");
        }
#line 289 "c_util.m"
{
#define MR_PROC_LABEL backend_libs__c_util__always_reset_line_num_2_p_0

	MR_String Str;
	MR_Word CanPrintDirectly;

	Str =  backend_libs__c_util__File_5 ;
		{
#line 289 "c_util.m"
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
#line 6573 "backend_libs.c_util.c"

		;}
#undef MR_PROC_LABEL
	 backend_libs__c_util__CanPrint_6  = CanPrintDirectly;
#line 289 "c_util.m"
}
#line 269 "c_util.m"
#line 269 "c_util.m"
        switch (backend_libs__c_util__CanPrint_6) {
#line 269 "c_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 269 "c_util.m"
          case (MR_Integer) 0:
#line 271 "c_util.m"
            {
#line 271 "c_util.m"
              backend_libs__c_util__output_quoted_string_3_p_0(backend_libs__c_util__File_5);
            }
#line 269 "c_util.m"
            break;
#line 269 "c_util.m"
          case (MR_Integer) 1:
#line 268 "c_util.m"
            {
#line 268 "c_util.m"
              mercury__io__write_string_3_p_0(backend_libs__c_util__File_5);
            }
#line 269 "c_util.m"
            break;
#line 269 "c_util.m"
        }
#line 273 "c_util.m"
        {
#line 273 "c_util.m"
          mercury__io__write_string_3_p_0((MR_String) "\"\n");
#line 273 "c_util.m"
          return;
        }
#line 262 "c_util.m"
      }
#line 274 "c_util.m"
    else
#line 274 "c_util.m"
      {
#line 274 "c_util.m"
      }
#line 253 "c_util.m"
  }
#line 60 "c_util.m"
}

#line 55 "c_util.m"
void MR_CALL 
backend_libs__c_util__reset_line_num_3_p_0(
#line 55 "c_util.m"
  MR_Word backend_libs__c_util__Globals_4)
#line 55 "c_util.m"
{
#line 244 "c_util.m"
  {
#line 244 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 244 "c_util.m"
    MR_Word backend_libs__c_util__LineNumbers_6;

#line 245 "c_util.m"
    {
#line 245 "c_util.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__c_util__Globals_4, (MR_Integer) 138, &backend_libs__c_util__LineNumbers_6);
    }
#line 249 "c_util.m"
#line 249 "c_util.m"
    switch (backend_libs__c_util__LineNumbers_6) {
#line 249 "c_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 249 "c_util.m"
      case (MR_Integer) 0:
#line 250 "c_util.m"
        {
#line 250 "c_util.m"
        }
#line 249 "c_util.m"
        break;
#line 249 "c_util.m"
      case (MR_Integer) 1:
#line 248 "c_util.m"
        {
#line 248 "c_util.m"
          backend_libs__c_util__always_reset_line_num_2_p_0();
#line 248 "c_util.m"
          return;
        }
#line 249 "c_util.m"
        break;
#line 249 "c_util.m"
    }
#line 244 "c_util.m"
  }
#line 55 "c_util.m"
}

#line 49 "c_util.m"
void MR_CALL 
backend_libs__c_util__always_set_line_num_4_p_0(
#line 49 "c_util.m"
  MR_String backend_libs__c_util__File_5,
#line 49 "c_util.m"
  MR_Integer backend_libs__c_util__Line_6)
#line 49 "c_util.m"
{
#line 240 "c_util.m"
  {
#line 240 "c_util.m"
    MR_bool backend_libs__c_util__succeeded = (backend_libs__c_util__Line_6 > (MR_Integer) 0);

#line 225 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 225 "c_util.m"
      {
#line 226 "c_util.m"
        backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__File_5, (MR_String) "") == 0);
#line 226 "c_util.m"
        backend_libs__c_util__succeeded = !(backend_libs__c_util__succeeded);
#line 225 "c_util.m"
      }
#line 240 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 228 "c_util.m"
      {
#line 228 "c_util.m"
        MR_Word backend_libs__c_util__CanPrint_8;

#line 228 "c_util.m"
        {
#line 228 "c_util.m"
          mercury__io__write_string_3_p_0((MR_String) "#line ");
        }
#line 229 "c_util.m"
        {
#line 229 "c_util.m"
          mercury__io__write_int_3_p_0(backend_libs__c_util__Line_6);
        }
#line 230 "c_util.m"
        {
#line 230 "c_util.m"
          mercury__io__write_string_3_p_0((MR_String) " \"");
        }
#line 289 "c_util.m"
{
#define MR_PROC_LABEL backend_libs__c_util__always_set_line_num_4_p_0

	MR_String Str;
	MR_Word CanPrintDirectly;

	Str =  backend_libs__c_util__File_5 ;
		{
#line 289 "c_util.m"
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
#line 6762 "backend_libs.c_util.c"

		;}
#undef MR_PROC_LABEL
	 backend_libs__c_util__CanPrint_8  = CanPrintDirectly;
#line 289 "c_util.m"
}
#line 235 "c_util.m"
#line 235 "c_util.m"
        switch (backend_libs__c_util__CanPrint_8) {
#line 235 "c_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 235 "c_util.m"
          case (MR_Integer) 0:
#line 237 "c_util.m"
            {
#line 237 "c_util.m"
              backend_libs__c_util__output_quoted_string_3_p_0(backend_libs__c_util__File_5);
            }
#line 235 "c_util.m"
            break;
#line 235 "c_util.m"
          case (MR_Integer) 1:
#line 234 "c_util.m"
            {
#line 234 "c_util.m"
              mercury__io__write_string_3_p_0(backend_libs__c_util__File_5);
            }
#line 235 "c_util.m"
            break;
#line 235 "c_util.m"
        }
#line 239 "c_util.m"
        {
#line 239 "c_util.m"
          mercury__io__write_string_3_p_0((MR_String) "\"\n");
#line 239 "c_util.m"
          return;
        }
#line 228 "c_util.m"
      }
#line 240 "c_util.m"
    else
#line 241 "c_util.m"
      {
#line 241 "c_util.m"
        backend_libs__c_util__always_reset_line_num_2_p_0();
#line 241 "c_util.m"
        return;
      }
#line 240 "c_util.m"
  }
#line 49 "c_util.m"
}

#line 42 "c_util.m"
void MR_CALL 
backend_libs__c_util__set_line_num_5_p_0(
#line 42 "c_util.m"
  MR_Word backend_libs__c_util__Globals_6,
#line 42 "c_util.m"
  MR_String backend_libs__c_util__File_7,
#line 42 "c_util.m"
  MR_Integer backend_libs__c_util__Line_8)
#line 42 "c_util.m"
{
#line 214 "c_util.m"
  {
#line 214 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 214 "c_util.m"
    MR_Word backend_libs__c_util__LineNumbers_10;

#line 215 "c_util.m"
    {
#line 215 "c_util.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__c_util__Globals_6, (MR_Integer) 138, &backend_libs__c_util__LineNumbers_10);
    }
#line 219 "c_util.m"
#line 219 "c_util.m"
    switch (backend_libs__c_util__LineNumbers_10) {
#line 219 "c_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 219 "c_util.m"
      case (MR_Integer) 0:
#line 220 "c_util.m"
        {
#line 220 "c_util.m"
        }
#line 219 "c_util.m"
        break;
#line 219 "c_util.m"
      case (MR_Integer) 1:
#line 218 "c_util.m"
        {
#line 218 "c_util.m"
          backend_libs__c_util__always_set_line_num_4_p_0(backend_libs__c_util__File_7, backend_libs__c_util__Line_8);
#line 218 "c_util.m"
          return;
        }
#line 219 "c_util.m"
        break;
#line 219 "c_util.m"
    }
#line 214 "c_util.m"
  }
#line 42 "c_util.m"
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
	MR_register_type_ctor_info(&backend_libs__c_util__backend_libs__c_util__type_ctor_info_multi_string_0);
}

void mercury__backend_libs__c_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module backend_libs.c_util. */
