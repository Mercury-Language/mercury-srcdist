/*
** Automatically generated from `c_util.m'
** by the Mercury compiler,
** version rotd-2014-10-24
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 135 "backend_libs.c_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__c_util__list__pti_list_1__plain_builtin__type_ctor_info_character_0;

#line 138 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_0;

#line 141 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_1;

#line 144 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_2;

#line 147 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_3;

#line 150 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_4;

#line 153 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_5;

#line 156 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_6;

#line 159 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_7;

#line 162 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_8;

#line 165 "backend_libs.c_util.c"
static const MR_EnumFunctorDescPtr backend_libs__c_util__backend_libs__c_util__enum_value_ordered_binop_category_0[9];

#line 168 "backend_libs.c_util.c"
static const MR_EnumFunctorDescPtr backend_libs__c_util__backend_libs__c_util__enum_name_ordered_binop_category_0[9];

#line 171 "backend_libs.c_util.c"
static const MR_Integer backend_libs__c_util__backend_libs__c_util__functor_number_map_binop_category_0[9];

#line 174 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_0;

#line 177 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_1;

#line 180 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_2;

#line 183 "backend_libs.c_util.c"
static const MR_EnumFunctorDescPtr backend_libs__c_util__backend_libs__c_util__enum_value_ordered_literal_language_0[3];

#line 186 "backend_libs.c_util.c"
static const MR_EnumFunctorDescPtr backend_libs__c_util__backend_libs__c_util__enum_name_ordered_literal_language_0[3];

#line 189 "backend_libs.c_util.c"
static const MR_Integer backend_libs__c_util__backend_libs__c_util__functor_number_map_literal_language_0[3];

#line 192 "backend_libs.c_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__c_util__list__ti_list_1builtin__type_ctor_info_string_0;

#line 195 "backend_libs.c_util.c"
static MR_bool MR_CALL 
backend_libs__c_util____Unify____binop_category_0_0_10001(
#line 198 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 200 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2);

#line 203 "backend_libs.c_util.c"
static void MR_CALL 
backend_libs__c_util____Compare____binop_category_0_0_10001(
#line 206 "backend_libs.c_util.c"
  MR_Box * backend_libs__c_util__wrapper_arg_1,
#line 208 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2,
#line 210 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_3);

#line 213 "backend_libs.c_util.c"
static MR_bool MR_CALL 
backend_libs__c_util____Unify____literal_language_0_0_10001(
#line 216 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 218 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2);

#line 221 "backend_libs.c_util.c"
static void MR_CALL 
backend_libs__c_util____Compare____literal_language_0_0_10001(
#line 224 "backend_libs.c_util.c"
  MR_Box * backend_libs__c_util__wrapper_arg_1,
#line 226 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2,
#line 228 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_3);

#line 231 "backend_libs.c_util.c"
static MR_bool MR_CALL 
backend_libs__c_util____Unify____multi_string_0_0_10001(
#line 234 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 236 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2);

#line 239 "backend_libs.c_util.c"
static void MR_CALL 
backend_libs__c_util____Compare____multi_string_0_0_10001(
#line 242 "backend_libs.c_util.c"
  MR_Box * backend_libs__c_util__wrapper_arg_1,
#line 244 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2,
#line 246 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_3);

#line 538 "c_util.m"
static void MR_CALL 
backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_p_0(
#line 538 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__1_1,
#line 538 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__2_2,
#line 538 "c_util.m"
  MR_Word * backend_libs__c_util__L_3);

#line 436 "c_util.m"
static void MR_CALL 
backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0_1(
#line 436 "c_util.m"
  MR_Box backend_libs__c_util__closure_arg,
#line 436 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 436 "c_util.m"
  MR_Box * backend_libs__c_util__wrapper_arg_2);

#line 385 "c_util.m"
static MR_String MR_CALL 
backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0(
#line 385 "c_util.m"
  MR_Char backend_libs__c_util__Char_5);

#line 554 "c_util.m"
static void MR_CALL 
backend_libs__c_util__octal_escape_any_int_2_p_0(
#line 554 "c_util.m"
  MR_Integer backend_libs__c_util__Int_3,
#line 554 "c_util.m"
  MR_Word * backend_libs__c_util__EscapeCodeChars_4);

#line 489 "c_util.m"
static void MR_CALL 
backend_libs__c_util__quote_one_char_c_3_p_0_1(
#line 489 "c_util.m"
  MR_Box backend_libs__c_util__closure_arg,
#line 489 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 489 "c_util.m"
  MR_Box * backend_libs__c_util__wrapper_arg_2);

#line 463 "c_util.m"
static void MR_CALL 
backend_libs__c_util__quote_one_char_c_3_p_0(
#line 463 "c_util.m"
  MR_Char backend_libs__c_util__Char_4,
#line 463 "c_util.m"
  MR_Word backend_libs__c_util__RevChars0_5,
#line 463 "c_util.m"
  MR_Word * backend_libs__c_util__RevChars_6);

#line 436 "c_util.m"
static void MR_CALL 
backend_libs__c_util__output_quoted_char_lang_4_p_3_1(
#line 436 "c_util.m"
  MR_Box backend_libs__c_util__closure_arg,
#line 436 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 436 "c_util.m"
  MR_Box * backend_libs__c_util__wrapper_arg_2);

#line 376 "c_util.m"
static void MR_CALL 
backend_libs__c_util__output_quoted_char_lang_4_p_3(
#line 376 "c_util.m"
  MR_Word backend_libs__c_util__Lang_5,
#line 376 "c_util.m"
  MR_Char backend_libs__c_util__Char_6);

#line 358 "c_util.m"
static void MR_CALL 
backend_libs__c_util__do_output_quoted_string_5_p_0(
#line 358 "c_util.m"
  MR_Word backend_libs__c_util__Lang_6,
#line 358 "c_util.m"
  MR_String backend_libs__c_util__S_7,
#line 358 "c_util.m"
  MR_Integer backend_libs__c_util__Cur_8);

#line 278 "c_util.m"
static void MR_CALL 
backend_libs__c_util__can_print_directly_4_p_0(
#line 278 "c_util.m"
  MR_String backend_libs__c_util__Str_1,
#line 278 "c_util.m"
  MR_Word * backend_libs__c_util__CanPrintDirectly_2);

#line 395 "c_util.m"
static void MR_CALL 
backend_libs__c_util__quote_string_1_f_0_1(
#line 395 "c_util.m"
  MR_Box backend_libs__c_util__closure_arg,
#line 395 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 395 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_2,
#line 395 "c_util.m"
  MR_Box * backend_libs__c_util__wrapper_arg_3);


static /* final */ const MR_Box backend_libs__c_util_scalar_common_1[14][2];

static /* final */ const MR_Box backend_libs__c_util_scalar_common_2[1][6];

static /* final */ const MR_Box backend_libs__c_util_scalar_common_3[4][3];

static /* final */ const MR_Box backend_libs__c_util_scalar_common_4[1][5];




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
    ((MR_Box) (&backend_libs__c_util_scalar_common_4[0])),
    ((MR_Box) (backend_libs__c_util__output_quoted_char_lang_4_p_3_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&backend_libs__c_util_scalar_common_4[0])),
    ((MR_Box) (backend_libs__c_util__quote_one_char_c_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&backend_libs__c_util_scalar_common_4[0])),
    ((MR_Box) (backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__c_util_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__c_util__list__pti_list_1__plain_builtin__type_ctor_info_character_0))
  },
};



#include "backend_libs.c_util.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 504 "backend_libs.c_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__c_util__list__pti_list_1__plain_builtin__type_ctor_info_character_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
  }
};

#line 512 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_0 = {
  (MR_String) "array_index_binop",
  (MR_Integer) 0
};

#line 518 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_1 = {
  (MR_String) "compound_compare_binop",
  (MR_Integer) 1
};

#line 524 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_2 = {
  (MR_String) "string_compare_binop",
  (MR_Integer) 2
};

#line 530 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_3 = {
  (MR_String) "unsigned_compare_binop",
  (MR_Integer) 3
};

#line 536 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_4 = {
  (MR_String) "float_compare_binop",
  (MR_Integer) 4
};

#line 542 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_5 = {
  (MR_String) "float_arith_binop",
  (MR_Integer) 5
};

#line 548 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_6 = {
  (MR_String) "int_or_bool_binary_infix_binop",
  (MR_Integer) 6
};

#line 554 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_7 = {
  (MR_String) "macro_binop",
  (MR_Integer) 7
};

#line 560 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_8 = {
  (MR_String) "float_macro_binop",
  (MR_Integer) 8
};

#line 566 "backend_libs.c_util.c"
static const MR_EnumFunctorDescPtr backend_libs__c_util__backend_libs__c_util__enum_value_ordered_binop_category_0[9] = {
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_0,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_1,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_2,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_3,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_4,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_5,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_6,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_7,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_8
};

#line 579 "backend_libs.c_util.c"
static const MR_EnumFunctorDescPtr backend_libs__c_util__backend_libs__c_util__enum_name_ordered_binop_category_0[9] = {
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_0,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_1,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_5,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_4,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_8,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_6,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_7,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_2,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_binop_category_0_3
};

#line 592 "backend_libs.c_util.c"
static const MR_Integer backend_libs__c_util__backend_libs__c_util__functor_number_map_binop_category_0[9] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 7,
  (MR_Integer) 8,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 4
};

#line 605 "backend_libs.c_util.c"
const MR_TypeCtorInfo_Struct backend_libs__c_util__backend_libs__c_util__type_ctor_info_binop_category_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__c_util____Unify____binop_category_0_0_10001)),
  ((MR_Box) (backend_libs__c_util____Compare____binop_category_0_0_10001)),
  (MR_String) "backend_libs.c_util",
  (MR_String) "binop_category",
  {
    backend_libs__c_util__backend_libs__c_util__enum_name_ordered_binop_category_0
  },
  {
    backend_libs__c_util__backend_libs__c_util__enum_value_ordered_binop_category_0
  },
  (MR_Integer) 9,
  (MR_Integer) 4,
  backend_libs__c_util__backend_libs__c_util__functor_number_map_binop_category_0
};

#line 626 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_0 = {
  (MR_String) "literal_c",
  (MR_Integer) 0
};

#line 632 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_1 = {
  (MR_String) "literal_java",
  (MR_Integer) 1
};

#line 638 "backend_libs.c_util.c"
static const MR_EnumFunctorDesc backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_2 = {
  (MR_String) "literal_csharp",
  (MR_Integer) 2
};

#line 644 "backend_libs.c_util.c"
static const MR_EnumFunctorDescPtr backend_libs__c_util__backend_libs__c_util__enum_value_ordered_literal_language_0[3] = {
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_0,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_1,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_2
};

#line 651 "backend_libs.c_util.c"
static const MR_EnumFunctorDescPtr backend_libs__c_util__backend_libs__c_util__enum_name_ordered_literal_language_0[3] = {
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_0,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_2,
  &backend_libs__c_util__backend_libs__c_util__enum_functor_desc_literal_language_0_1
};

#line 658 "backend_libs.c_util.c"
static const MR_Integer backend_libs__c_util__backend_libs__c_util__functor_number_map_literal_language_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 665 "backend_libs.c_util.c"
const MR_TypeCtorInfo_Struct backend_libs__c_util__backend_libs__c_util__type_ctor_info_literal_language_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__c_util____Unify____literal_language_0_0_10001)),
  ((MR_Box) (backend_libs__c_util____Compare____literal_language_0_0_10001)),
  (MR_String) "backend_libs.c_util",
  (MR_String) "literal_language",
  {
    backend_libs__c_util__backend_libs__c_util__enum_name_ordered_literal_language_0
  },
  {
    backend_libs__c_util__backend_libs__c_util__enum_value_ordered_literal_language_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  backend_libs__c_util__backend_libs__c_util__functor_number_map_literal_language_0
};

#line 686 "backend_libs.c_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__c_util__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 694 "backend_libs.c_util.c"
const MR_TypeCtorInfo_Struct backend_libs__c_util__backend_libs__c_util__type_ctor_info_multi_string_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__c_util____Unify____multi_string_0_0_10001)),
  ((MR_Box) (backend_libs__c_util____Compare____multi_string_0_0_10001)),
  (MR_String) "backend_libs.c_util",
  (MR_String) "multi_string",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &backend_libs__c_util__list__ti_list_1builtin__type_ctor_info_string_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 715 "backend_libs.c_util.c"
static MR_bool MR_CALL 
backend_libs__c_util____Unify____binop_category_0_0_10001(
#line 718 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 720 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2)
#line 722 "backend_libs.c_util.c"
{
#line 724 "backend_libs.c_util.c"
  {
#line 726 "backend_libs.c_util.c"
    MR_bool backend_libs__c_util__succeeded;

#line 729 "backend_libs.c_util.c"
    {
#line 731 "backend_libs.c_util.c"
      backend_libs__c_util__succeeded = backend_libs__c_util____Unify____binop_category_0_0(((MR_Word) backend_libs__c_util__wrapper_arg_1), ((MR_Word) backend_libs__c_util__wrapper_arg_2));
    }
#line 734 "backend_libs.c_util.c"
    return backend_libs__c_util__succeeded;
#line 736 "backend_libs.c_util.c"
  }
#line 738 "backend_libs.c_util.c"
}

#line 741 "backend_libs.c_util.c"
static void MR_CALL 
backend_libs__c_util____Compare____binop_category_0_0_10001(
#line 744 "backend_libs.c_util.c"
  MR_Box * backend_libs__c_util__wrapper_arg_1,
#line 746 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2,
#line 748 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_3)
#line 750 "backend_libs.c_util.c"
{
#line 752 "backend_libs.c_util.c"
  {
#line 754 "backend_libs.c_util.c"
    MR_Word backend_libs__c_util__conv0_HeadVar__1_1;

#line 757 "backend_libs.c_util.c"
    {
#line 759 "backend_libs.c_util.c"
      backend_libs__c_util____Compare____binop_category_0_0(&backend_libs__c_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__c_util__wrapper_arg_2), ((MR_Word) backend_libs__c_util__wrapper_arg_3));
    }
#line 762 "backend_libs.c_util.c"
    *backend_libs__c_util__wrapper_arg_1 = ((MR_Box) (backend_libs__c_util__conv0_HeadVar__1_1));
#line 764 "backend_libs.c_util.c"
  }
#line 766 "backend_libs.c_util.c"
}

#line 769 "backend_libs.c_util.c"
static MR_bool MR_CALL 
backend_libs__c_util____Unify____literal_language_0_0_10001(
#line 772 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 774 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2)
#line 776 "backend_libs.c_util.c"
{
#line 778 "backend_libs.c_util.c"
  {
#line 780 "backend_libs.c_util.c"
    MR_bool backend_libs__c_util__succeeded;

#line 783 "backend_libs.c_util.c"
    {
#line 785 "backend_libs.c_util.c"
      backend_libs__c_util__succeeded = backend_libs__c_util____Unify____literal_language_0_0(((MR_Word) backend_libs__c_util__wrapper_arg_1), ((MR_Word) backend_libs__c_util__wrapper_arg_2));
    }
#line 788 "backend_libs.c_util.c"
    return backend_libs__c_util__succeeded;
#line 790 "backend_libs.c_util.c"
  }
#line 792 "backend_libs.c_util.c"
}

#line 795 "backend_libs.c_util.c"
static void MR_CALL 
backend_libs__c_util____Compare____literal_language_0_0_10001(
#line 798 "backend_libs.c_util.c"
  MR_Box * backend_libs__c_util__wrapper_arg_1,
#line 800 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2,
#line 802 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_3)
#line 804 "backend_libs.c_util.c"
{
#line 806 "backend_libs.c_util.c"
  {
#line 808 "backend_libs.c_util.c"
    MR_Word backend_libs__c_util__conv0_HeadVar__1_1;

#line 811 "backend_libs.c_util.c"
    {
#line 813 "backend_libs.c_util.c"
      backend_libs__c_util____Compare____literal_language_0_0(&backend_libs__c_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__c_util__wrapper_arg_2), ((MR_Word) backend_libs__c_util__wrapper_arg_3));
    }
#line 816 "backend_libs.c_util.c"
    *backend_libs__c_util__wrapper_arg_1 = ((MR_Box) (backend_libs__c_util__conv0_HeadVar__1_1));
#line 818 "backend_libs.c_util.c"
  }
#line 820 "backend_libs.c_util.c"
}

#line 823 "backend_libs.c_util.c"
static MR_bool MR_CALL 
backend_libs__c_util____Unify____multi_string_0_0_10001(
#line 826 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 828 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2)
#line 830 "backend_libs.c_util.c"
{
#line 832 "backend_libs.c_util.c"
  {
#line 834 "backend_libs.c_util.c"
    MR_bool backend_libs__c_util__succeeded;

#line 837 "backend_libs.c_util.c"
    {
#line 839 "backend_libs.c_util.c"
      backend_libs__c_util__succeeded = backend_libs__c_util____Unify____multi_string_0_0(((MR_Word) backend_libs__c_util__wrapper_arg_1), ((MR_Word) backend_libs__c_util__wrapper_arg_2));
    }
#line 842 "backend_libs.c_util.c"
    return backend_libs__c_util__succeeded;
#line 844 "backend_libs.c_util.c"
  }
#line 846 "backend_libs.c_util.c"
}

#line 849 "backend_libs.c_util.c"
static void MR_CALL 
backend_libs__c_util____Compare____multi_string_0_0_10001(
#line 852 "backend_libs.c_util.c"
  MR_Box * backend_libs__c_util__wrapper_arg_1,
#line 854 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_2,
#line 856 "backend_libs.c_util.c"
  MR_Box backend_libs__c_util__wrapper_arg_3)
#line 858 "backend_libs.c_util.c"
{
#line 860 "backend_libs.c_util.c"
  {
#line 862 "backend_libs.c_util.c"
    MR_Word backend_libs__c_util__conv0_HeadVar__1_1;

#line 865 "backend_libs.c_util.c"
    {
#line 867 "backend_libs.c_util.c"
      backend_libs__c_util____Compare____multi_string_0_0(&backend_libs__c_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__c_util__wrapper_arg_2), ((MR_Word) backend_libs__c_util__wrapper_arg_3));
    }
#line 870 "backend_libs.c_util.c"
    *backend_libs__c_util__wrapper_arg_1 = ((MR_Box) (backend_libs__c_util__conv0_HeadVar__1_1));
#line 872 "backend_libs.c_util.c"
  }
#line 874 "backend_libs.c_util.c"
}

#line 538 "c_util.m"
static void MR_CALL 
backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_p_0(
#line 538 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__1_1,
#line 538 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__2_2,
#line 538 "c_util.m"
  MR_Word * backend_libs__c_util__L_3)
#line 538 "c_util.m"
{
#line 540 "c_util.m"
  while (MR_TRUE)
#line 540 "c_util.m"
    {
#line 540 "c_util.m"
      /* tailcall optimized into a loop */
#line 540 "c_util.m"
      {
#line 540 "c_util.m"
        MR_bool backend_libs__c_util__succeeded;

#line 540 "c_util.m"
        if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 540 "c_util.m"
          *backend_libs__c_util__L_3 = backend_libs__c_util__HeadVar__2_2;
#line 540 "c_util.m"
        else
#line 541 "c_util.m"
          {
#line 541 "c_util.m"
            MR_Box backend_libs__c_util__X_5 = (MR_hl_field(MR_mktag(1), backend_libs__c_util__HeadVar__1_1, (MR_Integer) 0));
#line 541 "c_util.m"
            MR_Word backend_libs__c_util__Xs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__c_util__HeadVar__1_1, (MR_Integer) 1)));
#line 541 "c_util.m"
            MR_Word backend_libs__c_util__V_9_9;

#line 542 "c_util.m"
            {
#line 542 "c_util.m"
              backend_libs__c_util__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "c_util.m"
              MR_hl_field(MR_mktag(1), backend_libs__c_util__V_9_9, 0) = backend_libs__c_util__X_5;
#line 542 "c_util.m"
              MR_hl_field(MR_mktag(1), backend_libs__c_util__V_9_9, 1) = ((MR_Box) (backend_libs__c_util__HeadVar__2_2));
#line 542 "c_util.m"
            }
#line 542 "c_util.m"
            /* direct tailcall eliminated */
#line 542 "c_util.m"
            {
#line 542 "c_util.m"
              MR_Word backend_libs__c_util__HeadVar__1__tmp_copy_1 = backend_libs__c_util__Xs_6;
#line 542 "c_util.m"
              MR_Word backend_libs__c_util__HeadVar__2__tmp_copy_2 = backend_libs__c_util__V_9_9;

#line 542 "c_util.m"
              backend_libs__c_util__HeadVar__2_2 = backend_libs__c_util__HeadVar__2__tmp_copy_2;
#line 542 "c_util.m"
              backend_libs__c_util__HeadVar__1_1 = backend_libs__c_util__HeadVar__1__tmp_copy_1;
#line 542 "c_util.m"
            }
#line 542 "c_util.m"
            continue;
#line 541 "c_util.m"
          }
#line 540 "c_util.m"
      }
#line 540 "c_util.m"
      break;
#line 540 "c_util.m"
    }
#line 538 "c_util.m"
}

#line 436 "c_util.m"
static void MR_CALL 
backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0_1(
#line 436 "c_util.m"
  MR_Box backend_libs__c_util__closure_arg,
#line 436 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 436 "c_util.m"
  MR_Box * backend_libs__c_util__wrapper_arg_2)
#line 436 "c_util.m"
{
#line 436 "c_util.m"
  {
#line 436 "c_util.m"
    MR_Box backend_libs__c_util__closure = backend_libs__c_util__closure_arg;
#line 436 "c_util.m"
    MR_Word backend_libs__c_util__conv0_EscapeCodeChars_4;

#line 436 "c_util.m"
    {
#line 436 "c_util.m"
      backend_libs__c_util__octal_escape_any_int_2_p_0(((MR_Integer) backend_libs__c_util__wrapper_arg_1), &backend_libs__c_util__conv0_EscapeCodeChars_4);
    }
#line 436 "c_util.m"
    *backend_libs__c_util__wrapper_arg_2 = ((MR_Box) (backend_libs__c_util__conv0_EscapeCodeChars_4));
#line 436 "c_util.m"
  }
#line 436 "c_util.m"
}

#line 385 "c_util.m"
static MR_String MR_CALL 
backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0(
#line 385 "c_util.m"
  MR_Char backend_libs__c_util__Char_5)
#line 385 "c_util.m"
{
#line 390 "c_util.m"
  {
#line 390 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 390 "c_util.m"
    MR_String backend_libs__c_util__QuotedCharStr_6;
#line 390 "c_util.m"
    MR_Word backend_libs__c_util__RevQuotedCharStr_7;
#line 390 "c_util.m"
    MR_Word backend_libs__c_util__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 415 "c_util.m"
    MR_Char backend_libs__c_util__EscapeChar_14;

#line 507 "c_util.m"
    if ((backend_libs__c_util__Char_5 == (MR_Char) 7))
#line 513 "c_util.m"
      {
#line 513 "c_util.m"
        backend_libs__c_util__EscapeChar_14 = (MR_Char) 97;
#line 513 "c_util.m"
        backend_libs__c_util__succeeded = MR_TRUE;
#line 513 "c_util.m"
      }
#line 507 "c_util.m"
    else
#line 507 "c_util.m"
      if ((backend_libs__c_util__Char_5 == (MR_Char) 8))
#line 512 "c_util.m"
        {
#line 512 "c_util.m"
          backend_libs__c_util__EscapeChar_14 = (MR_Char) 98;
#line 512 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 512 "c_util.m"
        }
#line 507 "c_util.m"
      else
#line 507 "c_util.m"
        if ((backend_libs__c_util__Char_5 == (MR_Char) 9))
#line 511 "c_util.m"
          {
#line 511 "c_util.m"
            backend_libs__c_util__EscapeChar_14 = (MR_Char) 116;
#line 511 "c_util.m"
            backend_libs__c_util__succeeded = MR_TRUE;
#line 511 "c_util.m"
          }
#line 507 "c_util.m"
        else
#line 507 "c_util.m"
          if ((backend_libs__c_util__Char_5 == (MR_Char) 10))
#line 510 "c_util.m"
            {
#line 510 "c_util.m"
              backend_libs__c_util__EscapeChar_14 = (MR_Char) 110;
#line 510 "c_util.m"
              backend_libs__c_util__succeeded = MR_TRUE;
#line 510 "c_util.m"
            }
#line 507 "c_util.m"
          else
#line 507 "c_util.m"
            if ((backend_libs__c_util__Char_5 == (MR_Char) 11))
#line 514 "c_util.m"
              {
#line 514 "c_util.m"
                backend_libs__c_util__EscapeChar_14 = (MR_Char) 118;
#line 514 "c_util.m"
                backend_libs__c_util__succeeded = MR_TRUE;
#line 514 "c_util.m"
              }
#line 507 "c_util.m"
            else
#line 507 "c_util.m"
              if ((backend_libs__c_util__Char_5 == (MR_Char) 12))
#line 516 "c_util.m"
                {
#line 516 "c_util.m"
                  backend_libs__c_util__EscapeChar_14 = (MR_Char) 102;
#line 516 "c_util.m"
                  backend_libs__c_util__succeeded = MR_TRUE;
#line 516 "c_util.m"
                }
#line 507 "c_util.m"
              else
#line 507 "c_util.m"
                if ((backend_libs__c_util__Char_5 == (MR_Char) 13))
#line 515 "c_util.m"
                  {
#line 515 "c_util.m"
                    backend_libs__c_util__EscapeChar_14 = (MR_Char) 114;
#line 515 "c_util.m"
                    backend_libs__c_util__succeeded = MR_TRUE;
#line 515 "c_util.m"
                  }
#line 507 "c_util.m"
                else
#line 507 "c_util.m"
                  if ((backend_libs__c_util__Char_5 == (MR_Char) 34))
#line 507 "c_util.m"
                    {
#line 507 "c_util.m"
                      backend_libs__c_util__EscapeChar_14 = (MR_Char) 34;
#line 507 "c_util.m"
                      backend_libs__c_util__succeeded = MR_TRUE;
#line 507 "c_util.m"
                    }
#line 507 "c_util.m"
                  else
#line 507 "c_util.m"
                    if ((backend_libs__c_util__Char_5 == (MR_Char) 39))
#line 508 "c_util.m"
                      {
#line 508 "c_util.m"
                        backend_libs__c_util__EscapeChar_14 = (MR_Char) 39;
#line 508 "c_util.m"
                        backend_libs__c_util__succeeded = MR_TRUE;
#line 508 "c_util.m"
                      }
#line 507 "c_util.m"
                    else
#line 507 "c_util.m"
                      if ((backend_libs__c_util__Char_5 == (MR_Char) 92))
#line 509 "c_util.m"
                        {
#line 509 "c_util.m"
                          backend_libs__c_util__EscapeChar_14 = (MR_Char) 92;
#line 509 "c_util.m"
                          backend_libs__c_util__succeeded = MR_TRUE;
#line 509 "c_util.m"
                        }
#line 507 "c_util.m"
                      else
#line 507 "c_util.m"
                        backend_libs__c_util__succeeded = MR_FALSE;
#line 415 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 414 "c_util.m"
      {
#line 414 "c_util.m"
        {
#line 414 "c_util.m"
          backend_libs__c_util__RevQuotedCharStr_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "c_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_7, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__EscapeChar_14));
#line 414 "c_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[7])));
#line 414 "c_util.m"
        }
#line 414 "c_util.m"
      }
#line 415 "c_util.m"
    else
#line 421 "c_util.m"
      {
#line 417 "c_util.m"
        backend_libs__c_util__succeeded = (backend_libs__c_util__Char_5 == (MR_Char) 63);
#line 421 "c_util.m"
        if (backend_libs__c_util__succeeded)
#line 420 "c_util.m"
          {
#line 420 "c_util.m"
            backend_libs__c_util__RevQuotedCharStr_7 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[13]);
#line 420 "c_util.m"
          }
#line 421 "c_util.m"
        else
#line 425 "c_util.m"
          {
#line 524 "c_util.m"
            {
#line 524 "c_util.m"
              backend_libs__c_util__succeeded = mercury__char__is_alnum_1_p_0(backend_libs__c_util__Char_5);
            }
#line 524 "c_util.m"
            if (!(backend_libs__c_util__succeeded))
#line 525 "c_util.m"
              {
#line 525 "c_util.m"
                {
#line 525 "c_util.m"
                  backend_libs__c_util__succeeded = mercury__string__contains_char_2_p_0((MR_String) " !\"#%&\'()*+,-./:;<=>\?[\\]^_{|}~", backend_libs__c_util__Char_5);
                }
#line 525 "c_util.m"
              }
#line 425 "c_util.m"
            if (backend_libs__c_util__succeeded)
#line 424 "c_util.m"
              {
#line 424 "c_util.m"
                backend_libs__c_util__RevQuotedCharStr_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 424 "c_util.m"
                MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_7, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__Char_5));
#line 424 "c_util.m"
                MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_7, 1) = ((MR_Box) (backend_libs__c_util__V_8_8));
#line 424 "c_util.m"
              }
#line 425 "c_util.m"
            else
#line 429 "c_util.m"
              {
#line 426 "c_util.m"
                {
#line 426 "c_util.m"
                  backend_libs__c_util__succeeded = mercury__char__to_int_2_p_1(backend_libs__c_util__Char_5, (MR_Integer) 0);
                }
#line 429 "c_util.m"
                if (backend_libs__c_util__succeeded)
#line 428 "c_util.m"
                  {
#line 428 "c_util.m"
                    backend_libs__c_util__RevQuotedCharStr_7 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[8]);
#line 428 "c_util.m"
                  }
#line 429 "c_util.m"
                else
#line 449 "c_util.m"
                  {
#line 430 "c_util.m"
                    MR_Integer backend_libs__c_util__Int_15;

#line 430 "c_util.m"
                    {
#line 430 "c_util.m"
                      backend_libs__c_util__Int_15 = mercury__char__to_int_1_f_0(backend_libs__c_util__Char_5);
                    }
#line 431 "c_util.m"
                    backend_libs__c_util__succeeded = (backend_libs__c_util__Int_15 >= (MR_Integer) 128);
#line 449 "c_util.m"
                    if (backend_libs__c_util__succeeded)
#line 442 "c_util.m"
                      {
#line 442 "c_util.m"
                        MR_Word backend_libs__c_util__CodeUnits_16;

#line 435 "c_util.m"
                        {
#line 435 "c_util.m"
                          backend_libs__c_util__succeeded = mercury__char__to_utf8_2_p_0(backend_libs__c_util__Char_5, &backend_libs__c_util__CodeUnits_16);
                        }
#line 442 "c_util.m"
                        if (backend_libs__c_util__succeeded)
#line 436 "c_util.m"
                          {
#line 436 "c_util.m"
                            MR_Word backend_libs__c_util__EscapeCharss_17;
#line 436 "c_util.m"
                            MR_Word backend_libs__c_util__EscapeChars_18;

#line 436 "c_util.m"
                            {
#line 436 "c_util.m"
                              mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__c_util_scalar_common_1[0], (MR_Word) &backend_libs__c_util_scalar_common_3[3], backend_libs__c_util__CodeUnits_16, &backend_libs__c_util__EscapeCharss_17);
                            }
#line 437 "c_util.m"
                            {
#line 437 "c_util.m"
                              mercury__list__condense_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, backend_libs__c_util__EscapeCharss_17, &backend_libs__c_util__EscapeChars_18);
                            }
#line 438 "c_util.m"
                            {
#line 438 "c_util.m"
                              backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_p_0(backend_libs__c_util__EscapeChars_18, backend_libs__c_util__V_8_8, &backend_libs__c_util__RevQuotedCharStr_7);
                            }
#line 436 "c_util.m"
                          }
#line 442 "c_util.m"
                        else
#line 440 "c_util.m"
                          {
#line 440 "c_util.m"
                            {
#line 440 "c_util.m"
                              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.c_util", (MR_String) "predicate \140backend_libs.c_util.quote_one_char\'/4", (MR_String) "invalid Unicode code point");
                            }
#line 440 "c_util.m"
                          }
#line 442 "c_util.m"
                      }
#line 449 "c_util.m"
                    else
#line 459 "c_util.m"
                      {
#line 459 "c_util.m"
                        MR_Word backend_libs__c_util__EscapeChars_33;
#line 459 "c_util.m"
                        MR_Integer backend_libs__c_util__Int_45;

#line 551 "c_util.m"
                        {
#line 551 "c_util.m"
                          mercury__char__to_int_2_p_0(backend_libs__c_util__Char_5, &backend_libs__c_util__Int_45);
                        }
#line 552 "c_util.m"
                        {
#line 552 "c_util.m"
                          backend_libs__c_util__octal_escape_any_int_2_p_0(backend_libs__c_util__Int_45, &backend_libs__c_util__EscapeChars_33);
                        }
#line 460 "c_util.m"
                        {
#line 460 "c_util.m"
                          backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_p_0(backend_libs__c_util__EscapeChars_33, backend_libs__c_util__V_8_8, &backend_libs__c_util__RevQuotedCharStr_7);
                        }
#line 459 "c_util.m"
                      }
#line 449 "c_util.m"
                  }
#line 429 "c_util.m"
              }
#line 425 "c_util.m"
          }
#line 421 "c_util.m"
      }
#line 392 "c_util.m"
    {
#line 392 "c_util.m"
      mercury__string__from_rev_char_list_2_p_0(backend_libs__c_util__RevQuotedCharStr_7, &backend_libs__c_util__QuotedCharStr_6);
    }
#line 390 "c_util.m"
    return backend_libs__c_util__QuotedCharStr_6;
#line 390 "c_util.m"
  }
#line 385 "c_util.m"
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
#line 1417 "backend_libs.c_util.c"
  {
#line 1419 "backend_libs.c_util.c"
    MR_bool backend_libs__c_util__succeeded = (backend_libs__c_util__HeadVar__2_1 == backend_libs__c_util__HeadVar__2_2);

#line 1422 "backend_libs.c_util.c"
    return backend_libs__c_util__succeeded;
#line 1424 "backend_libs.c_util.c"
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
    MR_Integer backend_libs__c_util__Cast_HeadVar1_4 = (MR_Integer) backend_libs__c_util__HeadVar__2_2;
#line 147 "c_util.m"
    MR_Integer backend_libs__c_util__Cast_HeadVar2_5 = (MR_Integer) backend_libs__c_util__HeadVar__3_3;

#line 147 "c_util.m"
    {
#line 147 "c_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__Cast_HeadVar1_4, backend_libs__c_util__Cast_HeadVar2_5);
#line 147 "c_util.m"
      return;
    }
#line 147 "c_util.m"
  }
#line 147 "c_util.m"
}

#line 147 "c_util.m"
MR_bool MR_CALL 
backend_libs__c_util____Unify____binop_category_0_0(
#line 147 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__2_1,
#line 147 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__2_2)
#line 147 "c_util.m"
{
#line 1470 "backend_libs.c_util.c"
  {
#line 1472 "backend_libs.c_util.c"
    MR_bool backend_libs__c_util__succeeded = (backend_libs__c_util__HeadVar__2_1 == backend_libs__c_util__HeadVar__2_2);

#line 1475 "backend_libs.c_util.c"
    return backend_libs__c_util__succeeded;
#line 1477 "backend_libs.c_util.c"
  }
#line 147 "c_util.m"
}

#line 554 "c_util.m"
static void MR_CALL 
backend_libs__c_util__octal_escape_any_int_2_p_0(
#line 554 "c_util.m"
  MR_Integer backend_libs__c_util__Int_3,
#line 554 "c_util.m"
  MR_Word * backend_libs__c_util__EscapeCodeChars_4)
#line 554 "c_util.m"
{
#line 556 "c_util.m"
  {
#line 556 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 556 "c_util.m"
    MR_String backend_libs__c_util__OctalString0_5;
#line 556 "c_util.m"
    MR_String backend_libs__c_util__OctalString_6;
#line 556 "c_util.m"
    MR_Word backend_libs__c_util__V_11_11;

#line 557 "c_util.m"
    {
#line 557 "c_util.m"
      mercury__string__int_to_base_string_3_p_0(backend_libs__c_util__Int_3, (MR_Integer) 8, &backend_libs__c_util__OctalString0_5);
    }
#line 558 "c_util.m"
    {
#line 558 "c_util.m"
      mercury__string__pad_left_4_p_0(backend_libs__c_util__OctalString0_5, (MR_Char) 48, (MR_Integer) 3, &backend_libs__c_util__OctalString_6);
    }
#line 559 "c_util.m"
    {
#line 559 "c_util.m"
      backend_libs__c_util__V_11_11 = mercury__string__to_char_list_1_f_0(backend_libs__c_util__OctalString_6);
    }
#line 559 "c_util.m"
    {
#line 559 "c_util.m"
      MR_Word base;
#line 559 "c_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "c_util.m"
      *backend_libs__c_util__EscapeCodeChars_4 = base;
#line 559 "c_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
#line 559 "c_util.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__c_util__V_11_11));
#line 559 "c_util.m"
    }
#line 556 "c_util.m"
  }
#line 554 "c_util.m"
}

#line 489 "c_util.m"
static void MR_CALL 
backend_libs__c_util__quote_one_char_c_3_p_0_1(
#line 489 "c_util.m"
  MR_Box backend_libs__c_util__closure_arg,
#line 489 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 489 "c_util.m"
  MR_Box * backend_libs__c_util__wrapper_arg_2)
#line 489 "c_util.m"
{
#line 489 "c_util.m"
  {
#line 489 "c_util.m"
    MR_Box backend_libs__c_util__closure = backend_libs__c_util__closure_arg;
#line 489 "c_util.m"
    MR_Word backend_libs__c_util__conv0_EscapeCodeChars_4;

#line 489 "c_util.m"
    {
#line 489 "c_util.m"
      backend_libs__c_util__octal_escape_any_int_2_p_0(((MR_Integer) backend_libs__c_util__wrapper_arg_1), &backend_libs__c_util__conv0_EscapeCodeChars_4);
    }
#line 489 "c_util.m"
    *backend_libs__c_util__wrapper_arg_2 = ((MR_Box) (backend_libs__c_util__conv0_EscapeCodeChars_4));
#line 489 "c_util.m"
  }
#line 489 "c_util.m"
}

#line 463 "c_util.m"
static void MR_CALL 
backend_libs__c_util__quote_one_char_c_3_p_0(
#line 463 "c_util.m"
  MR_Char backend_libs__c_util__Char_4,
#line 463 "c_util.m"
  MR_Word backend_libs__c_util__RevChars0_5,
#line 463 "c_util.m"
  MR_Word * backend_libs__c_util__RevChars_6)
#line 463 "c_util.m"
{
#line 471 "c_util.m"
  {
#line 471 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 471 "c_util.m"
    MR_Char backend_libs__c_util__EscapeChar_7;

#line 507 "c_util.m"
    if ((backend_libs__c_util__Char_4 == (MR_Char) 7))
#line 513 "c_util.m"
      {
#line 513 "c_util.m"
        backend_libs__c_util__EscapeChar_7 = (MR_Char) 97;
#line 513 "c_util.m"
        backend_libs__c_util__succeeded = MR_TRUE;
#line 513 "c_util.m"
      }
#line 507 "c_util.m"
    else
#line 507 "c_util.m"
      if ((backend_libs__c_util__Char_4 == (MR_Char) 8))
#line 512 "c_util.m"
        {
#line 512 "c_util.m"
          backend_libs__c_util__EscapeChar_7 = (MR_Char) 98;
#line 512 "c_util.m"
          backend_libs__c_util__succeeded = MR_TRUE;
#line 512 "c_util.m"
        }
#line 507 "c_util.m"
      else
#line 507 "c_util.m"
        if ((backend_libs__c_util__Char_4 == (MR_Char) 9))
#line 511 "c_util.m"
          {
#line 511 "c_util.m"
            backend_libs__c_util__EscapeChar_7 = (MR_Char) 116;
#line 511 "c_util.m"
            backend_libs__c_util__succeeded = MR_TRUE;
#line 511 "c_util.m"
          }
#line 507 "c_util.m"
        else
#line 507 "c_util.m"
          if ((backend_libs__c_util__Char_4 == (MR_Char) 10))
#line 510 "c_util.m"
            {
#line 510 "c_util.m"
              backend_libs__c_util__EscapeChar_7 = (MR_Char) 110;
#line 510 "c_util.m"
              backend_libs__c_util__succeeded = MR_TRUE;
#line 510 "c_util.m"
            }
#line 507 "c_util.m"
          else
#line 507 "c_util.m"
            if ((backend_libs__c_util__Char_4 == (MR_Char) 11))
#line 514 "c_util.m"
              {
#line 514 "c_util.m"
                backend_libs__c_util__EscapeChar_7 = (MR_Char) 118;
#line 514 "c_util.m"
                backend_libs__c_util__succeeded = MR_TRUE;
#line 514 "c_util.m"
              }
#line 507 "c_util.m"
            else
#line 507 "c_util.m"
              if ((backend_libs__c_util__Char_4 == (MR_Char) 12))
#line 516 "c_util.m"
                {
#line 516 "c_util.m"
                  backend_libs__c_util__EscapeChar_7 = (MR_Char) 102;
#line 516 "c_util.m"
                  backend_libs__c_util__succeeded = MR_TRUE;
#line 516 "c_util.m"
                }
#line 507 "c_util.m"
              else
#line 507 "c_util.m"
                if ((backend_libs__c_util__Char_4 == (MR_Char) 13))
#line 515 "c_util.m"
                  {
#line 515 "c_util.m"
                    backend_libs__c_util__EscapeChar_7 = (MR_Char) 114;
#line 515 "c_util.m"
                    backend_libs__c_util__succeeded = MR_TRUE;
#line 515 "c_util.m"
                  }
#line 507 "c_util.m"
                else
#line 507 "c_util.m"
                  if ((backend_libs__c_util__Char_4 == (MR_Char) 34))
#line 507 "c_util.m"
                    {
#line 507 "c_util.m"
                      backend_libs__c_util__EscapeChar_7 = (MR_Char) 34;
#line 507 "c_util.m"
                      backend_libs__c_util__succeeded = MR_TRUE;
#line 507 "c_util.m"
                    }
#line 507 "c_util.m"
                  else
#line 507 "c_util.m"
                    if ((backend_libs__c_util__Char_4 == (MR_Char) 39))
#line 508 "c_util.m"
                      {
#line 508 "c_util.m"
                        backend_libs__c_util__EscapeChar_7 = (MR_Char) 39;
#line 508 "c_util.m"
                        backend_libs__c_util__succeeded = MR_TRUE;
#line 508 "c_util.m"
                      }
#line 507 "c_util.m"
                    else
#line 507 "c_util.m"
                      if ((backend_libs__c_util__Char_4 == (MR_Char) 92))
#line 509 "c_util.m"
                        {
#line 509 "c_util.m"
                          backend_libs__c_util__EscapeChar_7 = (MR_Char) 92;
#line 509 "c_util.m"
                          backend_libs__c_util__succeeded = MR_TRUE;
#line 509 "c_util.m"
                        }
#line 507 "c_util.m"
                      else
#line 507 "c_util.m"
                        backend_libs__c_util__succeeded = MR_FALSE;
#line 471 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 470 "c_util.m"
      {
#line 470 "c_util.m"
        MR_Word backend_libs__c_util__V_12_12;

#line 470 "c_util.m"
        {
#line 470 "c_util.m"
          backend_libs__c_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "c_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__c_util__V_12_12, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
#line 470 "c_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__c_util__V_12_12, 1) = ((MR_Box) (backend_libs__c_util__RevChars0_5));
#line 470 "c_util.m"
        }
#line 470 "c_util.m"
        {
#line 470 "c_util.m"
          MR_Word base;
#line 470 "c_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "c_util.m"
          *backend_libs__c_util__RevChars_6 = base;
#line 470 "c_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__EscapeChar_7));
#line 470 "c_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__c_util__V_12_12));
#line 470 "c_util.m"
        }
#line 470 "c_util.m"
      }
#line 471 "c_util.m"
    else
#line 476 "c_util.m"
      {
#line 472 "c_util.m"
        backend_libs__c_util__succeeded = (backend_libs__c_util__Char_4 == (MR_Char) 63);
#line 476 "c_util.m"
        if (backend_libs__c_util__succeeded)
#line 475 "c_util.m"
          {
#line 475 "c_util.m"
            MR_Word backend_libs__c_util__V_15_15;

#line 475 "c_util.m"
            {
#line 475 "c_util.m"
              backend_libs__c_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 475 "c_util.m"
              MR_hl_field(MR_mktag(1), backend_libs__c_util__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
#line 475 "c_util.m"
              MR_hl_field(MR_mktag(1), backend_libs__c_util__V_15_15, 1) = ((MR_Box) (backend_libs__c_util__RevChars0_5));
#line 475 "c_util.m"
            }
#line 475 "c_util.m"
            {
#line 475 "c_util.m"
              MR_Word base;
#line 475 "c_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 475 "c_util.m"
              *backend_libs__c_util__RevChars_6 = base;
#line 475 "c_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) ((MR_Char) 63));
#line 475 "c_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__c_util__V_15_15));
#line 475 "c_util.m"
            }
#line 475 "c_util.m"
          }
#line 476 "c_util.m"
        else
#line 480 "c_util.m"
          {
#line 524 "c_util.m"
            {
#line 524 "c_util.m"
              backend_libs__c_util__succeeded = mercury__char__is_alnum_1_p_0(backend_libs__c_util__Char_4);
            }
#line 524 "c_util.m"
            if (!(backend_libs__c_util__succeeded))
#line 525 "c_util.m"
              {
#line 525 "c_util.m"
                {
#line 525 "c_util.m"
                  backend_libs__c_util__succeeded = mercury__string__contains_char_2_p_0((MR_String) " !\"#%&\'()*+,-./:;<=>\?[\\]^_{|}~", backend_libs__c_util__Char_4);
                }
#line 525 "c_util.m"
              }
#line 480 "c_util.m"
            if (backend_libs__c_util__succeeded)
#line 479 "c_util.m"
              {
#line 479 "c_util.m"
                MR_Word base;
#line 479 "c_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 479 "c_util.m"
                *backend_libs__c_util__RevChars_6 = base;
#line 479 "c_util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__Char_4));
#line 479 "c_util.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__c_util__RevChars0_5));
#line 479 "c_util.m"
              }
#line 480 "c_util.m"
            else
#line 484 "c_util.m"
              {
#line 481 "c_util.m"
                {
#line 481 "c_util.m"
                  backend_libs__c_util__succeeded = mercury__char__to_int_2_p_1(backend_libs__c_util__Char_4, (MR_Integer) 0);
                }
#line 484 "c_util.m"
                if (backend_libs__c_util__succeeded)
#line 483 "c_util.m"
                  {
#line 483 "c_util.m"
                    MR_Word backend_libs__c_util__V_19_19;

#line 483 "c_util.m"
                    {
#line 483 "c_util.m"
                      backend_libs__c_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "c_util.m"
                      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Char) 92));
#line 483 "c_util.m"
                      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_19_19, 1) = ((MR_Box) (backend_libs__c_util__RevChars0_5));
#line 483 "c_util.m"
                    }
#line 483 "c_util.m"
                    {
#line 483 "c_util.m"
                      MR_Word base;
#line 483 "c_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "c_util.m"
                      *backend_libs__c_util__RevChars_6 = base;
#line 483 "c_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) ((MR_Char) 48));
#line 483 "c_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__c_util__V_19_19));
#line 483 "c_util.m"
                    }
#line 483 "c_util.m"
                  }
#line 484 "c_util.m"
                else
#line 495 "c_util.m"
                  {
#line 485 "c_util.m"
                    MR_Integer backend_libs__c_util__Int_8;

#line 485 "c_util.m"
                    {
#line 485 "c_util.m"
                      backend_libs__c_util__Int_8 = mercury__char__to_int_1_f_0(backend_libs__c_util__Char_4);
                    }
#line 486 "c_util.m"
                    backend_libs__c_util__succeeded = (backend_libs__c_util__Int_8 >= (MR_Integer) 128);
#line 495 "c_util.m"
                    if (backend_libs__c_util__succeeded)
#line 492 "c_util.m"
                      {
#line 492 "c_util.m"
                        MR_Word backend_libs__c_util__CodeUnits_9;

#line 488 "c_util.m"
                        {
#line 488 "c_util.m"
                          backend_libs__c_util__succeeded = mercury__char__to_utf8_2_p_0(backend_libs__c_util__Char_4, &backend_libs__c_util__CodeUnits_9);
                        }
#line 492 "c_util.m"
                        if (backend_libs__c_util__succeeded)
#line 489 "c_util.m"
                          {
#line 489 "c_util.m"
                            MR_Word backend_libs__c_util__EscapeCharss_10;
#line 489 "c_util.m"
                            MR_Word backend_libs__c_util__EscapeChars_11;

#line 489 "c_util.m"
                            {
#line 489 "c_util.m"
                              mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__c_util_scalar_common_1[0], (MR_Word) &backend_libs__c_util_scalar_common_3[2], backend_libs__c_util__CodeUnits_9, &backend_libs__c_util__EscapeCharss_10);
                            }
#line 490 "c_util.m"
                            {
#line 490 "c_util.m"
                              mercury__list__condense_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, backend_libs__c_util__EscapeCharss_10, &backend_libs__c_util__EscapeChars_11);
                            }
#line 491 "c_util.m"
                            {
#line 491 "c_util.m"
                              backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_p_0(backend_libs__c_util__EscapeChars_11, backend_libs__c_util__RevChars0_5, backend_libs__c_util__RevChars_6);
#line 491 "c_util.m"
                              return;
                            }
#line 489 "c_util.m"
                          }
#line 492 "c_util.m"
                        else
#line 493 "c_util.m"
                          {
#line 493 "c_util.m"
                            {
#line 493 "c_util.m"
                              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.c_util", (MR_String) "predicate \140backend_libs.c_util.quote_one_char_c\'/3", (MR_String) "invalid Unicode code point");
#line 493 "c_util.m"
                              return;
                            }
#line 493 "c_util.m"
                          }
#line 492 "c_util.m"
                      }
#line 495 "c_util.m"
                    else
#line 496 "c_util.m"
                      {
#line 496 "c_util.m"
                        MR_Word backend_libs__c_util__EscapeChars_26;
#line 496 "c_util.m"
                        MR_Integer backend_libs__c_util__Int_37;

#line 551 "c_util.m"
                        {
#line 551 "c_util.m"
                          mercury__char__to_int_2_p_0(backend_libs__c_util__Char_4, &backend_libs__c_util__Int_37);
                        }
#line 552 "c_util.m"
                        {
#line 552 "c_util.m"
                          backend_libs__c_util__octal_escape_any_int_2_p_0(backend_libs__c_util__Int_37, &backend_libs__c_util__EscapeChars_26);
                        }
#line 497 "c_util.m"
                        {
#line 497 "c_util.m"
                          backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_p_0(backend_libs__c_util__EscapeChars_26, backend_libs__c_util__RevChars0_5, backend_libs__c_util__RevChars_6);
#line 497 "c_util.m"
                          return;
                        }
#line 496 "c_util.m"
                      }
#line 495 "c_util.m"
                  }
#line 484 "c_util.m"
              }
#line 480 "c_util.m"
          }
#line 476 "c_util.m"
      }
#line 471 "c_util.m"
  }
#line 463 "c_util.m"
}

#line 436 "c_util.m"
static void MR_CALL 
backend_libs__c_util__output_quoted_char_lang_4_p_3_1(
#line 436 "c_util.m"
  MR_Box backend_libs__c_util__closure_arg,
#line 436 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 436 "c_util.m"
  MR_Box * backend_libs__c_util__wrapper_arg_2)
#line 436 "c_util.m"
{
#line 436 "c_util.m"
  {
#line 436 "c_util.m"
    MR_Box backend_libs__c_util__closure = backend_libs__c_util__closure_arg;
#line 436 "c_util.m"
    MR_Word backend_libs__c_util__conv0_EscapeCodeChars_4;

#line 436 "c_util.m"
    {
#line 436 "c_util.m"
      backend_libs__c_util__octal_escape_any_int_2_p_0(((MR_Integer) backend_libs__c_util__wrapper_arg_1), &backend_libs__c_util__conv0_EscapeCodeChars_4);
    }
#line 436 "c_util.m"
    *backend_libs__c_util__wrapper_arg_2 = ((MR_Box) (backend_libs__c_util__conv0_EscapeCodeChars_4));
#line 436 "c_util.m"
  }
#line 436 "c_util.m"
}

#line 376 "c_util.m"
static void MR_CALL 
backend_libs__c_util__output_quoted_char_lang_4_p_3(
#line 376 "c_util.m"
  MR_Word backend_libs__c_util__Lang_5,
#line 376 "c_util.m"
  MR_Char backend_libs__c_util__Char_6)
#line 376 "c_util.m"
{
#line 378 "c_util.m"
  {
#line 378 "c_util.m"
    MR_bool backend_libs__c_util__succeeded = (backend_libs__c_util__Lang_5 == (MR_Integer) 1);
#line 378 "c_util.m"
    MR_String backend_libs__c_util__EscapedCharStr_8;
#line 378 "c_util.m"
    MR_Word backend_libs__c_util__RevQuotedCharStr_15;
#line 378 "c_util.m"
    MR_Word backend_libs__c_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 411 "c_util.m"
    MR_Word backend_libs__c_util__RevEscapeChars_21;

#line 407 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 502 "c_util.m"
      {
#line 502 "c_util.m"
        if ((backend_libs__c_util__Char_6 == (MR_Char) 7))
#line 502 "c_util.m"
          {
#line 502 "c_util.m"
            backend_libs__c_util__RevEscapeChars_21 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[10]);
#line 502 "c_util.m"
            backend_libs__c_util__succeeded = MR_TRUE;
#line 502 "c_util.m"
          }
#line 502 "c_util.m"
        else
#line 502 "c_util.m"
          if ((backend_libs__c_util__Char_6 == (MR_Char) 11))
#line 503 "c_util.m"
            {
#line 503 "c_util.m"
              backend_libs__c_util__RevEscapeChars_21 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[12]);
#line 503 "c_util.m"
              backend_libs__c_util__succeeded = MR_TRUE;
#line 503 "c_util.m"
            }
#line 502 "c_util.m"
          else
#line 502 "c_util.m"
            backend_libs__c_util__succeeded = MR_FALSE;
#line 502 "c_util.m"
      }
#line 411 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 410 "c_util.m"
      {
#line 410 "c_util.m"
        {
#line 410 "c_util.m"
          mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, backend_libs__c_util__RevEscapeChars_21, backend_libs__c_util__V_16_16, &backend_libs__c_util__RevQuotedCharStr_15);
        }
#line 410 "c_util.m"
      }
#line 411 "c_util.m"
    else
#line 415 "c_util.m"
      {
#line 415 "c_util.m"
        MR_Char backend_libs__c_util__EscapeChar_22;

#line 507 "c_util.m"
        if ((backend_libs__c_util__Char_6 == (MR_Char) 7))
#line 513 "c_util.m"
          {
#line 513 "c_util.m"
            backend_libs__c_util__EscapeChar_22 = (MR_Char) 97;
#line 513 "c_util.m"
            backend_libs__c_util__succeeded = MR_TRUE;
#line 513 "c_util.m"
          }
#line 507 "c_util.m"
        else
#line 507 "c_util.m"
          if ((backend_libs__c_util__Char_6 == (MR_Char) 8))
#line 512 "c_util.m"
            {
#line 512 "c_util.m"
              backend_libs__c_util__EscapeChar_22 = (MR_Char) 98;
#line 512 "c_util.m"
              backend_libs__c_util__succeeded = MR_TRUE;
#line 512 "c_util.m"
            }
#line 507 "c_util.m"
          else
#line 507 "c_util.m"
            if ((backend_libs__c_util__Char_6 == (MR_Char) 9))
#line 511 "c_util.m"
              {
#line 511 "c_util.m"
                backend_libs__c_util__EscapeChar_22 = (MR_Char) 116;
#line 511 "c_util.m"
                backend_libs__c_util__succeeded = MR_TRUE;
#line 511 "c_util.m"
              }
#line 507 "c_util.m"
            else
#line 507 "c_util.m"
              if ((backend_libs__c_util__Char_6 == (MR_Char) 10))
#line 510 "c_util.m"
                {
#line 510 "c_util.m"
                  backend_libs__c_util__EscapeChar_22 = (MR_Char) 110;
#line 510 "c_util.m"
                  backend_libs__c_util__succeeded = MR_TRUE;
#line 510 "c_util.m"
                }
#line 507 "c_util.m"
              else
#line 507 "c_util.m"
                if ((backend_libs__c_util__Char_6 == (MR_Char) 11))
#line 514 "c_util.m"
                  {
#line 514 "c_util.m"
                    backend_libs__c_util__EscapeChar_22 = (MR_Char) 118;
#line 514 "c_util.m"
                    backend_libs__c_util__succeeded = MR_TRUE;
#line 514 "c_util.m"
                  }
#line 507 "c_util.m"
                else
#line 507 "c_util.m"
                  if ((backend_libs__c_util__Char_6 == (MR_Char) 12))
#line 516 "c_util.m"
                    {
#line 516 "c_util.m"
                      backend_libs__c_util__EscapeChar_22 = (MR_Char) 102;
#line 516 "c_util.m"
                      backend_libs__c_util__succeeded = MR_TRUE;
#line 516 "c_util.m"
                    }
#line 507 "c_util.m"
                  else
#line 507 "c_util.m"
                    if ((backend_libs__c_util__Char_6 == (MR_Char) 13))
#line 515 "c_util.m"
                      {
#line 515 "c_util.m"
                        backend_libs__c_util__EscapeChar_22 = (MR_Char) 114;
#line 515 "c_util.m"
                        backend_libs__c_util__succeeded = MR_TRUE;
#line 515 "c_util.m"
                      }
#line 507 "c_util.m"
                    else
#line 507 "c_util.m"
                      if ((backend_libs__c_util__Char_6 == (MR_Char) 34))
#line 507 "c_util.m"
                        {
#line 507 "c_util.m"
                          backend_libs__c_util__EscapeChar_22 = (MR_Char) 34;
#line 507 "c_util.m"
                          backend_libs__c_util__succeeded = MR_TRUE;
#line 507 "c_util.m"
                        }
#line 507 "c_util.m"
                      else
#line 507 "c_util.m"
                        if ((backend_libs__c_util__Char_6 == (MR_Char) 39))
#line 508 "c_util.m"
                          {
#line 508 "c_util.m"
                            backend_libs__c_util__EscapeChar_22 = (MR_Char) 39;
#line 508 "c_util.m"
                            backend_libs__c_util__succeeded = MR_TRUE;
#line 508 "c_util.m"
                          }
#line 507 "c_util.m"
                        else
#line 507 "c_util.m"
                          if ((backend_libs__c_util__Char_6 == (MR_Char) 92))
#line 509 "c_util.m"
                            {
#line 509 "c_util.m"
                              backend_libs__c_util__EscapeChar_22 = (MR_Char) 92;
#line 509 "c_util.m"
                              backend_libs__c_util__succeeded = MR_TRUE;
#line 509 "c_util.m"
                            }
#line 507 "c_util.m"
                          else
#line 507 "c_util.m"
                            backend_libs__c_util__succeeded = MR_FALSE;
#line 415 "c_util.m"
        if (backend_libs__c_util__succeeded)
#line 414 "c_util.m"
          {
#line 414 "c_util.m"
            {
#line 414 "c_util.m"
              backend_libs__c_util__RevQuotedCharStr_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "c_util.m"
              MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_15, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__EscapeChar_22));
#line 414 "c_util.m"
              MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[7])));
#line 414 "c_util.m"
            }
#line 414 "c_util.m"
          }
#line 415 "c_util.m"
        else
#line 421 "c_util.m"
          {
#line 416 "c_util.m"
            backend_libs__c_util__succeeded = (backend_libs__c_util__Lang_5 == (MR_Integer) 0);
#line 416 "c_util.m"
            if (backend_libs__c_util__succeeded)
#line 417 "c_util.m"
              backend_libs__c_util__succeeded = (backend_libs__c_util__Char_6 == (MR_Char) 63);
#line 421 "c_util.m"
            if (backend_libs__c_util__succeeded)
#line 420 "c_util.m"
              {
#line 420 "c_util.m"
                backend_libs__c_util__RevQuotedCharStr_15 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[13]);
#line 420 "c_util.m"
              }
#line 421 "c_util.m"
            else
#line 425 "c_util.m"
              {
#line 524 "c_util.m"
                {
#line 524 "c_util.m"
                  backend_libs__c_util__succeeded = mercury__char__is_alnum_1_p_0(backend_libs__c_util__Char_6);
                }
#line 524 "c_util.m"
                if (!(backend_libs__c_util__succeeded))
#line 525 "c_util.m"
                  {
#line 525 "c_util.m"
                    {
#line 525 "c_util.m"
                      backend_libs__c_util__succeeded = mercury__string__contains_char_2_p_0((MR_String) " !\"#%&\'()*+,-./:;<=>\?[\\]^_{|}~", backend_libs__c_util__Char_6);
                    }
#line 525 "c_util.m"
                  }
#line 425 "c_util.m"
                if (backend_libs__c_util__succeeded)
#line 424 "c_util.m"
                  {
#line 424 "c_util.m"
                    backend_libs__c_util__RevQuotedCharStr_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 424 "c_util.m"
                    MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_15, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__Char_6));
#line 424 "c_util.m"
                    MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_15, 1) = ((MR_Box) (backend_libs__c_util__V_16_16));
#line 424 "c_util.m"
                  }
#line 425 "c_util.m"
                else
#line 429 "c_util.m"
                  {
#line 426 "c_util.m"
                    {
#line 426 "c_util.m"
                      backend_libs__c_util__succeeded = mercury__char__to_int_2_p_1(backend_libs__c_util__Char_6, (MR_Integer) 0);
                    }
#line 429 "c_util.m"
                    if (backend_libs__c_util__succeeded)
#line 428 "c_util.m"
                      {
#line 428 "c_util.m"
                        backend_libs__c_util__RevQuotedCharStr_15 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[8]);
#line 428 "c_util.m"
                      }
#line 429 "c_util.m"
                    else
#line 449 "c_util.m"
                      {
#line 430 "c_util.m"
                        MR_Integer backend_libs__c_util__Int_23;

#line 430 "c_util.m"
                        {
#line 430 "c_util.m"
                          backend_libs__c_util__Int_23 = mercury__char__to_int_1_f_0(backend_libs__c_util__Char_6);
                        }
#line 431 "c_util.m"
                        backend_libs__c_util__succeeded = (backend_libs__c_util__Int_23 >= (MR_Integer) 128);
#line 449 "c_util.m"
                        if (backend_libs__c_util__succeeded)
#line 442 "c_util.m"
                          if ((backend_libs__c_util__Lang_5 == (MR_Integer) 0))
#line 439 "c_util.m"
                            {
#line 439 "c_util.m"
                              MR_Word backend_libs__c_util__CodeUnits_24;

#line 435 "c_util.m"
                              {
#line 435 "c_util.m"
                                backend_libs__c_util__succeeded = mercury__char__to_utf8_2_p_0(backend_libs__c_util__Char_6, &backend_libs__c_util__CodeUnits_24);
                              }
#line 439 "c_util.m"
                              if (backend_libs__c_util__succeeded)
#line 436 "c_util.m"
                                {
#line 436 "c_util.m"
                                  MR_Word backend_libs__c_util__EscapeCharss_25;
#line 436 "c_util.m"
                                  MR_Word backend_libs__c_util__EscapeChars_26;

#line 436 "c_util.m"
                                  {
#line 436 "c_util.m"
                                    mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__c_util_scalar_common_1[0], (MR_Word) &backend_libs__c_util_scalar_common_3[1], backend_libs__c_util__CodeUnits_24, &backend_libs__c_util__EscapeCharss_25);
                                  }
#line 437 "c_util.m"
                                  {
#line 437 "c_util.m"
                                    mercury__list__condense_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, backend_libs__c_util__EscapeCharss_25, &backend_libs__c_util__EscapeChars_26);
                                  }
#line 438 "c_util.m"
                                  {
#line 438 "c_util.m"
                                    backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_p_0(backend_libs__c_util__EscapeChars_26, backend_libs__c_util__V_16_16, &backend_libs__c_util__RevQuotedCharStr_15);
                                  }
#line 436 "c_util.m"
                                }
#line 439 "c_util.m"
                              else
#line 440 "c_util.m"
                                {
#line 440 "c_util.m"
                                  {
#line 440 "c_util.m"
                                    mercury__require__unexpected_3_p_0((MR_String) "backend_libs.c_util", (MR_String) "predicate \140backend_libs.c_util.quote_one_char\'/4", (MR_String) "invalid Unicode code point");
#line 440 "c_util.m"
                                    return;
                                  }
#line 440 "c_util.m"
                                }
#line 439 "c_util.m"
                            }
#line 442 "c_util.m"
                          else
#line 442 "c_util.m"
                            if ((backend_libs__c_util__Lang_5 == (MR_Integer) 2))
#line 447 "c_util.m"
                              {
#line 447 "c_util.m"
                                backend_libs__c_util__RevQuotedCharStr_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "c_util.m"
                                MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_15, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__Char_6));
#line 447 "c_util.m"
                                MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_15, 1) = ((MR_Box) (backend_libs__c_util__V_16_16));
#line 447 "c_util.m"
                              }
#line 442 "c_util.m"
                            else
#line 444 "c_util.m"
                              {
#line 444 "c_util.m"
                                backend_libs__c_util__RevQuotedCharStr_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 444 "c_util.m"
                                MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_15, 0) = ((MR_Box) (MR_Word) (backend_libs__c_util__Char_6));
#line 444 "c_util.m"
                                MR_hl_field(MR_mktag(1), backend_libs__c_util__RevQuotedCharStr_15, 1) = ((MR_Box) (backend_libs__c_util__V_16_16));
#line 444 "c_util.m"
                              }
#line 449 "c_util.m"
                        else
#line 459 "c_util.m"
                          {
#line 459 "c_util.m"
                            MR_Word backend_libs__c_util__EscapeChars_41;

#line 453 "c_util.m"
                            if ((backend_libs__c_util__Lang_5 == (MR_Integer) 0))
#line 550 "c_util.m"
                              {
#line 550 "c_util.m"
                                MR_Integer backend_libs__c_util__Int_69;

#line 551 "c_util.m"
                                {
#line 551 "c_util.m"
                                  mercury__char__to_int_2_p_0(backend_libs__c_util__Char_6, &backend_libs__c_util__Int_69);
                                }
#line 552 "c_util.m"
                                {
#line 552 "c_util.m"
                                  backend_libs__c_util__octal_escape_any_int_2_p_0(backend_libs__c_util__Int_69, &backend_libs__c_util__EscapeChars_41);
                                }
#line 550 "c_util.m"
                              }
#line 453 "c_util.m"
                            else
#line 453 "c_util.m"
                              if ((backend_libs__c_util__Lang_5 == (MR_Integer) 2))
#line 563 "c_util.m"
                                {
#line 563 "c_util.m"
                                  MR_Integer backend_libs__c_util__Int_72;
#line 563 "c_util.m"
                                  MR_String backend_libs__c_util__HexString_73;
#line 563 "c_util.m"
                                  MR_Word backend_libs__c_util__V_75_75;
#line 563 "c_util.m"
                                  MR_Word backend_libs__c_util__V_76_76;

#line 564 "c_util.m"
                                  {
#line 564 "c_util.m"
                                    mercury__char__to_int_2_p_0(backend_libs__c_util__Char_6, &backend_libs__c_util__Int_72);
                                  }
#line 565 "c_util.m"
                                  {
#line 565 "c_util.m"
                                    backend_libs__c_util__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 565 "c_util.m"
                                    MR_hl_field(MR_mktag(1), backend_libs__c_util__V_76_76, 0) = ((MR_Box) (backend_libs__c_util__Int_72));
#line 565 "c_util.m"
                                  }
#line 565 "c_util.m"
                                  {
#line 565 "c_util.m"
                                    backend_libs__c_util__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 565 "c_util.m"
                                    MR_hl_field(MR_mktag(1), backend_libs__c_util__V_75_75, 0) = ((MR_Box) (backend_libs__c_util__V_76_76));
#line 565 "c_util.m"
                                    MR_hl_field(MR_mktag(1), backend_libs__c_util__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 565 "c_util.m"
                                  }
#line 565 "c_util.m"
                                  {
#line 565 "c_util.m"
                                    mercury__string__format_3_p_0((MR_String) "\\u%04x", backend_libs__c_util__V_75_75, &backend_libs__c_util__HexString_73);
                                  }
#line 566 "c_util.m"
                                  {
#line 566 "c_util.m"
                                    mercury__string__to_char_list_2_p_0(backend_libs__c_util__HexString_73, &backend_libs__c_util__EscapeChars_41);
                                  }
#line 563 "c_util.m"
                                }
#line 453 "c_util.m"
                              else
#line 550 "c_util.m"
                                {
#line 550 "c_util.m"
                                  MR_Integer backend_libs__c_util__Int_80;

#line 551 "c_util.m"
                                  {
#line 551 "c_util.m"
                                    mercury__char__to_int_2_p_0(backend_libs__c_util__Char_6, &backend_libs__c_util__Int_80);
                                  }
#line 552 "c_util.m"
                                  {
#line 552 "c_util.m"
                                    backend_libs__c_util__octal_escape_any_int_2_p_0(backend_libs__c_util__Int_80, &backend_libs__c_util__EscapeChars_41);
                                  }
#line 550 "c_util.m"
                                }
#line 460 "c_util.m"
                            {
#line 460 "c_util.m"
                              backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_118_101_114_115_101_95_97_112_112_101_110_100_95_95_91_49_93_95_48_3_p_0(backend_libs__c_util__EscapeChars_41, backend_libs__c_util__V_16_16, &backend_libs__c_util__RevQuotedCharStr_15);
                            }
#line 459 "c_util.m"
                          }
#line 449 "c_util.m"
                      }
#line 429 "c_util.m"
                  }
#line 425 "c_util.m"
              }
#line 421 "c_util.m"
          }
#line 415 "c_util.m"
      }
#line 392 "c_util.m"
    {
#line 392 "c_util.m"
      mercury__string__from_rev_char_list_2_p_0(backend_libs__c_util__RevQuotedCharStr_15, &backend_libs__c_util__EscapedCharStr_8);
    }
#line 380 "c_util.m"
    {
#line 380 "c_util.m"
      mercury__io__write_string_3_p_0(backend_libs__c_util__EscapedCharStr_8);
#line 380 "c_util.m"
      return;
    }
#line 378 "c_util.m"
  }
#line 376 "c_util.m"
}

#line 358 "c_util.m"
static void MR_CALL 
backend_libs__c_util__do_output_quoted_string_5_p_0(
#line 358 "c_util.m"
  MR_Word backend_libs__c_util__Lang_6,
#line 358 "c_util.m"
  MR_String backend_libs__c_util__S_7,
#line 358 "c_util.m"
  MR_Integer backend_libs__c_util__Cur_8)
#line 358 "c_util.m"
{
#line 365 "c_util.m"
  while (MR_TRUE)
#line 365 "c_util.m"
    {
#line 365 "c_util.m"
      /* tailcall optimized into a loop */
#line 365 "c_util.m"
      {
#line 365 "c_util.m"
        MR_bool backend_libs__c_util__succeeded;
#line 365 "c_util.m"
        MR_Integer backend_libs__c_util__Next_10;
#line 365 "c_util.m"
        MR_Char backend_libs__c_util__Char_11;

#line 362 "c_util.m"
        {
#line 362 "c_util.m"
          backend_libs__c_util__succeeded = mercury__string__unsafe_index_next_4_p_0(backend_libs__c_util__S_7, backend_libs__c_util__Cur_8, &backend_libs__c_util__Next_10, &backend_libs__c_util__Char_11);
        }
#line 365 "c_util.m"
        if (backend_libs__c_util__succeeded)
#line 363 "c_util.m"
          {
#line 363 "c_util.m"
            {
#line 363 "c_util.m"
              backend_libs__c_util__output_quoted_char_lang_4_p_3(backend_libs__c_util__Lang_6, backend_libs__c_util__Char_11);
            }
#line 364 "c_util.m"
            /* direct tailcall eliminated */
#line 364 "c_util.m"
            {
#line 364 "c_util.m"
              MR_Integer backend_libs__c_util__Cur__tmp_copy_8 = backend_libs__c_util__Next_10;

#line 364 "c_util.m"
              backend_libs__c_util__Cur_8 = backend_libs__c_util__Cur__tmp_copy_8;
#line 364 "c_util.m"
            }
#line 364 "c_util.m"
            continue;
#line 363 "c_util.m"
          }
#line 365 "c_util.m"
        else
#line 364 "c_util.m"
          {
#line 364 "c_util.m"
          }
#line 365 "c_util.m"
      }
#line 365 "c_util.m"
      break;
#line 365 "c_util.m"
    }
#line 358 "c_util.m"
}

#line 278 "c_util.m"
static void MR_CALL 
backend_libs__c_util__can_print_directly_4_p_0(
#line 278 "c_util.m"
  MR_String backend_libs__c_util__Str_1,
#line 278 "c_util.m"
  MR_Word * backend_libs__c_util__CanPrintDirectly_2)
#line 278 "c_util.m"
{
#line 282 "c_util.m"
  {
#line 282 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 285 "c_util.m"
{
#define MR_PROC_LABEL backend_libs__c_util__can_print_directly_4_p_0

	MR_String Str;
	MR_Word CanPrintDirectly;

	Str =  backend_libs__c_util__Str_1 ;
		{
#line 285 "c_util.m"
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
#line 2622 "backend_libs.c_util.c"

		;}
#undef MR_PROC_LABEL
	 *backend_libs__c_util__CanPrintDirectly_2  = CanPrintDirectly;
#line 285 "c_util.m"
}
#line 282 "c_util.m"
  }
#line 278 "c_util.m"
}

#line 189 "c_util.m"
MR_bool MR_CALL 
backend_libs__c_util__is_valid_c_identifier_1_p_0(
#line 189 "c_util.m"
  MR_String backend_libs__c_util__S_2)
#line 189 "c_util.m"
{
#line 719 "c_util.m"
  {
#line 719 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 719 "c_util.m"
    MR_Char backend_libs__c_util__Start_3;

#line 720 "c_util.m"
    {
#line 720 "c_util.m"
      backend_libs__c_util__succeeded = mercury__string__index_3_p_0(backend_libs__c_util__S_2, (MR_Integer) 0, &backend_libs__c_util__Start_3);
    }
#line 719 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 719 "c_util.m"
      {
#line 721 "c_util.m"
        {
#line 721 "c_util.m"
          backend_libs__c_util__succeeded = mercury__char__is_alpha_or_underscore_1_p_0(backend_libs__c_util__Start_3);
        }
#line 719 "c_util.m"
        if (backend_libs__c_util__succeeded)
#line 722 "c_util.m"
          {
#line 722 "c_util.m"
            return backend_libs__c_util__succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(backend_libs__c_util__S_2);
          }
#line 719 "c_util.m"
      }
#line 719 "c_util.m"
    return backend_libs__c_util__succeeded;
#line 719 "c_util.m"
  }
#line 189 "c_util.m"
}

#line 181 "c_util.m"
void MR_CALL 
backend_libs__c_util__output_pragma_pack_pop_2_p_0(void)
#line 181 "c_util.m"
{
#line 712 "c_util.m"
  {
#line 712 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 713 "c_util.m"
    {
#line 713 "c_util.m"
      mercury__io__write_string_3_p_0((MR_String) "#ifdef MR_MSVC\n");
    }
#line 714 "c_util.m"
    {
#line 714 "c_util.m"
      mercury__io__write_string_3_p_0((MR_String) "#pragma pack(pop)\n");
    }
#line 715 "c_util.m"
    {
#line 715 "c_util.m"
      mercury__io__write_string_3_p_0((MR_String) "#endif\n");
#line 715 "c_util.m"
      return;
    }
#line 712 "c_util.m"
  }
#line 181 "c_util.m"
}

#line 179 "c_util.m"
void MR_CALL 
backend_libs__c_util__output_pragma_pack_push_2_p_0(void)
#line 179 "c_util.m"
{
#line 707 "c_util.m"
  {
#line 707 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 708 "c_util.m"
    {
#line 708 "c_util.m"
      mercury__io__write_string_3_p_0((MR_String) "\n#ifdef MR_MSVC\n");
    }
#line 709 "c_util.m"
    {
#line 709 "c_util.m"
      mercury__io__write_string_3_p_0((MR_String) "#pragma pack(push, MR_BYTES_PER_WORD)\n");
    }
#line 710 "c_util.m"
    {
#line 710 "c_util.m"
      mercury__io__write_string_3_p_0((MR_String) "#endif\n");
#line 710 "c_util.m"
      return;
    }
#line 707 "c_util.m"
  }
#line 179 "c_util.m"
}

#line 171 "c_util.m"
void MR_CALL 
backend_libs__c_util__output_c_file_intro_and_grade_6_p_0(
#line 171 "c_util.m"
  MR_Word backend_libs__c_util__Globals_7,
#line 171 "c_util.m"
  MR_String backend_libs__c_util__SourceFileName_8,
#line 171 "c_util.m"
  MR_String backend_libs__c_util__Version_9,
#line 171 "c_util.m"
  MR_String backend_libs__c_util__Fullarch_10)
#line 171 "c_util.m"
{
#line 663 "c_util.m"
  {
#line 663 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 663 "c_util.m"
    MR_Integer backend_libs__c_util__NumTagBits_12;
#line 663 "c_util.m"
    MR_String backend_libs__c_util__NumTagBitsStr_13;
#line 663 "c_util.m"
    MR_Word backend_libs__c_util__UnboxedFloat_14;
#line 663 "c_util.m"
    MR_String backend_libs__c_util__UnboxedFloatStr_15;
#line 663 "c_util.m"
    MR_Word backend_libs__c_util__PregeneratedDist_16;
#line 663 "c_util.m"
    MR_String backend_libs__c_util__PregeneratedDistStr_17;
#line 663 "c_util.m"
    MR_Word backend_libs__c_util__HighLevelCode_18;
#line 663 "c_util.m"
    MR_String backend_libs__c_util__HighLevelCodeStr_19;
#line 663 "c_util.m"
    MR_Word backend_libs__c_util__V_26_26;
#line 663 "c_util.m"
    MR_Word backend_libs__c_util__V_29_29;
#line 663 "c_util.m"
    MR_Word backend_libs__c_util__V_31_31;
#line 663 "c_util.m"
    MR_Word backend_libs__c_util__V_32_32;
#line 663 "c_util.m"
    MR_Word backend_libs__c_util__V_34_34;
#line 663 "c_util.m"
    MR_Word backend_libs__c_util__V_36_36;
#line 663 "c_util.m"
    MR_Word backend_libs__c_util__V_38_38;
#line 663 "c_util.m"
    MR_Word backend_libs__c_util__V_39_39;
#line 663 "c_util.m"
    MR_Word backend_libs__c_util__V_41_41;
#line 663 "c_util.m"
    MR_Word backend_libs__c_util__V_43_43;
#line 663 "c_util.m"
    MR_Word backend_libs__c_util__V_44_44;
#line 663 "c_util.m"
    MR_Word backend_libs__c_util__V_46_46;
#line 663 "c_util.m"
    MR_Word backend_libs__c_util__V_48_48;
#line 663 "c_util.m"
    MR_Word backend_libs__c_util__V_50_50;
#line 663 "c_util.m"
    MR_Word backend_libs__c_util__V_52_52;
#line 663 "c_util.m"
    MR_Word backend_libs__c_util__V_54_54;
#line 663 "c_util.m"
    MR_Word backend_libs__c_util__V_56_56;
#line 663 "c_util.m"
    MR_Word backend_libs__c_util__V_58_58;
#line 663 "c_util.m"
    MR_Word backend_libs__c_util__V_59_59;
#line 663 "c_util.m"
    MR_Word backend_libs__c_util__V_61_61;
#line 663 "c_util.m"
    MR_Word backend_libs__c_util__V_63_63;
#line 663 "c_util.m"
    MR_Word backend_libs__c_util__V_64_64;
#line 663 "c_util.m"
    MR_Word backend_libs__c_util__V_66_66;
#line 663 "c_util.m"
    MR_Word backend_libs__c_util__V_68_68;
#line 663 "c_util.m"
    MR_Word backend_libs__c_util__V_69_69;
#line 663 "c_util.m"
    MR_Word backend_libs__c_util__V_71_71;
#line 663 "c_util.m"
    MR_Word backend_libs__c_util__V_73_73;

#line 664 "c_util.m"
    {
#line 664 "c_util.m"
      libs__globals__lookup_int_option_3_p_0(backend_libs__c_util__Globals_7, (MR_Integer) 231, &backend_libs__c_util__NumTagBits_12);
    }
#line 665 "c_util.m"
    {
#line 665 "c_util.m"
      mercury__string__int_to_string_2_p_0(backend_libs__c_util__NumTagBits_12, &backend_libs__c_util__NumTagBitsStr_13);
    }
#line 666 "c_util.m"
    {
#line 666 "c_util.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__c_util__Globals_7, (MR_Integer) 237, &backend_libs__c_util__UnboxedFloat_14);
    }
#line 696 "c_util.m"
    if ((backend_libs__c_util__UnboxedFloat_14 == (MR_Integer) 0))
#line 696 "c_util.m"
      backend_libs__c_util__UnboxedFloatStr_15 = (MR_String) "no";
#line 696 "c_util.m"
    else
#line 697 "c_util.m"
      backend_libs__c_util__UnboxedFloatStr_15 = (MR_String) "yes";
#line 668 "c_util.m"
    {
#line 668 "c_util.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__c_util__Globals_7, (MR_Integer) 217, &backend_libs__c_util__PregeneratedDist_16);
    }
#line 696 "c_util.m"
    if ((backend_libs__c_util__PregeneratedDist_16 == (MR_Integer) 0))
#line 696 "c_util.m"
      backend_libs__c_util__PregeneratedDistStr_17 = (MR_String) "no";
#line 696 "c_util.m"
    else
#line 697 "c_util.m"
      backend_libs__c_util__PregeneratedDistStr_17 = (MR_String) "yes";
#line 670 "c_util.m"
    {
#line 670 "c_util.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__c_util__Globals_7, (MR_Integer) 248, &backend_libs__c_util__HighLevelCode_18);
    }
#line 696 "c_util.m"
    if ((backend_libs__c_util__HighLevelCode_18 == (MR_Integer) 0))
#line 696 "c_util.m"
      backend_libs__c_util__HighLevelCodeStr_19 = (MR_String) "no";
#line 696 "c_util.m"
    else
#line 697 "c_util.m"
      backend_libs__c_util__HighLevelCodeStr_19 = (MR_String) "yes";
#line 687 "c_util.m"
    {
#line 687 "c_util.m"
      backend_libs__c_util__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 687 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_73_73, 0) = ((MR_Box) (backend_libs__c_util__HighLevelCodeStr_19));
#line 687 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__c_util_scalar_common_1[6])));
#line 687 "c_util.m"
    }
#line 687 "c_util.m"
    {
#line 687 "c_util.m"
      backend_libs__c_util__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 687 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_71_71, 0) = ((MR_Box) ((MR_String) "** HIGHLEVEL_CODE="));
#line 687 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_71_71, 1) = ((MR_Box) (backend_libs__c_util__V_73_73));
#line 687 "c_util.m"
    }
#line 686 "c_util.m"
    {
#line 686 "c_util.m"
      backend_libs__c_util__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 686 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_69_69, 0) = ((MR_Box) ((MR_String) "\n"));
#line 686 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_69_69, 1) = ((MR_Box) (backend_libs__c_util__V_71_71));
#line 686 "c_util.m"
    }
#line 686 "c_util.m"
    {
#line 686 "c_util.m"
      backend_libs__c_util__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 686 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_68_68, 0) = ((MR_Box) (backend_libs__c_util__PregeneratedDistStr_17));
#line 686 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_68_68, 1) = ((MR_Box) (backend_libs__c_util__V_69_69));
#line 686 "c_util.m"
    }
#line 686 "c_util.m"
    {
#line 686 "c_util.m"
      backend_libs__c_util__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 686 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_66_66, 0) = ((MR_Box) ((MR_String) "** PREGENERATED_DIST="));
#line 686 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_66_66, 1) = ((MR_Box) (backend_libs__c_util__V_68_68));
#line 686 "c_util.m"
    }
#line 685 "c_util.m"
    {
#line 685 "c_util.m"
      backend_libs__c_util__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 685 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_64_64, 0) = ((MR_Box) ((MR_String) "\n"));
#line 685 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_64_64, 1) = ((MR_Box) (backend_libs__c_util__V_66_66));
#line 685 "c_util.m"
    }
#line 685 "c_util.m"
    {
#line 685 "c_util.m"
      backend_libs__c_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 685 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_63_63, 0) = ((MR_Box) (backend_libs__c_util__UnboxedFloatStr_15));
#line 685 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_63_63, 1) = ((MR_Box) (backend_libs__c_util__V_64_64));
#line 685 "c_util.m"
    }
#line 685 "c_util.m"
    {
#line 685 "c_util.m"
      backend_libs__c_util__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 685 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_61_61, 0) = ((MR_Box) ((MR_String) "** UNBOXED_FLOAT="));
#line 685 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_61_61, 1) = ((MR_Box) (backend_libs__c_util__V_63_63));
#line 685 "c_util.m"
    }
#line 684 "c_util.m"
    {
#line 684 "c_util.m"
      backend_libs__c_util__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 684 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_59_59, 0) = ((MR_Box) ((MR_String) "\n"));
#line 684 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_59_59, 1) = ((MR_Box) (backend_libs__c_util__V_61_61));
#line 684 "c_util.m"
    }
#line 684 "c_util.m"
    {
#line 684 "c_util.m"
      backend_libs__c_util__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 684 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_58_58, 0) = ((MR_Box) (backend_libs__c_util__NumTagBitsStr_13));
#line 684 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_58_58, 1) = ((MR_Box) (backend_libs__c_util__V_59_59));
#line 684 "c_util.m"
    }
#line 684 "c_util.m"
    {
#line 684 "c_util.m"
      backend_libs__c_util__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 684 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_56_56, 0) = ((MR_Box) ((MR_String) "** TAG_BITS="));
#line 684 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_56_56, 1) = ((MR_Box) (backend_libs__c_util__V_58_58));
#line 684 "c_util.m"
    }
#line 683 "c_util.m"
    {
#line 683 "c_util.m"
      backend_libs__c_util__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 683 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_54_54, 0) = ((MR_Box) ((MR_String) "**\n"));
#line 683 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_54_54, 1) = ((MR_Box) (backend_libs__c_util__V_56_56));
#line 683 "c_util.m"
    }
#line 682 "c_util.m"
    {
#line 682 "c_util.m"
      backend_libs__c_util__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_52_52, 0) = ((MR_Box) ((MR_String) "** the generation of this C file were\n"));
#line 682 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_52_52, 1) = ((MR_Box) (backend_libs__c_util__V_54_54));
#line 682 "c_util.m"
    }
#line 681 "c_util.m"
    {
#line 681 "c_util.m"
      backend_libs__c_util__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 681 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_50_50, 0) = ((MR_Box) ((MR_String) "** The autoconfigured grade settings governing\n"));
#line 681 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_50_50, 1) = ((MR_Box) (backend_libs__c_util__V_52_52));
#line 681 "c_util.m"
    }
#line 680 "c_util.m"
    {
#line 680 "c_util.m"
      backend_libs__c_util__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 680 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_48_48, 0) = ((MR_Box) ((MR_String) "**\n"));
#line 680 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_48_48, 1) = ((MR_Box) (backend_libs__c_util__V_50_50));
#line 680 "c_util.m"
    }
#line 679 "c_util.m"
    {
#line 679 "c_util.m"
      backend_libs__c_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 679 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_46_46, 0) = ((MR_Box) ((MR_String) "** Do not edit.\n"));
#line 679 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_46_46, 1) = ((MR_Box) (backend_libs__c_util__V_48_48));
#line 679 "c_util.m"
    }
#line 678 "c_util.m"
    {
#line 678 "c_util.m"
      backend_libs__c_util__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 678 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_44_44, 0) = ((MR_Box) ((MR_String) ".\n"));
#line 678 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_44_44, 1) = ((MR_Box) (backend_libs__c_util__V_46_46));
#line 678 "c_util.m"
    }
#line 678 "c_util.m"
    {
#line 678 "c_util.m"
      backend_libs__c_util__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 678 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_43_43, 0) = ((MR_Box) (backend_libs__c_util__Fullarch_10));
#line 678 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_43_43, 1) = ((MR_Box) (backend_libs__c_util__V_44_44));
#line 678 "c_util.m"
    }
#line 678 "c_util.m"
    {
#line 678 "c_util.m"
      backend_libs__c_util__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 678 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_41_41, 0) = ((MR_Box) ((MR_String) "** configured for "));
#line 678 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_41_41, 1) = ((MR_Box) (backend_libs__c_util__V_43_43));
#line 678 "c_util.m"
    }
#line 677 "c_util.m"
    {
#line 677 "c_util.m"
      backend_libs__c_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 677 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_39_39, 0) = ((MR_Box) ((MR_String) "\n"));
#line 677 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_39_39, 1) = ((MR_Box) (backend_libs__c_util__V_41_41));
#line 677 "c_util.m"
    }
#line 677 "c_util.m"
    {
#line 677 "c_util.m"
      backend_libs__c_util__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 677 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_38_38, 0) = ((MR_Box) (backend_libs__c_util__Version_9));
#line 677 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_38_38, 1) = ((MR_Box) (backend_libs__c_util__V_39_39));
#line 677 "c_util.m"
    }
#line 677 "c_util.m"
    {
#line 677 "c_util.m"
      backend_libs__c_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 677 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_36_36, 0) = ((MR_Box) ((MR_String) "** version "));
#line 677 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_36_36, 1) = ((MR_Box) (backend_libs__c_util__V_38_38));
#line 677 "c_util.m"
    }
#line 676 "c_util.m"
    {
#line 676 "c_util.m"
      backend_libs__c_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 676 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_34_34, 0) = ((MR_Box) ((MR_String) "** by the Mercury compiler,\n"));
#line 676 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_34_34, 1) = ((MR_Box) (backend_libs__c_util__V_36_36));
#line 676 "c_util.m"
    }
#line 675 "c_util.m"
    {
#line 675 "c_util.m"
      backend_libs__c_util__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 675 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_32_32, 0) = ((MR_Box) ((MR_String) "\'\n"));
#line 675 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_32_32, 1) = ((MR_Box) (backend_libs__c_util__V_34_34));
#line 675 "c_util.m"
    }
#line 675 "c_util.m"
    {
#line 675 "c_util.m"
      backend_libs__c_util__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 675 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_31_31, 0) = ((MR_Box) (backend_libs__c_util__SourceFileName_8));
#line 675 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_31_31, 1) = ((MR_Box) (backend_libs__c_util__V_32_32));
#line 675 "c_util.m"
    }
#line 675 "c_util.m"
    {
#line 675 "c_util.m"
      backend_libs__c_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 675 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_29_29, 0) = ((MR_Box) ((MR_String) "** Automatically generated from \140"));
#line 675 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_29_29, 1) = ((MR_Box) (backend_libs__c_util__V_31_31));
#line 675 "c_util.m"
    }
#line 674 "c_util.m"
    {
#line 674 "c_util.m"
      backend_libs__c_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 674 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_26_26, 0) = ((MR_Box) ((MR_String) "/*\n"));
#line 674 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_26_26, 1) = ((MR_Box) (backend_libs__c_util__V_29_29));
#line 674 "c_util.m"
    }
#line 673 "c_util.m"
    {
#line 673 "c_util.m"
      mercury__io__write_strings_3_p_0(backend_libs__c_util__V_26_26);
#line 673 "c_util.m"
      return;
    }
#line 663 "c_util.m"
  }
#line 171 "c_util.m"
}

#line 158 "c_util.m"
void MR_CALL 
backend_libs__c_util__binop_category_string_3_p_0(
#line 158 "c_util.m"
  MR_Word backend_libs__c_util__HeadVar__1_1,
#line 158 "c_util.m"
  MR_Word * backend_libs__c_util__HeadVar__2_2,
#line 158 "c_util.m"
  MR_String * backend_libs__c_util__HeadVar__3_3)
#line 158 "c_util.m"
{
#line 605 "c_util.m"
  {
#line 605 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 605 "c_util.m"
    if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 639 "c_util.m"
      {
#line 639 "c_util.m"
        *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 6;
#line 639 "c_util.m"
        *backend_libs__c_util__HeadVar__3_3 = (MR_String) "&";
#line 639 "c_util.m"
      }
#line 605 "c_util.m"
    else
#line 605 "c_util.m"
      if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 640 "c_util.m"
        {
#line 640 "c_util.m"
          *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 6;
#line 640 "c_util.m"
          *backend_libs__c_util__HeadVar__3_3 = (MR_String) "|";
#line 640 "c_util.m"
        }
#line 605 "c_util.m"
      else
#line 605 "c_util.m"
        if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 641 "c_util.m"
          {
#line 641 "c_util.m"
            *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 6;
#line 641 "c_util.m"
            *backend_libs__c_util__HeadVar__3_3 = (MR_String) "^";
#line 641 "c_util.m"
          }
#line 605 "c_util.m"
        else
#line 605 "c_util.m"
          if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 653 "c_util.m"
            {
#line 653 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 7;
#line 653 "c_util.m"
              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "MR_body";
#line 653 "c_util.m"
            }
#line 605 "c_util.m"
          else
#line 605 "c_util.m"
            if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 39)))))
#line 608 "c_util.m"
              {
#line 608 "c_util.m"
                *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 1;
#line 608 "c_util.m"
                *backend_libs__c_util__HeadVar__3_3 = (MR_String) "COMPOUND_EQ";
#line 608 "c_util.m"
              }
#line 605 "c_util.m"
            else
#line 605 "c_util.m"
              if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 40)))))
#line 607 "c_util.m"
                {
#line 607 "c_util.m"
                  *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 1;
#line 607 "c_util.m"
                  *backend_libs__c_util__HeadVar__3_3 = (MR_String) "COMPOUND_LT";
#line 607 "c_util.m"
                }
#line 605 "c_util.m"
              else
#line 605 "c_util.m"
                if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 643 "c_util.m"
                  {
#line 643 "c_util.m"
                    *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 6;
#line 643 "c_util.m"
                    *backend_libs__c_util__HeadVar__3_3 = (MR_String) "==";
#line 643 "c_util.m"
                  }
#line 605 "c_util.m"
                else
#line 605 "c_util.m"
                  if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 30)))))
#line 622 "c_util.m"
                    {
#line 622 "c_util.m"
                      *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 5;
#line 622 "c_util.m"
                      *backend_libs__c_util__HeadVar__3_3 = (MR_String) "/";
#line 622 "c_util.m"
                    }
#line 605 "c_util.m"
                  else
#line 605 "c_util.m"
                    if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 31)))))
#line 624 "c_util.m"
                      {
#line 624 "c_util.m"
                        *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 4;
#line 624 "c_util.m"
                        *backend_libs__c_util__HeadVar__3_3 = (MR_String) "==";
#line 624 "c_util.m"
                      }
#line 605 "c_util.m"
                    else
#line 605 "c_util.m"
                      if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 38)))))
#line 657 "c_util.m"
                        {
#line 657 "c_util.m"
                          *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 8;
#line 658 "c_util.m"
                          *backend_libs__c_util__HeadVar__3_3 = (MR_String) "MR_float_from_dword";
#line 657 "c_util.m"
                        }
#line 605 "c_util.m"
                      else
#line 605 "c_util.m"
                        if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 36)))))
#line 627 "c_util.m"
                          {
#line 627 "c_util.m"
                            *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 4;
#line 627 "c_util.m"
                            *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">=";
#line 627 "c_util.m"
                          }
#line 605 "c_util.m"
                        else
#line 605 "c_util.m"
                          if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 34)))))
#line 629 "c_util.m"
                            {
#line 629 "c_util.m"
                              *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 4;
#line 629 "c_util.m"
                              *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">";
#line 629 "c_util.m"
                            }
#line 605 "c_util.m"
                          else
#line 605 "c_util.m"
                            if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 35)))))
#line 626 "c_util.m"
                              {
#line 626 "c_util.m"
                                *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 4;
#line 626 "c_util.m"
                                *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<=";
#line 626 "c_util.m"
                              }
#line 605 "c_util.m"
                            else
#line 605 "c_util.m"
                              if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 33)))))
#line 628 "c_util.m"
                                {
#line 628 "c_util.m"
                                  *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 4;
#line 628 "c_util.m"
                                  *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<";
#line 628 "c_util.m"
                                }
#line 605 "c_util.m"
                              else
#line 605 "c_util.m"
                                if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 28)))))
#line 620 "c_util.m"
                                  {
#line 620 "c_util.m"
                                    *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 5;
#line 620 "c_util.m"
                                    *backend_libs__c_util__HeadVar__3_3 = (MR_String) "-";
#line 620 "c_util.m"
                                  }
#line 605 "c_util.m"
                                else
#line 605 "c_util.m"
                                  if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 32)))))
#line 625 "c_util.m"
                                    {
#line 625 "c_util.m"
                                      *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 4;
#line 625 "c_util.m"
                                      *backend_libs__c_util__HeadVar__3_3 = (MR_String) "!=";
#line 625 "c_util.m"
                                    }
#line 605 "c_util.m"
                                  else
#line 605 "c_util.m"
                                    if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 27)))))
#line 619 "c_util.m"
                                      {
#line 619 "c_util.m"
                                        *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 5;
#line 619 "c_util.m"
                                        *backend_libs__c_util__HeadVar__3_3 = (MR_String) "+";
#line 619 "c_util.m"
                                      }
#line 605 "c_util.m"
                                    else
#line 605 "c_util.m"
                                      if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 29)))))
#line 621 "c_util.m"
                                        {
#line 621 "c_util.m"
                                          *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 5;
#line 621 "c_util.m"
                                          *backend_libs__c_util__HeadVar__3_3 = (MR_String) "*";
#line 621 "c_util.m"
                                        }
#line 605 "c_util.m"
                                      else
#line 605 "c_util.m"
                                        if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 37)))))
#line 655 "c_util.m"
                                          {
#line 655 "c_util.m"
                                            *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 8;
#line 656 "c_util.m"
                                            *backend_libs__c_util__HeadVar__3_3 = (MR_String) "MR_float_word_bits";
#line 655 "c_util.m"
                                          }
#line 605 "c_util.m"
                                        else
#line 605 "c_util.m"
                                          if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 631 "c_util.m"
                                            {
#line 631 "c_util.m"
                                              *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 6;
#line 631 "c_util.m"
                                              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "+";
#line 631 "c_util.m"
                                            }
#line 605 "c_util.m"
                                          else
#line 605 "c_util.m"
                                            if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 634 "c_util.m"
                                              {
#line 634 "c_util.m"
                                                *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 6;
#line 634 "c_util.m"
                                                *backend_libs__c_util__HeadVar__3_3 = (MR_String) "/";
#line 634 "c_util.m"
                                              }
#line 605 "c_util.m"
                                            else
#line 605 "c_util.m"
                                              if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25)))))
#line 650 "c_util.m"
                                                {
#line 650 "c_util.m"
                                                  *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 6;
#line 650 "c_util.m"
                                                  *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">=";
#line 650 "c_util.m"
                                                }
#line 605 "c_util.m"
                                              else
#line 605 "c_util.m"
                                                if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23)))))
#line 648 "c_util.m"
                                                  {
#line 648 "c_util.m"
                                                    *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 6;
#line 648 "c_util.m"
                                                    *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">";
#line 648 "c_util.m"
                                                  }
#line 605 "c_util.m"
                                                else
#line 605 "c_util.m"
                                                  if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24)))))
#line 649 "c_util.m"
                                                    {
#line 649 "c_util.m"
                                                      *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 6;
#line 649 "c_util.m"
                                                      *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<=";
#line 649 "c_util.m"
                                                    }
#line 605 "c_util.m"
                                                  else
#line 605 "c_util.m"
                                                    if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22)))))
#line 647 "c_util.m"
                                                      {
#line 647 "c_util.m"
                                                        *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 6;
#line 647 "c_util.m"
                                                        *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<";
#line 647 "c_util.m"
                                                      }
#line 605 "c_util.m"
                                                    else
#line 605 "c_util.m"
                                                      if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 642 "c_util.m"
                                                        {
#line 642 "c_util.m"
                                                          *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 6;
#line 642 "c_util.m"
                                                          *backend_libs__c_util__HeadVar__3_3 = (MR_String) "%";
#line 642 "c_util.m"
                                                        }
#line 605 "c_util.m"
                                                      else
#line 605 "c_util.m"
                                                        if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 633 "c_util.m"
                                                          {
#line 633 "c_util.m"
                                                            *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 6;
#line 633 "c_util.m"
                                                            *backend_libs__c_util__HeadVar__3_3 = (MR_String) "*";
#line 633 "c_util.m"
                                                          }
#line 605 "c_util.m"
                                                        else
#line 605 "c_util.m"
                                                          if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 632 "c_util.m"
                                                            {
#line 632 "c_util.m"
                                                              *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 6;
#line 632 "c_util.m"
                                                              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "-";
#line 632 "c_util.m"
                                                            }
#line 605 "c_util.m"
                                                          else
#line 605 "c_util.m"
                                                            if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 645 "c_util.m"
                                                              {
#line 645 "c_util.m"
                                                                *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 6;
#line 645 "c_util.m"
                                                                *backend_libs__c_util__HeadVar__3_3 = (MR_String) "&&";
#line 645 "c_util.m"
                                                              }
#line 605 "c_util.m"
                                                            else
#line 605 "c_util.m"
                                                              if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 646 "c_util.m"
                                                                {
#line 646 "c_util.m"
                                                                  *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 6;
#line 646 "c_util.m"
                                                                  *backend_libs__c_util__HeadVar__3_3 = (MR_String) "||";
#line 646 "c_util.m"
                                                                }
#line 605 "c_util.m"
                                                              else
#line 605 "c_util.m"
                                                                if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 644 "c_util.m"
                                                                  {
#line 644 "c_util.m"
                                                                    *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 6;
#line 644 "c_util.m"
                                                                    *backend_libs__c_util__HeadVar__3_3 = (MR_String) "!=";
#line 644 "c_util.m"
                                                                  }
#line 605 "c_util.m"
                                                                else
#line 605 "c_util.m"
                                                                  if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 21)))))
#line 652 "c_util.m"
                                                                    {
#line 652 "c_util.m"
                                                                      *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 7;
#line 652 "c_util.m"
                                                                      *backend_libs__c_util__HeadVar__3_3 = (MR_String) "MR_strcmp";
#line 652 "c_util.m"
                                                                    }
#line 605 "c_util.m"
                                                                  else
#line 605 "c_util.m"
                                                                    if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 610 "c_util.m"
                                                                      {
#line 610 "c_util.m"
                                                                        *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 2;
#line 610 "c_util.m"
                                                                        *backend_libs__c_util__HeadVar__3_3 = (MR_String) "==";
#line 610 "c_util.m"
                                                                      }
#line 605 "c_util.m"
                                                                    else
#line 605 "c_util.m"
                                                                      if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 20)))))
#line 613 "c_util.m"
                                                                        {
#line 613 "c_util.m"
                                                                          *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 2;
#line 613 "c_util.m"
                                                                          *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">=";
#line 613 "c_util.m"
                                                                        }
#line 605 "c_util.m"
                                                                      else
#line 605 "c_util.m"
                                                                        if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18)))))
#line 615 "c_util.m"
                                                                          {
#line 615 "c_util.m"
                                                                            *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 2;
#line 615 "c_util.m"
                                                                            *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">";
#line 615 "c_util.m"
                                                                          }
#line 605 "c_util.m"
                                                                        else
#line 605 "c_util.m"
                                                                          if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 19)))))
#line 612 "c_util.m"
                                                                            {
#line 612 "c_util.m"
                                                                              *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 2;
#line 612 "c_util.m"
                                                                              *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<=";
#line 612 "c_util.m"
                                                                            }
#line 605 "c_util.m"
                                                                          else
#line 605 "c_util.m"
                                                                            if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 614 "c_util.m"
                                                                              {
#line 614 "c_util.m"
                                                                                *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 2;
#line 614 "c_util.m"
                                                                                *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<";
#line 614 "c_util.m"
                                                                              }
#line 605 "c_util.m"
                                                                            else
#line 605 "c_util.m"
                                                                              if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 611 "c_util.m"
                                                                                {
#line 611 "c_util.m"
                                                                                  *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 2;
#line 611 "c_util.m"
                                                                                  *backend_libs__c_util__HeadVar__3_3 = (MR_String) "!=";
#line 611 "c_util.m"
                                                                                }
#line 605 "c_util.m"
                                                                              else
#line 605 "c_util.m"
                                                                                if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 635 "c_util.m"
                                                                                  {
#line 635 "c_util.m"
                                                                                    *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 6;
#line 636 "c_util.m"
                                                                                    *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<<";
#line 635 "c_util.m"
                                                                                  }
#line 605 "c_util.m"
                                                                                else
#line 605 "c_util.m"
                                                                                  if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 637 "c_util.m"
                                                                                    {
#line 637 "c_util.m"
                                                                                      *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 6;
#line 638 "c_util.m"
                                                                                      *backend_libs__c_util__HeadVar__3_3 = (MR_String) ">>";
#line 637 "c_util.m"
                                                                                    }
#line 605 "c_util.m"
                                                                                  else
#line 605 "c_util.m"
                                                                                    if ((backend_libs__c_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26)))))
#line 617 "c_util.m"
                                                                                      {
#line 617 "c_util.m"
                                                                                        *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 3;
#line 617 "c_util.m"
                                                                                        *backend_libs__c_util__HeadVar__3_3 = (MR_String) "<=";
#line 617 "c_util.m"
                                                                                      }
#line 605 "c_util.m"
                                                                                    else
#line 605 "c_util.m"
                                                                                      {
#line 605 "c_util.m"
                                                                                        *backend_libs__c_util__HeadVar__2_2 = (MR_Integer) 0;
#line 605 "c_util.m"
                                                                                        *backend_libs__c_util__HeadVar__3_3 = (MR_String) "ARRAY_INDEX";
#line 605 "c_util.m"
                                                                                      }
#line 605 "c_util.m"
  }
#line 158 "c_util.m"
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
#line 590 "c_util.m"
  {
#line 590 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 590 "c_util.m"
    if ((backend_libs__c_util__HeadVar__1_1 == (MR_Integer) 6))
#line 596 "c_util.m"
      *backend_libs__c_util__HeadVar__2_2 = (MR_String) "~";
#line 590 "c_util.m"
    else
#line 590 "c_util.m"
      if ((backend_libs__c_util__HeadVar__1_1 == (MR_Integer) 8))
#line 598 "c_util.m"
        *backend_libs__c_util__HeadVar__2_2 = (MR_String) "MR_hash_string";
#line 590 "c_util.m"
      else
#line 590 "c_util.m"
        if ((backend_libs__c_util__HeadVar__1_1 == (MR_Integer) 9))
#line 599 "c_util.m"
          *backend_libs__c_util__HeadVar__2_2 = (MR_String) "MR_hash_string2";
#line 590 "c_util.m"
        else
#line 590 "c_util.m"
          if ((backend_libs__c_util__HeadVar__1_1 == (MR_Integer) 10))
#line 600 "c_util.m"
            *backend_libs__c_util__HeadVar__2_2 = (MR_String) "MR_hash_string3";
#line 590 "c_util.m"
          else
#line 590 "c_util.m"
            if ((backend_libs__c_util__HeadVar__1_1 == (MR_Integer) 7))
#line 597 "c_util.m"
              *backend_libs__c_util__HeadVar__2_2 = (MR_String) "!";
#line 590 "c_util.m"
            else
#line 590 "c_util.m"
              if ((backend_libs__c_util__HeadVar__1_1 == (MR_Integer) 4))
#line 594 "c_util.m"
                *backend_libs__c_util__HeadVar__2_2 = (MR_String) "MR_mkbody";
#line 590 "c_util.m"
              else
#line 590 "c_util.m"
                if ((backend_libs__c_util__HeadVar__1_1 == (MR_Integer) 0))
#line 590 "c_util.m"
                  *backend_libs__c_util__HeadVar__2_2 = (MR_String) "MR_mktag";
#line 590 "c_util.m"
                else
#line 590 "c_util.m"
                  if ((backend_libs__c_util__HeadVar__1_1 == (MR_Integer) 3))
#line 593 "c_util.m"
                    *backend_libs__c_util__HeadVar__2_2 = (MR_String) "MR_strip_tag";
#line 590 "c_util.m"
                  else
#line 590 "c_util.m"
                    if ((backend_libs__c_util__HeadVar__1_1 == (MR_Integer) 1))
#line 591 "c_util.m"
                      *backend_libs__c_util__HeadVar__2_2 = (MR_String) "MR_tag";
#line 590 "c_util.m"
                    else
#line 590 "c_util.m"
                      if ((backend_libs__c_util__HeadVar__1_1 == (MR_Integer) 5))
#line 595 "c_util.m"
                        *backend_libs__c_util__HeadVar__2_2 = (MR_String) "MR_unmkbody";
#line 590 "c_util.m"
                      else
#line 592 "c_util.m"
                        *backend_libs__c_util__HeadVar__2_2 = (MR_String) "MR_unmktag";
#line 590 "c_util.m"
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
#line 582 "c_util.m"
  {
#line 582 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 582 "c_util.m"
    MR_String backend_libs__c_util__V_8_8;
#line 582 "c_util.m"
    MR_Word backend_libs__c_util__V_12_12;
#line 582 "c_util.m"
    MR_Word backend_libs__c_util__V_13_13;

#line 574 "c_util.m"
    {
#line 574 "c_util.m"
      backend_libs__c_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 574 "c_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__c_util__V_13_13, 0) = MR_box_float(backend_libs__c_util__Float_4);
#line 574 "c_util.m"
    }
#line 574 "c_util.m"
    {
#line 574 "c_util.m"
      backend_libs__c_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_12_12, 0) = ((MR_Box) (backend_libs__c_util__V_13_13));
#line 574 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_12_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 574 "c_util.m"
    }
#line 574 "c_util.m"
    {
#line 574 "c_util.m"
      backend_libs__c_util__V_8_8 = mercury__string__format_2_f_0((MR_String) "%#.17g", backend_libs__c_util__V_12_12);
    }
#line 583 "c_util.m"
    {
#line 583 "c_util.m"
      mercury__io__write_string_3_p_0(backend_libs__c_util__V_8_8);
#line 583 "c_util.m"
      return;
    }
#line 582 "c_util.m"
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
#line 574 "c_util.m"
  {
#line 574 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 574 "c_util.m"
    MR_String backend_libs__c_util__HeadVar__2_2;
#line 574 "c_util.m"
    MR_Word backend_libs__c_util__V_5_5;
#line 574 "c_util.m"
    MR_Word backend_libs__c_util__V_6_6;

#line 574 "c_util.m"
    {
#line 574 "c_util.m"
      backend_libs__c_util__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 574 "c_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__c_util__V_6_6, 0) = MR_box_float(backend_libs__c_util__Float_3);
#line 574 "c_util.m"
    }
#line 574 "c_util.m"
    {
#line 574 "c_util.m"
      backend_libs__c_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_5_5, 0) = ((MR_Box) (backend_libs__c_util__V_6_6));
#line 574 "c_util.m"
      MR_hl_field(MR_mktag(1), backend_libs__c_util__V_5_5, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 574 "c_util.m"
    }
#line 574 "c_util.m"
    {
#line 574 "c_util.m"
      return backend_libs__c_util__HeadVar__2_2 = mercury__string__format_2_f_0((MR_String) "%#.17g", backend_libs__c_util__V_5_5);
    }
#line 574 "c_util.m"
    return backend_libs__c_util__HeadVar__2_2;
#line 574 "c_util.m"
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
#line 382 "c_util.m"
  {
#line 382 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 382 "c_util.m"
    MR_String backend_libs__c_util__HeadVar__2_2;

#line 382 "c_util.m"
    {
#line 382 "c_util.m"
      return backend_libs__c_util__HeadVar__2_2 = backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0(backend_libs__c_util__Char_3);
    }
#line 382 "c_util.m"
    return backend_libs__c_util__HeadVar__2_2;
#line 382 "c_util.m"
  }
#line 117 "c_util.m"
}

#line 395 "c_util.m"
static void MR_CALL 
backend_libs__c_util__quote_string_1_f_0_1(
#line 395 "c_util.m"
  MR_Box backend_libs__c_util__closure_arg,
#line 395 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_1,
#line 395 "c_util.m"
  MR_Box backend_libs__c_util__wrapper_arg_2,
#line 395 "c_util.m"
  MR_Box * backend_libs__c_util__wrapper_arg_3)
#line 395 "c_util.m"
{
#line 395 "c_util.m"
  {
#line 395 "c_util.m"
    MR_Box backend_libs__c_util__closure = backend_libs__c_util__closure_arg;
#line 395 "c_util.m"
    MR_Word backend_libs__c_util__conv0_RevChars_6;

#line 395 "c_util.m"
    {
#line 395 "c_util.m"
      backend_libs__c_util__quote_one_char_c_3_p_0(((MR_Char) (MR_Word) backend_libs__c_util__wrapper_arg_1), ((MR_Word) backend_libs__c_util__wrapper_arg_2), &backend_libs__c_util__conv0_RevChars_6);
    }
#line 395 "c_util.m"
    *backend_libs__c_util__wrapper_arg_3 = ((MR_Box) (backend_libs__c_util__conv0_RevChars_6));
#line 395 "c_util.m"
  }
#line 395 "c_util.m"
}

#line 111 "c_util.m"
MR_String MR_CALL 
backend_libs__c_util__quote_string_1_f_0(
#line 111 "c_util.m"
  MR_String backend_libs__c_util__String_3)
#line 111 "c_util.m"
{
#line 394 "c_util.m"
  {
#line 394 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 394 "c_util.m"
    MR_String backend_libs__c_util__QuotedString_4;
#line 394 "c_util.m"
    MR_Word backend_libs__c_util__RevQuotedChars_5;
#line 395 "c_util.m"
    MR_Box backend_libs__c_util__conv1_RevQuotedChars_5;

#line 395 "c_util.m"
    {
#line 395 "c_util.m"
      mercury__string__foldl_4_p_1((MR_Word) &backend_libs__c_util_scalar_common_1[0], (MR_Word) &backend_libs__c_util_scalar_common_3[0], backend_libs__c_util__String_3, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &backend_libs__c_util__conv1_RevQuotedChars_5);
    }
#line 395 "c_util.m"
    backend_libs__c_util__RevQuotedChars_5 = ((MR_Word) backend_libs__c_util__conv1_RevQuotedChars_5);
#line 396 "c_util.m"
    {
#line 396 "c_util.m"
      mercury__string__from_rev_char_list_2_p_0(backend_libs__c_util__RevQuotedChars_5, &backend_libs__c_util__QuotedString_4);
    }
#line 394 "c_util.m"
    return backend_libs__c_util__QuotedString_4;
#line 394 "c_util.m"
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
#line 369 "c_util.m"
  {
#line 369 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 369 "c_util.m"
    MR_String backend_libs__c_util__EscapedCharStr_15;

#line 379 "c_util.m"
    {
#line 379 "c_util.m"
      backend_libs__c_util__EscapedCharStr_15 = backend_libs__c_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_113_117_111_116_101_95_99_104_97_114_95_108_97_110_103_95_95_91_49_93_95_48_2_f_0(backend_libs__c_util__Char_4);
    }
#line 380 "c_util.m"
    {
#line 380 "c_util.m"
      mercury__io__write_string_3_p_0(backend_libs__c_util__EscapedCharStr_15);
#line 380 "c_util.m"
      return;
    }
#line 369 "c_util.m"
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
#line 352 "c_util.m"
  while (MR_TRUE)
#line 352 "c_util.m"
    {
#line 352 "c_util.m"
      /* tailcall optimized into a loop */
#line 352 "c_util.m"
      {
#line 352 "c_util.m"
        MR_bool backend_libs__c_util__succeeded;

#line 352 "c_util.m"
        if ((backend_libs__c_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 352 "c_util.m"
          {
#line 352 "c_util.m"
          }
#line 352 "c_util.m"
        else
#line 353 "c_util.m"
          {
#line 353 "c_util.m"
            MR_String backend_libs__c_util__S_10 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__c_util__HeadVar__2_2, (MR_Integer) 0)));
#line 353 "c_util.m"
            MR_Word backend_libs__c_util__Ss_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__c_util__HeadVar__2_2, (MR_Integer) 1)));
#line 353 "c_util.m"
            MR_Char backend_libs__c_util__V_16_16;

#line 329 "c_util.m"
            if ((backend_libs__c_util__HeadVar__1_1 == (MR_Integer) 0))
#line 329 "c_util.m"
              {
#line 329 "c_util.m"
                MR_String backend_libs__c_util__Left_25;
#line 329 "c_util.m"
                MR_String backend_libs__c_util__Right_26;

#line 334 "c_util.m"
                {
#line 334 "c_util.m"
                  mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__S_10, (MR_Integer) 160, &backend_libs__c_util__Left_25, &backend_libs__c_util__Right_26);
                }
#line 335 "c_util.m"
                {
#line 335 "c_util.m"
                  backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__Left_25, (MR_Integer) 0);
                }
#line 336 "c_util.m"
                backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_26, (MR_String) "") == 0);
#line 338 "c_util.m"
                if (backend_libs__c_util__succeeded)
#line 336 "c_util.m"
                  {
#line 336 "c_util.m"
                  }
#line 338 "c_util.m"
                else
#line 339 "c_util.m"
                  {
#line 339 "c_util.m"
                    MR_String backend_libs__c_util__Left_40;
#line 339 "c_util.m"
                    MR_String backend_libs__c_util__Right_41;

#line 339 "c_util.m"
                    {
#line 339 "c_util.m"
                      mercury__io__write_string_3_p_0((MR_String) "\" \"");
                    }
#line 334 "c_util.m"
                    {
#line 334 "c_util.m"
                      mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Right_26, (MR_Integer) 160, &backend_libs__c_util__Left_40, &backend_libs__c_util__Right_41);
                    }
#line 335 "c_util.m"
                    {
#line 335 "c_util.m"
                      backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__Left_40, (MR_Integer) 0);
                    }
#line 336 "c_util.m"
                    backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_41, (MR_String) "") == 0);
#line 338 "c_util.m"
                    if (backend_libs__c_util__succeeded)
#line 336 "c_util.m"
                      {
#line 336 "c_util.m"
                      }
#line 338 "c_util.m"
                    else
#line 339 "c_util.m"
                      {
#line 339 "c_util.m"
                        MR_String backend_libs__c_util__Left_55;
#line 339 "c_util.m"
                        MR_String backend_libs__c_util__Right_56;

#line 339 "c_util.m"
                        {
#line 339 "c_util.m"
                          mercury__io__write_string_3_p_0((MR_String) "\" \"");
                        }
#line 334 "c_util.m"
                        {
#line 334 "c_util.m"
                          mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Right_41, (MR_Integer) 160, &backend_libs__c_util__Left_55, &backend_libs__c_util__Right_56);
                        }
#line 335 "c_util.m"
                        {
#line 335 "c_util.m"
                          backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__Left_55, (MR_Integer) 0);
                        }
#line 336 "c_util.m"
                        backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_56, (MR_String) "") == 0);
#line 338 "c_util.m"
                        if (backend_libs__c_util__succeeded)
#line 336 "c_util.m"
                          {
#line 336 "c_util.m"
                          }
#line 338 "c_util.m"
                        else
#line 339 "c_util.m"
                          {
#line 339 "c_util.m"
                            {
#line 339 "c_util.m"
                              mercury__io__write_string_3_p_0((MR_String) "\" \"");
                            }
#line 340 "c_util.m"
                            {
#line 340 "c_util.m"
                              backend_libs__c_util__output_quoted_string_lang_4_p_0(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__Right_56);
                            }
#line 339 "c_util.m"
                          }
#line 339 "c_util.m"
                      }
#line 339 "c_util.m"
                  }
#line 329 "c_util.m"
              }
#line 329 "c_util.m"
            else
#line 345 "c_util.m"
              {
#line 346 "c_util.m"
                {
#line 346 "c_util.m"
                  backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__S_10, (MR_Integer) 0);
                }
#line 345 "c_util.m"
              }
#line 355 "c_util.m"
            {
#line 355 "c_util.m"
              backend_libs__c_util__V_16_16 = mercury__char__det_from_int_1_f_0((MR_Integer) 0);
            }
#line 355 "c_util.m"
            {
#line 355 "c_util.m"
              backend_libs__c_util__output_quoted_char_lang_4_p_3(backend_libs__c_util__HeadVar__1_1, backend_libs__c_util__V_16_16);
            }
#line 356 "c_util.m"
            /* direct tailcall eliminated */
#line 356 "c_util.m"
            {
#line 356 "c_util.m"
              MR_Word backend_libs__c_util__HeadVar__2__tmp_copy_2 = backend_libs__c_util__Ss_11;

#line 356 "c_util.m"
              backend_libs__c_util__HeadVar__2_2 = backend_libs__c_util__HeadVar__2__tmp_copy_2;
#line 356 "c_util.m"
            }
#line 356 "c_util.m"
            continue;
#line 353 "c_util.m"
          }
#line 352 "c_util.m"
      }
#line 352 "c_util.m"
      break;
#line 352 "c_util.m"
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
#line 349 "c_util.m"
  {
#line 349 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 350 "c_util.m"
    {
#line 350 "c_util.m"
      backend_libs__c_util__output_quoted_multi_string_lang_4_p_0((MR_Integer) 0, backend_libs__c_util__Ss_4);
#line 350 "c_util.m"
      return;
    }
#line 349 "c_util.m"
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
#line 329 "c_util.m"
  {
#line 329 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 329 "c_util.m"
    if ((backend_libs__c_util__Lang_5 == (MR_Integer) 0))
#line 329 "c_util.m"
      {
#line 329 "c_util.m"
        MR_String backend_libs__c_util__Left_8;
#line 329 "c_util.m"
        MR_String backend_libs__c_util__Right_9;

#line 334 "c_util.m"
        {
#line 334 "c_util.m"
          mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__S_6, (MR_Integer) 160, &backend_libs__c_util__Left_8, &backend_libs__c_util__Right_9);
        }
#line 335 "c_util.m"
        {
#line 335 "c_util.m"
          backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__Left_8, (MR_Integer) 0);
        }
#line 336 "c_util.m"
        backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_9, (MR_String) "") == 0);
#line 338 "c_util.m"
        if (backend_libs__c_util__succeeded)
#line 336 "c_util.m"
          {
#line 336 "c_util.m"
          }
#line 338 "c_util.m"
        else
#line 339 "c_util.m"
          {
#line 339 "c_util.m"
            MR_String backend_libs__c_util__Left_25;
#line 339 "c_util.m"
            MR_String backend_libs__c_util__Right_26;

#line 339 "c_util.m"
            {
#line 339 "c_util.m"
              mercury__io__write_string_3_p_0((MR_String) "\" \"");
            }
#line 334 "c_util.m"
            {
#line 334 "c_util.m"
              mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Right_9, (MR_Integer) 160, &backend_libs__c_util__Left_25, &backend_libs__c_util__Right_26);
            }
#line 335 "c_util.m"
            {
#line 335 "c_util.m"
              backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__Left_25, (MR_Integer) 0);
            }
#line 336 "c_util.m"
            backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_26, (MR_String) "") == 0);
#line 338 "c_util.m"
            if (backend_libs__c_util__succeeded)
#line 336 "c_util.m"
              {
#line 336 "c_util.m"
              }
#line 338 "c_util.m"
            else
#line 339 "c_util.m"
              {
#line 339 "c_util.m"
                MR_String backend_libs__c_util__Left_40;
#line 339 "c_util.m"
                MR_String backend_libs__c_util__Right_41;

#line 339 "c_util.m"
                {
#line 339 "c_util.m"
                  mercury__io__write_string_3_p_0((MR_String) "\" \"");
                }
#line 334 "c_util.m"
                {
#line 334 "c_util.m"
                  mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Right_26, (MR_Integer) 160, &backend_libs__c_util__Left_40, &backend_libs__c_util__Right_41);
                }
#line 335 "c_util.m"
                {
#line 335 "c_util.m"
                  backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__Left_40, (MR_Integer) 0);
                }
#line 336 "c_util.m"
                backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_41, (MR_String) "") == 0);
#line 338 "c_util.m"
                if (backend_libs__c_util__succeeded)
#line 336 "c_util.m"
                  {
#line 336 "c_util.m"
                  }
#line 338 "c_util.m"
                else
#line 339 "c_util.m"
                  {
#line 339 "c_util.m"
                    {
#line 339 "c_util.m"
                      mercury__io__write_string_3_p_0((MR_String) "\" \"");
                    }
#line 340 "c_util.m"
                    {
#line 340 "c_util.m"
                      backend_libs__c_util__output_quoted_string_lang_4_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__Right_41);
#line 340 "c_util.m"
                      return;
                    }
#line 339 "c_util.m"
                  }
#line 339 "c_util.m"
              }
#line 339 "c_util.m"
          }
#line 329 "c_util.m"
      }
#line 329 "c_util.m"
    else
#line 345 "c_util.m"
      {
#line 346 "c_util.m"
        {
#line 346 "c_util.m"
          backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__S_6, (MR_Integer) 0);
#line 346 "c_util.m"
          return;
        }
#line 345 "c_util.m"
      }
#line 329 "c_util.m"
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
#line 329 "c_util.m"
  {
#line 329 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 346 "c_util.m"
    {
#line 346 "c_util.m"
      backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__S_6, (MR_Integer) 0);
#line 346 "c_util.m"
      return;
    }
#line 329 "c_util.m"
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
#line 329 "c_util.m"
  {
#line 329 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;

#line 346 "c_util.m"
    {
#line 346 "c_util.m"
      backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__S_6, (MR_Integer) 0);
#line 346 "c_util.m"
      return;
    }
#line 329 "c_util.m"
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
#line 329 "c_util.m"
  while (MR_TRUE)
#line 329 "c_util.m"
    {
#line 329 "c_util.m"
      /* tailcall optimized into a loop */
#line 329 "c_util.m"
      {
#line 329 "c_util.m"
        MR_bool backend_libs__c_util__succeeded;
#line 329 "c_util.m"
        MR_String backend_libs__c_util__Left_8;
#line 329 "c_util.m"
        MR_String backend_libs__c_util__Right_9;

#line 334 "c_util.m"
        {
#line 334 "c_util.m"
          mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__S_6, (MR_Integer) 160, &backend_libs__c_util__Left_8, &backend_libs__c_util__Right_9);
        }
#line 335 "c_util.m"
        {
#line 335 "c_util.m"
          backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__Left_8, (MR_Integer) 0);
        }
#line 336 "c_util.m"
        backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_9, (MR_String) "") == 0);
#line 338 "c_util.m"
        if (backend_libs__c_util__succeeded)
#line 336 "c_util.m"
          {
#line 336 "c_util.m"
          }
#line 338 "c_util.m"
        else
#line 339 "c_util.m"
          {
#line 339 "c_util.m"
            MR_String backend_libs__c_util__Left_25;
#line 339 "c_util.m"
            MR_String backend_libs__c_util__Right_26;

#line 339 "c_util.m"
            {
#line 339 "c_util.m"
              mercury__io__write_string_3_p_0((MR_String) "\" \"");
            }
#line 334 "c_util.m"
            {
#line 334 "c_util.m"
              mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Right_9, (MR_Integer) 160, &backend_libs__c_util__Left_25, &backend_libs__c_util__Right_26);
            }
#line 335 "c_util.m"
            {
#line 335 "c_util.m"
              backend_libs__c_util__do_output_quoted_string_5_p_0(backend_libs__c_util__Lang_5, backend_libs__c_util__Left_25, (MR_Integer) 0);
            }
#line 336 "c_util.m"
            backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_26, (MR_String) "") == 0);
#line 338 "c_util.m"
            if (backend_libs__c_util__succeeded)
#line 336 "c_util.m"
              {
#line 336 "c_util.m"
              }
#line 338 "c_util.m"
            else
#line 339 "c_util.m"
              {
#line 339 "c_util.m"
                {
#line 339 "c_util.m"
                  mercury__io__write_string_3_p_0((MR_String) "\" \"");
                }
#line 340 "c_util.m"
                /* direct tailcall eliminated */
#line 340 "c_util.m"
                {
#line 340 "c_util.m"
                  MR_String backend_libs__c_util__S__tmp_copy_6 = backend_libs__c_util__Right_26;

#line 340 "c_util.m"
                  backend_libs__c_util__S_6 = backend_libs__c_util__S__tmp_copy_6;
#line 340 "c_util.m"
                }
#line 340 "c_util.m"
                continue;
#line 339 "c_util.m"
              }
#line 339 "c_util.m"
          }
#line 329 "c_util.m"
      }
#line 329 "c_util.m"
      break;
#line 329 "c_util.m"
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
#line 322 "c_util.m"
  {
#line 322 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 322 "c_util.m"
    MR_String backend_libs__c_util__Left_15;
#line 322 "c_util.m"
    MR_String backend_libs__c_util__Right_16;

#line 334 "c_util.m"
    {
#line 334 "c_util.m"
      mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__S_4, (MR_Integer) 160, &backend_libs__c_util__Left_15, &backend_libs__c_util__Right_16);
    }
#line 335 "c_util.m"
    {
#line 335 "c_util.m"
      backend_libs__c_util__do_output_quoted_string_5_p_0((MR_Integer) 0, backend_libs__c_util__Left_15, (MR_Integer) 0);
    }
#line 336 "c_util.m"
    backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_16, (MR_String) "") == 0);
#line 338 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 336 "c_util.m"
      {
#line 336 "c_util.m"
      }
#line 338 "c_util.m"
    else
#line 339 "c_util.m"
      {
#line 339 "c_util.m"
        MR_String backend_libs__c_util__Left_30;
#line 339 "c_util.m"
        MR_String backend_libs__c_util__Right_31;

#line 339 "c_util.m"
        {
#line 339 "c_util.m"
          mercury__io__write_string_3_p_0((MR_String) "\" \"");
        }
#line 334 "c_util.m"
        {
#line 334 "c_util.m"
          mercury__string__split_by_codepoint_4_p_0(backend_libs__c_util__Right_16, (MR_Integer) 160, &backend_libs__c_util__Left_30, &backend_libs__c_util__Right_31);
        }
#line 335 "c_util.m"
        {
#line 335 "c_util.m"
          backend_libs__c_util__do_output_quoted_string_5_p_0((MR_Integer) 0, backend_libs__c_util__Left_30, (MR_Integer) 0);
        }
#line 336 "c_util.m"
        backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__Right_31, (MR_String) "") == 0);
#line 338 "c_util.m"
        if (backend_libs__c_util__succeeded)
#line 336 "c_util.m"
          {
#line 336 "c_util.m"
          }
#line 338 "c_util.m"
        else
#line 339 "c_util.m"
          {
#line 339 "c_util.m"
            {
#line 339 "c_util.m"
              mercury__io__write_string_3_p_0((MR_String) "\" \"");
            }
#line 340 "c_util.m"
            {
#line 340 "c_util.m"
              backend_libs__c_util__output_quoted_string_lang_4_p_0((MR_Integer) 0, backend_libs__c_util__Right_31);
#line 340 "c_util.m"
              return;
            }
#line 339 "c_util.m"
          }
#line 339 "c_util.m"
      }
#line 322 "c_util.m"
  }
#line 78 "c_util.m"
}

#line 60 "c_util.m"
void MR_CALL 
backend_libs__c_util__always_reset_line_num_2_p_0(void)
#line 60 "c_util.m"
{
#line 249 "c_util.m"
  {
#line 249 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 249 "c_util.m"
    MR_Integer backend_libs__c_util__Line_4;
#line 249 "c_util.m"
    MR_String backend_libs__c_util__File_5;

#line 252 "c_util.m"
    {
#line 252 "c_util.m"
      mercury__io__get_output_line_number_3_p_0(&backend_libs__c_util__Line_4);
    }
#line 253 "c_util.m"
    {
#line 253 "c_util.m"
      mercury__io__output_stream_name_3_p_0(&backend_libs__c_util__File_5);
    }
#line 255 "c_util.m"
    backend_libs__c_util__succeeded = (backend_libs__c_util__Line_4 > (MR_Integer) 0);
#line 255 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 255 "c_util.m"
      {
#line 256 "c_util.m"
        backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__File_5, (MR_String) "") == 0);
#line 256 "c_util.m"
        backend_libs__c_util__succeeded = !(backend_libs__c_util__succeeded);
#line 255 "c_util.m"
      }
#line 270 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 258 "c_util.m"
      {
#line 258 "c_util.m"
        MR_Word backend_libs__c_util__CanPrint_6;
#line 258 "c_util.m"
        MR_Integer backend_libs__c_util__V_14_14;

#line 258 "c_util.m"
        {
#line 258 "c_util.m"
          mercury__io__write_string_3_p_0((MR_String) "#line ");
        }
#line 259 "c_util.m"
        backend_libs__c_util__V_14_14 = (backend_libs__c_util__Line_4 + (MR_Integer) 1);
#line 259 "c_util.m"
        {
#line 259 "c_util.m"
          mercury__io__write_int_3_p_0(backend_libs__c_util__V_14_14);
        }
#line 260 "c_util.m"
        {
#line 260 "c_util.m"
          mercury__io__write_string_3_p_0((MR_String) " \"");
        }
#line 285 "c_util.m"
{
#define MR_PROC_LABEL backend_libs__c_util__always_reset_line_num_2_p_0

	MR_String Str;
	MR_Word CanPrintDirectly;

	Str =  backend_libs__c_util__File_5 ;
		{
#line 285 "c_util.m"
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
#line 4711 "backend_libs.c_util.c"

		;}
#undef MR_PROC_LABEL
	 backend_libs__c_util__CanPrint_6  = CanPrintDirectly;
#line 285 "c_util.m"
}
#line 265 "c_util.m"
        if ((backend_libs__c_util__CanPrint_6 == (MR_Integer) 0))
#line 267 "c_util.m"
          {
#line 267 "c_util.m"
            backend_libs__c_util__output_quoted_string_3_p_0(backend_libs__c_util__File_5);
          }
#line 265 "c_util.m"
        else
#line 264 "c_util.m"
          {
#line 264 "c_util.m"
            mercury__io__write_string_3_p_0(backend_libs__c_util__File_5);
          }
#line 269 "c_util.m"
        {
#line 269 "c_util.m"
          mercury__io__write_string_3_p_0((MR_String) "\"\n");
#line 269 "c_util.m"
          return;
        }
#line 258 "c_util.m"
      }
#line 270 "c_util.m"
    else
#line 269 "c_util.m"
      {
#line 269 "c_util.m"
      }
#line 249 "c_util.m"
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
#line 240 "c_util.m"
  {
#line 240 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 240 "c_util.m"
    MR_Word backend_libs__c_util__LineNumbers_6;

#line 241 "c_util.m"
    {
#line 241 "c_util.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__c_util__Globals_4, (MR_Integer) 133, &backend_libs__c_util__LineNumbers_6);
    }
#line 245 "c_util.m"
    if ((backend_libs__c_util__LineNumbers_6 == (MR_Integer) 0))
#line 246 "c_util.m"
      {
#line 246 "c_util.m"
      }
#line 245 "c_util.m"
    else
#line 244 "c_util.m"
      {
#line 244 "c_util.m"
        backend_libs__c_util__always_reset_line_num_2_p_0();
#line 244 "c_util.m"
        return;
      }
#line 240 "c_util.m"
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
#line 236 "c_util.m"
  {
#line 236 "c_util.m"
    MR_bool backend_libs__c_util__succeeded = (backend_libs__c_util__Line_6 > (MR_Integer) 0);

#line 221 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 221 "c_util.m"
      {
#line 222 "c_util.m"
        backend_libs__c_util__succeeded = (strcmp(backend_libs__c_util__File_5, (MR_String) "") == 0);
#line 222 "c_util.m"
        backend_libs__c_util__succeeded = !(backend_libs__c_util__succeeded);
#line 221 "c_util.m"
      }
#line 236 "c_util.m"
    if (backend_libs__c_util__succeeded)
#line 224 "c_util.m"
      {
#line 224 "c_util.m"
        MR_Word backend_libs__c_util__CanPrint_8;

#line 224 "c_util.m"
        {
#line 224 "c_util.m"
          mercury__io__write_string_3_p_0((MR_String) "#line ");
        }
#line 225 "c_util.m"
        {
#line 225 "c_util.m"
          mercury__io__write_int_3_p_0(backend_libs__c_util__Line_6);
        }
#line 226 "c_util.m"
        {
#line 226 "c_util.m"
          mercury__io__write_string_3_p_0((MR_String) " \"");
        }
#line 285 "c_util.m"
{
#define MR_PROC_LABEL backend_libs__c_util__always_set_line_num_4_p_0

	MR_String Str;
	MR_Word CanPrintDirectly;

	Str =  backend_libs__c_util__File_5 ;
		{
#line 285 "c_util.m"
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
#line 4878 "backend_libs.c_util.c"

		;}
#undef MR_PROC_LABEL
	 backend_libs__c_util__CanPrint_8  = CanPrintDirectly;
#line 285 "c_util.m"
}
#line 231 "c_util.m"
        if ((backend_libs__c_util__CanPrint_8 == (MR_Integer) 0))
#line 233 "c_util.m"
          {
#line 233 "c_util.m"
            backend_libs__c_util__output_quoted_string_3_p_0(backend_libs__c_util__File_5);
          }
#line 231 "c_util.m"
        else
#line 230 "c_util.m"
          {
#line 230 "c_util.m"
            mercury__io__write_string_3_p_0(backend_libs__c_util__File_5);
          }
#line 235 "c_util.m"
        {
#line 235 "c_util.m"
          mercury__io__write_string_3_p_0((MR_String) "\"\n");
#line 235 "c_util.m"
          return;
        }
#line 224 "c_util.m"
      }
#line 236 "c_util.m"
    else
#line 237 "c_util.m"
      {
#line 237 "c_util.m"
        backend_libs__c_util__always_reset_line_num_2_p_0();
#line 237 "c_util.m"
        return;
      }
#line 236 "c_util.m"
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
#line 210 "c_util.m"
  {
#line 210 "c_util.m"
    MR_bool backend_libs__c_util__succeeded;
#line 210 "c_util.m"
    MR_Word backend_libs__c_util__LineNumbers_10;

#line 211 "c_util.m"
    {
#line 211 "c_util.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__c_util__Globals_6, (MR_Integer) 133, &backend_libs__c_util__LineNumbers_10);
    }
#line 215 "c_util.m"
    if ((backend_libs__c_util__LineNumbers_10 == (MR_Integer) 0))
#line 216 "c_util.m"
      {
#line 216 "c_util.m"
      }
#line 215 "c_util.m"
    else
#line 214 "c_util.m"
      {
#line 214 "c_util.m"
        backend_libs__c_util__always_set_line_num_4_p_0(backend_libs__c_util__File_7, backend_libs__c_util__Line_8);
#line 214 "c_util.m"
        return;
      }
#line 210 "c_util.m"
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
