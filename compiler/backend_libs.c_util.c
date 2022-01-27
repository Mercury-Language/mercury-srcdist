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




#line 142 "backend_libs.c_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__c_util__list__pti_list_1__plain_builtin__type_ctor_info_character_0;

#line 145 "backend_libs.c_util.c"
static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_0;

#line 148 "backend_libs.c_util.c"
static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_1;

#line 151 "backend_libs.c_util.c"
static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_2;

#line 154 "backend_libs.c_util.c"
static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_3;

#line 157 "backend_libs.c_util.c"
static const MR_PseudoTypeInfo backend_libs__c_util__backend_libs__c_util__field_types_binop_category_0_4[1];

#line 160 "backend_libs.c_util.c"
static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_4;

#line 163 "backend_libs.c_util.c"
static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_5;

#line 166 "backend_libs.c_util.c"
static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_6;

#line 169 "backend_libs.c_util.c"
static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_7;

#line 172 "backend_libs.c_util.c"
static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_8;

#line 175 "backend_libs.c_util.c"
static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_9;

#line 178 "backend_libs.c_util.c"
static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_10;

#line 181 "backend_libs.c_util.c"
static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_11;

#line 184 "backend_libs.c_util.c"
static const MR_DuFunctorDesc backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_12;

#line 187 "backend_libs.c_util.c"
static const MR_DuFunctorDescPtr backend_libs__c_util__backend_libs__c_util__du_stag_ordered_binop_category_0_0[12];

#line 190 "backend_libs.c_util.c"
static const MR_DuFunctorDescPtr backend_libs__c_util__backend_libs__c_util__du_stag_ordered_binop_category_0_1[1];

#line 193 "backend_libs.c_util.c"
static const MR_DuPtagLayout backend_libs__c_util__backend_libs__c_util__du_ptag_ordered_binop_category_0[2];

#line 196 "backend_libs.c_util.c"
static const MR_DuFunctorDescPtr backend_libs__c_util__backend_libs__c_util__du_name_ordered_binop_category_0[13];

#line 199 "backend_libs.c_util.c"
static const MR_Integer backend_libs__c_util__backend_libs__c_util__functor_number_map_binop_category_0[13];

#line 202 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_0;

#line 205 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_1;

#line 208 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_2;

#line 211 "backend_libs.c_util.c"
static const MR_EnumFunctorDescPtr backend_libs__c_util__backend_libs__c_util__enum_value_ordered_literal_language_0[3];

#line 214 "backend_libs.c_util.c"
static const MR_EnumFunctorDescPtr backend_libs__c_util__backend_libs__c_util__enum_name_ordered_literal_language_0[3];

#line 217 "backend_libs.c_util.c"
static const MR_Integer backend_libs__c_util__backend_libs__c_util__functor_number_map_literal_language_0[3];

#line 220 "backend_libs.c_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__c_util__list__ti_list_1builtin__type_ctor_info_string_0;

#line 223 "backend_libs.c_util.c"
static MR_bool MR_CALL 
backend_libs__c_util____Unify____binop_category_0_0_10001(
#line 226 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 228 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2);

#line 231 "backend_libs.c_util.c"
static void MR_CALL 
backend_libs__c_util____Compare____binop_category_0_0_10001(
#line 234 "backend_libs.c_util.c"
  MR_Box * backend_libs__c_util__wrapper_arg_1,
#line 236 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2,
#line 238 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_3);

#line 241 "backend_libs.c_util.c"
static MR_bool MR_CALL 
backend_libs__c_util____Unify____literal_language_0_0_10001(
#line 244 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 246 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2);

#line 249 "backend_libs.c_util.c"
static void MR_CALL 
backend_libs__c_util____Compare____literal_language_0_0_10001(
#line 252 "backend_libs.c_util.c"
  MR_Box * backend_libs__c_util__wrapper_arg_1,
#line 254 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2,
#line 256 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_3);

#line 259 "backend_libs.c_util.c"
static MR_bool MR_CALL 
backend_libs__c_util____Unify____multi_string_0_0_10001(
#line 262 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 264 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2);

#line 267 "backend_libs.c_util.c"
static void MR_CALL 
backend_libs__c_util____Compare____multi_string_0_0_10001(
#line 270 "backend_libs.c_util.c"
  MR_Box * backend_libs__c_util__wrapper_arg_1,
#line 272 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2,
#line 274 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_3);

#line 540 "c_util.m"
static void MR_CALL 
backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_p_0(
#line 540 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__1_1,
#line 540 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__2_2,
#line 540 "c_util.m"
  MR_Word * backend_libs__c_util__L_3);

#line 438 "c_util.m"
static void MR_CALL 
backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0_1(
#line 438 "c_util.m"
  MR_Box backend_libs__c_util__closure_arg,
#line 438 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 438 "c_util.m"
  MR_Box * backend_libs__c_util__wrapper_arg_2);

#line 387 "c_util.m"
static MR_String MR_CALL 
backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0(
#line 387 "c_util.m"
  MR_Char backend_libs__c_util__Char_5);

#line 556 "c_util.m"
static void MR_CALL 
backend_libs__c_util__octal_escape_any_int_2_p_0(
#line 556 "c_util.m"
  MR_Integer backend_libs__c_util__Int_3,
#line 556 "c_util.m"
  MR_Word * backend_libs__c_util__EscapeCodeChars_4);

#line 491 "c_util.m"
static void MR_CALL 
backend_libs__c_util__quote_one_char_c_3_p_0_1(
#line 491 "c_util.m"
  MR_Box backend_libs__c_util__closure_arg,
#line 491 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 491 "c_util.m"
  MR_Box * backend_libs__c_util__wrapper_arg_2);

#line 465 "c_util.m"
static void MR_CALL 
backend_libs__c_util__quote_one_char_c_3_p_0(
#line 465 "c_util.m"
  MR_Char backend_libs__c_util__Char_4,
#line 465 "c_util.m"
  MR_Word backend_libs__c_util__RevChars0_5,
#line 465 "c_util.m"
  MR_Word * backend_libs__c_util__RevChars_6);

#line 438 "c_util.m"
static void MR_CALL 
backend_libs__c_util__output_quoted_char_lang_4_p_3_1(
#line 438 "c_util.m"
  MR_Box backend_libs__c_util__closure_arg,
#line 438 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 438 "c_util.m"
  MR_Box * backend_libs__c_util__wrapper_arg_2);

#line 378 "c_util.m"
static void MR_CALL 
backend_libs__c_util__output_quoted_char_lang_4_p_3(
#line 378 "c_util.m"
  MR_Word backend_libs__c_util__Lang_5,
#line 378 "c_util.m"
  MR_Char backend_libs__c_util__Char_6);

#line 360 "c_util.m"
static void MR_CALL 
backend_libs__c_util__do_output_quoted_string_5_p_0(
#line 360 "c_util.m"
  MR_Word backend_libs__c_util__Lang_6,
#line 360 "c_util.m"
  MR_String backend_libs__c_util__S_7,
#line 360 "c_util.m"
  MR_Integer backend_libs__c_util__Cur_8);

#line 280 "c_util.m"
static void MR_CALL 
backend_libs__c_util__can_print_directly_4_p_0(
#line 280 "c_util.m"
  MR_String backend_libs__c_util__Str_1,
#line 280 "c_util.m"
  MR_Word * backend_libs__c_util__CanPrintDirectly_2);

#line 397 "c_util.m"
static void MR_CALL 
backend_libs__c_util__quote_string_1_f_0_1(
#line 397 "c_util.m"
  MR_Box backend_libs__c_util__closure_arg,
#line 397 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 397 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_2,
#line 397 "c_util.m"
  MR_Box * backend_libs__c_util__wrapper_arg_3);


static /* final */ const MR_Box backend_libs__c_util_scalar_common_1[14][2];

static /* final */ const MR_Box backend_libs__c_util_scalar_common_2[1][6];

static /* final */ const MR_Box backend_libs__c_util_scalar_common_3[4][3];

static /* final */ const MR_Box backend_libs__c_util_scalar_common_4[2][1];

static /* final */ const MR_Box backend_libs__c_util_scalar_common_6[1][5];


#line 592 "c_util.m"
/* sealed */ struct backend_libs__c_util__vector_common_type_5_0_s {
#line 592 "c_util.m"
  const MR_String backend_libs__c_util__vector_common_type_5_0__vct_5_f_0;
#line 592 "c_util.m"
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



#line 563 "backend_libs.c_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__c_util__list__pti_list_1__plain_builtin__type_ctor_info_character_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
  }
};

#line 571 "backend_libs.c_util.c"
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

#line 586 "backend_libs.c_util.c"
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

#line 601 "backend_libs.c_util.c"
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

#line 616 "backend_libs.c_util.c"
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

#line 631 "backend_libs.c_util.c"
static const MR_PseudoTypeInfo backend_libs__c_util__backend_libs__c_util__field_types_binop_category_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 636 "backend_libs.c_util.c"
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

#line 651 "backend_libs.c_util.c"
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

#line 666 "backend_libs.c_util.c"
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

#line 681 "backend_libs.c_util.c"
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

#line 696 "backend_libs.c_util.c"
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

#line 711 "backend_libs.c_util.c"
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

#line 726 "backend_libs.c_util.c"
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

#line 741 "backend_libs.c_util.c"
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

#line 756 "backend_libs.c_util.c"
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

#line 771 "backend_libs.c_util.c"
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

#line 787 "backend_libs.c_util.c"
static const MR_DuFunctorDescPtr backend_libs__c_util__backend_libs__c_util__du_stag_ordered_binop_category_0_1[1] = {
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_4
};

#line 792 "backend_libs.c_util.c"
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

#line 806 "backend_libs.c_util.c"
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

#line 823 "backend_libs.c_util.c"
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

#line 840 "backend_libs.c_util.c"
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

#line 857 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_0 = {
  (MR_String) "literal_c",
  (MR_Integer) 0
};

#line 863 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_1 = {
  (MR_String) "literal_java",
  (MR_Integer) 1
};

#line 869 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_2 = {
  (MR_String) "literal_csharp",
  (MR_Integer) 2
};

#line 875 "backend_libs.c_util.c"
static const MR_EnumFunctorDescPtr backend_libs__c_util__backend_libs__c_util__enum_value_ordered_literal_language_0[3] = {
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_0,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_1,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_2
};

#line 882 "backend_libs.c_util.c"
static const MR_EnumFunctorDescPtr backend_libs__c_util__backend_libs__c_util__enum_name_ordered_literal_language_0[3] = {
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_0,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_2,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_1
};

#line 889 "backend_libs.c_util.c"
static const MR_Integer backend_libs__c_util__backend_libs__c_util__functor_number_map_literal_language_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 896 "backend_libs.c_util.c"
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

#line 913 "backend_libs.c_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__c_util__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 921 "backend_libs.c_util.c"
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

#line 938 "backend_libs.c_util.c"
static MR_bool MR_CALL 
backend_libs__c_util____Unify____binop_category_0_0_10001(
#line 941 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 943 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2)
#line 945 "backend_libs.c_util.c"
{
#line 947 "backend_libs.c_util.c"
  {
#line 949 "backend_libs.c_util.c"
    MR_bool backend_libs__c_util__succeeded;

#line 952 "backend_libs.c_util.c"
    {
#line 954 "backend_libs.c_util.c"
      backend_libs__c_util__succeeded = backend_libs__c_util____Unify____binop_category_0_0(((MR_Word) backend_libs__c_util__wrapper_arg_1), ((MR_Word) backend_libs__c_util__wrapper_arg_2));
    }
#line 957 "backend_libs.c_util.c"
    return backend_libs__c_util__succeeded;
#line 959 "backend_libs.c_util.c"
  }
#line 961 "backend_libs.c_util.c"
}

#line 964 "backend_libs.c_util.c"
static void MR_CALL 
backend_libs__c_util____Compare____binop_category_0_0_10001(
#line 967 "backend_libs.c_util.c"
  MR_Box * backend_libs__c_util__wrapper_arg_1,
#line 969 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2,
#line 971 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_3)
#line 973 "backend_libs.c_util.c"
{
#line 975 "backend_libs.c_util.c"
  {
#line 977 "backend_libs.c_util.c"
    MR_Word backend_libs__c_util__conv0_HeadVar__1_1;

#line 980 "backend_libs.c_util.c"
    {
#line 982 "backend_libs.c_util.c"
      backend_libs__c_util____Compare____binop_category_0_0(&backend_libs__c_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__c_util__wrapper_arg_2), ((MR_Word) backend_libs__c_util__wrapper_arg_3));
    }
#line 985 "backend_libs.c_util.c"
    *backend_libs__c_util__wrapper_arg_1 = ((MR_Box) (backend_libs__c_util__conv0_HeadVar__1_1));
#line 987 "backend_libs.c_util.c"
  }
#line 989 "backend_libs.c_util.c"
}

#line 992 "backend_libs.c_util.c"
static MR_bool MR_CALL 
backend_libs__c_util____Unify____literal_language_0_0_10001(
#line 995 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 997 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2)
#line 999 "backend_libs.c_util.c"
{
#line 1001 "backend_libs.c_util.c"
  {
#line 1003 "backend_libs.c_util.c"
    MR_bool backend_libs__c_util__succeeded;

#line 1006 "backend_libs.c_util.c"
    {
#line 1008 "backend_libs.c_util.c"
      backend_libs__c_util__succeeded = backend_libs__c_util____Unify____literal_language_0_0(((MR_Word) backend_libs__c_util__wrapper_arg_1), ((MR_Word) backend_libs__c_util__wrapper_arg_2));
    }
#line 1011 "backend_libs.c_util.c"
    return backend_libs__c_util__succeeded;
#line 1013 "backend_libs.c_util.c"
  }
#line 1015 "backend_libs.c_util.c"
}

#line 1018 "backend_libs.c_util.c"
static void MR_CALL 
backend_libs__c_util____Compare____literal_language_0_0_10001(
#line 1021 "backend_libs.c_util.c"
  MR_Box * backend_libs__c_util__wrapper_arg_1,
#line 1023 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2,
#line 1025 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_3)
#line 1027 "backend_libs.c_util.c"
{
#line 1029 "backend_libs.c_util.c"
  {
#line 1031 "backend_libs.c_util.c"
    MR_Word backend_libs__c_util__conv0_HeadVar__1_1;

#line 1034 "backend_libs.c_util.c"
    {
#line 1036 "backend_libs.c_util.c"
      backend_libs__c_util____Compare____literal_language_0_0(&backend_libs__c_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__c_util__wrapper_arg_2), ((MR_Word) backend_libs__c_util__wrapper_arg_3));
    }
#line 1039 "backend_libs.c_util.c"
    *backend_libs__c_util__wrapper_arg_1 = ((MR_Box) (backend_libs__c_util__conv0_HeadVar__1_1));
#line 1041 "backend_libs.c_util.c"
  }
#line 1043 "backend_libs.c_util.c"
}

#line 1046 "backend_libs.c_util.c"
static MR_bool MR_CALL 
backend_libs__c_util____Unify____multi_string_0_0_10001(
#line 1049 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 1051 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2)
#line 1053 "backend_libs.c_util.c"
{
#line 1055 "backend_libs.c_util.c"
  {
#line 1057 "backend_libs.c_util.c"
    MR_bool backend_libs__c_util__succeeded;

#line 1060 "backend_libs.c_util.c"
    {
#line 1062 "backend_libs.c_util.c"
      backend_libs__c_util__succeeded = backend_libs__c_util____Unify____multi_string_0_0(((MR_Word) backend_libs__c_util__wrapper_arg_1), ((MR_Word) backend_libs__c_util__wrapper_arg_2));
    }
#line 1065 "backend_libs.c_util.c"
    return backend_libs__c_util__succeeded;
#line 1067 "backend_libs.c_util.c"
  }
#line 1069 "backend_libs.c_util.c"
}

#line 1072 "backend_libs.c_util.c"
static void MR_CALL 
backend_libs__c_util____Compare____multi_string_0_0_10001(
#line 1075 "backend_libs.c_util.c"
  MR_Box * backend_libs__c_util__wrapper_arg_1,
#line 1077 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2,
#line 1079 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_3)
#line 1081 "backend_libs.c_util.c"
{
#line 1083 "backend_libs.c_util.c"
  {
#line 1085 "backend_libs.c_util.c"
    MR_Word backend_libs__c_util__conv0_HeadVar__1_1;

#line 1088 "backend_libs.c_util.c"
    {
#line 1090 "backend_libs.c_util.c"
      backend_libs__c_util____Compare____multi_string_0_0(&backend_libs__c_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__c_util__wrapper_arg_2), ((MR_Word) backend_libs__c_util__wrapper_arg_3));
    }
#line 1093 "backend_libs.c_util.c"
    *backend_libs__c_util__wrapper_arg_1 = ((MR_Box) (backend_libs__c_util__conv0_HeadVar__1_1));
#line 1095 "backend_libs.c_util.c"
  }
#line 1097 "backend_libs.c_util.c"
}

#line 540 "c_util.m"
static void MR_CALL 
backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_p_0(
#line 540 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__1_1,
#line 540 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__2_2,
#line 540 "c_util.m"
  MR_Word * backend_libs__c_util__L_3)
#line 540 "c_util.m"
{
#line 542 "c_util.m"
  while (MR_TRUE)
#line 542 "c_util.m"
    {
#line 542 "c_util.m"
      /* tailcall optimized into a loop */
#line 542 "c_util.m"
      {
#line 542 "c_util.m"
        MR_bool backend_libs__c_util__succeeded;

#line 542 "c_util.m"
        if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 542 "c_util.m"
          *backend_libs__c_util__L_3 = backend_libs__c_util__HeadVar__2_2;
#line 542 "c_util.m"
        else
#line 543 "c_util.m"
          {
#line 543 "c_util.m"
            MR_Box backend_libs__c_util__X_5 = (MR_hl_field(MR_mktag(1), backend_libs__c_util__HeadVar__1_1, (MR_Integer) 0));
#line 543 "c_util.m"
            MR_Word backend_libs__c_util__Xs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__c_util__HeadVar__1_1, (MR_Integer) 1)));
#line 543 "c_util.m"
            MR_Word backend_libs__c_util__V_9_9;

#line 544 "c_util.m"
            {
#line 544 "c_util.m"
              backend_libs__c_util__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "c_util.m"
              MR_hl_field(MR_mktag(1), backend_libs__c_util__V_9_9, 0) = backend_libs__c_util__X_5;
#line 544 "c_util.m"
              MR_hl_field(MR_mktag(1), backend_libs__c_util__V_9_9, 1) = ((MR_Box) (backend_libs__c_util__HeadVar__2_2));
#line 544 "c_util.m"
            }
#line 544 "c_util.m"
            /* direct tailcall eliminated */
#line 544 "c_util.m"
            {
#line 544 "c_util.m"
              MR_Word backend_libs__c_util__HeadVar__1__tmp_copy_1 = backend_libs__c_util__Xs_6;
#line 544 "c_util.m"
              MR_Word backend_libs__c_util__HeadVar__2__tmp_copy_2 = backend_libs__c_util__V_9_9;

#line 544 "c_util.m"
              backend_libs__c_util__HeadVar__2_2 = backend_libs__c_util__HeadVar__2__tmp_copy_2;
#line 544 "c_util.m"
              backend_libs__c_util__HeadVar__1_1 = backend_libs__c_util__HeadVar__1__tmp_copy_1;
#line 544 "c_util.m"
            }
#line 544 "c_util.m"
            continue;
#line 543 "c_util.m"
          }
#line 542 "c_util.m"
      }
#line 542 "c_util.m"
      break;
#line 542 "c_util.m"
    }
#line 540 "c_util.m"
}

#line 438 "c_util.m"
static void MR_CALL 
backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0_1(
#line 438 "c_util.m"
  MR_Box backend_libs__c_util__closure_arg,
#line 438 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 438 "c_util.m"
  MR_Box * backend_libs__c_util__wrapper_arg_2)
#line 438 "c_util.m"
{
#line 438 "c_util.m"
  {
#line 438 "c_util.m"
    MR_Box backend_libs__c_util__closure = backend_libs__c_util__closure_arg;
#line 438 "c_util.m"
    MR_Word backend_libs__c_util__conv0_EscapeCodeChars_4;

#line 438 "c_util.m"
    {
#line 438 "c_util.m"
      backend_libs__c_util__octal_escape_any_int_2_p_0(((MR_Integer) backend_libs__c_util__wrapper_arg_1), &backend_libs__c_util__conv0_EscapeCodeChars_4);
    }
#line 438 "c_util.m"
    *backend_libs__c_util__wrapper_arg_2 = ((MR_Box) (backend_libs__c_util__conv0_EscapeCodeChars_4));
#line 438 "c_util.m"
  }
#line 438 "c_util.m"
}

#line 387 "c_util.m"
static MR_String MR_CALL 
backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0(
#line 387 "c_util.m"
  MR_Char backend_libs__c_util__Char_5)
#line 387 "c_util.m"
{
#line 392 "c_util.m"
  {
#line 392 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 392 "c_util.m"
    MR_String backend_libs__c_util__QuotedCharStr_6;
#line 392 "c_util.m"
    MR_Word backend_libs__c_util__RevQuotedCharStr_7;
#line 392 "c_util.m"
    MR_Word backend_libs__c_util__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 417 "c_util.m"
    MR_Char backend_libs__c_util__EscapeChar_14;

#line 509 "c_util.m"
#line 509 "c_util.m"
    switch (backend_libs__c_util__Char_5) {
#line 509 "c_util.m"
      default:
#line 509 "c_util.m"
        backend_libs__c_util__succeeded = MR_FALSE;
#line 509 "c_util.m"
        break;
#line 509 "c_util.m"
      case (MR_Char) 7:
#line 515 "c_util.m"
        {
#line 515 "c_util.m"
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 97;
#line 515 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 515 "c_util.m"
        }
#line 509 "c_util.m"
        break;
#line 509 "c_util.m"
      case (MR_Char) 8:
#line 514 "c_util.m"
        {
#line 514 "c_util.m"
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 98;
#line 514 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 514 "c_util.m"
        }
#line 509 "c_util.m"
        break;
#line 509 "c_util.m"
      case (MR_Char) 9:
#line 513 "c_util.m"
        {
#line 513 "c_util.m"
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 116;
#line 513 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 513 "c_util.m"
        }
#line 509 "c_util.m"
        break;
#line 509 "c_util.m"
      case (MR_Char) 10:
#line 512 "c_util.m"
        {
#line 512 "c_util.m"
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 110;
#line 512 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 512 "c_util.m"
        }
#line 509 "c_util.m"
        break;
#line 509 "c_util.m"
      case (MR_Char) 11:
#line 516 "c_util.m"
        {
#line 516 "c_util.m"
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 118;
#line 516 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 516 "c_util.m"
        }
#line 509 "c_util.m"
        break;
#line 509 "c_util.m"
      case (MR_Char) 12:
#line 518 "c_util.m"
        {
#line 518 "c_util.m"
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 102;
#line 518 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 518 "c_util.m"
        }
#line 509 "c_util.m"
        break;
#line 509 "c_util.m"
      case (MR_Char) 13:
#line 517 "c_util.m"
        {
#line 517 "c_util.m"
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 114;
#line 517 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 517 "c_util.m"
        }
#line 509 "c_util.m"
        break;
#line 509 "c_util.m"
      case (MR_Char) 34:
#line 509 "c_util.m"
        {
#line 509 "c_util.m"
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 34;
#line 509 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 509 "c_util.m"
        }
#line 509 "c_util.m"
        break;
#line 509 "c_util.m"
      case (MR_Char) 39:
#line 510 "c_util.m"
        {
#line 510 "c_util.m"
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 39;
#line 510 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 510 "c_util.m"
        }
#line 509 "c_util.m"
        break;
#line 509 "c_util.m"
      case (MR_Char) 92:
#line 511 "c_util.m"
        {
#line 511 "c_util.m"
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 92;
#line 511 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 511 "c_util.m"
        }
#line 509 "c_util.m"
        break;
#line 509 "c_util.m"
    }
#line 417 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 416 "c_util.m"
      {
#line 416 "c_util.m"
        {
#line 416 "c_util.m"
          backend_libs__c_util__RevQuotedCharStr_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "c_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_7, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__EscapeChar_14));
#line 416 "c_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[7])));
#line 416 "c_util.m"
        }
#line 416 "c_util.m"
      }
#line 417 "c_util.m"
    else
#line 423 "c_util.m"
      {
#line 419 "c_util.m"
        backend_libs__c_util__succeeded = (backend_libs__c_util__Char_5 == (MR_Char) 63);
#line 423 "c_util.m"
        if (backend_libs__c_util__succeeded)
#line 422 "c_util.m"
          {
#line 422 "c_util.m"
            backend_libs__c_util__RevQuotedCharStr_7 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[13]);
#line 422 "c_util.m"
          }
#line 423 "c_util.m"
        else
#line 427 "c_util.m"
          {
#line 526 "c_util.m"
            {
#line 526 "c_util.m"
              backend_libs__c_util__succeeded = mercury__char__is_alnum_1_p_0(backend_libs__c_util__Char_5);
            }
#line 526 "c_util.m"
            if (!(backend_libs__c_util__succeeded))
#line 527 "c_util.m"
              {
#line 527 "c_util.m"
                {
#line 527 "c_util.m"
                  backend_libs__c_util__succeeded = mercury__string__contains_char_2_p_0((MR_String) " !\"#%&\'()*+,-./:;<=>\?[\\]^_{|}~", backend_libs__c_util__Char_5);
                }
#line 527 "c_util.m"
              }
#line 427 "c_util.m"
            if (backend_libs__c_util__succeeded)
#line 426 "c_util.m"
              {
#line 426 "c_util.m"
                backend_libs__c_util__RevQuotedCharStr_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 426 "c_util.m"
                MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_7, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__Char_5));
#line 426 "c_util.m"
                MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_7, 1) = ((MR_Box) (backend_libs__c_util__V_8_8));
#line 426 "c_util.m"
              }
#line 427 "c_util.m"
            else
#line 431 "c_util.m"
              {
#line 428 "c_util.m"
                {
#line 428 "c_util.m"
                  backend_libs__c_util__succeeded = mercury__char__to_int_2_p_1(backend_libs__c_util__Char_5, (MR_Integer) 0);
                }
#line 431 "c_util.m"
                if (backend_libs__c_util__succeeded)
#line 430 "c_util.m"
                  {
#line 430 "c_util.m"
                    backend_libs__c_util__RevQuotedCharStr_7 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[8]);
#line 430 "c_util.m"
                  }
#line 431 "c_util.m"
                else
#line 451 "c_util.m"
                  {
#line 432 "c_util.m"
                    MR_Integer backend_libs__c_util__Int_15;

#line 432 "c_util.m"
                    {
#line 432 "c_util.m"
                      backend_libs__c_util__Int_15 = mercury__char__to_int_1_f_0(backend_libs__c_util__Char_5);
                    }
#line 433 "c_util.m"
                    backend_libs__c_util__succeeded = (backend_libs__c_util__Int_15 >= (MR_Integer) 128);
#line 451 "c_util.m"
                    if (backend_libs__c_util__succeeded)
#line 444 "c_util.m"
                      {
#line 444 "c_util.m"
                        MR_Word backend_libs__c_util__CodeUnits_16;

#line 437 "c_util.m"
                        {
#line 437 "c_util.m"
                          backend_libs__c_util__succeeded = mercury__char__to_utf8_2_p_0(backend_libs__c_util__Char_5, &backend_libs__c_util__CodeUnits_16);
                        }
#line 444 "c_util.m"
                        if (backend_libs__c_util__succeeded)
#line 438 "c_util.m"
                          {
#line 438 "c_util.m"
                            MR_Word backend_libs__c_util__EscapeCharss_17;
#line 438 "c_util.m"
                            MR_Word backend_libs__c_util__EscapeChars_18;

#line 438 "c_util.m"
                            {
#line 438 "c_util.m"
                              mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__c_util_scalar_common_1[0], (MR_Word) &backend_libs__c_util_scalar_common_3[3], backend_libs__c_util__CodeUnits_16, &backend_libs__c_util__EscapeCharss_17);
                            }
#line 439 "c_util.m"
                            {
#line 439 "c_util.m"
                              mercury__list__condense_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, backend_libs__c_util__EscapeCharss_17, &backend_libs__c_util__EscapeChars_18);
                            }
#line 440 "c_util.m"
                            {
#line 440 "c_util.m"
                              backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_p_0(backend_libs__c_util__EscapeChars_18, backend_libs__c_util__V_8_8, &backend_libs__c_util__RevQuotedCharStr_7);
                            }
#line 438 "c_util.m"
                          }
#line 444 "c_util.m"
                        else
#line 442 "c_util.m"
                          {
#line 442 "c_util.m"
                            {
#line 442 "c_util.m"
                              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.c_util", (MR_String) "predicate \140backend_libs.c_util.quote_one_char\'/4", (MR_String) "invalid Unicode code point");
                            }
#line 442 "c_util.m"
                          }
#line 444 "c_util.m"
                      }
#line 451 "c_util.m"
                    else
#line 461 "c_util.m"
                      {
#line 461 "c_util.m"
                        MR_Word backend_libs__c_util__EscapeChars_33;
#line 461 "c_util.m"
                        MR_Integer backend_libs__c_util__Int_45;

#line 553 "c_util.m"
                        {
#line 553 "c_util.m"
                          mercury__char__to_int_2_p_0(backend_libs__c_util__Char_5, &backend_libs__c_util__Int_45);
                        }
#line 554 "c_util.m"
                        {
#line 554 "c_util.m"
                          backend_libs__c_util__octal_escape_any_int_2_p_0(backend_libs__c_util__Int_45, &backend_libs__c_util__EscapeChars_33);
                        }
#line 462 "c_util.m"
                        {
#line 462 "c_util.m"
                          backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_p_0(backend_libs__c_util__EscapeChars_33, backend_libs__c_util__V_8_8, &backend_libs__c_util__RevQuotedCharStr_7);
                        }
#line 461 "c_util.m"
                      }
#line 451 "c_util.m"
                  }
#line 431 "c_util.m"
              }
#line 427 "c_util.m"
          }
#line 423 "c_util.m"
      }
#line 394 "c_util.m"
    {
#line 394 "c_util.m"
      mercury__string__from_rev_char_list_2_p_0(backend_libs__c_util__RevQuotedCharStr_7, &backend_libs__c_util__QuotedCharStr_6);
    }
#line 392 "c_util.m"
    return backend_libs__c_util__QuotedCharStr_6;
#line 392 "c_util.m"
  }
#line 387 "c_util.m"
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
#line 1649 "backend_libs.c_util.c"
  {
#line 1651 "backend_libs.c_util.c"
    MR_bool backend_libs__c_util__succeeded = (backend_libs__c_util__HeadVar__2_1 == backend_libs__c_util__HeadVar__2_2);

#line 1654 "backend_libs.c_util.c"
    return backend_libs__c_util__succeeded;
#line 1656 "backend_libs.c_util.c"
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
#line 1685 "backend_libs.c_util.c"
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
#line 1793 "backend_libs.c_util.c"
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
#line 1893 "backend_libs.c_util.c"
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
#line 1993 "backend_libs.c_util.c"
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
#line 2093 "backend_libs.c_util.c"
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
#line 2193 "backend_libs.c_util.c"
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
#line 2293 "backend_libs.c_util.c"
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
#line 2393 "backend_libs.c_util.c"
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
#line 2493 "backend_libs.c_util.c"
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
#line 2593 "backend_libs.c_util.c"
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
#line 2693 "backend_libs.c_util.c"
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
#line 2793 "backend_libs.c_util.c"
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
#line 2893 "backend_libs.c_util.c"
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
#line 2926 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                    break;
#line 147 "c_util.m"
                  case (MR_Integer) 1:
#line 2932 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                    break;
#line 147 "c_util.m"
                  case (MR_Integer) 2:
#line 2938 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                    break;
#line 147 "c_util.m"
                  case (MR_Integer) 3:
#line 2944 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "c_util.m"
                    break;
#line 147 "c_util.m"
                  case (MR_Integer) 4:
#line 2950 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                    break;
#line 147 "c_util.m"
                  case (MR_Integer) 5:
#line 2956 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                    break;
#line 147 "c_util.m"
                  case (MR_Integer) 6:
#line 2962 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                    break;
#line 147 "c_util.m"
                  case (MR_Integer) 7:
#line 2968 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                    break;
#line 147 "c_util.m"
                  case (MR_Integer) 8:
#line 2974 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                    break;
#line 147 "c_util.m"
                  case (MR_Integer) 9:
#line 2980 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                    break;
#line 147 "c_util.m"
                  case (MR_Integer) 10:
#line 2986 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "c_util.m"
                    break;
#line 147 "c_util.m"
                  case (MR_Integer) 11:
#line 2992 "backend_libs.c_util.c"
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
#line 3270 "backend_libs.c_util.c"
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

#line 556 "c_util.m"
static void MR_CALL 
backend_libs__c_util__octal_escape_any_int_2_p_0(
#line 556 "c_util.m"
  MR_Integer backend_libs__c_util__Int_3,
#line 556 "c_util.m"
  MR_Word * backend_libs__c_util__EscapeCodeChars_4)
#line 556 "c_util.m"
{
#line 558 "c_util.m"
  {
#line 558 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 558 "c_util.m"
    MR_String backend_libs__c_util__OctalString0_5;
#line 558 "c_util.m"
    MR_String backend_libs__c_util__OctalString_6;
#line 558 "c_util.m"
    MR_Word backend_libs__c_util__V_11_11;

#line 559 "c_util.m"
    {
#line 559 "c_util.m"
      mercury__string__int_to_base_string_3_p_0(backend_libs__c_util__Int_3, (MR_Integer) 8, &backend_libs__c_util__OctalString0_5);
    }
#line 560 "c_util.m"
    {
#line 560 "c_util.m"
      mercury__string__pad_left_4_p_0(backend_libs__c_util__OctalString0_5, (MR_Char) 48, (MR_Integer) 3, &backend_libs__c_util__OctalString_6);
    }
#line 561 "c_util.m"
    {
#line 561 "c_util.m"
      backend_libs__c_util__V_11_11 = mercury__string__to_char_list_1_f_0(backend_libs__c_util__OctalString_6);
    }
#line 561 "c_util.m"
    {
#line 561 "c_util.m"
      MR_Word base;
#line 561 "c_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 561 "c_util.m"
      *backend_libs__c_util__EscapeCodeChars_4 = base;
#line 561 "c_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
#line 561 "c_util.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__c_util__V_11_11));
#line 561 "c_util.m"
    }
#line 558 "c_util.m"
  }
#line 556 "c_util.m"
}

#line 491 "c_util.m"
static void MR_CALL 
backend_libs__c_util__quote_one_char_c_3_p_0_1(
#line 491 "c_util.m"
  MR_Box backend_libs__c_util__closure_arg,
#line 491 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 491 "c_util.m"
  MR_Box * backend_libs__c_util__wrapper_arg_2)
#line 491 "c_util.m"
{
#line 491 "c_util.m"
  {
#line 491 "c_util.m"
    MR_Box backend_libs__c_util__closure = backend_libs__c_util__closure_arg;
#line 491 "c_util.m"
    MR_Word backend_libs__c_util__conv0_EscapeCodeChars_4;

#line 491 "c_util.m"
    {
#line 491 "c_util.m"
      backend_libs__c_util__octal_escape_any_int_2_p_0(((MR_Integer) backend_libs__c_util__wrapper_arg_1), &backend_libs__c_util__conv0_EscapeCodeChars_4);
    }
#line 491 "c_util.m"
    *backend_libs__c_util__wrapper_arg_2 = ((MR_Box) (backend_libs__c_util__conv0_EscapeCodeChars_4));
#line 491 "c_util.m"
  }
#line 491 "c_util.m"
}

#line 465 "c_util.m"
static void MR_CALL 
backend_libs__c_util__quote_one_char_c_3_p_0(
#line 465 "c_util.m"
  MR_Char backend_libs__c_util__Char_4,
#line 465 "c_util.m"
  MR_Word backend_libs__c_util__RevChars0_5,
#line 465 "c_util.m"
  MR_Word * backend_libs__c_util__RevChars_6)
#line 465 "c_util.m"
{
#line 473 "c_util.m"
  {
#line 473 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 473 "c_util.m"
    MR_Char backend_libs__c_util__EscapeChar_7;

#line 509 "c_util.m"
#line 509 "c_util.m"
    switch (backend_libs__c_util__Char_4) {
#line 509 "c_util.m"
      default:
#line 509 "c_util.m"
        backend_libs__c_util__succeeded = MR_FALSE;
#line 509 "c_util.m"
        break;
#line 509 "c_util.m"
      case (MR_Char) 7:
#line 515 "c_util.m"
        {
#line 515 "c_util.m"
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 97;
#line 515 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 515 "c_util.m"
        }
#line 509 "c_util.m"
        break;
#line 509 "c_util.m"
      case (MR_Char) 8:
#line 514 "c_util.m"
        {
#line 514 "c_util.m"
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 98;
#line 514 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 514 "c_util.m"
        }
#line 509 "c_util.m"
        break;
#line 509 "c_util.m"
      case (MR_Char) 9:
#line 513 "c_util.m"
        {
#line 513 "c_util.m"
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 116;
#line 513 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 513 "c_util.m"
        }
#line 509 "c_util.m"
        break;
#line 509 "c_util.m"
      case (MR_Char) 10:
#line 512 "c_util.m"
        {
#line 512 "c_util.m"
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 110;
#line 512 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 512 "c_util.m"
        }
#line 509 "c_util.m"
        break;
#line 509 "c_util.m"
      case (MR_Char) 11:
#line 516 "c_util.m"
        {
#line 516 "c_util.m"
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 118;
#line 516 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 516 "c_util.m"
        }
#line 509 "c_util.m"
        break;
#line 509 "c_util.m"
      case (MR_Char) 12:
#line 518 "c_util.m"
        {
#line 518 "c_util.m"
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 102;
#line 518 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 518 "c_util.m"
        }
#line 509 "c_util.m"
        break;
#line 509 "c_util.m"
      case (MR_Char) 13:
#line 517 "c_util.m"
        {
#line 517 "c_util.m"
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 114;
#line 517 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 517 "c_util.m"
        }
#line 509 "c_util.m"
        break;
#line 509 "c_util.m"
      case (MR_Char) 34:
#line 509 "c_util.m"
        {
#line 509 "c_util.m"
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 34;
#line 509 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 509 "c_util.m"
        }
#line 509 "c_util.m"
        break;
#line 509 "c_util.m"
      case (MR_Char) 39:
#line 510 "c_util.m"
        {
#line 510 "c_util.m"
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 39;
#line 510 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 510 "c_util.m"
        }
#line 509 "c_util.m"
        break;
#line 509 "c_util.m"
      case (MR_Char) 92:
#line 511 "c_util.m"
        {
#line 511 "c_util.m"
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 92;
#line 511 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 511 "c_util.m"
        }
#line 509 "c_util.m"
        break;
#line 509 "c_util.m"
    }
#line 473 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 472 "c_util.m"
      {
#line 472 "c_util.m"
        MR_Word backend_libs__c_util__V_12_12;

#line 472 "c_util.m"
        {
#line 472 "c_util.m"
          backend_libs__c_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "c_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__c_util__V_12_12, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
#line 472 "c_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__c_util__V_12_12, 1) = ((MR_Box) (backend_libs__c_util__RevChars0_5));
#line 472 "c_util.m"
        }
#line 472 "c_util.m"
        {
#line 472 "c_util.m"
          MR_Word base;
#line 472 "c_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "c_util.m"
          *backend_libs__c_util__RevChars_6 = base;
#line 472 "c_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__EscapeChar_7));
#line 472 "c_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__c_util__V_12_12));
#line 472 "c_util.m"
        }
#line 472 "c_util.m"
      }
#line 473 "c_util.m"
    else
#line 478 "c_util.m"
      {
#line 474 "c_util.m"
        backend_libs__c_util__succeeded = (backend_libs__c_util__Char_4 == (MR_Char) 63);
#line 478 "c_util.m"
        if (backend_libs__c_util__succeeded)
#line 477 "c_util.m"
          {
#line 477 "c_util.m"
            MR_Word backend_libs__c_util__V_15_15;

#line 477 "c_util.m"
            {
#line 477 "c_util.m"
              backend_libs__c_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 477 "c_util.m"
              MR_hl_field(MR_mktag(1), backend_libs__c_util__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
#line 477 "c_util.m"
              MR_hl_field(MR_mktag(1), backend_libs__c_util__V_15_15, 1) = ((MR_Box) (backend_libs__c_util__RevChars0_5));
#line 477 "c_util.m"
            }
#line 477 "c_util.m"
            {
#line 477 "c_util.m"
              MR_Word base;
#line 477 "c_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 477 "c_util.m"
              *backend_libs__c_util__RevChars_6 = base;
#line 477 "c_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) ((MR_Char) 63));
#line 477 "c_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__c_util__V_15_15));
#line 477 "c_util.m"
            }
#line 477 "c_util.m"
          }
#line 478 "c_util.m"
        else
#line 482 "c_util.m"
          {
#line 526 "c_util.m"
            {
#line 526 "c_util.m"
              backend_libs__c_util__succeeded = mercury__char__is_alnum_1_p_0(backend_libs__c_util__Char_4);
            }
#line 526 "c_util.m"
            if (!(backend_libs__c_util__succeeded))
#line 527 "c_util.m"
              {
#line 527 "c_util.m"
                {
#line 527 "c_util.m"
                  backend_libs__c_util__succeeded = mercury__string__contains_char_2_p_0((MR_String) " !\"#%&\'()*+,-./:;<=>\?[\\]^_{|}~", backend_libs__c_util__Char_4);
                }
#line 527 "c_util.m"
              }
#line 482 "c_util.m"
            if (backend_libs__c_util__succeeded)
#line 481 "c_util.m"
              {
#line 481 "c_util.m"
                MR_Word base;
#line 481 "c_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 481 "c_util.m"
                *backend_libs__c_util__RevChars_6 = base;
#line 481 "c_util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__Char_4));
#line 481 "c_util.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__c_util__RevChars0_5));
#line 481 "c_util.m"
              }
#line 482 "c_util.m"
            else
#line 486 "c_util.m"
              {
#line 483 "c_util.m"
                {
#line 483 "c_util.m"
                  backend_libs__c_util__succeeded = mercury__char__to_int_2_p_1(backend_libs__c_util__Char_4, (MR_Integer) 0);
                }
#line 486 "c_util.m"
                if (backend_libs__c_util__succeeded)
#line 485 "c_util.m"
                  {
#line 485 "c_util.m"
                    MR_Word backend_libs__c_util__V_19_19;

#line 485 "c_util.m"
                    {
#line 485 "c_util.m"
                      backend_libs__c_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "c_util.m"
                      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
#line 485 "c_util.m"
                      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_19_19, 1) = ((MR_Box) (backend_libs__c_util__RevChars0_5));
#line 485 "c_util.m"
                    }
#line 485 "c_util.m"
                    {
#line 485 "c_util.m"
                      MR_Word base;
#line 485 "c_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "c_util.m"
                      *backend_libs__c_util__RevChars_6 = base;
#line 485 "c_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) ((MR_Char) 48));
#line 485 "c_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__c_util__V_19_19));
#line 485 "c_util.m"
                    }
#line 485 "c_util.m"
                  }
#line 486 "c_util.m"
                else
#line 497 "c_util.m"
                  {
#line 487 "c_util.m"
                    MR_Integer backend_libs__c_util__Int_8;

#line 487 "c_util.m"
                    {
#line 487 "c_util.m"
                      backend_libs__c_util__Int_8 = mercury__char__to_int_1_f_0(backend_libs__c_util__Char_4);
                    }
#line 488 "c_util.m"
                    backend_libs__c_util__succeeded = (backend_libs__c_util__Int_8 >= (MR_Integer) 128);
#line 497 "c_util.m"
                    if (backend_libs__c_util__succeeded)
#line 494 "c_util.m"
                      {
#line 494 "c_util.m"
                        MR_Word backend_libs__c_util__CodeUnits_9;

#line 490 "c_util.m"
                        {
#line 490 "c_util.m"
                          backend_libs__c_util__succeeded = mercury__char__to_utf8_2_p_0(backend_libs__c_util__Char_4, &backend_libs__c_util__CodeUnits_9);
                        }
#line 494 "c_util.m"
                        if (backend_libs__c_util__succeeded)
#line 491 "c_util.m"
                          {
#line 491 "c_util.m"
                            MR_Word backend_libs__c_util__EscapeCharss_10;
#line 491 "c_util.m"
                            MR_Word backend_libs__c_util__EscapeChars_11;

#line 491 "c_util.m"
                            {
#line 491 "c_util.m"
                              mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__c_util_scalar_common_1[0], (MR_Word) &backend_libs__c_util_scalar_common_3[2], backend_libs__c_util__CodeUnits_9, &backend_libs__c_util__EscapeCharss_10);
                            }
#line 492 "c_util.m"
                            {
#line 492 "c_util.m"
                              mercury__list__condense_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, backend_libs__c_util__EscapeCharss_10, &backend_libs__c_util__EscapeChars_11);
                            }
#line 493 "c_util.m"
                            {
#line 493 "c_util.m"
                              backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_p_0(backend_libs__c_util__EscapeChars_11, backend_libs__c_util__RevChars0_5, backend_libs__c_util__RevChars_6);
#line 493 "c_util.m"
                              return;
                            }
#line 491 "c_util.m"
                          }
#line 494 "c_util.m"
                        else
#line 495 "c_util.m"
                          {
#line 495 "c_util.m"
                            {
#line 495 "c_util.m"
                              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.c_util", (MR_String) "predicate \140backend_libs.c_util.quote_one_char_c\'/3", (MR_String) "invalid Unicode code point");
#line 495 "c_util.m"
                              return;
                            }
#line 495 "c_util.m"
                          }
#line 494 "c_util.m"
                      }
#line 497 "c_util.m"
                    else
#line 498 "c_util.m"
                      {
#line 498 "c_util.m"
                        MR_Word backend_libs__c_util__EscapeChars_26;
#line 498 "c_util.m"
                        MR_Integer backend_libs__c_util__Int_37;

#line 553 "c_util.m"
                        {
#line 553 "c_util.m"
                          mercury__char__to_int_2_p_0(backend_libs__c_util__Char_4, &backend_libs__c_util__Int_37);
                        }
#line 554 "c_util.m"
                        {
#line 554 "c_util.m"
                          backend_libs__c_util__octal_escape_any_int_2_p_0(backend_libs__c_util__Int_37, &backend_libs__c_util__EscapeChars_26);
                        }
#line 499 "c_util.m"
                        {
#line 499 "c_util.m"
                          backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_p_0(backend_libs__c_util__EscapeChars_26, backend_libs__c_util__RevChars0_5, backend_libs__c_util__RevChars_6);
#line 499 "c_util.m"
                          return;
                        }
#line 498 "c_util.m"
                      }
#line 497 "c_util.m"
                  }
#line 486 "c_util.m"
              }
#line 482 "c_util.m"
          }
#line 478 "c_util.m"
      }
#line 473 "c_util.m"
  }
#line 465 "c_util.m"
}

#line 438 "c_util.m"
static void MR_CALL 
backend_libs__c_util__output_quoted_char_lang_4_p_3_1(
#line 438 "c_util.m"
  MR_Box backend_libs__c_util__closure_arg,
#line 438 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 438 "c_util.m"
  MR_Box * backend_libs__c_util__wrapper_arg_2)
#line 438 "c_util.m"
{
#line 438 "c_util.m"
  {
#line 438 "c_util.m"
    MR_Box backend_libs__c_util__closure = backend_libs__c_util__closure_arg;
#line 438 "c_util.m"
    MR_Word backend_libs__c_util__conv0_EscapeCodeChars_4;

#line 438 "c_util.m"
    {
#line 438 "c_util.m"
      backend_libs__c_util__octal_escape_any_int_2_p_0(((MR_Integer) backend_libs__c_util__wrapper_arg_1), &backend_libs__c_util__conv0_EscapeCodeChars_4);
    }
#line 438 "c_util.m"
    *backend_libs__c_util__wrapper_arg_2 = ((MR_Box) (backend_libs__c_util__conv0_EscapeCodeChars_4));
#line 438 "c_util.m"
  }
#line 438 "c_util.m"
}

#line 378 "c_util.m"
static void MR_CALL 
backend_libs__c_util__output_quoted_char_lang_4_p_3(
#line 378 "c_util.m"
  MR_Word backend_libs__c_util__Lang_5,
#line 378 "c_util.m"
  MR_Char backend_libs__c_util__Char_6)
#line 378 "c_util.m"
{
#line 380 "c_util.m"
  {
#line 380 "c_util.m"
    MR_bool backend_libs__c_util__succeeded = (backend_libs__c_util__Lang_5 == (MR_Integer) 1);
#line 380 "c_util.m"
    MR_String backend_libs__c_util__EscapedCharStr_8;
#line 380 "c_util.m"
    MR_Word backend_libs__c_util__RevQuotedCharStr_15;
#line 380 "c_util.m"
    MR_Word backend_libs__c_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 413 "c_util.m"
    MR_Word backend_libs__c_util__RevEscapeChars_21;

#line 409 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 504 "c_util.m"
#line 504 "c_util.m"
      switch (backend_libs__c_util__Char_6) {
#line 504 "c_util.m"
        default:
#line 504 "c_util.m"
          backend_libs__c_util__succeeded = MR_FALSE;
#line 504 "c_util.m"
          break;
#line 504 "c_util.m"
        case (MR_Char) 7:
#line 504 "c_util.m"
          {
#line 504 "c_util.m"
            backend_libs__c_util__RevEscapeChars_21 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[10]);
#line 504 "c_util.m"
            backend_libs__c_util__succeeded = MR_TRUE;
#line 504 "c_util.m"
          }
#line 504 "c_util.m"
          break;
#line 504 "c_util.m"
        case (MR_Char) 11:
#line 505 "c_util.m"
          {
#line 505 "c_util.m"
            backend_libs__c_util__RevEscapeChars_21 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[12]);
#line 505 "c_util.m"
            backend_libs__c_util__succeeded = MR_TRUE;
#line 505 "c_util.m"
          }
#line 504 "c_util.m"
          break;
#line 504 "c_util.m"
      }
#line 413 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 412 "c_util.m"
      {
#line 412 "c_util.m"
        {
#line 412 "c_util.m"
          mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, backend_libs__c_util__RevEscapeChars_21, backend_libs__c_util__V_16_16, &backend_libs__c_util__RevQuotedCharStr_15);
        }
#line 412 "c_util.m"
      }
#line 413 "c_util.m"
    else
#line 417 "c_util.m"
      {
#line 417 "c_util.m"
        MR_Char backend_libs__c_util__EscapeChar_22;

#line 509 "c_util.m"
#line 509 "c_util.m"
        switch (backend_libs__c_util__Char_6) {
#line 509 "c_util.m"
          default:
#line 509 "c_util.m"
            backend_libs__c_util__succeeded = MR_FALSE;
#line 509 "c_util.m"
            break;
#line 509 "c_util.m"
          case (MR_Char) 7:
#line 515 "c_util.m"
            {
#line 515 "c_util.m"
              backend_libs__c_util__EscapeChar_22 = (MR_Char) 97;
#line 515 "c_util.m"
              backend_libs__c_util__succeeded = MR_TRUE;
#line 515 "c_util.m"
            }
#line 509 "c_util.m"
            break;
#line 509 "c_util.m"
          case (MR_Char) 8:
#line 514 "c_util.m"
            {
#line 514 "c_util.m"
              backend_libs__c_util__EscapeChar_22 = (MR_Char) 98;
#line 514 "c_util.m"
              backend_libs__c_util__succeeded = MR_TRUE;
#line 514 "c_util.m"
            }
#line 509 "c_util.m"
            break;
#line 509 "c_util.m"
          case (MR_Char) 9:
#line 513 "c_util.m"
            {
#line 513 "c_util.m"
              backend_libs__c_util__EscapeChar_22 = (MR_Char) 116;
#line 513 "c_util.m"
              backend_libs__c_util__succeeded = MR_TRUE;
#line 513 "c_util.m"
            }
#line 509 "c_util.m"
            break;
#line 509 "c_util.m"
          case (MR_Char) 10:
#line 512 "c_util.m"
            {
#line 512 "c_util.m"
              backend_libs__c_util__EscapeChar_22 = (MR_Char) 110;
#line 512 "c_util.m"
              backend_libs__c_util__succeeded = MR_TRUE;
#line 512 "c_util.m"
            }
#line 509 "c_util.m"
            break;
#line 509 "c_util.m"
          case (MR_Char) 11:
#line 516 "c_util.m"
            {
#line 516 "c_util.m"
              backend_libs__c_util__EscapeChar_22 = (MR_Char) 118;
#line 516 "c_util.m"
              backend_libs__c_util__succeeded = MR_TRUE;
#line 516 "c_util.m"
            }
#line 509 "c_util.m"
            break;
#line 509 "c_util.m"
          case (MR_Char) 12:
#line 518 "c_util.m"
            {
#line 518 "c_util.m"
              backend_libs__c_util__EscapeChar_22 = (MR_Char) 102;
#line 518 "c_util.m"
              backend_libs__c_util__succeeded = MR_TRUE;
#line 518 "c_util.m"
            }
#line 509 "c_util.m"
            break;
#line 509 "c_util.m"
          case (MR_Char) 13:
#line 517 "c_util.m"
            {
#line 517 "c_util.m"
              backend_libs__c_util__EscapeChar_22 = (MR_Char) 114;
#line 517 "c_util.m"
              backend_libs__c_util__succeeded = MR_TRUE;
#line 517 "c_util.m"
            }
#line 509 "c_util.m"
            break;
#line 509 "c_util.m"
          case (MR_Char) 34:
#line 509 "c_util.m"
            {
#line 509 "c_util.m"
              backend_libs__c_util__EscapeChar_22 = (MR_Char) 34;
#line 509 "c_util.m"
              backend_libs__c_util__succeeded = MR_TRUE;
#line 509 "c_util.m"
            }
#line 509 "c_util.m"
            break;
#line 509 "c_util.m"
          case (MR_Char) 39:
#line 510 "c_util.m"
            {
#line 510 "c_util.m"
              backend_libs__c_util__EscapeChar_22 = (MR_Char) 39;
#line 510 "c_util.m"
              backend_libs__c_util__succeeded = MR_TRUE;
#line 510 "c_util.m"
            }
#line 509 "c_util.m"
            break;
#line 509 "c_util.m"
          case (MR_Char) 92:
#line 511 "c_util.m"
            {
#line 511 "c_util.m"
              backend_libs__c_util__EscapeChar_22 = (MR_Char) 92;
#line 511 "c_util.m"
              backend_libs__c_util__succeeded = MR_TRUE;
#line 511 "c_util.m"
            }
#line 509 "c_util.m"
            break;
#line 509 "c_util.m"
        }
#line 417 "c_util.m"
        if (backend_libs__c_util__succeeded)
#line 416 "c_util.m"
          {
#line 416 "c_util.m"
            {
#line 416 "c_util.m"
              backend_libs__c_util__RevQuotedCharStr_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "c_util.m"
              MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_15, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__EscapeChar_22));
#line 416 "c_util.m"
              MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[7])));
#line 416 "c_util.m"
            }
#line 416 "c_util.m"
          }
#line 417 "c_util.m"
        else
#line 423 "c_util.m"
          {
#line 418 "c_util.m"
            backend_libs__c_util__succeeded = (backend_libs__c_util__Lang_5 == (MR_Integer) 0);
#line 418 "c_util.m"
            if (backend_libs__c_util__succeeded)
#line 419 "c_util.m"
              backend_libs__c_util__succeeded = (backend_libs__c_util__Char_6 == (MR_Char) 63);
#line 423 "c_util.m"
            if (backend_libs__c_util__succeeded)
#line 422 "c_util.m"
              {
#line 422 "c_util.m"
                backend_libs__c_util__RevQuotedCharStr_15 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[13]);
#line 422 "c_util.m"
              }
#line 423 "c_util.m"
            else
#line 427 "c_util.m"
              {
#line 526 "c_util.m"
                {
#line 526 "c_util.m"
                  backend_libs__c_util__succeeded = mercury__char__is_alnum_1_p_0(backend_libs__c_util__Char_6);
                }
#line 526 "c_util.m"
                if (!(backend_libs__c_util__succeeded))
#line 527 "c_util.m"
                  {
#line 527 "c_util.m"
                    {
#line 527 "c_util.m"
                      backend_libs__c_util__succeeded = mercury__string__contains_char_2_p_0((MR_String) " !\"#%&\'()*+,-./:;<=>\?[\\]^_{|}~", backend_libs__c_util__Char_6);
                    }
#line 527 "c_util.m"
                  }
#line 427 "c_util.m"
                if (backend_libs__c_util__succeeded)
#line 426 "c_util.m"
                  {
#line 426 "c_util.m"
                    backend_libs__c_util__RevQuotedCharStr_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 426 "c_util.m"
                    MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_15, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__Char_6));
#line 426 "c_util.m"
                    MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_15, 1) = ((MR_Box) (backend_libs__c_util__V_16_16));
#line 426 "c_util.m"
                  }
#line 427 "c_util.m"
                else
#line 431 "c_util.m"
                  {
#line 428 "c_util.m"
                    {
#line 428 "c_util.m"
                      backend_libs__c_util__succeeded = mercury__char__to_int_2_p_1(backend_libs__c_util__Char_6, (MR_Integer) 0);
                    }
#line 431 "c_util.m"
                    if (backend_libs__c_util__succeeded)
#line 430 "c_util.m"
                      {
#line 430 "c_util.m"
                        backend_libs__c_util__RevQuotedCharStr_15 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[8]);
#line 430 "c_util.m"
                      }
#line 431 "c_util.m"
                    else
#line 451 "c_util.m"
                      {
#line 432 "c_util.m"
                        MR_Integer backend_libs__c_util__Int_23;

#line 432 "c_util.m"
                        {
#line 432 "c_util.m"
                          backend_libs__c_util__Int_23 = mercury__char__to_int_1_f_0(backend_libs__c_util__Char_6);
                        }
#line 433 "c_util.m"
                        backend_libs__c_util__succeeded = (backend_libs__c_util__Int_23 >= (MR_Integer) 128);
#line 451 "c_util.m"
                        if (backend_libs__c_util__succeeded)
#line 444 "c_util.m"
#line 444 "c_util.m"
                          switch (backend_libs__c_util__Lang_5) {
#line 444 "c_util.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 444 "c_util.m"
                            case (MR_Integer) 0:
#line 441 "c_util.m"
                              {
#line 441 "c_util.m"
                                MR_Word backend_libs__c_util__CodeUnits_24;

#line 437 "c_util.m"
                                {
#line 437 "c_util.m"
                                  backend_libs__c_util__succeeded = mercury__char__to_utf8_2_p_0(backend_libs__c_util__Char_6, &backend_libs__c_util__CodeUnits_24);
                                }
#line 441 "c_util.m"
                                if (backend_libs__c_util__succeeded)
#line 438 "c_util.m"
                                  {
#line 438 "c_util.m"
                                    MR_Word backend_libs__c_util__EscapeCharss_25;
#line 438 "c_util.m"
                                    MR_Word backend_libs__c_util__EscapeChars_26;

#line 438 "c_util.m"
                                    {
#line 438 "c_util.m"
                                      mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__c_util_scalar_common_1[0], (MR_Word) &backend_libs__c_util_scalar_common_3[1], backend_libs__c_util__CodeUnits_24, &backend_libs__c_util__EscapeCharss_25);
                                    }
#line 439 "c_util.m"
                                    {
#line 439 "c_util.m"
                                      mercury__list__condense_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, backend_libs__c_util__EscapeCharss_25, &backend_libs__c_util__EscapeChars_26);
                                    }
#line 440 "c_util.m"
                                    {
#line 440 "c_util.m"
                                      backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_p_0(backend_libs__c_util__EscapeChars_26, backend_libs__c_util__V_16_16, &backend_libs__c_util__RevQuotedCharStr_15);
                                    }
#line 438 "c_util.m"
                                  }
#line 441 "c_util.m"
                                else
#line 442 "c_util.m"
                                  {
#line 442 "c_util.m"
                                    {
#line 442 "c_util.m"
                                      mercury__require__unexpected_3_p_0((MR_String) "backend_libs.c_util", (MR_String) "predicate \140backend_libs.c_util.quote_one_char\'/4", (MR_String) "invalid Unicode code point");
#line 442 "c_util.m"
                                      return;
                                    }
#line 442 "c_util.m"
                                  }
#line 441 "c_util.m"
                              }
#line 444 "c_util.m"
                              break;
#line 444 "c_util.m"
                            case (MR_Integer) 2:
#line 449 "c_util.m"
                              {
#line 449 "c_util.m"
                                backend_libs__c_util__RevQuotedCharStr_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "c_util.m"
                                MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_15, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__Char_6));
#line 449 "c_util.m"
                                MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_15, 1) = ((MR_Box) (backend_libs__c_util__V_16_16));
#line 449 "c_util.m"
                              }
#line 444 "c_util.m"
                              break;
#line 444 "c_util.m"
                            case (MR_Integer) 1:
#line 446 "c_util.m"
                              {
#line 446 "c_util.m"
                                backend_libs__c_util__RevQuotedCharStr_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 446 "c_util.m"
                                MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_15, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__Char_6));
#line 446 "c_util.m"
                                MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_15, 1) = ((MR_Box) (backend_libs__c_util__V_16_16));
#line 446 "c_util.m"
                              }
#line 444 "c_util.m"
                              break;
#line 444 "c_util.m"
                          }
#line 451 "c_util.m"
                        else
#line 461 "c_util.m"
                          {
#line 461 "c_util.m"
                            MR_Word backend_libs__c_util__EscapeChars_41;

#line 455 "c_util.m"
#line 455 "c_util.m"
                            switch (backend_libs__c_util__Lang_5) {
#line 455 "c_util.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 455 "c_util.m"
                              case (MR_Integer) 0:
#line 552 "c_util.m"
                                {
#line 552 "c_util.m"
                                  MR_Integer backend_libs__c_util__Int_69;

#line 553 "c_util.m"
                                  {
#line 553 "c_util.m"
                                    mercury__char__to_int_2_p_0(backend_libs__c_util__Char_6, &backend_libs__c_util__Int_69);
                                  }
#line 554 "c_util.m"
                                  {
#line 554 "c_util.m"
                                    backend_libs__c_util__octal_escape_any_int_2_p_0(backend_libs__c_util__Int_69, &backend_libs__c_util__EscapeChars_41);
                                  }
#line 552 "c_util.m"
                                }
#line 455 "c_util.m"
                                break;
#line 455 "c_util.m"
                              case (MR_Integer) 2:
#line 565 "c_util.m"
                                {
#line 565 "c_util.m"
                                  MR_Integer backend_libs__c_util__Int_72;
#line 565 "c_util.m"
                                  MR_String backend_libs__c_util__HexString_73;
#line 565 "c_util.m"
                                  MR_String backend_libs__c_util__V_78_78;

#line 566 "c_util.m"
                                  {
#line 566 "c_util.m"
                                    mercury__char__to_int_2_p_0(backend_libs__c_util__Char_6, &backend_libs__c_util__Int_72);
                                  }
#line 567 "c_util.m"
                                  {
#line 567 "c_util.m"
                                    mercury__string__format__format_unsigned_int_component_width_noprec_5_p_0((MR_Word) &backend_libs__c_util_scalar_common_4[1], (MR_Integer) 4, (MR_Integer) 2, backend_libs__c_util__Int_72, &backend_libs__c_util__V_78_78);
                                  }
#line 567 "c_util.m"
                                  {
#line 567 "c_util.m"
                                    backend_libs__c_util__HexString_73 = mercury__string__f_43_43_2_f_0((MR_String) "\\u", backend_libs__c_util__V_78_78);
                                  }
#line 568 "c_util.m"
                                  {
#line 568 "c_util.m"
                                    mercury__string__to_char_list_2_p_0(backend_libs__c_util__HexString_73, &backend_libs__c_util__EscapeChars_41);
                                  }
#line 565 "c_util.m"
                                }
#line 455 "c_util.m"
                                break;
#line 455 "c_util.m"
                              case (MR_Integer) 1:
#line 552 "c_util.m"
                                {
#line 552 "c_util.m"
                                  MR_Integer backend_libs__c_util__Int_90;

#line 553 "c_util.m"
                                  {
#line 553 "c_util.m"
                                    mercury__char__to_int_2_p_0(backend_libs__c_util__Char_6, &backend_libs__c_util__Int_90);
                                  }
#line 554 "c_util.m"
                                  {
#line 554 "c_util.m"
                                    backend_libs__c_util__octal_escape_any_int_2_p_0(backend_libs__c_util__Int_90, &backend_libs__c_util__EscapeChars_41);
                                  }
#line 552 "c_util.m"
                                }
#line 455 "c_util.m"
                                break;
#line 455 "c_util.m"
                            }
#line 462 "c_util.m"
                            {
#line 462 "c_util.m"
                              backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_p_0(backend_libs__c_util__EscapeChars_41, backend_libs__c_util__V_16_16, &backend_libs__c_util__RevQuotedCharStr_15);
                            }
#line 461 "c_util.m"
                          }
#line 451 "c_util.m"
                      }
#line 431 "c_util.m"
                  }
#line 427 "c_util.m"
              }
#line 423 "c_util.m"
          }
#line 417 "c_util.m"
      }
#line 394 "c_util.m"
    {
#line 394 "c_util.m"
      mercury__string__from_rev_char_list_2_p_0(backend_libs__c_util__RevQuotedCharStr_15, &backend_libs__c_util__EscapedCharStr_8);
    }
#line 382 "c_util.m"
    {
#line 382 "c_util.m"
      mercury__io__write_string_3_p_0(backend_libs__c_util__EscapedCharStr_8);
#line 382 "c_util.m"
      return;
    }
#line 380 "c_util.m"
  }
#line 378 "c_util.m"
}

#line 360 "c_util.m"
static void MR_CALL 
backend_libs__c_util__do_output_quoted_string_5_p_0(
#line 360 "c_util.m"
  MR_Word backend_libs__c_util__Lang_6,
#line 360 "c_util.m"
  MR_String backend_libs__c_util__S_7,
#line 360 "c_util.m"
  MR_Integer backend_libs__c_util__Cur_8)
#line 360 "c_util.m"
{
#line 367 "c_util.m"
  while (MR_TRUE)
#line 367 "c_util.m"
    {
#line 367 "c_util.m"
      /* tailcall optimized into a loop */
#line 367 "c_util.m"
      {
#line 367 "c_util.m"
        MR_bool backend_libs__c_util__succeeded;
#line 367 "c_util.m"
        MR_Integer backend_libs__c_util__Next_10;
#line 367 "c_util.m"
        MR_Char backend_libs__c_util__Char_11;

#line 364 "c_util.m"
        {
#line 364 "c_util.m"
          backend_libs__c_util__succeeded = mercury__string__unsafe_index_next_4_p_0(backend_libs__c_util__S_7, backend_libs__c_util__Cur_8, &backend_libs__c_util__Next_10, &backend_libs__c_util__Char_11);
        }
#line 367 "c_util.m"
        if (backend_libs__c_util__succeeded)
#line 365 "c_util.m"
          {
#line 365 "c_util.m"
            {
#line 365 "c_util.m"
              backend_libs__c_util__output_quoted_char_lang_4_p_3(backend_libs__c_util__Lang_6, backend_libs__c_util__Char_11);
            }
#line 366 "c_util.m"
            /* direct tailcall eliminated */
#line 366 "c_util.m"
            {
#line 366 "c_util.m"
              MR_Integer backend_libs__c_util__Cur__tmp_copy_8 = backend_libs__c_util__Next_10;

#line 366 "c_util.m"
              backend_libs__c_util__Cur_8 = backend_libs__c_util__Cur__tmp_copy_8;
#line 366 "c_util.m"
            }
#line 366 "c_util.m"
            continue;
#line 365 "c_util.m"
          }
#line 367 "c_util.m"
        else
#line 367 "c_util.m"
          {
#line 367 "c_util.m"
          }
#line 367 "c_util.m"
      }
#line 367 "c_util.m"
      break;
#line 367 "c_util.m"
    }
#line 360 "c_util.m"
}

#line 280 "c_util.m"
static void MR_CALL 
backend_libs__c_util__can_print_directly_4_p_0(
#line 280 "c_util.m"
  MR_String backend_libs__c_util__Str_1,
#line 280 "c_util.m"
  MR_Word * backend_libs__c_util__CanPrintDirectly_2)
#line 280 "c_util.m"
{
#line 284 "c_util.m"
  {
#line 284 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 287 "c_util.m"
{
#define MR_PROC_LABEL backend_libs__c_util__can_print_directly_4_p_0

	MR_String Str;
	MR_Word CanPrintDirectly;

	Str =  backend_libs__c_util__Str_1 ;
		{
#line 287 "c_util.m"
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
#line 4457 "backend_libs.c_util.c"

		;}
#undef MR_PROC_LABEL
	 *backend_libs__c_util__CanPrintDirectly_2  = CanPrintDirectly;
#line 287 "c_util.m"
}
#line 284 "c_util.m"
  }
#line 280 "c_util.m"
}

#line 193 "c_util.m"
MR_bool MR_CALL 
backend_libs__c_util__is_valid_c_identifier_1_p_0(
#line 193 "c_util.m"
  MR_String backend_libs__c_util__S_2)
#line 193 "c_util.m"
{
#line 730 "c_util.m"
  {
#line 730 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 730 "c_util.m"
    MR_Char backend_libs__c_util__Start_3;

#line 731 "c_util.m"
    {
#line 731 "c_util.m"
      backend_libs__c_util__succeeded = mercury__string__index_3_p_0(backend_libs__c_util__S_2, (MR_Integer) 0, &backend_libs__c_util__Start_3);
    }
#line 730 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 730 "c_util.m"
      {
#line 732 "c_util.m"
        {
#line 732 "c_util.m"
          backend_libs__c_util__succeeded = mercury__char__is_alpha_or_underscore_1_p_0(backend_libs__c_util__Start_3);
        }
#line 730 "c_util.m"
        if (backend_libs__c_util__succeeded)
#line 733 "c_util.m"
          {
#line 733 "c_util.m"
            return backend_libs__c_util__succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(backend_libs__c_util__S_2);
          }
#line 730 "c_util.m"
      }
#line 730 "c_util.m"
    return backend_libs__c_util__succeeded;
#line 730 "c_util.m"
  }
#line 193 "c_util.m"
}

#line 185 "c_util.m"
void MR_CALL 
backend_libs__c_util__output_pragma_pack_pop_2_p_0(void)
#line 185 "c_util.m"
{
#line 723 "c_util.m"
  {
#line 723 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 724 "c_util.m"
    {
#line 724 "c_util.m"
      mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_MSVC\n");
    }
#line 725 "c_util.m"
    {
#line 725 "c_util.m"
      mercury__io__write_string_3_p_0((MR_String) "#pragma pack(pop)\n");
    }
#line 726 "c_util.m"
    {
#line 726 "c_util.m"
      mercury__io__write_string_3_p_0((MR_String) "#endif\n");
#line 726 "c_util.m"
      return;
    }
#line 723 "c_util.m"
  }
#line 185 "c_util.m"
}

#line 183 "c_util.m"
void MR_CALL 
backend_libs__c_util__output_pragma_pack_push_2_p_0(void)
#line 183 "c_util.m"
{
#line 718 "c_util.m"
  {
#line 718 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 719 "c_util.m"
    {
#line 719 "c_util.m"
      mercury__io__write_string_3_p_0((MR_String) "\n#ifdef MR_MSVC\n");
    }
#line 720 "c_util.m"
    {
#line 720 "c_util.m"
      mercury__io__write_string_3_p_0((MR_String) "#pragma pack(push, MR_BYTES_PER_WORD)\n");
    }
#line 721 "c_util.m"
    {
#line 721 "c_util.m"
      mercury__io__write_string_3_p_0((MR_String) "#endif\n");
#line 721 "c_util.m"
      return;
    }
#line 718 "c_util.m"
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
#line 674 "c_util.m"
  {
#line 674 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 674 "c_util.m"
    MR_Integer backend_libs__c_util__NumTagBits_12;
#line 674 "c_util.m"
    MR_String backend_libs__c_util__NumTagBitsStr_13;
#line 674 "c_util.m"
    MR_Word backend_libs__c_util__UnboxedFloat_14;
#line 674 "c_util.m"
    MR_String backend_libs__c_util__UnboxedFloatStr_15;
#line 674 "c_util.m"
    MR_Word backend_libs__c_util__PregeneratedDist_16;
#line 674 "c_util.m"
    MR_String backend_libs__c_util__PregeneratedDistStr_17;
#line 674 "c_util.m"
    MR_Word backend_libs__c_util__HighLevelCode_18;
#line 674 "c_util.m"
    MR_String backend_libs__c_util__HighLevelCodeStr_19;
#line 674 "c_util.m"
    MR_Word backend_libs__c_util__V_26_26;
#line 674 "c_util.m"
    MR_Word backend_libs__c_util__V_29_29;
#line 674 "c_util.m"
    MR_Word backend_libs__c_util__V_31_31;
#line 674 "c_util.m"
    MR_Word backend_libs__c_util__V_32_32;
#line 674 "c_util.m"
    MR_Word backend_libs__c_util__V_34_34;
#line 674 "c_util.m"
    MR_Word backend_libs__c_util__V_36_36;
#line 674 "c_util.m"
    MR_Word backend_libs__c_util__V_38_38;
#line 674 "c_util.m"
    MR_Word backend_libs__c_util__V_39_39;
#line 674 "c_util.m"
    MR_Word backend_libs__c_util__V_41_41;
#line 674 "c_util.m"
    MR_Word backend_libs__c_util__V_43_43;
#line 674 "c_util.m"
    MR_Word backend_libs__c_util__V_44_44;
#line 674 "c_util.m"
    MR_Word backend_libs__c_util__V_46_46;
#line 674 "c_util.m"
    MR_Word backend_libs__c_util__V_48_48;
#line 674 "c_util.m"
    MR_Word backend_libs__c_util__V_50_50;
#line 674 "c_util.m"
    MR_Word backend_libs__c_util__V_52_52;
#line 674 "c_util.m"
    MR_Word backend_libs__c_util__V_54_54;
#line 674 "c_util.m"
    MR_Word backend_libs__c_util__V_56_56;
#line 674 "c_util.m"
    MR_Word backend_libs__c_util__V_58_58;
#line 674 "c_util.m"
    MR_Word backend_libs__c_util__V_59_59;
#line 674 "c_util.m"
    MR_Word backend_libs__c_util__V_61_61;
#line 674 "c_util.m"
    MR_Word backend_libs__c_util__V_63_63;
#line 674 "c_util.m"
    MR_Word backend_libs__c_util__V_64_64;
#line 674 "c_util.m"
    MR_Word backend_libs__c_util__V_66_66;
#line 674 "c_util.m"
    MR_Word backend_libs__c_util__V_68_68;
#line 674 "c_util.m"
    MR_Word backend_libs__c_util__V_69_69;
#line 674 "c_util.m"
    MR_Word backend_libs__c_util__V_71_71;
#line 674 "c_util.m"
    MR_Word backend_libs__c_util__V_73_73;

#line 675 "c_util.m"
    {
#line 675 "c_util.m"
      libs__globals__lookup_int_option_3_p_0(backend_libs__c_util__Globals_7, (MR_Integer) 238, &backend_libs__c_util__NumTagBits_12);
    }
#line 676 "c_util.m"
    {
#line 676 "c_util.m"
      mercury__string__int_to_string_2_p_0(backend_libs__c_util__NumTagBits_12, &backend_libs__c_util__NumTagBitsStr_13);
    }
#line 677 "c_util.m"
    {
#line 677 "c_util.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__c_util__Globals_7, (MR_Integer) 244, &backend_libs__c_util__UnboxedFloat_14);
    }
#line 707 "c_util.m"
#line 707 "c_util.m"
    switch (backend_libs__c_util__UnboxedFloat_14) {
#line 707 "c_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 707 "c_util.m"
      case (MR_Integer) 0:
#line 707 "c_util.m"
        backend_libs__c_util__UnboxedFloatStr_15 = (MR_String) "no";
#line 707 "c_util.m"
        break;
#line 707 "c_util.m"
      case (MR_Integer) 1:
#line 708 "c_util.m"
        backend_libs__c_util__UnboxedFloatStr_15 = (MR_String) "yes";
#line 707 "c_util.m"
        break;
#line 707 "c_util.m"
    }
#line 679 "c_util.m"
    {
#line 679 "c_util.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__c_util__Globals_7, (MR_Integer) 224, &backend_libs__c_util__PregeneratedDist_16);
    }
#line 707 "c_util.m"
#line 707 "c_util.m"
    switch (backend_libs__c_util__PregeneratedDist_16) {
#line 707 "c_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 707 "c_util.m"
      case (MR_Integer) 0:
#line 707 "c_util.m"
        backend_libs__c_util__PregeneratedDistStr_17 = (MR_String) "no";
#line 707 "c_util.m"
        break;
#line 707 "c_util.m"
      case (MR_Integer) 1:
#line 708 "c_util.m"
        backend_libs__c_util__PregeneratedDistStr_17 = (MR_String) "yes";
#line 707 "c_util.m"
        break;
#line 707 "c_util.m"
    }
#line 681 "c_util.m"
    {
#line 681 "c_util.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__c_util__Globals_7, (MR_Integer) 255, &backend_libs__c_util__HighLevelCode_18);
    }
#line 707 "c_util.m"
#line 707 "c_util.m"
    switch (backend_libs__c_util__HighLevelCode_18) {
#line 707 "c_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 707 "c_util.m"
      case (MR_Integer) 0:
#line 707 "c_util.m"
        backend_libs__c_util__HighLevelCodeStr_19 = (MR_String) "no";
#line 707 "c_util.m"
        break;
#line 707 "c_util.m"
      case (MR_Integer) 1:
#line 708 "c_util.m"
        backend_libs__c_util__HighLevelCodeStr_19 = (MR_String) "yes";
#line 707 "c_util.m"
        break;
#line 707 "c_util.m"
    }
#line 698 "c_util.m"
    {
#line 698 "c_util.m"
      backend_libs__c_util__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 698 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_73_73, 0) = ((MR_Box) (backend_libs__c_util__HighLevelCodeStr_19));
#line 698 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[6])));
#line 698 "c_util.m"
    }
#line 698 "c_util.m"
    {
#line 698 "c_util.m"
      backend_libs__c_util__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 698 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_71_71, 0) = ((MR_Box) ((MR_String) "** HIGHLEVEL_CODE="));
#line 698 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_71_71, 1) = ((MR_Box) (backend_libs__c_util__V_73_73));
#line 698 "c_util.m"
    }
#line 697 "c_util.m"
    {
#line 697 "c_util.m"
      backend_libs__c_util__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_69_69, 0) = ((MR_Box) ((MR_String) "\n"));
#line 697 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_69_69, 1) = ((MR_Box) (backend_libs__c_util__V_71_71));
#line 697 "c_util.m"
    }
#line 697 "c_util.m"
    {
#line 697 "c_util.m"
      backend_libs__c_util__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_68_68, 0) = ((MR_Box) (backend_libs__c_util__PregeneratedDistStr_17));
#line 697 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_68_68, 1) = ((MR_Box) (backend_libs__c_util__V_69_69));
#line 697 "c_util.m"
    }
#line 697 "c_util.m"
    {
#line 697 "c_util.m"
      backend_libs__c_util__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_66_66, 0) = ((MR_Box) ((MR_String) "** PREGENERATED_DIST="));
#line 697 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_66_66, 1) = ((MR_Box) (backend_libs__c_util__V_68_68));
#line 697 "c_util.m"
    }
#line 696 "c_util.m"
    {
#line 696 "c_util.m"
      backend_libs__c_util__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_64_64, 0) = ((MR_Box) ((MR_String) "\n"));
#line 696 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_64_64, 1) = ((MR_Box) (backend_libs__c_util__V_66_66));
#line 696 "c_util.m"
    }
#line 696 "c_util.m"
    {
#line 696 "c_util.m"
      backend_libs__c_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_63_63, 0) = ((MR_Box) (backend_libs__c_util__UnboxedFloatStr_15));
#line 696 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_63_63, 1) = ((MR_Box) (backend_libs__c_util__V_64_64));
#line 696 "c_util.m"
    }
#line 696 "c_util.m"
    {
#line 696 "c_util.m"
      backend_libs__c_util__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_61_61, 0) = ((MR_Box) ((MR_String) "** UNBOXED_FLOAT="));
#line 696 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_61_61, 1) = ((MR_Box) (backend_libs__c_util__V_63_63));
#line 696 "c_util.m"
    }
#line 695 "c_util.m"
    {
#line 695 "c_util.m"
      backend_libs__c_util__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 695 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_59_59, 0) = ((MR_Box) ((MR_String) "\n"));
#line 695 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_59_59, 1) = ((MR_Box) (backend_libs__c_util__V_61_61));
#line 695 "c_util.m"
    }
#line 695 "c_util.m"
    {
#line 695 "c_util.m"
      backend_libs__c_util__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 695 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_58_58, 0) = ((MR_Box) (backend_libs__c_util__NumTagBitsStr_13));
#line 695 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_58_58, 1) = ((MR_Box) (backend_libs__c_util__V_59_59));
#line 695 "c_util.m"
    }
#line 695 "c_util.m"
    {
#line 695 "c_util.m"
      backend_libs__c_util__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 695 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_56_56, 0) = ((MR_Box) ((MR_String) "** TAG_BITS="));
#line 695 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_56_56, 1) = ((MR_Box) (backend_libs__c_util__V_58_58));
#line 695 "c_util.m"
    }
#line 694 "c_util.m"
    {
#line 694 "c_util.m"
      backend_libs__c_util__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 694 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_54_54, 0) = ((MR_Box) ((MR_String) "**\n"));
#line 694 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_54_54, 1) = ((MR_Box) (backend_libs__c_util__V_56_56));
#line 694 "c_util.m"
    }
#line 693 "c_util.m"
    {
#line 693 "c_util.m"
      backend_libs__c_util__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 693 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_52_52, 0) = ((MR_Box) ((MR_String) "** the generation of this C file were\n"));
#line 693 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_52_52, 1) = ((MR_Box) (backend_libs__c_util__V_54_54));
#line 693 "c_util.m"
    }
#line 692 "c_util.m"
    {
#line 692 "c_util.m"
      backend_libs__c_util__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 692 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_50_50, 0) = ((MR_Box) ((MR_String) "** The autoconfigured grade settings governing\n"));
#line 692 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_50_50, 1) = ((MR_Box) (backend_libs__c_util__V_52_52));
#line 692 "c_util.m"
    }
#line 691 "c_util.m"
    {
#line 691 "c_util.m"
      backend_libs__c_util__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 691 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_48_48, 0) = ((MR_Box) ((MR_String) "**\n"));
#line 691 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_48_48, 1) = ((MR_Box) (backend_libs__c_util__V_50_50));
#line 691 "c_util.m"
    }
#line 690 "c_util.m"
    {
#line 690 "c_util.m"
      backend_libs__c_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 690 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_46_46, 0) = ((MR_Box) ((MR_String) "** Do not edit.\n"));
#line 690 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_46_46, 1) = ((MR_Box) (backend_libs__c_util__V_48_48));
#line 690 "c_util.m"
    }
#line 689 "c_util.m"
    {
#line 689 "c_util.m"
      backend_libs__c_util__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_44_44, 0) = ((MR_Box) ((MR_String) ".\n"));
#line 689 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_44_44, 1) = ((MR_Box) (backend_libs__c_util__V_46_46));
#line 689 "c_util.m"
    }
#line 689 "c_util.m"
    {
#line 689 "c_util.m"
      backend_libs__c_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_43_43, 0) = ((MR_Box) (backend_libs__c_util__Fullarch_10));
#line 689 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_43_43, 1) = ((MR_Box) (backend_libs__c_util__V_44_44));
#line 689 "c_util.m"
    }
#line 689 "c_util.m"
    {
#line 689 "c_util.m"
      backend_libs__c_util__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_41_41, 0) = ((MR_Box) ((MR_String) "** configured for "));
#line 689 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_41_41, 1) = ((MR_Box) (backend_libs__c_util__V_43_43));
#line 689 "c_util.m"
    }
#line 688 "c_util.m"
    {
#line 688 "c_util.m"
      backend_libs__c_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_39_39, 0) = ((MR_Box) ((MR_String) "\n"));
#line 688 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_39_39, 1) = ((MR_Box) (backend_libs__c_util__V_41_41));
#line 688 "c_util.m"
    }
#line 688 "c_util.m"
    {
#line 688 "c_util.m"
      backend_libs__c_util__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_38_38, 0) = ((MR_Box) (backend_libs__c_util__Version_9));
#line 688 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_38_38, 1) = ((MR_Box) (backend_libs__c_util__V_39_39));
#line 688 "c_util.m"
    }
#line 688 "c_util.m"
    {
#line 688 "c_util.m"
      backend_libs__c_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_36_36, 0) = ((MR_Box) ((MR_String) "** version "));
#line 688 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_36_36, 1) = ((MR_Box) (backend_libs__c_util__V_38_38));
#line 688 "c_util.m"
    }
#line 687 "c_util.m"
    {
#line 687 "c_util.m"
      backend_libs__c_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 687 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_34_34, 0) = ((MR_Box) ((MR_String) "** by the Mercury compiler,\n"));
#line 687 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_34_34, 1) = ((MR_Box) (backend_libs__c_util__V_36_36));
#line 687 "c_util.m"
    }
#line 686 "c_util.m"
    {
#line 686 "c_util.m"
      backend_libs__c_util__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 686 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_32_32, 0) = ((MR_Box) ((MR_String) "\'\n"));
#line 686 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_32_32, 1) = ((MR_Box) (backend_libs__c_util__V_34_34));
#line 686 "c_util.m"
    }
#line 686 "c_util.m"
    {
#line 686 "c_util.m"
      backend_libs__c_util__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 686 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_31_31, 0) = ((MR_Box) (backend_libs__c_util__SourceFileName_8));
#line 686 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_31_31, 1) = ((MR_Box) (backend_libs__c_util__V_32_32));
#line 686 "c_util.m"
    }
#line 686 "c_util.m"
    {
#line 686 "c_util.m"
      backend_libs__c_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 686 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_29_29, 0) = ((MR_Box) ((MR_String) "** Automatically generated from \140"));
#line 686 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_29_29, 1) = ((MR_Box) (backend_libs__c_util__V_31_31));
#line 686 "c_util.m"
    }
#line 685 "c_util.m"
    {
#line 685 "c_util.m"
      backend_libs__c_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 685 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_26_26, 0) = ((MR_Box) ((MR_String) "/*\n"));
#line 685 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_26_26, 1) = ((MR_Box) (backend_libs__c_util__V_29_29));
#line 685 "c_util.m"
    }
#line 684 "c_util.m"
    {
#line 684 "c_util.m"
      mercury__io__write_strings_3_p_0(backend_libs__c_util__V_26_26);
#line 684 "c_util.m"
      return;
    }
#line 674 "c_util.m"
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
#line 610 "c_util.m"
  {
#line 610 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 610 "c_util.m"
#line 610 "c_util.m"
    switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__1_1)) {
#line 610 "c_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 610 "c_util.m"
      case (MR_Integer) 0:
#line 610 "c_util.m"
#line 610 "c_util.m"
        switch (MR_unmkbody(backend_libs__c_util__HeadVar__1_1)) {
#line 610 "c_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 610 "c_util.m"
          case (MR_Integer) 0:
#line 640 "c_util.m"
            {
#line 640 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 640 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "+";
#line 640 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 1:
#line 641 "c_util.m"
            {
#line 641 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 641 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "-";
#line 641 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 2:
#line 642 "c_util.m"
            {
#line 642 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 642 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "*";
#line 642 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 3:
#line 643 "c_util.m"
            {
#line 643 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 643 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "/";
#line 643 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 4:
#line 651 "c_util.m"
            {
#line 651 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 651 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "%";
#line 651 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 5:
#line 644 "c_util.m"
            {
#line 644 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 645 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<<";
#line 644 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 6:
#line 646 "c_util.m"
            {
#line 646 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 647 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">>";
#line 646 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 7:
#line 648 "c_util.m"
            {
#line 648 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 648 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "&";
#line 648 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 8:
#line 649 "c_util.m"
            {
#line 649 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 649 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "|";
#line 649 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 9:
#line 650 "c_util.m"
            {
#line 650 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 650 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "^";
#line 650 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 10:
#line 654 "c_util.m"
            {
#line 654 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 654 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "&&";
#line 654 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 11:
#line 655 "c_util.m"
            {
#line 655 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 655 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "||";
#line 655 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 12:
#line 652 "c_util.m"
            {
#line 652 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 652 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "==";
#line 652 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 13:
#line 653 "c_util.m"
            {
#line 653 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 653 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "!=";
#line 653 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 14:
#line 664 "c_util.m"
            {
#line 664 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
#line 664 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "MR_body";
#line 664 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 15:
#line 611 "c_util.m"
            {
#line 611 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 612 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "STRING_UNSAFE_INDEX_CODE_UNIT";
#line 611 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 16:
#line 619 "c_util.m"
            {
#line 619 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 619 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "==";
#line 619 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 17:
#line 620 "c_util.m"
            {
#line 620 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 620 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "!=";
#line 620 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 18:
#line 623 "c_util.m"
            {
#line 623 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 623 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<";
#line 623 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 19:
#line 624 "c_util.m"
            {
#line 624 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 624 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">";
#line 624 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 20:
#line 621 "c_util.m"
            {
#line 621 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 621 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<=";
#line 621 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 21:
#line 622 "c_util.m"
            {
#line 622 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 622 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">=";
#line 622 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 22:
#line 661 "c_util.m"
            {
#line 661 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
#line 661 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "MR_strcmp";
#line 661 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 23:
#line 656 "c_util.m"
            {
#line 656 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 656 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<";
#line 656 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 24:
#line 657 "c_util.m"
            {
#line 657 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 657 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">";
#line 657 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 25:
#line 658 "c_util.m"
            {
#line 658 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 658 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<=";
#line 658 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 26:
#line 659 "c_util.m"
            {
#line 659 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 659 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">=";
#line 659 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 27:
#line 626 "c_util.m"
            {
#line 626 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 626 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<=";
#line 626 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 28:
#line 628 "c_util.m"
            {
#line 628 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 628 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "+";
#line 628 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 29:
#line 629 "c_util.m"
            {
#line 629 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 629 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "-";
#line 629 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 30:
#line 630 "c_util.m"
            {
#line 630 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 630 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "*";
#line 630 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 31:
#line 631 "c_util.m"
            {
#line 631 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 631 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "/";
#line 631 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 32:
#line 633 "c_util.m"
            {
#line 633 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 633 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "==";
#line 633 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 33:
#line 634 "c_util.m"
            {
#line 634 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 634 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "!=";
#line 634 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 34:
#line 637 "c_util.m"
            {
#line 637 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 637 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<";
#line 637 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 35:
#line 638 "c_util.m"
            {
#line 638 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 638 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">";
#line 638 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 36:
#line 635 "c_util.m"
            {
#line 635 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 635 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<=";
#line 635 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 37:
#line 636 "c_util.m"
            {
#line 636 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 636 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">=";
#line 636 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 38:
#line 666 "c_util.m"
            {
#line 666 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 667 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "MR_float_word_bits";
#line 666 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 39:
#line 668 "c_util.m"
            {
#line 668 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 669 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "MR_float_from_dword";
#line 668 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 40:
#line 614 "c_util.m"
            {
#line 614 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 614 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "==";
#line 614 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 41:
#line 617 "c_util.m"
            {
#line 617 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 617 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "COMPOUND_EQ";
#line 617 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
          case (MR_Integer) 42:
#line 616 "c_util.m"
            {
#line 616 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 616 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "COMPOUND_LT";
#line 616 "c_util.m"
            }
#line 610 "c_util.m"
            break;
#line 610 "c_util.m"
        }
#line 610 "c_util.m"
        break;
#line 610 "c_util.m"
      case (MR_Integer) 1:
#line 610 "c_util.m"
        {
#line 610 "c_util.m"
          *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "c_util.m"
          *backend_libs__c_util__HeadVar__3_3 = (MR_String) "ARRAY_INDEX";
#line 610 "c_util.m"
        }
#line 610 "c_util.m"
        break;
#line 610 "c_util.m"
      case (MR_Integer) 2:
#line 662 "c_util.m"
        {
#line 662 "c_util.m"
          MR_Integer backend_libs__c_util__N_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__c_util__HeadVar__1_1, (MR_Integer) 0)));

#line 662 "c_util.m"
          {
#line 662 "c_util.m"
            MR_Word base;
#line 662 "c_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 662 "c_util.m"
            *backend_libs__c_util__HeadVar__2_2 = base;
#line 662 "c_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__c_util__N_5));
#line 662 "c_util.m"
          }
#line 663 "c_util.m"
          *backend_libs__c_util__HeadVar__3_3 = (MR_String) "MR_offset_streq";
#line 662 "c_util.m"
        }
#line 610 "c_util.m"
        break;
#line 610 "c_util.m"
    }
#line 610 "c_util.m"
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
#line 592 "c_util.m"
  {
#line 592 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 592 "c_util.m"
    *backend_libs__c_util__HeadVar__2_2 = ((&backend_libs__c_util_vector_common_5[0 + backend_libs__c_util__HeadVar__1_1]))->backend_libs__c_util__vector_common_type_5_0__vct_5_f_0;
#line 592 "c_util.m"
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
#line 584 "c_util.m"
  {
#line 584 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 584 "c_util.m"
    MR_String backend_libs__c_util__V_8_8;

#line 585 "c_util.m"
    {
#line 585 "c_util.m"
      backend_libs__c_util__V_8_8 = backend_libs__c_util__make_float_literal_1_f_0(backend_libs__c_util__Float_4);
    }
#line 585 "c_util.m"
    {
#line 585 "c_util.m"
      mercury__io__write_string_3_p_0(backend_libs__c_util__V_8_8);
#line 585 "c_util.m"
      return;
    }
#line 584 "c_util.m"
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
#line 576 "c_util.m"
  {
#line 576 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 576 "c_util.m"
    MR_String backend_libs__c_util__HeadVar__2_2;

#line 576 "c_util.m"
    {
#line 576 "c_util.m"
      mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) &backend_libs__c_util_scalar_common_4[0], (MR_Integer) 17, (MR_Integer) 4, backend_libs__c_util__Float_3, &backend_libs__c_util__HeadVar__2_2);
    }
#line 576 "c_util.m"
    return backend_libs__c_util__HeadVar__2_2;
#line 576 "c_util.m"
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
#line 384 "c_util.m"
  {
#line 384 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 384 "c_util.m"
    MR_String backend_libs__c_util__HeadVar__2_2;

#line 384 "c_util.m"
    {
#line 384 "c_util.m"
      return backend_libs__c_util__HeadVar__2_2 = backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0(backend_libs__c_util__Char_3);
    }
#line 384 "c_util.m"
    return backend_libs__c_util__HeadVar__2_2;
#line 384 "c_util.m"
  }
#line 117 "c_util.m"
}

#line 397 "c_util.m"
static void MR_CALL 
backend_libs__c_util__quote_string_1_f_0_1(
#line 397 "c_util.m"
  MR_Box backend_libs__c_util__closure_arg,
#line 397 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 397 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_2,
#line 397 "c_util.m"
  MR_Box * backend_libs__c_util__wrapper_arg_3)
#line 397 "c_util.m"
{
#line 397 "c_util.m"
  {
#line 397 "c_util.m"
    MR_Box backend_libs__c_util__closure = backend_libs__c_util__closure_arg;
#line 397 "c_util.m"
    MR_Word backend_libs__c_util__conv0_RevChars_6;

#line 397 "c_util.m"
    {
#line 397 "c_util.m"
      backend_libs__c_util__quote_one_char_c_3_p_0(((MR_Char) (MR_Word) backend_libs__c_util__wrapper_arg_1), ((MR_Word) backend_libs__c_util__wrapper_arg_2), &backend_libs__c_util__conv0_RevChars_6);
    }
#line 397 "c_util.m"
    *backend_libs__c_util__wrapper_arg_3 = ((MR_Box) (backend_libs__c_util__conv0_RevChars_6));
#line 397 "c_util.m"
  }
#line 397 "c_util.m"
}

#line 111 "c_util.m"
MR_String MR_CALL 
backend_libs__c_util__quote_string_1_f_0(
#line 111 "c_util.m"
  MR_String backend_libs__c_util__String_3)
#line 111 "c_util.m"
{
#line 396 "c_util.m"
  {
#line 396 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 396 "c_util.m"
    MR_String backend_libs__c_util__QuotedString_4;
#line 396 "c_util.m"
    MR_Word backend_libs__c_util__RevQuotedChars_5;
#line 397 "c_util.m"
    MR_Box backend_libs__c_util__conv1_RevQuotedChars_5;

#line 397 "c_util.m"
    {
#line 397 "c_util.m"
      mercury__string__foldl_4_p_1((MR_Word) &backend_libs__c_util_scalar_common_1[0], (MR_Word) &backend_libs__c_util_scalar_common_3[0], backend_libs__c_util__String_3, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &backend_libs__c_util__conv1_RevQuotedChars_5);
    }
#line 397 "c_util.m"
    backend_libs__c_util__RevQuotedChars_5 = ((MR_Word) backend_libs__c_util__conv1_RevQuotedChars_5);
#line 398 "c_util.m"
    {
#line 398 "c_util.m"
      mercury__string__from_rev_char_list_2_p_0(backend_libs__c_util__RevQuotedChars_5, &backend_libs__c_util__QuotedString_4);
    }
#line 396 "c_util.m"
    return backend_libs__c_util__QuotedString_4;
#line 396 "c_util.m"
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
#line 371 "c_util.m"
  {
#line 371 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 371 "c_util.m"
    MR_String backend_libs__c_util__EscapedCharStr_15;

#line 381 "c_util.m"
    {
#line 381 "c_util.m"
      backend_libs__c_util__EscapedCharStr_15 = backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0(backend_libs__c_util__Char_4);
    }
#line 382 "c_util.m"
    {
#line 382 "c_util.m"
      mercury__io__write_string_3_p_0(backend_libs__c_util__EscapedCharStr_15);
#line 382 "c_util.m"
      return;
    }
#line 371 "c_util.m"
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
#line 354 "c_util.m"
  while (MR_TRUE)
#line 354 "c_util.m"
    {
#line 354 "c_util.m"
      /* tailcall optimized into a loop */
#line 354 "c_util.m"
      {
#line 354 "c_util.m"
        MR_bool backend_libs__c_util__succeeded;

#line 354 "c_util.m"
        if ((backend_libs__c_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 354 "c_util.m"
          {
#line 354 "c_util.m"
          }
#line 354 "c_util.m"
        else
#line 355 "c_util.m"
          {
#line 355 "c_util.m"
            MR_String backend_libs__c_util__S_10 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__c_util__HeadVar__2_2, (MR_Integer) 0)));
#line 355 "c_util.m"
            MR_Word backend_libs__c_util__Ss_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__c_util__HeadVar__2_2, (MR_Integer) 1)));
#line 355 "c_util.m"
            MR_Char backend_libs__c_util__V_16_16;

#line 331 "c_util.m"
#line 331 "c_util.m"
            switch (backend_libs__c_util__HeadVar__1_1) {
#line 331 "c_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 331 "c_util.m"
              case (MR_Integer) 0:
#line 331 "c_util.m"
                {
#line 331 "c_util.m"
                  MR_String backend_libs__c_util__Left_25;
#line 331 "c_util.m"
                  MR_String backend_libs__c_util__Right_26;

#line 336 "c_util.m"
                  {
#line 336 "c_util.m"
                    mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__S_10, (MR_Integer) 160, &backend_libs__c_util__Left_25, &backend_libs__c_util__Right_26);
                  }
#line 337 "c_util.m"
                  {
#line 337 "c_util.m"
                    backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__Left_25, (MR_Integer) 0);
                  }
#line 338 "c_util.m"
                  backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_26, (MR_String) "") == 0);
#line 340 "c_util.m"
                  if (backend_libs__c_util__succeeded)
#line 340 "c_util.m"
                    {
#line 340 "c_util.m"
                    }
#line 340 "c_util.m"
                  else
#line 341 "c_util.m"
                    {
#line 341 "c_util.m"
                      MR_String backend_libs__c_util__Left_40;
#line 341 "c_util.m"
                      MR_String backend_libs__c_util__Right_41;

#line 341 "c_util.m"
                      {
#line 341 "c_util.m"
                        mercury__io__write_string_3_p_0((MR_String) "\" \"");
                      }
#line 336 "c_util.m"
                      {
#line 336 "c_util.m"
                        mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Right_26, (MR_Integer) 160, &backend_libs__c_util__Left_40, &backend_libs__c_util__Right_41);
                      }
#line 337 "c_util.m"
                      {
#line 337 "c_util.m"
                        backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__Left_40, (MR_Integer) 0);
                      }
#line 338 "c_util.m"
                      backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_41, (MR_String) "") == 0);
#line 340 "c_util.m"
                      if (backend_libs__c_util__succeeded)
#line 340 "c_util.m"
                        {
#line 340 "c_util.m"
                        }
#line 340 "c_util.m"
                      else
#line 341 "c_util.m"
                        {
#line 341 "c_util.m"
                          MR_String backend_libs__c_util__Left_55;
#line 341 "c_util.m"
                          MR_String backend_libs__c_util__Right_56;

#line 341 "c_util.m"
                          {
#line 341 "c_util.m"
                            mercury__io__write_string_3_p_0((MR_String) "\" \"");
                          }
#line 336 "c_util.m"
                          {
#line 336 "c_util.m"
                            mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Right_41, (MR_Integer) 160, &backend_libs__c_util__Left_55, &backend_libs__c_util__Right_56);
                          }
#line 337 "c_util.m"
                          {
#line 337 "c_util.m"
                            backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__Left_55, (MR_Integer) 0);
                          }
#line 338 "c_util.m"
                          backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_56, (MR_String) "") == 0);
#line 340 "c_util.m"
                          if (backend_libs__c_util__succeeded)
#line 340 "c_util.m"
                            {
#line 340 "c_util.m"
                            }
#line 340 "c_util.m"
                          else
#line 341 "c_util.m"
                            {
#line 341 "c_util.m"
                              {
#line 341 "c_util.m"
                                mercury__io__write_string_3_p_0((MR_String) "\" \"");
                              }
#line 342 "c_util.m"
                              {
#line 342 "c_util.m"
                                backend_libs__c_util__output_quoted_string_lang_4_p_0(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__Right_56);
                              }
#line 341 "c_util.m"
                            }
#line 341 "c_util.m"
                        }
#line 341 "c_util.m"
                    }
#line 331 "c_util.m"
                }
#line 331 "c_util.m"
                break;
#line 331 "c_util.m"
              case (MR_Integer) 2:
#line 331 "c_util.m"
              case (MR_Integer) 1:
#line 347 "c_util.m"
                {
#line 348 "c_util.m"
                  {
#line 348 "c_util.m"
                    backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__S_10, (MR_Integer) 0);
                  }
#line 347 "c_util.m"
                }
#line 331 "c_util.m"
                break;
#line 331 "c_util.m"
            }
#line 357 "c_util.m"
            {
#line 357 "c_util.m"
              backend_libs__c_util__V_16_16 = mercury__char__det_from_int_1_f_0((MR_Integer) 0);
            }
#line 357 "c_util.m"
            {
#line 357 "c_util.m"
              backend_libs__c_util__output_quoted_char_lang_4_p_3(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__V_16_16);
            }
#line 358 "c_util.m"
            /* direct tailcall eliminated */
#line 358 "c_util.m"
            {
#line 358 "c_util.m"
              MR_Word backend_libs__c_util__HeadVar__2__tmp_copy_2 = backend_libs__c_util__Ss_11;

#line 358 "c_util.m"
              backend_libs__c_util__HeadVar__2_2 = backend_libs__c_util__HeadVar__2__tmp_copy_2;
#line 358 "c_util.m"
            }
#line 358 "c_util.m"
            continue;
#line 355 "c_util.m"
          }
#line 354 "c_util.m"
      }
#line 354 "c_util.m"
      break;
#line 354 "c_util.m"
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
#line 351 "c_util.m"
  {
#line 351 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 352 "c_util.m"
    {
#line 352 "c_util.m"
      backend_libs__c_util__output_quoted_multi_string_lang_4_p_0((MR_Integer) 0, backend_libs__c_util__Ss_4);
#line 352 "c_util.m"
      return;
    }
#line 351 "c_util.m"
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
#line 331 "c_util.m"
  {
#line 331 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 331 "c_util.m"
#line 331 "c_util.m"
    switch (backend_libs__c_util__Lang_5) {
#line 331 "c_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 331 "c_util.m"
      case (MR_Integer) 0:
#line 331 "c_util.m"
        {
#line 331 "c_util.m"
          MR_String backend_libs__c_util__Left_8;
#line 331 "c_util.m"
          MR_String backend_libs__c_util__Right_9;

#line 336 "c_util.m"
          {
#line 336 "c_util.m"
            mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__S_6, (MR_Integer) 160, &backend_libs__c_util__Left_8, &backend_libs__c_util__Right_9);
          }
#line 337 "c_util.m"
          {
#line 337 "c_util.m"
            backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__Left_8, (MR_Integer) 0);
          }
#line 338 "c_util.m"
          backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_9, (MR_String) "") == 0);
#line 340 "c_util.m"
          if (backend_libs__c_util__succeeded)
#line 340 "c_util.m"
            {
#line 340 "c_util.m"
            }
#line 340 "c_util.m"
          else
#line 341 "c_util.m"
            {
#line 341 "c_util.m"
              MR_String backend_libs__c_util__Left_25;
#line 341 "c_util.m"
              MR_String backend_libs__c_util__Right_26;

#line 341 "c_util.m"
              {
#line 341 "c_util.m"
                mercury__io__write_string_3_p_0((MR_String) "\" \"");
              }
#line 336 "c_util.m"
              {
#line 336 "c_util.m"
                mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Right_9, (MR_Integer) 160, &backend_libs__c_util__Left_25, &backend_libs__c_util__Right_26);
              }
#line 337 "c_util.m"
              {
#line 337 "c_util.m"
                backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__Left_25, (MR_Integer) 0);
              }
#line 338 "c_util.m"
              backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_26, (MR_String) "") == 0);
#line 340 "c_util.m"
              if (backend_libs__c_util__succeeded)
#line 340 "c_util.m"
                {
#line 340 "c_util.m"
                }
#line 340 "c_util.m"
              else
#line 341 "c_util.m"
                {
#line 341 "c_util.m"
                  MR_String backend_libs__c_util__Left_40;
#line 341 "c_util.m"
                  MR_String backend_libs__c_util__Right_41;

#line 341 "c_util.m"
                  {
#line 341 "c_util.m"
                    mercury__io__write_string_3_p_0((MR_String) "\" \"");
                  }
#line 336 "c_util.m"
                  {
#line 336 "c_util.m"
                    mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Right_26, (MR_Integer) 160, &backend_libs__c_util__Left_40, &backend_libs__c_util__Right_41);
                  }
#line 337 "c_util.m"
                  {
#line 337 "c_util.m"
                    backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__Left_40, (MR_Integer) 0);
                  }
#line 338 "c_util.m"
                  backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_41, (MR_String) "") == 0);
#line 340 "c_util.m"
                  if (backend_libs__c_util__succeeded)
#line 340 "c_util.m"
                    {
#line 340 "c_util.m"
                    }
#line 340 "c_util.m"
                  else
#line 341 "c_util.m"
                    {
#line 341 "c_util.m"
                      {
#line 341 "c_util.m"
                        mercury__io__write_string_3_p_0((MR_String) "\" \"");
                      }
#line 342 "c_util.m"
                      {
#line 342 "c_util.m"
                        backend_libs__c_util__output_quoted_string_lang_4_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__Right_41);
#line 342 "c_util.m"
                        return;
                      }
#line 341 "c_util.m"
                    }
#line 341 "c_util.m"
                }
#line 341 "c_util.m"
            }
#line 331 "c_util.m"
        }
#line 331 "c_util.m"
        break;
#line 331 "c_util.m"
      case (MR_Integer) 2:
#line 331 "c_util.m"
      case (MR_Integer) 1:
#line 347 "c_util.m"
        {
#line 348 "c_util.m"
          {
#line 348 "c_util.m"
            backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__S_6, (MR_Integer) 0);
#line 348 "c_util.m"
            return;
          }
#line 347 "c_util.m"
        }
#line 331 "c_util.m"
        break;
#line 331 "c_util.m"
    }
#line 331 "c_util.m"
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
#line 331 "c_util.m"
  {
#line 331 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 348 "c_util.m"
    {
#line 348 "c_util.m"
      backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__S_6, (MR_Integer) 0);
#line 348 "c_util.m"
      return;
    }
#line 331 "c_util.m"
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
#line 331 "c_util.m"
  {
#line 331 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 348 "c_util.m"
    {
#line 348 "c_util.m"
      backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__S_6, (MR_Integer) 0);
#line 348 "c_util.m"
      return;
    }
#line 331 "c_util.m"
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
#line 331 "c_util.m"
  while (MR_TRUE)
#line 331 "c_util.m"
    {
#line 331 "c_util.m"
      /* tailcall optimized into a loop */
#line 331 "c_util.m"
      {
#line 331 "c_util.m"
        MR_bool backend_libs__c_util__succeeded;
#line 331 "c_util.m"
        MR_String backend_libs__c_util__Left_8;
#line 331 "c_util.m"
        MR_String backend_libs__c_util__Right_9;

#line 336 "c_util.m"
        {
#line 336 "c_util.m"
          mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__S_6, (MR_Integer) 160, &backend_libs__c_util__Left_8, &backend_libs__c_util__Right_9);
        }
#line 337 "c_util.m"
        {
#line 337 "c_util.m"
          backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__Left_8, (MR_Integer) 0);
        }
#line 338 "c_util.m"
        backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_9, (MR_String) "") == 0);
#line 340 "c_util.m"
        if (backend_libs__c_util__succeeded)
#line 340 "c_util.m"
          {
#line 340 "c_util.m"
          }
#line 340 "c_util.m"
        else
#line 341 "c_util.m"
          {
#line 341 "c_util.m"
            MR_String backend_libs__c_util__Left_25;
#line 341 "c_util.m"
            MR_String backend_libs__c_util__Right_26;

#line 341 "c_util.m"
            {
#line 341 "c_util.m"
              mercury__io__write_string_3_p_0((MR_String) "\" \"");
            }
#line 336 "c_util.m"
            {
#line 336 "c_util.m"
              mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Right_9, (MR_Integer) 160, &backend_libs__c_util__Left_25, &backend_libs__c_util__Right_26);
            }
#line 337 "c_util.m"
            {
#line 337 "c_util.m"
              backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__Left_25, (MR_Integer) 0);
            }
#line 338 "c_util.m"
            backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_26, (MR_String) "") == 0);
#line 340 "c_util.m"
            if (backend_libs__c_util__succeeded)
#line 340 "c_util.m"
              {
#line 340 "c_util.m"
              }
#line 340 "c_util.m"
            else
#line 341 "c_util.m"
              {
#line 341 "c_util.m"
                {
#line 341 "c_util.m"
                  mercury__io__write_string_3_p_0((MR_String) "\" \"");
                }
#line 342 "c_util.m"
                /* direct tailcall eliminated */
#line 342 "c_util.m"
                {
#line 342 "c_util.m"
                  MR_String backend_libs__c_util__S__tmp_copy_6 = backend_libs__c_util__Right_26;

#line 342 "c_util.m"
                  backend_libs__c_util__S_6 = backend_libs__c_util__S__tmp_copy_6;
#line 342 "c_util.m"
                }
#line 342 "c_util.m"
                continue;
#line 341 "c_util.m"
              }
#line 341 "c_util.m"
          }
#line 331 "c_util.m"
      }
#line 331 "c_util.m"
      break;
#line 331 "c_util.m"
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
#line 324 "c_util.m"
  {
#line 324 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 324 "c_util.m"
    MR_String backend_libs__c_util__Left_15;
#line 324 "c_util.m"
    MR_String backend_libs__c_util__Right_16;

#line 336 "c_util.m"
    {
#line 336 "c_util.m"
      mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__S_4, (MR_Integer) 160, &backend_libs__c_util__Left_15, &backend_libs__c_util__Right_16);
    }
#line 337 "c_util.m"
    {
#line 337 "c_util.m"
      backend_libs__c_util__do_output_quoted_string_5_p_0((MR_Integer) 0, backend_libs__c_util__Left_15, (MR_Integer) 0);
    }
#line 338 "c_util.m"
    backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_16, (MR_String) "") == 0);
#line 340 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 340 "c_util.m"
      {
#line 340 "c_util.m"
      }
#line 340 "c_util.m"
    else
#line 341 "c_util.m"
      {
#line 341 "c_util.m"
        MR_String backend_libs__c_util__Left_30;
#line 341 "c_util.m"
        MR_String backend_libs__c_util__Right_31;

#line 341 "c_util.m"
        {
#line 341 "c_util.m"
          mercury__io__write_string_3_p_0((MR_String) "\" \"");
        }
#line 336 "c_util.m"
        {
#line 336 "c_util.m"
          mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Right_16, (MR_Integer) 160, &backend_libs__c_util__Left_30, &backend_libs__c_util__Right_31);
        }
#line 337 "c_util.m"
        {
#line 337 "c_util.m"
          backend_libs__c_util__do_output_quoted_string_5_p_0((MR_Integer) 0, backend_libs__c_util__Left_30, (MR_Integer) 0);
        }
#line 338 "c_util.m"
        backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_31, (MR_String) "") == 0);
#line 340 "c_util.m"
        if (backend_libs__c_util__succeeded)
#line 340 "c_util.m"
          {
#line 340 "c_util.m"
          }
#line 340 "c_util.m"
        else
#line 341 "c_util.m"
          {
#line 341 "c_util.m"
            {
#line 341 "c_util.m"
              mercury__io__write_string_3_p_0((MR_String) "\" \"");
            }
#line 342 "c_util.m"
            {
#line 342 "c_util.m"
              backend_libs__c_util__output_quoted_string_lang_4_p_0((MR_Integer) 0, backend_libs__c_util__Right_31);
#line 342 "c_util.m"
              return;
            }
#line 341 "c_util.m"
          }
#line 341 "c_util.m"
      }
#line 324 "c_util.m"
  }
#line 78 "c_util.m"
}

#line 60 "c_util.m"
void MR_CALL 
backend_libs__c_util__always_reset_line_num_2_p_0(void)
#line 60 "c_util.m"
{
#line 251 "c_util.m"
  {
#line 251 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 251 "c_util.m"
    MR_Integer backend_libs__c_util__Line_4;
#line 251 "c_util.m"
    MR_String backend_libs__c_util__File_5;

#line 254 "c_util.m"
    {
#line 254 "c_util.m"
      mercury__io__get_output_line_number_3_p_0(&backend_libs__c_util__Line_4);
    }
#line 255 "c_util.m"
    {
#line 255 "c_util.m"
      mercury__io__output_stream_name_3_p_0(&backend_libs__c_util__File_5);
    }
#line 257 "c_util.m"
    backend_libs__c_util__succeeded = (backend_libs__c_util__Line_4 > (MR_Integer) 0);
#line 257 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 257 "c_util.m"
      {
#line 258 "c_util.m"
        backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__File_5, (MR_String) "") == 0);
#line 258 "c_util.m"
        backend_libs__c_util__succeeded = !(backend_libs__c_util__succeeded);
#line 257 "c_util.m"
      }
#line 272 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 260 "c_util.m"
      {
#line 260 "c_util.m"
        MR_Word backend_libs__c_util__CanPrint_6;
#line 260 "c_util.m"
        MR_Integer backend_libs__c_util__V_14_14;

#line 260 "c_util.m"
        {
#line 260 "c_util.m"
          mercury__io__write_string_3_p_0((MR_String) "#line ");
        }
#line 261 "c_util.m"
        backend_libs__c_util__V_14_14 = (backend_libs__c_util__Line_4 + (MR_Integer) 1);
#line 261 "c_util.m"
        {
#line 261 "c_util.m"
          mercury__io__write_int_3_p_0(backend_libs__c_util__V_14_14);
        }
#line 262 "c_util.m"
        {
#line 262 "c_util.m"
          mercury__io__write_string_3_p_0((MR_String) " \"");
        }
#line 287 "c_util.m"
{
#define MR_PROC_LABEL backend_libs__c_util__always_reset_line_num_2_p_0

	MR_String Str;
	MR_Word CanPrintDirectly;

	Str =  backend_libs__c_util__File_5 ;
		{
#line 287 "c_util.m"
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
#line 6572 "backend_libs.c_util.c"

		;}
#undef MR_PROC_LABEL
	 backend_libs__c_util__CanPrint_6  = CanPrintDirectly;
#line 287 "c_util.m"
}
#line 267 "c_util.m"
#line 267 "c_util.m"
        switch (backend_libs__c_util__CanPrint_6) {
#line 267 "c_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 267 "c_util.m"
          case (MR_Integer) 0:
#line 269 "c_util.m"
            {
#line 269 "c_util.m"
              backend_libs__c_util__output_quoted_string_3_p_0(backend_libs__c_util__File_5);
            }
#line 267 "c_util.m"
            break;
#line 267 "c_util.m"
          case (MR_Integer) 1:
#line 266 "c_util.m"
            {
#line 266 "c_util.m"
              mercury__io__write_string_3_p_0(backend_libs__c_util__File_5);
            }
#line 267 "c_util.m"
            break;
#line 267 "c_util.m"
        }
#line 271 "c_util.m"
        {
#line 271 "c_util.m"
          mercury__io__write_string_3_p_0((MR_String) "\"\n");
#line 271 "c_util.m"
          return;
        }
#line 260 "c_util.m"
      }
#line 272 "c_util.m"
    else
#line 272 "c_util.m"
      {
#line 272 "c_util.m"
      }
#line 251 "c_util.m"
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
#line 242 "c_util.m"
  {
#line 242 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 242 "c_util.m"
    MR_Word backend_libs__c_util__LineNumbers_6;

#line 243 "c_util.m"
    {
#line 243 "c_util.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__c_util__Globals_4, (MR_Integer) 138, &backend_libs__c_util__LineNumbers_6);
    }
#line 247 "c_util.m"
#line 247 "c_util.m"
    switch (backend_libs__c_util__LineNumbers_6) {
#line 247 "c_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 247 "c_util.m"
      case (MR_Integer) 0:
#line 248 "c_util.m"
        {
#line 248 "c_util.m"
        }
#line 247 "c_util.m"
        break;
#line 247 "c_util.m"
      case (MR_Integer) 1:
#line 246 "c_util.m"
        {
#line 246 "c_util.m"
          backend_libs__c_util__always_reset_line_num_2_p_0();
#line 246 "c_util.m"
          return;
        }
#line 247 "c_util.m"
        break;
#line 247 "c_util.m"
    }
#line 242 "c_util.m"
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
#line 238 "c_util.m"
  {
#line 238 "c_util.m"
    MR_bool backend_libs__c_util__succeeded = (backend_libs__c_util__Line_6 > (MR_Integer) 0);

#line 223 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 223 "c_util.m"
      {
#line 224 "c_util.m"
        backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__File_5, (MR_String) "") == 0);
#line 224 "c_util.m"
        backend_libs__c_util__succeeded = !(backend_libs__c_util__succeeded);
#line 223 "c_util.m"
      }
#line 238 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 226 "c_util.m"
      {
#line 226 "c_util.m"
        MR_Word backend_libs__c_util__CanPrint_8;

#line 226 "c_util.m"
        {
#line 226 "c_util.m"
          mercury__io__write_string_3_p_0((MR_String) "#line ");
        }
#line 227 "c_util.m"
        {
#line 227 "c_util.m"
          mercury__io__write_int_3_p_0(backend_libs__c_util__Line_6);
        }
#line 228 "c_util.m"
        {
#line 228 "c_util.m"
          mercury__io__write_string_3_p_0((MR_String) " \"");
        }
#line 287 "c_util.m"
{
#define MR_PROC_LABEL backend_libs__c_util__always_set_line_num_4_p_0

	MR_String Str;
	MR_Word CanPrintDirectly;

	Str =  backend_libs__c_util__File_5 ;
		{
#line 287 "c_util.m"
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
#line 6761 "backend_libs.c_util.c"

		;}
#undef MR_PROC_LABEL
	 backend_libs__c_util__CanPrint_8  = CanPrintDirectly;
#line 287 "c_util.m"
}
#line 233 "c_util.m"
#line 233 "c_util.m"
        switch (backend_libs__c_util__CanPrint_8) {
#line 233 "c_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 233 "c_util.m"
          case (MR_Integer) 0:
#line 235 "c_util.m"
            {
#line 235 "c_util.m"
              backend_libs__c_util__output_quoted_string_3_p_0(backend_libs__c_util__File_5);
            }
#line 233 "c_util.m"
            break;
#line 233 "c_util.m"
          case (MR_Integer) 1:
#line 232 "c_util.m"
            {
#line 232 "c_util.m"
              mercury__io__write_string_3_p_0(backend_libs__c_util__File_5);
            }
#line 233 "c_util.m"
            break;
#line 233 "c_util.m"
        }
#line 237 "c_util.m"
        {
#line 237 "c_util.m"
          mercury__io__write_string_3_p_0((MR_String) "\"\n");
#line 237 "c_util.m"
          return;
        }
#line 226 "c_util.m"
      }
#line 238 "c_util.m"
    else
#line 239 "c_util.m"
      {
#line 239 "c_util.m"
        backend_libs__c_util__always_reset_line_num_2_p_0();
#line 239 "c_util.m"
        return;
      }
#line 238 "c_util.m"
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
#line 212 "c_util.m"
  {
#line 212 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 212 "c_util.m"
    MR_Word backend_libs__c_util__LineNumbers_10;

#line 213 "c_util.m"
    {
#line 213 "c_util.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__c_util__Globals_6, (MR_Integer) 138, &backend_libs__c_util__LineNumbers_10);
    }
#line 217 "c_util.m"
#line 217 "c_util.m"
    switch (backend_libs__c_util__LineNumbers_10) {
#line 217 "c_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 217 "c_util.m"
      case (MR_Integer) 0:
#line 218 "c_util.m"
        {
#line 218 "c_util.m"
        }
#line 217 "c_util.m"
        break;
#line 217 "c_util.m"
      case (MR_Integer) 1:
#line 216 "c_util.m"
        {
#line 216 "c_util.m"
          backend_libs__c_util__always_set_line_num_4_p_0(backend_libs__c_util__File_7, backend_libs__c_util__Line_8);
#line 216 "c_util.m"
          return;
        }
#line 217 "c_util.m"
        break;
#line 217 "c_util.m"
    }
#line 212 "c_util.m"
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
