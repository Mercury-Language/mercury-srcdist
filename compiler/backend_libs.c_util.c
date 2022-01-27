/*
** Automatically generated from `c_util.m'
** by the Mercury compiler,
** version rotd-2015-09-28
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
#include "hlds.status.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
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
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_maybe_set_line_numbers_0_0;

#line 223 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_maybe_set_line_numbers_0_1;

#line 226 "backend_libs.c_util.c"
static const MR_EnumFunctorDescPtr backend_libs__c_util__backend_libs__c_util__enum_value_ordered_maybe_set_line_numbers_0[2];

#line 229 "backend_libs.c_util.c"
static const MR_EnumFunctorDescPtr backend_libs__c_util__backend_libs__c_util__enum_name_ordered_maybe_set_line_numbers_0[2];

#line 232 "backend_libs.c_util.c"
static const MR_Integer backend_libs__c_util__backend_libs__c_util__functor_number_map_maybe_set_line_numbers_0[2];

#line 235 "backend_libs.c_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__c_util__list__ti_list_1builtin__type_ctor_info_string_0;

#line 238 "backend_libs.c_util.c"
static MR_bool MR_CALL 
backend_libs__c_util____Unify____binop_category_0_0_10001(
#line 241 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 243 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2);

#line 246 "backend_libs.c_util.c"
static void MR_CALL 
backend_libs__c_util____Compare____binop_category_0_0_10001(
#line 249 "backend_libs.c_util.c"
  MR_Box * backend_libs__c_util__wrapper_arg_1,
#line 251 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2,
#line 253 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_3);

#line 256 "backend_libs.c_util.c"
static MR_bool MR_CALL 
backend_libs__c_util____Unify____literal_language_0_0_10001(
#line 259 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 261 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2);

#line 264 "backend_libs.c_util.c"
static void MR_CALL 
backend_libs__c_util____Compare____literal_language_0_0_10001(
#line 267 "backend_libs.c_util.c"
  MR_Box * backend_libs__c_util__wrapper_arg_1,
#line 269 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2,
#line 271 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_3);

#line 274 "backend_libs.c_util.c"
static MR_bool MR_CALL 
backend_libs__c_util____Unify____maybe_set_line_numbers_0_0_10001(
#line 277 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 279 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2);

#line 282 "backend_libs.c_util.c"
static void MR_CALL 
backend_libs__c_util____Compare____maybe_set_line_numbers_0_0_10001(
#line 285 "backend_libs.c_util.c"
  MR_Box * backend_libs__c_util__wrapper_arg_1,
#line 287 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2,
#line 289 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_3);

#line 292 "backend_libs.c_util.c"
static MR_bool MR_CALL 
backend_libs__c_util____Unify____multi_string_0_0_10001(
#line 295 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 297 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2);

#line 300 "backend_libs.c_util.c"
static void MR_CALL 
backend_libs__c_util____Compare____multi_string_0_0_10001(
#line 303 "backend_libs.c_util.c"
  MR_Box * backend_libs__c_util__wrapper_arg_1,
#line 305 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2,
#line 307 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_3);

#line 583 "c_util.m"
static void MR_CALL 
backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_p_0(
#line 583 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__1_1,
#line 583 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__2_2,
#line 583 "c_util.m"
  MR_Word * backend_libs__c_util__L_3);

#line 481 "c_util.m"
static void MR_CALL 
backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0_1(
#line 481 "c_util.m"
  MR_Box backend_libs__c_util__closure_arg,
#line 481 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 481 "c_util.m"
  MR_Box * backend_libs__c_util__wrapper_arg_2);

#line 430 "c_util.m"
static MR_String MR_CALL 
backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0(
#line 430 "c_util.m"
  MR_Char backend_libs__c_util__Char_5);

#line 599 "c_util.m"
static void MR_CALL 
backend_libs__c_util__octal_escape_any_int_2_p_0(
#line 599 "c_util.m"
  MR_Integer backend_libs__c_util__Int_3,
#line 599 "c_util.m"
  MR_Word * backend_libs__c_util__EscapeCodeChars_4);

#line 534 "c_util.m"
static void MR_CALL 
backend_libs__c_util__quote_one_char_c_3_p_0_1(
#line 534 "c_util.m"
  MR_Box backend_libs__c_util__closure_arg,
#line 534 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 534 "c_util.m"
  MR_Box * backend_libs__c_util__wrapper_arg_2);

#line 508 "c_util.m"
static void MR_CALL 
backend_libs__c_util__quote_one_char_c_3_p_0(
#line 508 "c_util.m"
  MR_Char backend_libs__c_util__Char_4,
#line 508 "c_util.m"
  MR_Word backend_libs__c_util__RevChars0_5,
#line 508 "c_util.m"
  MR_Word * backend_libs__c_util__RevChars_6);

#line 481 "c_util.m"
static void MR_CALL 
backend_libs__c_util__output_quoted_char_lang_4_p_3_1(
#line 481 "c_util.m"
  MR_Box backend_libs__c_util__closure_arg,
#line 481 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 481 "c_util.m"
  MR_Box * backend_libs__c_util__wrapper_arg_2);

#line 421 "c_util.m"
static void MR_CALL 
backend_libs__c_util__output_quoted_char_lang_4_p_3(
#line 421 "c_util.m"
  MR_Word backend_libs__c_util__Lang_5,
#line 421 "c_util.m"
  MR_Char backend_libs__c_util__Char_6);

#line 403 "c_util.m"
static void MR_CALL 
backend_libs__c_util__do_output_quoted_string_5_p_0(
#line 403 "c_util.m"
  MR_Word backend_libs__c_util__Lang_6,
#line 403 "c_util.m"
  MR_String backend_libs__c_util__S_7,
#line 403 "c_util.m"
  MR_Integer backend_libs__c_util__Cur_8);

#line 323 "c_util.m"
static void MR_CALL 
backend_libs__c_util__can_print_directly_4_p_0(
#line 323 "c_util.m"
  MR_String backend_libs__c_util__Str_1,
#line 323 "c_util.m"
  MR_Word * backend_libs__c_util__CanPrintDirectly_2);

#line 440 "c_util.m"
static void MR_CALL 
backend_libs__c_util__quote_string_1_f_0_1(
#line 440 "c_util.m"
  MR_Box backend_libs__c_util__closure_arg,
#line 440 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 440 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_2,
#line 440 "c_util.m"
  MR_Box * backend_libs__c_util__wrapper_arg_3);


static /* final */ const MR_Box backend_libs__c_util_scalar_common_1[14][2];

static /* final */ const MR_Box backend_libs__c_util_scalar_common_2[1][6];

static /* final */ const MR_Box backend_libs__c_util_scalar_common_3[4][3];

static /* final */ const MR_Box backend_libs__c_util_scalar_common_4[2][1];

static /* final */ const MR_Box backend_libs__c_util_scalar_common_6[1][5];


#line 689 "c_util.m"
/* sealed */ struct backend_libs__c_util__vector_common_type_5_0_s {
#line 689 "c_util.m"
  const MR_String backend_libs__c_util__vector_common_type_5_0__vct_5_f_0;
#line 689 "c_util.m"
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


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "backend_libs.c_util.mh"
#include "mdbcomp.rtti_access.mh"



#line 596 "backend_libs.c_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__c_util__list__pti_list_1__plain_builtin__type_ctor_info_character_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
  }
};

#line 604 "backend_libs.c_util.c"
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

#line 619 "backend_libs.c_util.c"
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

#line 634 "backend_libs.c_util.c"
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

#line 649 "backend_libs.c_util.c"
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

#line 664 "backend_libs.c_util.c"
static const MR_PseudoTypeInfo backend_libs__c_util__backend_libs__c_util__field_types_binop_category_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 669 "backend_libs.c_util.c"
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

#line 684 "backend_libs.c_util.c"
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

#line 699 "backend_libs.c_util.c"
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

#line 714 "backend_libs.c_util.c"
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

#line 729 "backend_libs.c_util.c"
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

#line 744 "backend_libs.c_util.c"
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

#line 759 "backend_libs.c_util.c"
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

#line 774 "backend_libs.c_util.c"
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

#line 789 "backend_libs.c_util.c"
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

#line 804 "backend_libs.c_util.c"
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

#line 820 "backend_libs.c_util.c"
static const MR_DuFunctorDescPtr backend_libs__c_util__backend_libs__c_util__du_stag_ordered_binop_category_0_1[1] = {
  &backend_libs__c_util__backend_libs__c_util__du_functor_desc_binop_category_0_4
};

#line 825 "backend_libs.c_util.c"
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

#line 839 "backend_libs.c_util.c"
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

#line 856 "backend_libs.c_util.c"
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

#line 873 "backend_libs.c_util.c"
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

#line 890 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_0 = {
  (MR_String) "literal_c",
  (MR_Integer) 0
};

#line 896 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_1 = {
  (MR_String) "literal_java",
  (MR_Integer) 1
};

#line 902 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_2 = {
  (MR_String) "literal_csharp",
  (MR_Integer) 2
};

#line 908 "backend_libs.c_util.c"
static const MR_EnumFunctorDescPtr backend_libs__c_util__backend_libs__c_util__enum_value_ordered_literal_language_0[3] = {
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_0,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_1,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_2
};

#line 915 "backend_libs.c_util.c"
static const MR_EnumFunctorDescPtr backend_libs__c_util__backend_libs__c_util__enum_name_ordered_literal_language_0[3] = {
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_0,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_2,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_1
};

#line 922 "backend_libs.c_util.c"
static const MR_Integer backend_libs__c_util__backend_libs__c_util__functor_number_map_literal_language_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 929 "backend_libs.c_util.c"
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

#line 946 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_maybe_set_line_numbers_0_0 = {
  (MR_String) "dont_set_line_numbers",
  (MR_Integer) 0
};

#line 952 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_maybe_set_line_numbers_0_1 = {
  (MR_String) "set_line_numbers",
  (MR_Integer) 1
};

#line 958 "backend_libs.c_util.c"
static const MR_EnumFunctorDescPtr backend_libs__c_util__backend_libs__c_util__enum_value_ordered_maybe_set_line_numbers_0[2] = {
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_maybe_set_line_numbers_0_0,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_maybe_set_line_numbers_0_1
};

#line 964 "backend_libs.c_util.c"
static const MR_EnumFunctorDescPtr backend_libs__c_util__backend_libs__c_util__enum_name_ordered_maybe_set_line_numbers_0[2] = {
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_maybe_set_line_numbers_0_0,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_maybe_set_line_numbers_0_1
};

#line 970 "backend_libs.c_util.c"
static const MR_Integer backend_libs__c_util__backend_libs__c_util__functor_number_map_maybe_set_line_numbers_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 976 "backend_libs.c_util.c"
const MR_TypeCtorInfo_Struct backend_libs__c_util__backend_libs__c_util__type_ctor_info_maybe_set_line_numbers_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 993 "backend_libs.c_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__c_util__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1001 "backend_libs.c_util.c"
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

#line 1018 "backend_libs.c_util.c"
static MR_bool MR_CALL 
backend_libs__c_util____Unify____binop_category_0_0_10001(
#line 1021 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 1023 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2)
#line 1025 "backend_libs.c_util.c"
{
#line 1027 "backend_libs.c_util.c"
  {
#line 1029 "backend_libs.c_util.c"
    MR_bool backend_libs__c_util__succeeded;

#line 1032 "backend_libs.c_util.c"
    {
#line 1034 "backend_libs.c_util.c"
      backend_libs__c_util__succeeded = backend_libs__c_util____Unify____binop_category_0_0(((MR_Word) backend_libs__c_util__wrapper_arg_1), ((MR_Word) backend_libs__c_util__wrapper_arg_2));
    }
#line 1037 "backend_libs.c_util.c"
    return backend_libs__c_util__succeeded;
#line 1039 "backend_libs.c_util.c"
  }
#line 1041 "backend_libs.c_util.c"
}

#line 1044 "backend_libs.c_util.c"
static void MR_CALL 
backend_libs__c_util____Compare____binop_category_0_0_10001(
#line 1047 "backend_libs.c_util.c"
  MR_Box * backend_libs__c_util__wrapper_arg_1,
#line 1049 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2,
#line 1051 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_3)
#line 1053 "backend_libs.c_util.c"
{
#line 1055 "backend_libs.c_util.c"
  {
#line 1057 "backend_libs.c_util.c"
    MR_Word backend_libs__c_util__conv0_HeadVar__1_1;

#line 1060 "backend_libs.c_util.c"
    {
#line 1062 "backend_libs.c_util.c"
      backend_libs__c_util____Compare____binop_category_0_0(&backend_libs__c_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__c_util__wrapper_arg_2), ((MR_Word) backend_libs__c_util__wrapper_arg_3));
    }
#line 1065 "backend_libs.c_util.c"
    *backend_libs__c_util__wrapper_arg_1 = ((MR_Box) (backend_libs__c_util__conv0_HeadVar__1_1));
#line 1067 "backend_libs.c_util.c"
  }
#line 1069 "backend_libs.c_util.c"
}

#line 1072 "backend_libs.c_util.c"
static MR_bool MR_CALL 
backend_libs__c_util____Unify____literal_language_0_0_10001(
#line 1075 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 1077 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2)
#line 1079 "backend_libs.c_util.c"
{
#line 1081 "backend_libs.c_util.c"
  {
#line 1083 "backend_libs.c_util.c"
    MR_bool backend_libs__c_util__succeeded;

#line 1086 "backend_libs.c_util.c"
    {
#line 1088 "backend_libs.c_util.c"
      backend_libs__c_util__succeeded = backend_libs__c_util____Unify____literal_language_0_0(((MR_Word) backend_libs__c_util__wrapper_arg_1), ((MR_Word) backend_libs__c_util__wrapper_arg_2));
    }
#line 1091 "backend_libs.c_util.c"
    return backend_libs__c_util__succeeded;
#line 1093 "backend_libs.c_util.c"
  }
#line 1095 "backend_libs.c_util.c"
}

#line 1098 "backend_libs.c_util.c"
static void MR_CALL 
backend_libs__c_util____Compare____literal_language_0_0_10001(
#line 1101 "backend_libs.c_util.c"
  MR_Box * backend_libs__c_util__wrapper_arg_1,
#line 1103 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2,
#line 1105 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_3)
#line 1107 "backend_libs.c_util.c"
{
#line 1109 "backend_libs.c_util.c"
  {
#line 1111 "backend_libs.c_util.c"
    MR_Word backend_libs__c_util__conv0_HeadVar__1_1;

#line 1114 "backend_libs.c_util.c"
    {
#line 1116 "backend_libs.c_util.c"
      backend_libs__c_util____Compare____literal_language_0_0(&backend_libs__c_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__c_util__wrapper_arg_2), ((MR_Word) backend_libs__c_util__wrapper_arg_3));
    }
#line 1119 "backend_libs.c_util.c"
    *backend_libs__c_util__wrapper_arg_1 = ((MR_Box) (backend_libs__c_util__conv0_HeadVar__1_1));
#line 1121 "backend_libs.c_util.c"
  }
#line 1123 "backend_libs.c_util.c"
}

#line 1126 "backend_libs.c_util.c"
static MR_bool MR_CALL 
backend_libs__c_util____Unify____maybe_set_line_numbers_0_0_10001(
#line 1129 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 1131 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2)
#line 1133 "backend_libs.c_util.c"
{
#line 1135 "backend_libs.c_util.c"
  {
#line 1137 "backend_libs.c_util.c"
    MR_bool backend_libs__c_util__succeeded;

#line 1140 "backend_libs.c_util.c"
    {
#line 1142 "backend_libs.c_util.c"
      backend_libs__c_util__succeeded = backend_libs__c_util____Unify____maybe_set_line_numbers_0_0(((MR_Word) backend_libs__c_util__wrapper_arg_1), ((MR_Word) backend_libs__c_util__wrapper_arg_2));
    }
#line 1145 "backend_libs.c_util.c"
    return backend_libs__c_util__succeeded;
#line 1147 "backend_libs.c_util.c"
  }
#line 1149 "backend_libs.c_util.c"
}

#line 1152 "backend_libs.c_util.c"
static void MR_CALL 
backend_libs__c_util____Compare____maybe_set_line_numbers_0_0_10001(
#line 1155 "backend_libs.c_util.c"
  MR_Box * backend_libs__c_util__wrapper_arg_1,
#line 1157 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2,
#line 1159 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_3)
#line 1161 "backend_libs.c_util.c"
{
#line 1163 "backend_libs.c_util.c"
  {
#line 1165 "backend_libs.c_util.c"
    MR_Word backend_libs__c_util__conv0_HeadVar__1_1;

#line 1168 "backend_libs.c_util.c"
    {
#line 1170 "backend_libs.c_util.c"
      backend_libs__c_util____Compare____maybe_set_line_numbers_0_0(&backend_libs__c_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__c_util__wrapper_arg_2), ((MR_Word) backend_libs__c_util__wrapper_arg_3));
    }
#line 1173 "backend_libs.c_util.c"
    *backend_libs__c_util__wrapper_arg_1 = ((MR_Box) (backend_libs__c_util__conv0_HeadVar__1_1));
#line 1175 "backend_libs.c_util.c"
  }
#line 1177 "backend_libs.c_util.c"
}

#line 1180 "backend_libs.c_util.c"
static MR_bool MR_CALL 
backend_libs__c_util____Unify____multi_string_0_0_10001(
#line 1183 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 1185 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2)
#line 1187 "backend_libs.c_util.c"
{
#line 1189 "backend_libs.c_util.c"
  {
#line 1191 "backend_libs.c_util.c"
    MR_bool backend_libs__c_util__succeeded;

#line 1194 "backend_libs.c_util.c"
    {
#line 1196 "backend_libs.c_util.c"
      backend_libs__c_util__succeeded = backend_libs__c_util____Unify____multi_string_0_0(((MR_Word) backend_libs__c_util__wrapper_arg_1), ((MR_Word) backend_libs__c_util__wrapper_arg_2));
    }
#line 1199 "backend_libs.c_util.c"
    return backend_libs__c_util__succeeded;
#line 1201 "backend_libs.c_util.c"
  }
#line 1203 "backend_libs.c_util.c"
}

#line 1206 "backend_libs.c_util.c"
static void MR_CALL 
backend_libs__c_util____Compare____multi_string_0_0_10001(
#line 1209 "backend_libs.c_util.c"
  MR_Box * backend_libs__c_util__wrapper_arg_1,
#line 1211 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2,
#line 1213 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_3)
#line 1215 "backend_libs.c_util.c"
{
#line 1217 "backend_libs.c_util.c"
  {
#line 1219 "backend_libs.c_util.c"
    MR_Word backend_libs__c_util__conv0_HeadVar__1_1;

#line 1222 "backend_libs.c_util.c"
    {
#line 1224 "backend_libs.c_util.c"
      backend_libs__c_util____Compare____multi_string_0_0(&backend_libs__c_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__c_util__wrapper_arg_2), ((MR_Word) backend_libs__c_util__wrapper_arg_3));
    }
#line 1227 "backend_libs.c_util.c"
    *backend_libs__c_util__wrapper_arg_1 = ((MR_Box) (backend_libs__c_util__conv0_HeadVar__1_1));
#line 1229 "backend_libs.c_util.c"
  }
#line 1231 "backend_libs.c_util.c"
}

#line 583 "c_util.m"
static void MR_CALL 
backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_p_0(
#line 583 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__1_1,
#line 583 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__2_2,
#line 583 "c_util.m"
  MR_Word * backend_libs__c_util__L_3)
#line 583 "c_util.m"
{
#line 585 "c_util.m"
  while (MR_TRUE)
#line 585 "c_util.m"
    {
#line 585 "c_util.m"
      /* tailcall optimized into a loop */
#line 585 "c_util.m"
      {
#line 585 "c_util.m"
        MR_bool backend_libs__c_util__succeeded;

#line 585 "c_util.m"
        if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 585 "c_util.m"
          *backend_libs__c_util__L_3 = backend_libs__c_util__HeadVar__2_2;
#line 585 "c_util.m"
        else
#line 586 "c_util.m"
          {
#line 586 "c_util.m"
            MR_Box backend_libs__c_util__X_5 = (MR_hl_field(MR_mktag(1), backend_libs__c_util__HeadVar__1_1, (MR_Integer) 0));
#line 586 "c_util.m"
            MR_Word backend_libs__c_util__Xs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__c_util__HeadVar__1_1, (MR_Integer) 1)));
#line 586 "c_util.m"
            MR_Word backend_libs__c_util__V_9_9;

#line 587 "c_util.m"
            {
#line 587 "c_util.m"
              backend_libs__c_util__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 587 "c_util.m"
              MR_hl_field(MR_mktag(1), backend_libs__c_util__V_9_9, 0) = backend_libs__c_util__X_5;
#line 587 "c_util.m"
              MR_hl_field(MR_mktag(1), backend_libs__c_util__V_9_9, 1) = ((MR_Box) (backend_libs__c_util__HeadVar__2_2));
#line 587 "c_util.m"
            }
#line 587 "c_util.m"
            /* direct tailcall eliminated */
#line 587 "c_util.m"
            {
#line 587 "c_util.m"
              MR_Word backend_libs__c_util__HeadVar__1__tmp_copy_1 = backend_libs__c_util__Xs_6;
#line 587 "c_util.m"
              MR_Word backend_libs__c_util__HeadVar__2__tmp_copy_2 = backend_libs__c_util__V_9_9;

#line 587 "c_util.m"
              backend_libs__c_util__HeadVar__2_2 = backend_libs__c_util__HeadVar__2__tmp_copy_2;
#line 587 "c_util.m"
              backend_libs__c_util__HeadVar__1_1 = backend_libs__c_util__HeadVar__1__tmp_copy_1;
#line 587 "c_util.m"
            }
#line 587 "c_util.m"
            continue;
#line 586 "c_util.m"
          }
#line 585 "c_util.m"
      }
#line 585 "c_util.m"
      break;
#line 585 "c_util.m"
    }
#line 583 "c_util.m"
}

#line 481 "c_util.m"
static void MR_CALL 
backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0_1(
#line 481 "c_util.m"
  MR_Box backend_libs__c_util__closure_arg,
#line 481 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 481 "c_util.m"
  MR_Box * backend_libs__c_util__wrapper_arg_2)
#line 481 "c_util.m"
{
#line 481 "c_util.m"
  {
#line 481 "c_util.m"
    MR_Box backend_libs__c_util__closure = backend_libs__c_util__closure_arg;
#line 481 "c_util.m"
    MR_Word backend_libs__c_util__conv0_EscapeCodeChars_4;

#line 481 "c_util.m"
    {
#line 481 "c_util.m"
      backend_libs__c_util__octal_escape_any_int_2_p_0(((MR_Integer) backend_libs__c_util__wrapper_arg_1), &backend_libs__c_util__conv0_EscapeCodeChars_4);
    }
#line 481 "c_util.m"
    *backend_libs__c_util__wrapper_arg_2 = ((MR_Box) (backend_libs__c_util__conv0_EscapeCodeChars_4));
#line 481 "c_util.m"
  }
#line 481 "c_util.m"
}

#line 430 "c_util.m"
static MR_String MR_CALL 
backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0(
#line 430 "c_util.m"
  MR_Char backend_libs__c_util__Char_5)
#line 430 "c_util.m"
{
#line 435 "c_util.m"
  {
#line 435 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 435 "c_util.m"
    MR_String backend_libs__c_util__QuotedCharStr_6;
#line 435 "c_util.m"
    MR_Word backend_libs__c_util__RevQuotedCharStr_7;
#line 435 "c_util.m"
    MR_Word backend_libs__c_util__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 460 "c_util.m"
    MR_Char backend_libs__c_util__EscapeChar_14;

#line 552 "c_util.m"
#line 552 "c_util.m"
    switch (backend_libs__c_util__Char_5) {
#line 552 "c_util.m"
      default:
#line 552 "c_util.m"
        backend_libs__c_util__succeeded = MR_FALSE;
#line 552 "c_util.m"
        break;
#line 552 "c_util.m"
      case (MR_Char) 7:
#line 558 "c_util.m"
        {
#line 558 "c_util.m"
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 97;
#line 558 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 558 "c_util.m"
        }
#line 552 "c_util.m"
        break;
#line 552 "c_util.m"
      case (MR_Char) 8:
#line 557 "c_util.m"
        {
#line 557 "c_util.m"
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 98;
#line 557 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 557 "c_util.m"
        }
#line 552 "c_util.m"
        break;
#line 552 "c_util.m"
      case (MR_Char) 9:
#line 556 "c_util.m"
        {
#line 556 "c_util.m"
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 116;
#line 556 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 556 "c_util.m"
        }
#line 552 "c_util.m"
        break;
#line 552 "c_util.m"
      case (MR_Char) 10:
#line 555 "c_util.m"
        {
#line 555 "c_util.m"
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 110;
#line 555 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 555 "c_util.m"
        }
#line 552 "c_util.m"
        break;
#line 552 "c_util.m"
      case (MR_Char) 11:
#line 559 "c_util.m"
        {
#line 559 "c_util.m"
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 118;
#line 559 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 559 "c_util.m"
        }
#line 552 "c_util.m"
        break;
#line 552 "c_util.m"
      case (MR_Char) 12:
#line 561 "c_util.m"
        {
#line 561 "c_util.m"
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 102;
#line 561 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 561 "c_util.m"
        }
#line 552 "c_util.m"
        break;
#line 552 "c_util.m"
      case (MR_Char) 13:
#line 560 "c_util.m"
        {
#line 560 "c_util.m"
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 114;
#line 560 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 560 "c_util.m"
        }
#line 552 "c_util.m"
        break;
#line 552 "c_util.m"
      case (MR_Char) 34:
#line 552 "c_util.m"
        {
#line 552 "c_util.m"
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 34;
#line 552 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 552 "c_util.m"
        }
#line 552 "c_util.m"
        break;
#line 552 "c_util.m"
      case (MR_Char) 39:
#line 553 "c_util.m"
        {
#line 553 "c_util.m"
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 39;
#line 553 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 553 "c_util.m"
        }
#line 552 "c_util.m"
        break;
#line 552 "c_util.m"
      case (MR_Char) 92:
#line 554 "c_util.m"
        {
#line 554 "c_util.m"
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 92;
#line 554 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 554 "c_util.m"
        }
#line 552 "c_util.m"
        break;
#line 552 "c_util.m"
    }
#line 460 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 459 "c_util.m"
      {
#line 459 "c_util.m"
        {
#line 459 "c_util.m"
          backend_libs__c_util__RevQuotedCharStr_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "c_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_7, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__EscapeChar_14));
#line 459 "c_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[7])));
#line 459 "c_util.m"
        }
#line 459 "c_util.m"
      }
#line 460 "c_util.m"
    else
#line 466 "c_util.m"
      {
#line 462 "c_util.m"
        backend_libs__c_util__succeeded = (backend_libs__c_util__Char_5 == (MR_Char) 63);
#line 466 "c_util.m"
        if (backend_libs__c_util__succeeded)
#line 465 "c_util.m"
          {
#line 465 "c_util.m"
            backend_libs__c_util__RevQuotedCharStr_7 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[13]);
#line 465 "c_util.m"
          }
#line 466 "c_util.m"
        else
#line 470 "c_util.m"
          {
#line 569 "c_util.m"
            {
#line 569 "c_util.m"
              backend_libs__c_util__succeeded = mercury__char__is_alnum_1_p_0(backend_libs__c_util__Char_5);
            }
#line 569 "c_util.m"
            if (!(backend_libs__c_util__succeeded))
#line 570 "c_util.m"
              {
#line 570 "c_util.m"
                {
#line 570 "c_util.m"
                  backend_libs__c_util__succeeded = mercury__string__contains_char_2_p_0((MR_String) " !\"#%&\'()*+,-./:;<=>\?[\\]^_{|}~", backend_libs__c_util__Char_5);
                }
#line 570 "c_util.m"
              }
#line 470 "c_util.m"
            if (backend_libs__c_util__succeeded)
#line 469 "c_util.m"
              {
#line 469 "c_util.m"
                backend_libs__c_util__RevQuotedCharStr_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "c_util.m"
                MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_7, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__Char_5));
#line 469 "c_util.m"
                MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_7, 1) = ((MR_Box) (backend_libs__c_util__V_8_8));
#line 469 "c_util.m"
              }
#line 470 "c_util.m"
            else
#line 474 "c_util.m"
              {
#line 471 "c_util.m"
                {
#line 471 "c_util.m"
                  backend_libs__c_util__succeeded = mercury__char__to_int_2_p_1(backend_libs__c_util__Char_5, (MR_Integer) 0);
                }
#line 474 "c_util.m"
                if (backend_libs__c_util__succeeded)
#line 473 "c_util.m"
                  {
#line 473 "c_util.m"
                    backend_libs__c_util__RevQuotedCharStr_7 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[8]);
#line 473 "c_util.m"
                  }
#line 474 "c_util.m"
                else
#line 494 "c_util.m"
                  {
#line 475 "c_util.m"
                    MR_Integer backend_libs__c_util__Int_15;

#line 475 "c_util.m"
                    {
#line 475 "c_util.m"
                      backend_libs__c_util__Int_15 = mercury__char__to_int_1_f_0(backend_libs__c_util__Char_5);
                    }
#line 476 "c_util.m"
                    backend_libs__c_util__succeeded = (backend_libs__c_util__Int_15 >= (MR_Integer) 128);
#line 494 "c_util.m"
                    if (backend_libs__c_util__succeeded)
#line 487 "c_util.m"
                      {
#line 487 "c_util.m"
                        MR_Word backend_libs__c_util__CodeUnits_16;

#line 480 "c_util.m"
                        {
#line 480 "c_util.m"
                          backend_libs__c_util__succeeded = mercury__char__to_utf8_2_p_0(backend_libs__c_util__Char_5, &backend_libs__c_util__CodeUnits_16);
                        }
#line 487 "c_util.m"
                        if (backend_libs__c_util__succeeded)
#line 481 "c_util.m"
                          {
#line 481 "c_util.m"
                            MR_Word backend_libs__c_util__EscapeCharss_17;
#line 481 "c_util.m"
                            MR_Word backend_libs__c_util__EscapeChars_18;

#line 481 "c_util.m"
                            {
#line 481 "c_util.m"
                              mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__c_util_scalar_common_1[0], (MR_Word) &backend_libs__c_util_scalar_common_3[3], backend_libs__c_util__CodeUnits_16, &backend_libs__c_util__EscapeCharss_17);
                            }
#line 482 "c_util.m"
                            {
#line 482 "c_util.m"
                              mercury__list__condense_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, backend_libs__c_util__EscapeCharss_17, &backend_libs__c_util__EscapeChars_18);
                            }
#line 483 "c_util.m"
                            {
#line 483 "c_util.m"
                              backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_p_0(backend_libs__c_util__EscapeChars_18, backend_libs__c_util__V_8_8, &backend_libs__c_util__RevQuotedCharStr_7);
                            }
#line 481 "c_util.m"
                          }
#line 487 "c_util.m"
                        else
#line 485 "c_util.m"
                          {
#line 485 "c_util.m"
                            {
#line 485 "c_util.m"
                              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.c_util", (MR_String) "predicate \140backend_libs.c_util.quote_one_char\'/4", (MR_String) "invalid Unicode code point");
                            }
#line 485 "c_util.m"
                          }
#line 487 "c_util.m"
                      }
#line 494 "c_util.m"
                    else
#line 504 "c_util.m"
                      {
#line 504 "c_util.m"
                        MR_Word backend_libs__c_util__EscapeChars_33;
#line 504 "c_util.m"
                        MR_Integer backend_libs__c_util__Int_45;

#line 596 "c_util.m"
                        {
#line 596 "c_util.m"
                          mercury__char__to_int_2_p_0(backend_libs__c_util__Char_5, &backend_libs__c_util__Int_45);
                        }
#line 597 "c_util.m"
                        {
#line 597 "c_util.m"
                          backend_libs__c_util__octal_escape_any_int_2_p_0(backend_libs__c_util__Int_45, &backend_libs__c_util__EscapeChars_33);
                        }
#line 505 "c_util.m"
                        {
#line 505 "c_util.m"
                          backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_p_0(backend_libs__c_util__EscapeChars_33, backend_libs__c_util__V_8_8, &backend_libs__c_util__RevQuotedCharStr_7);
                        }
#line 504 "c_util.m"
                      }
#line 494 "c_util.m"
                  }
#line 474 "c_util.m"
              }
#line 470 "c_util.m"
          }
#line 466 "c_util.m"
      }
#line 437 "c_util.m"
    {
#line 437 "c_util.m"
      mercury__string__from_rev_char_list_2_p_0(backend_libs__c_util__RevQuotedCharStr_7, &backend_libs__c_util__QuotedCharStr_6);
    }
#line 435 "c_util.m"
    return backend_libs__c_util__QuotedCharStr_6;
#line 435 "c_util.m"
  }
#line 430 "c_util.m"
}

#line 114 "c_util.m"
void MR_CALL 
backend_libs__c_util____Compare____multi_string_0_0(
#line 114 "c_util.m"
  MR_Word * backend_libs__c_util__HeadVar__1_1,
#line 114 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__2_2,
#line 114 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__3_3)
#line 114 "c_util.m"
{
#line 114 "c_util.m"
  {
#line 114 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 114 "c_util.m"
    MR_Word backend_libs__c_util__Cast_HeadVar1_4 = backend_libs__c_util__HeadVar__2_2;
#line 114 "c_util.m"
    MR_Word backend_libs__c_util__Cast_HeadVar2_5 = backend_libs__c_util__HeadVar__3_3;

#line 114 "c_util.m"
    {
#line 114 "c_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__c_util_scalar_common_1[1], backend_libs__c_util__HeadVar__1_1, ((MR_Box) (backend_libs__c_util__Cast_HeadVar1_4)), ((MR_Box) (backend_libs__c_util__Cast_HeadVar2_5)));
#line 114 "c_util.m"
      return;
    }
#line 114 "c_util.m"
  }
#line 114 "c_util.m"
}

#line 114 "c_util.m"
MR_bool MR_CALL 
backend_libs__c_util____Unify____multi_string_0_0(
#line 114 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__1_1,
#line 114 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__2_2)
#line 114 "c_util.m"
{
#line 114 "c_util.m"
  {
#line 114 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 114 "c_util.m"
    MR_Word backend_libs__c_util__Cast_HeadVar1_3 = backend_libs__c_util__HeadVar__1_1;
#line 114 "c_util.m"
    MR_Word backend_libs__c_util__Cast_HeadVar2_4 = backend_libs__c_util__HeadVar__2_2;

#line 114 "c_util.m"
    {
#line 114 "c_util.m"
      return backend_libs__c_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__c_util_scalar_common_1[1], ((MR_Box) (backend_libs__c_util__Cast_HeadVar1_3)), ((MR_Box) (backend_libs__c_util__Cast_HeadVar2_4)));
    }
#line 114 "c_util.m"
    return backend_libs__c_util__succeeded;
#line 114 "c_util.m"
  }
#line 114 "c_util.m"
}

#line 40 "c_util.m"
void MR_CALL 
backend_libs__c_util____Compare____maybe_set_line_numbers_0_0(
#line 40 "c_util.m"
  MR_Word * backend_libs__c_util__HeadVar__1_1,
#line 40 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__2_2,
#line 40 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__3_3)
#line 40 "c_util.m"
{
#line 40 "c_util.m"
  {
#line 40 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 40 "c_util.m"
    MR_Integer backend_libs__c_util__Cast_HeadVar1_4 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;
#line 40 "c_util.m"
    MR_Integer backend_libs__c_util__Cast_HeadVar2_5 = (MR_Integer) backend_libs__c_util__HeadVar__3_3;

#line 40 "c_util.m"
    {
#line 40 "c_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__Cast_HeadVar1_4, backend_libs__c_util__Cast_HeadVar2_5);
#line 40 "c_util.m"
      return;
    }
#line 40 "c_util.m"
  }
#line 40 "c_util.m"
}

#line 40 "c_util.m"
MR_bool MR_CALL 
backend_libs__c_util____Unify____maybe_set_line_numbers_0_0(
#line 40 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__2_1,
#line 40 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__2_2)
#line 40 "c_util.m"
{
#line 1783 "backend_libs.c_util.c"
  {
#line 1785 "backend_libs.c_util.c"
    MR_bool backend_libs__c_util__succeeded = (backend_libs__c_util__HeadVar__2_1 == backend_libs__c_util__HeadVar__2_2);

#line 1788 "backend_libs.c_util.c"
    return backend_libs__c_util__succeeded;
#line 1790 "backend_libs.c_util.c"
  }
#line 40 "c_util.m"
}

#line 90 "c_util.m"
void MR_CALL 
backend_libs__c_util____Compare____literal_language_0_0(
#line 90 "c_util.m"
  MR_Word * backend_libs__c_util__HeadVar__1_1,
#line 90 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__2_2,
#line 90 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__3_3)
#line 90 "c_util.m"
{
#line 90 "c_util.m"
  {
#line 90 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 90 "c_util.m"
    MR_Integer backend_libs__c_util__Cast_HeadVar1_4 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;
#line 90 "c_util.m"
    MR_Integer backend_libs__c_util__Cast_HeadVar2_5 = (MR_Integer) backend_libs__c_util__HeadVar__3_3;

#line 90 "c_util.m"
    {
#line 90 "c_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__Cast_HeadVar1_4, backend_libs__c_util__Cast_HeadVar2_5);
#line 90 "c_util.m"
      return;
    }
#line 90 "c_util.m"
  }
#line 90 "c_util.m"
}

#line 90 "c_util.m"
MR_bool MR_CALL 
backend_libs__c_util____Unify____literal_language_0_0(
#line 90 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__2_1,
#line 90 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__2_2)
#line 90 "c_util.m"
{
#line 1836 "backend_libs.c_util.c"
  {
#line 1838 "backend_libs.c_util.c"
    MR_bool backend_libs__c_util__succeeded = (backend_libs__c_util__HeadVar__2_1 == backend_libs__c_util__HeadVar__2_2);

#line 1841 "backend_libs.c_util.c"
    return backend_libs__c_util__succeeded;
#line 1843 "backend_libs.c_util.c"
  }
#line 90 "c_util.m"
}

#line 177 "c_util.m"
void MR_CALL 
backend_libs__c_util____Compare____binop_category_0_0(
#line 177 "c_util.m"
  MR_Word * backend_libs__c_util__HeadVar__1_1,
#line 177 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__2_2,
#line 177 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__3_3)
#line 177 "c_util.m"
{
#line 177 "c_util.m"
  {
#line 177 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 177 "c_util.m"
    MR_Integer backend_libs__c_util__CastX_30 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;
#line 177 "c_util.m"
    MR_Integer backend_libs__c_util__CastY_31 = (MR_Integer) backend_libs__c_util__HeadVar__3_3;

#line 177 "c_util.m"
    backend_libs__c_util__succeeded = (backend_libs__c_util__CastX_30 == backend_libs__c_util__CastY_31);
#line 177 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 1872 "backend_libs.c_util.c"
      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 0;
#line 177 "c_util.m"
    else
#line 177 "c_util.m"
#line 177 "c_util.m"
      switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__2_2)) {
#line 177 "c_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 177 "c_util.m"
        case (MR_Integer) 0:
#line 177 "c_util.m"
#line 177 "c_util.m"
          switch (MR_unmkbody(backend_libs__c_util__HeadVar__2_2)) {
#line 177 "c_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 177 "c_util.m"
            case (MR_Integer) 0:
#line 177 "c_util.m"
#line 177 "c_util.m"
              switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__3_3)) {
#line 177 "c_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 177 "c_util.m"
                case (MR_Integer) 0:
#line 177 "c_util.m"
#line 177 "c_util.m"
                  switch (MR_unmkbody(backend_libs__c_util__HeadVar__3_3)) {
#line 177 "c_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 177 "c_util.m"
                    case (MR_Integer) 0:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 0;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 1:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 2:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 3:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 4:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 5:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 6:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 7:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 8:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 9:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 10:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 11:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                  }
#line 177 "c_util.m"
                  break;
#line 177 "c_util.m"
                case (MR_Integer) 1:
#line 1980 "backend_libs.c_util.c"
                  *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                  break;
#line 177 "c_util.m"
              }
#line 177 "c_util.m"
              break;
#line 177 "c_util.m"
            case (MR_Integer) 1:
#line 177 "c_util.m"
#line 177 "c_util.m"
              switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__3_3)) {
#line 177 "c_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 177 "c_util.m"
                case (MR_Integer) 0:
#line 177 "c_util.m"
#line 177 "c_util.m"
                  switch (MR_unmkbody(backend_libs__c_util__HeadVar__3_3)) {
#line 177 "c_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 177 "c_util.m"
                    case (MR_Integer) 0:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 1:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 0;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 2:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 3:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 4:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 5:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 6:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 7:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 8:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 9:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 10:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 11:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                  }
#line 177 "c_util.m"
                  break;
#line 177 "c_util.m"
                case (MR_Integer) 1:
#line 2080 "backend_libs.c_util.c"
                  *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                  break;
#line 177 "c_util.m"
              }
#line 177 "c_util.m"
              break;
#line 177 "c_util.m"
            case (MR_Integer) 2:
#line 177 "c_util.m"
#line 177 "c_util.m"
              switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__3_3)) {
#line 177 "c_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 177 "c_util.m"
                case (MR_Integer) 0:
#line 177 "c_util.m"
#line 177 "c_util.m"
                  switch (MR_unmkbody(backend_libs__c_util__HeadVar__3_3)) {
#line 177 "c_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 177 "c_util.m"
                    case (MR_Integer) 0:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 1:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 2:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 0;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 3:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 4:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 5:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 6:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 7:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 8:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 9:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 10:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 11:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                  }
#line 177 "c_util.m"
                  break;
#line 177 "c_util.m"
                case (MR_Integer) 1:
#line 2180 "backend_libs.c_util.c"
                  *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                  break;
#line 177 "c_util.m"
              }
#line 177 "c_util.m"
              break;
#line 177 "c_util.m"
            case (MR_Integer) 3:
#line 177 "c_util.m"
#line 177 "c_util.m"
              switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__3_3)) {
#line 177 "c_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 177 "c_util.m"
                case (MR_Integer) 0:
#line 177 "c_util.m"
#line 177 "c_util.m"
                  switch (MR_unmkbody(backend_libs__c_util__HeadVar__3_3)) {
#line 177 "c_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 177 "c_util.m"
                    case (MR_Integer) 0:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 1:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 2:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 3:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 0;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 4:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 5:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 6:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 7:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 8:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 9:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 10:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 11:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                  }
#line 177 "c_util.m"
                  break;
#line 177 "c_util.m"
                case (MR_Integer) 1:
#line 2280 "backend_libs.c_util.c"
                  *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                  break;
#line 177 "c_util.m"
              }
#line 177 "c_util.m"
              break;
#line 177 "c_util.m"
            case (MR_Integer) 4:
#line 177 "c_util.m"
#line 177 "c_util.m"
              switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__3_3)) {
#line 177 "c_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 177 "c_util.m"
                case (MR_Integer) 0:
#line 177 "c_util.m"
#line 177 "c_util.m"
                  switch (MR_unmkbody(backend_libs__c_util__HeadVar__3_3)) {
#line 177 "c_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 177 "c_util.m"
                    case (MR_Integer) 0:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 1:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 2:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 3:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 4:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 0;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 5:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 6:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 7:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 8:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 9:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 10:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 11:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                  }
#line 177 "c_util.m"
                  break;
#line 177 "c_util.m"
                case (MR_Integer) 1:
#line 2380 "backend_libs.c_util.c"
                  *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                  break;
#line 177 "c_util.m"
              }
#line 177 "c_util.m"
              break;
#line 177 "c_util.m"
            case (MR_Integer) 5:
#line 177 "c_util.m"
#line 177 "c_util.m"
              switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__3_3)) {
#line 177 "c_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 177 "c_util.m"
                case (MR_Integer) 0:
#line 177 "c_util.m"
#line 177 "c_util.m"
                  switch (MR_unmkbody(backend_libs__c_util__HeadVar__3_3)) {
#line 177 "c_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 177 "c_util.m"
                    case (MR_Integer) 0:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 1:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 2:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 3:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 4:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 5:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 0;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 6:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 7:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 8:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 9:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 10:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 11:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                  }
#line 177 "c_util.m"
                  break;
#line 177 "c_util.m"
                case (MR_Integer) 1:
#line 2480 "backend_libs.c_util.c"
                  *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                  break;
#line 177 "c_util.m"
              }
#line 177 "c_util.m"
              break;
#line 177 "c_util.m"
            case (MR_Integer) 6:
#line 177 "c_util.m"
#line 177 "c_util.m"
              switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__3_3)) {
#line 177 "c_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 177 "c_util.m"
                case (MR_Integer) 0:
#line 177 "c_util.m"
#line 177 "c_util.m"
                  switch (MR_unmkbody(backend_libs__c_util__HeadVar__3_3)) {
#line 177 "c_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 177 "c_util.m"
                    case (MR_Integer) 0:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 1:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 2:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 3:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 4:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 5:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 6:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 0;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 7:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 8:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 9:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 10:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 11:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                  }
#line 177 "c_util.m"
                  break;
#line 177 "c_util.m"
                case (MR_Integer) 1:
#line 2580 "backend_libs.c_util.c"
                  *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                  break;
#line 177 "c_util.m"
              }
#line 177 "c_util.m"
              break;
#line 177 "c_util.m"
            case (MR_Integer) 7:
#line 177 "c_util.m"
#line 177 "c_util.m"
              switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__3_3)) {
#line 177 "c_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 177 "c_util.m"
                case (MR_Integer) 0:
#line 177 "c_util.m"
#line 177 "c_util.m"
                  switch (MR_unmkbody(backend_libs__c_util__HeadVar__3_3)) {
#line 177 "c_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 177 "c_util.m"
                    case (MR_Integer) 0:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 1:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 2:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 3:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 4:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 5:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 6:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 7:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 0;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 8:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 9:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 10:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 11:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                  }
#line 177 "c_util.m"
                  break;
#line 177 "c_util.m"
                case (MR_Integer) 1:
#line 2680 "backend_libs.c_util.c"
                  *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                  break;
#line 177 "c_util.m"
              }
#line 177 "c_util.m"
              break;
#line 177 "c_util.m"
            case (MR_Integer) 8:
#line 177 "c_util.m"
#line 177 "c_util.m"
              switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__3_3)) {
#line 177 "c_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 177 "c_util.m"
                case (MR_Integer) 0:
#line 177 "c_util.m"
#line 177 "c_util.m"
                  switch (MR_unmkbody(backend_libs__c_util__HeadVar__3_3)) {
#line 177 "c_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 177 "c_util.m"
                    case (MR_Integer) 0:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 1:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 2:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 3:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 4:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 5:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 6:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 7:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 8:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 0;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 9:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 10:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 11:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                  }
#line 177 "c_util.m"
                  break;
#line 177 "c_util.m"
                case (MR_Integer) 1:
#line 2780 "backend_libs.c_util.c"
                  *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                  break;
#line 177 "c_util.m"
              }
#line 177 "c_util.m"
              break;
#line 177 "c_util.m"
            case (MR_Integer) 9:
#line 177 "c_util.m"
#line 177 "c_util.m"
              switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__3_3)) {
#line 177 "c_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 177 "c_util.m"
                case (MR_Integer) 0:
#line 177 "c_util.m"
#line 177 "c_util.m"
                  switch (MR_unmkbody(backend_libs__c_util__HeadVar__3_3)) {
#line 177 "c_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 177 "c_util.m"
                    case (MR_Integer) 0:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 1:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 2:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 3:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 4:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 5:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 6:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 7:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 8:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 9:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 0;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 10:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 11:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                  }
#line 177 "c_util.m"
                  break;
#line 177 "c_util.m"
                case (MR_Integer) 1:
#line 2880 "backend_libs.c_util.c"
                  *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                  break;
#line 177 "c_util.m"
              }
#line 177 "c_util.m"
              break;
#line 177 "c_util.m"
            case (MR_Integer) 10:
#line 177 "c_util.m"
#line 177 "c_util.m"
              switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__3_3)) {
#line 177 "c_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 177 "c_util.m"
                case (MR_Integer) 0:
#line 177 "c_util.m"
#line 177 "c_util.m"
                  switch (MR_unmkbody(backend_libs__c_util__HeadVar__3_3)) {
#line 177 "c_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 177 "c_util.m"
                    case (MR_Integer) 0:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 1:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 2:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 3:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 4:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 5:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 6:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 7:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 8:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 9:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 10:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 0;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 11:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                  }
#line 177 "c_util.m"
                  break;
#line 177 "c_util.m"
                case (MR_Integer) 1:
#line 2980 "backend_libs.c_util.c"
                  *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                  break;
#line 177 "c_util.m"
              }
#line 177 "c_util.m"
              break;
#line 177 "c_util.m"
            case (MR_Integer) 11:
#line 177 "c_util.m"
#line 177 "c_util.m"
              switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__3_3)) {
#line 177 "c_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 177 "c_util.m"
                case (MR_Integer) 0:
#line 177 "c_util.m"
#line 177 "c_util.m"
                  switch (MR_unmkbody(backend_libs__c_util__HeadVar__3_3)) {
#line 177 "c_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 177 "c_util.m"
                    case (MR_Integer) 0:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 1:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 2:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 3:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 4:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 5:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 6:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 7:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 8:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 9:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 10:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                    case (MR_Integer) 11:
#line 177 "c_util.m"
                      *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 0;
#line 177 "c_util.m"
                      break;
#line 177 "c_util.m"
                  }
#line 177 "c_util.m"
                  break;
#line 177 "c_util.m"
                case (MR_Integer) 1:
#line 3080 "backend_libs.c_util.c"
                  *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                  break;
#line 177 "c_util.m"
              }
#line 177 "c_util.m"
              break;
#line 177 "c_util.m"
          }
#line 177 "c_util.m"
          break;
#line 177 "c_util.m"
        case (MR_Integer) 1:
#line 177 "c_util.m"
          {
#line 177 "c_util.m"
            MR_Integer backend_libs__c_util__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__c_util__HeadVar__2_2, (MR_Integer) 0)));

#line 177 "c_util.m"
#line 177 "c_util.m"
            switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__3_3)) {
#line 177 "c_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 177 "c_util.m"
              case (MR_Integer) 0:
#line 177 "c_util.m"
#line 177 "c_util.m"
                switch (MR_unmkbody(backend_libs__c_util__HeadVar__3_3)) {
#line 177 "c_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 177 "c_util.m"
                  case (MR_Integer) 0:
#line 3113 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                    break;
#line 177 "c_util.m"
                  case (MR_Integer) 1:
#line 3119 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                    break;
#line 177 "c_util.m"
                  case (MR_Integer) 2:
#line 3125 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                    break;
#line 177 "c_util.m"
                  case (MR_Integer) 3:
#line 3131 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 2;
#line 177 "c_util.m"
                    break;
#line 177 "c_util.m"
                  case (MR_Integer) 4:
#line 3137 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                    break;
#line 177 "c_util.m"
                  case (MR_Integer) 5:
#line 3143 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                    break;
#line 177 "c_util.m"
                  case (MR_Integer) 6:
#line 3149 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                    break;
#line 177 "c_util.m"
                  case (MR_Integer) 7:
#line 3155 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                    break;
#line 177 "c_util.m"
                  case (MR_Integer) 8:
#line 3161 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                    break;
#line 177 "c_util.m"
                  case (MR_Integer) 9:
#line 3167 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                    break;
#line 177 "c_util.m"
                  case (MR_Integer) 10:
#line 3173 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                    break;
#line 177 "c_util.m"
                  case (MR_Integer) 11:
#line 3179 "backend_libs.c_util.c"
                    *backend_libs__c_util__HeadVar__1_1 = (MR_Integer) 1;
#line 177 "c_util.m"
                    break;
#line 177 "c_util.m"
                }
#line 177 "c_util.m"
                break;
#line 177 "c_util.m"
              case (MR_Integer) 1:
#line 177 "c_util.m"
                {
#line 177 "c_util.m"
                  MR_Integer backend_libs__c_util__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__c_util__HeadVar__3_3, (MR_Integer) 0)));

#line 177 "c_util.m"
                  {
#line 177 "c_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__V_33_33, backend_libs__c_util__V_13_13);
#line 177 "c_util.m"
                    return;
                  }
#line 177 "c_util.m"
                }
#line 177 "c_util.m"
                break;
#line 177 "c_util.m"
            }
#line 177 "c_util.m"
          }
#line 177 "c_util.m"
          break;
#line 177 "c_util.m"
      }
#line 177 "c_util.m"
  }
#line 177 "c_util.m"
}

#line 177 "c_util.m"
MR_bool MR_CALL 
backend_libs__c_util____Unify____binop_category_0_0(
#line 177 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__1_1,
#line 177 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__2_2)
#line 177 "c_util.m"
{
#line 177 "c_util.m"
  {
#line 177 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 177 "c_util.m"
    MR_Integer backend_libs__c_util__CastX_29 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
#line 177 "c_util.m"
    MR_Integer backend_libs__c_util__CastY_30 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

#line 177 "c_util.m"
    backend_libs__c_util__succeeded = (backend_libs__c_util__CastX_29 == backend_libs__c_util__CastY_30);
#line 177 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 177 "c_util.m"
      backend_libs__c_util__succeeded = MR_TRUE;
#line 177 "c_util.m"
    else
#line 177 "c_util.m"
#line 177 "c_util.m"
      switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__1_1)) {
#line 177 "c_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 177 "c_util.m"
        case (MR_Integer) 0:
#line 177 "c_util.m"
#line 177 "c_util.m"
          switch (MR_unmkbody(backend_libs__c_util__HeadVar__1_1)) {
#line 177 "c_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 177 "c_util.m"
            case (MR_Integer) 0:
#line 177 "c_util.m"
              {
#line 177 "c_util.m"
                MR_Integer backend_libs__c_util__CastX_3 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
#line 177 "c_util.m"
                MR_Integer backend_libs__c_util__CastY_4 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

#line 177 "c_util.m"
                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_4 == backend_libs__c_util__CastX_3);
#line 177 "c_util.m"
              }
#line 177 "c_util.m"
              break;
#line 177 "c_util.m"
            case (MR_Integer) 1:
#line 177 "c_util.m"
              {
#line 177 "c_util.m"
                MR_Integer backend_libs__c_util__CastX_5 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
#line 177 "c_util.m"
                MR_Integer backend_libs__c_util__CastY_6 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

#line 177 "c_util.m"
                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_6 == backend_libs__c_util__CastX_5);
#line 177 "c_util.m"
              }
#line 177 "c_util.m"
              break;
#line 177 "c_util.m"
            case (MR_Integer) 2:
#line 177 "c_util.m"
              {
#line 177 "c_util.m"
                MR_Integer backend_libs__c_util__CastX_7 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
#line 177 "c_util.m"
                MR_Integer backend_libs__c_util__CastY_8 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

#line 177 "c_util.m"
                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_8 == backend_libs__c_util__CastX_7);
#line 177 "c_util.m"
              }
#line 177 "c_util.m"
              break;
#line 177 "c_util.m"
            case (MR_Integer) 3:
#line 177 "c_util.m"
              {
#line 177 "c_util.m"
                MR_Integer backend_libs__c_util__CastX_9 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
#line 177 "c_util.m"
                MR_Integer backend_libs__c_util__CastY_10 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

#line 177 "c_util.m"
                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_10 == backend_libs__c_util__CastX_9);
#line 177 "c_util.m"
              }
#line 177 "c_util.m"
              break;
#line 177 "c_util.m"
            case (MR_Integer) 4:
#line 177 "c_util.m"
              {
#line 177 "c_util.m"
                MR_Integer backend_libs__c_util__CastX_13 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
#line 177 "c_util.m"
                MR_Integer backend_libs__c_util__CastY_14 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

#line 177 "c_util.m"
                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_14 == backend_libs__c_util__CastX_13);
#line 177 "c_util.m"
              }
#line 177 "c_util.m"
              break;
#line 177 "c_util.m"
            case (MR_Integer) 5:
#line 177 "c_util.m"
              {
#line 177 "c_util.m"
                MR_Integer backend_libs__c_util__CastX_15 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
#line 177 "c_util.m"
                MR_Integer backend_libs__c_util__CastY_16 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

#line 177 "c_util.m"
                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_16 == backend_libs__c_util__CastX_15);
#line 177 "c_util.m"
              }
#line 177 "c_util.m"
              break;
#line 177 "c_util.m"
            case (MR_Integer) 6:
#line 177 "c_util.m"
              {
#line 177 "c_util.m"
                MR_Integer backend_libs__c_util__CastX_17 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
#line 177 "c_util.m"
                MR_Integer backend_libs__c_util__CastY_18 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

#line 177 "c_util.m"
                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_18 == backend_libs__c_util__CastX_17);
#line 177 "c_util.m"
              }
#line 177 "c_util.m"
              break;
#line 177 "c_util.m"
            case (MR_Integer) 7:
#line 177 "c_util.m"
              {
#line 177 "c_util.m"
                MR_Integer backend_libs__c_util__CastX_19 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
#line 177 "c_util.m"
                MR_Integer backend_libs__c_util__CastY_20 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

#line 177 "c_util.m"
                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_20 == backend_libs__c_util__CastX_19);
#line 177 "c_util.m"
              }
#line 177 "c_util.m"
              break;
#line 177 "c_util.m"
            case (MR_Integer) 8:
#line 177 "c_util.m"
              {
#line 177 "c_util.m"
                MR_Integer backend_libs__c_util__CastX_21 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
#line 177 "c_util.m"
                MR_Integer backend_libs__c_util__CastY_22 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

#line 177 "c_util.m"
                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_22 == backend_libs__c_util__CastX_21);
#line 177 "c_util.m"
              }
#line 177 "c_util.m"
              break;
#line 177 "c_util.m"
            case (MR_Integer) 9:
#line 177 "c_util.m"
              {
#line 177 "c_util.m"
                MR_Integer backend_libs__c_util__CastX_23 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
#line 177 "c_util.m"
                MR_Integer backend_libs__c_util__CastY_24 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

#line 177 "c_util.m"
                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_24 == backend_libs__c_util__CastX_23);
#line 177 "c_util.m"
              }
#line 177 "c_util.m"
              break;
#line 177 "c_util.m"
            case (MR_Integer) 10:
#line 177 "c_util.m"
              {
#line 177 "c_util.m"
                MR_Integer backend_libs__c_util__CastX_25 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
#line 177 "c_util.m"
                MR_Integer backend_libs__c_util__CastY_26 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

#line 177 "c_util.m"
                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_26 == backend_libs__c_util__CastX_25);
#line 177 "c_util.m"
              }
#line 177 "c_util.m"
              break;
#line 177 "c_util.m"
            case (MR_Integer) 11:
#line 177 "c_util.m"
              {
#line 177 "c_util.m"
                MR_Integer backend_libs__c_util__CastX_27 = (MR_Integer) backend_libs__c_util__HeadVar__1_1;
#line 177 "c_util.m"
                MR_Integer backend_libs__c_util__CastY_28 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;

#line 177 "c_util.m"
                backend_libs__c_util__succeeded = (backend_libs__c_util__CastY_28 == backend_libs__c_util__CastX_27);
#line 177 "c_util.m"
              }
#line 177 "c_util.m"
              break;
#line 177 "c_util.m"
          }
#line 177 "c_util.m"
          break;
#line 177 "c_util.m"
        case (MR_Integer) 1:
#line 177 "c_util.m"
          {
#line 177 "c_util.m"
            MR_Integer backend_libs__c_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__c_util__HeadVar__1_1, (MR_Integer) 0)));
#line 177 "c_util.m"
            MR_Integer backend_libs__c_util__V_12_12;

#line 177 "c_util.m"
            backend_libs__c_util__succeeded = ((MR_tag((MR_Word) backend_libs__c_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 177 "c_util.m"
            if (backend_libs__c_util__succeeded)
#line 177 "c_util.m"
              {
#line 177 "c_util.m"
                backend_libs__c_util__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__c_util__HeadVar__2_2, (MR_Integer) 0)));
#line 3457 "backend_libs.c_util.c"
                backend_libs__c_util__succeeded = (backend_libs__c_util__V_11_11 == backend_libs__c_util__V_12_12);
#line 177 "c_util.m"
              }
#line 177 "c_util.m"
          }
#line 177 "c_util.m"
          break;
#line 177 "c_util.m"
      }
#line 177 "c_util.m"
    return backend_libs__c_util__succeeded;
#line 177 "c_util.m"
  }
#line 177 "c_util.m"
}

#line 599 "c_util.m"
static void MR_CALL 
backend_libs__c_util__octal_escape_any_int_2_p_0(
#line 599 "c_util.m"
  MR_Integer backend_libs__c_util__Int_3,
#line 599 "c_util.m"
  MR_Word * backend_libs__c_util__EscapeCodeChars_4)
#line 599 "c_util.m"
{
#line 601 "c_util.m"
  {
#line 601 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 601 "c_util.m"
    MR_String backend_libs__c_util__OctalString0_5;
#line 601 "c_util.m"
    MR_String backend_libs__c_util__OctalString_6;
#line 601 "c_util.m"
    MR_Word backend_libs__c_util__V_11_11;

#line 602 "c_util.m"
    {
#line 602 "c_util.m"
      mercury__string__int_to_base_string_3_p_0(backend_libs__c_util__Int_3, (MR_Integer) 8, &backend_libs__c_util__OctalString0_5);
    }
#line 603 "c_util.m"
    {
#line 603 "c_util.m"
      mercury__string__pad_left_4_p_0(backend_libs__c_util__OctalString0_5, (MR_Char) 48, (MR_Integer) 3, &backend_libs__c_util__OctalString_6);
    }
#line 604 "c_util.m"
    {
#line 604 "c_util.m"
      backend_libs__c_util__V_11_11 = mercury__string__to_char_list_1_f_0(backend_libs__c_util__OctalString_6);
    }
#line 604 "c_util.m"
    {
#line 604 "c_util.m"
      MR_Word base;
#line 604 "c_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "c_util.m"
      *backend_libs__c_util__EscapeCodeChars_4 = base;
#line 604 "c_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
#line 604 "c_util.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__c_util__V_11_11));
#line 604 "c_util.m"
    }
#line 601 "c_util.m"
  }
#line 599 "c_util.m"
}

#line 534 "c_util.m"
static void MR_CALL 
backend_libs__c_util__quote_one_char_c_3_p_0_1(
#line 534 "c_util.m"
  MR_Box backend_libs__c_util__closure_arg,
#line 534 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 534 "c_util.m"
  MR_Box * backend_libs__c_util__wrapper_arg_2)
#line 534 "c_util.m"
{
#line 534 "c_util.m"
  {
#line 534 "c_util.m"
    MR_Box backend_libs__c_util__closure = backend_libs__c_util__closure_arg;
#line 534 "c_util.m"
    MR_Word backend_libs__c_util__conv0_EscapeCodeChars_4;

#line 534 "c_util.m"
    {
#line 534 "c_util.m"
      backend_libs__c_util__octal_escape_any_int_2_p_0(((MR_Integer) backend_libs__c_util__wrapper_arg_1), &backend_libs__c_util__conv0_EscapeCodeChars_4);
    }
#line 534 "c_util.m"
    *backend_libs__c_util__wrapper_arg_2 = ((MR_Box) (backend_libs__c_util__conv0_EscapeCodeChars_4));
#line 534 "c_util.m"
  }
#line 534 "c_util.m"
}

#line 508 "c_util.m"
static void MR_CALL 
backend_libs__c_util__quote_one_char_c_3_p_0(
#line 508 "c_util.m"
  MR_Char backend_libs__c_util__Char_4,
#line 508 "c_util.m"
  MR_Word backend_libs__c_util__RevChars0_5,
#line 508 "c_util.m"
  MR_Word * backend_libs__c_util__RevChars_6)
#line 508 "c_util.m"
{
#line 516 "c_util.m"
  {
#line 516 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 516 "c_util.m"
    MR_Char backend_libs__c_util__EscapeChar_7;

#line 552 "c_util.m"
#line 552 "c_util.m"
    switch (backend_libs__c_util__Char_4) {
#line 552 "c_util.m"
      default:
#line 552 "c_util.m"
        backend_libs__c_util__succeeded = MR_FALSE;
#line 552 "c_util.m"
        break;
#line 552 "c_util.m"
      case (MR_Char) 7:
#line 558 "c_util.m"
        {
#line 558 "c_util.m"
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 97;
#line 558 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 558 "c_util.m"
        }
#line 552 "c_util.m"
        break;
#line 552 "c_util.m"
      case (MR_Char) 8:
#line 557 "c_util.m"
        {
#line 557 "c_util.m"
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 98;
#line 557 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 557 "c_util.m"
        }
#line 552 "c_util.m"
        break;
#line 552 "c_util.m"
      case (MR_Char) 9:
#line 556 "c_util.m"
        {
#line 556 "c_util.m"
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 116;
#line 556 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 556 "c_util.m"
        }
#line 552 "c_util.m"
        break;
#line 552 "c_util.m"
      case (MR_Char) 10:
#line 555 "c_util.m"
        {
#line 555 "c_util.m"
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 110;
#line 555 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 555 "c_util.m"
        }
#line 552 "c_util.m"
        break;
#line 552 "c_util.m"
      case (MR_Char) 11:
#line 559 "c_util.m"
        {
#line 559 "c_util.m"
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 118;
#line 559 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 559 "c_util.m"
        }
#line 552 "c_util.m"
        break;
#line 552 "c_util.m"
      case (MR_Char) 12:
#line 561 "c_util.m"
        {
#line 561 "c_util.m"
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 102;
#line 561 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 561 "c_util.m"
        }
#line 552 "c_util.m"
        break;
#line 552 "c_util.m"
      case (MR_Char) 13:
#line 560 "c_util.m"
        {
#line 560 "c_util.m"
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 114;
#line 560 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 560 "c_util.m"
        }
#line 552 "c_util.m"
        break;
#line 552 "c_util.m"
      case (MR_Char) 34:
#line 552 "c_util.m"
        {
#line 552 "c_util.m"
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 34;
#line 552 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 552 "c_util.m"
        }
#line 552 "c_util.m"
        break;
#line 552 "c_util.m"
      case (MR_Char) 39:
#line 553 "c_util.m"
        {
#line 553 "c_util.m"
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 39;
#line 553 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 553 "c_util.m"
        }
#line 552 "c_util.m"
        break;
#line 552 "c_util.m"
      case (MR_Char) 92:
#line 554 "c_util.m"
        {
#line 554 "c_util.m"
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 92;
#line 554 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 554 "c_util.m"
        }
#line 552 "c_util.m"
        break;
#line 552 "c_util.m"
    }
#line 516 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 515 "c_util.m"
      {
#line 515 "c_util.m"
        MR_Word backend_libs__c_util__V_12_12;

#line 515 "c_util.m"
        {
#line 515 "c_util.m"
          backend_libs__c_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "c_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__c_util__V_12_12, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
#line 515 "c_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__c_util__V_12_12, 1) = ((MR_Box) (backend_libs__c_util__RevChars0_5));
#line 515 "c_util.m"
        }
#line 515 "c_util.m"
        {
#line 515 "c_util.m"
          MR_Word base;
#line 515 "c_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "c_util.m"
          *backend_libs__c_util__RevChars_6 = base;
#line 515 "c_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__EscapeChar_7));
#line 515 "c_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__c_util__V_12_12));
#line 515 "c_util.m"
        }
#line 515 "c_util.m"
      }
#line 516 "c_util.m"
    else
#line 521 "c_util.m"
      {
#line 517 "c_util.m"
        backend_libs__c_util__succeeded = (backend_libs__c_util__Char_4 == (MR_Char) 63);
#line 521 "c_util.m"
        if (backend_libs__c_util__succeeded)
#line 520 "c_util.m"
          {
#line 520 "c_util.m"
            MR_Word backend_libs__c_util__V_15_15;

#line 520 "c_util.m"
            {
#line 520 "c_util.m"
              backend_libs__c_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "c_util.m"
              MR_hl_field(MR_mktag(1), backend_libs__c_util__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
#line 520 "c_util.m"
              MR_hl_field(MR_mktag(1), backend_libs__c_util__V_15_15, 1) = ((MR_Box) (backend_libs__c_util__RevChars0_5));
#line 520 "c_util.m"
            }
#line 520 "c_util.m"
            {
#line 520 "c_util.m"
              MR_Word base;
#line 520 "c_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "c_util.m"
              *backend_libs__c_util__RevChars_6 = base;
#line 520 "c_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) ((MR_Char) 63));
#line 520 "c_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__c_util__V_15_15));
#line 520 "c_util.m"
            }
#line 520 "c_util.m"
          }
#line 521 "c_util.m"
        else
#line 525 "c_util.m"
          {
#line 569 "c_util.m"
            {
#line 569 "c_util.m"
              backend_libs__c_util__succeeded = mercury__char__is_alnum_1_p_0(backend_libs__c_util__Char_4);
            }
#line 569 "c_util.m"
            if (!(backend_libs__c_util__succeeded))
#line 570 "c_util.m"
              {
#line 570 "c_util.m"
                {
#line 570 "c_util.m"
                  backend_libs__c_util__succeeded = mercury__string__contains_char_2_p_0((MR_String) " !\"#%&\'()*+,-./:;<=>\?[\\]^_{|}~", backend_libs__c_util__Char_4);
                }
#line 570 "c_util.m"
              }
#line 525 "c_util.m"
            if (backend_libs__c_util__succeeded)
#line 524 "c_util.m"
              {
#line 524 "c_util.m"
                MR_Word base;
#line 524 "c_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "c_util.m"
                *backend_libs__c_util__RevChars_6 = base;
#line 524 "c_util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__Char_4));
#line 524 "c_util.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__c_util__RevChars0_5));
#line 524 "c_util.m"
              }
#line 525 "c_util.m"
            else
#line 529 "c_util.m"
              {
#line 526 "c_util.m"
                {
#line 526 "c_util.m"
                  backend_libs__c_util__succeeded = mercury__char__to_int_2_p_1(backend_libs__c_util__Char_4, (MR_Integer) 0);
                }
#line 529 "c_util.m"
                if (backend_libs__c_util__succeeded)
#line 528 "c_util.m"
                  {
#line 528 "c_util.m"
                    MR_Word backend_libs__c_util__V_19_19;

#line 528 "c_util.m"
                    {
#line 528 "c_util.m"
                      backend_libs__c_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 528 "c_util.m"
                      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
#line 528 "c_util.m"
                      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_19_19, 1) = ((MR_Box) (backend_libs__c_util__RevChars0_5));
#line 528 "c_util.m"
                    }
#line 528 "c_util.m"
                    {
#line 528 "c_util.m"
                      MR_Word base;
#line 528 "c_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 528 "c_util.m"
                      *backend_libs__c_util__RevChars_6 = base;
#line 528 "c_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) ((MR_Char) 48));
#line 528 "c_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__c_util__V_19_19));
#line 528 "c_util.m"
                    }
#line 528 "c_util.m"
                  }
#line 529 "c_util.m"
                else
#line 540 "c_util.m"
                  {
#line 530 "c_util.m"
                    MR_Integer backend_libs__c_util__Int_8;

#line 530 "c_util.m"
                    {
#line 530 "c_util.m"
                      backend_libs__c_util__Int_8 = mercury__char__to_int_1_f_0(backend_libs__c_util__Char_4);
                    }
#line 531 "c_util.m"
                    backend_libs__c_util__succeeded = (backend_libs__c_util__Int_8 >= (MR_Integer) 128);
#line 540 "c_util.m"
                    if (backend_libs__c_util__succeeded)
#line 537 "c_util.m"
                      {
#line 537 "c_util.m"
                        MR_Word backend_libs__c_util__CodeUnits_9;

#line 533 "c_util.m"
                        {
#line 533 "c_util.m"
                          backend_libs__c_util__succeeded = mercury__char__to_utf8_2_p_0(backend_libs__c_util__Char_4, &backend_libs__c_util__CodeUnits_9);
                        }
#line 537 "c_util.m"
                        if (backend_libs__c_util__succeeded)
#line 534 "c_util.m"
                          {
#line 534 "c_util.m"
                            MR_Word backend_libs__c_util__EscapeCharss_10;
#line 534 "c_util.m"
                            MR_Word backend_libs__c_util__EscapeChars_11;

#line 534 "c_util.m"
                            {
#line 534 "c_util.m"
                              mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__c_util_scalar_common_1[0], (MR_Word) &backend_libs__c_util_scalar_common_3[2], backend_libs__c_util__CodeUnits_9, &backend_libs__c_util__EscapeCharss_10);
                            }
#line 535 "c_util.m"
                            {
#line 535 "c_util.m"
                              mercury__list__condense_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, backend_libs__c_util__EscapeCharss_10, &backend_libs__c_util__EscapeChars_11);
                            }
#line 536 "c_util.m"
                            {
#line 536 "c_util.m"
                              backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_p_0(backend_libs__c_util__EscapeChars_11, backend_libs__c_util__RevChars0_5, backend_libs__c_util__RevChars_6);
#line 536 "c_util.m"
                              return;
                            }
#line 534 "c_util.m"
                          }
#line 537 "c_util.m"
                        else
#line 538 "c_util.m"
                          {
#line 538 "c_util.m"
                            {
#line 538 "c_util.m"
                              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.c_util", (MR_String) "predicate \140backend_libs.c_util.quote_one_char_c\'/3", (MR_String) "invalid Unicode code point");
#line 538 "c_util.m"
                              return;
                            }
#line 538 "c_util.m"
                          }
#line 537 "c_util.m"
                      }
#line 540 "c_util.m"
                    else
#line 541 "c_util.m"
                      {
#line 541 "c_util.m"
                        MR_Word backend_libs__c_util__EscapeChars_26;
#line 541 "c_util.m"
                        MR_Integer backend_libs__c_util__Int_37;

#line 596 "c_util.m"
                        {
#line 596 "c_util.m"
                          mercury__char__to_int_2_p_0(backend_libs__c_util__Char_4, &backend_libs__c_util__Int_37);
                        }
#line 597 "c_util.m"
                        {
#line 597 "c_util.m"
                          backend_libs__c_util__octal_escape_any_int_2_p_0(backend_libs__c_util__Int_37, &backend_libs__c_util__EscapeChars_26);
                        }
#line 542 "c_util.m"
                        {
#line 542 "c_util.m"
                          backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_p_0(backend_libs__c_util__EscapeChars_26, backend_libs__c_util__RevChars0_5, backend_libs__c_util__RevChars_6);
#line 542 "c_util.m"
                          return;
                        }
#line 541 "c_util.m"
                      }
#line 540 "c_util.m"
                  }
#line 529 "c_util.m"
              }
#line 525 "c_util.m"
          }
#line 521 "c_util.m"
      }
#line 516 "c_util.m"
  }
#line 508 "c_util.m"
}

#line 481 "c_util.m"
static void MR_CALL 
backend_libs__c_util__output_quoted_char_lang_4_p_3_1(
#line 481 "c_util.m"
  MR_Box backend_libs__c_util__closure_arg,
#line 481 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 481 "c_util.m"
  MR_Box * backend_libs__c_util__wrapper_arg_2)
#line 481 "c_util.m"
{
#line 481 "c_util.m"
  {
#line 481 "c_util.m"
    MR_Box backend_libs__c_util__closure = backend_libs__c_util__closure_arg;
#line 481 "c_util.m"
    MR_Word backend_libs__c_util__conv0_EscapeCodeChars_4;

#line 481 "c_util.m"
    {
#line 481 "c_util.m"
      backend_libs__c_util__octal_escape_any_int_2_p_0(((MR_Integer) backend_libs__c_util__wrapper_arg_1), &backend_libs__c_util__conv0_EscapeCodeChars_4);
    }
#line 481 "c_util.m"
    *backend_libs__c_util__wrapper_arg_2 = ((MR_Box) (backend_libs__c_util__conv0_EscapeCodeChars_4));
#line 481 "c_util.m"
  }
#line 481 "c_util.m"
}

#line 421 "c_util.m"
static void MR_CALL 
backend_libs__c_util__output_quoted_char_lang_4_p_3(
#line 421 "c_util.m"
  MR_Word backend_libs__c_util__Lang_5,
#line 421 "c_util.m"
  MR_Char backend_libs__c_util__Char_6)
#line 421 "c_util.m"
{
#line 423 "c_util.m"
  {
#line 423 "c_util.m"
    MR_bool backend_libs__c_util__succeeded = (backend_libs__c_util__Lang_5 == (MR_Integer) 1);
#line 423 "c_util.m"
    MR_String backend_libs__c_util__EscapedCharStr_8;
#line 423 "c_util.m"
    MR_Word backend_libs__c_util__RevQuotedCharStr_15;
#line 423 "c_util.m"
    MR_Word backend_libs__c_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 456 "c_util.m"
    MR_Word backend_libs__c_util__RevEscapeChars_21;

#line 452 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 547 "c_util.m"
#line 547 "c_util.m"
      switch (backend_libs__c_util__Char_6) {
#line 547 "c_util.m"
        default:
#line 547 "c_util.m"
          backend_libs__c_util__succeeded = MR_FALSE;
#line 547 "c_util.m"
          break;
#line 547 "c_util.m"
        case (MR_Char) 7:
#line 547 "c_util.m"
          {
#line 547 "c_util.m"
            backend_libs__c_util__RevEscapeChars_21 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[10]);
#line 547 "c_util.m"
            backend_libs__c_util__succeeded = MR_TRUE;
#line 547 "c_util.m"
          }
#line 547 "c_util.m"
          break;
#line 547 "c_util.m"
        case (MR_Char) 11:
#line 548 "c_util.m"
          {
#line 548 "c_util.m"
            backend_libs__c_util__RevEscapeChars_21 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[12]);
#line 548 "c_util.m"
            backend_libs__c_util__succeeded = MR_TRUE;
#line 548 "c_util.m"
          }
#line 547 "c_util.m"
          break;
#line 547 "c_util.m"
      }
#line 456 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 455 "c_util.m"
      {
#line 455 "c_util.m"
        {
#line 455 "c_util.m"
          mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, backend_libs__c_util__RevEscapeChars_21, backend_libs__c_util__V_16_16, &backend_libs__c_util__RevQuotedCharStr_15);
        }
#line 455 "c_util.m"
      }
#line 456 "c_util.m"
    else
#line 460 "c_util.m"
      {
#line 460 "c_util.m"
        MR_Char backend_libs__c_util__EscapeChar_22;

#line 552 "c_util.m"
#line 552 "c_util.m"
        switch (backend_libs__c_util__Char_6) {
#line 552 "c_util.m"
          default:
#line 552 "c_util.m"
            backend_libs__c_util__succeeded = MR_FALSE;
#line 552 "c_util.m"
            break;
#line 552 "c_util.m"
          case (MR_Char) 7:
#line 558 "c_util.m"
            {
#line 558 "c_util.m"
              backend_libs__c_util__EscapeChar_22 = (MR_Char) 97;
#line 558 "c_util.m"
              backend_libs__c_util__succeeded = MR_TRUE;
#line 558 "c_util.m"
            }
#line 552 "c_util.m"
            break;
#line 552 "c_util.m"
          case (MR_Char) 8:
#line 557 "c_util.m"
            {
#line 557 "c_util.m"
              backend_libs__c_util__EscapeChar_22 = (MR_Char) 98;
#line 557 "c_util.m"
              backend_libs__c_util__succeeded = MR_TRUE;
#line 557 "c_util.m"
            }
#line 552 "c_util.m"
            break;
#line 552 "c_util.m"
          case (MR_Char) 9:
#line 556 "c_util.m"
            {
#line 556 "c_util.m"
              backend_libs__c_util__EscapeChar_22 = (MR_Char) 116;
#line 556 "c_util.m"
              backend_libs__c_util__succeeded = MR_TRUE;
#line 556 "c_util.m"
            }
#line 552 "c_util.m"
            break;
#line 552 "c_util.m"
          case (MR_Char) 10:
#line 555 "c_util.m"
            {
#line 555 "c_util.m"
              backend_libs__c_util__EscapeChar_22 = (MR_Char) 110;
#line 555 "c_util.m"
              backend_libs__c_util__succeeded = MR_TRUE;
#line 555 "c_util.m"
            }
#line 552 "c_util.m"
            break;
#line 552 "c_util.m"
          case (MR_Char) 11:
#line 559 "c_util.m"
            {
#line 559 "c_util.m"
              backend_libs__c_util__EscapeChar_22 = (MR_Char) 118;
#line 559 "c_util.m"
              backend_libs__c_util__succeeded = MR_TRUE;
#line 559 "c_util.m"
            }
#line 552 "c_util.m"
            break;
#line 552 "c_util.m"
          case (MR_Char) 12:
#line 561 "c_util.m"
            {
#line 561 "c_util.m"
              backend_libs__c_util__EscapeChar_22 = (MR_Char) 102;
#line 561 "c_util.m"
              backend_libs__c_util__succeeded = MR_TRUE;
#line 561 "c_util.m"
            }
#line 552 "c_util.m"
            break;
#line 552 "c_util.m"
          case (MR_Char) 13:
#line 560 "c_util.m"
            {
#line 560 "c_util.m"
              backend_libs__c_util__EscapeChar_22 = (MR_Char) 114;
#line 560 "c_util.m"
              backend_libs__c_util__succeeded = MR_TRUE;
#line 560 "c_util.m"
            }
#line 552 "c_util.m"
            break;
#line 552 "c_util.m"
          case (MR_Char) 34:
#line 552 "c_util.m"
            {
#line 552 "c_util.m"
              backend_libs__c_util__EscapeChar_22 = (MR_Char) 34;
#line 552 "c_util.m"
              backend_libs__c_util__succeeded = MR_TRUE;
#line 552 "c_util.m"
            }
#line 552 "c_util.m"
            break;
#line 552 "c_util.m"
          case (MR_Char) 39:
#line 553 "c_util.m"
            {
#line 553 "c_util.m"
              backend_libs__c_util__EscapeChar_22 = (MR_Char) 39;
#line 553 "c_util.m"
              backend_libs__c_util__succeeded = MR_TRUE;
#line 553 "c_util.m"
            }
#line 552 "c_util.m"
            break;
#line 552 "c_util.m"
          case (MR_Char) 92:
#line 554 "c_util.m"
            {
#line 554 "c_util.m"
              backend_libs__c_util__EscapeChar_22 = (MR_Char) 92;
#line 554 "c_util.m"
              backend_libs__c_util__succeeded = MR_TRUE;
#line 554 "c_util.m"
            }
#line 552 "c_util.m"
            break;
#line 552 "c_util.m"
        }
#line 460 "c_util.m"
        if (backend_libs__c_util__succeeded)
#line 459 "c_util.m"
          {
#line 459 "c_util.m"
            {
#line 459 "c_util.m"
              backend_libs__c_util__RevQuotedCharStr_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "c_util.m"
              MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_15, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__EscapeChar_22));
#line 459 "c_util.m"
              MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[7])));
#line 459 "c_util.m"
            }
#line 459 "c_util.m"
          }
#line 460 "c_util.m"
        else
#line 466 "c_util.m"
          {
#line 461 "c_util.m"
            backend_libs__c_util__succeeded = (backend_libs__c_util__Lang_5 == (MR_Integer) 0);
#line 461 "c_util.m"
            if (backend_libs__c_util__succeeded)
#line 462 "c_util.m"
              backend_libs__c_util__succeeded = (backend_libs__c_util__Char_6 == (MR_Char) 63);
#line 466 "c_util.m"
            if (backend_libs__c_util__succeeded)
#line 465 "c_util.m"
              {
#line 465 "c_util.m"
                backend_libs__c_util__RevQuotedCharStr_15 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[13]);
#line 465 "c_util.m"
              }
#line 466 "c_util.m"
            else
#line 470 "c_util.m"
              {
#line 569 "c_util.m"
                {
#line 569 "c_util.m"
                  backend_libs__c_util__succeeded = mercury__char__is_alnum_1_p_0(backend_libs__c_util__Char_6);
                }
#line 569 "c_util.m"
                if (!(backend_libs__c_util__succeeded))
#line 570 "c_util.m"
                  {
#line 570 "c_util.m"
                    {
#line 570 "c_util.m"
                      backend_libs__c_util__succeeded = mercury__string__contains_char_2_p_0((MR_String) " !\"#%&\'()*+,-./:;<=>\?[\\]^_{|}~", backend_libs__c_util__Char_6);
                    }
#line 570 "c_util.m"
                  }
#line 470 "c_util.m"
                if (backend_libs__c_util__succeeded)
#line 469 "c_util.m"
                  {
#line 469 "c_util.m"
                    backend_libs__c_util__RevQuotedCharStr_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "c_util.m"
                    MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_15, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__Char_6));
#line 469 "c_util.m"
                    MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_15, 1) = ((MR_Box) (backend_libs__c_util__V_16_16));
#line 469 "c_util.m"
                  }
#line 470 "c_util.m"
                else
#line 474 "c_util.m"
                  {
#line 471 "c_util.m"
                    {
#line 471 "c_util.m"
                      backend_libs__c_util__succeeded = mercury__char__to_int_2_p_1(backend_libs__c_util__Char_6, (MR_Integer) 0);
                    }
#line 474 "c_util.m"
                    if (backend_libs__c_util__succeeded)
#line 473 "c_util.m"
                      {
#line 473 "c_util.m"
                        backend_libs__c_util__RevQuotedCharStr_15 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[8]);
#line 473 "c_util.m"
                      }
#line 474 "c_util.m"
                    else
#line 494 "c_util.m"
                      {
#line 475 "c_util.m"
                        MR_Integer backend_libs__c_util__Int_23;

#line 475 "c_util.m"
                        {
#line 475 "c_util.m"
                          backend_libs__c_util__Int_23 = mercury__char__to_int_1_f_0(backend_libs__c_util__Char_6);
                        }
#line 476 "c_util.m"
                        backend_libs__c_util__succeeded = (backend_libs__c_util__Int_23 >= (MR_Integer) 128);
#line 494 "c_util.m"
                        if (backend_libs__c_util__succeeded)
#line 487 "c_util.m"
#line 487 "c_util.m"
                          switch (backend_libs__c_util__Lang_5) {
#line 487 "c_util.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 487 "c_util.m"
                            case (MR_Integer) 0:
#line 484 "c_util.m"
                              {
#line 484 "c_util.m"
                                MR_Word backend_libs__c_util__CodeUnits_24;

#line 480 "c_util.m"
                                {
#line 480 "c_util.m"
                                  backend_libs__c_util__succeeded = mercury__char__to_utf8_2_p_0(backend_libs__c_util__Char_6, &backend_libs__c_util__CodeUnits_24);
                                }
#line 484 "c_util.m"
                                if (backend_libs__c_util__succeeded)
#line 481 "c_util.m"
                                  {
#line 481 "c_util.m"
                                    MR_Word backend_libs__c_util__EscapeCharss_25;
#line 481 "c_util.m"
                                    MR_Word backend_libs__c_util__EscapeChars_26;

#line 481 "c_util.m"
                                    {
#line 481 "c_util.m"
                                      mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__c_util_scalar_common_1[0], (MR_Word) &backend_libs__c_util_scalar_common_3[1], backend_libs__c_util__CodeUnits_24, &backend_libs__c_util__EscapeCharss_25);
                                    }
#line 482 "c_util.m"
                                    {
#line 482 "c_util.m"
                                      mercury__list__condense_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, backend_libs__c_util__EscapeCharss_25, &backend_libs__c_util__EscapeChars_26);
                                    }
#line 483 "c_util.m"
                                    {
#line 483 "c_util.m"
                                      backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_p_0(backend_libs__c_util__EscapeChars_26, backend_libs__c_util__V_16_16, &backend_libs__c_util__RevQuotedCharStr_15);
                                    }
#line 481 "c_util.m"
                                  }
#line 484 "c_util.m"
                                else
#line 485 "c_util.m"
                                  {
#line 485 "c_util.m"
                                    {
#line 485 "c_util.m"
                                      mercury__require__unexpected_3_p_0((MR_String) "backend_libs.c_util", (MR_String) "predicate \140backend_libs.c_util.quote_one_char\'/4", (MR_String) "invalid Unicode code point");
#line 485 "c_util.m"
                                      return;
                                    }
#line 485 "c_util.m"
                                  }
#line 484 "c_util.m"
                              }
#line 487 "c_util.m"
                              break;
#line 487 "c_util.m"
                            case (MR_Integer) 2:
#line 492 "c_util.m"
                              {
#line 492 "c_util.m"
                                backend_libs__c_util__RevQuotedCharStr_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 492 "c_util.m"
                                MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_15, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__Char_6));
#line 492 "c_util.m"
                                MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_15, 1) = ((MR_Box) (backend_libs__c_util__V_16_16));
#line 492 "c_util.m"
                              }
#line 487 "c_util.m"
                              break;
#line 487 "c_util.m"
                            case (MR_Integer) 1:
#line 489 "c_util.m"
                              {
#line 489 "c_util.m"
                                backend_libs__c_util__RevQuotedCharStr_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 489 "c_util.m"
                                MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_15, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__Char_6));
#line 489 "c_util.m"
                                MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_15, 1) = ((MR_Box) (backend_libs__c_util__V_16_16));
#line 489 "c_util.m"
                              }
#line 487 "c_util.m"
                              break;
#line 487 "c_util.m"
                          }
#line 494 "c_util.m"
                        else
#line 504 "c_util.m"
                          {
#line 504 "c_util.m"
                            MR_Word backend_libs__c_util__EscapeChars_41;

#line 498 "c_util.m"
#line 498 "c_util.m"
                            switch (backend_libs__c_util__Lang_5) {
#line 498 "c_util.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 498 "c_util.m"
                              case (MR_Integer) 0:
#line 595 "c_util.m"
                                {
#line 595 "c_util.m"
                                  MR_Integer backend_libs__c_util__Int_69;

#line 596 "c_util.m"
                                  {
#line 596 "c_util.m"
                                    mercury__char__to_int_2_p_0(backend_libs__c_util__Char_6, &backend_libs__c_util__Int_69);
                                  }
#line 597 "c_util.m"
                                  {
#line 597 "c_util.m"
                                    backend_libs__c_util__octal_escape_any_int_2_p_0(backend_libs__c_util__Int_69, &backend_libs__c_util__EscapeChars_41);
                                  }
#line 595 "c_util.m"
                                }
#line 498 "c_util.m"
                                break;
#line 498 "c_util.m"
                              case (MR_Integer) 2:
#line 608 "c_util.m"
                                {
#line 608 "c_util.m"
                                  MR_Integer backend_libs__c_util__Int_72;
#line 608 "c_util.m"
                                  MR_String backend_libs__c_util__HexString_73;
#line 608 "c_util.m"
                                  MR_String backend_libs__c_util__V_78_78;

#line 609 "c_util.m"
                                  {
#line 609 "c_util.m"
                                    mercury__char__to_int_2_p_0(backend_libs__c_util__Char_6, &backend_libs__c_util__Int_72);
                                  }
#line 610 "c_util.m"
                                  {
#line 610 "c_util.m"
                                    mercury__string__format__format_unsigned_int_component_width_noprec_5_p_0((MR_Word) &backend_libs__c_util_scalar_common_4[1], (MR_Integer) 4, (MR_Integer) 2, backend_libs__c_util__Int_72, &backend_libs__c_util__V_78_78);
                                  }
#line 610 "c_util.m"
                                  {
#line 610 "c_util.m"
                                    backend_libs__c_util__HexString_73 = mercury__string__f_43_43_2_f_0((MR_String) "\\u", backend_libs__c_util__V_78_78);
                                  }
#line 611 "c_util.m"
                                  {
#line 611 "c_util.m"
                                    mercury__string__to_char_list_2_p_0(backend_libs__c_util__HexString_73, &backend_libs__c_util__EscapeChars_41);
                                  }
#line 608 "c_util.m"
                                }
#line 498 "c_util.m"
                                break;
#line 498 "c_util.m"
                              case (MR_Integer) 1:
#line 595 "c_util.m"
                                {
#line 595 "c_util.m"
                                  MR_Integer backend_libs__c_util__Int_90;

#line 596 "c_util.m"
                                  {
#line 596 "c_util.m"
                                    mercury__char__to_int_2_p_0(backend_libs__c_util__Char_6, &backend_libs__c_util__Int_90);
                                  }
#line 597 "c_util.m"
                                  {
#line 597 "c_util.m"
                                    backend_libs__c_util__octal_escape_any_int_2_p_0(backend_libs__c_util__Int_90, &backend_libs__c_util__EscapeChars_41);
                                  }
#line 595 "c_util.m"
                                }
#line 498 "c_util.m"
                                break;
#line 498 "c_util.m"
                            }
#line 505 "c_util.m"
                            {
#line 505 "c_util.m"
                              backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_p_0(backend_libs__c_util__EscapeChars_41, backend_libs__c_util__V_16_16, &backend_libs__c_util__RevQuotedCharStr_15);
                            }
#line 504 "c_util.m"
                          }
#line 494 "c_util.m"
                      }
#line 474 "c_util.m"
                  }
#line 470 "c_util.m"
              }
#line 466 "c_util.m"
          }
#line 460 "c_util.m"
      }
#line 437 "c_util.m"
    {
#line 437 "c_util.m"
      mercury__string__from_rev_char_list_2_p_0(backend_libs__c_util__RevQuotedCharStr_15, &backend_libs__c_util__EscapedCharStr_8);
    }
#line 425 "c_util.m"
    {
#line 425 "c_util.m"
      mercury__io__write_string_3_p_0(backend_libs__c_util__EscapedCharStr_8);
#line 425 "c_util.m"
      return;
    }
#line 423 "c_util.m"
  }
#line 421 "c_util.m"
}

#line 403 "c_util.m"
static void MR_CALL 
backend_libs__c_util__do_output_quoted_string_5_p_0(
#line 403 "c_util.m"
  MR_Word backend_libs__c_util__Lang_6,
#line 403 "c_util.m"
  MR_String backend_libs__c_util__S_7,
#line 403 "c_util.m"
  MR_Integer backend_libs__c_util__Cur_8)
#line 403 "c_util.m"
{
#line 410 "c_util.m"
  while (MR_TRUE)
#line 410 "c_util.m"
    {
#line 410 "c_util.m"
      /* tailcall optimized into a loop */
#line 410 "c_util.m"
      {
#line 410 "c_util.m"
        MR_bool backend_libs__c_util__succeeded;
#line 410 "c_util.m"
        MR_Integer backend_libs__c_util__Next_10;
#line 410 "c_util.m"
        MR_Char backend_libs__c_util__Char_11;

#line 407 "c_util.m"
        {
#line 407 "c_util.m"
          backend_libs__c_util__succeeded = mercury__string__unsafe_index_next_4_p_0(backend_libs__c_util__S_7, backend_libs__c_util__Cur_8, &backend_libs__c_util__Next_10, &backend_libs__c_util__Char_11);
        }
#line 410 "c_util.m"
        if (backend_libs__c_util__succeeded)
#line 408 "c_util.m"
          {
#line 408 "c_util.m"
            {
#line 408 "c_util.m"
              backend_libs__c_util__output_quoted_char_lang_4_p_3(backend_libs__c_util__Lang_6, backend_libs__c_util__Char_11);
            }
#line 409 "c_util.m"
            /* direct tailcall eliminated */
#line 409 "c_util.m"
            {
#line 409 "c_util.m"
              MR_Integer backend_libs__c_util__Cur__tmp_copy_8 = backend_libs__c_util__Next_10;

#line 409 "c_util.m"
              backend_libs__c_util__Cur_8 = backend_libs__c_util__Cur__tmp_copy_8;
#line 409 "c_util.m"
            }
#line 409 "c_util.m"
            continue;
#line 408 "c_util.m"
          }
#line 410 "c_util.m"
        else
#line 410 "c_util.m"
          {
#line 410 "c_util.m"
          }
#line 410 "c_util.m"
      }
#line 410 "c_util.m"
      break;
#line 410 "c_util.m"
    }
#line 403 "c_util.m"
}

#line 323 "c_util.m"
static void MR_CALL 
backend_libs__c_util__can_print_directly_4_p_0(
#line 323 "c_util.m"
  MR_String backend_libs__c_util__Str_1,
#line 323 "c_util.m"
  MR_Word * backend_libs__c_util__CanPrintDirectly_2)
#line 323 "c_util.m"
{
#line 327 "c_util.m"
  {
#line 327 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 330 "c_util.m"
{
#define MR_PROC_LABEL backend_libs__c_util__can_print_directly_4_p_0

	MR_String Str;
	MR_Word CanPrintDirectly;

	Str =  backend_libs__c_util__Str_1 ;
		{
#line 330 "c_util.m"
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
#line 4644 "backend_libs.c_util.c"

		;}
#undef MR_PROC_LABEL
	 *backend_libs__c_util__CanPrintDirectly_2  = CanPrintDirectly;
#line 330 "c_util.m"
}
#line 327 "c_util.m"
  }
#line 323 "c_util.m"
}

#line 223 "c_util.m"
MR_bool MR_CALL 
backend_libs__c_util__is_valid_c_identifier_1_p_0(
#line 223 "c_util.m"
  MR_String backend_libs__c_util__S_2)
#line 223 "c_util.m"
{
#line 827 "c_util.m"
  {
#line 827 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 827 "c_util.m"
    MR_Char backend_libs__c_util__Start_3;

#line 828 "c_util.m"
    {
#line 828 "c_util.m"
      backend_libs__c_util__succeeded = mercury__string__index_3_p_0(backend_libs__c_util__S_2, (MR_Integer) 0, &backend_libs__c_util__Start_3);
    }
#line 827 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 827 "c_util.m"
      {
#line 829 "c_util.m"
        {
#line 829 "c_util.m"
          backend_libs__c_util__succeeded = mercury__char__is_alpha_or_underscore_1_p_0(backend_libs__c_util__Start_3);
        }
#line 827 "c_util.m"
        if (backend_libs__c_util__succeeded)
#line 830 "c_util.m"
          {
#line 830 "c_util.m"
            return backend_libs__c_util__succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(backend_libs__c_util__S_2);
          }
#line 827 "c_util.m"
      }
#line 827 "c_util.m"
    return backend_libs__c_util__succeeded;
#line 827 "c_util.m"
  }
#line 223 "c_util.m"
}

#line 215 "c_util.m"
void MR_CALL 
backend_libs__c_util__output_pragma_pack_pop_2_p_0(void)
#line 215 "c_util.m"
{
#line 820 "c_util.m"
  {
#line 820 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 821 "c_util.m"
    {
#line 821 "c_util.m"
      mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_MSVC\n");
    }
#line 822 "c_util.m"
    {
#line 822 "c_util.m"
      mercury__io__write_string_3_p_0((MR_String) "#pragma pack(pop)\n");
    }
#line 823 "c_util.m"
    {
#line 823 "c_util.m"
      mercury__io__write_string_3_p_0((MR_String) "#endif\n");
#line 823 "c_util.m"
      return;
    }
#line 820 "c_util.m"
  }
#line 215 "c_util.m"
}

#line 213 "c_util.m"
void MR_CALL 
backend_libs__c_util__output_pragma_pack_push_2_p_0(void)
#line 213 "c_util.m"
{
#line 815 "c_util.m"
  {
#line 815 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 816 "c_util.m"
    {
#line 816 "c_util.m"
      mercury__io__write_string_3_p_0((MR_String) "\n#ifdef MR_MSVC\n");
    }
#line 817 "c_util.m"
    {
#line 817 "c_util.m"
      mercury__io__write_string_3_p_0((MR_String) "#pragma pack(push, MR_BYTES_PER_WORD)\n");
    }
#line 818 "c_util.m"
    {
#line 818 "c_util.m"
      mercury__io__write_string_3_p_0((MR_String) "#endif\n");
#line 818 "c_util.m"
      return;
    }
#line 815 "c_util.m"
  }
#line 213 "c_util.m"
}

#line 205 "c_util.m"
void MR_CALL 
backend_libs__c_util__output_c_file_intro_and_grade_6_p_0(
#line 205 "c_util.m"
  MR_Word backend_libs__c_util__Globals_7,
#line 205 "c_util.m"
  MR_String backend_libs__c_util__SourceFileName_8,
#line 205 "c_util.m"
  MR_String backend_libs__c_util__Version_9,
#line 205 "c_util.m"
  MR_String backend_libs__c_util__Fullarch_10)
#line 205 "c_util.m"
{
#line 771 "c_util.m"
  {
#line 771 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 771 "c_util.m"
    MR_Integer backend_libs__c_util__NumTagBits_12;
#line 771 "c_util.m"
    MR_String backend_libs__c_util__NumTagBitsStr_13;
#line 771 "c_util.m"
    MR_Word backend_libs__c_util__UnboxedFloat_14;
#line 771 "c_util.m"
    MR_String backend_libs__c_util__UnboxedFloatStr_15;
#line 771 "c_util.m"
    MR_Word backend_libs__c_util__PregeneratedDist_16;
#line 771 "c_util.m"
    MR_String backend_libs__c_util__PregeneratedDistStr_17;
#line 771 "c_util.m"
    MR_Word backend_libs__c_util__HighLevelCode_18;
#line 771 "c_util.m"
    MR_String backend_libs__c_util__HighLevelCodeStr_19;
#line 771 "c_util.m"
    MR_Word backend_libs__c_util__V_26_26;
#line 771 "c_util.m"
    MR_Word backend_libs__c_util__V_29_29;
#line 771 "c_util.m"
    MR_Word backend_libs__c_util__V_31_31;
#line 771 "c_util.m"
    MR_Word backend_libs__c_util__V_32_32;
#line 771 "c_util.m"
    MR_Word backend_libs__c_util__V_34_34;
#line 771 "c_util.m"
    MR_Word backend_libs__c_util__V_36_36;
#line 771 "c_util.m"
    MR_Word backend_libs__c_util__V_38_38;
#line 771 "c_util.m"
    MR_Word backend_libs__c_util__V_39_39;
#line 771 "c_util.m"
    MR_Word backend_libs__c_util__V_41_41;
#line 771 "c_util.m"
    MR_Word backend_libs__c_util__V_43_43;
#line 771 "c_util.m"
    MR_Word backend_libs__c_util__V_44_44;
#line 771 "c_util.m"
    MR_Word backend_libs__c_util__V_46_46;
#line 771 "c_util.m"
    MR_Word backend_libs__c_util__V_48_48;
#line 771 "c_util.m"
    MR_Word backend_libs__c_util__V_50_50;
#line 771 "c_util.m"
    MR_Word backend_libs__c_util__V_52_52;
#line 771 "c_util.m"
    MR_Word backend_libs__c_util__V_54_54;
#line 771 "c_util.m"
    MR_Word backend_libs__c_util__V_56_56;
#line 771 "c_util.m"
    MR_Word backend_libs__c_util__V_58_58;
#line 771 "c_util.m"
    MR_Word backend_libs__c_util__V_59_59;
#line 771 "c_util.m"
    MR_Word backend_libs__c_util__V_61_61;
#line 771 "c_util.m"
    MR_Word backend_libs__c_util__V_63_63;
#line 771 "c_util.m"
    MR_Word backend_libs__c_util__V_64_64;
#line 771 "c_util.m"
    MR_Word backend_libs__c_util__V_66_66;
#line 771 "c_util.m"
    MR_Word backend_libs__c_util__V_68_68;
#line 771 "c_util.m"
    MR_Word backend_libs__c_util__V_69_69;
#line 771 "c_util.m"
    MR_Word backend_libs__c_util__V_71_71;
#line 771 "c_util.m"
    MR_Word backend_libs__c_util__V_73_73;

#line 772 "c_util.m"
    {
#line 772 "c_util.m"
      libs__globals__lookup_int_option_3_p_0(backend_libs__c_util__Globals_7, (MR_Integer) 234, &backend_libs__c_util__NumTagBits_12);
    }
#line 773 "c_util.m"
    {
#line 773 "c_util.m"
      mercury__string__int_to_string_2_p_0(backend_libs__c_util__NumTagBits_12, &backend_libs__c_util__NumTagBitsStr_13);
    }
#line 774 "c_util.m"
    {
#line 774 "c_util.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__c_util__Globals_7, (MR_Integer) 240, &backend_libs__c_util__UnboxedFloat_14);
    }
#line 804 "c_util.m"
#line 804 "c_util.m"
    switch (backend_libs__c_util__UnboxedFloat_14) {
#line 804 "c_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 804 "c_util.m"
      case (MR_Integer) 0:
#line 804 "c_util.m"
        backend_libs__c_util__UnboxedFloatStr_15 = (MR_String) "no";
#line 804 "c_util.m"
        break;
#line 804 "c_util.m"
      case (MR_Integer) 1:
#line 805 "c_util.m"
        backend_libs__c_util__UnboxedFloatStr_15 = (MR_String) "yes";
#line 804 "c_util.m"
        break;
#line 804 "c_util.m"
    }
#line 776 "c_util.m"
    {
#line 776 "c_util.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__c_util__Globals_7, (MR_Integer) 220, &backend_libs__c_util__PregeneratedDist_16);
    }
#line 804 "c_util.m"
#line 804 "c_util.m"
    switch (backend_libs__c_util__PregeneratedDist_16) {
#line 804 "c_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 804 "c_util.m"
      case (MR_Integer) 0:
#line 804 "c_util.m"
        backend_libs__c_util__PregeneratedDistStr_17 = (MR_String) "no";
#line 804 "c_util.m"
        break;
#line 804 "c_util.m"
      case (MR_Integer) 1:
#line 805 "c_util.m"
        backend_libs__c_util__PregeneratedDistStr_17 = (MR_String) "yes";
#line 804 "c_util.m"
        break;
#line 804 "c_util.m"
    }
#line 778 "c_util.m"
    {
#line 778 "c_util.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__c_util__Globals_7, (MR_Integer) 251, &backend_libs__c_util__HighLevelCode_18);
    }
#line 804 "c_util.m"
#line 804 "c_util.m"
    switch (backend_libs__c_util__HighLevelCode_18) {
#line 804 "c_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 804 "c_util.m"
      case (MR_Integer) 0:
#line 804 "c_util.m"
        backend_libs__c_util__HighLevelCodeStr_19 = (MR_String) "no";
#line 804 "c_util.m"
        break;
#line 804 "c_util.m"
      case (MR_Integer) 1:
#line 805 "c_util.m"
        backend_libs__c_util__HighLevelCodeStr_19 = (MR_String) "yes";
#line 804 "c_util.m"
        break;
#line 804 "c_util.m"
    }
#line 795 "c_util.m"
    {
#line 795 "c_util.m"
      backend_libs__c_util__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 795 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_73_73, 0) = ((MR_Box) (backend_libs__c_util__HighLevelCodeStr_19));
#line 795 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[6])));
#line 795 "c_util.m"
    }
#line 795 "c_util.m"
    {
#line 795 "c_util.m"
      backend_libs__c_util__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 795 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_71_71, 0) = ((MR_Box) ((MR_String) "** HIGHLEVEL_CODE="));
#line 795 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_71_71, 1) = ((MR_Box) (backend_libs__c_util__V_73_73));
#line 795 "c_util.m"
    }
#line 794 "c_util.m"
    {
#line 794 "c_util.m"
      backend_libs__c_util__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_69_69, 0) = ((MR_Box) ((MR_String) "\n"));
#line 794 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_69_69, 1) = ((MR_Box) (backend_libs__c_util__V_71_71));
#line 794 "c_util.m"
    }
#line 794 "c_util.m"
    {
#line 794 "c_util.m"
      backend_libs__c_util__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_68_68, 0) = ((MR_Box) (backend_libs__c_util__PregeneratedDistStr_17));
#line 794 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_68_68, 1) = ((MR_Box) (backend_libs__c_util__V_69_69));
#line 794 "c_util.m"
    }
#line 794 "c_util.m"
    {
#line 794 "c_util.m"
      backend_libs__c_util__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_66_66, 0) = ((MR_Box) ((MR_String) "** PREGENERATED_DIST="));
#line 794 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_66_66, 1) = ((MR_Box) (backend_libs__c_util__V_68_68));
#line 794 "c_util.m"
    }
#line 793 "c_util.m"
    {
#line 793 "c_util.m"
      backend_libs__c_util__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 793 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_64_64, 0) = ((MR_Box) ((MR_String) "\n"));
#line 793 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_64_64, 1) = ((MR_Box) (backend_libs__c_util__V_66_66));
#line 793 "c_util.m"
    }
#line 793 "c_util.m"
    {
#line 793 "c_util.m"
      backend_libs__c_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 793 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_63_63, 0) = ((MR_Box) (backend_libs__c_util__UnboxedFloatStr_15));
#line 793 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_63_63, 1) = ((MR_Box) (backend_libs__c_util__V_64_64));
#line 793 "c_util.m"
    }
#line 793 "c_util.m"
    {
#line 793 "c_util.m"
      backend_libs__c_util__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 793 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_61_61, 0) = ((MR_Box) ((MR_String) "** UNBOXED_FLOAT="));
#line 793 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_61_61, 1) = ((MR_Box) (backend_libs__c_util__V_63_63));
#line 793 "c_util.m"
    }
#line 792 "c_util.m"
    {
#line 792 "c_util.m"
      backend_libs__c_util__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_59_59, 0) = ((MR_Box) ((MR_String) "\n"));
#line 792 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_59_59, 1) = ((MR_Box) (backend_libs__c_util__V_61_61));
#line 792 "c_util.m"
    }
#line 792 "c_util.m"
    {
#line 792 "c_util.m"
      backend_libs__c_util__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_58_58, 0) = ((MR_Box) (backend_libs__c_util__NumTagBitsStr_13));
#line 792 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_58_58, 1) = ((MR_Box) (backend_libs__c_util__V_59_59));
#line 792 "c_util.m"
    }
#line 792 "c_util.m"
    {
#line 792 "c_util.m"
      backend_libs__c_util__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_56_56, 0) = ((MR_Box) ((MR_String) "** TAG_BITS="));
#line 792 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_56_56, 1) = ((MR_Box) (backend_libs__c_util__V_58_58));
#line 792 "c_util.m"
    }
#line 791 "c_util.m"
    {
#line 791 "c_util.m"
      backend_libs__c_util__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_54_54, 0) = ((MR_Box) ((MR_String) "**\n"));
#line 791 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_54_54, 1) = ((MR_Box) (backend_libs__c_util__V_56_56));
#line 791 "c_util.m"
    }
#line 790 "c_util.m"
    {
#line 790 "c_util.m"
      backend_libs__c_util__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 790 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_52_52, 0) = ((MR_Box) ((MR_String) "** the generation of this C file were\n"));
#line 790 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_52_52, 1) = ((MR_Box) (backend_libs__c_util__V_54_54));
#line 790 "c_util.m"
    }
#line 789 "c_util.m"
    {
#line 789 "c_util.m"
      backend_libs__c_util__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_50_50, 0) = ((MR_Box) ((MR_String) "** The autoconfigured grade settings governing\n"));
#line 789 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_50_50, 1) = ((MR_Box) (backend_libs__c_util__V_52_52));
#line 789 "c_util.m"
    }
#line 788 "c_util.m"
    {
#line 788 "c_util.m"
      backend_libs__c_util__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 788 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_48_48, 0) = ((MR_Box) ((MR_String) "**\n"));
#line 788 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_48_48, 1) = ((MR_Box) (backend_libs__c_util__V_50_50));
#line 788 "c_util.m"
    }
#line 787 "c_util.m"
    {
#line 787 "c_util.m"
      backend_libs__c_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 787 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_46_46, 0) = ((MR_Box) ((MR_String) "** Do not edit.\n"));
#line 787 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_46_46, 1) = ((MR_Box) (backend_libs__c_util__V_48_48));
#line 787 "c_util.m"
    }
#line 786 "c_util.m"
    {
#line 786 "c_util.m"
      backend_libs__c_util__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_44_44, 0) = ((MR_Box) ((MR_String) ".\n"));
#line 786 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_44_44, 1) = ((MR_Box) (backend_libs__c_util__V_46_46));
#line 786 "c_util.m"
    }
#line 786 "c_util.m"
    {
#line 786 "c_util.m"
      backend_libs__c_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_43_43, 0) = ((MR_Box) (backend_libs__c_util__Fullarch_10));
#line 786 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_43_43, 1) = ((MR_Box) (backend_libs__c_util__V_44_44));
#line 786 "c_util.m"
    }
#line 786 "c_util.m"
    {
#line 786 "c_util.m"
      backend_libs__c_util__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_41_41, 0) = ((MR_Box) ((MR_String) "** configured for "));
#line 786 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_41_41, 1) = ((MR_Box) (backend_libs__c_util__V_43_43));
#line 786 "c_util.m"
    }
#line 785 "c_util.m"
    {
#line 785 "c_util.m"
      backend_libs__c_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 785 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_39_39, 0) = ((MR_Box) ((MR_String) "\n"));
#line 785 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_39_39, 1) = ((MR_Box) (backend_libs__c_util__V_41_41));
#line 785 "c_util.m"
    }
#line 785 "c_util.m"
    {
#line 785 "c_util.m"
      backend_libs__c_util__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 785 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_38_38, 0) = ((MR_Box) (backend_libs__c_util__Version_9));
#line 785 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_38_38, 1) = ((MR_Box) (backend_libs__c_util__V_39_39));
#line 785 "c_util.m"
    }
#line 785 "c_util.m"
    {
#line 785 "c_util.m"
      backend_libs__c_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 785 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_36_36, 0) = ((MR_Box) ((MR_String) "** version "));
#line 785 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_36_36, 1) = ((MR_Box) (backend_libs__c_util__V_38_38));
#line 785 "c_util.m"
    }
#line 784 "c_util.m"
    {
#line 784 "c_util.m"
      backend_libs__c_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 784 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_34_34, 0) = ((MR_Box) ((MR_String) "** by the Mercury compiler,\n"));
#line 784 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_34_34, 1) = ((MR_Box) (backend_libs__c_util__V_36_36));
#line 784 "c_util.m"
    }
#line 783 "c_util.m"
    {
#line 783 "c_util.m"
      backend_libs__c_util__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 783 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_32_32, 0) = ((MR_Box) ((MR_String) "\'\n"));
#line 783 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_32_32, 1) = ((MR_Box) (backend_libs__c_util__V_34_34));
#line 783 "c_util.m"
    }
#line 783 "c_util.m"
    {
#line 783 "c_util.m"
      backend_libs__c_util__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 783 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_31_31, 0) = ((MR_Box) (backend_libs__c_util__SourceFileName_8));
#line 783 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_31_31, 1) = ((MR_Box) (backend_libs__c_util__V_32_32));
#line 783 "c_util.m"
    }
#line 783 "c_util.m"
    {
#line 783 "c_util.m"
      backend_libs__c_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 783 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_29_29, 0) = ((MR_Box) ((MR_String) "** Automatically generated from \140"));
#line 783 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_29_29, 1) = ((MR_Box) (backend_libs__c_util__V_31_31));
#line 783 "c_util.m"
    }
#line 782 "c_util.m"
    {
#line 782 "c_util.m"
      backend_libs__c_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 782 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_26_26, 0) = ((MR_Box) ((MR_String) "/*\n"));
#line 782 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_26_26, 1) = ((MR_Box) (backend_libs__c_util__V_29_29));
#line 782 "c_util.m"
    }
#line 781 "c_util.m"
    {
#line 781 "c_util.m"
      mercury__io__write_strings_3_p_0(backend_libs__c_util__V_26_26);
#line 781 "c_util.m"
      return;
    }
#line 771 "c_util.m"
  }
#line 205 "c_util.m"
}

#line 192 "c_util.m"
void MR_CALL 
backend_libs__c_util__binop_category_string_3_p_0(
#line 192 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__1_1,
#line 192 "c_util.m"
  MR_Word * backend_libs__c_util__HeadVar__2_2,
#line 192 "c_util.m"
  MR_String * backend_libs__c_util__HeadVar__3_3)
#line 192 "c_util.m"
{
#line 707 "c_util.m"
  {
#line 707 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 707 "c_util.m"
#line 707 "c_util.m"
    switch (MR_tag((MR_Word) backend_libs__c_util__HeadVar__1_1)) {
#line 707 "c_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 707 "c_util.m"
      case (MR_Integer) 0:
#line 707 "c_util.m"
#line 707 "c_util.m"
        switch (MR_unmkbody(backend_libs__c_util__HeadVar__1_1)) {
#line 707 "c_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 707 "c_util.m"
          case (MR_Integer) 0:
#line 737 "c_util.m"
            {
#line 737 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 737 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "+";
#line 737 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 1:
#line 738 "c_util.m"
            {
#line 738 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 738 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "-";
#line 738 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 2:
#line 739 "c_util.m"
            {
#line 739 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 739 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "*";
#line 739 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 3:
#line 740 "c_util.m"
            {
#line 740 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 740 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "/";
#line 740 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 4:
#line 748 "c_util.m"
            {
#line 748 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 748 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "%";
#line 748 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 5:
#line 741 "c_util.m"
            {
#line 741 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 742 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<<";
#line 741 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 6:
#line 743 "c_util.m"
            {
#line 743 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 744 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">>";
#line 743 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 7:
#line 745 "c_util.m"
            {
#line 745 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 745 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "&";
#line 745 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 8:
#line 746 "c_util.m"
            {
#line 746 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 746 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "|";
#line 746 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 9:
#line 747 "c_util.m"
            {
#line 747 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 747 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "^";
#line 747 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 10:
#line 751 "c_util.m"
            {
#line 751 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 751 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "&&";
#line 751 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 11:
#line 752 "c_util.m"
            {
#line 752 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 752 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "||";
#line 752 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 12:
#line 749 "c_util.m"
            {
#line 749 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 749 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "==";
#line 749 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 13:
#line 750 "c_util.m"
            {
#line 750 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 750 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "!=";
#line 750 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 14:
#line 761 "c_util.m"
            {
#line 761 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
#line 761 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "MR_body";
#line 761 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 15:
#line 708 "c_util.m"
            {
#line 708 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 709 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "STRING_UNSAFE_INDEX_CODE_UNIT";
#line 708 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 16:
#line 716 "c_util.m"
            {
#line 716 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 716 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "==";
#line 716 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 17:
#line 717 "c_util.m"
            {
#line 717 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 717 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "!=";
#line 717 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 18:
#line 720 "c_util.m"
            {
#line 720 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 720 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<";
#line 720 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 19:
#line 721 "c_util.m"
            {
#line 721 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 721 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">";
#line 721 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 20:
#line 718 "c_util.m"
            {
#line 718 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 718 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<=";
#line 718 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 21:
#line 719 "c_util.m"
            {
#line 719 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 719 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">=";
#line 719 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 22:
#line 758 "c_util.m"
            {
#line 758 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
#line 758 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "MR_strcmp";
#line 758 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 23:
#line 753 "c_util.m"
            {
#line 753 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 753 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<";
#line 753 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 24:
#line 754 "c_util.m"
            {
#line 754 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 754 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">";
#line 754 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 25:
#line 755 "c_util.m"
            {
#line 755 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 755 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<=";
#line 755 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 26:
#line 756 "c_util.m"
            {
#line 756 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 756 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">=";
#line 756 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 27:
#line 723 "c_util.m"
            {
#line 723 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 723 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<=";
#line 723 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 28:
#line 725 "c_util.m"
            {
#line 725 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 725 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "+";
#line 725 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 29:
#line 726 "c_util.m"
            {
#line 726 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 726 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "-";
#line 726 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 30:
#line 727 "c_util.m"
            {
#line 727 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 727 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "*";
#line 727 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 31:
#line 728 "c_util.m"
            {
#line 728 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 728 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "/";
#line 728 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 32:
#line 730 "c_util.m"
            {
#line 730 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 730 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "==";
#line 730 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 33:
#line 731 "c_util.m"
            {
#line 731 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 731 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "!=";
#line 731 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 34:
#line 734 "c_util.m"
            {
#line 734 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 734 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<";
#line 734 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 35:
#line 735 "c_util.m"
            {
#line 735 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 735 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">";
#line 735 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 36:
#line 732 "c_util.m"
            {
#line 732 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 732 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<=";
#line 732 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 37:
#line 733 "c_util.m"
            {
#line 733 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 733 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">=";
#line 733 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 38:
#line 763 "c_util.m"
            {
#line 763 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 764 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "MR_float_word_bits";
#line 763 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 39:
#line 765 "c_util.m"
            {
#line 765 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 766 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "MR_float_from_dword";
#line 765 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 40:
#line 711 "c_util.m"
            {
#line 711 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 711 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "==";
#line 711 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 41:
#line 714 "c_util.m"
            {
#line 714 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 714 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "COMPOUND_EQ";
#line 714 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
          case (MR_Integer) 42:
#line 713 "c_util.m"
            {
#line 713 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 713 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "COMPOUND_LT";
#line 713 "c_util.m"
            }
#line 707 "c_util.m"
            break;
#line 707 "c_util.m"
        }
#line 707 "c_util.m"
        break;
#line 707 "c_util.m"
      case (MR_Integer) 1:
#line 707 "c_util.m"
        {
#line 707 "c_util.m"
          *backend_libs__c_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 707 "c_util.m"
          *backend_libs__c_util__HeadVar__3_3 = (MR_String) "ARRAY_INDEX";
#line 707 "c_util.m"
        }
#line 707 "c_util.m"
        break;
#line 707 "c_util.m"
      case (MR_Integer) 2:
#line 759 "c_util.m"
        {
#line 759 "c_util.m"
          MR_Integer backend_libs__c_util__N_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__c_util__HeadVar__1_1, (MR_Integer) 0)));

#line 759 "c_util.m"
          {
#line 759 "c_util.m"
            MR_Word base;
#line 759 "c_util.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 759 "c_util.m"
            *backend_libs__c_util__HeadVar__2_2 = base;
#line 759 "c_util.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__c_util__N_5));
#line 759 "c_util.m"
          }
#line 760 "c_util.m"
          *backend_libs__c_util__HeadVar__3_3 = (MR_String) "MR_offset_streq";
#line 759 "c_util.m"
        }
#line 707 "c_util.m"
        break;
#line 707 "c_util.m"
    }
#line 707 "c_util.m"
  }
#line 192 "c_util.m"
}

#line 175 "c_util.m"
void MR_CALL 
backend_libs__c_util__unary_prefix_op_2_p_0(
#line 175 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__1_1,
#line 175 "c_util.m"
  MR_String * backend_libs__c_util__HeadVar__2_2)
#line 175 "c_util.m"
{
#line 689 "c_util.m"
  {
#line 689 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 689 "c_util.m"
    *backend_libs__c_util__HeadVar__2_2 = ((&backend_libs__c_util_vector_common_5[0 + backend_libs__c_util__HeadVar__1_1]))->backend_libs__c_util__vector_common_type_5_0__vct_5_f_0;
#line 689 "c_util.m"
  }
#line 175 "c_util.m"
}

#line 162 "c_util.m"
void MR_CALL 
backend_libs__c_util__output_float_literal_3_p_0(
#line 162 "c_util.m"
  MR_Float backend_libs__c_util__Float_4)
#line 162 "c_util.m"
{
#line 681 "c_util.m"
  {
#line 681 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 681 "c_util.m"
    MR_String backend_libs__c_util__V_8_8;

#line 682 "c_util.m"
    {
#line 682 "c_util.m"
      backend_libs__c_util__V_8_8 = backend_libs__c_util__make_float_literal_1_f_0(backend_libs__c_util__Float_4);
    }
#line 682 "c_util.m"
    {
#line 682 "c_util.m"
      mercury__io__write_string_3_p_0(backend_libs__c_util__V_8_8);
#line 682 "c_util.m"
      return;
    }
#line 681 "c_util.m"
  }
#line 162 "c_util.m"
}

#line 157 "c_util.m"
MR_String MR_CALL 
backend_libs__c_util__make_float_literal_1_f_0(
#line 157 "c_util.m"
  MR_Float backend_libs__c_util__Float_3)
#line 157 "c_util.m"
{
#line 673 "c_util.m"
  {
#line 673 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 673 "c_util.m"
    MR_String backend_libs__c_util__HeadVar__2_2;

#line 673 "c_util.m"
    {
#line 673 "c_util.m"
      mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) &backend_libs__c_util_scalar_common_4[0], (MR_Integer) 17, (MR_Integer) 4, backend_libs__c_util__Float_3, &backend_libs__c_util__HeadVar__2_2);
    }
#line 673 "c_util.m"
    return backend_libs__c_util__HeadVar__2_2;
#line 673 "c_util.m"
  }
#line 157 "c_util.m"
}

#line 147 "c_util.m"
void MR_CALL 
backend_libs__c_util__output_int_expr_3_p_0(
#line 147 "c_util.m"
  MR_Integer backend_libs__c_util__N_4)
#line 147 "c_util.m"
{
#line 643 "c_util.m"
  {
#line 643 "c_util.m"
    MR_bool backend_libs__c_util__succeeded = (backend_libs__c_util__N_4 >= (MR_Integer) -2147483647);

#line 643 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 641 "c_util.m"
      {
#line 641 "c_util.m"
        {
#line 641 "c_util.m"
          mercury__io__write_string_3_p_0((MR_String) "(MR_Integer) ");
        }
#line 642 "c_util.m"
        {
#line 642 "c_util.m"
          mercury__io__write_int_3_p_0(backend_libs__c_util__N_4);
#line 642 "c_util.m"
          return;
        }
#line 641 "c_util.m"
      }
#line 643 "c_util.m"
    else
#line 648 "c_util.m"
      {
#line 644 "c_util.m"
        MR_String backend_libs__c_util__V_12_12;
#line 644 "c_util.m"
        MR_Word backend_libs__c_util__V_13_13;

#line 644 "c_util.m"
        {
#line 644 "c_util.m"
          backend_libs__c_util__V_13_13 = mercury__integer__integer_1_f_0(backend_libs__c_util__N_4);
        }
#line 644 "c_util.m"
        {
#line 644 "c_util.m"
          backend_libs__c_util__V_12_12 = mercury__integer__to_string_1_f_0(backend_libs__c_util__V_13_13);
        }
#line 644 "c_util.m"
        backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__V_12_12, (MR_String) "-2147483648") == 0);
#line 648 "c_util.m"
        if (backend_libs__c_util__succeeded)
#line 647 "c_util.m"
          {
#line 647 "c_util.m"
            {
#line 647 "c_util.m"
              mercury__io__write_string_3_p_0((MR_String) "(-(MR_Integer) 2147483647 - 1)");
#line 647 "c_util.m"
              return;
            }
#line 647 "c_util.m"
          }
#line 648 "c_util.m"
        else
#line 652 "c_util.m"
          {
#line 648 "c_util.m"
            MR_String backend_libs__c_util__V_16_16;
#line 648 "c_util.m"
            MR_Word backend_libs__c_util__V_17_17;

#line 648 "c_util.m"
            {
#line 648 "c_util.m"
              backend_libs__c_util__V_17_17 = mercury__integer__integer_1_f_0(backend_libs__c_util__N_4);
            }
#line 648 "c_util.m"
            {
#line 648 "c_util.m"
              backend_libs__c_util__V_16_16 = mercury__integer__to_string_1_f_0(backend_libs__c_util__V_17_17);
            }
#line 648 "c_util.m"
            backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__V_16_16, (MR_String) "-9223372036854775808") == 0);
#line 652 "c_util.m"
            if (backend_libs__c_util__succeeded)
#line 651 "c_util.m"
              {
#line 651 "c_util.m"
                {
#line 651 "c_util.m"
                  mercury__io__write_string_3_p_0((MR_String) "(-(MR_Integer) 9223372036854775807 - 1)");
#line 651 "c_util.m"
                  return;
                }
#line 651 "c_util.m"
              }
#line 652 "c_util.m"
            else
#line 659 "c_util.m"
              {
#line 652 "c_util.m"
                MR_Integer backend_libs__c_util__V_34_34;

#line 652 "c_util.m"
                {
#line 652 "c_util.m"
                  mercury__int__min_int_1_p_0(&backend_libs__c_util__V_34_34);
                }
#line 652 "c_util.m"
                backend_libs__c_util__succeeded = (backend_libs__c_util__N_4 == backend_libs__c_util__V_34_34);
#line 659 "c_util.m"
                if (backend_libs__c_util__succeeded)
#line 656 "c_util.m"
                  {
#line 656 "c_util.m"
                    MR_Integer backend_libs__c_util__V_22_22;
#line 656 "c_util.m"
                    MR_Integer backend_libs__c_util__V_24_24;

#line 656 "c_util.m"
                    {
#line 656 "c_util.m"
                      mercury__io__write_string_3_p_0((MR_String) "(-(MR_Integer) ");
                    }
#line 657 "c_util.m"
                    backend_libs__c_util__V_24_24 = (backend_libs__c_util__N_4 + (MR_Integer) 1);
#line 657 "c_util.m"
                    backend_libs__c_util__V_22_22 = ((MR_Integer) 0 - backend_libs__c_util__V_24_24);
#line 657 "c_util.m"
                    {
#line 657 "c_util.m"
                      mercury__io__write_int_3_p_0(backend_libs__c_util__V_22_22);
                    }
#line 658 "c_util.m"
                    {
#line 658 "c_util.m"
                      mercury__io__write_string_3_p_0((MR_String) "- 1)");
#line 658 "c_util.m"
                      return;
                    }
#line 656 "c_util.m"
                  }
#line 659 "c_util.m"
                else
#line 661 "c_util.m"
                  {
#line 661 "c_util.m"
                    MR_Integer backend_libs__c_util__V_30_30;

#line 661 "c_util.m"
                    {
#line 661 "c_util.m"
                      mercury__io__write_string_3_p_0((MR_String) "(-(MR_Integer) ");
                    }
#line 662 "c_util.m"
                    backend_libs__c_util__V_30_30 = ((MR_Integer) 0 - backend_libs__c_util__N_4);
#line 662 "c_util.m"
                    {
#line 662 "c_util.m"
                      mercury__io__write_int_3_p_0(backend_libs__c_util__V_30_30);
                    }
#line 663 "c_util.m"
                    {
#line 663 "c_util.m"
                      mercury__io__write_string_3_p_0((MR_String) ")");
#line 663 "c_util.m"
                      return;
                    }
#line 661 "c_util.m"
                  }
#line 659 "c_util.m"
              }
#line 652 "c_util.m"
          }
#line 648 "c_util.m"
      }
#line 643 "c_util.m"
  }
#line 147 "c_util.m"
}

#line 138 "c_util.m"
MR_String MR_CALL 
backend_libs__c_util__quote_char_1_f_0(
#line 138 "c_util.m"
  MR_Char backend_libs__c_util__Char_3)
#line 138 "c_util.m"
{
#line 427 "c_util.m"
  {
#line 427 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 427 "c_util.m"
    MR_String backend_libs__c_util__HeadVar__2_2;

#line 427 "c_util.m"
    {
#line 427 "c_util.m"
      return backend_libs__c_util__HeadVar__2_2 = backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0(backend_libs__c_util__Char_3);
    }
#line 427 "c_util.m"
    return backend_libs__c_util__HeadVar__2_2;
#line 427 "c_util.m"
  }
#line 138 "c_util.m"
}

#line 440 "c_util.m"
static void MR_CALL 
backend_libs__c_util__quote_string_1_f_0_1(
#line 440 "c_util.m"
  MR_Box backend_libs__c_util__closure_arg,
#line 440 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 440 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_2,
#line 440 "c_util.m"
  MR_Box * backend_libs__c_util__wrapper_arg_3)
#line 440 "c_util.m"
{
#line 440 "c_util.m"
  {
#line 440 "c_util.m"
    MR_Box backend_libs__c_util__closure = backend_libs__c_util__closure_arg;
#line 440 "c_util.m"
    MR_Word backend_libs__c_util__conv0_RevChars_6;

#line 440 "c_util.m"
    {
#line 440 "c_util.m"
      backend_libs__c_util__quote_one_char_c_3_p_0(((MR_Char) (MR_Word) backend_libs__c_util__wrapper_arg_1), ((MR_Word) backend_libs__c_util__wrapper_arg_2), &backend_libs__c_util__conv0_RevChars_6);
    }
#line 440 "c_util.m"
    *backend_libs__c_util__wrapper_arg_3 = ((MR_Box) (backend_libs__c_util__conv0_RevChars_6));
#line 440 "c_util.m"
  }
#line 440 "c_util.m"
}

#line 132 "c_util.m"
MR_String MR_CALL 
backend_libs__c_util__quote_string_1_f_0(
#line 132 "c_util.m"
  MR_String backend_libs__c_util__String_3)
#line 132 "c_util.m"
{
#line 439 "c_util.m"
  {
#line 439 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 439 "c_util.m"
    MR_String backend_libs__c_util__QuotedString_4;
#line 439 "c_util.m"
    MR_Word backend_libs__c_util__RevQuotedChars_5;
#line 440 "c_util.m"
    MR_Box backend_libs__c_util__conv1_RevQuotedChars_5;

#line 440 "c_util.m"
    {
#line 440 "c_util.m"
      mercury__string__foldl_4_p_1((MR_Word) &backend_libs__c_util_scalar_common_1[0], (MR_Word) &backend_libs__c_util_scalar_common_3[0], backend_libs__c_util__String_3, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &backend_libs__c_util__conv1_RevQuotedChars_5);
    }
#line 440 "c_util.m"
    backend_libs__c_util__RevQuotedChars_5 = ((MR_Word) backend_libs__c_util__conv1_RevQuotedChars_5);
#line 441 "c_util.m"
    {
#line 441 "c_util.m"
      mercury__string__from_rev_char_list_2_p_0(backend_libs__c_util__RevQuotedChars_5, &backend_libs__c_util__QuotedString_4);
    }
#line 439 "c_util.m"
    return backend_libs__c_util__QuotedString_4;
#line 439 "c_util.m"
  }
#line 132 "c_util.m"
}

#line 126 "c_util.m"
void MR_CALL 
backend_libs__c_util__output_quoted_char_3_p_0(
#line 126 "c_util.m"
  MR_Char backend_libs__c_util__Char_4)
#line 126 "c_util.m"
{
#line 414 "c_util.m"
  {
#line 414 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 414 "c_util.m"
    MR_String backend_libs__c_util__EscapedCharStr_15;

#line 424 "c_util.m"
    {
#line 424 "c_util.m"
      backend_libs__c_util__EscapedCharStr_15 = backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0(backend_libs__c_util__Char_4);
    }
#line 425 "c_util.m"
    {
#line 425 "c_util.m"
      mercury__io__write_string_3_p_0(backend_libs__c_util__EscapedCharStr_15);
#line 425 "c_util.m"
      return;
    }
#line 414 "c_util.m"
  }
#line 126 "c_util.m"
}

#line 119 "c_util.m"
void MR_CALL 
backend_libs__c_util__output_quoted_multi_string_lang_4_p_0(
#line 119 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__1_1,
#line 119 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__2_2)
#line 119 "c_util.m"
{
#line 397 "c_util.m"
  while (MR_TRUE)
#line 397 "c_util.m"
    {
#line 397 "c_util.m"
      /* tailcall optimized into a loop */
#line 397 "c_util.m"
      {
#line 397 "c_util.m"
        MR_bool backend_libs__c_util__succeeded;

#line 397 "c_util.m"
        if ((backend_libs__c_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 397 "c_util.m"
          {
#line 397 "c_util.m"
          }
#line 397 "c_util.m"
        else
#line 398 "c_util.m"
          {
#line 398 "c_util.m"
            MR_String backend_libs__c_util__S_10 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__c_util__HeadVar__2_2, (MR_Integer) 0)));
#line 398 "c_util.m"
            MR_Word backend_libs__c_util__Ss_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__c_util__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "c_util.m"
            MR_Char backend_libs__c_util__V_16_16;

#line 374 "c_util.m"
#line 374 "c_util.m"
            switch (backend_libs__c_util__HeadVar__1_1) {
#line 374 "c_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 374 "c_util.m"
              case (MR_Integer) 0:
#line 374 "c_util.m"
                {
#line 374 "c_util.m"
                  MR_String backend_libs__c_util__Left_25;
#line 374 "c_util.m"
                  MR_String backend_libs__c_util__Right_26;

#line 379 "c_util.m"
                  {
#line 379 "c_util.m"
                    mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__S_10, (MR_Integer) 160, &backend_libs__c_util__Left_25, &backend_libs__c_util__Right_26);
                  }
#line 380 "c_util.m"
                  {
#line 380 "c_util.m"
                    backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__Left_25, (MR_Integer) 0);
                  }
#line 381 "c_util.m"
                  backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_26, (MR_String) "") == 0);
#line 383 "c_util.m"
                  if (backend_libs__c_util__succeeded)
#line 383 "c_util.m"
                    {
#line 383 "c_util.m"
                    }
#line 383 "c_util.m"
                  else
#line 384 "c_util.m"
                    {
#line 384 "c_util.m"
                      MR_String backend_libs__c_util__Left_40;
#line 384 "c_util.m"
                      MR_String backend_libs__c_util__Right_41;

#line 384 "c_util.m"
                      {
#line 384 "c_util.m"
                        mercury__io__write_string_3_p_0((MR_String) "\" \"");
                      }
#line 379 "c_util.m"
                      {
#line 379 "c_util.m"
                        mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Right_26, (MR_Integer) 160, &backend_libs__c_util__Left_40, &backend_libs__c_util__Right_41);
                      }
#line 380 "c_util.m"
                      {
#line 380 "c_util.m"
                        backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__Left_40, (MR_Integer) 0);
                      }
#line 381 "c_util.m"
                      backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_41, (MR_String) "") == 0);
#line 383 "c_util.m"
                      if (backend_libs__c_util__succeeded)
#line 383 "c_util.m"
                        {
#line 383 "c_util.m"
                        }
#line 383 "c_util.m"
                      else
#line 384 "c_util.m"
                        {
#line 384 "c_util.m"
                          MR_String backend_libs__c_util__Left_55;
#line 384 "c_util.m"
                          MR_String backend_libs__c_util__Right_56;

#line 384 "c_util.m"
                          {
#line 384 "c_util.m"
                            mercury__io__write_string_3_p_0((MR_String) "\" \"");
                          }
#line 379 "c_util.m"
                          {
#line 379 "c_util.m"
                            mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Right_41, (MR_Integer) 160, &backend_libs__c_util__Left_55, &backend_libs__c_util__Right_56);
                          }
#line 380 "c_util.m"
                          {
#line 380 "c_util.m"
                            backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__Left_55, (MR_Integer) 0);
                          }
#line 381 "c_util.m"
                          backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_56, (MR_String) "") == 0);
#line 383 "c_util.m"
                          if (backend_libs__c_util__succeeded)
#line 383 "c_util.m"
                            {
#line 383 "c_util.m"
                            }
#line 383 "c_util.m"
                          else
#line 384 "c_util.m"
                            {
#line 384 "c_util.m"
                              {
#line 384 "c_util.m"
                                mercury__io__write_string_3_p_0((MR_String) "\" \"");
                              }
#line 385 "c_util.m"
                              {
#line 385 "c_util.m"
                                backend_libs__c_util__output_quoted_string_lang_4_p_0(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__Right_56);
                              }
#line 384 "c_util.m"
                            }
#line 384 "c_util.m"
                        }
#line 384 "c_util.m"
                    }
#line 374 "c_util.m"
                }
#line 374 "c_util.m"
                break;
#line 374 "c_util.m"
              case (MR_Integer) 2:
#line 374 "c_util.m"
              case (MR_Integer) 1:
#line 390 "c_util.m"
                {
#line 391 "c_util.m"
                  {
#line 391 "c_util.m"
                    backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__S_10, (MR_Integer) 0);
                  }
#line 390 "c_util.m"
                }
#line 374 "c_util.m"
                break;
#line 374 "c_util.m"
            }
#line 400 "c_util.m"
            {
#line 400 "c_util.m"
              backend_libs__c_util__V_16_16 = mercury__char__det_from_int_1_f_0((MR_Integer) 0);
            }
#line 400 "c_util.m"
            {
#line 400 "c_util.m"
              backend_libs__c_util__output_quoted_char_lang_4_p_3(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__V_16_16);
            }
#line 401 "c_util.m"
            /* direct tailcall eliminated */
#line 401 "c_util.m"
            {
#line 401 "c_util.m"
              MR_Word backend_libs__c_util__HeadVar__2__tmp_copy_2 = backend_libs__c_util__Ss_11;

#line 401 "c_util.m"
              backend_libs__c_util__HeadVar__2_2 = backend_libs__c_util__HeadVar__2__tmp_copy_2;
#line 401 "c_util.m"
            }
#line 401 "c_util.m"
            continue;
#line 398 "c_util.m"
          }
#line 397 "c_util.m"
      }
#line 397 "c_util.m"
      break;
#line 397 "c_util.m"
    }
#line 119 "c_util.m"
}

#line 115 "c_util.m"
void MR_CALL 
backend_libs__c_util__output_quoted_multi_string_3_p_0(
#line 115 "c_util.m"
  MR_Word backend_libs__c_util__Ss_4)
#line 115 "c_util.m"
{
#line 394 "c_util.m"
  {
#line 394 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 395 "c_util.m"
    {
#line 395 "c_util.m"
      backend_libs__c_util__output_quoted_multi_string_lang_4_p_0((MR_Integer) 0, backend_libs__c_util__Ss_4);
#line 395 "c_util.m"
      return;
    }
#line 394 "c_util.m"
  }
#line 115 "c_util.m"
}

#line 108 "c_util.m"
void MR_CALL 
backend_libs__c_util__output_quoted_string_lang_4_p_3(
#line 108 "c_util.m"
  MR_Word backend_libs__c_util__Lang_5,
#line 108 "c_util.m"
  MR_String backend_libs__c_util__S_6)
#line 108 "c_util.m"
{
#line 374 "c_util.m"
  {
#line 374 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 374 "c_util.m"
#line 374 "c_util.m"
    switch (backend_libs__c_util__Lang_5) {
#line 374 "c_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 374 "c_util.m"
      case (MR_Integer) 0:
#line 374 "c_util.m"
        {
#line 374 "c_util.m"
          MR_String backend_libs__c_util__Left_8;
#line 374 "c_util.m"
          MR_String backend_libs__c_util__Right_9;

#line 379 "c_util.m"
          {
#line 379 "c_util.m"
            mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__S_6, (MR_Integer) 160, &backend_libs__c_util__Left_8, &backend_libs__c_util__Right_9);
          }
#line 380 "c_util.m"
          {
#line 380 "c_util.m"
            backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__Left_8, (MR_Integer) 0);
          }
#line 381 "c_util.m"
          backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_9, (MR_String) "") == 0);
#line 383 "c_util.m"
          if (backend_libs__c_util__succeeded)
#line 383 "c_util.m"
            {
#line 383 "c_util.m"
            }
#line 383 "c_util.m"
          else
#line 384 "c_util.m"
            {
#line 384 "c_util.m"
              MR_String backend_libs__c_util__Left_25;
#line 384 "c_util.m"
              MR_String backend_libs__c_util__Right_26;

#line 384 "c_util.m"
              {
#line 384 "c_util.m"
                mercury__io__write_string_3_p_0((MR_String) "\" \"");
              }
#line 379 "c_util.m"
              {
#line 379 "c_util.m"
                mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Right_9, (MR_Integer) 160, &backend_libs__c_util__Left_25, &backend_libs__c_util__Right_26);
              }
#line 380 "c_util.m"
              {
#line 380 "c_util.m"
                backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__Left_25, (MR_Integer) 0);
              }
#line 381 "c_util.m"
              backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_26, (MR_String) "") == 0);
#line 383 "c_util.m"
              if (backend_libs__c_util__succeeded)
#line 383 "c_util.m"
                {
#line 383 "c_util.m"
                }
#line 383 "c_util.m"
              else
#line 384 "c_util.m"
                {
#line 384 "c_util.m"
                  MR_String backend_libs__c_util__Left_40;
#line 384 "c_util.m"
                  MR_String backend_libs__c_util__Right_41;

#line 384 "c_util.m"
                  {
#line 384 "c_util.m"
                    mercury__io__write_string_3_p_0((MR_String) "\" \"");
                  }
#line 379 "c_util.m"
                  {
#line 379 "c_util.m"
                    mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Right_26, (MR_Integer) 160, &backend_libs__c_util__Left_40, &backend_libs__c_util__Right_41);
                  }
#line 380 "c_util.m"
                  {
#line 380 "c_util.m"
                    backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__Left_40, (MR_Integer) 0);
                  }
#line 381 "c_util.m"
                  backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_41, (MR_String) "") == 0);
#line 383 "c_util.m"
                  if (backend_libs__c_util__succeeded)
#line 383 "c_util.m"
                    {
#line 383 "c_util.m"
                    }
#line 383 "c_util.m"
                  else
#line 384 "c_util.m"
                    {
#line 384 "c_util.m"
                      {
#line 384 "c_util.m"
                        mercury__io__write_string_3_p_0((MR_String) "\" \"");
                      }
#line 385 "c_util.m"
                      {
#line 385 "c_util.m"
                        backend_libs__c_util__output_quoted_string_lang_4_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__Right_41);
#line 385 "c_util.m"
                        return;
                      }
#line 384 "c_util.m"
                    }
#line 384 "c_util.m"
                }
#line 384 "c_util.m"
            }
#line 374 "c_util.m"
        }
#line 374 "c_util.m"
        break;
#line 374 "c_util.m"
      case (MR_Integer) 2:
#line 374 "c_util.m"
      case (MR_Integer) 1:
#line 390 "c_util.m"
        {
#line 391 "c_util.m"
          {
#line 391 "c_util.m"
            backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__S_6, (MR_Integer) 0);
#line 391 "c_util.m"
            return;
          }
#line 390 "c_util.m"
        }
#line 374 "c_util.m"
        break;
#line 374 "c_util.m"
    }
#line 374 "c_util.m"
  }
#line 108 "c_util.m"
}

#line 106 "c_util.m"
void MR_CALL 
backend_libs__c_util__output_quoted_string_lang_4_p_2(
#line 106 "c_util.m"
  MR_Word backend_libs__c_util__Lang_5,
#line 106 "c_util.m"
  MR_String backend_libs__c_util__S_6)
#line 106 "c_util.m"
{
#line 374 "c_util.m"
  {
#line 374 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 391 "c_util.m"
    {
#line 391 "c_util.m"
      backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__S_6, (MR_Integer) 0);
#line 391 "c_util.m"
      return;
    }
#line 374 "c_util.m"
  }
#line 106 "c_util.m"
}

#line 105 "c_util.m"
void MR_CALL 
backend_libs__c_util__output_quoted_string_lang_4_p_1(
#line 105 "c_util.m"
  MR_Word backend_libs__c_util__Lang_5,
#line 105 "c_util.m"
  MR_String backend_libs__c_util__S_6)
#line 105 "c_util.m"
{
#line 374 "c_util.m"
  {
#line 374 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 391 "c_util.m"
    {
#line 391 "c_util.m"
      backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__S_6, (MR_Integer) 0);
#line 391 "c_util.m"
      return;
    }
#line 374 "c_util.m"
  }
#line 105 "c_util.m"
}

#line 104 "c_util.m"
void MR_CALL 
backend_libs__c_util__output_quoted_string_lang_4_p_0(
#line 104 "c_util.m"
  MR_Word backend_libs__c_util__Lang_5,
#line 104 "c_util.m"
  MR_String backend_libs__c_util__S_6)
#line 104 "c_util.m"
{
#line 374 "c_util.m"
  while (MR_TRUE)
#line 374 "c_util.m"
    {
#line 374 "c_util.m"
      /* tailcall optimized into a loop */
#line 374 "c_util.m"
      {
#line 374 "c_util.m"
        MR_bool backend_libs__c_util__succeeded;
#line 374 "c_util.m"
        MR_String backend_libs__c_util__Left_8;
#line 374 "c_util.m"
        MR_String backend_libs__c_util__Right_9;

#line 379 "c_util.m"
        {
#line 379 "c_util.m"
          mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__S_6, (MR_Integer) 160, &backend_libs__c_util__Left_8, &backend_libs__c_util__Right_9);
        }
#line 380 "c_util.m"
        {
#line 380 "c_util.m"
          backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__Left_8, (MR_Integer) 0);
        }
#line 381 "c_util.m"
        backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_9, (MR_String) "") == 0);
#line 383 "c_util.m"
        if (backend_libs__c_util__succeeded)
#line 383 "c_util.m"
          {
#line 383 "c_util.m"
          }
#line 383 "c_util.m"
        else
#line 384 "c_util.m"
          {
#line 384 "c_util.m"
            MR_String backend_libs__c_util__Left_25;
#line 384 "c_util.m"
            MR_String backend_libs__c_util__Right_26;

#line 384 "c_util.m"
            {
#line 384 "c_util.m"
              mercury__io__write_string_3_p_0((MR_String) "\" \"");
            }
#line 379 "c_util.m"
            {
#line 379 "c_util.m"
              mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Right_9, (MR_Integer) 160, &backend_libs__c_util__Left_25, &backend_libs__c_util__Right_26);
            }
#line 380 "c_util.m"
            {
#line 380 "c_util.m"
              backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__Left_25, (MR_Integer) 0);
            }
#line 381 "c_util.m"
            backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_26, (MR_String) "") == 0);
#line 383 "c_util.m"
            if (backend_libs__c_util__succeeded)
#line 383 "c_util.m"
              {
#line 383 "c_util.m"
              }
#line 383 "c_util.m"
            else
#line 384 "c_util.m"
              {
#line 384 "c_util.m"
                {
#line 384 "c_util.m"
                  mercury__io__write_string_3_p_0((MR_String) "\" \"");
                }
#line 385 "c_util.m"
                /* direct tailcall eliminated */
#line 385 "c_util.m"
                {
#line 385 "c_util.m"
                  MR_String backend_libs__c_util__S__tmp_copy_6 = backend_libs__c_util__Right_26;

#line 385 "c_util.m"
                  backend_libs__c_util__S_6 = backend_libs__c_util__S__tmp_copy_6;
#line 385 "c_util.m"
                }
#line 385 "c_util.m"
                continue;
#line 384 "c_util.m"
              }
#line 384 "c_util.m"
          }
#line 374 "c_util.m"
      }
#line 374 "c_util.m"
      break;
#line 374 "c_util.m"
    }
#line 104 "c_util.m"
}

#line 99 "c_util.m"
void MR_CALL 
backend_libs__c_util__output_quoted_string_3_p_0(
#line 99 "c_util.m"
  MR_String backend_libs__c_util__S_4)
#line 99 "c_util.m"
{
#line 367 "c_util.m"
  {
#line 367 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 367 "c_util.m"
    MR_String backend_libs__c_util__Left_15;
#line 367 "c_util.m"
    MR_String backend_libs__c_util__Right_16;

#line 379 "c_util.m"
    {
#line 379 "c_util.m"
      mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__S_4, (MR_Integer) 160, &backend_libs__c_util__Left_15, &backend_libs__c_util__Right_16);
    }
#line 380 "c_util.m"
    {
#line 380 "c_util.m"
      backend_libs__c_util__do_output_quoted_string_5_p_0((MR_Integer) 0, backend_libs__c_util__Left_15, (MR_Integer) 0);
    }
#line 381 "c_util.m"
    backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_16, (MR_String) "") == 0);
#line 383 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 383 "c_util.m"
      {
#line 383 "c_util.m"
      }
#line 383 "c_util.m"
    else
#line 384 "c_util.m"
      {
#line 384 "c_util.m"
        MR_String backend_libs__c_util__Left_30;
#line 384 "c_util.m"
        MR_String backend_libs__c_util__Right_31;

#line 384 "c_util.m"
        {
#line 384 "c_util.m"
          mercury__io__write_string_3_p_0((MR_String) "\" \"");
        }
#line 379 "c_util.m"
        {
#line 379 "c_util.m"
          mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Right_16, (MR_Integer) 160, &backend_libs__c_util__Left_30, &backend_libs__c_util__Right_31);
        }
#line 380 "c_util.m"
        {
#line 380 "c_util.m"
          backend_libs__c_util__do_output_quoted_string_5_p_0((MR_Integer) 0, backend_libs__c_util__Left_30, (MR_Integer) 0);
        }
#line 381 "c_util.m"
        backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_31, (MR_String) "") == 0);
#line 383 "c_util.m"
        if (backend_libs__c_util__succeeded)
#line 383 "c_util.m"
          {
#line 383 "c_util.m"
          }
#line 383 "c_util.m"
        else
#line 384 "c_util.m"
          {
#line 384 "c_util.m"
            {
#line 384 "c_util.m"
              mercury__io__write_string_3_p_0((MR_String) "\" \"");
            }
#line 385 "c_util.m"
            {
#line 385 "c_util.m"
              backend_libs__c_util__output_quoted_string_lang_4_p_0((MR_Integer) 0, backend_libs__c_util__Right_31);
#line 385 "c_util.m"
              return;
            }
#line 384 "c_util.m"
          }
#line 384 "c_util.m"
      }
#line 367 "c_util.m"
  }
#line 99 "c_util.m"
}

#line 81 "c_util.m"
void MR_CALL 
backend_libs__c_util__always_reset_line_num_3_p_0(
#line 81 "c_util.m"
  MR_Word backend_libs__c_util__MaybeFileName_4)
#line 81 "c_util.m"
{
#line 289 "c_util.m"
  {
#line 289 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 289 "c_util.m"
    MR_Integer backend_libs__c_util__Line_6;
#line 289 "c_util.m"
    MR_String backend_libs__c_util__FileName_7;

#line 292 "c_util.m"
    {
#line 292 "c_util.m"
      mercury__io__get_output_line_number_3_p_0(&backend_libs__c_util__Line_6);
    }
#line 295 "c_util.m"
    if ((backend_libs__c_util__MaybeFileName_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 297 "c_util.m"
      {
#line 297 "c_util.m"
        mercury__io__output_stream_name_3_p_0(&backend_libs__c_util__FileName_7);
      }
#line 295 "c_util.m"
    else
#line 294 "c_util.m"
      backend_libs__c_util__FileName_7 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__c_util__MaybeFileName_4, (MR_Integer) 0)));
#line 300 "c_util.m"
    backend_libs__c_util__succeeded = (backend_libs__c_util__Line_6 > (MR_Integer) 0);
#line 300 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 300 "c_util.m"
      {
#line 301 "c_util.m"
        backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__FileName_7, (MR_String) "") == 0);
#line 301 "c_util.m"
        backend_libs__c_util__succeeded = !(backend_libs__c_util__succeeded);
#line 300 "c_util.m"
      }
#line 315 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 303 "c_util.m"
      {
#line 303 "c_util.m"
        MR_Word backend_libs__c_util__CanPrint_8;
#line 303 "c_util.m"
        MR_Integer backend_libs__c_util__V_16_16;

#line 303 "c_util.m"
        {
#line 303 "c_util.m"
          mercury__io__write_string_3_p_0((MR_String) "#line ");
        }
#line 304 "c_util.m"
        backend_libs__c_util__V_16_16 = (backend_libs__c_util__Line_6 + (MR_Integer) 1);
#line 304 "c_util.m"
        {
#line 304 "c_util.m"
          mercury__io__write_int_3_p_0(backend_libs__c_util__V_16_16);
        }
#line 305 "c_util.m"
        {
#line 305 "c_util.m"
          mercury__io__write_string_3_p_0((MR_String) " \"");
        }
#line 330 "c_util.m"
{
#define MR_PROC_LABEL backend_libs__c_util__always_reset_line_num_3_p_0

	MR_String Str;
	MR_Word CanPrintDirectly;

	Str =  backend_libs__c_util__FileName_7 ;
		{
#line 330 "c_util.m"
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
#line 6950 "backend_libs.c_util.c"

		;}
#undef MR_PROC_LABEL
	 backend_libs__c_util__CanPrint_8  = CanPrintDirectly;
#line 330 "c_util.m"
}
#line 310 "c_util.m"
#line 310 "c_util.m"
        switch (backend_libs__c_util__CanPrint_8) {
#line 310 "c_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 310 "c_util.m"
          case (MR_Integer) 0:
#line 312 "c_util.m"
            {
#line 312 "c_util.m"
              backend_libs__c_util__output_quoted_string_3_p_0(backend_libs__c_util__FileName_7);
            }
#line 310 "c_util.m"
            break;
#line 310 "c_util.m"
          case (MR_Integer) 1:
#line 309 "c_util.m"
            {
#line 309 "c_util.m"
              mercury__io__write_string_3_p_0(backend_libs__c_util__FileName_7);
            }
#line 310 "c_util.m"
            break;
#line 310 "c_util.m"
        }
#line 314 "c_util.m"
        {
#line 314 "c_util.m"
          mercury__io__write_string_3_p_0((MR_String) "\"\n");
#line 314 "c_util.m"
          return;
        }
#line 303 "c_util.m"
      }
#line 315 "c_util.m"
    else
#line 315 "c_util.m"
      {
#line 315 "c_util.m"
      }
#line 289 "c_util.m"
  }
#line 81 "c_util.m"
}

#line 76 "c_util.m"
void MR_CALL 
backend_libs__c_util__maybe_reset_line_num_4_p_0(
#line 76 "c_util.m"
  MR_Word backend_libs__c_util__MaybeSetLineNumbers_5,
#line 76 "c_util.m"
  MR_Word backend_libs__c_util__MaybeFileName_6)
#line 76 "c_util.m"
{
#line 283 "c_util.m"
  {
#line 283 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 283 "c_util.m"
#line 283 "c_util.m"
    switch (backend_libs__c_util__MaybeSetLineNumbers_5) {
#line 283 "c_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 283 "c_util.m"
      case (MR_Integer) 0:
#line 286 "c_util.m"
        {
#line 286 "c_util.m"
        }
#line 283 "c_util.m"
        break;
#line 283 "c_util.m"
      case (MR_Integer) 1:
#line 284 "c_util.m"
        {
#line 284 "c_util.m"
          backend_libs__c_util__always_reset_line_num_3_p_0(backend_libs__c_util__MaybeFileName_6);
#line 284 "c_util.m"
          return;
        }
#line 283 "c_util.m"
        break;
#line 283 "c_util.m"
    }
#line 283 "c_util.m"
  }
#line 76 "c_util.m"
}

#line 58 "c_util.m"
void MR_CALL 
backend_libs__c_util__always_set_line_num_4_p_0(
#line 58 "c_util.m"
  MR_String backend_libs__c_util__File_5,
#line 58 "c_util.m"
  MR_Integer backend_libs__c_util__Line_6)
#line 58 "c_util.m"
{
#line 276 "c_util.m"
  {
#line 276 "c_util.m"
    MR_bool backend_libs__c_util__succeeded = (backend_libs__c_util__Line_6 > (MR_Integer) 0);

#line 261 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 261 "c_util.m"
      {
#line 262 "c_util.m"
        backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__File_5, (MR_String) "") == 0);
#line 262 "c_util.m"
        backend_libs__c_util__succeeded = !(backend_libs__c_util__succeeded);
#line 261 "c_util.m"
      }
#line 276 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 264 "c_util.m"
      {
#line 264 "c_util.m"
        MR_Word backend_libs__c_util__CanPrint_8;

#line 264 "c_util.m"
        {
#line 264 "c_util.m"
          mercury__io__write_string_3_p_0((MR_String) "#line ");
        }
#line 265 "c_util.m"
        {
#line 265 "c_util.m"
          mercury__io__write_int_3_p_0(backend_libs__c_util__Line_6);
        }
#line 266 "c_util.m"
        {
#line 266 "c_util.m"
          mercury__io__write_string_3_p_0((MR_String) " \"");
        }
#line 330 "c_util.m"
{
#define MR_PROC_LABEL backend_libs__c_util__always_set_line_num_4_p_0

	MR_String Str;
	MR_Word CanPrintDirectly;

	Str =  backend_libs__c_util__File_5 ;
		{
#line 330 "c_util.m"
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
#line 7134 "backend_libs.c_util.c"

		;}
#undef MR_PROC_LABEL
	 backend_libs__c_util__CanPrint_8  = CanPrintDirectly;
#line 330 "c_util.m"
}
#line 271 "c_util.m"
#line 271 "c_util.m"
        switch (backend_libs__c_util__CanPrint_8) {
#line 271 "c_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 271 "c_util.m"
          case (MR_Integer) 0:
#line 273 "c_util.m"
            {
#line 273 "c_util.m"
              backend_libs__c_util__output_quoted_string_3_p_0(backend_libs__c_util__File_5);
            }
#line 271 "c_util.m"
            break;
#line 271 "c_util.m"
          case (MR_Integer) 1:
#line 270 "c_util.m"
            {
#line 270 "c_util.m"
              mercury__io__write_string_3_p_0(backend_libs__c_util__File_5);
            }
#line 271 "c_util.m"
            break;
#line 271 "c_util.m"
        }
#line 275 "c_util.m"
        {
#line 275 "c_util.m"
          mercury__io__write_string_3_p_0((MR_String) "\"\n");
#line 275 "c_util.m"
          return;
        }
#line 264 "c_util.m"
      }
#line 276 "c_util.m"
    else
#line 278 "c_util.m"
      {
#line 278 "c_util.m"
        {
#line 278 "c_util.m"
          backend_libs__c_util__always_reset_line_num_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
#line 278 "c_util.m"
          return;
        }
#line 278 "c_util.m"
      }
#line 276 "c_util.m"
  }
#line 58 "c_util.m"
}

#line 51 "c_util.m"
void MR_CALL 
backend_libs__c_util__maybe_set_line_num_5_p_0(
#line 51 "c_util.m"
  MR_Word backend_libs__c_util__MaybeSetLineNumbers_6,
#line 51 "c_util.m"
  MR_String backend_libs__c_util__File_7,
#line 51 "c_util.m"
  MR_Integer backend_libs__c_util__Line_8)
#line 51 "c_util.m"
{
#line 253 "c_util.m"
  {
#line 253 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 253 "c_util.m"
#line 253 "c_util.m"
    switch (backend_libs__c_util__MaybeSetLineNumbers_6) {
#line 253 "c_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 253 "c_util.m"
      case (MR_Integer) 0:
#line 256 "c_util.m"
        {
#line 256 "c_util.m"
        }
#line 253 "c_util.m"
        break;
#line 253 "c_util.m"
      case (MR_Integer) 1:
#line 254 "c_util.m"
        {
#line 254 "c_util.m"
          backend_libs__c_util__always_set_line_num_4_p_0(backend_libs__c_util__File_7, backend_libs__c_util__Line_8);
#line 254 "c_util.m"
          return;
        }
#line 253 "c_util.m"
        break;
#line 253 "c_util.m"
    }
#line 253 "c_util.m"
  }
#line 51 "c_util.m"
}

#line 38 "c_util.m"
MR_Word MR_CALL 
backend_libs__c_util__lookup_line_numbers_2_f_0(
#line 38 "c_util.m"
  MR_Word backend_libs__c_util__Globals_4,
#line 38 "c_util.m"
  MR_Word backend_libs__c_util__Option_5)
#line 38 "c_util.m"
{
#line 241 "c_util.m"
  {
#line 241 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 241 "c_util.m"
    MR_Word backend_libs__c_util__MaybeSetLineNumbers_6;
#line 241 "c_util.m"
    MR_Word backend_libs__c_util__OptionValue_7;

#line 242 "c_util.m"
    {
#line 242 "c_util.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__c_util__Globals_4, backend_libs__c_util__Option_5, &backend_libs__c_util__OptionValue_7);
    }
#line 246 "c_util.m"
#line 246 "c_util.m"
    switch (backend_libs__c_util__OptionValue_7) {
#line 246 "c_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 246 "c_util.m"
      case (MR_Integer) 0:
#line 245 "c_util.m"
        backend_libs__c_util__MaybeSetLineNumbers_6 = (MR_Integer) 0;
#line 246 "c_util.m"
        break;
#line 246 "c_util.m"
      case (MR_Integer) 1:
#line 248 "c_util.m"
        backend_libs__c_util__MaybeSetLineNumbers_6 = (MR_Integer) 1;
#line 246 "c_util.m"
        break;
#line 246 "c_util.m"
    }
#line 241 "c_util.m"
    return backend_libs__c_util__MaybeSetLineNumbers_6;
#line 241 "c_util.m"
  }
#line 38 "c_util.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module backend_libs.c_util. */
